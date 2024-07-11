#include "global.h"
#include "trainer_pokemon_sprites.h"
#include "bg.h"
#include "constants/rgb.h"
#include "constants/songs.h"
#include "data.h"
#include "decompress.h"
#include "event_data.h"
#include "field_effect.h"
#include "gpu_regs.h"
#include "international_string_util.h"
#include "math_util.h"
#include "main.h"
#include "main_menu.h"
#include "menu.h"
#include "menu_helpers.h"
#include "list_menu.h"
#include "naming_screen.h"
#include "option_menu.h"
#include "overworld.h"
#include "palette.h"
#include "pokeball.h"
#include "pokedex.h"
#include "pokemon.h"
#include "random.h"
#include "rtc.h"
#include "save.h"
#include "scanline_effect.h"
#include "sound.h"
#include "sprite.h"
#include "strings.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "text_window.h"
#include "title_screen.h"
#include "window.h"
#include "malloc.h"
#include "util.h"

/*
 * Main menu state machine
 * -----------------------
 *
 * Entry point: CB2_InitMainMenu
 *
 * Note: States advance sequentially unless otherwise stated.
 *
 * CB2_InitMainMenu / CB2_ReinitMainMenu
 *  - Both of these states call InitMainMenu, which does all the work.
 *  - In the Reinit case, the init code will check if the user came from
 *    the options screen. If they did, then the options menu item is
 *    pre-selected.
 *
 * Task_MainMenuCheckSaveFile
 *  - Determines how many menu options to show based on whether
 *    the save file is Ok, empty, corrupted, etc.
 *  - If there was an error loading the save file, advance to
 *    Task_WaitForSaveFileErrorWindow.
 *  - If there were no errors, advance to Task_MainMenuCheckBattery.
 *
 * Task_WaitForSaveFileErrorWindow
 *  - Wait for the text to finish printing and then for the A button
 *    to be pressed.
 *
 * Task_MainMenuCheckBattery
 *  - If the battery is OK, advance to Task_DisplayMainMenu.
 *  - If the battery is dry, advance to Task_WaitForBatteryDryErrorWindow.
 *
 * Task_WaitForBatteryDryErrorWindow
 *  - Wait for the text to finish printing and then for the A button
 *    to be pressed.
 *
 * Task_DisplayMainWindow
 *  - Display the buttons to the user.
 *
 * Task_HighlightSelectedMainMenuItem
 *  - Update the UI to match the currently selected item.
 *
 * Task_HandleMainMenuInput
 *  - If A is pressed, advance to Task_HandleMainMenuAPressed.
 *  - If B is pressed, return to the title screen via CB2_InitTitleScreen.
 *  - If Up or Down is pressed, change the selection, then go back
 *    to Task_HighlightSelectedMainMenuItem.
 *
 * Task_HandleMainMenuAPressed
 *  - If the user selected New Game, advance to Task_NewGameBirchSpeech_Init.
 *  - If the user selected Continue, advance to CB2_ContinueSavedGame.
 *  - If the user selected the Options menu, advance to CB2_InitOptionMenu.
 *
 * Task_HandleMainMenuBPressed
 *  - Clean up the main menu and go back to CB2_InitTitleScreen.
 *
 *
 * Task_NewGameBirchSpeech_Init
 *  - Load the sprites for the intro speech, start playing music
 * Task_NewGameBirchSpeech_WaitToShowBirch
 *  - Spawn Task_NewGameBirchSpeech_FadeInTarget1OutTarget2
 *  - Spawn Task_NewGameBirchSpeech_FadePlatformOut
 *  - Both of these tasks destroy themselves when done.
 * Task_NewGameBirchSpeech_WaitForSpriteFadeInWelcome
 * Task_NewGameBirchSpeech_ThisIsAPokemon
 *  - When the text is done printing, spawns Task_NewGameBirchSpeechSub_InitPokeball
 * Task_NewGameBirchSpeech_MainSpeech
 * Task_NewGameBirchSpeech_AndYouAre
 * Task_NewGameBirchSpeech_StartBirchLotadPlatformFade
 * Task_NewGameBirchSpeech_StartBirchLotadPlatformFade
 * Task_NewGameBirchSpeech_SlidePlatformAway
 * Task_NewGameBirchSpeech_StartPlayerFadeIn
 * Task_NewGameBirchSpeech_WaitForPlayerFadeIn
 * Task_NewGameBirchSpeech_BoyOrGirl
 * Task_NewGameBirchSpeech_WaitToShowGenderMenu
 * Task_NewGameBirchSpeech_ChooseGender
 *  - Animates by advancing to Task_NewGameBirchSpeech_SlideOutOldGenderSprite
 *    whenever the player's selection changes.
 *  - Advances to Task_NewGameBirchSpeech_WhatsYourName when done.
 *
 * Task_NewGameBirchSpeech_SlideOutOldGenderSprite
 * Task_NewGameBirchSpeech_SlideInNewGenderSprite
 *  - Returns back to Task_NewGameBirchSpeech_ChooseGender.
 *
 * Task_NewGameBirchSpeech_WhatsYourName
 * Task_NewGameBirchSpeech_WaitForWhatsYourNameToPrint
 * Task_NewGameBirchSpeech_WaitPressBeforeNameChoice
 * Task_NewGameBirchSpeech_StartNamingScreen
 * C2_NamingScreen
 *  - Returns to CB2_NewGameBirchSpeech_ReturnFromNamingScreen when done
 * CB2_NewGameBirchSpeech_ReturnFromNamingScreen
 * Task_NewGameBirchSpeech_ReturnFromNamingScreenShowTextbox
 * Task_NewGameBirchSpeech_SoItsPlayerName
 * Task_NewGameBirchSpeech_CreateNameYesNo
 * Task_NewGameBirchSpeech_ProcessNameYesNoMenu
 *  - If confirmed, advance to Task_NewGameBirchSpeech_SlidePlatformAway2.
 *  - Otherwise, return to Task_NewGameBirchSpeech_BoyOrGirl.
 *
 * Task_NewGameBirchSpeech_SlidePlatformAway2
 * Task_NewGameBirchSpeech_ReshowBirchLotad
 * Task_NewGameBirchSpeech_WaitForSpriteFadeInAndTextPrinter
 * Task_NewGameBirchSpeech_AreYouReady
 * Task_NewGameBirchSpeech_ShrinkPlayer
 * Task_NewGameBirchSpeech_WaitForPlayerShrink
 * Task_NewGameBirchSpeech_FadePlayerToWhite
 * Task_NewGameBirchSpeech_Cleanup
 *  - Advances to CB2_NewGame.
 *
 * Task_NewGameBirchSpeechSub_InitPokeball
 *  - Advances to Task_NewGameBirchSpeechSub_WaitForLotad
 * Task_NewGameBirchSpeechSub_WaitForLotad
 *  - Destroys itself when done.
 */

#define OPTION_MENU_FLAG (1 << 15)

// Static type declarations

// Static RAM declarations

static EWRAM_DATA u16 sCurrItemAndOptionMenuCheck = 0;

static EWRAM_DATA u8 *sBirchSpeech_BgBuffer = NULL;

// Static ROM declarations

