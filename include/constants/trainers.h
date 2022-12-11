#ifndef GUARD_TRAINERS_H
#define GUARD_TRAINERS_H

#include "constants/opponents.h"
#include "constants/battle_frontier_trainers.h"

// Special Trainer Ids.
//      0-299 are frontier trainers
#define TRAINER_RECORD_MIXING_FRIEND        FRONTIER_TRAINERS_COUNT
#define TRAINER_RECORD_MIXING_APPRENTICE    400
#define TRAINER_EREADER                     500
#define TRAINER_FRONTIER_BRAIN              1022
#define TRAINER_PLAYER                      1023
#define TRAINER_SECRET_BASE                 1024
#define TRAINER_LINK_OPPONENT               2048
#define TRAINER_UNION_ROOM                  3072
#define TRAINER_STEVEN_PARTNER              3075
#define TRAINER_CUSTOM_PARTNER              3076

#define TRAINER_PIC_HIKER                  0
#define TRAINER_PIC_AQUA_GRUNT_M           1
#define TRAINER_PIC_POKEMON_BREEDER_F      2
#define TRAINER_PIC_COOLTRAINER_M          3
#define TRAINER_PIC_BIRD_KEEPER            4
#define TRAINER_PIC_COLLECTOR              5
#define TRAINER_PIC_AQUA_GRUNT_F           6
#define TRAINER_PIC_SWIMMER_M              7
#define TRAINER_PIC_MAGMA_GRUNT_M          8
#define TRAINER_PIC_EXPERT_M               9
#define TRAINER_PIC_AQUA_ADMIN_M          10
#define TRAINER_PIC_BLACK_BELT            11
#define TRAINER_PIC_AQUA_ADMIN_F          12
#define TRAINER_PIC_AQUA_LEADER_ARCHIE    13
#define TRAINER_PIC_HEX_MANIAC            14
#define TRAINER_PIC_AROMA_LADY            15
#define TRAINER_PIC_RUIN_MANIAC           16
#define TRAINER_PIC_INTERVIEWER           17
#define TRAINER_PIC_TUBER_F               18
#define TRAINER_PIC_TUBER_M               19
#define TRAINER_PIC_COOLTRAINER_F         20
#define TRAINER_PIC_LADY                  21
#define TRAINER_PIC_BEAUTY                22
#define TRAINER_PIC_RICH_BOY              23
#define TRAINER_PIC_EXPERT_F              24
#define TRAINER_PIC_POKEMANIAC            25
#define TRAINER_PIC_MAGMA_GRUNT_F         26
#define TRAINER_PIC_GUITARIST             27
#define TRAINER_PIC_KINDLER               28
#define TRAINER_PIC_CAMPER                29
#define TRAINER_PIC_PICNICKER             30
#define TRAINER_PIC_BUG_MANIAC            31
#define TRAINER_PIC_POKEMON_BREEDER_M     32
#define TRAINER_PIC_PSYCHIC_M             33
#define TRAINER_PIC_PSYCHIC_F             34
#define TRAINER_PIC_GENTLEMAN             35
#define TRAINER_PIC_ELITE_FOUR_SIDNEY     36
#define TRAINER_PIC_ELITE_FOUR_PHOEBE     37
#define TRAINER_PIC_ELITE_FOUR_GLACIA     38
#define TRAINER_PIC_ELITE_FOUR_DRAKE      39
#define TRAINER_PIC_LEADER_ROXANNE        40
#define TRAINER_PIC_LEADER_BRAWLY         41
#define TRAINER_PIC_LEADER_WATTSON        42
#define TRAINER_PIC_LEADER_FLANNERY       43
#define TRAINER_PIC_LEADER_NORMAN         44
#define TRAINER_PIC_LEADER_WINONA         45
#define TRAINER_PIC_LEADER_TATE_AND_LIZA  46
#define TRAINER_PIC_LEADER_JUAN           47
#define TRAINER_PIC_SCHOOL_KID_M          48
#define TRAINER_PIC_SCHOOL_KID_F          49
#define TRAINER_PIC_SR_AND_JR             50
#define TRAINER_PIC_POKEFAN_M             51
#define TRAINER_PIC_POKEFAN_F             52
#define TRAINER_PIC_YOUNGSTER             53
#define TRAINER_PIC_CHAMPION_WALLACE      54
#define TRAINER_PIC_FISHERMAN             55
#define TRAINER_PIC_CYCLING_TRIATHLETE_M  56
#define TRAINER_PIC_CYCLING_TRIATHLETE_F  57
#define TRAINER_PIC_RUNNING_TRIATHLETE_M  58
#define TRAINER_PIC_RUNNING_TRIATHLETE_F  59
#define TRAINER_PIC_SWIMMING_TRIATHLETE_M 60
#define TRAINER_PIC_SWIMMING_TRIATHLETE_F 61
#define TRAINER_PIC_DRAGON_TAMER          62
#define TRAINER_PIC_NINJA_BOY             63
#define TRAINER_PIC_BATTLE_GIRL           64
#define TRAINER_PIC_PARASOL_LADY          65
#define TRAINER_PIC_SWIMMER_F             66
#define TRAINER_PIC_TWINS                 67
#define TRAINER_PIC_SAILOR                68
#define TRAINER_PIC_MAGMA_ADMIN           69
#define TRAINER_PIC_WALLY                 70
#define TRAINER_PIC_BRENDAN               71
#define TRAINER_PIC_MAY                   72
#define TRAINER_PIC_BUG_CATCHER           73
#define TRAINER_PIC_POKEMON_RANGER_M      74
#define TRAINER_PIC_POKEMON_RANGER_F      75
#define TRAINER_PIC_MAGMA_LEADER_MAXIE    76
#define TRAINER_PIC_LASS                  77
#define TRAINER_PIC_YOUNG_COUPLE          78
#define TRAINER_PIC_OLD_COUPLE            79
#define TRAINER_PIC_SIS_AND_BRO           80
#define TRAINER_PIC_STEVEN                81
#define TRAINER_PIC_SALON_MAIDEN_ANABEL   82
#define TRAINER_PIC_DOME_ACE_TUCKER       83
#define TRAINER_PIC_PALACE_MAVEN_SPENSER  84
#define TRAINER_PIC_ARENA_TYCOON_GRETA    85
#define TRAINER_PIC_FACTORY_HEAD_NOLAND   86
#define TRAINER_PIC_PIKE_QUEEN_LUCY       87
#define TRAINER_PIC_PYRAMID_KING_BRANDON  88
#define TRAINER_PIC_RED                   89
#define TRAINER_PIC_LEAF                  90
#define TRAINER_PIC_RS_BRENDAN            91
#define TRAINER_PIC_RS_MAY                92
//POKESCAPE
#define TRAINER_PIC_a_nub_tot             93
#define TRAINER_PIC_ariane                94
#define TRAINER_PIC_count_draynor         95
#define TRAINER_PIC_durial321             96
#define TRAINER_PIC_katrine               97
#define TRAINER_PIC_maggie                98
#define TRAINER_PIC_meg                   99
#define TRAINER_PIC_mithrilman            100
#define TRAINER_PIC_ozan                  101
#define TRAINER_PIC_protaganist_f         102
#define TRAINER_PIC_protaganist_m         103
#define TRAINER_PIC_raptor                104
#define TRAINER_PIC_sigmund               105
#define TRAINER_PIC_sir_owen              106
#define TRAINER_PIC_straven               107
#define TRAINER_PIC_xeina                 108
#define TRAINER_PIC_zanik                 109
#define TRAINER_PIC_barrows_verac                110
#define TRAINER_PIC_duke_horacio                111
#define TRAINER_PIC_gunthor                112
#define TRAINER_PIC_king_roald                113
#define TRAINER_PIC_prince_ali                114
#define TRAINER_PIC_sir_amik_varze                115
#define TRAINER_PIC_tzhaar                116
#define TRAINER_PIC_vannaka                117
#define TRAINER_PIC_wise_old_man                118
#define TRAINER_PIC_canada_grrl                119
#define TRAINER_PIC_prezleek                120
#define TRAINER_PIC_willmissit                121
#define TRAINER_PIC_demonheadge                122
#define TRAINER_PIC_gentleshen                123
#define TRAINER_PIC_hyperstan                124
#define TRAINER_PIC_jitterbug                125
#define TRAINER_PIC_lopendebank                126
#define TRAINER_PIC_orchy                127
#define TRAINER_PIC_sudo_bash                128
#define TRAINER_PIC_barbarian_duo                129
#define TRAINER_PIC_barbarian_f                130
#define TRAINER_PIC_barbarian_m                131
#define TRAINER_PIC_black_knight_f                132
#define TRAINER_PIC_black_knight_m                133
#define TRAINER_PIC_bot_dragon_slayer                134
#define TRAINER_PIC_bot_miner                135
#define TRAINER_PIC_bot_woodcutting                136
#define TRAINER_PIC_dnd                137
#define TRAINER_PIC_dwarf_m                138
#define TRAINER_PIC_farmer                139
#define TRAINER_PIC_fisher                140
#define TRAINER_PIC_ga_al                141
#define TRAINER_PIC_goblin                142
#define TRAINER_PIC_goebie                143
#define TRAINER_PIC_guard_alkhaird                144
#define TRAINER_PIC_guard_alkhaird_duo                145
#define TRAINER_PIC_guard_falador                146
#define TRAINER_PIC_guard_khazard                147
#define TRAINER_PIC_guard_varrock                148
#define TRAINER_PIC_guthix_wizard                149
#define TRAINER_PIC_hairdresser                150
#define TRAINER_PIC_ham_grunt_f                151
#define TRAINER_PIC_ham_grunt_m                152
#define TRAINER_PIC_hunter_f                153
#define TRAINER_PIC_hunter_m                154
#define TRAINER_PIC_ironman                155
#define TRAINER_PIC_jmod_f                156
#define TRAINER_PIC_jmod_m                157
#define TRAINER_PIC_merchant                158
#define TRAINER_PIC_miller                159
#define TRAINER_PIC_miner                160
#define TRAINER_PIC_monk                161
#define TRAINER_PIC_mugger                162
#define TRAINER_PIC_noob_default                163
#define TRAINER_PIC_noob_rune                164
#define TRAINER_PIC_pirate                165
#define TRAINER_PIC_pk_dh                166
#define TRAINER_PIC_pk_rusher                167
#define TRAINER_PIC_rsmv_f                168
#define TRAINER_PIC_sailor                169
#define TRAINER_PIC_scammer                170
#define TRAINER_PIC_scammer_and_victim                171
#define TRAINER_PIC_skeleton                172
#define TRAINER_PIC_skiller                173
#define TRAINER_PIC_slayer                174
#define TRAINER_PIC_smith                175
#define TRAINER_PIC_summoner                176
#define TRAINER_PIC_tribesman                177
#define TRAINER_PIC_white_knight_f                178
#define TRAINER_PIC_white_knight_m                179
#define TRAINER_PIC_wizard_f                180
#define TRAINER_PIC_wizard_m                181
#define TRAINER_PIC_woodcutter                182
#define TRAINER_PIC_woodcutter_alt                183
#define TRAINER_PIC_cook                184
#define TRAINER_PIC_cook_fm_duo                185
#define TRAINER_PIC_lukien                186
#define TRAINER_PIC_firemaking                187
#define TRAINER_PIC_pk_duo                188
#define TRAINER_PIC_Archaeologist                189
#define TRAINER_PIC_rsmv_duo                190
#define TRAINER_PIC_rsmv_m                191
#define TRAINER_PIC_ahrim_osrs                192
#define TRAINER_PIC_dharok_osrs                193
#define TRAINER_PIC_torag_osrs               194
#define TRAINER_PIC_karil_osrs                195
#define TRAINER_PIC_guthan_osrs                196
#define TRAINER_PIC_verac_osrs                197
#define TRAINER_PIC_wizard_dark                198
#define TRAINER_PIC_divination                199
#define TRAINER_PIC_gertude                200
#define TRAINER_PIC_graceful                201
#define TRAINER_PIC_guard_draynor                202
#define TRAINER_PIC_quester                203
#define TRAINER_PIC_SoffanQuo                204
//#define TRAINER_PIC_			        204




