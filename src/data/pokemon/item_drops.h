static const struct ItemDrops sSewaddleDrops[] = 
{
    {ITEM_SILVERPOWDER, 50}
};

static const struct ItemDrops sBlipbugDrops[] = 
{
    {ITEM_SILVERPOWDER, 25}
};

const struct ItemDropSpecies gItemDropSpecies[] = {
    [SPECIES_SEWADDLE] = {
        .drops = sSewaddleDrops,
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