static u32 InitMainMenu(bool8);
static void Task_MainMenuCheckSaveFile(u8);
static void Task_MainMenuCheckBattery(u8);
static void Task_WaitForSaveFileErrorWindow(u8);
static void CreateMainMenuErrorWindow(const u8 *);
static void ClearMainMenuWindowTilemap(const struct WindowTemplate *);
static void Task_DisplayMainMenu(u8);
static void Task_WaitForBatteryDryErrorWindow(u8);
static void MainMenu_FormatSavegameText(void);
static void HighlightSelectedMainMenuItem(u8, u8);
static void Task_HandleMainMenuInput(u8);
static void Task_HandleMainMenuAPressed(u8);
static void Task_HandleMainMenuBPressed(u8);
static void Task_NewGameBirchSpeech_Init(u8);
static void AddBirchSpeechObjects(u8);
static void NewGameBirchSpeech_StartFadeInTarget1OutTarget2(u8);
static void Task_NewGameBirchSpeech_WaitForSpriteFadeInWelcome(u8);
static void Task_NewGameBirchSpeech_ThisIsAPokemon(u8);
static void Task_NewGameBirchSpeech_MainSpeech(u8);
static void Task_NewGameBirchSpeech_MainSpeech2(u8);
static void Task_NewGameBirchSpeech_WaitForIntroMon(u8);
static void Task_NewGameBirchSpeech_StartBirchPlatformFade(u8);
static void NewGameBirchSpeech_StartFadeOutTarget1InTarget2(u8);
static void Task_NewGameBirchSpeech_SlidePlatformAway(u8);
static void Task_NewGameBirchSpeech_BoyOrGirl(u8);
static void LoadMainMenuWindowFrameTiles(u8, u16);
static void DrawMainMenuWindowBorder(const struct WindowTemplate *, u16);
static void Task_HighlightSelectedMainMenuItem(u8);
static void Task_NewGameBirchSpeech_WaitToShowGenderMenu(u8);
static void Task_NewGameBirchSpeech_ChooseGender(u8);
static void Task_NewGameBirchSpeech_WhatsYourName(u8);
static void Task_NewGameBirchSpeech_WaitPressBeforeNameChoice(u8);
static void Task_NewGameBirchSpeech_WaitPressBeforeRivalNameChoice(u8);
static void Task_NewGameBirchSpeech_StartNamingScreen(u8);
static void Task_NewGameBirchSpeech_StartRivalNamingScreen(u8);
static void CB2_NewGameBirchSpeech_ReturnFromNamingScreen(void);
static void CB2_NewGameBirchSpeech_ReturnFromRivalNamingScreen(void);
static void Task_NewGameBirchSpeech_CreateNameYesNo(u8);
static void Task_NewGameBirchSpeech_ProcessNameYesNoMenu(u8);
void CreateYesNoMenuParameterized(u8, u8, u16, u16, u16, u8);
static void Task_NewGameBirchSpeech_SlidePlatformAway2(u8);
static void Task_NewGameBirchSpeech_AreYouReady(u8);
static void Task_NewGameBirchSpeech_ShrinkPlayer(u8);
static void Task_NewGameBirchSpeech_ShrinkBG2(u8);
static void Task_NewGameBirchSpeech_FadePlayerToBlack(u8);
static void Task_NewGameBirchSpeech_FadePlayerToWhite(u8);
static void Task_NewGameBirchSpeech_Cleanup(u8);
static void MainMenu_FormatSavegamePlayer(void);
static void MainMenu_FormatSavegamePokedex(void);
static void MainMenu_FormatSavegameTime(void);
static void MainMenu_FormatSavegameBadges(void);
static void LoadTrainerPic(u16 whichPic);
static void Task_NewGameBirchSpeech_WaitToFadeTextbox(u8 taskId);
static void NewGameBirchSpeech_CreateIntroMonSprite(u8);
static void Task_NewGameBirchSpeechSub_InitPokeBall(u8);
static void Task_BirchSpeech_ReturnIntroMonToPokeBall(u8);

extern const struct OamData gOamData_AffineOff_ObjBlend_32x32;

// .rodata

static const u16 sBirchSpeech_Background_Pals[] = INCBIN_U16("graphics/oak_speech/oak_speech_bg.gbapal");
static const u32 sBirchSpeech_Background_Tiles[] = INCBIN_U32("graphics/oak_speech/oak_speech_bg.4bpp.lz");
static const u32 sBirchSpeech_Background_Tilemap[] = INCBIN_U32("graphics/oak_speech/oak_speech_bg.bin.lz");


static const u16 sBirchSpeech_Platform_Pal[] = INCBIN_U16("graphics/oak_speech/platform.gbapal");
static const u32 sBirchSpeech_Platform_Gfx[] = INCBIN_U32("graphics/oak_speech/platform.4bpp.lz");

static const u16 sBirchSpeech_Player_Pal[] = INCBIN_U16("graphics/oak_speech/red/pal.gbapal");
static const u16 sBirchSpeech_Birch_Pal[] = INCBIN_U16("graphics/oak_speech/oak/pal.gbapal");
static const u32 sBirchSpeech_Player_Tiles[] = INCBIN_U32("graphics/oak_speech/red/ash.8bpp.lz");
static const u32 sBirchSpeech_Brendan_Tiles[] = INCBIN_U32("graphics/oak_speech/rival/pic.8bpp.lz");
static const u32 sBirchSpeech_May_Tiles[] = INCBIN_U32("graphics/oak_speech/leaf/pic.8bpp.lz");
static const u32 sBirchSpeech_Birch_Tiles[] = INCBIN_U32("graphics/oak_speech/oak/oak.8bpp.lz");

#define MENU_LEFT 3
#define MENU_TOP_WIN0 1
#define MENU_TOP_WIN1 5
#define MENU_TOP_WIN2 1
#define MENU_TOP_WIN3 13
#define MENU_TOP_WIN4 17
#define MENU_WIDTH 24
#define MENU_HEIGHT_WIN0 2
#define MENU_HEIGHT_WIN1 2
#define MENU_HEIGHT_WIN2 10
#define MENU_HEIGHT_WIN3 2
#define MENU_HEIGHT_WIN4 2

#define MENU_LEFT_ERROR 3
#define MENU_TOP_ERROR 15
#define MENU_WIDTH_ERROR 24
#define MENU_HEIGHT_ERROR 4

#define MENU_SHADOW_PADDING 2
#define MENU_ERROR_SHADOW_PADDING 3

#define MENU_WIN_HCOORDS WIN_RANGE(((MENU_LEFT - 1) * 8) + MENU_SHADOW_PADDING, (MENU_LEFT + MENU_WIDTH + 1) * 8 - MENU_SHADOW_PADDING)
#define MENU_WIN_VCOORDS(n) WIN_RANGE(((MENU_TOP_WIN##n - 1) * 8) + MENU_SHADOW_PADDING, (MENU_TOP_WIN##n + MENU_HEIGHT_WIN##n + 1) * 8 - MENU_SHADOW_PADDING)
#define MENU_WIN_HCOORDS_ERROR(n) WIN_RANGE(((MENU_LEFT_##n - 1) * 8) + MENU_ERROR_SHADOW_PADDING, (MENU_LEFT_##n + MENU_WIDTH_##n + 1) * 8 - MENU_ERROR_SHADOW_PADDING)
#define MENU_WIN_VCOORDS_ERROR(n) WIN_RANGE(((MENU_TOP_##n - 1) * 8) + MENU_ERROR_SHADOW_PADDING, (MENU_TOP_##n + MENU_HEIGHT_##n + 1) * 8 - MENU_ERROR_SHADOW_PADDING)

static const struct WindowTemplate sWindowTemplates_MainMenu[] =
{
    // No saved game
    // NEW GAME
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT,
        .tilemapTop = MENU_TOP_WIN0,
        .width = MENU_WIDTH,
        .height = MENU_HEIGHT_WIN0,
        .paletteNum = 15,
        .baseBlock = 1
    },
    // OPTIONS
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT,
        .tilemapTop = MENU_TOP_WIN1,
        .width = MENU_WIDTH,
        .height = MENU_HEIGHT_WIN1,
        .paletteNum = 15,
        .baseBlock = 0x35
    },
    // Has saved game
    // CONTINUE
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT,
        .tilemapTop = MENU_TOP_WIN2,
        .width = MENU_WIDTH,
        .height = MENU_HEIGHT_WIN2,
        .paletteNum = 15,
        .baseBlock = 1
    },
    // NEW GAME
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT,
        .tilemapTop = MENU_TOP_WIN3,
        .width = MENU_WIDTH,
        .height = MENU_HEIGHT_WIN3,
        .paletteNum = 15,
        .baseBlock = 0xF1
    },
    // OPTION
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT,
        .tilemapTop = MENU_TOP_WIN4,
        .width = MENU_WIDTH,
        .height = MENU_HEIGHT_WIN4,
        .paletteNum = 15,
        .baseBlock = 0x121
    },
    // Error message window
    {
        .bg = 0,
        .tilemapLeft = MENU_LEFT_ERROR,
        .tilemapTop = MENU_TOP_ERROR,
        .width = MENU_WIDTH_ERROR,
        .height = MENU_HEIGHT_ERROR,
        .paletteNum = 15,
        .baseBlock = 1
    },
    DUMMY_WIN_TEMPLATE
};

enum
{
    WIN_INTRO_TEXTBOX,
    WIN_INTRO_BOYGIRL,
    WIN_INTRO_YESNO,
    NUM_INTRO_WINDOWS,
};

static const struct WindowTemplate sNewGameBirchSpeechTextWindows[] =
{
    [WIN_INTRO_TEXTBOX] =
    {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 4,
        .width = 28,
        .height = 15,
        .paletteNum = 15,
        .baseBlock = 1
    },
    [WIN_INTRO_BOYGIRL] =
    {
        .bg = 0,
        .tilemapLeft = 18,
        .tilemapTop = 9,
        .width = 9,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x6D
    },
    [WIN_INTRO_YESNO] =
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 2,
        .width = 6,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x85
    },
    DUMMY_WIN_TEMPLATE
};

static const u16 sMainMenuTextPal[] = INCBIN_U16("graphics/interface/main_menu_text.gbapal");
static const u16 sMainMenuBgPal[] = INCBIN_U16("graphics/interface/main_menu_bg.gbapal");

static const u8 sTextColor_Headers[] = {TEXT_DYNAMIC_COLOR_1, TEXT_DYNAMIC_COLOR_2, TEXT_DYNAMIC_COLOR_3};
static const u8 sTextColor_MenuInfo[] = {TEXT_DYNAMIC_COLOR_1, TEXT_COLOR_WHITE, TEXT_DYNAMIC_COLOR_3};

static const struct BgTemplate sMainMenuBgTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 7,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 3,
        .baseTile = 0
    }
};