#define TRAINER_BACK_PIC_BRENDAN                0
#define TRAINER_BACK_PIC_MAY                    1
#define TRAINER_BACK_PIC_RED                    2
#define TRAINER_BACK_PIC_LEAF                   3
#define TRAINER_BACK_PIC_RUBY_SAPPHIRE_BRENDAN  4
#define TRAINER_BACK_PIC_RUBY_SAPPHIRE_MAY      5
#define TRAINER_BACK_PIC_WALLY                  6
#define TRAINER_BACK_PIC_STEVEN                 7

#define FACILITY_CLASS_HIKER                 0x0
#define FACILITY_CLASS_AQUA_GRUNT_M          0x1
#define FACILITY_CLASS_PKMN_BREEDER_F        0x2
#define FACILITY_CLASS_COOLTRAINER_M         0x3
#define FACILITY_CLASS_BIRD_KEEPER           0x4
#define FACILITY_CLASS_COLLECTOR             0x5
#define FACILITY_CLASS_AQUA_GRUNT_F          0x6
#define FACILITY_CLASS_SWIMMER_M             0x7
#define FACILITY_CLASS_MAGMA_GRUNT_M         0x8
#define FACILITY_CLASS_EXPERT_M              0x9
#define FACILITY_CLASS_BLACK_BELT            0xa
#define FACILITY_CLASS_AQUA_LEADER_ARCHIE    0xb
#define FACILITY_CLASS_HEX_MANIAC            0xc
#define FACILITY_CLASS_AROMA_LADY            0xd
#define FACILITY_CLASS_RUIN_MANIAC           0xe
#define FACILITY_CLASS_INTERVIEWER           0xf
#define FACILITY_CLASS_TUBER_F               0x10
#define FACILITY_CLASS_TUBER_M               0x11
#define FACILITY_CLASS_COOLTRAINER_F         0x12
#define FACILITY_CLASS_LADY                  0x13
#define FACILITY_CLASS_BEAUTY                0x14
#define FACILITY_CLASS_RICH_BOY              0x15
#define FACILITY_CLASS_EXPERT_F              0x16
#define FACILITY_CLASS_POKEMANIAC            0x17
#define FACILITY_CLASS_MAGMA_GRUNT_F         0x18
#define FACILITY_CLASS_GUITARIST             0x19
#define FACILITY_CLASS_KINDLER               0x1a
#define FACILITY_CLASS_CAMPER                0x1b
#define FACILITY_CLASS_PICNICKER             0x1c
#define FACILITY_CLASS_BUG_MANIAC            0x1d
#define FACILITY_CLASS_PSYCHIC_M             0x1e
#define FACILITY_CLASS_PSYCHIC_F             0x1f
#define FACILITY_CLASS_GENTLEMAN             0x20
#define FACILITY_CLASS_ELITE_FOUR_SIDNEY     0x21
#define FACILITY_CLASS_ELITE_FOUR_PHOEBE     0x22
#define FACILITY_CLASS_LEADER_ROXANNE        0x23
#define FACILITY_CLASS_LEADER_BRAWLY         0x24
#define FACILITY_CLASS_LEADER_TATE_AND_LIZA  0x25
#define FACILITY_CLASS_SCHOOL_KID_M          0x26
#define FACILITY_CLASS_SCHOOL_KID_F          0x27
#define FACILITY_CLASS_SR_AND_JR             0x28
#define FACILITY_CLASS_POKEFAN_M             0x29
#define FACILITY_CLASS_POKEFAN_F             0x2a
#define FACILITY_CLASS_YOUNGSTER             0x2b
#define FACILITY_CLASS_CHAMPION_WALLACE      0x2c
#define FACILITY_CLASS_FISHERMAN             0x2d
#define FACILITY_CLASS_CYCLING_TRIATHLETE_M  0x2e
#define FACILITY_CLASS_CYCLING_TRIATHLETE_F  0x2f
#define FACILITY_CLASS_RUNNING_TRIATHLETE_M  0x30
#define FACILITY_CLASS_RUNNING_TRIATHLETE_F  0x31
#define FACILITY_CLASS_SWIMMING_TRIATHLETE_M 0x32
#define FACILITY_CLASS_SWIMMING_TRIATHLETE_F 0x33
#define FACILITY_CLASS_DRAGON_TAMER          0x34
#define FACILITY_CLASS_NINJA_BOY             0x35
#define FACILITY_CLASS_BATTLE_GIRL           0x36
#define FACILITY_CLASS_PARASOL_LADY          0x37
#define FACILITY_CLASS_SWIMMER_F             0x38
#define FACILITY_CLASS_TWINS                 0x39
#define FACILITY_CLASS_SAILOR                0x3a
#define FACILITY_CLASS_WALLY                 0x3b
#define FACILITY_CLASS_BRENDAN               0x3c
#define FACILITY_CLASS_BRENDAN_2             0x3d
#define FACILITY_CLASS_BRENDAN_3             0x3e
#define FACILITY_CLASS_MAY                   0x3f
#define FACILITY_CLASS_MAY_2                 0x40
#define FACILITY_CLASS_MAY_3                 0x41
#define FACILITY_CLASS_PKMN_BREEDER_M        0x42
#define FACILITY_CLASS_BUG_CATCHER           0x43
#define FACILITY_CLASS_PKMN_RANGER_M         0x44
#define FACILITY_CLASS_PKMN_RANGER_F         0x45
#define FACILITY_CLASS_MAGMA_LEADER_MAXIE    0x46
#define FACILITY_CLASS_LASS                  0x47
#define FACILITY_CLASS_YOUNG_COUPLE          0x48
#define FACILITY_CLASS_OLD_COUPLE            0x49
#define FACILITY_CLASS_SIS_AND_BRO           0x4a
#define FACILITY_CLASS_STEVEN                0x4b
#define FACILITY_CLASS_SALON_MAIDEN_ANABEL   0x4c
#define FACILITY_CLASS_DOME_ACE_TUCKER       0x4d
#define FACILITY_CLASS_RED                   0x4e
#define FACILITY_CLASS_LEAF                  0x4f
#define FACILITY_CLASS_RS_BRENDAN            0x50
#define FACILITY_CLASS_RS_MAY                0x51

