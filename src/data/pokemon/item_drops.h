static const struct ItemDrops sShroodleDrops[] = 
{
    {ITEM_SILVERPOWDER, 100}
};

static const struct ItemDrops sBlipbugDrops[] = 
{
    {ITEM_SILVERPOWDER, 100}
};

const struct ItemDropSpecies gItemDropSpecies[] = {
    [SPECIES_SHROODLE] = {
        .drops = sShroodleDrops,
        .dropCount = 1,
        .numDropsLower = 1,
        .numDropsUpper = 1,
    },
    [SPECIES_BLIPBUG] = {
        .drops = sBlipbugDrops,
        .dropCount = 1,
        .numDropsLower = 1,
        .numDropsUpper = 1,
    },
};