static const struct BgTemplate sBgTemplates[] = {
    {
        .bg = 0,
        .charBaseIndex = 2,
        .mapBaseIndex = 31,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 0,
        .baseTile = 0
    },
    {
        .bg = 1,
        .charBaseIndex = 0,
        .mapBaseIndex = 30,
        .screenSize = 0,
        .paletteMode = 0,
        .priority = 2,
        .baseTile = 0
    },
    {
        .bg = 2,
        .charBaseIndex = 0,
        .mapBaseIndex = 28,
        .screenSize = 1,
        .paletteMode = 1,
        .priority = 1,
        .baseTile = 0
    }
};

static const struct MenuAction sMenuActions_Gender[] = {
    {gText_BirchBoy, {NULL}},
    {gText_BirchGirl, {NULL}}
};

static const u8 *const sMalePresetNames[] = {
    gText_DefaultNameStu,
    gText_DefaultNameMilton,
    gText_DefaultNameTom,
    gText_DefaultNameKenny,
    gText_DefaultNameReid,
    gText_DefaultNameJude,
    gText_DefaultNameJaxson,
    gText_DefaultNameEaston,
    gText_DefaultNameWalker,
    gText_DefaultNameTeru,
    gText_DefaultNameJohnny,
    gText_DefaultNameBrett,
    gText_DefaultNameSeth,
    gText_DefaultNameTerry,
    gText_DefaultNameCasey,
    gText_DefaultNameDarren,
    gText_DefaultNameLandon,
    gText_DefaultNameCollin,
    gText_DefaultNameStanley,
    gText_DefaultNameQuincy
};

static const u8 *const sFemalePresetNames[] = {
    gText_DefaultNameKimmy,
    gText_DefaultNameTiara,
    gText_DefaultNameBella,
    gText_DefaultNameJayla,
    gText_DefaultNameAllie,
    gText_DefaultNameLianna,
    gText_DefaultNameSara,
    gText_DefaultNameMonica,
    gText_DefaultNameCamila,
    gText_DefaultNameAubree,
    gText_DefaultNameRuthie,
    gText_DefaultNameHazel,
    gText_DefaultNameNadine,
    gText_DefaultNameTanja,
    gText_DefaultNameYasmin,
    gText_DefaultNameNicola,
    gText_DefaultNameLillie,
    gText_DefaultNameTerra,
    gText_DefaultNameLucy,
    gText_DefaultNameHalie
};

#define GFX_TAG_PLATFORM     0x1000
#define PAL_TAG_PLATFORM     0x1000

static const struct CompressedSpriteSheet sBirchSpeech_Platform_SpriteSheet = 
{
    .data = sBirchSpeech_Platform_Gfx,
    .size = 0x600,
    .tag = GFX_TAG_PLATFORM
};

static const struct SpritePalette sBirchSpeech_Platform_SpritePalette = 
{
    .data = sBirchSpeech_Platform_Pal,
    .tag = PAL_TAG_PLATFORM
};

static const union AnimCmd sBirchSpeech_PlatformLeft_Anim[] = 
{
    ANIMCMD_FRAME(0, 0),
    ANIMCMD_END
};

static const union AnimCmd sBirchSpeech_PlatformMiddle_Anim[] = 
{
    ANIMCMD_FRAME(16, 0),
    ANIMCMD_END
};

static const union AnimCmd sBirchSpeech_PlatformRight_Anim[] = 
{
    ANIMCMD_FRAME(32, 0),
    ANIMCMD_END
};

enum
{
    PLATFORM_LEFT,
    PLATFORM_MIDDLE,
    PLATFORM_RIGHT,
    NUM_PLATFORM_SPRITES,
};

static const union AnimCmd *const sBirchSpeech_Platform_Anims[NUM_PLATFORM_SPRITES] = 
{
    [PLATFORM_LEFT] = sBirchSpeech_PlatformLeft_Anim,
    [PLATFORM_MIDDLE] = sBirchSpeech_PlatformMiddle_Anim,
    [PLATFORM_RIGHT] = sBirchSpeech_PlatformRight_Anim,
};

static const struct SpriteTemplate sBirchSpeech_Platform_SpriteTemplate = 
{
    .tileTag = GFX_TAG_PLATFORM,
    .paletteTag = PAL_TAG_PLATFORM,
    .oam = &gOamData_AffineOff_ObjBlend_32x32,
    .anims = sBirchSpeech_Platform_Anims,
    .images = NULL,
    .affineAnims = gDummySpriteAffineAnimTable,
    .callback = SpriteCallbackDummy
};

// .text

enum
{
    HAS_NO_SAVED_GAME,  //NEW GAME, OPTION
    HAS_SAVED_GAME,     //CONTINUE, NEW GAME, OPTION
};

enum
{
    ACTION_NEW_GAME,
    ACTION_CONTINUE,
    ACTION_OPTION
};

#define MAIN_MENU_BORDER_TILE   0x1D5
#define MAIN_MENU_STD_BORDER_TILE  0x1DE

static void CB2_MainMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_MainMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

void CB2_InitMainMenu(void)
{
    InitMainMenu(FALSE);
}

void CB2_ReinitMainMenu(void)
{
    InitMainMenu(TRUE);
}

static u32 InitMainMenu(bool8 returningFromOptionsMenu)
{
    SetVBlankCallback(NULL);

    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);

    DmaFill16(3, 0, (void *)VRAM, VRAM_SIZE);
    DmaFill32(3, 0, (void *)OAM, OAM_SIZE);
    DmaFill16(3, 0, (void *)(PLTT + 2), PLTT_SIZE - 2);

    ResetPaletteFade();
    LoadPalette(sMainMenuBgPal, 0, 32);
    LoadPalette(sMainMenuTextPal, 0xF0, 32);
    ScanlineEffect_Stop();
    ResetTasks();
    ResetSpriteData();
    FreeAllSpritePalettes();
    if (returningFromOptionsMenu)
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK); // fade to black
    else
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_WHITEALPHA); // fade to white
    ResetBgsAndClearDma3BusyFlags(0);
    InitBgsFromTemplates(0, sMainMenuBgTemplates, ARRAY_COUNT(sMainMenuBgTemplates));
    ChangeBgX(0, 0, BG_COORD_SET);
    ChangeBgY(0, 0, BG_COORD_SET);
    ChangeBgX(1, 0, BG_COORD_SET);
    ChangeBgY(1, 0, BG_COORD_SET);
    InitWindows(sWindowTemplates_MainMenu);
    DeactivateAllTextPrinters();
    LoadMainMenuWindowFrameTiles(0, MAIN_MENU_BORDER_TILE);
    LoadUserWindowBorderGfx(5, MAIN_MENU_STD_BORDER_TILE, 0xE0);

    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);

    EnableInterrupts(1);
    SetVBlankCallback(VBlankCB_MainMenu);
    SetMainCallback2(CB2_MainMenu);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_WIN0_ON | DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    ShowBg(0);
    HideBg(1);
    CreateTask(Task_MainMenuCheckSaveFile, 0);

    return 0;
}

#define tMenuType data[0]
#define tCurrItem data[1]
#define tItemCount data[12]

static void Task_MainMenuCheckSaveFile(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (!gPaletteFade.active)
    {
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT1_ALL | BLDCNT_EFFECT_DARKEN);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 0));
        SetGpuReg(REG_OFFSET_BLDY, 7);

        switch (gSaveFileStatus)
        {
            case SAVE_STATUS_OK:
                tMenuType = HAS_SAVED_GAME;
                gTasks[taskId].func = Task_MainMenuCheckBattery;
                break;
            case SAVE_STATUS_CORRUPT:
                CreateMainMenuErrorWindow(gText_SaveFileErased);
                tMenuType = HAS_NO_SAVED_GAME;
                gTasks[taskId].func = Task_WaitForSaveFileErrorWindow;
                break;
            case SAVE_STATUS_ERROR:
                CreateMainMenuErrorWindow(gText_SaveFileCorrupted);
                gTasks[taskId].func = Task_WaitForSaveFileErrorWindow;
                tMenuType = HAS_SAVED_GAME;
                break;
            case SAVE_STATUS_EMPTY:
            default:
                tMenuType = HAS_NO_SAVED_GAME;
                gTasks[taskId].func = Task_MainMenuCheckBattery;
                break;
            case SAVE_STATUS_NO_FLASH:
                CreateMainMenuErrorWindow(gJPText_No1MSubCircuit);
                tMenuType = HAS_NO_SAVED_GAME;
                gTasks[taskId].func = Task_WaitForSaveFileErrorWindow;
                break;
        }
        if (sCurrItemAndOptionMenuCheck & OPTION_MENU_FLAG)   // are we returning from the options menu?
        {
            sCurrItemAndOptionMenuCheck = tMenuType + 1;
        }
        sCurrItemAndOptionMenuCheck &= OPTION_MENU_FLAG;  // turn off the "returning from options menu" flag
        tCurrItem = sCurrItemAndOptionMenuCheck;
    }
}

static void Task_WaitForSaveFileErrorWindow(u8 taskId)
{
    RunTextPrinters();
    if (!IsTextPrinterActive(5) && (JOY_NEW(A_BUTTON)))
    {
        ClearWindowTilemap(5);
        ClearMainMenuWindowTilemap(&sWindowTemplates_MainMenu[5]);
        gTasks[taskId].func = Task_MainMenuCheckBattery;
    }
}