#define FACILITY_CLASSES_COUNT               0x52

#define RS_FACILITY_CLASS_AQUA_LEADER_ARCHIE    0x0
#define RS_FACILITY_CLASS_AQUA_GRUNT_M          0x1
#define RS_FACILITY_CLASS_AQUA_GRUNT_F          0x2
#define RS_FACILITY_CLASS_AROMA_LADY            0x3
#define RS_FACILITY_CLASS_RUIN_MANIAC           0x4
#define RS_FACILITY_CLASS_INTERVIEWER           0x5
#define RS_FACILITY_CLASS_TUBER_F               0x6
#define RS_FACILITY_CLASS_TUBER_M               0x7
#define RS_FACILITY_CLASS_COOLTRAINER_M         0x8
#define RS_FACILITY_CLASS_COOLTRAINER_F         0x9
#define RS_FACILITY_CLASS_HEX_MANIAC            0xA
#define RS_FACILITY_CLASS_LADY                  0xB
#define RS_FACILITY_CLASS_BEAUTY                0xC
#define RS_FACILITY_CLASS_RICH_BOY              0xD
#define RS_FACILITY_CLASS_POKEMANIAC            0xE
#define RS_FACILITY_CLASS_SWIMMER_M             0xF
#define RS_FACILITY_CLASS_BLACK_BELT            0x10
#define RS_FACILITY_CLASS_GUITARIST             0x11
#define RS_FACILITY_CLASS_KINDLER               0x12
#define RS_FACILITY_CLASS_CAMPER                0x13
#define RS_FACILITY_CLASS_BUG_MANIAC            0x14
#define RS_FACILITY_CLASS_PSYCHIC_M             0x15
#define RS_FACILITY_CLASS_PSYCHIC_F             0x16
#define RS_FACILITY_CLASS_GENTLEMAN             0x17
#define RS_FACILITY_CLASS_ELITE_FOUR_M          0x18
#define RS_FACILITY_CLASS_ELITE_FOUR_F          0x19
#define RS_FACILITY_CLASS_LEADER_F              0x1A
#define RS_FACILITY_CLASS_LEADER_M              0x1B
#define RS_FACILITY_CLASS_LEADER_MF             0x1C
#define RS_FACILITY_CLASS_SCHOOL_KID_M          0x1D
#define RS_FACILITY_CLASS_SCHOOL_KID_F          0x1E
#define RS_FACILITY_CLASS_SR_AND_JR             0x1F
#define RS_FACILITY_CLASS_POKEFAN_M             0x20
#define RS_FACILITY_CLASS_POKEFAN_F             0x21
#define RS_FACILITY_CLASS_EXPERT_M              0x22
#define RS_FACILITY_CLASS_EXPERT_F              0x23
#define RS_FACILITY_CLASS_YOUNGSTER             0x24
#define RS_FACILITY_CLASS_CHAMPION              0x25
#define RS_FACILITY_CLASS_FISHERMAN             0x26
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_M  0x27
#define RS_FACILITY_CLASS_CYCLING_TRIATHLETE_F  0x28
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_M  0x29
#define RS_FACILITY_CLASS_RUNNING_TRIATHLETE_F  0x2A
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_M 0x2B
#define RS_FACILITY_CLASS_SWIMMING_TRIATHLETE_F 0x2C
#define RS_FACILITY_CLASS_DRAGON_TAMER          0x2D
#define RS_FACILITY_CLASS_BIRD_KEEPER           0x2E
#define RS_FACILITY_CLASS_NINJA_BOY             0x2F
#define RS_FACILITY_CLASS_BATTLE_GIRL           0x30
#define RS_FACILITY_CLASS_PARASOL_LADY          0x31
#define RS_FACILITY_CLASS_SWIMMER_F             0x32
#define RS_FACILITY_CLASS_PICNICKER             0x33
#define RS_FACILITY_CLASS_TWINS                 0x34
#define RS_FACILITY_CLASS_SAILOR                0x35
#define RS_FACILITY_CLASS_BOARDER_1             0x36
#define RS_FACILITY_CLASS_BOARDER_2             0x37
#define RS_FACILITY_CLASS_COLLECTOR             0x38
#define RS_FACILITY_CLASS_WALLY                 0x39
#define RS_FACILITY_CLASS_BRENDAN_1             0x3A
#define RS_FACILITY_CLASS_BRENDAN_2             0x3B
#define RS_FACILITY_CLASS_BRENDAN_3             0x3C
#define RS_FACILITY_CLASS_MAY_1                 0x3D
#define RS_FACILITY_CLASS_MAY_2                 0x3E
#define RS_FACILITY_CLASS_MAY_3                 0x3F
#define RS_FACILITY_CLASS_PKMN_BREEDER_M        0x40
#define RS_FACILITY_CLASS_PKMN_BREEDER_F        0x41
#define RS_FACILITY_CLASS_PKMN_RANGER_M         0x42
#define RS_FACILITY_CLASS_PKMN_RANGER_F         0x43
#define RS_FACILITY_CLASS_MAGMA_LEADER          0x44
#define RS_FACILITY_CLASS_MAGMA_GRUNT_M         0x45
#define RS_FACILITY_CLASS_MAGMA_GRUNT_F         0x46
#define RS_FACILITY_CLASS_LASS                  0x47
#define RS_FACILITY_CLASS_BUG_CATCHER           0x48
#define RS_FACILITY_CLASS_HIKER                 0x49
#define RS_FACILITY_CLASS_YOUNG_COUPLE          0x4A
#define RS_FACILITY_CLASS_OLD_COUPLE            0x4B
#define RS_FACILITY_CLASS_SIS_AND_BRO           0x4C

