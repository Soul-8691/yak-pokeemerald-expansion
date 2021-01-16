#define TMHM_LEARNSET(moves) {(u32)(moves), ((u64)(moves) >> 32)}
#define TMHM(tmhm) ((u64)1 << (ITEM_##tmhm - ITEM_TM01_SUNNY_DAY))

// This table determines which TMs and HMs a species is capable of learning.
// Each entry is a 64-bit bit array spread across two 32-bit values, with
// each bit corresponding to a TM or HM.
const u32 gTMHMLearnsets[][2] =
{
    [SPECIES_NONE]        = TMHM_LEARNSET(0),

};