static void Task_MainMenuCheckBattery(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_ALL);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 0));
        SetGpuReg(REG_OFFSET_BLDY, 7);

        if (!(RtcGetErrorStatus() & RTC_ERR_FLAG_MASK))
        {
            gTasks[taskId].func = Task_DisplayMainMenu;
        }
        else
        {
            CreateMainMenuErrorWindow(gText_BatteryRunDry);
            gTasks[taskId].func = Task_WaitForBatteryDryErrorWindow;
        }
    }
}

static void Task_WaitForBatteryDryErrorWindow(u8 taskId)
{
    RunTextPrinters();
    if (!IsTextPrinterActive(5) && (JOY_NEW(A_BUTTON)))
    {
        ClearWindowTilemap(5);
        ClearMainMenuWindowTilemap(&sWindowTemplates_MainMenu[5]);
        gTasks[taskId].func = Task_DisplayMainMenu;
    }
}

static void Task_DisplayMainMenu(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        u16 palette;

        SetGpuReg(REG_OFFSET_WIN0H, 0);
        SetGpuReg(REG_OFFSET_WIN0V, 0);
        SetGpuReg(REG_OFFSET_WININ, WININ_WIN0_BG0 | WININ_WIN0_OBJ);
        SetGpuReg(REG_OFFSET_WINOUT, WINOUT_WIN01_BG0 | WINOUT_WIN01_OBJ | WINOUT_WIN01_CLR);
        SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_EFFECT_DARKEN | BLDCNT_TGT1_ALL);
        SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 0));
        SetGpuReg(REG_OFFSET_BLDY, 7);

        palette = RGB_BLACK;
        LoadPalette(&palette, 254, 2);

        palette = RGB_WHITE;
        LoadPalette(&palette, 250, 2);

        palette = RGB(12, 12, 12);
        LoadPalette(&palette, 251, 2);

        palette = RGB(26, 26, 25);
        LoadPalette(&palette, 252, 2);

        // Note: If there is no save file, the save block is zeroed out,
        // so the default gender is MALE.
        if (gSaveBlock2Ptr->playerGender != MALE)
        {
            palette = RGB(31, 3, 21);
        }
        else
        {
            palette = RGB(4, 16, 31);
        }
        LoadPalette(&palette, 241, 2);

        switch (gTasks[taskId].tMenuType)
        {
            case HAS_NO_SAVED_GAME:
            default:
                FillWindowPixelBuffer(0, PIXEL_FILL(0xA));
                FillWindowPixelBuffer(1, PIXEL_FILL(0xA));
                AddTextPrinterParameterized3(0, FONT_NORMAL, 2, 2, sTextColor_Headers, TEXT_SKIP_DRAW, gText_MainMenuNewGame);
                AddTextPrinterParameterized3(1, FONT_NORMAL, 2, 2, sTextColor_Headers, TEXT_SKIP_DRAW, gText_MainMenuOption);
                PutWindowTilemap(0);
                PutWindowTilemap(1);
                CopyWindowToVram(0, COPYWIN_GFX);
                CopyWindowToVram(1, COPYWIN_GFX);
                DrawMainMenuWindowBorder(&sWindowTemplates_MainMenu[0], MAIN_MENU_BORDER_TILE);
                DrawMainMenuWindowBorder(&sWindowTemplates_MainMenu[1], MAIN_MENU_BORDER_TILE);
                break;
            case HAS_SAVED_GAME:
                FillWindowPixelBuffer(2, PIXEL_FILL(0xA));
                FillWindowPixelBuffer(3, PIXEL_FILL(0xA));
                FillWindowPixelBuffer(4, PIXEL_FILL(0xA));
                AddTextPrinterParameterized3(2, FONT_NORMAL, 2, 2, sTextColor_Headers, TEXT_SKIP_DRAW, gText_MainMenuContinue);
                AddTextPrinterParameterized3(3, FONT_NORMAL, 2, 2, sTextColor_Headers, TEXT_SKIP_DRAW, gText_MainMenuNewGame);
                AddTextPrinterParameterized3(4, FONT_NORMAL, 2, 2, sTextColor_Headers, TEXT_SKIP_DRAW, gText_MainMenuOption);
                MainMenu_FormatSavegameText();
                PutWindowTilemap(2);
                PutWindowTilemap(3);
                PutWindowTilemap(4);
                CopyWindowToVram(2, COPYWIN_GFX);
                CopyWindowToVram(3, COPYWIN_GFX);
                CopyWindowToVram(4, COPYWIN_GFX);
                DrawMainMenuWindowBorder(&sWindowTemplates_MainMenu[2], MAIN_MENU_BORDER_TILE);
                DrawMainMenuWindowBorder(&sWindowTemplates_MainMenu[3], MAIN_MENU_BORDER_TILE);
                DrawMainMenuWindowBorder(&sWindowTemplates_MainMenu[4], MAIN_MENU_BORDER_TILE);
                break;
        }
        gTasks[taskId].func = Task_HighlightSelectedMainMenuItem;
    }
}

static void Task_HighlightSelectedMainMenuItem(u8 taskId)
{
    HighlightSelectedMainMenuItem(gTasks[taskId].tMenuType, gTasks[taskId].tCurrItem);
    gTasks[taskId].func = Task_HandleMainMenuInput;
}

static bool8 HandleMainMenuInput(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_BLACK);
        gTasks[taskId].func = Task_HandleMainMenuAPressed;
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 0x10, RGB_WHITEALPHA);
        SetGpuReg(REG_OFFSET_WIN0H, WIN_RANGE(0, DISPLAY_WIDTH));
        SetGpuReg(REG_OFFSET_WIN0V, WIN_RANGE(0, DISPLAY_HEIGHT));
        gTasks[taskId].func = Task_HandleMainMenuBPressed;
    }
    else if ((JOY_NEW(DPAD_UP)) && tCurrItem)
    {
        sCurrItemAndOptionMenuCheck = tCurrItem--;
        return TRUE;
    }
    else if ((JOY_NEW(DPAD_DOWN)) && tCurrItem < 2)
    {
        sCurrItemAndOptionMenuCheck = tCurrItem++;
        return TRUE;
    }
    return FALSE;
}

static void Task_HandleMainMenuInput(u8 taskId)
{
    if (HandleMainMenuInput(taskId))
        gTasks[taskId].func = Task_HighlightSelectedMainMenuItem;
}

static void Task_HandleMainMenuAPressed(u8 taskId)
{
    u8 action;

    if (!gPaletteFade.active)
    {
        ClearStdWindowAndFrame(0, TRUE);
        ClearStdWindowAndFrame(1, TRUE);
        ClearStdWindowAndFrame(2, TRUE);
        ClearStdWindowAndFrame(3, TRUE);
        ClearStdWindowAndFrame(4, TRUE);
        ClearStdWindowAndFrame(5, TRUE);

        ChangeBgY(0, 0, BG_COORD_SET);
        ChangeBgY(1, 0, BG_COORD_SET);
        switch (gTasks[taskId].tMenuType)
        {
            case HAS_NO_SAVED_GAME:
            default:
                switch (gTasks[taskId].tCurrItem)
                {
                    case 0:
                    default:
                        action = ACTION_NEW_GAME;
                        break;
                    case 1:
                        action = ACTION_OPTION;
                        break;
                }
                break;
            case HAS_SAVED_GAME:
                switch (gTasks[taskId].tCurrItem)
                {
                    case 0:
                    default:
                        action = ACTION_CONTINUE;
                        break;
                    case 1:
                        action = ACTION_NEW_GAME;
                        break;
                    case 2:
                        action = ACTION_OPTION;
                        break;
                }
                break;
        }
        switch (action)
        {
            case ACTION_NEW_GAME:
            default:
                // gExitStairsMovementDisabled = FALSE;
                gPlttBufferUnfaded[0] = RGB_BLACK;
                gPlttBufferFaded[0] = RGB_BLACK;
                gTasks[taskId].func = Task_NewGameBirchSpeech_Init;
                break;
            case ACTION_CONTINUE:
                gPlttBufferUnfaded[0] = RGB_BLACK;
                gPlttBufferFaded[0] = RGB_BLACK;
                // gExitStairsMovementDisabled = FALSE;
                SetMainCallback2(CB2_ContinueSavedGame);
                DestroyTask(taskId);
                break;
            case ACTION_OPTION:
                gMain.savedCallback = CB2_ReinitMainMenu;
                SetMainCallback2(CB2_InitOptionMenu);
                DestroyTask(taskId);
                break;
        }
        FreeAllWindowBuffers();
        if (action == ACTION_OPTION)
            sCurrItemAndOptionMenuCheck |= OPTION_MENU_FLAG;  // entering the options menu
        else
            sCurrItemAndOptionMenuCheck = 0;
    }
}

static void Task_HandleMainMenuBPressed(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        sCurrItemAndOptionMenuCheck = 0;
        FreeAllWindowBuffers();
        SetMainCallback2(CB2_InitTitleScreen);
        DestroyTask(taskId);
    }
}