#define RS_FACILITY_CLASSES_COUNT               0x4D

#define TRAINER_CLASS_PKMN_TRAINER_1 0x0  // Unused
#define TRAINER_CLASS_PKMN_TRAINER_2 0x1  // Unused
#define TRAINER_CLASS_HIKER          0x2
#define TRAINER_CLASS_TEAM_AQUA      0x3
#define TRAINER_CLASS_PKMN_BREEDER   0x4
#define TRAINER_CLASS_COOLTRAINER    0x5
#define TRAINER_CLASS_BIRD_KEEPER    0x6
#define TRAINER_CLASS_COLLECTOR      0x7
#define TRAINER_CLASS_SWIMMER_M      0x8
#define TRAINER_CLASS_TEAM_MAGMA     0x9
#define TRAINER_CLASS_EXPERT         0xa
#define TRAINER_CLASS_AQUA_ADMIN     0xb
#define TRAINER_CLASS_BLACK_BELT     0xc
#define TRAINER_CLASS_AQUA_LEADER    0xd
#define TRAINER_CLASS_HEX_MANIAC     0xe
#define TRAINER_CLASS_AROMA_LADY     0xf
#define TRAINER_CLASS_RUIN_MANIAC    0x10
#define TRAINER_CLASS_INTERVIEWER    0x11
#define TRAINER_CLASS_TUBER_F        0x12
#define TRAINER_CLASS_TUBER_M        0x13
#define TRAINER_CLASS_LADY           0x14
#define TRAINER_CLASS_BEAUTY         0x15
#define TRAINER_CLASS_RICH_BOY       0x16
#define TRAINER_CLASS_POKEMANIAC     0x17
#define TRAINER_CLASS_GUITARIST      0x18
#define TRAINER_CLASS_KINDLER        0x19
#define TRAINER_CLASS_CAMPER         0x1a
#define TRAINER_CLASS_PICNICKER      0x1b
#define TRAINER_CLASS_BUG_MANIAC     0x1c
#define TRAINER_CLASS_PSYCHIC        0x1d
#define TRAINER_CLASS_GENTLEMAN      0x1e
#define TRAINER_CLASS_ELITE_FOUR     0x1f
#define TRAINER_CLASS_LEADER         0x20
#define TRAINER_CLASS_SCHOOL_KID     0x21
#define TRAINER_CLASS_SR_AND_JR      0x22
#define TRAINER_CLASS_WINSTRATE      0x23
#define TRAINER_CLASS_POKEFAN        0x24
#define TRAINER_CLASS_YOUNGSTER      0x25
#define TRAINER_CLASS_CHAMPION       0x26
#define TRAINER_CLASS_FISHERMAN      0x27
#define TRAINER_CLASS_TRIATHLETE     0x28
#define TRAINER_CLASS_DRAGON_TAMER   0x29
#define TRAINER_CLASS_NINJA_BOY      0x2a
#define TRAINER_CLASS_BATTLE_GIRL    0x2b
#define TRAINER_CLASS_PARASOL_LADY   0x2c
#define TRAINER_CLASS_SWIMMER_F      0x2d
#define TRAINER_CLASS_TWINS          0x2e
#define TRAINER_CLASS_SAILOR         0x2f
#define TRAINER_CLASS_COOLTRAINER_2  0x30 // Used for only one trainer.
#define TRAINER_CLASS_MAGMA_ADMIN    0x31
#define TRAINER_CLASS_PKMN_TRAINER_3 0x32
#define TRAINER_CLASS_BUG_CATCHER    0x33
#define TRAINER_CLASS_PKMN_RANGER    0x34
#define TRAINER_CLASS_MAGMA_LEADER   0x35
#define TRAINER_CLASS_LASS           0x36
#define TRAINER_CLASS_YOUNG_COUPLE   0x37
#define TRAINER_CLASS_OLD_COUPLE     0x38
#define TRAINER_CLASS_SIS_AND_BRO    0x39
#define TRAINER_CLASS_SALON_MAIDEN   0x3a
#define TRAINER_CLASS_DOME_ACE       0x3b
#define TRAINER_CLASS_PALACE_MAVEN   0x3c
#define TRAINER_CLASS_ARENA_TYCOON   0x3d
#define TRAINER_CLASS_FACTORY_HEAD   0x3e
#define TRAINER_CLASS_PIKE_QUEEN     0x3f
#define TRAINER_CLASS_PYRAMID_KING   0x40
#define TRAINER_CLASS_RS_PROTAG      0x41
//POKESCAPE
#define TRAINER_CLASS_MILLER			0x42
#define TRAINER_CLASS_GOBLIN			0x43
#define TRAINER_CLASS_SKELETON			0x44
#define TRAINER_CLASS_TZHAAR			0x45
#define TRAINER_CLASS_GOEBIE			0x46
#define TRAINER_CLASS_HAM_GRUNT			0x47
#define TRAINER_CLASS_HAM_BOSS			0x48
#define TRAINER_CLASS_WHITE_KNIGHT		0x49
#define TRAINER_CLASS_BLACK_KNIGHT		0x4a
#define TRAINER_CLASS_WIZARD			0x4b
#define TRAINER_CLASS_WITCH				0x4c
#define TRAINER_CLASS_GUARD				0x4d
#define TRAINER_CLASS_JMOD				0x4e
#define TRAINER_CLASS_BOT				0x4f
#define TRAINER_CLASS_NOOB				0x50
#define TRAINER_CLASS_MERCHER			0x51
#define TRAINER_CLASS_PKer				0x52
#define TRAINER_CLASS_DWARF				0x53
#define TRAINER_CLASS_MUGGER			0x54
//#define TRAINER_CLASS_SAILOR			0x55
#define TRAINER_CLASS_PIRATE			0x56
#define TRAINER_CLASS_BARBARIAN			0x57
#define TRAINER_CLASS_IRONMAN			0x58
#define TRAINER_CLASS_MITHRILMAN		0x59
#define TRAINER_CLASS_SCAMMER			0x5a
#define TRAINER_CLASS_VICTIM			0x5b
#define TRAINER_CLASS_TRIBESMAN			0x5c
#define TRAINER_CLASS_RSMVer			0x5d
#define TRAINER_CLASS_DnDer				0x5e
#define TRAINER_CLASS_QUESTER			0x5f
#define TRAINER_CLASS_LOREHOUND			0x60
#define TRAINER_CLASS_VAMPYRE			0x61
#define TRAINER_CLASS_COUNT				0x62
#define TRAINER_CLASS_DUKE				0x63
#define TRAINER_CLASS_KING				0x64
#define TRAINER_CLASS_PRINCE			0x65
#define TRAINER_CLASS_CHIEFTAIN			0x66
#define TRAINER_CLASS_UNKNOWN			0x67
#define TRAINER_CLASS_WARRIOR			0x68
#define TRAINER_CLASS_SIR				0x69
#define TRAINER_CLASS_SKILLER			0x6a
#define TRAINER_CLASS_SLAYER			0x6b
#define TRAINER_CLASS_WOODCUTTER		0x6c
#define TRAINER_CLASS_SMITH				0x6d
#define TRAINER_CLASS_MINER				0x6e
#define TRAINER_CLASS_MONK				0x6f
#define TRAINER_CLASS_HUNTER			0x70
#define TRAINER_CLASS_FIREMAKER			0x71
#define TRAINER_CLASS_FARMER			0x72
#define TRAINER_CLASS_SUMMONER			0x73
#define TRAINER_CLASS_FISHER			0x74
#define TRAINER_CLASS_POKESCAPER		0x75
#define TRAINER_CLASS_SIGNATURE_HERO	0x76
#define TRAINER_CLASS_PLAYER			0x77
#define TRAINER_CLASS_BARROWS_BROTHER	0x78
#define TRAINER_CLASS_LEGEND			0x79
#define TRAINER_CLASS_CHEF			    0x7a
#define TRAINER_CLASS_AGILE			    0x7b
#define TRAINER_CLASS_DARK			    0x7c
#define TRAINER_CLASS_DIVINER		    0x7d

