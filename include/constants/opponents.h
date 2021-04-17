#ifndef GUARD_CONSTANTS_OPPONENTS_H
#define GUARD_CONSTANTS_OPPONENTS_H

#define TRAINER_NONE                          0
#define TRAINER_MAGGIE            			  1
//route 1
#define TRAINER_GOBLIN_1_ROUTE1			      2
#define TRAINER_GOBLIN_2_ROUTE1				  3
#define TRAINER_GOBLIN_3_ROUTE1               4
#define TRAINER_FARMER_ROUTE1                 5
#define TRAINER_RSN_ROUTE1					  6
//mill lane mill
#define TRAINER_TRAINER2_MILLLANEMILL                   7
#define TRAINER_TRAINER3_MILLLANEMILL                   8
#define TRAINER_TRAINER4_MILLLANEMILL                   9
#define TRAINER_MILLIE_MILLER_MILLLANEMILL                   10
//route 12
#define TRAINER_GOBLIN_4_ROUTE12              11
#define TRAINER_GOBLIN_5_ROUTE12              12
#define TRAINER_GOBLIN_6_ROUTE12              13
#define TRAINER_GOBLIN_7_ROUTE12              14
#define TRAINER_RSN_ROUTE12                   15
//route 4
#define TRAINER_SCAMMER_ROUTE4                16
#define TRAINER_FARMER_ROUTE4                 17
#define TRAINER_MUGGER_ROUTE4                 18
//route 6
#define TRAINER_MUGGER_ROUTE6                 19

//lumbridge castle gym

#define TRAINER_LUMBRIDGE_GYM1                20
#define TRAINER_LUMBRIDGE_GYM2                21
#define TRAINER_LUMBRIDGE_GYM3                22
#define TRAINER_LUMBRIDGE_GYM4                23
#define TRAINER_DUKE                          24

//lumbridge swamp
#define TRAINER_MUGGER_LUM_SWAMP              25
#define TRAINER_SKELETON_LUM_SWAMP            26
#define TRAINER_RSN_LUM_SWAMP                 27

#define TRAINER_MITHRILMAN1                      28
#define TRAINER_MITHRILMAN2                      29
#define TRAINER_MITHRILMAN3                      30
#define TRAINER_MITHRILMAN4                      31
#define TRAINER_MITHRILMAN5                      32
#define TRAINER_MITHRILMAN6                      33
#define TRAINER_MITHRILMAN7                      34
#define TRAINER_MITHRILMAN8                      35
#define TRAINER_MITHRILMAN9                      36
#define TRAINER_MITHRILMAN10                     37

#define TRAINER_TRAINER1_MILLLANEMILL            38


// NOTE: Because each Trainer uses a flag to determine when they are defeated, there is only space for 9 additional trainers before trainer flag space overflows
//       More space can be made by shifting flags around in constants/flags.h or changing how trainer flags are handled
//       MAX_TRAINERS_COUNT can be increased but will take up additional saveblock space

#define TRAINERS_COUNT                      806
#define MAX_TRAINERS_COUNT                  864

#endif  // GUARD_CONSTANTS_OPPONENTS_H