#undef tMenuType
#undef tCurrItem
#undef tItemCount

static void HighlightSelectedMainMenuItem(u8 menuType, u8 selectedMenuItem)
{
    SetGpuReg(REG_OFFSET_WIN0H, MENU_WIN_HCOORDS);

    switch (menuType)
    {
        case HAS_NO_SAVED_GAME:
        default:
            switch (selectedMenuItem)
            {
                case 0:
                default:
                    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS(0));
                    break;
                case 1:
                    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS(1));
                    break;
            }
            break;
        case HAS_SAVED_GAME:
            switch (selectedMenuItem)
            {
                case 0:
                default:
                    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS(2));
                    break;
                case 1:
                    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS(3));
                    break;
                case 2:
                    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS(4));
                    break;
            }
            break;
    }
}

#define INTRO_SPECIES SPECIES_PIKACHU

enum {
    MALE_PLAYER_PIC,
    FEMALE_PLAYER_PIC,
    BIRCH_PIC
};

static void BirchSpeech_InitBg(void)
{
    ResetBgsAndClearDma3BusyFlags(0);
    SetGpuReg(REG_OFFSET_DISPCNT, 0);
    SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_ON | DISPCNT_OBJ_1D_MAP);
    InitBgsFromTemplates(1, sBgTemplates, ARRAY_COUNT(sBgTemplates));
    SetBgTilemapBuffer(2, sBirchSpeech_BgBuffer);
    SetVBlankCallback(NULL);
    ResetPaletteFade();
    LZ77UnCompVram(sBirchSpeech_Background_Tiles, (void *)VRAM);
    LZ77UnCompVram(sBirchSpeech_Background_Tilemap, (void *)(BG_SCREEN_ADDR(30)));
    LoadPalette(sBirchSpeech_Background_Pals, 0, 64);
    ScanlineEffect_Stop();
    ResetSpriteData();
    FreeAllSpritePalettes();
    ResetAllPicSprites();
    SetGpuReg(REG_OFFSET_WIN0H, 0);
    SetGpuReg(REG_OFFSET_WIN0V, 0);
    SetGpuReg(REG_OFFSET_WININ, 0);
    SetGpuReg(REG_OFFSET_WINOUT, 0);
    SetGpuReg(REG_OFFSET_BLDCNT, 0);
    SetGpuReg(REG_OFFSET_BLDALPHA, 0);
    SetGpuReg(REG_OFFSET_BLDY, 0);
    SetVBlankCallback(VBlankCB_MainMenu);
    SetMainCallback2(CB2_MainMenu);
    gPlttBufferUnfaded[0] = RGB_BLACK;
    gPlttBufferFaded[0] = RGB_BLACK;
    InitStandardTextBoxWindows();
    InitTextBoxGfxAndPrinters();
}

#define tPokeBallSpriteId data[0]
#define tBG1HOFS data[0] // re-use
#define tIsDoneFadingSprites data[0] // re-use
#define tSpriteTimer data[1]
#define tTimer data[2]
#define tIntroMonSpriteId data[3]
#define tPlatformSpriteId(i) data[4 + i] // The platform is built of three sprites,
                          // data[5]     // so these are used to hold their sprite IDs
                          // data[6]     //

void Task_NewGameBirchSpeech_Init(u8 taskId)
{
    sBirchSpeech_BgBuffer = AllocZeroed(0x400);
    BirchSpeech_InitBg();
    ResetAllBgsCoordinates();
    NewGameBirchSpeech_CreateIntroMonSprite(taskId);
    AddBirchSpeechObjects(taskId);
    LoadTrainerPic(BIRCH_PIC);
    BeginNormalPaletteFade(PALETTES_ALL, 4, 16, 0, RGB_BLACK);
    gTasks[taskId].func = Task_NewGameBirchSpeech_WaitForSpriteFadeInWelcome;
    gTasks[taskId].tTimer = 80;
    PlayBGM(MUS_ROUTE122);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static void LoadTrainerPic(u16 whichPic)
{
    u8 *buffer;
    u32 i;

    switch (whichPic)
    {
    case MALE_PLAYER_PIC:
        LoadPalette(sBirchSpeech_Player_Pal, 0x40, 2 * PLTT_SIZE_4BPP);
        LZ77UnCompVram(sBirchSpeech_Player_Tiles, (void *)VRAM + 0x600);
        break;
    case FEMALE_PLAYER_PIC:
        LoadPalette(sBirchSpeech_Player_Pal, 0x40, sizeof(sBirchSpeech_Player_Pal));
        LZ77UnCompVram(sBirchSpeech_May_Tiles, (void *)VRAM + 0x600);
        break;
    case BIRCH_PIC:
        LoadPalette(sBirchSpeech_Birch_Pal, 0x60, 2 * PLTT_SIZE_4BPP);
        LZ77UnCompVram(sBirchSpeech_Birch_Tiles, (void *)VRAM + 0x600);
        break;
    default:
        return;
    }

    buffer = AllocZeroed(0x60);
    for (i = 0; i < 0x60; i++)
        buffer[i] = i;
    FillBgTilemapBufferRect(2, 0, 0, 0, 32, 32, 16);
    CopyRectToBgTilemapBufferRect(2, buffer, 0, 0, 8, 12, 11, 2, 8, 12, 16, 24, 0);
    CopyBgTilemapBufferToVram(2);
    FREE_AND_SET_NULL(buffer);
}

static void BirchSpeechPrintMessage(const u8 *str)
{
    DrawDialogueFrame(WIN_INTRO_TEXTBOX, TRUE);
    StringExpandPlaceholders(gStringVar4, str);
    AddTextPrinterForMessage(TRUE);
}

static void Task_NewGameBirchSpeech_WaitForSpriteFadeInWelcome(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            BirchSpeechPrintMessage(gText_Birch_Welcome);
            gTasks[taskId].func = Task_NewGameBirchSpeechSub_InitPokeBall;
        }
    }
}

static void Task_NewGameBirchSpeech_ThisIsAPokemon(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        StringExpandPlaceholders(gStringVar4, gText_Birch_MainSpeech);
        AddTextPrinterForMessage(TRUE);
        gTasks[taskId].tTimer = 30;
        gTasks[taskId].func = Task_NewGameBirchSpeech_MainSpeech;
    }
}

static void Task_NewGameBirchSpeechSub_InitPokeBall(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        u8 spriteId = gTasks[taskId].tIntroMonSpriteId;

        CreatePokeballSpriteToReleaseMon(spriteId, gSprites[spriteId].oam.paletteNum, 112, 58, 0, 0, 32, PALETTES_BG, SPECIES_PIKACHU);
        gTasks[taskId].func = Task_NewGameBirchSpeech_WaitForIntroMon;
        gTasks[taskId].tTimer = 0;
    }
}

static void Task_NewGameBirchSpeech_WaitForIntroMon(u8 taskId)
{
    if (IsCryFinished())
    {
        if (gTasks[taskId].tTimer >= 96)
            gTasks[taskId].func = Task_NewGameBirchSpeech_MainSpeech;
    }
    if (gTasks[taskId].tTimer < 0x4000)
    {
        gTasks[taskId].tTimer++;
        if (gTasks[taskId].tTimer == 32)
        {
            BirchSpeechPrintMessage(gText_ThisIsAPokemon);
            PlayCry_Normal(INTRO_SPECIES, 0);
        }
    }
    RunTextPrinters();
}

static void Task_NewGameBirchSpeech_MainSpeech(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        StringExpandPlaceholders(gStringVar4, gText_Birch_MainSpeech);
        AddTextPrinterForMessage(TRUE);
        FillWindowPixelBuffer(0, PIXEL_FILL(1));
        gTasks[taskId].func = Task_BirchSpeech_ReturnIntroMonToPokeBall;
    }
}

static void Task_BirchSpeech_ReturnIntroMonToPokeBall(u8 taskId)
{
    u8 spriteId;
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        ClearDialogWindowAndFrame(WIN_INTRO_TEXTBOX, TRUE);
        spriteId = gTasks[taskId].tIntroMonSpriteId;
        gTasks[taskId].tPokeBallSpriteId = CreateTradePokeballSprite(spriteId, gSprites[spriteId].oam.paletteNum, 98, 48, 1, 0, 32, 0xFFFF1F3F);
        gTasks[taskId].tSpriteTimer = 48;
        gTasks[taskId].tTimer = 64;
        gTasks[taskId].func = Task_NewGameBirchSpeech_MainSpeech2;
    }
}

static void Task_NewGameBirchSpeech_MainSpeech2(u8 taskId)
{
    if (gTasks[taskId].tTimer != 0)
    {
        if (gTasks[taskId].tTimer < 24)
            gSprites[gTasks[taskId].tIntroMonSpriteId].y--;
        gTasks[taskId].tTimer--;
    }
    else
    {
        if (gTasks[taskId].tSpriteTimer == 48)
        {
            FreeAndDestroyMonPicSprite(gTasks[taskId].tIntroMonSpriteId);
            DestroySprite(&gSprites[gTasks[taskId].tPokeBallSpriteId]);
        }
        if (gTasks[taskId].tSpriteTimer != 0)
        {
            gTasks[taskId].tSpriteTimer--;
        }
        else
        {
            BirchSpeechPrintMessage(gText_Birch_WhatsYourName);
            gTasks[taskId].func = Task_NewGameBirchSpeech_StartBirchPlatformFade;
        }
    }
}

