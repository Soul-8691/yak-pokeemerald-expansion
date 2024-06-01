static const struct ItemDrops sShroodleDrops[] = 
{
    {ITEM_SILVERPOWDER, 25}
};

const struct ItemDropSpecies gItemDropSpecies[] = {
    [SPECIES_SHROODLE] = {
        .drops = sShroodleDrops,
        .dropCount = 1,
        .numDropsLower = 0,
        .numDropsUpper = 1,
    },
};