#define TRAINER_ENCOUNTER_MUSIC_MALE         0 // standard male encounter music
#define TRAINER_ENCOUNTER_MUSIC_FEMALE       1 // standard female encounter music
#define TRAINER_ENCOUNTER_MUSIC_GIRL         2 // used for male Tubers and Young Couples too
#define TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS   3
#define TRAINER_ENCOUNTER_MUSIC_INTENSE      4
#define TRAINER_ENCOUNTER_MUSIC_COOL         5
#define TRAINER_ENCOUNTER_MUSIC_AQUA         6
#define TRAINER_ENCOUNTER_MUSIC_MAGMA        7
#define TRAINER_ENCOUNTER_MUSIC_SWIMMER      8
#define TRAINER_ENCOUNTER_MUSIC_TWINS        9 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR  10
#define TRAINER_ENCOUNTER_MUSIC_HIKER       11 // used for other trainer classes too
#define TRAINER_ENCOUNTER_MUSIC_INTERVIEWER 12
#define TRAINER_ENCOUNTER_MUSIC_RICH        13 // Rich Boys and Gentlemen
#define TRAINER_ENCOUNTER_MUSIC_PKER        14
#define TRAINER_ENCOUNTER_MUSIC_HAM         15 //HAM GRUNTS
#define TRAINER_ENCOUNTER_MUSIC_NOOB         16 //Happy noobs
#define TRAINER_ENCOUNTER_MUSIC_CHOOB         17 //Scary choobs


#define F_TRAINER_FEMALE (1 << 7)

// All trainer parties specify the IV, level, and species for each Pokémon in the
// party. Some trainer parties also specify held items and custom moves for each
// Pokémon.
#define F_TRAINER_PARTY_CUSTOM_MOVESET (1 << 0)
#define F_TRAINER_PARTY_HELD_ITEM      (1 << 1)

#endif  // GUARD_TRAINERS_H