static void Task_NewGameBirchSpeech_StartBirchPlatformFade(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        ClearDialogWindowAndFrame(WIN_INTRO_TEXTBOX, TRUE);
        NewGameBirchSpeech_StartFadeOutTarget1InTarget2(taskId);
        gSaveBlock2Ptr->playerGender = MALE;
        gTasks[taskId].tTimer = 48;
        gTasks[taskId].func = Task_NewGameBirchSpeech_WaitPressBeforeNameChoice;
    }
}

static void Task_NewGameBirchSpeech_BoyOrGirl(u8 taskId)
{
    if (gTasks[taskId].tIsDoneFadingSprites)
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            BirchSpeechPrintMessage(gText_Birch_BoyOrGirl);
            gTasks[taskId].func = Task_NewGameBirchSpeech_WaitToShowGenderMenu;
        }
    }
}

static void Task_NewGameBirchSpeech_WaitToShowGenderMenu(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        u16 windowId = AddWindow(&sNewGameBirchSpeechTextWindows[WIN_INTRO_BOYGIRL]);
        DrawStdFrameWithCustomTileAndPalette(windowId, TRUE, 0x214, 14);
        PrintMenuActionTextsAtPos(windowId, FONT_NORMAL, GetMenuCursorDimensionByFont(FONT_NORMAL, 0), 0, 16, ARRAY_COUNT(sMenuActions_Gender), sMenuActions_Gender);
        InitMenuNormal(windowId, FONT_NORMAL, 0, 1, 16, 2, 0);
        gTasks[taskId].func = Task_NewGameBirchSpeech_ChooseGender;
    }
}

static void Task_NewGameBirchSpeech_ChooseGender(u8 taskId)
{
    int gender = Menu_ProcessInputNoWrap();

    switch (gender)
    {
        case MALE:
        case FEMALE:
            PlaySE(SE_SELECT);
            gSaveBlock2Ptr->playerGender = gender;
            ClearDialogWindowAndFrame(WIN_INTRO_TEXTBOX, TRUE);
            ClearStdWindowAndFrameToTransparent(WIN_INTRO_BOYGIRL, TRUE);
            LoadTrainerPic(gSaveBlock2Ptr->playerGender);
            NewGameBirchSpeech_StartFadeInTarget1OutTarget2(taskId);
            gTasks[taskId].tTimer = 30;
            gTasks[taskId].func = Task_NewGameBirchSpeech_WhatsYourName;
            break;
    }
}

static void Task_NewGameBirchSpeech_WhatsYourName(u8 taskId)
{
    if (gTasks[taskId].tIsDoneFadingSprites)
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            BirchSpeechPrintMessage(gText_Birch_YourePlayer);
            gTasks[taskId].func = Task_NewGameBirchSpeech_WaitPressBeforeNameChoice;
        }
    }
}

static void Task_NewGameBirchSpeech_WaitPressBeforeNameChoice(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_NewGameBirchSpeech_StartNamingScreen;
    }
}

static void Task_NewGameBirchSpeech_StartNamingScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAllWindowBuffers();
        NewGameBirchSpeech_SetDefaultPlayerName(Random() % 20);
        DestroyTask(taskId);
        DoNamingScreen(NAMING_SCREEN_PLAYER, gSaveBlock2Ptr->playerName, gSaveBlock2Ptr->playerGender, 0, 0, CB2_NewGameBirchSpeech_ReturnFromNamingScreen);
    }
}

static void Task_NewGameBirchSpeech_WhatsYourRivalsName(u8 taskId)
{
    if (gTasks[taskId].tIsDoneFadingSprites)
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            BirchSpeechPrintMessage(gText_Birch_RivalName);
            gTasks[taskId].func = Task_NewGameBirchSpeech_WaitPressBeforeRivalNameChoice;
        }
    }
}

static void Task_NewGameBirchSpeech_WaitPressBeforeRivalNameChoice(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_NewGameBirchSpeech_StartRivalNamingScreen;
    }
}

static void Task_NewGameBirchSpeech_StartRivalNamingScreen(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        StringCopy(gSaveBlock2Ptr->rivalName, sMalePresetNames[Random() % NELEMS(sMalePresetNames)]);
        DoNamingScreen(NAMING_SCREEN_RIVAL, gSaveBlock2Ptr->rivalName, 0, 0, 0, CB2_NewGameBirchSpeech_ReturnFromRivalNamingScreen);
    }
}

static void Task_NewGameBirchSpeech_SoItsPlayerName(u8 taskId)
{
    if (gTasks[taskId].tTimer-- <= 0)
    {
        if (!gPaletteFade.active)
        {
            BirchSpeechPrintMessage(gText_Birch_SoItsPlayer);
            gTasks[taskId].tTimer = 30;
            gTasks[taskId].func = Task_NewGameBirchSpeech_CreateNameYesNo;
        }
    }
}

static void Task_NewGameBirchSpeech_CreateNameYesNo(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            CreateYesNoMenu(&sNewGameBirchSpeechTextWindows[WIN_INTRO_YESNO], 0x214, 14, 0);
            gTasks[taskId].func = Task_NewGameBirchSpeech_ProcessNameYesNoMenu;
        }
    }
}

static void Task_NewGameBirchSpeech_ProcessNameYesNoMenu(u8 taskId)
{
    switch (Menu_ProcessInputNoWrapClearOnChoose())
    {
        case 0:
            PlaySE(SE_SELECT);
            ClearDialogWindowAndFrame(WIN_INTRO_TEXTBOX, TRUE);
            gTasks[taskId].func = Task_NewGameBirchSpeech_WhatsYourRivalsName;
            break;
        case MENU_B_PRESSED:
        case 1:
            PlaySE(SE_SELECT);
            BeginNormalPaletteFade(PALETTES_ALL, 0, 0, 16, RGB_BLACK);
            gTasks[taskId].func = Task_NewGameBirchSpeech_StartNamingScreen;
    }
}

static void Task_NewGameBirchSpeech_SlidePlatformAway2(u8 taskId)
{
    s16 *data = gTasks[taskId].data;

    if (tBG1HOFS != 0)
    {
        u32 i;
        tBG1HOFS -= 2;
        for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
        {
            u8 spriteId = tPlatformSpriteId(i);
            gSprites[spriteId].x = tBG1HOFS + ((i - 1) * 32) + 120;
        }
        ChangeBgX(2, 0x200, BG_COORD_ADD);
    }
    else
    {
        tTimer = 30;
        gTasks[taskId].func = Task_NewGameBirchSpeech_AreYouReady;
    }
}

static void Task_NewGameBirchSpeech_AreYouReady(u8 taskId)
{
    if (gTasks[taskId].tTimer)
    {
        gTasks[taskId].tTimer--;
    }
    else
    {
        BirchSpeechPrintMessage(gText_Birch_AreYouReady);
        gTasks[taskId].tTimer = 30;
        gTasks[taskId].func = Task_NewGameBirchSpeech_ShrinkPlayer;
    }
}

#define tshrinkTimer           data[0]
#define tBGFadeStarted         data[1]
#define tScaleDelta            data[2]
#define tPlayerIsShrunk        data[3]

#define tPlayerPicFadeWhiteTimer data[0]
#define tUnderflowingTimer       data[1]
#define tSecondaryTimer          data[2]
#define tBlendCoefficient        data[3]

static void Task_NewGameBirchSpeech_ShrinkPlayer(u8 taskId)
{
    if (!RunTextPrintersAndIsPrinter0Active())
    {
        if (gTasks[taskId].tTimer)
        {
            gTasks[taskId].tTimer--;
        }
        else
        {
            u8 taskId2;
            FadeOutBGM(4);
            gTasks[taskId].tshrinkTimer = 0;
            taskId2 = CreateTask(Task_NewGameBirchSpeech_WaitToFadeTextbox, 1);
            gTasks[taskId2].tBGFadeStarted = 0;
            BeginNormalPaletteFade(PALETTES_OBJECTS | 0x0FCF, 4, 0, 16, RGB_BLACK);

            taskId2 = CreateTask(Task_NewGameBirchSpeech_FadePlayerToWhite, 2);
            gTasks[taskId2].tPlayerPicFadeWhiteTimer = 8;
            gTasks[taskId2].tUnderflowingTimer = 0;
            gTasks[taskId2].tSecondaryTimer = 8;
            gTasks[taskId2].tBlendCoefficient = 0;

            SetBgAttribute(2, BG_ATTR_WRAPAROUND, 1);
            gTasks[taskId].tTimer = 0;
            gTasks[taskId].tScaleDelta = 256;
            gTasks[taskId].tPlayerIsShrunk = FALSE;
            gTasks[taskId].func = Task_NewGameBirchSpeech_ShrinkBG2;
        }
    }
}

static void Task_NewGameBirchSpeech_ShrinkBG2(u8 taskId)
{
    u16 isBetweenSteps;
    u16 oldScaleDelta;

    gTasks[taskId].tshrinkTimer++;
    isBetweenSteps = (u16)gTasks[taskId].tshrinkTimer % 20;
    if (isBetweenSteps == 0)
    {
        if (gTasks[taskId].tshrinkTimer == 40)
            PlaySE(SE_WARP_IN);
        oldScaleDelta = gTasks[taskId].tScaleDelta;
        gTasks[taskId].tScaleDelta -= 32;
        SetBgAffine(2, 120 * 0x100, 84 * 0x100, 120, 84, MathUtil_Inv16(oldScaleDelta - 8), MathUtil_Inv16(gTasks[taskId].tScaleDelta - 16), 0);
        if (gTasks[taskId].tScaleDelta <= 0x60)
        {
            gTasks[taskId].tPlayerIsShrunk = TRUE;
            gTasks[taskId].tTimer = 36;
            gTasks[taskId].func = Task_NewGameBirchSpeech_FadePlayerToBlack;
        }
    }
}

static void Task_NewGameBirchSpeech_WaitToFadeTextbox(u8 taskId)
{
    u32 i;
    s16 *data = gTasks[taskId].data;
    if (!gPaletteFade.active)
    {
        if (tBGFadeStarted)
        {
            DestroyTask(taskId);
            for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
                DestroySprite(&gSprites[tPlatformSpriteId(i)]);
            FreeSpriteTilesByTag(GFX_TAG_PLATFORM);
            FreeSpritePaletteByTag(PAL_TAG_PLATFORM);
        }
        else
        {
            tBGFadeStarted++;
            BeginNormalPaletteFade(0x0000 | 0xF000, 0, 0, 16, RGB_BLACK);
        }
    }
}

#undef tBGFadeStarted

static void Task_NewGameBirchSpeech_FadePlayerToWhite(u8 taskId)
{
    u32 i;
    s16 *data = gTasks[taskId].data;

    if (tPlayerPicFadeWhiteTimer)
    {
        tPlayerPicFadeWhiteTimer--;
    }
    else
    {
        if (tUnderflowingTimer <= 0 && tSecondaryTimer != 0)
            tSecondaryTimer--;
        BlendPalette(0x40, 0x20, tBlendCoefficient, RGB_WHITE);
        tBlendCoefficient++;
        tUnderflowingTimer--;
        tPlayerPicFadeWhiteTimer = tSecondaryTimer;
        if (tBlendCoefficient > 14)
        {
            for (i = 0; i < 32; i++)
            {
                gPlttBufferFaded[i + 0x40] = RGB_WHITE;
                gPlttBufferUnfaded[i + 0x40] = RGB_WHITE;
            }
            DestroyTask(taskId);
        }
    }
}

static void Task_NewGameBirchSpeech_FadePlayerToBlack(u8 taskId)
{
    if (gTasks[taskId].tTimer)
    {
        gTasks[taskId].tTimer--;
    }
    else
    {
        BeginNormalPaletteFade(0x0000 | 0x0030, 2, 0, 16, RGB_BLACK);
        gTasks[taskId].func = Task_NewGameBirchSpeech_Cleanup;
    }
}

static void Task_NewGameBirchSpeech_Cleanup(u8 taskId)
{
    if (!gPaletteFade.active)
    {
        FreeAllWindowBuffers();
        ResetAllPicSprites();
        FREE_AND_SET_NULL(sBirchSpeech_BgBuffer);
        SetMainCallback2(CB2_NewGame);
        DestroyTask(taskId);
    }
}

static void CB2_NewGameBirchSpeech_ReturnFromNamingScreen(void)
{
    u32 i;
    u8 taskId;

    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetTasks();
    BirchSpeech_InitBg();
    taskId = CreateTask(Task_NewGameBirchSpeech_SoItsPlayerName, 0);
    gTasks[taskId].tTimer = 5;
    gTasks[taskId].tBG1HOFS = 60;
    AddBirchSpeechObjects(taskId);
    LoadTrainerPic(gSaveBlock2Ptr->playerGender);
    for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
        gSprites[gTasks[taskId].tPlatformSpriteId(i)].x = 148 + (i * 32);
    ChangeBgX(2, 60 * -0x100, 0);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static void CB2_NewGameBirchSpeech_ReturnFromRivalNamingScreen(void)
{
    u32 i;
    u8 taskId;

    SetGpuReg(REG_OFFSET_BG2CNT, 0);
    SetGpuReg(REG_OFFSET_BG1CNT, 0);
    SetGpuReg(REG_OFFSET_BG0CNT, 0);
    SetGpuReg(REG_OFFSET_BG2HOFS, 0);
    SetGpuReg(REG_OFFSET_BG2VOFS, 0);
    SetGpuReg(REG_OFFSET_BG1HOFS, 0);
    SetGpuReg(REG_OFFSET_BG1VOFS, 0);
    SetGpuReg(REG_OFFSET_BG0HOFS, 0);
    SetGpuReg(REG_OFFSET_BG0VOFS, 0);
    DmaFill16(3, 0, VRAM, VRAM_SIZE);
    DmaFill32(3, 0, OAM, OAM_SIZE);
    DmaFill16(3, 0, PLTT, PLTT_SIZE);
    ResetTasks();
    BirchSpeech_InitBg();
    taskId = CreateTask(Task_NewGameBirchSpeech_SlidePlatformAway2, 0);
    gTasks[taskId].tTimer = 5;
    gTasks[taskId].tBG1HOFS = 60;
    AddBirchSpeechObjects(taskId);
    LoadTrainerPic(gSaveBlock2Ptr->playerGender);
    for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
        gSprites[gTasks[taskId].tPlatformSpriteId(i)].x = 148 + (i * 32);
    ChangeBgX(2, 60 * -0x100, 0);
    BeginNormalPaletteFade(PALETTES_ALL, 0, 16, 0, RGB_BLACK);
    ShowBg(0);
    ShowBg(1);
    ShowBg(2);
}

static void NewGameBirchSpeech_CreateIntroMonSprite(u8 taskId)
{
    u8 introMonSpriteId;
    s16 *data = gTasks[taskId].data;

    introMonSpriteId = CreateMonPicSprite(INTRO_SPECIES, SHINY_ODDS, 0, MON_PIC_AFFINE_FRONT, 96, 84, 14, TAG_NONE);
    gSprites[introMonSpriteId].callback = SpriteCallbackDummy;
    gSprites[introMonSpriteId].invisible = TRUE;
    tIntroMonSpriteId = introMonSpriteId;
}

static void AddBirchSpeechObjects(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u32 i;

    LoadCompressedSpriteSheet(&sBirchSpeech_Platform_SpriteSheet);
    LoadSpritePalette(&sBirchSpeech_Platform_SpritePalette);
    for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
    {
        u8 spriteId = CreateSprite(&sBirchSpeech_Platform_SpriteTemplate, i * 32 + 88, 112, 1);
        tPlatformSpriteId(i) = spriteId;
        StartSpriteAnim(&gSprites[spriteId], i);
    }
}

#undef tPokeBallSpriteId
#undef tBG1HOFS
#undef tSpriteTimer
#undef tIntroMonSpriteId

#define tMainTask data[0]
#define tAlphaCoeff1 data[1]
#define tAlphaCoeff2 data[2]
#define tDelayTimer data[3]

static void Task_NewGameBirchSpeech_FadeOutTarget1InTarget2(u8 taskId)
{
    s16 *data = gTasks[taskId].data;
    u32 i;

    if (tAlphaCoeff1 == 0)
    {
        gTasks[tMainTask].tIsDoneFadingSprites = TRUE;
        DestroyTask(taskId);
    }
    else if (tDelayTimer)
    {
        tDelayTimer--;
    }
    else
    {
        tDelayTimer = 2;
        tAlphaCoeff1--;
        tAlphaCoeff2++;
        if (tAlphaCoeff1 == 8)
        {
            s16 *sprites = &gTasks[tMainTask].tPlatformSpriteId(PLATFORM_LEFT);
            for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
                gSprites[sprites[i]].invisible = TRUE;
        }
        SetGpuReg(REG_OFFSET_BLDALPHA, (tAlphaCoeff2 << 8) + tAlphaCoeff1);
    }
}

static void NewGameBirchSpeech_StartFadeOutTarget1InTarget2(u8 taskId)
{
    u8 taskId2;

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ | BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(16, 0));
    SetGpuReg(REG_OFFSET_BLDY, 0);
    gTasks[taskId].tIsDoneFadingSprites = 0;
    taskId2 = CreateTask(Task_NewGameBirchSpeech_FadeOutTarget1InTarget2, 0);
    gTasks[taskId2].tMainTask = taskId;
    gTasks[taskId2].tAlphaCoeff1 = 16;
    gTasks[taskId2].tAlphaCoeff2 = 0;
}

static void Task_NewGameBirchSpeech_FadeInTarget1OutTarget2(u8 taskId)
{
    s16* data = gTasks[taskId].data;
    u32 i;

    if (tAlphaCoeff1 == 16)
    {
        gTasks[tMainTask].tIsDoneFadingSprites = TRUE;
        DestroyTask(taskId);
    }
    else if (tDelayTimer)
    {
        tDelayTimer--;
    }
    else
    {
        tDelayTimer = 2;
        tAlphaCoeff1++;
        tAlphaCoeff2--;
        if (tAlphaCoeff1 == 8)
        {
            s16 *sprites = &gTasks[tMainTask].tPlatformSpriteId(PLATFORM_LEFT);
            for (i = 0; i < NUM_PLATFORM_SPRITES; i++)
                gSprites[sprites[i]].invisible = FALSE;
        }
        SetGpuReg(REG_OFFSET_BLDALPHA, (tAlphaCoeff2 << 8) + tAlphaCoeff1);
    }
}

static void NewGameBirchSpeech_StartFadeInTarget1OutTarget2(u8 taskId)
{
    u8 taskId2;

    SetGpuReg(REG_OFFSET_BLDCNT, BLDCNT_TGT2_BG1 | BLDCNT_TGT2_OBJ | BLDCNT_EFFECT_BLEND | BLDCNT_TGT1_BG2);
    SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, 16));
    SetGpuReg(REG_OFFSET_BLDY, 0);
    gTasks[taskId].tIsDoneFadingSprites = 0;
    taskId2 = CreateTask(Task_NewGameBirchSpeech_FadeInTarget1OutTarget2, 0);
    gTasks[taskId2].tMainTask = taskId;
    gTasks[taskId2].tAlphaCoeff1 = 0;
    gTasks[taskId2].tAlphaCoeff2 = 16;
}

#undef tMainTask
#undef tAlphaCoeff1
#undef tAlphaCoeff2
#undef tDelayTimer

void NewGameBirchSpeech_SetDefaultPlayerName(u8 nameId)
{
    const u8 *name;
    u32 i;

    if (gSaveBlock2Ptr->playerGender != MALE)
        name = sFemalePresetNames[nameId];
    else
        name = sMalePresetNames[nameId];
    for (i = 0; i < PLAYER_NAME_LENGTH; i++)
        gSaveBlock2Ptr->playerName[i] = name[i];
    gSaveBlock2Ptr->playerName[PLAYER_NAME_LENGTH] = EOS;
}

static void CreateMainMenuErrorWindow(const u8 *str)
{
    FillWindowPixelBuffer(5, PIXEL_FILL(1));
    AddTextPrinterParameterized(5, FONT_NORMAL, str, 0, 2, 2, NULL);
    PutWindowTilemap(5);
    CopyWindowToVram(5, COPYWIN_GFX);
    DrawStdFrameWithCustomTileAndPalette(5, TRUE, MAIN_MENU_STD_BORDER_TILE, 14);
    SetGpuReg(REG_OFFSET_WIN0H, MENU_WIN_HCOORDS_ERROR(ERROR));
    SetGpuReg(REG_OFFSET_WIN0V, MENU_WIN_VCOORDS_ERROR(ERROR));
}

static void MainMenu_FormatSavegameText(void)
{
    MainMenu_FormatSavegamePlayer();
    MainMenu_FormatSavegamePokedex();
    MainMenu_FormatSavegameTime();
    MainMenu_FormatSavegameBadges();
}

static void MainMenu_FormatSavegamePlayer(void)
{
    StringExpandPlaceholders(gStringVar4, gText_ContinueMenuPlayer);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 2, 18, sTextColor_MenuInfo, TEXT_SKIP_DRAW, gStringVar4);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 62, 18, sTextColor_MenuInfo, TEXT_SKIP_DRAW, gSaveBlock2Ptr->playerName);
}

static void MainMenu_FormatSavegameTime(void)
{
    u8 str[0x20];
    u8 *ptr;

    StringExpandPlaceholders(gStringVar4, gText_Time);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 2, 34, sTextColor_MenuInfo, TEXT_SKIP_DRAW, gStringVar4);
    ptr = ConvertIntToDecimalStringN(str, gSaveBlock2Ptr->playTimeHours, STR_CONV_MODE_LEFT_ALIGN, 3);
    *ptr = CHAR_COLON;
    ConvertIntToDecimalStringN(ptr + 1, gSaveBlock2Ptr->playTimeMinutes, STR_CONV_MODE_LEADING_ZEROS, 2);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 62, 34, sTextColor_MenuInfo, TEXT_SKIP_DRAW, str);
}

static void MainMenu_FormatSavegamePokedex(void)
{
    u8 str[0x20];
    u16 dexCount;

    if (FlagGet(FLAG_SYS_POKEDEX_GET))
    {
        if (IsNationalPokedexEnabled())
            dexCount = GetNationalPokedexCount(FLAG_GET_CAUGHT);
        else
            dexCount = GetHoennPokedexCount(FLAG_GET_CAUGHT);
        StringExpandPlaceholders(gStringVar4, gText_MenuOptionPokedex);
        AddTextPrinterParameterized3(2, FONT_NORMAL, 2, 50, sTextColor_MenuInfo, TEXT_SKIP_DRAW, gStringVar4);
        ConvertIntToDecimalStringN(str, dexCount, STR_CONV_MODE_LEFT_ALIGN, 3);
        AddTextPrinterParameterized3(2, FONT_NORMAL, 62, 50, sTextColor_MenuInfo, TEXT_SKIP_DRAW, str);
    }
}

static void MainMenu_FormatSavegameBadges(void)
{
    u8 str[0x20];
    u8 badgeCount = 0;
    u32 i;

    for (i = FLAG_BADGE01_GET; i < FLAG_BADGE01_GET + NUM_BADGES; i++)
    {
        if (FlagGet(i))
            badgeCount++;
    }
    StringExpandPlaceholders(gStringVar4, gText_ContinueMenuBadges);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 2, 66, sTextColor_MenuInfo, TEXT_SKIP_DRAW, gStringVar4);
    ConvertIntToDecimalStringN(str, badgeCount, STR_CONV_MODE_LEADING_ZEROS, 1);
    AddTextPrinterParameterized3(2, FONT_NORMAL, 62, 66, sTextColor_MenuInfo, TEXT_SKIP_DRAW, str);
}

static void LoadMainMenuWindowFrameTiles(u8 bgId, u16 tileOffset)
{
    LoadBgTiles(bgId, GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->tiles, 0x120, tileOffset);
    LoadPalette(GetWindowFrameTilesPal(gSaveBlock2Ptr->optionsWindowFrameType)->pal, 32, 32);
}

static void DrawMainMenuWindowBorder(const struct WindowTemplate *template, u16 baseTileNum)
{
    u16 r9 = 1 + baseTileNum;
    u16 r10 = 2 + baseTileNum;
    u16 sp18 = 3 + baseTileNum;
    u16 spC = 5 + baseTileNum;
    u16 sp10 = 6 + baseTileNum;
    u16 sp14 = 7 + baseTileNum;
    u16 r6 = 8 + baseTileNum;

    FillBgTilemapBufferRect(template->bg, baseTileNum, template->tilemapLeft - 1, template->tilemapTop - 1, 1, 1, 2);
    FillBgTilemapBufferRect(template->bg, r9, template->tilemapLeft, template->tilemapTop - 1, template->width, 1, 2);
    FillBgTilemapBufferRect(template->bg, r10, template->tilemapLeft + template->width, template->tilemapTop - 1, 1, 1, 2);
    FillBgTilemapBufferRect(template->bg, sp18, template->tilemapLeft - 1, template->tilemapTop, 1, template->height, 2);
    FillBgTilemapBufferRect(template->bg, spC, template->tilemapLeft + template->width, template->tilemapTop, 1, template->height, 2);
    FillBgTilemapBufferRect(template->bg, sp10, template->tilemapLeft - 1, template->tilemapTop + template->height, 1, 1, 2);
    FillBgTilemapBufferRect(template->bg, sp14, template->tilemapLeft, template->tilemapTop + template->height, template->width, 1, 2);
    FillBgTilemapBufferRect(template->bg, r6, template->tilemapLeft + template->width, template->tilemapTop + template->height, 1, 1, 2);
    CopyBgTilemapBufferToVram(template->bg);
}

static void ClearMainMenuWindowTilemap(const struct WindowTemplate *template)
{
    FillBgTilemapBufferRect(template->bg, 0, template->tilemapLeft - 1, template->tilemapTop - 1, template->tilemapLeft + template->width + 1, template->tilemapTop + template->height + 1, 2);
    CopyBgTilemapBufferToVram(template->bg);
}

void CreateYesNoMenuParameterized(u8 x, u8 y, u16 baseTileNum, u16 baseBlock, u16 yesNoPalNum, u8 winPalNum)
{
    struct WindowTemplate template = CreateWindowTemplate(0, x + 1, y + 1, 6, 4, winPalNum, baseBlock);
    CreateYesNoMenu(&template, baseTileNum, yesNoPalNum, 0);
}
