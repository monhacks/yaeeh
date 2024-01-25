// Maximum value for a female Pokémon is 254 (MON_FEMALE) which is 100% female.
// 255 (MON_GENDERLESS) is reserved for genderless Pokémon.
#define PERCENT_FEMALE(percent) min(254, ((percent * 255) / 100))

// Macros to allow editing every form at once
#define FLIP    0
#define NO_FLIP 1

#if P_UPDATED_STATS >= GEN_6
    #define BUTTERFREE_SP_ATK\
            .baseSpAttack  = 95,
#else
    #define BUTTERFREE_SP_ATK\
            .baseSpAttack  = 80,
#endif

#if P_UPDATED_STATS >= GEN_6
    #define PIKACHU_BASE_DEFENSES\
        .baseDefense   = 40,     \
        .baseSpDefense = 50
#else
    #define PIKACHU_BASE_DEFENSES\
        .baseDefense   = 30,     \
        .baseSpDefense = 40
#endif

#if P_UPDATED_ABILITIES >= GEN_7
    #define GENGAR_ABILITIES\
        .abilities = {ABILITY_CURSED_BODY, ABILITY_NONE},
#else
    #define GENGAR_ABILITIES\
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
#endif

#define VENUSAUR_MISC_INFO                                                  \
        .baseHP        = 80,                                                \
        .baseAttack    = 82,                                                \
        .baseDefense   = 83,                                                \
        .baseSpeed     = 80,                                                \
        .baseSpAttack  = 100,                                               \
        .baseSpDefense = 100,                                               \
        .types = {TYPE_GRASS, TYPE_POISON},                                 \
        .catchRate = 45,                                                    \
        .expYield = 236,                                                    \
        .evYield_SpAttack  = 2,                                             \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_GRASS},                  \
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL}, \
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .noFlip = FALSE

#define CHARIZARD_MISC_INFO                                             \
        .baseHP        = 78,                                            \
        .baseAttack    = 78,                                            \
        .baseDefense   = 78,                                            \
        .baseSpeed     = 108,                                           \
        .baseSpAttack  = 111,                                           \
        .baseSpDefense = 82,                                            \
        .types = {TYPE_FIRE, TYPE_FLYING},                              \
        .catchRate = 45,                                                \
        .expYield = 240,                                                \
        .evYield_SpAttack  = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},             \
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},\
        .bodyColor = BODY_COLOR_RED,                                    \
        .noFlip = FALSE

#define BLASTOISE_MISC_INFO                                             \
        .baseHP        = 90,                                            \
        .baseAttack    = 67,                                            \
        .baseDefense   = 100,                                           \
        .baseSpeed     = 78,                                            \
        .baseSpAttack  = 90,                                            \
        .baseSpDefense = 105,                                           \
        .types = {TYPE_WATER, TYPE_WATER},                              \
        .catchRate = 45,                                                \
        .expYield = 239,                                                \
        .evYield_SpDefense = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},            \
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},\
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .noFlip = FALSE

#define BUTTERFREE_MISC_INFO                                                    \
        .baseHP        = 60,                                                    \
        .baseAttack    = 40,                                                    \
        .baseDefense   = 50,                                                    \
        .baseSpeed     = 70,                                                    \
        .baseSpDefense = 80,                                                    \
        BUTTERFREE_SP_ATK                                                       \
        .types = {TYPE_BUG, TYPE_FLYING},                                       \
        .catchRate = 45,                                                        \
        .expYield = 178,                                                        \
        .evYield_SpAttack  = 2,                                                 \
        .evYield_SpDefense = 1,                                                 \
        .itemRare = ITEM_SILVER_POWDER,                                         \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = {EGG_GROUP_BUG, EGG_GROUP_BUG},                            \
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_TINTED_LENS},\
        .bodyColor = BODY_COLOR_WHITE,                                          \
        .noFlip = FALSE

#define PIKACHU_MISC_INFO(gender, flip)                                    \
        .baseHP        = 35,                                               \
        .baseAttack    = 55,                                               \
        .baseSpeed     = 90,                                               \
        .baseSpAttack  = 50,                                               \
        PIKACHU_BASE_DEFENSES,                                             \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},                          \
        .catchRate = 190,                                                  \
        .expYield = 112,                                                   \
        .evYield_Speed     = 2,                                            \
        .itemRare = ITEM_LIGHT_BALL,                                       \
        .genderRatio = gender,                                             \
        .eggCycles = 10,                                                   \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},                  \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},\
        .bodyColor = BODY_COLOR_YELLOW,                                    \
        .noFlip = flip

#define MEOWTH_MISC_INFO                                                    \
        .baseHP        = 40,                                                \
        .baseAttack    = 45,                                                \
        .baseDefense   = 35,                                                \
        .baseSpeed     = 90,                                                \
        .baseSpAttack  = 40,                                                \
        .baseSpDefense = 40,                                                \
        .types = {TYPE_NORMAL, TYPE_NORMAL},                                \
        .catchRate = 255,                                                   \
        .expYield = 58,                                                     \
        .evYield_Speed     = 1,                                             \
        .itemRare = ITEM_QUICK_CLAW,                                        \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_FIELD},                    \
        .abilities = {ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_UNNERVE}, \
        .bodyColor = BODY_COLOR_YELLOW,                                     \
        .noFlip = FALSE

#define MACHAMP_MISC_INFO                                                   \
        .baseHP        = 90,                                                \
        .baseAttack    = 130,                                               \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 55,                                                \
        .baseSpAttack  = 65,                                                \
        .baseSpDefense = 85,                                                \
        .types = {TYPE_FIGHTING, TYPE_FIGHTING},                            \
        .catchRate = 45,                                                    \
        .expYield = 227,                                                    \
        .evYield_Attack    = 3,                                             \
        .itemRare = ITEM_FOCUS_BAND,                                        \
        .genderRatio = PERCENT_FEMALE(25),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = {EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},          \
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},   \
        .bodyColor = BODY_COLOR_GRAY,                                       \
        .noFlip = FALSE

#define GENGAR_MISC_INFO                                        \
        .baseHP        = 60,                                    \
        .baseAttack    = 65,                                    \
        .baseDefense   = 60,                                    \
        .baseSpeed     = 110,                                   \
        .baseSpAttack  = 130,                                   \
        .baseSpDefense = 75,                                    \
        .types = {TYPE_GHOST, TYPE_POISON},                     \
        .catchRate = 45,                                        \
        .expYield = 225,                                        \
        .evYield_SpAttack  = 3,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 20,                                        \
        .friendship = STANDARD_FRIENDSHIP,                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                       \
        .eggGroups = {EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},\
        GENGAR_ABILITIES                                        \
        .bodyColor = BODY_COLOR_PURPLE,                         \
        .noFlip = FALSE

#define KINGLER_MISC_INFO                                                               \
        .baseHP        = 55,                                                            \
        .baseAttack    = 130,                                                           \
        .baseDefense   = 115,                                                           \
        .baseSpeed     = 80,                                                            \
        .baseSpAttack  = 45,                                                            \
        .baseSpDefense = 50,                                                            \
        .types = {TYPE_WATER, TYPE_WATER},                                              \
        .catchRate = 60,                                                                \
        .expYield = 166,                                                                \
        .evYield_Attack    = 2,                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = {EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},                            \
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE},  \
        .bodyColor = BODY_COLOR_RED,                                                    \
        .noFlip = TRUE

#define TAUROS_MISC_INFO                                                                \
        .baseHP        = 75,                                                            \
        .baseAttack    = 115,                                                           \
        .baseDefense   = 95,                                                            \
        .baseSpeed     = 110,                                                           \
        .baseSpAttack  = 30,                                                            \
        .baseSpDefense = 70,                                                            \
        .catchRate = 45,                                                                \
        .expYield = 172,                                                                \
        .genderRatio = MON_MALE,                                                        \
        .eggCycles = 20,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_SLOW,                                                      \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                               \
        .noFlip = FALSE

#define LAPRAS_MISC_INFO                                                            \
        .baseHP        = 130,                                                       \
        .baseAttack    = 85,                                                        \
        .baseDefense   = 80,                                                        \
        .baseSpeed     = 60,                                                        \
        .baseSpAttack  = 85,                                                        \
        .baseSpDefense = 95,                                                        \
        .types = {TYPE_WATER, TYPE_ICE},                                            \
        .catchRate = 45,                                                            \
        .expYield = 187,                                                            \
        .evYield_HP        = 2,                                                     \
        .itemCommon = ITEM_MYSTIC_WATER,                                            \
        .itemRare = ITEM_MYSTIC_WATER,                                              \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 40,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},                        \
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_SHELL_ARMOR, ABILITY_HYDRATION},\
        .bodyColor = BODY_COLOR_BLUE,                                               \
        .noFlip = FALSE

#define EEVEE_MISC_INFO                                                             \
        .baseHP        = 55,                                                        \
        .baseAttack    = 55,                                                        \
        .baseDefense   = 50,                                                        \
        .baseSpeed     = 55,                                                        \
        .baseSpAttack  = 45,                                                        \
        .baseSpDefense = 65,                                                        \
        .types = {TYPE_NORMAL, TYPE_NORMAL},                                        \
        .catchRate = 45,                                                            \
        .expYield = 65,                                                             \
        .evYield_SpDefense = 1,                                                     \
        .genderRatio = PERCENT_FEMALE(12.5),                                        \
        .eggCycles = 35,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_FIELD},                            \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_ADAPTABILITY, ABILITY_ANTICIPATION},\
        .bodyColor = BODY_COLOR_BROWN,                                              \
        .noFlip = FALSE

#define SNORLAX_MISC_INFO                                                       \
        .baseHP        = 160,                                                   \
        .baseAttack    = 110,                                                   \
        .baseDefense   = 65,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 65,                                                    \
        .baseSpDefense = 110,                                                   \
        .types = {TYPE_NORMAL, TYPE_NORMAL},                                    \
        .catchRate = 25,                                                        \
        .expYield = 189,                                                        \
        .evYield_HP        = 2,                                                 \
        .itemCommon = ITEM_LEFTOVERS,                                           \
        .itemRare = ITEM_LEFTOVERS,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                    \
        .eggCycles = 40,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_SLOW,                                              \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},                    \
        .abilities = {ABILITY_COMATOSE, ABILITY_THICK_FAT, ABILITY_GLUTTONY},   \
        .bodyColor = BODY_COLOR_BLACK,                                          \
        .noFlip = FALSE

#define COSPLAY_PIKACHU_SPECIES_INFO(flip) { PIKACHU_MISC_INFO(MON_FEMALE, flip) }
#define CAP_PIKACHU_SPECIES_INFO(flip)     { PIKACHU_MISC_INFO(MON_MALE, flip) }

#define PICHU_SPECIES_INFO(flip)                                           \
    {                                                                      \
        .baseHP        = 20,                                               \
        .baseAttack    = 40,                                               \
        .baseDefense   = 15,                                               \
        .baseSpeed     = 60,                                               \
        .baseSpAttack  = 35,                                               \
        .baseSpDefense = 35,                                               \
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},                          \
        .catchRate = 190,                                                  \
        .expYield = 41,                                                    \
        .evYield_Speed     = 1,                                            \
        .genderRatio = PERCENT_FEMALE(50),                                 \
        .eggCycles = 10,                                                   \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                                  \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},    \
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},\
        .bodyColor = BODY_COLOR_YELLOW,                                    \
        .noFlip = flip,                                                    \
    }

#define UNOWN_SPECIES_INFO(flip)                      \
    {                                                 \
        .baseHP        = 48,                          \
        .baseAttack    = 72,                          \
        .baseDefense   = 48,                          \
        .baseSpeed     = 48,                          \
        .baseSpAttack  = 72,                          \
        .baseSpDefense = 48,                          \
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},       \
        .catchRate = 225,                             \
        .expYield = 118,                              \
        .evYield_Attack    = 1,                       \
        .evYield_SpAttack  = 1,                       \
        .genderRatio = MON_GENDERLESS,                \
        .eggCycles = 40,                              \
        .friendship = STANDARD_FRIENDSHIP,            \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},          \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLACK,                \
        .noFlip = flip,                               \
    }

#define CASTFORM_SPECIES_INFO(type, color)            \
    {                                                 \
        .baseHP        = 70,                          \
        .baseAttack    = 70,                          \
        .baseDefense   = 70,                          \
        .baseSpeed     = 70,                          \
        .baseSpAttack  = 70,                          \
        .baseSpDefense = 70,                          \
        .types = { type, type },                      \
        .catchRate = 45,                              \
        .expYield = 147,                              \
        .evYield_HP        = 1,                       \
        .itemCommon = ITEM_MYSTIC_WATER,              \
        .itemRare = ITEM_MYSTIC_WATER,                \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 25,                              \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS},             \
        .abilities = {ABILITY_FORECAST, ABILITY_NONE},\
        .bodyColor = color,                           \
        .noFlip = FALSE,                              \
    }

#define BURMY_SPECIES_INFO(color)                                        \
    {                                                                    \
        .baseHP        = 40,                                             \
        .baseAttack    = 29,                                             \
        .baseDefense   = 45,                                             \
        .baseSpeed     = 36,                                             \
        .baseSpAttack  = 29,                                             \
        .baseSpDefense = 45,                                             \
        .types = { TYPE_BUG, TYPE_BUG},                                  \
        .catchRate = 120,                                                \
        .expYield = 45,                                                  \
        .evYield_SpDefense = 1,                                          \
        .genderRatio = PERCENT_FEMALE(50),                               \
        .eggCycles = 15,                                                 \
        .friendship = STANDARD_FRIENDSHIP,                                                \
        .growthRate = GROWTH_MEDIUM_FAST,                                \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},                                      \
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_OVERCOAT},\
        .bodyColor = color,                                              \
        .noFlip = FALSE,                                                 \
    }

#define CHERRIM_SPECIES_INFO(color)                      \
    {                                                    \
        .baseHP        = 70,                             \
        .baseAttack    = 60,                             \
        .baseDefense   = 70,                             \
        .baseSpeed     = 85,                             \
        .baseSpAttack  = 87,                             \
        .baseSpDefense = 78,                             \
        .types = { TYPE_GRASS, TYPE_GRASS},              \
        .catchRate = 75,                                 \
        .expYield = 158,                                 \
        .evYield_SpAttack  = 2,                          \
        .itemRare = ITEM_MIRACLE_SEED,                   \
        .genderRatio = PERCENT_FEMALE(50),               \
        .eggCycles = 20,                                 \
        .friendship = STANDARD_FRIENDSHIP,                                \
        .growthRate = GROWTH_MEDIUM_FAST,                \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},                    \
        .abilities = {ABILITY_FLOWER_GIFT, ABILITY_NONE},\
        .bodyColor = color,                              \
        .noFlip = FALSE,                                 \
    }

#define SHELLOS_SPECIES_INFO(color)                                                 \
    {                                                                               \
        .baseHP        = 76,                                                        \
        .baseAttack    = 48,                                                        \
        .baseDefense   = 48,                                                        \
        .baseSpeed     = 34,                                                        \
        .baseSpAttack  = 57,                                                        \
        .baseSpDefense = 62,                                                        \
        .types = { TYPE_WATER, TYPE_WATER},                                         \
        .catchRate = 190,                                                           \
        .expYield = 65,                                                             \
        .evYield_HP        = 1,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},                                           \
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_UNAWARE},\
        .bodyColor = color,                                                         \
        .noFlip = FALSE,                                                            \
    }

#define GASTRODON_SPECIES_INFO(color)                                               \
    {                                                                               \
        .baseHP        = 111,                                                       \
        .baseAttack    = 83,                                                        \
        .baseDefense   = 68,                                                        \
        .baseSpeed     = 39,                                                        \
        .baseSpAttack  = 92,                                                        \
        .baseSpDefense = 82,                                                        \
        .types = { TYPE_WATER, TYPE_GROUND},                                        \
        .catchRate = 75,                                                            \
        .expYield = 166,                                                            \
        .evYield_HP        = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                                           \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},                                           \
        .abilities = {ABILITY_STICKY_HOLD, ABILITY_STORM_DRAIN, ABILITY_UNAWARE},\
        .bodyColor = color,                                                         \
        .noFlip = FALSE,                                                            \
    }

#define ROTOM_FORM_SPECIES_INFO(type, flip, hiddenability)           \
    {                                                 \
        .baseHP        = 50,                          \
        .baseAttack    = 65,                          \
        .baseDefense   = 107,                         \
        .baseSpeed     = 86,                          \
        .baseSpAttack  = 105,                         \
        .baseSpDefense = 107,                         \
        .types = { TYPE_ELECTRIC, type },             \
        .catchRate = 45,                              \
        .expYield = 182,                              \
        .evYield_Speed     = 1,                       \
        .evYield_SpAttack  = 1,                       \
        .genderRatio = MON_GENDERLESS,                \
        .eggCycles = 20,                              \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},             \
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, hiddenability},         \
        .bodyColor = BODY_COLOR_RED,                  \
        .noFlip = flip,                               \
    }

#define ARCEUS_SPECIES_INFO(type)                      \
    {                                                  \
        .baseHP        = 120,                          \
        .baseAttack    = 120,                          \
        .baseDefense   = 120,                          \
        .baseSpeed     = 120,                          \
        .baseSpAttack  = 120,                          \
        .baseSpDefense = 120,                          \
        .types = { type, type },                       \
        .catchRate = 3,                                \
        .expYield = 324,                               \
        .evYield_HP        = 3,                        \
        .genderRatio = MON_GENDERLESS,                 \
        .eggCycles = 120,                              \
        .friendship = 0,                               \
        .growthRate = GROWTH_SLOW,                     \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},           \
        .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_WHITE,                 \
        .noFlip = FALSE,                               \
        .flags = SPECIES_FLAG_MYTHICAL,                \
    }

#define GARBODOR_MISC_INFO                                                      \
        .baseHP        = 80,                                                    \
        .baseAttack    = 95,                                                    \
        .baseDefense   = 82,                                                    \
        .baseSpeed     = 75,                                                    \
        .baseSpAttack  = 60,                                                    \
        .baseSpDefense = 82,                                                    \
        .types = {TYPE_POISON, TYPE_POISON},                                    \
        .catchRate = 60,                                                        \
        .expYield = 166,                                                        \
        .evYield_Attack    = 2,                                                 \
        .itemCommon = ITEM_SILK_SCARF,                                          \
        .itemRare = ITEM_BLACK_SLUDGE,                                          \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = {EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},                    \
        .abilities = {ABILITY_STENCH, ABILITY_WEAK_ARMOR, ABILITY_AFTERMATH},   \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .noFlip = TRUE

#define DEERLING_SPECIES_INFO(color)                                                   \
    {                                                                                \
        .baseHP        = 60,                                                         \
        .baseAttack    = 60,                                                         \
        .baseDefense   = 50,                                                         \
        .baseSpeed     = 75,                                                         \
        .baseSpAttack  = 40,                                                         \
        .baseSpDefense = 50,                                                         \
        .types = { TYPE_NORMAL, TYPE_GRASS},                                         \
        .catchRate = 190,                                                            \
        .expYield = 67,                                                              \
        .evYield_Speed     = 1,                                                      \
        .genderRatio = PERCENT_FEMALE(50),                                           \
        .eggCycles = 20,                                                             \
        .friendship = STANDARD_FRIENDSHIP,                                                            \
        .growthRate = GROWTH_MEDIUM_FAST,                                            \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                                                \
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE},\
        .bodyColor = color,                                                          \
        .noFlip = FALSE,                                                             \
    }

#define SAWSBUCK_SPECIES_INFO                                                        \
    {                                                                                \
        .baseHP        = 80,                                                         \
        .baseAttack    = 100,                                                        \
        .baseDefense   = 70,                                                         \
        .baseSpeed     = 95,                                                         \
        .baseSpAttack  = 60,                                                         \
        .baseSpDefense = 70,                                                         \
        .types = { TYPE_NORMAL, TYPE_GRASS},                                         \
        .catchRate = 75,                                                             \
        .expYield = 166,                                                             \
        .evYield_Attack    = 2,                                                      \
        .genderRatio = PERCENT_FEMALE(50),                                           \
        .eggCycles = 20,                                                             \
        .friendship = STANDARD_FRIENDSHIP,                                                            \
        .growthRate = GROWTH_MEDIUM_FAST,                                            \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                                                \
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SAP_SIPPER, ABILITY_SERENE_GRACE},\
        .bodyColor = BODY_COLOR_BROWN,                                               \
        .noFlip = FALSE,                                                             \
    }

#define GENESECT_SPECIES_INFO                         \
    {                                                 \
        .baseHP        = 71,                          \
        .baseAttack    = 120,                         \
        .baseDefense   = 95,                          \
        .baseSpeed     = 99,                          \
        .baseSpAttack  = 120,                         \
        .baseSpDefense = 95,                          \
        .types = { TYPE_BUG, TYPE_STEEL},             \
        .catchRate = 3,                               \
        .expYield = 270,                              \
        .evYield_Attack    = 1,                       \
        .evYield_Speed     = 1,                       \
        .evYield_SpAttack  = 1,                       \
        .genderRatio = MON_GENDERLESS,                \
        .eggCycles = 120,                             \
        .friendship = 0,                              \
        .growthRate = GROWTH_SLOW,                    \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},          \
        .abilities = {ABILITY_DOWNLOAD, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_PURPLE,               \
        .noFlip = FALSE,                              \
        .flags = SPECIES_FLAG_MYTHICAL,               \
    }

#define VIVILLON_SPECIES_INFO(color)                                                    \
    {                                                                                   \
        .baseHP        = 80,                                                            \
        .baseAttack    = 52,                                                            \
        .baseDefense   = 50,                                                            \
        .baseSpeed     = 89,                                                            \
        .baseSpAttack  = 90,                                                            \
        .baseSpDefense = 50,                                                            \
        .types = { TYPE_BUG, TYPE_FLYING},                                              \
        .catchRate = 45,                                                                \
        .expYield = 185,                                                                \
        .evYield_HP        = 1,                                                         \
        .evYield_Speed     = 1,                                                         \
        .evYield_SpAttack  = 1,                                                         \
        .genderRatio = PERCENT_FEMALE(50),                                              \
        .eggCycles = 15,                                                                \
        .friendship = STANDARD_FRIENDSHIP,                                                               \
        .growthRate = GROWTH_MEDIUM_FAST,                                               \
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},                                                     \
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD},\
        .bodyColor = color,                                                             \
        .noFlip = FALSE,                                                                \
    }

#define FLABEBE_SPECIES_INFO                                                \
    {                                                                       \
        .baseHP        = 44,                                                \
        .baseAttack    = 38,                                                \
        .baseDefense   = 39,                                                \
        .baseSpeed     = 42,                                                \
        .baseSpAttack  = 61,                                                \
        .baseSpDefense = 79,                                                \
        .types = { TYPE_FAIRY, TYPE_FAIRY},                                 \
        .catchRate = 225,                                                   \
        .expYield = 61,                                                     \
        .evYield_SpDefense = 1,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }

#define FLOETTE_SPECIES_INFO                                                \
    {                                                                       \
        .baseHP        = 54,                                                \
        .baseAttack    = 45,                                                \
        .baseDefense   = 47,                                                \
        .baseSpeed     = 52,                                                \
        .baseSpAttack  = 75,                                                \
        .baseSpDefense = 98,                                                \
        .types = { TYPE_FAIRY, TYPE_FAIRY},                                 \
        .catchRate = 120,                                                   \
        .expYield = 130,                                                    \
        .evYield_SpDefense = 2,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }

#define FLORGES_SPECIES_INFO                                                \
    {                                                                       \
        .baseHP        = 78,                                                \
        .baseAttack    = 65,                                                \
        .baseDefense   = 68,                                                \
        .baseSpeed     = 75,                                                \
        .baseSpAttack  = 112,                                               \
        .baseSpDefense = 154,                                               \
        .types = { TYPE_FAIRY, TYPE_FAIRY},                                 \
        .catchRate = 45,                                                    \
        .expYield = 248,                                                    \
        .evYield_SpDefense = 3,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},                                       \
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},\
        .bodyColor = BODY_COLOR_WHITE,                                      \
        .noFlip = FALSE,                                                    \
    }

#define FURFROU_SPECIES_INFO(flip)                    \
    {                                                 \
        .baseHP        = 75,                          \
        .baseAttack    = 80,                          \
        .baseDefense   = 60,                          \
        .baseSpeed     = 102,                         \
        .baseSpAttack  = 65,                          \
        .baseSpDefense = 90,                          \
        .types = { TYPE_NORMAL, TYPE_NORMAL},         \
        .catchRate = 160,                             \
        .expYield = 165,                              \
        .evYield_Speed     = 1,                       \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 20,                              \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                 \
        .abilities = {ABILITY_FUR_COAT, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_WHITE,                \
        .noFlip = flip,                               \
    }

#define PUMPKABOO_MISC_INFO                                            \
        .types = { TYPE_GHOST, TYPE_GRASS},                            \
        .catchRate = 120,                                              \
        .expYield = 67,                                                \
        .evYield_Defense   = 1,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},                              \
        .abilities = {ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA},\
        .bodyColor = BODY_COLOR_BROWN,                                 \
        .noFlip = FALSE

#define GOURGEIST_MISC_INFO                                            \
        .types = { TYPE_GHOST, TYPE_GRASS},                            \
        .catchRate = 60,                                               \
        .expYield = 173,                                               \
        .evYield_Defense   = 2,                                        \
        .genderRatio = PERCENT_FEMALE(50),                             \
        .eggCycles = 20,                                               \
        .friendship = STANDARD_FRIENDSHIP,                                              \
        .growthRate = GROWTH_MEDIUM_FAST,                              \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},                              \
        .abilities = {ABILITY_PICKUP, ABILITY_FRISK, ABILITY_INSOMNIA},\
        .bodyColor = BODY_COLOR_BROWN,                                 \
        .noFlip = FALSE

#define XERNEAS_SPECIES_INFO                            \
    {                                                   \
        .baseHP        = 126,                           \
        .baseAttack    = 131,                           \
        .baseDefense   = 95,                            \
        .baseSpeed     = 99,                            \
        .baseSpAttack  = 131,                           \
        .baseSpDefense = 98,                            \
        .types = { TYPE_FAIRY, TYPE_FAIRY},             \
        .catchRate = 45,                                \
        .expYield = 306,                                \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},            \
        .abilities = {ABILITY_FAIRY_AURA, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLUE,                   \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY,                \
    }

#define ZYGARDE_50_SPECIES_INFO(ability)     \
    {                                        \
        .baseHP        = 108,                \
        .baseAttack    = 100,                \
        .baseDefense   = 121,                \
        .baseSpeed     = 95,                 \
        .baseSpAttack  = 81,                 \
        .baseSpDefense = 95,                 \
        .types = { TYPE_DRAGON, TYPE_GROUND},\
        .catchRate = 3,                      \
        .expYield = 270,                     \
        .evYield_HP        = 3,              \
        .genderRatio = MON_GENDERLESS,       \
        .eggCycles = 120,                    \
        .friendship = 0,                     \
        .growthRate = GROWTH_SLOW,           \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED}, \
        .abilities = {ability, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GREEN,       \
        .noFlip = TRUE,                      \
        .flags = SPECIES_FLAG_LEGENDARY,     \
    }

#define ZYGARDE_10_SPECIES_INFO(ability)     \
    {                                        \
        .baseHP        = 54,                 \
        .baseAttack    = 100,                \
        .baseDefense   = 71,                 \
        .baseSpeed     = 115,                \
        .baseSpAttack  = 61,                 \
        .baseSpDefense = 85,                 \
        .types = { TYPE_DRAGON, TYPE_GROUND},\
        .catchRate = 3,                      \
        .expYield = 219,                     \
        .evYield_HP        = 3,              \
        .genderRatio = MON_GENDERLESS,       \
        .eggCycles = 120,                    \
        .friendship = 0,                     \
        .growthRate = GROWTH_SLOW,           \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED}, \
        .abilities = {ability, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLACK,       \
        .noFlip = TRUE,                      \
        .flags = SPECIES_FLAG_LEGENDARY,     \
    }

#define ORICORIO_SPECIES_INFO(type, color)          \
{                                                   \
        .baseHP        = 75,                        \
        .baseAttack    = 70,                        \
        .baseDefense   = 70,                        \
        .baseSpeed     = 93,                        \
        .baseSpAttack  = 98,                        \
        .baseSpDefense = 70,                        \
        .types = { type, TYPE_FLYING },             \
        .catchRate = 45,                            \
        .expYield = 167,                            \
        .evYield_SpAttack  = 2,                     \
        .itemRare = ITEM_HONEY,                     \
        .genderRatio = PERCENT_FEMALE(75),          \
        .eggCycles = 20,                            \
        .friendship = STANDARD_FRIENDSHIP,                           \
        .growthRate = GROWTH_MEDIUM_FAST,           \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},              \
        .abilities = {ABILITY_DANCER, ABILITY_NONE},\
        .bodyColor = color,                         \
        .noFlip = FALSE,                            \
    }

#define ROCKRUFF_SPECIES_INFO(ability1, ability2, hiddenAbility)\
    {                                                           \
        .baseHP        = 45,                                    \
        .baseAttack    = 65,                                    \
        .baseDefense   = 40,                                    \
        .baseSpeed     = 60,                                    \
        .baseSpAttack  = 30,                                    \
        .baseSpDefense = 40,                                    \
        .types = { TYPE_ROCK, TYPE_ROCK},                       \
        .catchRate = 190,                                       \
        .expYield = 56,                                         \
        .evYield_Attack    = 1,                                 \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 15,                                        \
        .friendship = STANDARD_FRIENDSHIP,                                       \
        .growthRate = GROWTH_MEDIUM_FAST,                       \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},                           \
        .abilities = {ability1, ability2, hiddenAbility},       \
        .bodyColor = BODY_COLOR_BROWN,                          \
        .noFlip = FALSE,                                        \
    }

#define SILVALLY_SPECIES_INFO(type)                     \
    {                                                   \
        .baseHP        = 95,                            \
        .baseAttack    = 95,                            \
        .baseDefense   = 95,                            \
        .baseSpeed     = 95,                            \
        .baseSpAttack  = 95,                            \
        .baseSpDefense = 95,                            \
        .types = { type, type },                        \
        .catchRate = 3,                                 \
        .expYield = 257,                                \
        .evYield_HP        = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},            \
        .abilities = {ABILITY_RKS_SYSTEM, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GRAY,                   \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_LEGENDARY,                \
    }

#define MINIOR_METEOR_ATTRIBUTES\
        .baseHP        = 60,    \
        .baseAttack    = 60,    \
        .baseDefense   = 100,   \
        .baseSpeed     = 60,    \
        .baseSpAttack  = 60,    \
        .baseSpDefense = 100

#define MINIOR_CORE_ATTRIBUTES\
        .baseHP        = 60,  \
        .baseAttack    = 100, \
        .baseDefense   = 60,  \
        .baseSpeed     = 120, \
        .baseSpAttack  = 100, \
        .baseSpDefense = 60

#define MINIOR_MISC_INFO(color)                             \
        .types = { TYPE_ROCK, TYPE_FLYING},                 \
        .catchRate = 30,                                    \
        .expYield = 154,                                    \
        .evYield_Defense   = 1,                             \
        .evYield_SpDefense = 1,                             \
        .itemRare = ITEM_STAR_PIECE,                        \
        .genderRatio = MON_GENDERLESS,                      \
        .eggCycles = 25,                                    \
        .friendship = STANDARD_FRIENDSHIP,                                   \
        .growthRate = GROWTH_MEDIUM_SLOW,                   \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},                     \
        .abilities = {ABILITY_SHIELDS_DOWN, ABILITY_NONE},  \
        .bodyColor = color,                                 \
        .noFlip = TRUE

#define MINIOR_METEOR_SPECIES_INFO          \
    {                                       \
        MINIOR_METEOR_ATTRIBUTES,           \
        MINIOR_MISC_INFO(BODY_COLOR_BROWN), \
    }


#define MINIOR_CORE_SPECIES_INFO(color) \
    {                                   \
        MINIOR_CORE_ATTRIBUTES,         \
        MINIOR_MISC_INFO(color),        \
    }

#define MIMIKYU_SPECIES_INFO                          \
    {                                                 \
        .baseHP        = 55,                          \
        .baseAttack    = 90,                          \
        .baseDefense   = 80,                          \
        .baseSpeed     = 96,                          \
        .baseSpAttack  = 50,                          \
        .baseSpDefense = 105,                         \
        .types = { TYPE_GHOST, TYPE_FAIRY},           \
        .catchRate = 45,                              \
        .expYield = 167,                              \
        .evYield_SpDefense = 2,                       \
        .itemRare = ITEM_CHESTO_BERRY,                \
        .genderRatio = PERCENT_FEMALE(50),            \
        .eggCycles = 20,                              \
        .friendship = STANDARD_FRIENDSHIP,                             \
        .growthRate = GROWTH_MEDIUM_FAST,             \
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},             \
        .abilities = {ABILITY_DISGUISE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_YELLOW,               \
        .noFlip = FALSE,                              \
    }

#define MAGEARNA_SPECIES_INFO(color)                    \
    {                                                   \
        .baseHP        = 80,                            \
        .baseAttack    = 95,                            \
        .baseDefense   = 115,                           \
        .baseSpeed     = 65,                            \
        .baseSpAttack  = 130,                           \
        .baseSpDefense = 115,                           \
        .types = { TYPE_STEEL, TYPE_FAIRY},             \
        .catchRate = 3,                                 \
        .expYield = 270,                                \
        .evYield_SpAttack  = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},            \
        .abilities = {ABILITY_SOUL_HEART, ABILITY_NONE},\
        .bodyColor = color,                             \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                 \
    }

#define MELMETAL_MISC_INFO                                              \
        .baseHP        = 135,                                           \
        .baseAttack    = 143,                                           \
        .baseDefense   = 143,                                           \
        .baseSpeed     = 34,                                            \
        .baseSpAttack  = 80,                                            \
        .baseSpDefense = 65,                                            \
        .types = {TYPE_STEEL, TYPE_STEEL},                              \
        .catchRate = 3,                                                 \
        .expYield = 270,                                                \
        .evYield_Attack    = 3,                                         \
        .genderRatio = MON_GENDERLESS,                                  \
        .eggCycles = 120,                                               \
        .friendship = 0,                                                \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = {EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},  \
        .abilities = {ABILITY_IRON_FIST, ABILITY_NONE},                 \
        .bodyColor = BODY_COLOR_GRAY,                                   \
        .noFlip = FALSE,                                                \
        .flags = SPECIES_FLAG_MYTHICAL

#define RILLABOOM_MISC_INFO                                                 \
        .baseHP        = 100,                                               \
        .baseAttack    = 125,                                               \
        .baseDefense   = 90,                                                \
        .baseSpeed     = 85,                                                \
        .baseSpAttack  = 60,                                                \
        .baseSpDefense = 70,                                                \
        .types = {TYPE_GRASS, TYPE_GRASS},                                  \
        .catchRate = 45,                                                    \
        .expYield = 265,                                                    \
        .evYield_Attack    = 3,                                             \
        .genderRatio = PERCENT_FEMALE(12.5),                                \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_SLOW,                                   \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_GRASS},                    \
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},\
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .noFlip = FALSE

#define CINDERACE_MISC_INFO                                         \
        .baseHP        = 80,                                        \
        .baseAttack    = 116,                                       \
        .baseDefense   = 75,                                        \
        .baseSpeed     = 119,                                       \
        .baseSpAttack  = 65,                                        \
        .baseSpDefense = 75,                                        \
        .types = {TYPE_FIRE, TYPE_FIRE},                            \
        .catchRate = 45,                                            \
        .expYield = 265,                                            \
        .evYield_Speed     = 3,                                     \
        .genderRatio = PERCENT_FEMALE(12.5),                        \
        .eggCycles = 20,                                            \
        .friendship = STANDARD_FRIENDSHIP,                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                           \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},       \
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO}, \
        .bodyColor = BODY_COLOR_WHITE,                              \
        .noFlip = FALSE

#define INTELEON_MISC_INFO                                              \
        .baseHP        = 70,                                            \
        .baseAttack    = 85,                                            \
        .baseDefense   = 65,                                            \
        .baseSpeed     = 120,                                           \
        .baseSpAttack  = 125,                                           \
        .baseSpDefense = 65,                                            \
        .types = {TYPE_WATER, TYPE_WATER},                              \
        .catchRate = 45,                                                \
        .expYield = 265,                                                \
        .evYield_Speed     = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = {EGG_GROUP_WATER_1, EGG_GROUP_FIELD},              \
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},   \
        .bodyColor = BODY_COLOR_BLUE,                                   \
        .noFlip = FALSE

#define CORVIKNIGHT_MISC_INFO                                                   \
        .baseHP        = 98,                                                    \
        .baseAttack    = 87,                                                    \
        .baseDefense   = 105,                                                   \
        .baseSpeed     = 67,                                                    \
        .baseSpAttack  = 53,                                                    \
        .baseSpDefense = 85,                                                    \
        .types = {TYPE_FLYING, TYPE_STEEL},                                     \
        .catchRate = 45,                                                        \
        .expYield = 248,                                                        \
        .evYield_Defense   = 3,                                                 \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 15,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_SLOW,                                       \
        .eggGroups = {EGG_GROUP_FLYING, EGG_GROUP_FLYING},                      \
        .abilities = {ABILITY_PRESSURE, ABILITY_UNNERVE, ABILITY_MIRROR_ARMOR}, \
        .bodyColor = BODY_COLOR_PURPLE,                                         \
        .noFlip = FALSE

#define ORBEETLE_MISC_INFO                                              \
        .baseHP        = 60,                                            \
        .baseAttack    = 45,                                            \
        .baseDefense   = 110,                                           \
        .baseSpeed     = 90,                                            \
        .baseSpAttack  = 80,                                            \
        .baseSpDefense = 120,                                           \
        .types = {TYPE_BUG, TYPE_PSYCHIC},                              \
        .catchRate = 45,                                                \
        .expYield = 253,                                                \
        .evYield_SpDefense = 3,                                         \
        .itemRare = ITEM_PSYCHIC_SEED,                                  \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 15,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_FAST,                               \
        .eggGroups = {EGG_GROUP_BUG, EGG_GROUP_BUG},                    \
        .abilities = {ABILITY_SWARM, ABILITY_FRISK, ABILITY_TELEPATHY}, \
        .bodyColor = BODY_COLOR_RED,                                    \
        .noFlip = FALSE

#define DREDNAW_MISC_INFO                                                           \
        .baseHP        = 90,                                                        \
        .baseAttack    = 115,                                                       \
        .baseDefense   = 90,                                                        \
        .baseSpeed     = 74,                                                        \
        .baseSpAttack  = 48,                                                        \
        .baseSpDefense = 68,                                                        \
        .types = {TYPE_WATER, TYPE_ROCK},                                           \
        .catchRate = 75,                                                            \
        .expYield = 170,                                                            \
        .evYield_Attack    = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = {EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},                        \
        .abilities = {ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM}, \
        .bodyColor = BODY_COLOR_GREEN,                                              \
        .noFlip = FALSE

#define COALOSSAL_MISC_INFO                                                         \
        .baseHP        = 110,                                                       \
        .baseAttack    = 80,                                                        \
        .baseDefense   = 120,                                                       \
        .baseSpeed     = 30,                                                        \
        .baseSpAttack  = 80,                                                        \
        .baseSpDefense = 90,                                                        \
        .types = {TYPE_ROCK, TYPE_FIRE},                                            \
        .catchRate = 45,                                                            \
        .expYield = 255,                                                            \
        .evYield_Defense   = 3,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 15,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_SLOW,                                           \
        .eggGroups = {EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},                        \
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE},\
        .bodyColor = BODY_COLOR_BLACK,                                              \
        .noFlip = FALSE

#define FLAPPLE_MISC_INFO                                               \
        .baseHP        = 70,                                            \
        .baseAttack    = 110,                                           \
        .baseDefense   = 80,                                            \
        .baseSpeed     = 70,                                            \
        .baseSpAttack  = 95,                                            \
        .baseSpDefense = 60,                                            \
        .types = {TYPE_GRASS, TYPE_DRAGON},                             \
        .catchRate = 45,                                                \
        .expYield = 170,                                                \
        .evYield_Attack    = 2,                                         \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 20,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_ERRATIC,                                   \
        .eggGroups = {EGG_GROUP_GRASS, EGG_GROUP_DRAGON},               \
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_HUSTLE}, \
        .bodyColor = BODY_COLOR_GREEN,                                  \
        .noFlip = FALSE

#define APPLETUN_MISC_INFO                                                  \
        .baseHP        = 110,                                               \
        .baseAttack    = 85,                                                \
        .baseDefense   = 80,                                                \
        .baseSpeed     = 30,                                                \
        .baseSpAttack  = 100,                                               \
        .baseSpDefense = 80,                                                \
        .types = {TYPE_GRASS, TYPE_DRAGON},                                 \
        .catchRate = 45,                                                    \
        .expYield = 170,                                                    \
        .evYield_HP        = 2,                                             \
        .genderRatio = PERCENT_FEMALE(50),                                  \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_ERRATIC,                                       \
        .eggGroups = {EGG_GROUP_GRASS, EGG_GROUP_DRAGON},                   \
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_THICK_FAT},  \
        .bodyColor = BODY_COLOR_GREEN,                                      \
        .noFlip = FALSE

#define SANDACONDA_MISC_INFO                                                 \
        .baseHP        = 72,                                                    \
        .baseAttack    = 107,                                                   \
        .baseDefense   = 125,                                                   \
        .baseSpeed     = 71,                                                    \
        .baseSpAttack  = 65,                                                    \
        .baseSpDefense = 70,                                                    \
        .types = {TYPE_GROUND, TYPE_GROUND},                                    \
        .catchRate = 120,                                                       \
        .expYield = 179,                                                        \
        .evYield_Defense   = 2,                                                 \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_DRAGON},                       \
        .abilities = {ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL}, \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .noFlip = FALSE

#define CRAMORANT_SPECIES_INFO                              \
    {                                                     \
        .baseHP        = 70,                              \
        .baseAttack    = 85,                              \
        .baseDefense   = 55,                              \
        .baseSpeed     = 85,                              \
        .baseSpAttack  = 85,                              \
        .baseSpDefense = 95,                              \
        .types = { TYPE_FLYING, TYPE_WATER},              \
        .catchRate = 45,                                  \
        .expYield = 166,                                  \
        .evYield_SpDefense = 2,                           \
        .genderRatio = PERCENT_FEMALE(50),                \
        .eggCycles = 20,                                  \
        .friendship = STANDARD_FRIENDSHIP,                                 \
        .growthRate = GROWTH_MEDIUM_FAST,                 \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},                    \
        .abilities = {ABILITY_GULP_MISSILE, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_BLUE,                     \
        .noFlip = FALSE,                                  \
    }

#define TOXTRICITY_MISC_INFO(ability2)                                  \
        .baseHP        = 75,                                            \
        .baseAttack    = 98,                                            \
        .baseDefense   = 70,                                            \
        .baseSpeed     = 75,                                            \
        .baseSpAttack  = 114,                                           \
        .baseSpDefense = 70,                                            \
        .types = { TYPE_ELECTRIC, TYPE_POISON},                         \
        .catchRate = 45,                                                \
        .expYield = 176,                                                \
        .evYield_SpAttack  = 2,                                         \
        .genderRatio = PERCENT_FEMALE(50),                              \
        .eggCycles = 25,                                                \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_MEDIUM_SLOW,                               \
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},     \
        .abilities = {ABILITY_PUNK_ROCK, ability2, ABILITY_TECHNICIAN}, \
        .bodyColor = BODY_COLOR_PURPLE,                                 \
        .noFlip = FALSE

#define CENTISKORCH_MISC_INFO                                                       \
        .baseHP        = 100,                                                       \
        .baseAttack    = 115,                                                       \
        .baseDefense   = 65,                                                        \
        .baseSpeed     = 65,                                                        \
        .baseSpAttack  = 90,                                                        \
        .baseSpDefense = 90,                                                        \
        .types = {TYPE_FIRE, TYPE_BUG},                                             \
        .catchRate = 75,                                                            \
        .expYield = 184,                                                            \
        .evYield_Attack    = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = {EGG_GROUP_BUG, EGG_GROUP_BUG},                                \
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY}, \
        .bodyColor = BODY_COLOR_RED,                                                \
        .noFlip = FALSE

#define SINISTEA_SPECIES_INFO                                                  \
    {                                                                        \
        .baseHP        = 40,                                                 \
        .baseAttack    = 45,                                                 \
        .baseDefense   = 45,                                                 \
        .baseSpeed     = 50,                                                 \
        .baseSpAttack  = 74,                                                 \
        .baseSpDefense = 54,                                                 \
        .types = { TYPE_GHOST, TYPE_GHOST},                                  \
        .catchRate = 120,                                                    \
        .expYield = 62,                                                      \
        .evYield_SpAttack  = 1,                                              \
        .genderRatio = MON_GENDERLESS,                                       \
        .eggCycles = 20,                                                     \
        .friendship = STANDARD_FRIENDSHIP,                                                    \
        .growthRate = GROWTH_MEDIUM_FAST,                                    \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},                                    \
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},\
        .bodyColor = BODY_COLOR_PURPLE,                                      \
        .noFlip = FALSE,                                                     \
    }

#define POLTEAGEIST_SPECIES_INFO                                             \
    {                                                                        \
        .baseHP        = 60,                                                 \
        .baseAttack    = 65,                                                 \
        .baseDefense   = 65,                                                 \
        .baseSpeed     = 70,                                                 \
        .baseSpAttack  = 134,                                                \
        .baseSpDefense = 114,                                                \
        .types = { TYPE_GHOST, TYPE_GHOST},                                  \
        .catchRate = 60,                                                     \
        .expYield = 178,                                                     \
        .evYield_SpAttack  = 2,                                              \
        .genderRatio = MON_GENDERLESS,                                       \
        .eggCycles = 20,                                                     \
        .friendship = STANDARD_FRIENDSHIP,                                                    \
        .growthRate = GROWTH_MEDIUM_FAST,                                    \
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},                                    \
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},\
        .bodyColor = BODY_COLOR_PURPLE,                                      \
        .noFlip = FALSE,                                                     \
    }

#define HATTERENE_MISC_INFO                                                         \
        .baseHP        = 57,                                                        \
        .baseAttack    = 90,                                                        \
        .baseDefense   = 95,                                                        \
        .baseSpeed     = 29,                                                        \
        .baseSpAttack  = 136,                                                       \
        .baseSpDefense = 103,                                                       \
        .types = {TYPE_PSYCHIC, TYPE_FAIRY},                                        \
        .catchRate = 45,                                                            \
        .expYield = 255,                                                            \
        .evYield_SpAttack  = 3,                                                     \
        .genderRatio = MON_FEMALE,                                                  \
        .eggCycles = 20,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_SLOW,                                                  \
        .eggGroups = {EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},                            \
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},  \
        .bodyColor = BODY_COLOR_PINK,                                               \
        .noFlip = FALSE

#define GRIMMSNARL_MISC_INFO                                                \
        .baseHP        = 95,                                                \
        .baseAttack    = 120,                                               \
        .baseDefense   = 65,                                                \
        .baseSpeed     = 60,                                                \
        .baseSpAttack  = 95,                                                \
        .baseSpDefense = 75,                                                \
        .types = {TYPE_DARK, TYPE_FAIRY},                                   \
        .catchRate = 45,                                                    \
        .expYield = 255,                                                    \
        .evYield_Attack    = 3,                                             \
        .genderRatio = MON_MALE,                                            \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = {EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE},               \
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},\
        .bodyColor = BODY_COLOR_PURPLE,                                     \
        .noFlip = FALSE

#define ALCREMIE_MISC_INFO(color)                                           \
        .baseHP        = 65,                                                \
        .baseAttack    = 60,                                                \
        .baseDefense   = 75,                                                \
        .baseSpeed     = 64,                                                \
        .baseSpAttack  = 110,                                               \
        .baseSpDefense = 121,                                               \
        .types = { TYPE_FAIRY, TYPE_FAIRY},                                 \
        .catchRate = 100,                                                   \
        .expYield = 173,                                                    \
        .evYield_SpDefense = 2,                                             \
        .genderRatio = MON_FEMALE,                                          \
        .eggCycles = 20,                                                    \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                                   \
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS},               \
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL},\
        .bodyColor = color,                                                 \
        .noFlip = FALSE

#define MORPEKO_SPECIES_INFO                               \
    {                                                      \
        .baseHP        = 58,                               \
        .baseAttack    = 95,                               \
        .baseDefense   = 58,                               \
        .baseSpeed     = 97,                               \
        .baseSpAttack  = 70,                               \
        .baseSpDefense = 58,                               \
        .types = { TYPE_ELECTRIC, TYPE_DARK},              \
        .catchRate = 180,                                  \
        .expYield = 153,                                   \
        .evYield_Speed     = 2,                            \
        .genderRatio = PERCENT_FEMALE(50),                 \
        .eggCycles = 10,                                   \
        .friendship = STANDARD_FRIENDSHIP,                                  \
        .growthRate = GROWTH_MEDIUM_FAST,                  \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_FAIRY},   \
        .abilities = {ABILITY_HUNGER_SWITCH, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_YELLOW,                    \
        .noFlip = FALSE,                                   \
    }

#define COPPERAJAH_MISC_INFO                                                    \
        .baseHP        = 122,                                                   \
        .baseAttack    = 130,                                                   \
        .baseDefense   = 69,                                                    \
        .baseSpeed     = 30,                                                    \
        .baseSpAttack  = 80,                                                    \
        .baseSpDefense = 69,                                                    \
        .types = {TYPE_STEEL, TYPE_STEEL},                                      \
        .catchRate = 90,                                                        \
        .expYield = 175,                                                        \
        .evYield_Attack    = 2,                                                 \
        .itemRare = ITEM_LAGGING_TAIL,                                          \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 25,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = {EGG_GROUP_FIELD, EGG_GROUP_MINERAL},                      \
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL},  \
        .bodyColor = BODY_COLOR_GREEN,                                          \
        .noFlip = FALSE

#define DURALUDON_MISC_INFO                                                         \
        .baseHP        = 70,                                                        \
        .baseAttack    = 95,                                                        \
        .baseDefense   = 115,                                                       \
        .baseSpeed     = 85,                                                        \
        .baseSpAttack  = 120,                                                       \
        .baseSpDefense = 50,                                                        \
        .types = {TYPE_STEEL, TYPE_DRAGON},                                         \
        .catchRate = 45,                                                            \
        .expYield = 187,                                                            \
        .evYield_SpAttack  = 2,                                                     \
        .genderRatio = PERCENT_FEMALE(50),                                          \
        .eggCycles = 30,                                                            \
        .friendship = STANDARD_FRIENDSHIP,                                          \
        .growthRate = GROWTH_MEDIUM_FAST,                                           \
        .eggGroups = {EGG_GROUP_MINERAL, EGG_GROUP_DRAGON},                         \
        .abilities = {ABILITY_LIGHT_METAL, ABILITY_HEAVY_METAL, ABILITY_STALWART},  \
        .bodyColor = BODY_COLOR_WHITE,                                              \
        .noFlip = FALSE

#define URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO                           \
        .baseHP        = 100,                                           \
        .baseAttack    = 130,                                           \
        .baseDefense   = 100,                                           \
        .baseSpeed     = 97,                                            \
        .baseSpAttack  = 63,                                            \
        .baseSpDefense = 60,                                            \
        .types = {TYPE_FIGHTING, TYPE_DARK},                            \
        .catchRate = 3,                                                 \
        .expYield = 275,                                                \
        .evYield_Attack    = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 120,                                               \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = {EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},  \
        .abilities = {ABILITY_UNSEEN_FIST, ABILITY_NONE},               \
        .bodyColor = BODY_COLOR_GRAY,                                   \
        .noFlip = FALSE,                                                \
        .flags = SPECIES_FLAG_LEGENDARY

#define URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO                            \
        .baseHP        = 100,                                           \
        .baseAttack    = 130,                                           \
        .baseDefense   = 100,                                           \
        .baseSpeed     = 97,                                            \
        .baseSpAttack  = 63,                                            \
        .baseSpDefense = 60,                                            \
        .types = {TYPE_FIGHTING, TYPE_WATER},                           \
        .catchRate = 3,                                                 \
        .expYield = 275,                                                \
        .evYield_Attack    = 3,                                         \
        .genderRatio = PERCENT_FEMALE(12.5),                            \
        .eggCycles = 120,                                               \
        .friendship = STANDARD_FRIENDSHIP,                              \
        .growthRate = GROWTH_SLOW,                                      \
        .eggGroups = {EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},  \
        .abilities = {ABILITY_UNSEEN_FIST, ABILITY_NONE},               \
        .bodyColor = BODY_COLOR_GRAY,                                   \
        .noFlip = FALSE,                                                \
        .flags = SPECIES_FLAG_LEGENDARY

#define ZARUDE_SPECIES_INFO                               \
    {                                                   \
        .baseHP        = 105,                           \
        .baseAttack    = 120,                           \
        .baseDefense   = 105,                           \
        .baseSpeed     = 105,                           \
        .baseSpAttack  = 70,                            \
        .baseSpDefense = 95,                            \
        .types = { TYPE_DARK, TYPE_GRASS},              \
        .catchRate = 3,                                 \
        .expYield = 300,                                \
        .evYield_Attack    = 3,                         \
        .genderRatio = MON_GENDERLESS,                  \
        .eggCycles = 120,                               \
        .friendship = 0,                                \
        .growthRate = GROWTH_SLOW,                      \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},            \
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE},\
        .bodyColor = BODY_COLOR_GREEN,                  \
        .noFlip = FALSE,                                \
        .flags = SPECIES_FLAG_MYTHICAL,                 \
    }

const struct SpeciesInfo gSpeciesInfo[] =
{
    [SPECIES_NONE] = {0},

    [SPECIES_BULBASAUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 49,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_IVYSAUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 63,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VENUSAUR] = { VENUSAUR_MISC_INFO, },

    [SPECIES_CHARMANDER] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHARMELEON] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHARIZARD] =
    {
        CHARIZARD_MISC_INFO,
    },

    [SPECIES_SQUIRTLE] =
    {
        .baseHP        = 44,
        .baseAttack    = 48,
        .baseDefense   = 65,
        .baseSpeed     = 43,
        .baseSpAttack  = 50,
        .baseSpDefense = 64,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WARTORTLE] =
    {
        .baseHP        = 59,
        .baseAttack    = 63,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BLASTOISE] =
    {
        BLASTOISE_MISC_INFO,
    },

    [SPECIES_CATERPIE] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 39,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_METAPOD] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BUTTERFREE] = { BUTTERFREE_MISC_INFO, },

    [SPECIES_WEEDLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 255,
        .expYield = 39,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KAKUNA] =
    {
        .baseHP        = 45,
        .baseAttack    = 25,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BEEDRILL] =
    {
        .baseHP        = 65,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 95,
        #else
            .baseAttack    = 80,
        #endif
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 45,
        .expYield = 178,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 56,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEOTTO] =
    {
        .baseHP        = 63,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 71,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 122,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIDGEOT] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpeed     = 101,
        #else
            .baseSpeed     = 91,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 216,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_RATTATA] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 51,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_RATICATE] =
    {
        .baseHP        = 55,
        .baseAttack    = 81,
        .baseDefense   = 60,
        .baseSpeed     = 97,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 127,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_GUTS, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SPEAROW] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 70,
        .baseSpAttack  = 31,
        .baseSpDefense = 31,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FEAROW] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 105,
        .baseSpAttack  = 61,
        .baseSpDefense = 61,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 155,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_EKANS] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 44,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 54,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ARBOK] =
    {
        .baseHP        = 65,
        .baseDefense   = 69,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 79,
        #if P_UPDATED_STATS >= GEN_7
            .baseAttack    = 105,
        #else
            .baseAttack    = 85,
        #endif
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 90,
        .expYield = 157,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SHED_SKIN, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_PIKACHU] = { PIKACHU_MISC_INFO(PERCENT_FEMALE(50), FLIP) },

    [SPECIES_RAICHU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpeed     = 110,
        #else
            .baseSpeed     = 100,
        #endif
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 75,
        .expYield = 218,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SANDSHREW] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SANDSLASH] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 90,
        .expYield = 158,
        .evYield_Defense   = 2,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORAN_F] =
    {
        .baseHP        = 55,
        .baseAttack    = 47,
        .baseDefense   = 52,
        .baseSpeed     = 41,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_HP        = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORINA] =
    {
        .baseHP        = 70,
        .baseAttack    = 62,
        .baseDefense   = 67,
        .baseSpeed     = 56,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDOQUEEN] =
    {
        .baseHP        = 90,
        .baseDefense   = 87,
        .baseSpeed     = 76,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 92,
        #else
            .baseAttack    = 82,
        #endif
        .types = { TYPE_POISON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 227,
        .evYield_HP        = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORAN_M] =
    {
        .baseHP        = 46,
        .baseAttack    = 57,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 235,
        .expYield = 55,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDORINO] =
    {
        .baseHP        = 61,
        .baseAttack    = 72,
        .baseDefense   = 57,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 120,
        .expYield = 128,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NIDOKING] =
    {
        .baseHP        = 81,
        .baseDefense   = 77,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 102,
        #else
            .baseAttack    = 92,
        #endif
        .types = { TYPE_POISON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_RIVALRY, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CLEFAIRY] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 48,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 150,
        .expYield = 113,
        .evYield_HP        = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_CLEFABLE] =
    {
        .baseHP        = 95,
        .baseAttack    = 70,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpDefense = 90,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpAttack  = 95,
        #else
            .baseSpAttack  = 85,
        #endif
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 25,
        .expYield = 217,
        .evYield_HP        = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_VULPIX] =
    {
        .baseHP        = 38,
        .baseAttack    = 36,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 190,
        .expYield = 60,
        .evYield_Speed     = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NINETALES] =
    {
        .baseHP        = 73,
        .baseAttack    = 71,
        .baseDefense   = 75,
        .baseSpeed     = 100,
        .baseSpAttack  = 91,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 75,
        .expYield = 177,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_JIGGLYPUFF] =
    {
        .baseHP        = 115,
        .baseAttack    = 45,
        .baseDefense   = 20,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_NORMAL, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 170,
        .expYield = 95,
        .evYield_HP        = 2,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_WIGGLYTUFF] =
    {
        .baseHP        = 140,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpDefense = 50,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpAttack  = 85,
        #else
            .baseSpAttack  = 75,
        #endif
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_NORMAL, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 50,
        .expYield = 196,
        .evYield_HP        = 3,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_ZUBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOLBAT] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ODDISH] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 75,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GLOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_STENCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_VILEPLUME] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpDefense = 90,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpAttack  = 110,
        #else
            .baseSpAttack  = 100,
        #endif
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PARAS] =
    {
        .baseHP        = 35,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 57,
        .evYield_Attack    = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PARASECT] =
    {
        .baseHP        = 60,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 85,
        .types = { TYPE_GHOST, TYPE_GRASS },
        .catchRate = 75,
        .expYield = 142,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_DRY_SKIN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_VENONAT] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 190,
        .expYield = 61,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_TINTED_LENS, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_VENOMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_TINTED_LENS, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 53,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DUGTRIO] =
    {
        .baseHP        = 35,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        #if P_UPDATED_STATS >= GEN_7
            .baseAttack    = 100,
        #else
            .baseAttack    = 80,
        #endif
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_ARENA_TRAP, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MEOWTH] =
    {
        MEOWTH_MISC_INFO
    },

    [SPECIES_PERSIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 154,
        .evYield_Speed     = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIMBER, ABILITY_TECHNICIAN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PSYDUCK] =
    {
        .baseHP        = 50,
        .baseAttack    = 52,
        .baseDefense   = 48,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GOLDUCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 76,
        .baseDefense   = 78,
        .baseSpeed     = 90,
        .baseSpAttack  = 101,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 175,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_DAMP, ABILITY_CLOUD_NINE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MANKEY] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PRIMEAPE] =
    {
        .baseHP        = 65,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 95,
        .baseSpAttack  = 50,
        .baseSpDefense = 75,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_ANGER_POINT, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GROWLITHE] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCANINE] =
    {
        .baseHP        = 90,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 95,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 75,
        .expYield = 194,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_POLIWAG] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_POLIWHIRL] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 120,
        .expYield = 135,
        .evYield_Speed     = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_POLIWRATH] =
    {
        .baseHP        = 90,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 95,
        #else
            .baseAttack    = 85,
        #endif
        .types = { TYPE_WATER, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 230,
        .evYield_Defense   = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_ABRA] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 15,
        .baseSpeed     = 90,
        .baseSpAttack  = 105,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 200,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KADABRA] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 100,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_ALAKAZAM] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 120,
        .baseSpAttack  = 135,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 95,
        #else
            .baseSpDefense = 85,
        #endif
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 50,
        .expYield = 225,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MACHOP] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MACHOKE] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack    = 2,
        .itemRare = ITEM_FOCUS_BAND,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_NO_GUARD, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_MACHAMP] =
    {
        MACHAMP_MISC_INFO
    },

    [SPECIES_BELLSPROUT] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 70,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WEEPINBELL] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_POISON },
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VICTREEBEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 70,
        #else
            .baseSpDefense = 60,
        #endif
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 45,
        .expYield = 221,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TENTACOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TENTACRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_POISON },
        .catchRate = 60,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_LIQUID_OOZE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GEODUDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRAVELER] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 120,
        .expYield = 137,
        .evYield_Defense   = 2,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOLEM] =
    {
        .baseHP        = 80,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 120,
        #else
            .baseAttack    = 110,
        #endif
        .types = { TYPE_ROCK, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 223,
        .evYield_Defense   = 3,
        .itemRare = ITEM_EVERSTONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PONYTA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 190,
        .expYield = 82,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RAPIDASH] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 60,
        .expYield = 175,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWPOKE] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 190,
        .expYield = 63,
        .evYield_HP        = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWBRO] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 75,
        .expYield = 172,
        .evYield_Defense   = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNEMITE] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNETON] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 120,
        .baseSpDefense = 70,
        .types = { TYPE_ELECTRIC, TYPE_STEEL },
        .catchRate = 60,
        .expYield = 163,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FARFETCHD] =
    {
        .baseHP        = 52,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        #if P_UPDATED_STATS >= GEN_7
            .baseAttack    = 90,
        #else
            .baseAttack    = 65,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 132,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INNER_FOCUS, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DODUO] =
    {
        .baseHP        = 35,
        .baseAttack    = 85,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 190,
        .expYield = 62,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DODRIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 110,
        #else
            .baseSpeed     = 100,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SHARP_BEAK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_EARLY_BIRD, ABILITY_TANGLED_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SEEL] =
    {
        .baseHP        = 65,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 65,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DEWGONG] =
    {
        .baseHP        = 90,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_HYDRATION, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_GRIMER] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 190,
        .expYield = 65,
        .evYield_HP        = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MUK] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 75,
        .expYield = 175,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .itemCommon = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELLDER] =
    {
        .baseHP        = 30,
        .baseAttack    = 65,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CLOYSTER] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 180,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_ICE },
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SKILL_LINK, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GASTLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 35,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 190,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HAUNTER] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_POISON },
        .catchRate = 90,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GENGAR] =
    {
        GENGAR_MISC_INFO
    },

    [SPECIES_ONIX] =
    {
        .baseHP        = 35,
        .baseAttack    = 45,
        .baseDefense   = 160,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 77,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DROWZEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 48,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 43,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 190,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HYPNO] =
    {
        .baseHP        = 85,
        .baseAttack    = 73,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 73,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 75,
        .expYield = 169,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_INSOMNIA, ABILITY_FOREWARN, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_KRABBY] =
    {
        .baseHP        = 30,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 65,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_KINGLER] =
    {
        KINGLER_MISC_INFO,
    },

    [SPECIES_VOLTORB] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTRODE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 150,
        #else
            .baseSpeed     = 140,
        #endif
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_EXEGGCUTE] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 90,
        .expYield = 65,
        .evYield_Defense   = 1,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_EXEGGUTOR] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 125,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpDefense = 75,
        #else
            .baseSpDefense = 65,
        #endif
        .types = { TYPE_GRASS, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 186,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CUBONE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 190,
        .expYield = 64,
        .evYield_Defense   = 1,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MAROWAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense   = 2,
        .itemRare = ITEM_THICK_CLUB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_LIGHTNING_ROD, ABILITY_BATTLE_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HITMONLEE] =
    {
        .baseHP        = 50,
        .baseAttack    = 120,
        .baseDefense   = 53,
        .baseSpeed     = 87,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_LIMBER, ABILITY_BRUTAL_LEGS, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HITMONCHAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 79,
        .baseSpeed     = 76,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_IRON_FIST, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LICKITUNG] =
    {
        .baseHP        = 90,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 77,
        .evYield_HP        = 2,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_KOFFING] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 35,
        .baseSpAttack  = 60,
        .baseSpDefense = 45,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 190,
        .expYield = 68,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH},
        #else
            .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_WEEZING] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = { TYPE_POISON, TYPE_POISON },
        .catchRate = 60,
        .expYield = 172,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #if P_UPDATED_ABILITIES >= GEN_8
            .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_STENCH},
        #else
            .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        #endif
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_RHYHORN] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 69,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_RHYDON] =
    {
        .baseHP        = 105,
        .baseAttack    = 130,
        .baseDefense   = 120,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_ROCK },
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CHANSEY] =
    {
        .baseHP        = 250,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 105,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 395,
        .evYield_HP        = 2,
        .itemCommon = ITEM_LUCKY_PUNCH,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TANGELA] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 100,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 87,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KANGASKHAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 172,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_SCRAPPY, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HORSEA] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 59,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEADRA] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 154,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_POISON_POINT, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GOLDEEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 67,
        .baseDefense   = 60,
        .baseSpeed     = 63,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 64,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SEAKING] =
    {
        .baseHP        = 80,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 68,
        .baseSpAttack  = 65,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 60,
        .expYield = 158,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_VEIL, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_STARYU] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 225,
        .expYield = 68,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_STARMIE] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 115,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 182,
        .evYield_Speed     = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_NATURAL_CURE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MR_MIME] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SCYTHER] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 80,
        .baseSpeed     = 105,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 100,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_JYNX] =
    {
        .baseHP        = 65,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 95,
        .baseSpAttack  = 115,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_DRY_SKIN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTABUZZ] =
    {
        .baseHP        = 65,
        .baseAttack    = 83,
        .baseDefense   = 57,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed     = 2,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
    },

    [SPECIES_MAGMAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 57,
        .baseSpeed     = 93,
        .baseSpAttack  = 100,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PINSIR] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_MOLD_BREAKER, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TAUROS] =
    {
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        TAUROS_MISC_INFO
    },

    [SPECIES_TAUROS_PALDEAN] =
    {
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .evYield_Attack    = 2,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW},
        .bodyColor = BODY_COLOR_BROWN,
        TAUROS_MISC_INFO
    },

    [SPECIES_TAUROS_PALDEAN_BLAZE_BREED] =
    {
        .types = { TYPE_FIGHTING, TYPE_FIRE },
        .evYield_Attack    = 2,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW},
        .bodyColor = BODY_COLOR_BROWN,
        TAUROS_MISC_INFO
    },

    [SPECIES_TAUROS_PALDEAN_AQUA_BREED] =
    {
        .types = { TYPE_FIGHTING, TYPE_WATER },
        .evYield_Attack    = 2,
        .abilities = {ABILITY_INTIMIDATE, ABILITY_ANGER_POINT, ABILITY_CUD_CHEW},
        .bodyColor = BODY_COLOR_BROWN,
        TAUROS_MISC_INFO
    },

    [SPECIES_MAGIKARP] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 55,
        .baseSpeed     = 80,
        .baseSpAttack  = 15,
        .baseSpDefense = 20,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_GYARADOS] =
    {
        .baseHP        = 95,
        .baseAttack    = 125,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 189,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LAPRAS] =
    {
        LAPRAS_MISC_INFO,
    },

    [SPECIES_DITTO] =
    {
        .baseHP        = 48,
        .baseAttack    = 48,
        .baseDefense   = 48,
        .baseSpeed     = 48,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 35,
        .expYield = 101,
        .evYield_HP        = 1,
        .itemCommon = ITEM_QUICK_POWDER,
        .itemRare = ITEM_METAL_POWDER,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_DITTO, EGG_GROUP_DITTO},
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_IMPOSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_EEVEE] =
    {
        EEVEE_MISC_INFO,
    },

    [SPECIES_VAPOREON] =
    {
        .baseHP        = 130,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 184,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_WATER_ABSORB, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_JOLTEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 184,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_VOLT_ABSORB, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_FLAREON] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLASH_FIRE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 79,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_OMANYTE] =
    {
        .baseHP        = 35,
        .baseAttack    = 40,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_OMASTAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 125,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_KABUTO] =
    {
        .baseHP        = 30,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KABUTOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 115,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_WATER },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_BATTLE_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_AERODACTYL] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 65,
        .baseSpeed     = 130,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_ROCK, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 180,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_PRESSURE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SNORLAX] =
    {
        SNORLAX_MISC_INFO,
    },

    [SPECIES_ARTICUNO] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 125,
        .types = { TYPE_ICE, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZAPDOS] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 110,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_DRIZZLE},
        #else
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
        #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_MOLTRES] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_DRATINI] =
    {
        .baseHP        = 41,
        .baseAttack    = 64,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGONAIR] =
    {
        .baseHP        = 61,
        .baseAttack    = 84,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_MARVEL_SCALE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGONITE] =
    {
        .baseHP        = 91,
        .baseAttack    = 134,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MEWTWO] =
    {
        .baseHP        = 106,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_NEUROFORCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_MEW] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_MAGIC_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_CHIKORITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 49,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 49,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TRIAGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BAYLEEF] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 63,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TRIAGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MEGANIUM] =
    {
        .baseHP        = 80,
        .baseAttack    = 82,
        .baseDefense   = 100,
        .baseSpeed     = 80,
        .baseSpAttack  = 83,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_TRIAGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CYNDAQUIL] =
    {
        .baseHP        = 39,
        .baseAttack    = 52,
        .baseDefense   = 43,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_QUILAVA] =
    {
        .baseHP        = 58,
        .baseAttack    = 64,
        .baseDefense   = 58,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TYPHLOSION] =
    {
        .baseHP        = 78,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 100,
        .baseSpAttack  = 109,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TOTODILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 64,
        .baseSpeed     = 43,
        .baseSpAttack  = 44,
        .baseSpDefense = 48,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CROCONAW] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 58,
        .baseSpAttack  = 59,
        .baseSpDefense = 63,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_FERALIGATR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 100,
        .baseSpeed     = 78,
        .baseSpAttack  = 79,
        .baseSpDefense = 83,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SENTRET] =
    {
        .baseHP        = 35,
        .baseAttack    = 46,
        .baseDefense   = 34,
        .baseSpeed     = 20,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 43,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FURRET] =
    {
        .baseHP        = 85,
        .baseAttack    = 76,
        .baseDefense   = 64,
        .baseSpeed     = 90,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HOOTHOOT] =
    {
        .baseHP        = 60,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 36,
        .baseSpDefense = 56,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NOCTOWL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpDefense = 96,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpAttack  = 86,
        #else
            .baseSpAttack  = 76,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 90,
        .expYield = 158,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INSOMNIA, ABILITY_KEEN_EYE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LEDYBA] =
    {
        .baseHP        = 40,
        .baseAttack    = 20,
        .baseDefense   = 30,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_LEDIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 110,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_EARLY_BIRD, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SPINARAK] =
    {
        .baseHP        = 40,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 255,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARIADOS] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpDefense = 70,
        #else
            .baseSpDefense = 60,
        #endif
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 90,
        .expYield = 140,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_INSOMNIA, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CROBAT] =
    {
        .baseHP        = 85,
        .baseAttack    = 95,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_POISON, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 241,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CHINCHOU] =
    {
        .baseHP        = 75,
        .baseAttack    = 38,
        .baseDefense   = 38,
        .baseSpeed     = 67,
        .baseSpAttack  = 56,
        .baseSpDefense = 56,
        .types = { TYPE_WATER, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 66,
        .evYield_HP        = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LANTURN] =
    {
        .baseHP        = 125,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 67,
        .baseSpAttack  = 76,
        .baseSpDefense = 76,
        .types = { TYPE_WATER, TYPE_ELECTRIC },
        .catchRate = 75,
        .expYield = 161,
        .evYield_HP        = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_ILLUMINATE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PICHU] = PICHU_SPECIES_INFO(FLIP),

    [SPECIES_CLEFFA] =
    {
        .baseHP        = 50,
        .baseAttack    = 25,
        .baseDefense   = 28,
        .baseSpeed     = 15,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 150,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_MAGIC_GUARD, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_IGGLYBUFF] =
    {
        .baseHP        = 90,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 20,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_NORMAL, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 170,
        .expYield = 42,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_COMPETITIVE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_TOGEPI] =
    {
        .baseHP        = 35,
        .baseAttack    = 20,
        .baseDefense   = 65,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 190,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_TOGETIC] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 105,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FLYING},
        #else
            .types = { TYPE_NORMAL, TYPE_FLYING},
        #endif
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_NATU] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 190,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_XATU] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_EARLY_BIRD, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MAREEP] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 235,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FLAAFFY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 120,
        .expYield = 128,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_AMPHAROS] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 90,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 85,
        #else
            .baseDefense   = 75,
        #endif
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 230,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BELLOSSOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 95,
        #else
            .baseDefense   = 85,
        #endif
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MARILL] =
    {
        .baseHP        = 70,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 20,
        .baseSpDefense = 50,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_WATER, TYPE_FAIRY},
        #else
            .types = { TYPE_WATER, TYPE_WATER},
        #endif
        .catchRate = 190,
        .expYield = 88,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AZUMARILL] =
    {
        .baseHP        = 100,
        .baseAttack    = 50,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpDefense = 80,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpAttack  = 60,
        #else
            .baseSpAttack  = 50,
        #endif
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_WATER, TYPE_FAIRY},
        #else
            .types = { TYPE_WATER, TYPE_WATER},
        #endif
        .catchRate = 75,
        .expYield = 189,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SUDOWOODO] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 65,
        .expYield = 144,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_POLITOED] =
    {
        .baseHP        = 90,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_DAMP, ABILITY_DRIZZLE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_HOPPIP] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 255,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SKIPLOOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_FLYING },
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_JUMPLUFF] =
    {
        .baseHP        = 75,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 95,
        #else
            .baseSpDefense = 85,
        #endif
        .types = { TYPE_GRASS, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 207,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AIPOM] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 55,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SUNKERN] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 235,
        .expYield = 36,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SUNFLORA] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 120,
        .expYield = 149,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_YANMA] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_FLYING },
        .catchRate = 75,
        .expYield = 78,
        .evYield_Speed     = 1,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_COMPOUND_EYES, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

#define WOOPER_MISC_INFO                                                        \
        .baseHP        = 55,                                                    \
        .baseAttack    = 45,                                                    \
        .baseDefense   = 45,                                                    \
        .baseSpeed     = 15,                                                    \
        .baseSpAttack  = 25,                                                    \
        .baseSpDefense = 25,                                                    \
        .catchRate = 255,                                                       \
        .expYield = 42,                                                         \
        .evYield_HP        = 1,                                                 \
        .genderRatio = PERCENT_FEMALE(50),                                      \
        .eggCycles = 20,                                                        \
        .friendship = STANDARD_FRIENDSHIP,                                      \
        .growthRate = GROWTH_MEDIUM_FAST,                                       \
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},                     \
        .noFlip = FALSE

    [SPECIES_WOOPER] =
    {
        .types = { TYPE_WATER, TYPE_GROUND },
        .abilities = {ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        WOOPER_MISC_INFO
    },

    [SPECIES_WOOPER_PALDEAN] =
    {
        .types = { TYPE_POISON, TYPE_GROUND },
        .abilities = {ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BROWN,
        WOOPER_MISC_INFO
    },

    [SPECIES_QUAGSIRE] =
    {
        .baseHP        = 95,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_DAMP, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ESPEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_UMBREON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_SYNCHRONIZE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_MURKROW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 42,
        .baseSpeed     = 91,
        .baseSpAttack  = 85,
        .baseSpDefense = 42,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 30,
        .expYield = 81,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INSOMNIA, ABILITY_SUPER_LUCK, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SLOWKING] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 110,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 70,
        .expYield = 172,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MISDREAVUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 85,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 87,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_UNOWN] = UNOWN_SPECIES_INFO(FLIP),

    [SPECIES_WOBBUFFET] =
    {
        .baseHP        = 190,
        .baseAttack    = 33,
        .baseDefense   = 58,
        .baseSpeed     = 33,
        .baseSpAttack  = 33,
        .baseSpDefense = 58,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 142,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GIRAFARIG] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 159,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_EARLY_BIRD, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PINECO] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 90,
        .baseSpeed     = 15,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 190,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FORRETRESS] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_BUG, TYPE_STEEL },
        .catchRate = 75,
        .expYield = 163,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DUNSPARCE] =
    {
        .baseHP        = 100,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 145,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GLIGAR] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 105,
        .baseSpeed     = 85,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_GROUND, TYPE_FLYING },
        .catchRate = 60,
        .expYield = 86,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_IMMUNITY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_STEELIX] =
    {
        .baseHP        = 75,
        .baseAttack    = 85,
        .baseDefense   = 200,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_STEEL, TYPE_GROUND },
        .catchRate = 25,
        .expYield = 179,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_STURDY, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SNUBBULL] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_GRANBULL] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 75,
        .expYield = 158,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_STRONG_JAW, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_QWILFISH] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 85,
        #else
            .baseDefense   = 75,
        #endif
        .types = { TYPE_WATER, TYPE_POISON},
        .catchRate = 45,
        .expYield = 88,
        .evYield_Attack    = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SCIZOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_STEEL },
        .catchRate = 25,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_TECHNICIAN, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SHUCKLE] =
    {
        .baseHP        = 20,
        .baseAttack    = 10,
        .baseDefense   = 230,
        .baseSpeed     = 5,
        .baseSpAttack  = 10,
        .baseSpDefense = 230,
        .types = { TYPE_BUG, TYPE_ROCK },
        .catchRate = 190,
        .expYield = 177,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_BERRY_JUICE,
        .itemRare = ITEM_BERRY_JUICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_STURDY, ABILITY_GLUTTONY, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HERACROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .types = { TYPE_BUG, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_GUTS, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SNEASEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = { TYPE_DARK, TYPE_ICE },
        .catchRate = 60,
        .expYield = 86,
        .evYield_Speed     = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
    },

    [SPECIES_TEDDIURSA] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_QUICK_FEET, ABILITY_HONEY_GATHER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_URSARING] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 75,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GUTS, ABILITY_QUICK_FEET, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SLUGMA] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MAGCARGO] =
    {
        .baseSpDefense = 80,
        .baseAttack    = 50,
        .baseDefense   = 120,
        .baseSpeed     = 30,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 60,
            .baseSpAttack  = 90,
        #else
            .baseHP        = 50,
            .baseSpAttack  = 80,
        #endif
        .types = { TYPE_FIRE, TYPE_ROCK},
        .catchRate = 75,
        .expYield = 151,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_FLAME_BODY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_SWINUB] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_ICE, TYPE_GROUND },
        .catchRate = 225,
        .expYield = 50,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PILOSWINE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_GROUND },
        .catchRate = 75,
        .expYield = 158,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CORSOLA] =
    {
        .baseAttack    = 55,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 65,
            .baseDefense   = 95,
            .baseSpDefense = 95,
        #else
            .baseHP        = 55,
            .baseDefense   = 85,
            .baseSpDefense = 85,
        #endif
        .types = { TYPE_WATER, TYPE_ROCK},
        .catchRate = 60,
        .expYield = 144,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LUMINOUS_MOSS,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HUSTLE, ABILITY_NATURAL_CURE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_REMORAID] =
    {
        .baseHP        = 35,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 190,
        .expYield = 60,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_HUSTLE, ABILITY_SNIPER, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_OCTILLERY] =
    {
        .baseHP        = 75,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 45,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_SNIPER, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DELIBIRD] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_ICE, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 116,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_HUSTLE, ABILITY_INSOMNIA},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MANTINE] =
    {
        .baseAttack    = 40,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 140,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 85,
        #else
            .baseHP        = 65,
        #endif
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 25,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SKARMORY] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 140,
        .baseSpeed     = 70,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_STEEL, TYPE_FLYING },
        .catchRate = 25,
        .expYield = 163,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_STURDY, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_HOUNDOUR] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 120,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_HOUNDOOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 175,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_FLASH_FIRE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_KINGDRA] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_DRAGON_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SNIPER, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PHANPY] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 120,
        .expYield = 66,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DONPHAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_GROUND, TYPE_GROUND },
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON2] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 180,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TRACE, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_STANTLER] =
    {
        .baseHP        = 73,
        .baseAttack    = 95,
        .baseDefense   = 62,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SMEARGLE] =
    {
        .baseHP        = 55,
        .baseAttack    = 20,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 20,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 88,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_TECHNICIAN, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_TYROGUE] =
    {
        .baseHP        = 35,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 75,
        .expYield = 42,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_GUTS, ABILITY_STEADFAST, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HITMONTOP] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 70,
        .baseSpAttack  = 35,
        .baseSpDefense = 110,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_HARD_SPINNER, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SMOOCHUM] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 15,
        .baseSpeed     = 65,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_FOREWARN, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_ELEKID] =
    {
        .baseHP        = 45,
        .baseAttack    = 63,
        .baseDefense   = 37,
        .baseSpeed     = 95,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 45,
        .expYield = 72,
        .evYield_Speed     = 1,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
    },

    [SPECIES_MAGBY] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 37,
        .baseSpeed     = 83,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 73,
        .evYield_Speed     = 1,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_MILTANK] =
    {
        .baseHP        = 95,
        .baseAttack    = 80,
        .baseDefense   = 105,
        .baseSpeed     = 100,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 172,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_MOOMOO_MILK,
        .itemRare = ITEM_MOOMOO_MILK,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_SCRAPPY, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BLISSEY] =
    {
        .baseHP        = 255,
        .baseAttack    = 10,
        .baseDefense   = 10,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 135,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 30,
        .expYield = 608,
        .evYield_HP        = 3,
        .itemRare = ITEM_LUCKY_EGG,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_RAIKOU] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Speed     = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        #if P_UPDATED_ABILITIES >= GEN_7
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        #else
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_VOLT_ABSORB},
        #endif
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ENTEI] =
    {
        .baseHP        = 115,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 75,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 3,
        .expYield = 261,
        .evYield_HP        = 1,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        #if P_UPDATED_ABILITIES >= GEN_7
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        #else
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FLASH_FIRE},
        #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_SUICUNE] =
    {
        .baseHP        = 100,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 90,
        .baseSpDefense = 115,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        #if P_UPDATED_ABILITIES >= GEN_7
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        #else
            .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_WATER_ABSORB},
        #endif
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LARVITAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 41,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_GUTS, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PUPITAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 84,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER },
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TYRANITAR] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 61,
        .baseSpAttack  = 95,
        .baseSpDefense = 100,
        .types = { TYPE_ROCK, TYPE_DARK },
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LUGIA] =
    {
        .baseHP        = 106,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 110,
        .baseSpAttack  = 90,
        .baseSpDefense = 154,
        .types = { TYPE_PSYCHIC, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_MULTISCALE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_HO_OH] =
    {
        .baseHP        = 106,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 154,
        .types = { TYPE_FIRE, TYPE_FLYING },
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpDefense = 3,
        .itemCommon = ITEM_SACRED_ASH,
        .itemRare   = ITEM_SACRED_ASH,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_CELEBI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_TREECKO] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GROVYLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SCEPTILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 120,
        .baseSpAttack  = 105,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 239,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TORCHIC] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_COMBUSKEN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 85,
        .baseSpDefense = 60,
        .types = { TYPE_FIRE, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BLAZIKEN] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = { TYPE_FIRE, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MUDKIP] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MARSHTOMP] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWAMPERT] =
    {
        .baseHP        = 100,
        .baseAttack    = 110,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_GROUND },
        .catchRate = 45,
        .expYield = 241,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_POOCHYENA] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_QUICK_FEET, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MIGHTYENA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 127,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ZIGZAGOON] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LINOONE] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 147,
        .evYield_Speed     = 2,
        .itemCommon = ITEM_POTION,
        .itemRare = ITEM_MAX_REVIVE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WURMPLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .itemCommon = ITEM_PECHA_BERRY,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SILCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BEAUTIFLY] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpDefense = 50,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpAttack  = 100,
        #else
            .baseSpAttack  = 90,
        #endif
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 178,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CASCOON] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 72,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG },
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DUSTOX] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_POISON },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_COMPOUND_EYES},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LOTAD] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 44,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LOMBRE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 120,
        .expYield = 119,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LUDICOLO] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 70,
        .baseSpeed     = 70,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 216,
        .evYield_SpDefense = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_RAIN_DISH, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SEEDOT] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 44,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NUZLEAF] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 2,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SHIFTRY] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 45,
        .expYield = 216,
        .evYield_Attack    = 3,
        .itemRare = ITEM_POWER_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = {ABILITY_CHLOROPHYLL, ABILITY_WIND_RIDER, ABILITY_PICKPOCKET},
        #else
            .abilities = {ABILITY_CHLOROPHYLL, ABILITY_EARLY_BIRD, ABILITY_PICKPOCKET},
        #endif
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TAILLOW] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_FLYING },
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_GUTS, ABILITY_TAILSTREAM, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWELLOW] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpDefense = 50,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpAttack  = 75,
        #else
            .baseSpAttack  = 50,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 159,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_GUTS, ABILITY_TAILSTREAM, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WINGULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 30,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 190,
        .expYield = 54,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_HYDRATION, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PELIPPER] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 65,
        .baseSpDefense = 70,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpAttack  = 95,
        #else
            .baseSpAttack  = 85,
        #endif
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 154,
        .evYield_Defense   = 2,
        .itemCommon = ITEM_PRETTY_FEATHER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_DRIZZLE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RALTS] =
    {
        .baseHP        = 28,
        .baseAttack    = 25,
        .baseDefense   = 25,
        .baseSpeed     = 40,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 235,
        .expYield = 40,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_KIRLIA] =
    {
        .baseHP        = 38,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 120,
        .expYield = 97,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_GARDEVOIR] =
    {
        .baseHP        = 68,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 125,
        .baseSpDefense = 115,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 45,
        .expYield = 233,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_TRACE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SURSKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 32,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 52,
        .types = { TYPE_BUG, TYPE_WATER},
        .catchRate = 200,
        .expYield = 54,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MASQUERAIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 62,
        .baseSpDefense = 82,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 80,
            .baseSpAttack  = 100,
        #else
            .baseSpeed     = 60,
            .baseSpAttack  = 80,
        #endif
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 75,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_TAILSTREAM, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHROOMISH] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 35,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 255,
        .expYield = 59,
        .evYield_HP        = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BRELOOM] =
    {
        .baseHP        = 60,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_FIGHTING },
        .catchRate = 90,
        .expYield = 161,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_POISON_HEAL, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SLAKOTH] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 56,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VIGOROTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 154,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SLAKING] =
    {
        .baseHP        = 150,
        .baseAttack    = 160,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 95,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 252,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD },
        .abilities = {ABILITY_TRUANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NINCADA] =
    {
        .baseHP        = 31,
        .baseAttack    = 45,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_GROUND},
        .catchRate = 255,
        .expYield = 53,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_NINJASK] =
    {
        .baseHP        = 61,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 160,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 160,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SHEDINJA] =
    {
        .baseHP        = 1,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 40,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 83,
        .evYield_HP        = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_WONDER_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WHISMUR] =
    {
        .baseHP        = 64,
        .baseAttack    = 51,
        .baseDefense   = 23,
        .baseSpeed     = 28,
        .baseSpAttack  = 51,
        .baseSpDefense = 23,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 48,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_LOUDRED] =
    {
        .baseHP        = 84,
        .baseAttack    = 71,
        .baseDefense   = 43,
        .baseSpeed     = 48,
        .baseSpAttack  = 71,
        .baseSpDefense = 43,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 126,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EXPLOUD] =
    {
        .baseHP        = 104,
        .baseAttack    = 91,
        .baseDefense   = 63,
        .baseSpeed     = 68,
        .baseSpAttack  = 91,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 73,
        #else
            .baseSpDefense = 63,
        #endif
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 221,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MAKUHITA] =
    {
        .baseHP        = 72,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 25,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 180,
        .expYield = 47,
        .evYield_HP        = 1,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HARIYAMA] =
    {
        .baseHP        = 144,
        .baseAttack    = 120,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 200,
        .expYield = 166,
        .evYield_HP        = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_THICK_FAT, ABILITY_GUTS, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_AZURILL] =
    {
        .baseHP        = 50,
        .baseAttack    = 20,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 20,
        .baseSpDefense = 40,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_NORMAL, TYPE_FAIRY},
        #else
            .types = { TYPE_NORMAL, TYPE_NORMAL},
        #endif
        .catchRate = 150,
        .expYield = 38,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_THICK_FAT, ABILITY_HUGE_POWER, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NOSEPASS] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 135,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 255,
        .expYield = 75,
        .evYield_Defense   = 1,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SKITTY] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 52,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_DELCATTY] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        #if P_UPDATED_STATS >= GEN_7
            .baseSpeed     = 90,
        #else
            .baseSpeed     = 70,
        #endif
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 60,
        .expYield = 140,
        .evYield_HP        = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NORMALIZE, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SABLEYE] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 133,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_STALL, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MAWILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 85,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_STEEL, TYPE_FAIRY},
        #else
            .types = { TYPE_STEEL, TYPE_STEEL},
        #endif
        .catchRate = 45,
        .expYield = 133,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_IRON_BALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_INTIMIDATE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ARON] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .catchRate = 180,
        .expYield = 66,
        .evYield_Defense   = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LAIRON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .catchRate = 90,
        .expYield = 151,
        .evYield_Defense   = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_AGGRON] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 180,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_ROCK },
        .catchRate = 45,
        .expYield = 239,
        .evYield_Defense   = 3,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MEDITITE] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 55,
        .types = { TYPE_FIGHTING, TYPE_PSYCHIC},
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MEDICHAM] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_FIGHTING, TYPE_PSYCHIC},
        .catchRate = 90,
        .expYield = 144,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_PURE_POWER, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTRIKE] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 120,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MANECTRIC] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 166,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_LIGHTNING_ROD, ABILITY_MINUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PLUSLE] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_PLUS, ABILITY_NONE, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MINUN] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MINUS, ABILITY_NONE, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VOLBEAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 73,
        .baseSpeed     = 85,
        .baseSpAttack  = 47,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_SWARM, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ILLUMISE] =
    {
        .baseHP        = 65,
        .baseAttack    = 47,
        .baseSpeed     = 85,
        .baseSpAttack  = 73,
        #if P_UPDATED_STATS >= GEN_7
            .baseDefense   = 75,
            .baseSpDefense = 85,
        #else
            .baseDefense   = 55,
            .baseSpDefense = 75,
        #endif
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 150,
        .expYield = 151,
        .evYield_Speed     = 1,
        .itemRare = ITEM_BRIGHT_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_TINTED_LENS, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_ROSELIA] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 150,
        .expYield = 140,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_GULPIN] =
    {
        .baseHP        = 70,
        .baseAttack    = 43,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 43,
        .baseSpDefense = 53,
        .types = { TYPE_POISON, TYPE_POISON},
        .catchRate = 225,
        .expYield = 60,
        .evYield_HP        = 1,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SWALOT] =
    {
        .baseHP        = 100,
        .baseAttack    = 73,
        .baseDefense   = 83,
        .baseSpeed     = 55,
        .baseSpAttack  = 73,
        .baseSpDefense = 83,
        .types = { TYPE_POISON, TYPE_POISON},
        .catchRate = 75,
        .expYield = 163,
        .evYield_HP        = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LIQUID_OOZE, ABILITY_STICKY_HOLD, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CARVANHA] =
    {
        .baseHP        = 45,
        .baseAttack    = 90,
        .baseDefense   = 20,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 20,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 225,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SHARPEDO] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 40,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 60,
        .expYield = 161,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_NONE, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WAILMER] =
    {
        .baseHP        = 130,
        .baseAttack    = 70,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 125,
        .expYield = 80,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WAILORD] =
    {
        .baseHP        = 170,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 175,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_WATER_VEIL, ABILITY_OBLIVIOUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NUMEL] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 45,
        .types = { TYPE_FIRE, TYPE_GROUND},
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SIMPLE, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CAMERUPT] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = { TYPE_FIRE, TYPE_GROUND},
        .catchRate = 150,
        .expYield = 161,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_MAGMA_ARMOR, ABILITY_SOLID_ROCK, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TORKOAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 140,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 90,
        .expYield = 165,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_WHITE_SMOKE, ABILITY_DROUGHT, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SPOINK] =
    {
        .baseHP        = 60,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 66,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_GRUMPIG] =
    {
        .baseHP        = 80,
        .baseAttack    = 45,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 60,
        .expYield = 165,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SPINDA] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 126,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_TANGLED_FEET, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_TRAPINCH] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 45,
        .baseSpeed     = 10,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON},
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #endif
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_ARENA_TRAP, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_VIBRAVA] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 50,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_DRAGON},
        .catchRate = 120,
        .expYield = 119,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON},
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #endif
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLYGON] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack    = 1,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_DRAGON},
        #else
            .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #endif
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CACNEA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CACTURNE] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_DARK},
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SWABLU] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ALTARIA] =
    {
        .baseHP        = 75,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = { TYPE_DRAGON, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ZANGOOSE] =
    {
        .baseHP        = 73,
        .baseAttack    = 115,
        .baseDefense   = 60,
        .baseSpeed     = 90,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_IMMUNITY, ABILITY_NONE, ABILITY_TOXIC_BOOST},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_SEVIPER] =
    {
        .baseHP        = 73,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = { TYPE_POISON, TYPE_POISON},
        .catchRate = 90,
        .expYield = 160,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
    },

    [SPECIES_LUNATONE] =
    {
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 90,
        #else
            .baseHP        = 70,
        #endif
        .types = { TYPE_ROCK, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 161,
        .evYield_SpAttack  = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_MOON_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SOLROCK] =
    {
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 90,
        #else
            .baseHP        = 70,
        #endif
        .types = { TYPE_ROCK, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 161,
        .evYield_Attack    = 2,
        .itemCommon = ITEM_STARDUST,
        .itemRare = ITEM_SUN_STONE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BARBOACH] =
    {
        .baseHP        = 50,
        .baseAttack    = 48,
        .baseDefense   = 43,
        .baseSpeed     = 60,
        .baseSpAttack  = 46,
        .baseSpDefense = 41,
        .types = { TYPE_WATER, TYPE_GROUND},
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_WHISCASH] =
    {
        .baseHP        = 110,
        .baseAttack    = 78,
        .baseDefense   = 73,
        .baseSpeed     = 60,
        .baseSpAttack  = 76,
        .baseSpDefense = 71,
        .types = { TYPE_WATER, TYPE_GROUND},
        .catchRate = 75,
        .expYield = 164,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_ANTICIPATION, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORPHISH] =
    {
        .baseHP        = 43,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 205,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CRAWDAUNT] =
    {
        .baseHP        = 63,
        .baseAttack    = 120,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 155,
        .expYield = 164,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SHELL_ARMOR, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BALTOY] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CLAYDOL] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseDefense   = 105,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 120,
        .types = { TYPE_GROUND, TYPE_PSYCHIC},
        .catchRate = 90,
        .expYield = 175,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_LILEEP] =
    {
        .baseHP        = 66,
        .baseAttack    = 41,
        .baseDefense   = 77,
        .baseSpeed     = 23,
        .baseSpAttack  = 61,
        .baseSpDefense = 87,
        .types = { TYPE_ROCK, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 71,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CRADILY] =
    {
        .baseHP        = 86,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 43,
        .baseSpAttack  = 81,
        .baseSpDefense = 107,
        .types = { TYPE_ROCK, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_BIG_ROOT,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SUCTION_CUPS, ABILITY_NONE, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ANORITH] =
    {
        .baseHP        = 45,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_BUG },
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ARMALDO] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 45,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_ROCK, TYPE_BUG },
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FEEBAS] =
    {
        .baseHP        = 20,
        .baseAttack    = 15,
        .baseDefense   = 20,
        .baseSpeed     = 80,
        .baseSpAttack  = 10,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 40,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_OBLIVIOUS, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MILOTIC] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 100,
        .baseSpDefense = 125,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_MARVEL_SCALE, ABILITY_COMPETITIVE, ABILITY_CUTE_CHARM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CASTFORM_NORMAL] = CASTFORM_SPECIES_INFO(TYPE_NORMAL, BODY_COLOR_GRAY),

    [SPECIES_KECLEON] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 200,
        .expYield = 154,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_COLOR_CHANGE, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SHUPPET] =
    {
        .baseHP        = 44,
        .baseAttack    = 75,
        .baseDefense   = 35,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 33,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 225,
        .expYield = 59,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_BANETTE] =
    {
        .baseHP        = 64,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 83,
        .baseSpDefense = 63,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 159,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_INSOMNIA, ABILITY_FRISK, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_DUSKULL] =
    {
        .baseHP        = 20,
        .baseAttack    = 40,
        .baseDefense   = 90,
        .baseSpeed     = 25,
        .baseSpAttack  = 30,
        .baseSpDefense = 90,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_DUSCLOPS] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        .baseSpDefense = 130,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 90,
        .expYield = 159,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TROPIUS] =
    {
        .baseHP        = 99,
        .baseAttack    = 68,
        .baseDefense   = 83,
        .baseSpeed     = 51,
        .baseSpAttack  = 72,
        .baseSpDefense = 87,
        .types = { TYPE_GRASS, TYPE_FLYING},
        .catchRate = 200,
        .expYield = 161,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_SOLAR_POWER, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHIMECHO] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 75,
            .baseDefense   = 80,
            .baseSpDefense = 90,
        #else
            .baseHP        = 65,
            .baseDefense   = 70,
            .baseSpDefense = 80,
        #endif
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 159,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ABSOL] =
    {
        .baseHP        = 65,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 75,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 30,
        .expYield = 163,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PRESSURE, ABILITY_SUPER_LUCK, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_WYNAUT] =
    {
        .baseHP        = 95,
        .baseAttack    = 23,
        .baseDefense   = 48,
        .baseSpeed     = 23,
        .baseSpAttack  = 23,
        .baseSpDefense = 48,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 125,
        .expYield = 52,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SNORUNT] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 190,
        .expYield = 60,
        .evYield_HP        = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GLALIE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 75,
        .expYield = 168,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_ICE_BODY, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SPHEAL] =
    {
        .baseHP        = 70,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = { TYPE_ICE, TYPE_WATER},
        .catchRate = 255,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEALEO] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = { TYPE_ICE, TYPE_WATER},
        .catchRate = 120,
        .expYield = 144,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WALREIN] =
    {
        .baseHP        = 110,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_WATER},
        .catchRate = 45,
        .expYield = 239,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_ICE_BODY, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CLAMPERL] =
    {
        .baseHP        = 35,
        .baseAttack    = 64,
        .baseDefense   = 85,
        .baseSpeed     = 32,
        .baseSpAttack  = 74,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 69,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_PEARL,
        .itemRare = ITEM_BIG_PEARL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HUNTAIL] =
    {
        .baseHP        = 55,
        .baseAttack    = 104,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 94,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 170,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GOREBYSS] =
    {
        .baseHP        = 55,
        .baseAttack    = 84,
        .baseDefense   = 105,
        .baseSpeed     = 52,
        .baseSpAttack  = 114,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_RELICANTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 90,
        .baseDefense   = 130,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_ROCK},
        .catchRate = 25,
        .expYield = 170,
        .evYield_HP        = 1,
        .evYield_Defense   = 1,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ROCK_HEAD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LUVDISC] =
    {
        .baseHP        = 43,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 97,
        .baseSpAttack  = 40, // Laugh at this user
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 225,
        .expYield = 116,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_HEART_SCALE,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_SOUL_HEART}, //Lord have mercy
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BAGON] =
    {
        .baseHP        = 45,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 50,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELGON] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON },
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SALAMENCE] =
    {
        .baseHP        = 95,
        .baseAttack    = 135,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 110,
        .baseSpDefense = 80,
        .types = { TYPE_DRAGON, TYPE_FLYING },
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BELDUM] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 35,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_METANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_METAGROSS] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_REGIROCK] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 200,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_REGICE] =
    {
        .baseHP        = 80,
        .baseAttack    = 50,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 200,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_REGISTEEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 75,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_LIGHT_METAL},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LATIAS] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = { TYPE_DRAGON, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LATIOS] =
    {
        .baseHP        = 80,
        .baseAttack    = 90,
        .baseDefense   = 80,
        .baseSpeed     = 110,
        .baseSpAttack  = 130,
        .baseSpDefense = 110,
        .types = { TYPE_DRAGON, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYOGRE] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 140,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 3,
        .expYield = 302,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DRIZZLE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_GROUDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 90,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DROUGHT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_RAYQUAZA] =
    {
        .baseHP        = 105,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = { TYPE_DRAGON, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 306,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_AIR_LOCK, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_JIRACHI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_STEEL, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_DEOXYS_NORMAL] =
    {
        .baseHP        = 50,
        .baseAttack    = 150,
        .baseDefense   = 50,
        .baseSpeed     = 150,
        .baseSpAttack  = 150,
        .baseSpDefense = 50,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED },
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

#if P_GEN_4_POKEMON == TRUE
    [SPECIES_TURTWIG] =
    {
        .baseHP        = 55,
        .baseAttack    = 68,
        .baseDefense   = 64,
        .baseSpeed     = 31,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GROTLE] =
    {
        .baseHP        = 75,
        .baseAttack    = 89,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 142,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TORTERRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 109,
        .baseDefense   = 105,
        .baseSpeed     = 56,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 236,
        .evYield_Attack    = 2,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_CHIMCHAR] =
    {
        .baseHP        = 44,
        .baseAttack    = 58,
        .baseDefense   = 44,
        .baseSpeed     = 61,
        .baseSpAttack  = 58,
        .baseSpDefense = 44,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_MONFERNO] =
    {
        .baseHP        = 64,
        .baseAttack    = 78,
        .baseDefense   = 52,
        .baseSpeed     = 81,
        .baseSpAttack  = 78,
        .baseSpDefense = 52,
        .types = { TYPE_FIRE, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_INFERNAPE] =
    {
        .baseHP        = 76,
        .baseAttack    = 104,
        .baseDefense   = 71,
        .baseSpeed     = 108,
        .baseSpAttack  = 104,
        .baseSpDefense = 71,
        .types = { TYPE_FIRE, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 240,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PIPLUP] =
    {
        .baseHP        = 53,
        .baseAttack    = 51,
        .baseDefense   = 53,
        .baseSpeed     = 40,
        .baseSpAttack  = 61,
        .baseSpDefense = 56,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 63,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE},
        #else
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        #endif
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PRINPLUP] =
    {
        .baseHP        = 64,
        .baseAttack    = 66,
        .baseDefense   = 68,
        .baseSpeed     = 50,
        .baseSpAttack  = 81,
        .baseSpDefense = 76,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 142,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE},
        #else
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        #endif
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EMPOLEON] =
    {
        .baseHP        = 84,
        .baseAttack    = 86,
        .baseDefense   = 88,
        .baseSpeed     = 60,
        .baseSpAttack  = 111,
        .baseSpDefense = 101,
        .types = { TYPE_WATER, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_COMPETITIVE},
        #else
            .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_DEFIANT},
        #endif
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_STARLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_STARAVIA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 119,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_STARAPTOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 70,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 60,
        #else
            .baseSpDefense = 50,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 218,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BIDOOF] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 31,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 50,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BIBAREL] =
    {
        .baseHP        = 79,
        .baseAttack    = 85,
        .baseDefense   = 60,
        .baseSpeed     = 71,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_WATER},
        .catchRate = 127,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SIMPLE, ABILITY_UNAWARE, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KRICKETOT] =
    {
        .baseHP        = 37,
        .baseAttack    = 25,
        .baseDefense   = 41,
        .baseSpeed     = 25,
        .baseSpAttack  = 25,
        .baseSpDefense = 41,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 255,
        .expYield = 39,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_KRICKETUNE] =
    {
        .baseHP        = 77,
        .baseAttack    = 85,
        .baseDefense   = 51,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 51,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 45,
        .expYield = 134,
        .evYield_Attack    = 2,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SHINX] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 34,
        .baseSpeed     = 45,
        .baseSpAttack  = 40,
        .baseSpDefense = 34,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 235,
        .expYield = 53,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUXIO] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 49,
        .baseSpeed     = 60,
        .baseSpAttack  = 60,
        .baseSpDefense = 49,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 120,
        .expYield = 127,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUXRAY] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 79,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 79,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 235,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_INTIMIDATE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BUDEW] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 255,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_ROSERADE] =
    {
        .baseHP        = 60,
        .baseAttack    = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 125,
        .baseSpDefense = 105,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 65,
        #else
            .baseDefense   = 55,
        #endif
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 75,
        .expYield = 232,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_POISON_POINT, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_CRANIDOS] =
    {
        .baseHP        = 67,
        .baseAttack    = 125,
        .baseDefense   = 40,
        .baseSpeed     = 58,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 45,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_RAMPARDOS] =
    {
        .baseHP        = 97,
        .baseAttack    = 165,
        .baseDefense   = 60,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 45,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHIELDON] =
    {
        .baseHP        = 30,
        .baseAttack    = 42,
        .baseDefense   = 118,
        .baseSpeed     = 30,
        .baseSpAttack  = 42,
        .baseSpDefense = 88,
        .types = { TYPE_ROCK, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 70,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BASTIODON] =
    {
        .baseHP        = 60,
        .baseAttack    = 52,
        .baseDefense   = 168,
        .baseSpeed     = 30,
        .baseSpAttack  = 47,
        .baseSpDefense = 138,
        .types = { TYPE_ROCK, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_STURDY, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BURMY_PLANT_CLOAK] = BURMY_SPECIES_INFO(BODY_COLOR_GREEN),

    [SPECIES_WORMADAM_PLANT_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 59,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 79,
        .baseSpDefense = 105,
        .types = { TYPE_BUG, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 148,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MOTHIM] =
    {
        .baseHP        = 70,
        .baseAttack    = 94,
        .baseDefense   = 50,
        .baseSpeed     = 66,
        .baseSpAttack  = 94,
        .baseSpDefense = 50,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 148,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_MALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_COMBEE] =
    {
        .baseHP        = 30,
        .baseAttack    = 30,
        .baseDefense   = 42,
        .baseSpeed     = 70,
        .baseSpAttack  = 30,
        .baseSpDefense = 42,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 49,
        .evYield_Speed     = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_NONE, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VESPIQUEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 102,
        .baseSpeed     = 40,
        .baseSpAttack  = 80,
        .baseSpDefense = 102,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 166,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PACHIRISU] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 200,
        .expYield = 142,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_VOLT_ABSORB},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BUIZEL] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FLOATZEL] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CHERUBI] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 35,
        .baseSpAttack  = 62,
        .baseSpDefense = 53,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CHERRIM_OVERCAST] = CHERRIM_SPECIES_INFO(BODY_COLOR_PURPLE),

    [SPECIES_SHELLOS_WEST_SEA] = SHELLOS_SPECIES_INFO(BODY_COLOR_PURPLE),

    [SPECIES_GASTRODON_WEST_SEA] = GASTRODON_SPECIES_INFO(BODY_COLOR_PURPLE),

    [SPECIES_AMBIPOM] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 66,
        .baseSpeed     = 115,
        .baseSpAttack  = 60,
        .baseSpDefense = 66,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 169,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 100,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_PICKUP, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIFLOON] =
    {
        .baseHP        = 90,
        .baseAttack    = 50,
        .baseDefense   = 34,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 44,
        .types = { TYPE_GHOST, TYPE_FLYING},
        .catchRate = 125,
        .expYield = 70,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIFBLIM] =
    {
        .baseHP        = 150,
        .baseAttack    = 80,
        .baseDefense   = 44,
        .baseSpeed     = 80,
        .baseSpAttack  = 90,
        .baseSpDefense = 54,
        .types = { TYPE_GHOST, TYPE_FLYING},
        .catchRate = 60,
        .expYield = 174,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FLUCTUATING,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_AFTERMATH, ABILITY_UNBURDEN, ABILITY_FLARE_BOOST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BUNEARY] =
    {
        .baseHP        = 55,
        .baseAttack    = 66,
        .baseDefense   = 44,
        .baseSpeed     = 85,
        .baseSpAttack  = 44,
        .baseSpDefense = 56,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 190,
        .expYield = 70,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KLUTZ, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LOPUNNY] =
    {
        .baseHP        = 65,
        .baseAttack    = 76,
        .baseDefense   = 84,
        .baseSpeed     = 105,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 60,
        .expYield = 168,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_KLUTZ, ABILITY_LIMBER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MISMAGIUS] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 173,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS },
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_HONCHKROW] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 52,
        .baseSpeed     = 71,
        .baseSpAttack  = 105,
        .baseSpDefense = 52,
        .types = { TYPE_DARK, TYPE_FLYING},
        .catchRate = 30,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_INSOMNIA, ABILITY_TAILSTREAM, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_GLAMEOW] =
    {
        .baseHP        = 49,
        .baseAttack    = 55,
        .baseDefense   = 42,
        .baseSpeed     = 85,
        .baseSpAttack  = 42,
        .baseSpDefense = 37,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIMBER, ABILITY_OWN_TEMPO, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PURUGLY] =
    {
        .baseHP        = 71,
        .baseAttack    = 82,
        .baseDefense   = 64,
        .baseSpeed     = 112,
        .baseSpAttack  = 64,
        .baseSpDefense = 59,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 75,
        .expYield = 158,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_OWN_TEMPO, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CHINGLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 120,
        .expYield = 57,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_CLEANSE_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_STUNKY] =
    {
        .baseHP        = 63,
        .baseAttack    = 63,
        .baseDefense   = 47,
        .baseSpeed     = 74,
        .baseSpAttack  = 41,
        .baseSpDefense = 41,
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 225,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SKUNTANK] =
    {
        .baseHP        = 103,
        .baseAttack    = 93,
        .baseDefense   = 67,
        .baseSpeed     = 84,
        .baseSpAttack  = 71,
        .baseSpDefense = 61,
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 60,
        .expYield = 168,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STENCH, ABILITY_AFTERMATH, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_BRONZOR] =
    {
        .baseHP        = 57,
        .baseAttack    = 24,
        .baseDefense   = 86,
        .baseSpeed     = 23,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .types = { TYPE_STEEL, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BRONZONG] =
    {
        .baseHP        = 67,
        .baseAttack    = 89,
        .baseDefense   = 116,
        .baseSpeed     = 33,
        .baseSpAttack  = 79,
        .baseSpDefense = 116,
        .types = { TYPE_STEEL, TYPE_PSYCHIC},
        .catchRate = 90,
        .expYield = 175,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_HEATPROOF, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BONSLY] =
    {
        .baseHP        = 50,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 10,
        .baseSpAttack  = 10,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 255,
        .expYield = 58,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_STURDY, ABILITY_ROCK_HEAD, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MIME_JR] =
    {
        .baseHP        = 20,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 70,
        .baseSpDefense = 90,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        #else
            .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        #endif
        .catchRate = 145,
        .expYield = 62,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_FILTER, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_HAPPINY] =
    {
        .baseHP        = 100,
        .baseAttack    = 5,
        .baseDefense   = 5,
        .baseSpeed     = 30,
        .baseSpAttack  = 15,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 130,
        .expYield = 110,
        .evYield_HP        = 1,
        .itemCommon = ITEM_OVAL_STONE,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_SERENE_GRACE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CHATOT] =
    {
        .baseHP        = 76,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 91,
        .baseSpAttack  = 92,
        .baseSpDefense = 42,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 30,
        .expYield = 144,
        .evYield_Attack    = 1,
        .itemRare = ITEM_METRONOME,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_TANGLED_FEET, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SPIRITOMB] =
    {
        .baseHP        = 50,
        .baseAttack    = 92,
        .baseDefense   = 108,
        .baseSpeed     = 35,
        .baseSpAttack  = 92,
        .baseSpDefense = 108,
        .types = { TYPE_GHOST, TYPE_DARK},
        .catchRate = 100,
        .expYield = 170,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GIBLE] =
    {
        .baseHP        = 58,
        .baseAttack    = 70,
        .baseDefense   = 45,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_DRAGON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GABITE] =
    {
        .baseHP        = 68,
        .baseAttack    = 90,
        .baseDefense   = 65,
        .baseSpeed     = 82,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = { TYPE_DRAGON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GARCHOMP] =
    {
        .baseHP        = 108,
        .baseAttack    = 130,
        .baseDefense   = 95,
        .baseSpeed     = 102,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = { TYPE_DRAGON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 270,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_NONE, ABILITY_ROUGH_SKIN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MUNCHLAX] =
    {
        .baseHP        = 135,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 5,
        .baseSpAttack  = 40,
        .baseSpDefense = 85,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 50,
        .expYield = 78,
        .evYield_HP        = 1,
        .itemCommon = ITEM_LEFTOVERS,
        .itemRare = ITEM_LEFTOVERS,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PICKUP, ABILITY_THICK_FAT, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_RIOLU] =
    {
        .baseHP        = 40,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 40,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 75,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUCARIO] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 115,
        .baseSpDefense = 70,
        .types = { TYPE_FIGHTING, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 184,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_STEADFAST, ABILITY_INNER_FOCUS, ABILITY_JUSTIFIED},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HIPPOPOTAS] =
    {
        .baseHP        = 68,
        .baseAttack    = 72,
        .baseDefense   = 78,
        .baseSpeed     = 32,
        .baseSpAttack  = 38,
        .baseSpDefense = 42,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 140,
        .expYield = 66,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HIPPOWDON] =
    {
        .baseHP        = 108,
        .baseAttack    = 112,
        .baseDefense   = 118,
        .baseSpeed     = 47,
        .baseSpAttack  = 68,
        .baseSpDefense = 72,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_STREAM, ABILITY_NONE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SKORUPI] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_POISON, TYPE_BUG},
        .catchRate = 120,
        .expYield = 66,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRAPION] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 110,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 45,
        .expYield = 175,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_SNIPER, ABILITY_KEEN_EYE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CROAGUNK] =
    {
        .baseHP        = 48,
        .baseAttack    = 61,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 61,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_FIGHTING},
        .catchRate = 140,
        .expYield = 60,
        .evYield_Attack    = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TOXICROAK] =
    {
        .baseHP        = 83,
        .baseAttack    = 106,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 86,
        .baseSpDefense = 65,
        .types = { TYPE_POISON, TYPE_FIGHTING},
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_DRY_SKIN, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CARNIVINE] =
    {
        .baseHP        = 74,
        .baseAttack    = 100,
        .baseDefense   = 72,
        .baseSpeed     = 46,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 200,
        .expYield = 159,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FINNEON] =
    {
        .baseHP        = 49,
        .baseAttack    = 49,
        .baseDefense   = 56,
        .baseSpeed     = 66,
        .baseSpAttack  = 49,
        .baseSpDefense = 61,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LUMINEON] =
    {
        .baseHP        = 69,
        .baseAttack    = 69,
        .baseDefense   = 76,
        .baseSpeed     = 91,
        .baseSpAttack  = 69,
        .baseSpDefense = 86,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 75,
        .expYield = 161,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_STORM_DRAIN, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MANTYKE] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 25,
        .expYield = 69,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_WATER_ABSORB, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SNOVER] =
    {
        .baseHP        = 60,
        .baseAttack    = 62,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_ICE},
        .catchRate = 120,
        .expYield = 67,
        .evYield_Attack    = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ABOMASNOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 92,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_ICE},
        .catchRate = 60,
        .expYield = 173,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_NONE, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WEAVILE] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 65,
        .baseSpeed     = 125,
        .baseSpAttack  = 45,
        .baseSpDefense = 85,
        .types = { TYPE_DARK, TYPE_ICE},
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_MAGNEZONE] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 115,
        .baseSpeed     = 60,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_ELECTRIC, TYPE_STEEL},
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LICKILICKY] =
    {
        .baseHP        = 110,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 30,
        .expYield = 180,
        .evYield_HP        = 3,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_OBLIVIOUS, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_RHYPERIOR] =
    {
        .baseHP        = 115,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_ROCK},
        .catchRate = 30,
        .expYield = 241,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_RAMPAGE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TANGROWTH] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 110,
        .baseSpDefense = 50,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 30,
        .expYield = 187,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_LEAF_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ELECTIVIRE] =
    {
        .baseHP        = 75,
        .baseAttack    = 123,
        .baseDefense   = 67,
        .baseSpeed     = 95,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 30,
        .expYield = 243,
        .evYield_Attack    = 3,
        .itemRare = ITEM_ELECTIRIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_MOTOR_DRIVE, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MAGMORTAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 83,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 30,
        .expYield = 243,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_MAGMARIZER,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_VITAL_SPIRIT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_TOGEKISS] =
    {
        .baseHP        = 85,
        .baseAttack    = 50,
        .baseDefense   = 95,
        .baseSpeed     = 80,
        .baseSpAttack  = 120,
        .baseSpDefense = 115,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_FAIRY, TYPE_FLYING},
        #else
            .types = { TYPE_NORMAL, TYPE_FLYING},
        #endif
        .catchRate = 30,
        .expYield = 245,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HUSTLE, ABILITY_SERENE_GRACE, ABILITY_SUPER_LUCK},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_YANMEGA] =
    {
        .baseHP        = 86,
        .baseAttack    = 76,
        .baseDefense   = 86,
        .baseSpeed     = 95,
        .baseSpAttack  = 116,
        .baseSpDefense = 56,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 30,
        .expYield = 180,
        .evYield_Attack    = 2,
        .itemRare = ITEM_WIDE_LENS,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_TINTED_LENS, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LEAFEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 110,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 184,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GLACEON] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 110,
        .baseSpeed     = 65,
        .baseSpAttack  = 130,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SNOW_CLOAK, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GLISCOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 125,
        .baseSpeed     = 95,
        .baseSpAttack  = 45,
        .baseSpDefense = 75,
        .types = { TYPE_GROUND, TYPE_FLYING},
        .catchRate = 30,
        .expYield = 179,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_SAND_VEIL, ABILITY_POISON_HEAL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MAMOSWINE] =
    {
        .baseHP        = 110,
        .baseAttack    = 130,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_GROUND},
        .catchRate = 50,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OBLIVIOUS, ABILITY_SNOW_CLOAK, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PORYGON_Z] =
    {
        .baseHP        = 85,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 135,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 30,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_DOWNLOAD, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_GALLADE] =
    {
        .baseHP        = 68,
        .baseAttack    = 125,
        .baseDefense   = 65,
        .baseSpeed     = 80,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 233,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_AMORPHOUS},
        #else
            .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #endif
        #if P_UPDATED_ABILITIES >= GEN_9
            .abilities = {ABILITY_STEADFAST, ABILITY_SHARPNESS, ABILITY_JUSTIFIED},
        #else
            .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_JUSTIFIED},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PROBOPASS] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 145,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 150,
        .types = { TYPE_ROCK, TYPE_STEEL},
        .catchRate = 60,
        .expYield = 184,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MAGNET,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_MAGNET_PULL, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DUSKNOIR] =
    {
        .baseHP        = 45,
        .baseAttack    = 100,
        .baseDefense   = 135,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 135,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 236,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_FROSLASS] =
    {
        .baseHP        = 70,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_ICE, TYPE_GHOST},
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ROTOM] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 77,
        .baseSpeed     = 91,
        .baseSpAttack  = 95,
        .baseSpDefense = 77,
        .types = { TYPE_ELECTRIC, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 154,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_GALVANIZE}, // maybe replace this one in the future
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_UXIE] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 130,
        .baseSpeed     = 95,
        .baseSpAttack  = 75,
        .baseSpDefense = 130,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_MESPRIT] =
    {
        .baseHP        = 80,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 105,
        .baseSpDefense = 105,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_AZELF] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 70,
        .baseSpeed     = 115,
        .baseSpAttack  = 125,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 140,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_DIALGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 100,
        .types = { TYPE_STEEL, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_PALKIA] =
    {
        .baseHP        = 90,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_HEATRAN] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 106,
        .baseSpeed     = 77,
        .baseSpAttack  = 130,
        .baseSpDefense = 106,
        .types = { TYPE_FIRE, TYPE_STEEL},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_REGIGIGAS] =
    {
        .baseHP        = 110,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 110,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SLOW_START, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_GIRATINA_ALTERED] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 100,
        .baseSpDefense = 120,
        .types = { TYPE_GHOST, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_PHANTOM_GALE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_CRESSELIA] =
    {
        .baseHP        = 120,
        .baseAttack    = 70,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 110 : 120,
        .baseSpeed     = 85,
        .baseSpAttack  = 75,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_PHIONE] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 30,
        .expYield = 216,
        .evYield_HP        = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MANAPHY] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HYDRATION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_DARKRAI] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 125,
        .baseSpAttack  = 135,
        .baseSpDefense = 90,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BAD_DREAMS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_SHAYMIN_LAND] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_ARCEUS_NORMAL] =
    {
        .baseHP        = 120,
        .baseAttack    = 120,
        .baseDefense   = 120,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 120,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 3,
        .expYield = 324,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MULTITYPE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_VICTINI] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FIRE},
        .catchRate = 3,
        .expYield = 270,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VICTORY_STAR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_SNIVY] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 55,
        .baseSpeed     = 63,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SERVINE] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 145,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SERPERIOR] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 95,
        .baseSpeed     = 113,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 238,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_TEPIG] =
    {
        .baseHP        = 65,
        .baseAttack    = 63,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_PIGNITE] =
    {
        .baseHP        = 90,
        .baseAttack    = 93,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 70,
        .baseSpDefense = 55,
        .types = { TYPE_FIRE, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 146,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_EMBOAR] =
    {
        .baseHP        = 110,
        .baseAttack    = 123,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        .types = { TYPE_FIRE, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 238,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_OSHAWOTT] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 63,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 62,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DEWOTT] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 60,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 145,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SAMUROTT] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 70,
        .baseSpAttack  = 108,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 238,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PATRAT] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 39,
        .baseSpeed     = 42,
        .baseSpAttack  = 35,
        .baseSpDefense = 39,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_KEEN_EYE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WATCHOG] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 69,
        .baseSpeed     = 77,
        .baseSpAttack  = 60,
        .baseSpDefense = 69,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_KEEN_EYE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LILLIPUP] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 55,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_PICKUP, ABILITY_RUN_AWAY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HERDIER] =
    {
        .baseHP        = 65,
        .baseAttack    = 80,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 120,
        .expYield = 130,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_STOUTLAND] =
    {
        .baseHP        = 85,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 110,
        #else
            .baseAttack    = 100,
        #endif
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 225,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_SAND_RUSH, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PURRLOIN] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 37,
        .baseSpeed     = 66,
        .baseSpAttack  = 50,
        .baseSpDefense = 37,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_LIEPARD] =
    {
        .baseHP        = 64,
        .baseAttack    = 88,
        .baseDefense   = 50,
        .baseSpeed     = 106,
        .baseSpAttack  = 88,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 90,
        .expYield = 156,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_PANSAGE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_HERBIVATE, ABILITY_OVERGROW},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SIMISAGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_HERBIVATE, ABILITY_OVERGROW},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PANSEAR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_SCORCHATE, ABILITY_BLAZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_SIMISEAR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_SCORCHATE, ABILITY_BLAZE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

    [SPECIES_PANPOUR] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 48,
        .baseSpeed     = 64,
        .baseSpAttack  = 53,
        .baseSpDefense = 48,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_OCEANATE, ABILITY_TORRENT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SIMIPOUR] =
    {
        .baseHP        = 75,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 101,
        .baseSpAttack  = 98,
        .baseSpDefense = 63,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_OCEANATE, ABILITY_TORRENT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MUNNA] =
    {
        .baseHP        = 76,
        .baseAttack    = 25,
        .baseDefense   = 45,
        .baseSpeed     = 24,
        .baseSpAttack  = 67,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 190,
        .expYield = 58,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MUSHARNA] =
    {
        .baseHP        = 116,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 29,
        .baseSpAttack  = 107,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 170,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FOREWARN, ABILITY_SYNCHRONIZE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_PIDOVE] =
    {
        .baseHP        = 50,
        .baseAttack    = 55,
        .baseDefense   = 50,
        .baseSpeed     = 43,
        .baseSpAttack  = 36,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TRANQUILL] =
    {
        .baseHP        = 62,
        .baseAttack    = 77,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 42,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 125,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_UNFEZANT] =
    {
        .baseHP        = 80,
        .baseDefense   = 80,
        .baseSpeed     = 93,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 115,
        #else
            .baseAttack    = 105,
        #endif
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 220,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_SUPER_LUCK, ABILITY_RIVALRY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BLITZLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 60,
        .baseDefense   = 32,
        .baseSpeed     = 76,
        .baseSpAttack  = 50,
        .baseSpDefense = 32,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 190,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ZEBSTRIKA] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 63,
        .baseSpeed     = 116,
        .baseSpAttack  = 80,
        .baseSpDefense = 63,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 75,
        .expYield = 174,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_MOTOR_DRIVE, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ROGGENROLA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 85,
        .baseSpeed     = 15,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BOLDORE] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 120,
        .expYield = 137,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_WEAK_ARMOR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GIGALITH] =
    {
        .baseHP        = 85,
        .baseAttack    = 135,
        .baseDefense   = 130,
        .baseSpeed     = 25,
        .baseSpAttack  = 60,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 80,
        #else
            .baseSpDefense = 70,
        #endif
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 45,
        .expYield = 232,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_EVERSTONE,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_SAND_STREAM, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_WOOBAT] =
    {
        .baseAttack    = 45,
        .baseDefense   = 43,
        .baseSpeed     = 72,
        .baseSpAttack  = 55,
        .baseSpDefense = 43,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 65,
        #else
            .baseHP        = 55,
        #endif
        .types = { TYPE_PSYCHIC, TYPE_FLYING},
        .catchRate = 190,
        .expYield = 65,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FLYING},
        .abilities = {ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWOOBAT] =
    {
        .baseHP        = 67,
        .baseAttack    = 57,
        .baseDefense   = 55,
        .baseSpeed     = 114,
        .baseSpAttack  = 77,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 149,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FLYING},
        .abilities = {ABILITY_UNAWARE, ABILITY_KLUTZ, ABILITY_SIMPLE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRILBUR] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 40,
        .baseSpeed     = 68,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 120,
        .expYield = 66,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_EXCADRILL] =
    {
        .baseHP        = 110,
        .baseAttack    = 135,
        .baseDefense   = 60,
        .baseSpeed     = 88,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = { TYPE_GROUND, TYPE_STEEL},
        .catchRate = 60,
        .expYield = 178,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_RUSH, ABILITY_SAND_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_AUDINO] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 86,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 86,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 390,
        .evYield_HP        = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_REGENERATOR, ABILITY_KLUTZ},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TIMBURR] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 55,
        .baseSpeed     = 35,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 180,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GURDURR] =
    {
        .baseHP        = 85,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 90,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CONKELDURR] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 95,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 227,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_SHEER_FORCE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TYMPOLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 64,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 59,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PALPITOAD] =
    {
        .baseHP        = 75,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 69,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_GROUND},
        .catchRate = 120,
        .expYield = 134,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_HYDRATION, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SEISMITOAD] =
    {
        .baseHP        = 105,
        .baseDefense   = 75,
        .baseSpeed     = 74,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 95,
        #else
            .baseAttack    = 85,
        #endif
        .types = { TYPE_WATER, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 229,
        .evYield_HP        = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_POISON_TOUCH, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_THROH] =
    {
        .baseHP        = 120,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 85,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 163,
        .evYield_HP        = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_GUTS, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SAWK] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 75,
        .baseSpeed     = 85,
        .baseSpAttack  = 30,
        .baseSpDefense = 75,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 163,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_BELT,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_STURDY, ABILITY_INNER_FOCUS, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_SEWADDLE] =
    {
        .baseHP        = 45,
        .baseAttack    = 53,
        .baseDefense   = 70,
        .baseSpeed     = 42,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_BUG, TYPE_GRASS},
        .catchRate = 255,
        .expYield = 62,
        .evYield_Defense   = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SWADLOON] =
    {
        .baseHP        = 55,
        .baseAttack    = 63,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_GRASS},
        .catchRate = 120,
        .expYield = 133,
        .evYield_Defense   = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LEAVANNY] =
    {
        .baseHP        = 75,
        .baseAttack    = 103,
        .baseDefense   = 80,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
        #if P_UPDATED_STATS >= GEN_6
            .baseSpDefense = 80,
        #else
            .baseSpDefense = 70,
        #endif
        .types = { TYPE_BUG, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 225,
        .evYield_Attack    = 3,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_CHLOROPHYLL, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_VENIPEDE] =
    {
        .baseHP        = 30,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 39,
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
        #else
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
        #endif
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_WHIRLIPEDE] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 99,
        .baseSpeed     = 47,
        .baseSpAttack  = 40,
        .baseSpDefense = 79,
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 120,
        .expYield = 126,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
        #else
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
        #endif
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SCOLIPEDE] =
    {
        .baseHP        = 60,
        .baseDefense   = 89,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 69,
        #if P_UPDATED_STATS >= GEN_6
            .baseAttack    = 100,
        #else
            .baseAttack    = 90,
        #endif
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 45,
        .expYield = 218,
        .evYield_Speed     = 3,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_SPEED_BOOST},
        #else
            .abilities = {ABILITY_POISON_POINT, ABILITY_SWARM, ABILITY_QUICK_FEET},
        #endif
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_COTTONEE] =
    {
        .baseHP        = 40,
        .baseAttack    = 27,
        .baseDefense   = 60,
        .baseSpeed     = 66,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_GRASS, TYPE_FAIRY},
        #else
            .types = { TYPE_GRASS, TYPE_GRASS},
        #endif
        .catchRate = 190,
        .expYield = 56,
        .evYield_Speed     = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WHIMSICOTT] =
    {
        .baseHP        = 60,
        .baseAttack    = 67,
        .baseDefense   = 85,
        .baseSpeed     = 116,
        .baseSpAttack  = 77,
        .baseSpDefense = 75,
        #if P_UPDATED_TYPES >= GEN_6
            .types = { TYPE_GRASS, TYPE_FAIRY},
        #else
            .types = { TYPE_GRASS, TYPE_GRASS},
        #endif
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_PRANKSTER, ABILITY_INFILTRATOR, ABILITY_CHLOROPHYLL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_PETILIL] =
    {
        .baseHP        = 45,
        .baseAttack    = 35,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 70,
        .baseSpDefense = 50,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 56,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_LILLIGANT] =
    {
        .baseHP        = 70,
        .baseAttack    = 60,
        .baseDefense   = 75,
        .baseSpeed     = 90,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 75,
        .expYield = 168,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_OWN_TEMPO, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_BASCULIN_RED_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed     = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_RECKLESS, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SANDILE] =
    {
        .baseHP        = 50,
        .baseAttack    = 72,
        .baseDefense   = 35,
        .baseSpeed     = 65,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_GROUND, TYPE_DARK},
        .catchRate = 180,
        .expYield = 58,
        .evYield_Attack    = 1,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KROKOROK] =
    {
        .baseHP        = 60,
        .baseAttack    = 82,
        .baseDefense   = 45,
        .baseSpeed     = 74,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_DARK},
        .catchRate = 90,
        .expYield = 123,
        .evYield_Attack    = 2,
        .itemRare = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_KROOKODILE] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseSpeed     = 92,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        #if P_UPDATED_STATS >= GEN_6
            .baseDefense   = 80,
        #else
            .baseDefense   = 70,
        #endif
        .types = { TYPE_GROUND, TYPE_DARK},
        .catchRate = 45,
        .expYield = 234,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_BLACK_GLASSES,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_MOXIE, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DARUMAKA] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DARMANITAN_STANDARD_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_MARACTUS] =
    {
        .baseHP        = 75,
        .baseAttack    = 86,
        .baseDefense   = 67,
        .baseSpeed     = 60,
        .baseSpAttack  = 106,
        .baseSpDefense = 67,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 255,
        .expYield = 161,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CHLOROPHYLL, ABILITY_STORM_DRAIN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DWEBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 85,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_BUG, TYPE_ROCK},
        .catchRate = 190,
        .expYield = 65,
        .evYield_Defense   = 1,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CRUSTLE] =
    {
        .baseHP        = 70,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        #if P_UPDATED_STATS >= GEN_7
            .baseAttack    = 105,
        #else
            .baseAttack    = 95,
        #endif
        .types = { TYPE_BUG, TYPE_ROCK},
        .catchRate = 75,
        .expYield = 170,
        .evYield_Defense   = 2,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STURDY, ABILITY_SHELL_ARMOR, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SCRAGGY] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 70,
        .baseSpeed     = 48,
        .baseSpAttack  = 35,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_FIGHTING},
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack    = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_SCRAFTY] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 115,
        .baseSpeed     = 58,
        .baseSpAttack  = 45,
        .baseSpDefense = 115,
        .types = { TYPE_DARK, TYPE_FIGHTING},
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_MOXIE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SIGILYPH] =
    {
        .baseHP        = 72,
        .baseAttack    = 58,
        .baseDefense   = 80,
        .baseSpeed     = 97,
        .baseSpAttack  = 103,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_WONDER_SKIN, ABILITY_MAGIC_GUARD, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_YAMASK] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_MUMMY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_COFAGRIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 50,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_MUMMY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TIRTOUGA] =
    {
        .baseHP        = 54,
        .baseAttack    = 78,
        .baseDefense   = 103,
        .baseSpeed     = 22,
        .baseSpAttack  = 53,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_ROCK},
        .catchRate = 45,
        .expYield = 71,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CARRACOSTA] =
    {
        .baseHP        = 74,
        .baseAttack    = 108,
        .baseDefense   = 133,
        .baseSpeed     = 32,
        .baseSpAttack  = 83,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_ROCK},
        .catchRate = 45,
        .expYield = 173,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_SOLID_ROCK, ABILITY_STURDY, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ARCHEN] =
    {
        .baseHP        = 55,
        .baseAttack    = 112,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 74,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 71,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_DEFEATIST, ABILITY_NONE, ABILITY_EARLY_BIRD},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ARCHEOPS] =
    {
        .baseHP        = 75,
        .baseAttack    = 140,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 112,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_DEFEATIST, ABILITY_NONE, ABILITY_EARLY_BIRD}, //early cuz its a fossil! get it? fine, ill just leave
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TRUBBISH] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 62,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 62,
        .types = { TYPE_POISON, TYPE_POISON},
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SILK_SCARF,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STENCH, ABILITY_STICKY_HOLD, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_GARBODOR] =
    {
        GARBODOR_MISC_INFO,
    },

    [SPECIES_ZORUA] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 80,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 75,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ZOROARK] =
    {
        .baseHP        = 60,
        .baseAttack    = 105,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 45,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MINCCINO] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 60,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CINCCINO] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 60,
        .expYield = 165,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_TECHNICIAN, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_GOTHITA] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOTHORITA] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 70,
        .baseSpeed     = 55,
        .baseSpAttack  = 75,
        .baseSpDefense = 85,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 100,
        .expYield = 137,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOTHITELLE] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 50,
        .expYield = 221,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FRISK, ABILITY_COMPETITIVE, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SOLOSIS] =
    {
        .baseHP        = 45,
        .baseAttack    = 30,
        .baseDefense   = 40,
        .baseSpeed     = 20,
        .baseSpAttack  = 105,
        .baseSpDefense = 50,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 200,
        .expYield = 58,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_DUOSION] =
    {
        .baseHP        = 65,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 100,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_REUNICLUS] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 75,
        .baseSpeed     = 30,
        .baseSpAttack  = 125,
        .baseSpDefense = 85,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 50,
        .expYield = 221,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_OVERCOAT, ABILITY_MAGIC_GUARD, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DUCKLETT] =
    {
        .baseHP        = 62,
        .baseAttack    = 44,
        .baseDefense   = 50,
        .baseSpeed     = 55,
        .baseSpAttack  = 44,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 190,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SWANNA] =
    {
        .baseHP        = 75,
        .baseAttack    = 87,
        .baseDefense   = 63,
        .baseSpeed     = 98,
        .baseSpAttack  = 87,
        .baseSpDefense = 63,
        .types = { TYPE_WATER, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 166,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_BIG_PECKS, ABILITY_HYDRATION},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLITE] =
    {
        .baseHP        = 36,
        .baseAttack    = 50,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 255,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLISH] =
    {
        .baseHP        = 51,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 59,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 120,
        .expYield = 138,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_CLOAK, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VANILLUXE] =
    {
        .baseHP        = 71,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 79,
        .baseSpAttack  = 110,
        .baseSpDefense = 95,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 45,
        .expYield = 241,
        .evYield_SpAttack  = 3,
        .itemCommon = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_ICE_BODY, ABILITY_SNOW_WARNING, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DEERLING_SPRING] = DEERLING_SPECIES_INFO(BODY_COLOR_PINK),

    [SPECIES_SAWSBUCK_SPRING] = SAWSBUCK_SPECIES_INFO,

    [SPECIES_EMOLGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 103,
        .baseSpAttack  = 75,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_FLYING},
        .catchRate = 200,
        .expYield = 150,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_NONE, ABILITY_MOTOR_DRIVE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_KARRABLAST] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 200,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_SHED_SKIN, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ESCAVALIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 105,
        .baseSpeed     = 20,
        .baseSpAttack  = 60,
        .baseSpDefense = 105,
        .types = { TYPE_BUG, TYPE_STEEL},
        .catchRate = 75,
        .expYield = 173,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FOONGUS] =
    {
        .baseHP        = 69,
        .baseAttack    = 55,
        .baseDefense   = 45,
        .baseSpeed     = 15,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 190,
        .expYield = 59,
        .evYield_HP        = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_AMOONGUSS] =
    {
        .baseHP        = 114,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 80,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 75,
        .expYield = 162,
        .evYield_HP        = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EFFECT_SPORE, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_FRILLISH] =
    {
        .baseHP        = 55,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 40,
        .baseSpAttack  = 65,
        .baseSpDefense = 85,
        .types = { TYPE_WATER, TYPE_GHOST},
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_JELLICENT] =
    {
        .baseHP        = 100,
        .baseAttack    = 60,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = { TYPE_WATER, TYPE_GHOST},
        .catchRate = 60,
        .expYield = 168,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_CURSED_BODY, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ALOMOMOLA] =
    {
        .baseHP        = 165,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_HEALER, ABILITY_HYDRATION, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_JOLTIK] =
    {
        .baseHP        = 50,
        .baseAttack    = 47,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 57,
        .baseSpDefense = 50,
        .types = { TYPE_BUG, TYPE_ELECTRIC},
        .catchRate = 190,
        .expYield = 64,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_GALVANTULA] =
    {
        .baseHP        = 70,
        .baseAttack    = 77,
        .baseDefense   = 60,
        .baseSpeed     = 108,
        .baseSpAttack  = 97,
        .baseSpDefense = 60,
        .types = { TYPE_BUG, TYPE_ELECTRIC},
        .catchRate = 75,
        .expYield = 165,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_UNNERVE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_FERROSEED] =
    {
        .baseHP        = 44,
        .baseAttack    = 50,
        .baseDefense   = 91,
        .baseSpeed     = 10,
        .baseSpAttack  = 24,
        .baseSpDefense = 86,
        .types = { TYPE_GRASS, TYPE_STEEL},
        .catchRate = 255,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_IRON_BARBS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_FERROTHORN] =
    {
        .baseHP        = 74,
        .baseAttack    = 94,
        .baseDefense   = 131,
        .baseSpeed     = 20,
        .baseSpAttack  = 54,
        .baseSpDefense = 116,
        .types = { TYPE_GRASS, TYPE_STEEL},
        .catchRate = 90,
        .expYield = 171,
        .evYield_Defense   = 2,
        .itemRare = ITEM_STICKY_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_IRON_BARBS, ABILITY_NONE, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KLINK] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 30,
        .baseSpAttack  = 45,
        .baseSpDefense = 60,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 130,
        .expYield = 60,
        .evYield_Defense   = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_KLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 95,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 60,
        .expYield = 154,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_KLINKLANG] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 85,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 30,
        .expYield = 234,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PLUS, ABILITY_MINUS, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_TYNAMO] =
    {
        .baseHP        = 35,
        .baseAttack    = 55,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 190,
        .expYield = 55,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_EELEKTRIK] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 40,
        .baseSpAttack  = 75,
        .baseSpDefense = 70,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 60,
        .expYield = 142,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_EELEKTROSS] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 30,
        .expYield = 232,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ELGYEM] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 30,
        .baseSpAttack  = 85,
        .baseSpDefense = 55,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 67,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BEHEEYEM] =
    {
        .baseHP        = 75,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 40,
        .baseSpAttack  = 125,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 90,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_TELEPATHY, ABILITY_SYNCHRONIZE, ABILITY_ANALYTIC},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LITWICK] =
    {
        .baseHP        = 50,
        .baseAttack    = 30,
        .baseDefense   = 55,
        .baseSpeed     = 20,
        .baseSpAttack  = 65,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_FIRE},
        .catchRate = 190,
        .expYield = 55,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
        #else
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
        #endif
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
    },

    [SPECIES_LAMPENT] =
    {
        .baseHP        = 60,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 55,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = { TYPE_GHOST, TYPE_FIRE},
        .catchRate = 90,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
        #else
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
        #endif
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_CHANDELURE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 145,
        .baseSpDefense = 90,
        .types = { TYPE_GHOST, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 234,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        #if P_UPDATED_ABILITIES >= GEN_6
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_INFILTRATOR},
        #else
            .abilities = {ABILITY_FLASH_FIRE, ABILITY_FLAME_BODY, ABILITY_SHADOW_TAG},
        #endif
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_AXEW] =
    {
        .baseHP        = 46,
        .baseAttack    = 87,
        .baseDefense   = 60,
        .baseSpeed     = 57,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 75,
        .expYield = 64,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FRAXURE] =
    {
        .baseHP        = 66,
        .baseAttack    = 117,
        .baseDefense   = 70,
        .baseSpeed     = 67,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 60,
        .expYield = 144,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_HAXORUS] =
    {
        .baseHP        = 76,
        .baseAttack    = 147,
        .baseDefense   = 90,
        .baseSpeed     = 97,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 243,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_RIVALRY, ABILITY_MOLD_BREAKER, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CUBCHOO] =
    {
        .baseHP        = 55,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BEARTIC] =
    {
        .baseHP        = 95,
        .baseDefense   = 80,
        .baseSpeed     = 50,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        #if P_UPDATED_STATS >= GEN_7
            .baseAttack    = 130,
        #else
            .baseAttack    = 110,
        #endif
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 60,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_SLUSH_RUSH, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_CRYOGONAL] =
    {
        .baseAttack    = 50,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        #if P_UPDATED_STATS >= GEN_7
            .baseHP        = 80,
            .baseDefense   = 50,
        #else
            .baseHP        = 70,
            .baseDefense   = 30,
        #endif
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 25,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SHELMET] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 85,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 65,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 200,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HYDRATION, ABILITY_SHELL_ARMOR, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ACCELGOR] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 100,
        .baseSpDefense = 60,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 75,
        .expYield = 173,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_HYDRATION, ABILITY_STICKY_HOLD, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_STUNFISK] =
    {
        .baseHP        = 109,
        .baseAttack    = 66,
        .baseDefense   = 84,
        .baseSpeed     = 32,
        .baseSpAttack  = 81,
        .baseSpDefense = 99,
        .types = { TYPE_GROUND, TYPE_ELECTRIC},
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 70,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_STATIC, ABILITY_LIMBER, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MIENFOO] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 55,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 180,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MIENSHAO] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 95,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_REGENERATOR, ABILITY_RECKLESS},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_DRUDDIGON] =
    {
        .baseHP        = 77,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 48,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 170,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_ROUGH_SKIN, ABILITY_SHEER_FORCE, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_GOLETT] =
    {
        .baseHP        = 59,
        .baseAttack    = 74,
        .baseDefense   = 50,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GHOST},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_GOLURK] =
    {
        .baseHP        = 89,
        .baseAttack    = 124,
        .baseDefense   = 80,
        .baseSpeed     = 55,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_GHOST},
        .catchRate = 90,
        .expYield = 169,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_IRON_FIST, ABILITY_KLUTZ, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_PAWNIARD] =
    {
        .baseHP        = 45,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_STEEL},
        .catchRate = 120,
        .expYield = 68,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BISHARP] =
    {
        .baseHP        = 65,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_DEFIANT, ABILITY_INNER_FOCUS, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BOUFFALANT] =
    {
        .baseHP        = 95,
        .baseAttack    = 110,
        .baseDefense   = 95,
        .baseSpeed     = 55,
        .baseSpAttack  = 40,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RECKLESS, ABILITY_SAP_SIPPER, ABILITY_SOUNDPROOF},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_RUFFLET] =
    {
        .baseHP        = 70,
        .baseAttack    = 83,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 37,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_HUSTLE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_BRAVIARY] =
    {
        .baseHP        = 100,
        .baseAttack    = 123,
        .baseDefense   = 75,
        .baseSpeed     = 80,
        .baseSpAttack  = 57,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 60,
        .expYield = 179,
        .evYield_Attack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_VULLABY] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_FLYING},
        .catchRate = 190,
        .expYield = 74,
        .evYield_Defense   = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MANDIBUZZ] =
    {
        .baseHP        = 110,
        .baseAttack    = 65,
        .baseDefense   = 105,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = { TYPE_DARK, TYPE_FLYING},
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_OVERCOAT, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_HEATMOR] =
    {
        .baseHP        = 85,
        .baseAttack    = 97,
        .baseDefense   = 66,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 66,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 90,
        .expYield = 169,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DURANT] =
    {
        .baseHP        = 58,
        .baseAttack    = 109,
        .baseDefense   = 112,
        .baseSpeed     = 109,
        .baseSpAttack  = 48,
        .baseSpDefense = 48,
        .types = { TYPE_BUG, TYPE_STEEL},
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_HUSTLE, ABILITY_TRUANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DEINO] =
    {
        .baseHP        = 52,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 38,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = { TYPE_DARK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_ZWEILOUS] =
    {
        .baseHP        = 72,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 58,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HYDREIGON] =
    {
        .baseHP        = 92,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 98,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_DARK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LARVESTA] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VOLCARONA] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 105,
        .types = { TYPE_BUG, TYPE_FIRE},
        .catchRate = 15,
        .expYield = 248,
        .evYield_SpAttack  = 3,
        .itemCommon = ITEM_SILVER_POWDER,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_SWARM},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_COBALION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 129,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 72,
        .types = { TYPE_STEEL, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TERRAKION] =
    {
        .baseHP        = 91,
        .baseAttack    = 129,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 72,
        .baseSpDefense = 90,
        .types = { TYPE_ROCK, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_VIRIZION] =
    {
        .baseHP        = 91,
        .baseAttack    = 90,
        .baseDefense   = 72,
        .baseSpeed     = 108,
        .baseSpAttack  = 90,
        .baseSpDefense = 129,
        .types = { TYPE_GRASS, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TORNADUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = { TYPE_FLYING, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_THUNDURUS_INCARNATE] =
    {
        .baseHP        = 79,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 111,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_RESHIRAM] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = { TYPE_DRAGON, TYPE_FIRE},
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TURBOBLAZE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZEKROM] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_ELECTRIC},
        .catchRate = 3,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TERAVOLT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LANDORUS_INCARNATE] =
    {
        .baseHP        = 89,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 101,
        .baseSpAttack  = 115,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SAND_FORCE, ABILITY_NONE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYUREM] =
    {
        .baseHP        = 125,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_DRAGON, TYPE_ICE},
        .catchRate = 3,
        .expYield = 297,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KELDEO_ORDINARY] =
    {
        .baseHP        = 91,
        .baseAttack    = 72,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 129,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELOETTA_ARIA] =
    {
        .baseHP        = 100,
        .baseAttack    = 77,
        .baseDefense   = 77,
        .baseSpeed     = 90,
        .baseSpAttack  = 128,
        .baseSpDefense = 128,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_GENESECT] = GENESECT_SPECIES_INFO,
#endif

#if P_GEN_6_POKEMON == TRUE
    [SPECIES_CHESPIN] =
    {
        .baseHP        = 56,
        .baseAttack    = 61,
        .baseDefense   = 65,
        .baseSpeed     = 38,
        .baseSpAttack  = 48,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_QUILLADIN] =
    {
        .baseHP        = 61,
        .baseAttack    = 78,
        .baseDefense   = 95,
        .baseSpeed     = 57,
        .baseSpAttack  = 56,
        .baseSpDefense = 58,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 142,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_CHESNAUGHT] =
    {
        .baseHP        = 88,
        .baseAttack    = 107,
        .baseDefense   = 122,
        .baseSpeed     = 64,
        .baseSpAttack  = 74,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FENNEKIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 60,
        .baseSpAttack  = 62,
        .baseSpDefense = 60,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 61,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BRAIXEN] =
    {
        .baseHP        = 59,
        .baseAttack    = 59,
        .baseDefense   = 58,
        .baseSpeed     = 73,
        .baseSpAttack  = 90,
        .baseSpDefense = 70,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 143,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DELPHOX] =
    {
        .baseHP        = 75,
        .baseAttack    = 69,
        .baseDefense   = 72,
        .baseSpeed     = 104,
        .baseSpAttack  = 114,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_FROAKIE] =
    {
        .baseHP        = 41,
        .baseAttack    = 56,
        .baseDefense   = 40,
        .baseSpeed     = 71,
        .baseSpAttack  = 62,
        .baseSpDefense = 44,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 63,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_FROGADIER] =
    {
        .baseHP        = 54,
        .baseAttack    = 63,
        .baseDefense   = 52,
        .baseSpeed     = 97,
        .baseSpAttack  = 83,
        .baseSpDefense = 56,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 142,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GRENINJA] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_BUNNELBY] =
    {
        .baseHP        = 38,
        .baseAttack    = 36,
        .baseDefense   = 38,
        .baseSpeed     = 57,
        .baseSpAttack  = 32,
        .baseSpDefense = 36,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 47,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DIGGERSBY] =
    {
        .baseHP        = 85,
        .baseAttack    = 56,
        .baseDefense   = 77,
        .baseSpeed     = 78,
        .baseSpAttack  = 50,
        .baseSpDefense = 77,
        .types = { TYPE_NORMAL, TYPE_GROUND},
        .catchRate = 127,
        .expYield = 148,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_CHEEK_POUCH, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FLETCHLING] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 43,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 38,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_FLETCHINDER] =
    {
        .baseHP        = 62,
        .baseAttack    = 73,
        .baseDefense   = 55,
        .baseSpeed     = 84,
        .baseSpAttack  = 56,
        .baseSpDefense = 52,
        .types = { TYPE_FIRE, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 134,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TALONFLAME] =
    {
        .baseHP        = 78,
        .baseAttack    = 81,
        .baseDefense   = 71,
        .baseSpeed     = 126,
        .baseSpAttack  = 74,
        .baseSpDefense = 69,
        .types = { TYPE_FIRE, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 175,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_FLAME_BODY, ABILITY_NONE, ABILITY_GALE_WINGS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SCATTERBUG] =
    {
        .baseHP        = 38,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 27,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 255,
        .expYield = 40,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_COMPOUND_EYES, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SPEWPA] =
    {
        .baseHP        = 45,
        .baseAttack    = 22,
        .baseDefense   = 60,
        .baseSpeed     = 29,
        .baseSpAttack  = 27,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 120,
        .expYield = 75,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_FRIEND_GUARD},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_VIVILLON_ICY_SNOW] = VIVILLON_SPECIES_INFO(BODY_COLOR_WHITE),

    [SPECIES_LITLEO] =
    {
        .baseHP        = 62,
        .baseAttack    = 50,
        .baseDefense   = 58,
        .baseSpeed     = 72,
        .baseSpAttack  = 73,
        .baseSpDefense = 54,
        .types = { TYPE_FIRE, TYPE_NORMAL},
        .catchRate = 220,
        .expYield = 74,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RIVALRY, ABILITY_UNNERVE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PYROAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 68,
        .baseDefense   = 72,
        .baseSpeed     = 106,
        .baseSpAttack  = 109,
        .baseSpDefense = 66,
        .types = { TYPE_FIRE, TYPE_NORMAL},
        .catchRate = 65,
        .expYield = 177,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(87.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RIVALRY, ABILITY_SCORCHATE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FLABEBE_RED_FLOWER] = FLABEBE_SPECIES_INFO,

    [SPECIES_FLOETTE_RED_FLOWER] = FLOETTE_SPECIES_INFO,

    [SPECIES_FLORGES_RED_FLOWER] = FLORGES_SPECIES_INFO,

    [SPECIES_SKIDDO] =
    {
        .baseHP        = 66,
        .baseAttack    = 65,
        .baseDefense   = 48,
        .baseSpeed     = 52,
        .baseSpAttack  = 62,
        .baseSpDefense = 57,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 200,
        .expYield = 70,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOGOAT] =
    {
        .baseHP        = 123,
        .baseAttack    = 100,
        .baseDefense   = 62,
        .baseSpeed     = 68,
        .baseSpAttack  = 97,
        .baseSpDefense = 81,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 186,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_NONE, ABILITY_GRASS_PELT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PANCHAM] =
    {
        .baseHP        = 67,
        .baseAttack    = 82,
        .baseDefense   = 62,
        .baseSpeed     = 43,
        .baseSpAttack  = 46,
        .baseSpDefense = 48,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 220,
        .expYield = 70,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PANGORO] =
    {
        .baseHP        = 95,
        .baseAttack    = 124,
        .baseDefense   = 78,
        .baseSpeed     = 58,
        .baseSpAttack  = 69,
        .baseSpDefense = 71,
        .types = { TYPE_FIGHTING, TYPE_DARK},
        .catchRate = 65,
        .expYield = 173,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MENTAL_HERB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_IRON_FIST, ABILITY_MOLD_BREAKER, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FURFROU_NATURAL] = FURFROU_SPECIES_INFO(FLIP),

    [SPECIES_ESPURR] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 54,
        .baseSpeed     = 68,
        .baseSpAttack  = 63,
        .baseSpDefense = 60,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 190,
        .expYield = 71,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MEOWSTIC_MALE] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed     = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_HONEDGE] =
    {
        .baseHP        = 45,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 28,
        .baseSpAttack  = 35,
        .baseSpDefense = 37,
        .types = { TYPE_STEEL, TYPE_GHOST},
        .catchRate = 180,
        .expYield = 65,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_NO_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DOUBLADE] =
    {
        .baseHP        = 59,
        .baseAttack    = 110,
        .baseDefense   = 150,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 49,
        .types = { TYPE_STEEL, TYPE_GHOST},
        .catchRate = 90,
        .expYield = 157,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_NO_GUARD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_AEGISLASH_SHIELD] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseSpeed     = 60,
        .baseSpAttack  = 50,
        #if P_UPDATED_STATS >= GEN_8
            .baseDefense   = 140,
            .baseSpDefense = 140,
        #else
            .baseDefense   = 150,
            .baseSpDefense = 150,
        #endif
        .types = { TYPE_STEEL, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 234,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STANCE_CHANGE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SPRITZEE] =
    {
        .baseHP        = 78,
        .baseAttack    = 52,
        .baseDefense   = 60,
        .baseSpeed     = 23,
        .baseSpAttack  = 63,
        .baseSpDefense = 65,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 200,
        .expYield = 68,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_AROMATISSE] =
    {
        .baseHP        = 101,
        .baseAttack    = 72,
        .baseDefense   = 72,
        .baseSpeed     = 29,
        .baseSpAttack  = 99,
        .baseSpDefense = 89,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 140,
        .expYield = 162,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_SWIRLIX] =
    {
        .baseHP        = 62,
        .baseAttack    = 48,
        .baseDefense   = 66,
        .baseSpeed     = 49,
        .baseSpAttack  = 59,
        .baseSpDefense = 57,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 200,
        .expYield = 68,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SLURPUFF] =
    {
        .baseHP        = 82,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 72,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 140,
        .expYield = 168,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_UNBURDEN},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_INKAY] =
    {
        .baseHP        = 53,
        .baseAttack    = 54,
        .baseDefense   = 53,
        .baseSpeed     = 45,
        .baseSpAttack  = 37,
        .baseSpDefense = 46,
        .types = { TYPE_DARK, TYPE_PSYCHIC},
        .catchRate = 190,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MALAMAR] =
    {
        .baseHP        = 86,
        .baseAttack    = 92,
        .baseDefense   = 88,
        .baseSpeed     = 73,
        .baseSpAttack  = 68,
        .baseSpDefense = 75,
        .types = { TYPE_DARK, TYPE_PSYCHIC},
        .catchRate = 80,
        .expYield = 169,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_CONTRARY, ABILITY_SUCTION_CUPS, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BINACLE] =
    {
        .baseHP        = 42,
        .baseAttack    = 52,
        .baseDefense   = 67,
        .baseSpeed     = 50,
        .baseSpAttack  = 39,
        .baseSpDefense = 56,
        .types = { TYPE_ROCK, TYPE_WATER},
        .catchRate = 120,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BARBARACLE] =
    {
        .baseHP        = 72,
        .baseAttack    = 105,
        .baseDefense   = 115,
        .baseSpeed     = 68,
        .baseSpAttack  = 54,
        .baseSpDefense = 86,
        .types = { TYPE_ROCK, TYPE_WATER},
        .catchRate = 45,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_SNIPER, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_SKRELP] =
    {
        .baseHP        = 50,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 60,
        .baseSpDefense = 60,
        .types = { TYPE_POISON, TYPE_WATER},
        .catchRate = 225,
        .expYield = 64,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGALGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 44,
        .baseSpAttack  = 97,
        .baseSpDefense = 123,
        .types = { TYPE_POISON, TYPE_DRAGON},
        .catchRate = 55,
        .expYield = 173,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_POISON_POINT, ABILITY_POISON_TOUCH, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CLAUNCHER] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 44,
        .baseSpAttack  = 58,
        .baseSpDefense = 63,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 225,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_CLAWITZER] =
    {
        .baseHP        = 71,
        .baseAttack    = 73,
        .baseDefense   = 88,
        .baseSpeed     = 59,
        .baseSpAttack  = 120,
        .baseSpDefense = 89,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 55,
        .expYield = 100,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_HELIOPTILE] =
    {
        .baseHP        = 44,
        .baseAttack    = 38,
        .baseDefense   = 33,
        .baseSpeed     = 70,
        .baseSpAttack  = 61,
        .baseSpDefense = 43,
        .types = { TYPE_ELECTRIC, TYPE_NORMAL},
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_HELIOLISK] =
    {
        .baseHP        = 62,
        .baseAttack    = 55,
        .baseDefense   = 52,
        .baseSpeed     = 109,
        .baseSpAttack  = 109,
        .baseSpDefense = 94,
        .types = { TYPE_ELECTRIC, TYPE_NORMAL},
        .catchRate = 75,
        .expYield = 168,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_DRY_SKIN, ABILITY_SAND_VEIL, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TYRUNT] =
    {
        .baseHP        = 58,
        .baseAttack    = 89,
        .baseDefense   = 77,
        .baseSpeed     = 48,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 72,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TYRANTRUM] =
    {
        .baseHP        = 82,
        .baseAttack    = 121,
        .baseDefense   = 119,
        .baseSpeed     = 71,
        .baseSpAttack  = 69,
        .baseSpDefense = 59,
        .types = { TYPE_ROCK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 182,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_AMAURA] =
    {
        .baseHP        = 77,
        .baseAttack    = 59,
        .baseDefense   = 50,
        .baseSpeed     = 46,
        .baseSpAttack  = 67,
        .baseSpDefense = 63,
        .types = { TYPE_ROCK, TYPE_ICE},
        .catchRate = 45,
        .expYield = 72,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AURORUS] =
    {
        .baseHP        = 123,
        .baseAttack    = 77,
        .baseDefense   = 72,
        .baseSpeed     = 58,
        .baseSpAttack  = 99,
        .baseSpDefense = 92,
        .types = { TYPE_ROCK, TYPE_ICE},
        .catchRate = 45,
        .expYield = 104,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 30,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_REFRIGERATE, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SYLVEON] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 130,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 184,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_CUTE_CHARM, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = TRUE,
    },

    [SPECIES_HAWLUCHA] =
    {
        .baseHP        = 78,
        .baseAttack    = 92,
        .baseDefense   = 75,
        .baseSpeed     = 118,
        .baseSpAttack  = 74,
        .baseSpDefense = 63,
        .types = { TYPE_FIGHTING, TYPE_FLYING},
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack    = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_HUMAN_LIKE},
        #else
            .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        #endif
        .abilities = {ABILITY_LIMBER, ABILITY_UNBURDEN, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DEDENNE] =
    {
        .baseHP        = 67,
        .baseAttack    = 58,
        .baseDefense   = 57,
        .baseSpeed     = 101,
        .baseSpAttack  = 81,
        .baseSpDefense = 67,
        .types = { TYPE_ELECTRIC, TYPE_FAIRY},
        .catchRate = 180,
        .expYield = 151,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_PICKUP, ABILITY_PLUS},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_CARBINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 150,
        .types = { TYPE_ROCK, TYPE_FAIRY},
        .catchRate = 60,
        .expYield = 100,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GOOMY] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 60,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SLIGGOO] =
    {
        .baseHP        = 68,
        .baseAttack    = 75,
        .baseDefense   = 53,
        .baseSpeed     = 60,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_GOODRA] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_HYDRATION, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_KLEFKI] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 91,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 87,
        .types = { TYPE_STEEL, TYPE_FAIRY},
        .catchRate = 75,
        .expYield = 165,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PRANKSTER, ABILITY_NONE, ABILITY_MAGICIAN},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
    },

    [SPECIES_PHANTUMP] =
    {
        .baseHP        = 43,
        .baseAttack    = 70,
        .baseDefense   = 48,
        .baseSpeed     = 38,
        .baseSpAttack  = 50,
        .baseSpDefense = 60,
        .types = { TYPE_GHOST, TYPE_GRASS},
        .catchRate = 120,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TREVENANT] =
    {
        .baseHP        = 85,
        .baseAttack    = 110,
        .baseDefense   = 76,
        .baseSpeed     = 56,
        .baseSpAttack  = 65,
        .baseSpDefense = 82,
        .types = { TYPE_GHOST, TYPE_GRASS},
        .catchRate = 60,
        .expYield = 166,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_NATURAL_CURE, ABILITY_FRISK, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PUMPKABOO_AVERAGE] =
    {
        .baseHP        = 49,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 51,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMPKABOO_MISC_INFO,
    },

    [SPECIES_GOURGEIST_AVERAGE] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 122,
        .baseSpeed     = 84,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_INFO,
    },

    [SPECIES_BERGMITE] =
    {
        .baseHP        = 55,
        .baseAttack    = 69,
        .baseDefense   = 85,
        .baseSpeed     = 28,
        .baseSpAttack  = 32,
        .baseSpDefense = 35,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MINERAL},
        #else
            .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        #endif
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_AVALUGG] =
    {
        .baseHP        = 95,
        .baseAttack    = 117,
        .baseDefense   = 184,
        .baseSpeed     = 28,
        .baseSpAttack  = 44,
        .baseSpDefense = 46,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MINERAL},
        #else
            .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        #endif
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_NOIBAT] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 35,
        .baseSpeed     = 55,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = { TYPE_FLYING, TYPE_DRAGON},
        .catchRate = 190,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        #else
            .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        #endif
        .abilities = {ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_NOIVERN] =
    {
        .baseHP        = 85,
        .baseAttack    = 70,
        .baseDefense   = 80,
        .baseSpeed     = 123,
        .baseSpAttack  = 97,
        .baseSpDefense = 80,
        .types = { TYPE_FLYING, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 187,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        #if P_UPDATED_EGG_GROUPS >= GEN_8
            .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        #else
            .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        #endif
        .abilities = {ABILITY_FRISK, ABILITY_INFILTRATOR, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_XERNEAS_NEUTRAL] = XERNEAS_SPECIES_INFO,

    [SPECIES_YVELTAL] =
    {
        .baseHP        = 126,
        .baseAttack    = 131,
        .baseDefense   = 95,
        .baseSpeed     = 99,
        .baseSpAttack  = 131,
        .baseSpDefense = 98,
        .types = { TYPE_DARK, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DARK_AURA, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZYGARDE_50_AURA_BREAK] = ZYGARDE_50_SPECIES_INFO(ABILITY_AURA_BREAK),

    [SPECIES_DIANCIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 100,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 100,
        .baseSpDefense = 150,
        .types = { TYPE_ROCK, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_HOOPA_CONFINED] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 70,
        .baseSpAttack  = 150,
        .baseSpDefense = 130,
        .types = { TYPE_PSYCHIC, TYPE_GHOST},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MAGICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_VOLCANION] =
    {
        .baseHP        = 80,
        .baseAttack    = 110,
        .baseDefense   = 120,
        .baseSpeed     = 70,
        .baseSpAttack  = 130,
        .baseSpDefense = 90,
        .types = { TYPE_FIRE, TYPE_WATER},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ROWLET] =
    {
        .baseHP        = 68,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_GRASS, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 64,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DARTRIX] =
    {
        .baseHP        = 78,
        .baseAttack    = 75,
        .baseDefense   = 75,
        .baseSpeed     = 52,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 147,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
    },

    [SPECIES_DECIDUEYE] =
    {
        .baseHP        = 78,
        .baseAttack    = 107,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 100,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_LONG_REACH},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_LITTEN] =
    {
        .baseHP        = 45,
        .baseAttack    = 65,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 60,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 64,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TORRACAT] =
    {
        .baseHP        = 65,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_INCINEROAR] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = { TYPE_FIRE, TYPE_DARK},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_POPPLIO] =
    {
        .baseHP        = 50,
        .baseAttack    = 54,
        .baseDefense   = 54,
        .baseSpeed     = 40,
        .baseSpAttack  = 66,
        .baseSpDefense = 56,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 64,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_BRIONNE] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 69,
        .baseSpeed     = 50,
        .baseSpAttack  = 91,
        .baseSpDefense = 81,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PRIMARINA] =
    {
        .baseHP        = 80,
        .baseAttack    = 74,
        .baseDefense   = 74,
        .baseSpeed     = 60,
        .baseSpAttack  = 126,
        .baseSpDefense = 116,
        .types = { TYPE_WATER, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 239,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_LIQUID_VOICE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_PIKIPEK] =
    {
        .baseHP        = 35,
        .baseAttack    = 75,
        .baseDefense   = 30,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 53,
        .evYield_Attack    = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TRUMBEAK] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 124,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_PICKUP},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TOUCANNON] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 60,
        .baseSpAttack  = 75,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 218,
        .evYield_Attack    = 3,
        .itemRare = ITEM_RAWST_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SKILL_LINK, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_YUNGOOS] =
    {
        .baseHP        = 48,
        .baseAttack    = 70,
        .baseDefense   = 30,
        .baseSpeed     = 45,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 51,
        .evYield_Attack    = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GUMSHOOS] =
    {
        .baseHP        = 88,
        .baseAttack    = 110,
        .baseDefense   = 60,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 127,
        .expYield = 146,
        .evYield_Attack    = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STAKEOUT, ABILITY_STRONG_JAW, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRUBBIN] =
    {
        .baseHP        = 47,
        .baseAttack    = 62,
        .baseDefense   = 45,
        .baseSpeed     = 46,
        .baseSpAttack  = 55,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 255,
        .expYield = 60,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CHARJABUG] =
    {
        .baseHP        = 57,
        .baseAttack    = 82,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = { TYPE_BUG, TYPE_ELECTRIC},
        .catchRate = 120,
        .expYield = 140,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_BATTERY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_VIKAVOLT] =
    {
        .baseHP        = 77,
        .baseAttack    = 70,
        .baseDefense   = 90,
        .baseSpeed     = 43,
        .baseSpAttack  = 145,
        .baseSpDefense = 75,
        .types = { TYPE_BUG, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 225,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CRABRAWLER] =
    {
        .baseHP        = 47,
        .baseAttack    = 82,
        .baseDefense   = 57,
        .baseSpeed     = 63,
        .baseSpAttack  = 42,
        .baseSpDefense = 47,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 225,
        .expYield = 68,
        .evYield_Attack    = 1,
        .itemRare = ITEM_ASPEAR_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_CRABOMINABLE] =
    {
        .baseHP        = 97,
        .baseAttack    = 132,
        .baseDefense   = 77,
        .baseSpeed     = 43,
        .baseSpAttack  = 62,
        .baseSpDefense = 67,
        .types = { TYPE_FIGHTING, TYPE_ICE},
        .catchRate = 60,
        .expYield = 167,
        .evYield_Attack    = 2,
        .itemRare = ITEM_CHERI_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_HYPER_CUTTER, ABILITY_IRON_FIST, ABILITY_ANGER_POINT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ORICORIO_BAILE] = ORICORIO_SPECIES_INFO(TYPE_FIRE, BODY_COLOR_RED),

    [SPECIES_CUTIEFLY] =
    {
        .baseHP        = 40,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 84,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = { TYPE_BUG, TYPE_FAIRY},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Speed     = 1,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_RIBOMBEE] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 60,
        .baseSpeed     = 124,
        .baseSpAttack  = 95,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_FAIRY},
        .catchRate = 75,
        .expYield = 162,
        .evYield_Speed     = 2,
        .itemRare = ITEM_HONEY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HONEY_GATHER, ABILITY_SHIELD_DUST, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ROCKRUFF] = ROCKRUFF_SPECIES_INFO(ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_STEADFAST),

    [SPECIES_LYCANROC_MIDDAY] =
    {
        .baseHP        = 75,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 112,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SAND_RUSH, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WISHIWASHI_SOLO] =
    {
        .baseHP        = 45,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 40,
        .baseSpAttack  = 25,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SCHOOLING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MAREANIE] =
    {
        .baseHP        = 50,
        .baseAttack    = 53,
        .baseDefense   = 62,
        .baseSpeed     = 45,
        .baseSpAttack  = 43,
        .baseSpDefense = 52,
        .types = { TYPE_POISON, TYPE_WATER},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TOXAPEX] =
    {
        .baseHP        = 50,
        .baseAttack    = 63,
        .baseDefense   = 152,
        .baseSpeed     = 35,
        .baseSpAttack  = 53,
        .baseSpDefense = 142,
        .types = { TYPE_POISON, TYPE_WATER},
        .catchRate = 75,
        .expYield = 173,
        .evYield_Defense   = 2,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_MERCILESS, ABILITY_LIMBER, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_MUDBRAY] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 190,
        .expYield = 77,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MUDSDALE] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 55,
        .baseSpDefense = 85,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 60,
        .expYield = 175,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LIGHT_CLAY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_STAMINA, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_DEWPIDER] =
    {
        .baseHP        = 38,
        .baseAttack    = 40,
        .baseDefense   = 52,
        .baseSpeed     = 27,
        .baseSpAttack  = 40,
        .baseSpDefense = 72,
        .types = { TYPE_WATER, TYPE_BUG},
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARAQUANID] =
    {
        .baseHP        = 68,
        .baseAttack    = 70,
        .baseDefense   = 92,
        .baseSpeed     = 42,
        .baseSpAttack  = 50,
        .baseSpDefense = 132,
        .types = { TYPE_WATER, TYPE_BUG},
        .catchRate = 100,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MYSTIC_WATER,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_BUG},
        .abilities = {ABILITY_WATER_BUBBLE, ABILITY_NONE, ABILITY_WATER_ABSORB},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FOMANTIS] =
    {
        .baseHP        = 40,
        .baseAttack    = 55,
        .baseDefense   = 35,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 35,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 50,
        .evYield_Attack    = 1,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_LURANTIS] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 90,
        .baseSpeed     = 45,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack    = 2,
        .itemRare = ITEM_MIRACLE_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MORELULL] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 55,
        .baseSpeed     = 15,
        .baseSpAttack  = 65,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_FAIRY},
        .catchRate = 190,
        .expYield = 57,
        .evYield_SpDefense = 1,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SHIINOTIC] =
    {
        .baseHP        = 60,
        .baseAttack    = 45,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 90,
        .baseSpDefense = 100,
        .types = { TYPE_GRASS, TYPE_FAIRY},
        .catchRate = 75,
        .expYield = 142,
        .evYield_SpDefense = 2,
        .itemCommon = ITEM_TINY_MUSHROOM,
        .itemRare = ITEM_BIG_MUSHROOM,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_ILLUMINATE, ABILITY_EFFECT_SPORE, ABILITY_RAIN_DISH},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SALANDIT] =
    {
        .baseHP        = 48,
        .baseAttack    = 44,
        .baseDefense   = 40,
        .baseSpeed     = 77,
        .baseSpAttack  = 71,
        .baseSpDefense = 40,
        .types = { TYPE_POISON, TYPE_FIRE},
        .catchRate = 120,
        .expYield = 64,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SALAZZLE] =
    {
        .baseHP        = 68,
        .baseAttack    = 64,
        .baseDefense   = 60,
        .baseSpeed     = 117,
        .baseSpAttack  = 111,
        .baseSpDefense = 60,
        .types = { TYPE_POISON, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 168,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SMOKE_BALL,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_CORROSION, ABILITY_NONE, ABILITY_OBLIVIOUS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_STUFFUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 50,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 50,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 140,
        .expYield = 68,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_CUTE_CHARM},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BEWEAR] =
    {
        .baseHP        = 120,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 70,
        .expYield = 175,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLUFFY, ABILITY_KLUTZ, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_BOUNSWEET] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 38,
        .baseSpeed     = 32,
        .baseSpAttack  = 30,
        .baseSpDefense = 38,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 235,
        .expYield = 42,
        .evYield_HP        = 1,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_STEENEE] =
    {
        .baseHP        = 52,
        .baseAttack    = 40,
        .baseDefense   = 48,
        .baseSpeed     = 62,
        .baseSpAttack  = 40,
        .baseSpDefense = 48,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 120,
        .expYield = 102,
        .evYield_Speed     = 2,
        .itemRare = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_OBLIVIOUS, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_TSAREENA] =
    {
        .baseHP        = 72,
        .baseAttack    = 120,
        .baseDefense   = 98,
        .baseSpeed     = 72,
        .baseSpAttack  = 50,
        .baseSpDefense = 98,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 230,
        .evYield_Attack    = 3,
        .itemCommon = ITEM_GRASSY_SEED,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_LEAF_GUARD, ABILITY_QUEENLY_MAJESTY, ABILITY_SWEET_VEIL},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = TRUE,
    },

    [SPECIES_COMFEY] =
    {
        .baseHP        = 51,
        .baseAttack    = 52,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 82,
        .baseSpDefense = 110,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 60,
        .expYield = 170,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_TRIAGE, ABILITY_NATURAL_CURE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_ORANGURU] =
    {
        .baseHP        = 90,
        .baseAttack    = 60,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 90,
        .baseSpDefense = 110,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_TELEPATHY, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_PASSIMIAN] =
    {
        .baseHP        = 100,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 80,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RECEIVER, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WIMPOD] =
    {
        .baseHP        = 25,
        .baseAttack    = 35,
        .baseDefense   = 40,
        .baseSpeed     = 80,
        .baseSpAttack  = 20,
        .baseSpDefense = 30,
        .types = { TYPE_BUG, TYPE_WATER},
        .catchRate = 90,
        .expYield = 46,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_WIMP_OUT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GOLISOPOD] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 140,
        .baseSpeed     = 40,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_WATER},
        .catchRate = 45,
        .expYield = 186,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_EMERGENCY_EXIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SANDYGAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 80,
        .baseSpeed     = 15,
        .baseSpAttack  = 70,
        .baseSpDefense = 45,
        .types = { TYPE_GHOST, TYPE_GROUND},
        .catchRate = 140,
        .expYield = 64,
        .evYield_Defense   = 1,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PALOSSAND] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 110,
        .baseSpeed     = 35,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = { TYPE_GHOST, TYPE_GROUND},
        .catchRate = 60,
        .expYield = 168,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WATER_COMPACTION, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PYUKUMUKU] =
    {
        .baseHP        = 55,
        .baseAttack    = 60,
        .baseDefense   = 130,
        .baseSpeed     = 5,
        .baseSpAttack  = 30,
        .baseSpDefense = 130,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 144,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_INNARDS_OUT, ABILITY_NONE, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_TYPE_NULL] =
    {
        .baseHP        = 95,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 59,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 3,
        .expYield = 107,
        .evYield_HP        = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_SILVALLY_NORMAL] = SILVALLY_SPECIES_INFO(TYPE_NORMAL),

    [SPECIES_MINIOR_METEOR_RED] = MINIOR_METEOR_SPECIES_INFO,

    [SPECIES_KOMALA] =
    {
        .baseHP        = 65,
        .baseAttack    = 115,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 75,
        .baseSpDefense = 95,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_COMATOSE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TURTONATOR] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 135,
        .baseSpeed     = 36,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_DRAGON},
        .catchRate = 70,
        .expYield = 170,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CHARCOAL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_TOGEDEMARU] =
    {
        .baseHP        = 65,
        .baseAttack    = 98,
        .baseDefense   = 63,
        .baseSpeed     = 96,
        .baseSpAttack  = 40,
        .baseSpDefense = 73,
        .types = { TYPE_ELECTRIC, TYPE_STEEL},
        .catchRate = 180,
        .expYield = 152,
        .evYield_Attack    = 2,
        .itemRare = ITEM_ELECTRIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_IRON_BARBS, ABILITY_LIGHTNING_ROD, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MIMIKYU_DISGUISED] = MIMIKYU_SPECIES_INFO,

    [SPECIES_BRUXISH] =
    {
        .baseHP        = 68,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 92,
        .baseSpAttack  = 70,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_PSYCHIC},
        .catchRate = 80,
        .expYield = 166,
        .evYield_Attack    = 2,
        .itemRare = ITEM_RAZOR_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_DAZZLING, ABILITY_STRONG_JAW, ABILITY_WONDER_SKIN},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_DRAMPA] =
    {
        .baseHP        = 78,
        .baseAttack    = 60,
        .baseDefense   = 85,
        .baseSpeed     = 36,
        .baseSpAttack  = 135,
        .baseSpDefense = 91,
        .types = { TYPE_NORMAL, TYPE_DRAGON},
        .catchRate = 70,
        .expYield = 170,
        .evYield_SpAttack  = 2,
        .itemRare = ITEM_PERSIM_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BERSERK, ABILITY_SAP_SIPPER, ABILITY_CLOUD_NINE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DHELMISE] =
    {
        .baseHP        = 70,
        .baseAttack    = 131,
        .baseDefense   = 100,
        .baseSpeed     = 40,
        .baseSpAttack  = 86,
        .baseSpDefense = 90,
        .types = { TYPE_GHOST, TYPE_GRASS},
        .catchRate = 25,
        .expYield = 181,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STEELWORKER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_JANGMO_O] =
    {
        .baseHP        = 45,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 45,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_HAKAMO_O] =
    {
        .baseHP        = 55,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 70,
        .types = { TYPE_DRAGON, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 147,
        .evYield_Defense   = 2,
        .itemRare = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KOMMO_O] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 105,
        .types = { TYPE_DRAGON, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 270,
        .evYield_Defense   = 3,
        .itemCommon = ITEM_RAZOR_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_BULLETPROOF, ABILITY_SOUNDPROOF, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_TAPU_KOKO] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 130,
        .baseSpAttack  = 95,
        .baseSpDefense = 75,
        .types = { TYPE_ELECTRIC, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 257,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_ELECTRIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_LELE] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 95,
        .baseSpAttack  = 130,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PSYCHIC_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_BULU] =
    {
        .baseHP        = 70,
        .baseAttack    = 130,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 85,
        .baseSpDefense = 95,
        .types = { TYPE_GRASS, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 257,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_GRASSY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TAPU_FINI] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 115,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 130,
        .types = { TYPE_WATER, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MISTY_SURGE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_COSMOG] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 31,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 31,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 40,
        .evYield_HP        = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_UNAWARE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_COSMOEM] =
    {
        .baseHP        = 43,
        .baseAttack    = 29,
        .baseDefense   = 131,
        .baseSpeed     = 37,
        .baseSpAttack  = 29,
        .baseSpDefense = 131,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 140,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_STURDY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_SOLGALEO] =
    {
        .baseHP        = 137,
        .baseAttack    = 137,
        .baseDefense   = 107,
        .baseSpeed     = 97,
        .baseSpAttack  = 113,
        .baseSpDefense = 89,
        .types = { TYPE_PSYCHIC, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_FULL_METAL_BODY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LUNALA] =
    {
        .baseHP        = 137,
        .baseAttack    = 113,
        .baseDefense   = 89,
        .baseSpeed     = 97,
        .baseSpAttack  = 137,
        .baseSpDefense = 107,
        .types = { TYPE_PSYCHIC, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SHADOW_SHIELD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_NIHILEGO] =
    {
        .baseHP        = 109,
        .baseAttack    = 53,
        .baseDefense   = 47,
        .baseSpeed     = 103,
        .baseSpAttack  = 127,
        .baseSpDefense = 131,
        .types = { TYPE_ROCK, TYPE_POISON},
        .catchRate = 45,
        .expYield = 257,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_BUZZWOLE] =
    {
        .baseHP        = 107,
        .baseAttack    = 139,
        .baseDefense   = 139,
        .baseSpeed     = 79,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = { TYPE_BUG, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 1,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_PHEROMOSA] =
    {
        .baseHP        = 71,
        .baseAttack    = 137,
        .baseDefense   = 37,
        .baseSpeed     = 151,
        .baseSpAttack  = 137,
        .baseSpDefense = 37,
        .types = { TYPE_BUG, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 257,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_XURKITREE] =
    {
        .baseHP        = 83,
        .baseAttack    = 89,
        .baseDefense   = 71,
        .baseSpeed     = 83,
        .baseSpAttack  = 173,
        .baseSpDefense = 71,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_CELESTEELA] =
    {
        .baseHP        = 97,
        .baseAttack    = 101,
        .baseDefense   = 103,
        .baseSpeed     = 61,
        .baseSpAttack  = 107,
        .baseSpDefense = 101,
        .types = { TYPE_STEEL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_KARTANA] =
    {
        .baseHP        = 59,
        .baseAttack    = 181,
        .baseDefense   = 131,
        .baseSpeed     = 109,
        .baseSpAttack  = 59,
        .baseSpDefense = 31,
        .types = { TYPE_GRASS, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 257,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_GUZZLORD] =
    {
        .baseHP        = 223,
        .baseAttack    = 101,
        .baseDefense   = 53,
        .baseSpeed     = 43,
        .baseSpAttack  = 97,
        .baseSpDefense = 53,
        .types = { TYPE_DARK, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 257,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_NECROZMA] =
    {
        .baseHP        = 97,
        .baseAttack    = 107,
        .baseDefense   = 101,
        .baseSpeed     = 79,
        .baseSpAttack  = 127,
        .baseSpDefense = 89,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 255,
        .expYield = 270,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_MAGEARNA] = MAGEARNA_SPECIES_INFO(BODY_COLOR_GRAY),

    [SPECIES_MARSHADOW] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 125,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = { TYPE_FIGHTING, TYPE_GHOST},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 2,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_POIPOLE] =
    {
        .baseHP        = 67,
        .baseAttack    = 73,
        .baseDefense   = 67,
        .baseSpeed     = 73,
        .baseSpAttack  = 73,
        .baseSpDefense = 67,
        .types = { TYPE_POISON, TYPE_POISON},
        .catchRate = 45,
        .expYield = 189,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_NAGANADEL] =
    {
        .baseHP        = 73,
        .baseAttack    = 73,
        .baseDefense   = 73,
        .baseSpeed     = 121,
        .baseSpAttack  = 127,
        .baseSpDefense = 73,
        .types = { TYPE_POISON, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 243,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_STAKATAKA] =
    {
        .baseHP        = 61,
        .baseAttack    = 131,
        .baseDefense   = 211,
        .baseSpeed     = 13,
        .baseSpAttack  = 53,
        .baseSpDefense = 101,
        .types = { TYPE_ROCK, TYPE_STEEL},
        .catchRate = 30,
        .expYield = 257,
        .evYield_Defense   = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_BLACEPHALON] =
    {
        .baseHP        = 53,
        .baseAttack    = 127,
        .baseDefense   = 53,
        .baseSpeed     = 107,
        .baseSpAttack  = 151,
        .baseSpDefense = 79,
        .types = { TYPE_FIRE, TYPE_GHOST},
        .catchRate = 30,
        .expYield = 257,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEAST_BOOST, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ULTRA_BEAST,
    },

    [SPECIES_ZERAORA] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 75,
        .baseSpeed     = 143,
        .baseSpAttack  = 102,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELTAN] =
    {
        .baseHP        = 46,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 34,
        .baseSpAttack  = 55,
        .baseSpDefense = 35,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 3,
        .expYield = 135,
        .evYield_Attack    = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELMETAL] =
    {
        MELMETAL_MISC_INFO,
    },
#endif

#if P_GEN_8_POKEMON == TRUE
    [SPECIES_GROOKEY] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 50,
        .baseSpeed     = 65,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_THWACKEY] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 70,
        .baseSpeed     = 80,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 45,
        .expYield = 147,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_GRASSY_SURGE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_RILLABOOM] =
    {
        RILLABOOM_MISC_INFO,
    },

    [SPECIES_SCORBUNNY] =
    {
        .baseHP        = 50,
        .baseAttack    = 71,
        .baseDefense   = 40,
        .baseSpeed     = 69,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_RABOOT] =
    {
        .baseHP        = 65,
        .baseAttack    = 86,
        .baseDefense   = 60,
        .baseSpeed     = 94,
        .baseSpAttack  = 55,
        .baseSpDefense = 60,
        .types = { TYPE_FIRE, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 147,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_LIBERO},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CINDERACE] =
    {
        CINDERACE_MISC_INFO,
    },

    [SPECIES_SOBBLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 70,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRIZZILE] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 147,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SNIPER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_INTELEON] =
    {
        INTELEON_MISC_INFO,
    },

    [SPECIES_SKWOVET] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 55,
        .evYield_HP        = 1,
        .itemRare = ITEM_ORAN_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GREEDENT] =
    {
        .baseHP        = 120,
        .baseAttack    = 95,
        .baseDefense   = 95,
        .baseSpeed     = 20,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 90,
        .expYield = 161,
        .evYield_HP        = 2,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CHEEK_POUCH, ABILITY_NONE, ABILITY_GLUTTONY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_ROOKIDEE] =
    {
        .baseHP        = 38,
        .baseAttack    = 47,
        .baseDefense   = 35,
        .baseSpeed     = 57,
        .baseSpAttack  = 33,
        .baseSpDefense = 35,
        .types = { TYPE_FLYING, TYPE_FLYING},
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORVISQUIRE] =
    {
        .baseHP        = 68,
        .baseAttack    = 67,
        .baseDefense   = 55,
        .baseSpeed     = 77,
        .baseSpAttack  = 43,
        .baseSpDefense = 55,
        .types = { TYPE_FLYING, TYPE_FLYING},
        .catchRate = 120,
        .expYield = 128,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_UNNERVE, ABILITY_BIG_PECKS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_CORVIKNIGHT] =
    {
        CORVIKNIGHT_MISC_INFO,
    },

    [SPECIES_BLIPBUG] =
    {
        .baseHP        = 25,
        .baseAttack    = 20,
        .baseDefense   = 20,
        .baseSpeed     = 45,
        .baseSpAttack  = 25,
        .baseSpDefense = 45,
        .types = { TYPE_BUG, TYPE_BUG},
        .catchRate = 255,
        .expYield = 36,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DOTTLER] =
    {
        .baseHP        = 50,
        .baseAttack    = 35,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_PSYCHIC},
        .catchRate = 120,
        .expYield = 117,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_PSYCHIC_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_COMPOUND_EYES, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ORBEETLE] =
    {
        ORBEETLE_MISC_INFO,
    },

    [SPECIES_NICKIT] =
    {
        .baseHP        = 40,
        .baseAttack    = 28,
        .baseDefense   = 28,
        .baseSpeed     = 50,
        .baseSpAttack  = 47,
        .baseSpDefense = 52,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 255,
        .expYield = 49,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_THIEVUL] =
    {
        .baseHP        = 70,
        .baseAttack    = 58,
        .baseDefense   = 58,
        .baseSpeed     = 90,
        .baseSpAttack  = 87,
        .baseSpDefense = 92,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 127,
        .expYield = 159,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_UNBURDEN, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GOSSIFLEUR] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 60,
        .baseSpeed     = 10,
        .baseSpAttack  = 40,
        .baseSpDefense = 60,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 50,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ELDEGOSS] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 90,
        .baseSpeed     = 60,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_GRASS, TYPE_GRASS},
        .catchRate = 75,
        .expYield = 161,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_COTTON_DOWN, ABILITY_REGENERATOR, ABILITY_EFFECT_SPORE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WOOLOO] =
    {
        .baseHP        = 42,
        .baseAttack    = 40,
        .baseDefense   = 55,
        .baseSpeed     = 48,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 122,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLUFFY, ABILITY_RUN_AWAY, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_DUBWOOL] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 88,
        .baseSpAttack  = 60,
        .baseSpDefense = 90,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 127,
        .expYield = 172,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FLUFFY, ABILITY_STEADFAST, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_CHEWTLE] =
    {
        .baseHP        = 50,
        .baseAttack    = 64,
        .baseDefense   = 50,
        .baseSpeed     = 44,
        .baseSpAttack  = 38,
        .baseSpDefense = 38,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 57,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_SHELL_ARMOR, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DREDNAW] =
    {
        DREDNAW_MISC_INFO,
    },

    [SPECIES_YAMPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 45,
        .baseDefense   = 50,
        .baseSpeed     = 26,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 255,
        .expYield = 54,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BALL_FETCH, ABILITY_NONE, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BOLTUND] =
    {
        .baseHP        = 69,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 121,
        .baseSpAttack  = 90,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_NONE, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ROLYCOLY] =
    {
        .baseHP        = 30,
        .baseAttack    = 40,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 255,
        .expYield = 48,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_HEATPROOF, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_CARKOL] =
    {
        .baseHP        = 80,
        .baseAttack    = 60,
        .baseDefense   = 90,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_ROCK, TYPE_FIRE},
        .catchRate = 120,
        .expYield = 144,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STEAM_ENGINE, ABILITY_FLAME_BODY, ABILITY_FLASH_FIRE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_COALOSSAL] =
    {
        COALOSSAL_MISC_INFO,
    },

    [SPECIES_APPLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 80,
        .baseSpeed     = 20,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_DRAGON},
        .catchRate = 255,
        .expYield = 52,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_RIPEN, ABILITY_GLUTTONY, ABILITY_BULLETPROOF},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLAPPLE] =
    {
        FLAPPLE_MISC_INFO,
    },

    [SPECIES_APPLETUN] =
    {
        APPLETUN_MISC_INFO,
    },

    [SPECIES_SILICOBRA] =
    {
        .baseHP        = 52,
        .baseAttack    = 57,
        .baseDefense   = 75,
        .baseSpeed     = 46,
        .baseSpAttack  = 35,
        .baseSpDefense = 50,
        .types = { TYPE_GROUND, TYPE_GROUND},
        .catchRate = 255,
        .expYield = 63,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAND_SPIT, ABILITY_SHED_SKIN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SANDACONDA] =
    {
        SANDACONDA_MISC_INFO,
    },

    [SPECIES_CRAMORANT] = CRAMORANT_SPECIES_INFO,

    [SPECIES_ARROKUDA] =
    {
        .baseHP        = 41,
        .baseAttack    = 63,
        .baseDefense   = 40,
        .baseSpeed     = 66,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BARRASKEWDA] =
    {
        .baseHP        = 61,
        .baseAttack    = 123,
        .baseDefense   = 60,
        .baseSpeed     = 136,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_NONE, ABILITY_PROPELLER_TAIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TOXEL] =
    {
        .baseHP        = 40,
        .baseAttack    = 38,
        .baseDefense   = 35,
        .baseSpeed     = 40,
        .baseSpAttack  = 54,
        .baseSpDefense = 35,
        .types = { TYPE_ELECTRIC, TYPE_POISON},
        .catchRate = 75,
        .expYield = 48,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_RATTLED, ABILITY_STATIC, ABILITY_KLUTZ},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_TOXTRICITY_AMPED] =
    {
        TOXTRICITY_MISC_INFO(ABILITY_PLUS),
    },

    [SPECIES_SIZZLIPEDE] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_BUG},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_WHITE_SMOKE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CENTISKORCH] =
    {
        CENTISKORCH_MISC_INFO,
    },

    [SPECIES_CLOBBOPUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 68,
        .baseDefense   = 60,
        .baseSpeed     = 32,
        .baseSpAttack  = 50,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 180,
        .expYield = 62,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GRAPPLOCT] =
    {
        .baseHP        = 80,
        .baseAttack    = 118,
        .baseDefense   = 90,
        .baseSpeed     = 42,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_LIMBER, ABILITY_NONE, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SINISTEA_PHONY] = SINISTEA_SPECIES_INFO,

    [SPECIES_POLTEAGEIST_PHONY] = POLTEAGEIST_SPECIES_INFO,

    [SPECIES_HATENNA] =
    {
        .baseHP        = 42,
        .baseAttack    = 30,
        .baseDefense   = 45,
        .baseSpeed     = 39,
        .baseSpAttack  = 56,
        .baseSpDefense = 53,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 235,
        .expYield = 53,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_HATTREM] =
    {
        .baseHP        = 57,
        .baseAttack    = 40,
        .baseDefense   = 65,
        .baseSpeed     = 49,
        .baseSpAttack  = 86,
        .baseSpDefense = 73,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_ANTICIPATION, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_HATTERENE] =
    {
        HATTERENE_MISC_INFO,
    },

    [SPECIES_IMPIDIMP] =
    {
        .baseHP        = 45,
        .baseAttack    = 45,
        .baseDefense   = 30,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_FAIRY},
        .catchRate = 255,
        .expYield = 53,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_MORGREM] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 45,
        .baseSpeed     = 70,
        .baseSpAttack  = 75,
        .baseSpDefense = 55,
        .types = { TYPE_DARK, TYPE_FAIRY},
        .catchRate = 120,
        .expYield = 130,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_PRANKSTER, ABILITY_FRISK, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_GRIMMSNARL] =
    {
        GRIMMSNARL_MISC_INFO,
    },

    [SPECIES_OBSTAGOON] =
    {
        .baseHP        = 93,
        .baseAttack    = 90,
        .baseDefense   = 101,
        .baseSpeed     = 95,
        .baseSpAttack  = 60,
        .baseSpDefense = 81,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 260,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RECKLESS, ABILITY_GUTS, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PERRSERKER] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 100,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 90,
        .expYield = 154,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_TOUGH_CLAWS, ABILITY_STEELY_SPIRIT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CURSOLA] =
    {
        .baseHP        = 60,
        .baseAttack    = 95,
        .baseDefense   = 50,
        .baseSpeed     = 30,
        .baseSpAttack  = 145,
        .baseSpDefense = 130,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 30,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_PERISH_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SIRFETCHD] =
    {
        .baseHP        = 62,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 65,
        .baseSpAttack  = 68,
        .baseSpDefense = 82,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .itemRare = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_MR_RIME] =
    {
        .baseHP        = 80,
        .baseAttack    = 85,
        .baseDefense   = 75,
        .baseSpeed     = 70,
        .baseSpAttack  = 110,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 182,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_TANGLED_FEET, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_RUNERIGUS] =
    {
        .baseHP        = 58,
        .baseAttack    = 95,
        .baseDefense   = 145,
        .baseSpeed     = 30,
        .baseSpAttack  = 50,
        .baseSpDefense = 105,
        .types = { TYPE_GROUND, TYPE_GHOST},
        .catchRate = 90,
        .expYield = 169,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WANDERING_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_MILCERY] =
    {
        .baseHP        = 45,
        .baseAttack    = 40,
        .baseDefense   = 40,
        .baseSpeed     = 34,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 200,
        .expYield = 54,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_SWEET_VEIL, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_ALCREMIE_STRAWBERRY_VANILLA_CREAM] = { ALCREMIE_MISC_INFO(BODY_COLOR_WHITE) },

    [SPECIES_FALINKS] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 165,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_BATTLE_ARMOR, ABILITY_NONE, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PINCURCHIN] =
    {
        .baseHP        = 48,
        .baseAttack    = 101,
        .baseDefense   = 95,
        .baseSpeed     = 15,
        .baseSpAttack  = 91,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 75,
        .expYield = 152,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_NONE, ABILITY_ELECTRIC_SURGE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_SNOM] =
    {
        .baseHP        = 30,
        .baseAttack    = 25,
        .baseDefense   = 35,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 30,
        .types = { TYPE_ICE, TYPE_BUG},
        .catchRate = 190,
        .expYield = 37,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FROSMOTH] =
    {
        .baseHP        = 70,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 65,
        .baseSpAttack  = 125,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_BUG},
        .catchRate = 75,
        .expYield = 166,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SHIELD_DUST, ABILITY_NONE, ABILITY_ICE_SCALES},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_STONJOURNER] =
    {
        .baseHP        = 100,
        .baseAttack    = 125,
        .baseDefense   = 135,
        .baseSpeed     = 70,
        .baseSpAttack  = 20,
        .baseSpDefense = 20,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_POWER_SPOT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_EISCUE_ICE_FACE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ICE_FACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_INDEEDEE_MALE] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 105,
        .baseSpDefense = 95,
        .types = { TYPE_PSYCHIC, TYPE_NORMAL},
        .catchRate = 30,
        .expYield = 166,
        .evYield_SpAttack  = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MORPEKO_FULL_BELLY] = MORPEKO_SPECIES_INFO,

    [SPECIES_CUFANT] =
    {
        .baseHP        = 72,
        .baseAttack    = 80,
        .baseDefense   = 49,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 49,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 190,
        .expYield = 66,
        .evYield_Attack    = 1,
        .itemRare = ITEM_LAGGING_TAIL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_NONE, ABILITY_HEAVY_METAL},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_COPPERAJAH] =
    {
        COPPERAJAH_MISC_INFO,
    },

    [SPECIES_DRACOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 75,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_HUSTLE, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCTOZOLT] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 90,
        .baseSpeed     = 55,
        .baseSpAttack  = 90,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ICE},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Attack    = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_STATIC, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DRACOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 70,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_STRONG_JAW, ABILITY_SAND_RUSH},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARCTOVISH] =
    {
        .baseHP        = 90,
        .baseAttack    = 90,
        .baseDefense   = 100,
        .baseSpeed     = 55,
        .baseSpAttack  = 80,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_ICE},
        .catchRate = 45,
        .expYield = 177,
        .evYield_Defense   = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_WATER_ABSORB, ABILITY_ICE_BODY, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DURALUDON] =
    {
        DURALUDON_MISC_INFO,
    },

    [SPECIES_DREEPY] =
    {
        .baseHP        = 28,
        .baseAttack    = 60,
        .baseDefense   = 30,
        .baseSpeed     = 82,
        .baseSpAttack  = 40,
        .baseSpDefense = 30,
        .types = { TYPE_DRAGON, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 54,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAKLOAK] =
    {
        .baseHP        = 68,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 102,
        .baseSpAttack  = 60,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DRAGAPULT] =
    {
        .baseHP        = 88,
        .baseAttack    = 120,
        .baseDefense   = 75,
        .baseSpeed     = 142,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = { TYPE_DRAGON, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 300,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_CLEAR_BODY, ABILITY_INFILTRATOR, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ZACIAN_HERO_OF_MANY_BATTLES] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 10,
        .expYield = 335,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_INTREPID_SWORD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZAMAZENTA_HERO_OF_MANY_BATTLES] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = 115,
        .baseSpeed     = 138,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 10,
        .expYield = 335,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ETERNATUS] =
    {
        .baseHP        = 140,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 95,
        .types = { TYPE_POISON, TYPE_DRAGON},
        .catchRate = 255,
        .expYield = 345,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KUBFU] =
    {
        .baseHP        = 60,
        .baseAttack    = 90,
        .baseDefense   = 60,
        .baseSpeed     = 72,
        .baseSpAttack  = 53,
        .baseSpDefense = 50,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 77,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 120,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE] = { URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO, },

    [SPECIES_ZARUDE] = ZARUDE_SPECIES_INFO,

    [SPECIES_REGIELEKI] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 200,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 3,
        .expYield = 290,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TRANSISTOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_REGIDRAGO] =
    {
        .baseHP        = 200,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 80,
        .baseSpAttack  = 100,
        .baseSpDefense = 50,
        .types = { TYPE_DRAGON, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 290,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DRAGONS_MAW, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_GLASTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 110,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 3,
        .expYield = 290,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CHILLING_NEIGH, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_SPECTRIER] =
    {
        .baseHP        = 100,
        .baseAttack    = 65,
        .baseDefense   = 60,
        .baseSpeed     = 130,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_GRIM_NEIGH, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_CALYREX] =
    {
        .baseHP        = 100,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 80,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_GRASS},
        .catchRate = 3,
        .expYield = 250,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_UNNERVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_WYRDEER] =
    {
        .baseHP        = 103,
        .baseAttack    = 105,
        .baseDefense   = 72,
        .baseSpeed     = 65,
        .baseSpAttack  = 105,
        .baseSpDefense = 75,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 263,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FRISK, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_KLEAVOR] =
    {
        .baseHP        = 70,
        .baseAttack    = 135,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 45,
        .baseSpDefense = 70,
        .types = { TYPE_BUG, TYPE_ROCK},
        .catchRate = 15,
        .expYield = 175,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_SHEER_FORCE, ABILITY_SHARPNESS},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_URSALUNA] =
    {
        .baseHP        = 130,
        .baseAttack    = 140,
        .baseDefense   = 105,
        .baseSpeed     = 50,
        .baseSpAttack  = 45,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_NORMAL},
        .catchRate = 20,
        .expYield = 275,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GUTS, ABILITY_BULLETPROOF, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BASCULEGION_MALE] =
    {
        .baseHP        = 120,
        .baseAttack    = 112,
        .baseDefense   = 65,
        .baseSpeed     = 78,
        .baseSpAttack  = 80,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 265,
        .evYield_HP     = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BASCULEGION_FEMALE] =
    {
        .baseHP        = 120,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 78,
        .baseSpAttack  = 100,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 265,
        .evYield_HP     = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SNEASLER] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 60,
        .baseSpeed     = 120,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_FIGHTING, TYPE_POISON},
        .catchRate = 20,
        .expYield = 102,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PRESSURE, ABILITY_UNBURDEN, ABILITY_POISON_TOUCH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_OVERQWIL] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 95,
        .baseSpeed     = 85,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_POISON},
        .catchRate = 45,
        .expYield = 179,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_ENAMORUS_INCARNATE] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 106,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = { TYPE_FAIRY, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 116,
        .evYield_SpAttack    = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_CUTE_CHARM, ABILITY_NONE, ABILITY_CONTRARY},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },
#endif

    [SPECIES_VENUSAUR_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 123,
        .baseSpeed     = 80,
        .baseSpAttack  = 122,
        .baseSpDefense = 120,
        .types = { TYPE_GRASS, TYPE_POISON},
        .catchRate = 45,
        .expYield = 281,
        .evYield_SpAttack  = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_THICK_FAT, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_CHARIZARD_MEGA_X] =
    {
        .baseHP        = 78,
        .baseAttack    = 134,
        .baseDefense   = 111,
        .baseSpeed     = 108,
        .baseSpAttack  = 122,
        .baseSpDefense = 82,
        .types = { TYPE_FIRE, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 285,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_CHARIZARD_MEGA_Y] =
    {
        .baseHP        = 78,
        .baseAttack    = 97,
        .baseDefense   = 78,
        .baseSpeed     = 108,
        .baseSpAttack  = 159,
        .baseSpDefense = 115,
        .types = { TYPE_FIRE, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 285,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_DROUGHT, ABILITY_DROUGHT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_BLASTOISE_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 77,
        .baseDefense   = 130,
        .baseSpeed     = 78,
        .baseSpAttack  = 135,
        .baseSpDefense = 125,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 45,
        .expYield = 284,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_MEGA_LAUNCHER, ABILITY_MEGA_LAUNCHER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_BEEDRILL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 40,
        .baseSpeed     = 145,
        .baseSpAttack  = 15,
        .baseSpDefense = 80,
        .types = { TYPE_BUG, TYPE_POISON},
        .catchRate = 45,
        .expYield = 223,
        .evYield_Attack    = 2,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_PIDGEOT_MEGA] =
    {
        .baseHP        = 83,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 126,
        .baseSpAttack  = 140,
        .baseSpDefense = 80,
        .types = { TYPE_NORMAL, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 261,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_NO_GUARD, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_ALAKAZAM_MEGA] =
    {
        .baseHP        = 55,
        .baseAttack    = 50,
        .baseDefense   = 65,
        .baseSpeed     = 150,
        .baseSpAttack  = 175,
        #if P_UPDATED_STATS >= GEN_7
        .baseSpDefense = 105,
        #else
        .baseSpDefense = 95,
        #endif
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 50,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .itemRare = ITEM_TWISTED_SPOON,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_TRACE, ABILITY_TRACE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SLOWBRO_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 75,
        .baseDefense   = 180,
        .baseSpeed     = 30,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = { TYPE_WATER, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 207,
        .evYield_Defense   = 2,
        .itemRare = ITEM_KINGS_ROCK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SHELL_ARMOR, ABILITY_SHELL_ARMOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GENGAR_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 130,
        .baseSpAttack  = 170,
        .baseSpDefense = 95,
        .types = { TYPE_GHOST, TYPE_POISON},
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_SHADOW_TAG, ABILITY_SHADOW_TAG},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_KANGASKHAN_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 125,
        .baseDefense   = 100,
        .baseSpeed     = 100,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_NORMAL, TYPE_NORMAL},
        .catchRate = 45,
        .expYield = 207,
        .evYield_HP        = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_PARENTAL_BOND, ABILITY_PARENTAL_BOND},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_PINSIR_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 155,
        .baseDefense   = 120,
        .baseSpeed     = 105,
        .baseSpAttack  = 65,
        .baseSpDefense = 90,
        .types = { TYPE_BUG, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_AERILATE, ABILITY_AERILATE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GYARADOS_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 155,
        .baseDefense   = 109,
        .baseSpeed     = 81,
        .baseSpAttack  = 70,
        .baseSpDefense = 130,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 45,
        .expYield = 224,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 5,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_AERODACTYL_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 135,
        .baseDefense   = 85,
        .baseSpeed     = 150,
        .baseSpAttack  = 70,
        .baseSpDefense = 95,
        .types = { TYPE_ROCK, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 215,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 35,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_MEWTWO_MEGA_X] =
    {
        .baseHP        = 106,
        .baseAttack    = 190,
        .baseDefense   = 100,
        .baseSpeed     = 130,
        .baseSpAttack  = 154,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 351,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_STEADFAST, ABILITY_STEADFAST},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_MEWTWO_MEGA_Y] =
    {
        .baseHP        = 106,
        .baseAttack    = 150,
        .baseDefense   = 70,
        .baseSpeed     = 140,
        .baseSpAttack  = 194,
        .baseSpDefense = 120,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 351,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_INSOMNIA, ABILITY_INSOMNIA},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_AMPHAROS_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 105,
        .baseSpeed     = 45,
        .baseSpAttack  = 165,
        .baseSpDefense = 110,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 275,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_FIELD},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_STEELIX_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 230,
        .baseSpeed     = 30,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = { TYPE_STEEL, TYPE_GROUND},
        .catchRate = 25,
        .expYield = 214,
        .evYield_Defense   = 2,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SAND_FORCE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SCIZOR_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 150,
        .baseDefense   = 140,
        .baseSpeed     = 75,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = { TYPE_BUG, TYPE_STEEL},
        .catchRate = 25,
        .expYield = 210,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_TECHNICIAN, ABILITY_TECHNICIAN},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_HERACROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 185,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 105,
        .types = { TYPE_BUG, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 210,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SKILL_LINK, ABILITY_SKILL_LINK},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_HOUNDOOM_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 90,
        .baseDefense   = 90,
        .baseSpeed     = 115,
        .baseSpAttack  = 140,
        .baseSpDefense = 90,
        .types = { TYPE_DARK, TYPE_FIRE},
        .catchRate = 45,
        .expYield = 210,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SOLAR_POWER, ABILITY_SOLAR_POWER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_TYRANITAR_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 164,
        .baseDefense   = 150,
        .baseSpeed     = 71,
        .baseSpAttack  = 95,
        .baseSpDefense = 120,
        .types = { TYPE_ROCK, TYPE_DARK},
        .catchRate = 45,
        .expYield = 315,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_SAND_STREAM, ABILITY_SAND_STREAM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SCEPTILE_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 110,
        .baseDefense   = 75,
        .baseSpeed     = 145,
        .baseSpAttack  = 145,
        .baseSpDefense = 85,
        .types = { TYPE_GRASS, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 284,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_LIGHTNING_ROD, ABILITY_LIGHTNING_ROD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_BLAZIKEN_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 130,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 284,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SPEED_BOOST, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SWAMPERT_MEGA] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 110,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 110,
        .types = { TYPE_WATER, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 286,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_SWIFT_SWIM, ABILITY_SWIFT_SWIM},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GARDEVOIR_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 165,
        .baseSpDefense = 135,
        .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 278,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_PIXILATE, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SABLEYE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 125,
        .baseSpeed     = 20,
        .baseSpAttack  = 85,
        .baseSpDefense = 115,
        .types = { TYPE_DARK, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_MAWILE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 105,
        .baseDefense   = 125,
        .baseSpeed     = 50,
        .baseSpAttack  = 55,
        .baseSpDefense = 95,
        .types = { TYPE_STEEL, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack    = 1,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HUGE_POWER, ABILITY_HUGE_POWER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_AGGRON_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 230,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 80,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 284,
        .evYield_Defense   = 3,
        .itemRare = ITEM_HARD_STONE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_FILTER, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_MEDICHAM_MEGA] =
    {
        .baseHP        = 60,
        .baseAttack    = 100,
        .baseDefense   = 85,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 85,
        .types = { TYPE_FIGHTING, TYPE_PSYCHIC},
        .catchRate = 90,
        .expYield = 179,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_PURE_POWER, ABILITY_PURE_POWER},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_MANECTRIC_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 75,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 201,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SHARPEDO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 140,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 110,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 60,
        .expYield = 196,
        .evYield_Attack    = 2,
        .itemRare = ITEM_DEEP_SEA_TOOTH,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_STRONG_JAW},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_CAMERUPT_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 145,
        .baseSpDefense = 105,
        .types = { TYPE_FIRE, TYPE_GROUND},
        .catchRate = 150,
        .expYield = 196,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_ALTARIA_MEGA] =
    {
        .baseHP        = 75,
        .baseAttack    = 110,
        .baseDefense   = 110,
        .baseSpeed     = 80,
        .baseSpAttack  = 110,
        .baseSpDefense = 105,
        .types = { TYPE_DRAGON, TYPE_FAIRY},
        .catchRate = 45,
        .expYield = 207,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_PIXILATE, ABILITY_PIXILATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_BANETTE_MEGA] =
    {
        .baseHP        = 64,
        .baseAttack    = 165,
        .baseDefense   = 75,
        .baseSpeed     = 75,
        .baseSpAttack  = 93,
        .baseSpDefense = 83,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 194,
        .evYield_Attack    = 2,
        .itemRare = ITEM_SPELL_TAG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_PRANKSTER, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_ABSOL_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 150,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 115,
        .baseSpDefense = 60,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 30,
        .expYield = 198,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GLALIE_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 120,
        .baseSpDefense = 80,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 75,
        .expYield = 203,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_REFRIGERATE, ABILITY_REFRIGERATE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_SALAMENCE_MEGA] =
    {
        .baseHP        = 95,
        .baseAttack    = 145,
        .baseDefense   = 130,
        .baseSpeed     = 120,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = { TYPE_DRAGON, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 315,
        .evYield_Attack    = 3,
        .itemRare = ITEM_DRAGON_FANG,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_AERILATE, ABILITY_AERILATE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_METAGROSS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 145,
        .baseDefense   = 150,
        .baseSpeed     = 110,
        .baseSpAttack  = 105,
        .baseSpDefense = 110,
        .types = { TYPE_STEEL, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 315,
        .evYield_Defense   = 3,
        .itemRare = ITEM_METAL_COAT,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_TOUGH_CLAWS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_LATIAS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 150,
        .types = { TYPE_DRAGON, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 315,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_LATIOS_MEGA] =
    {
        .baseHP        = 80,
        .baseAttack    = 130,
        .baseDefense   = 100,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 120,
        .types = { TYPE_DRAGON, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 315,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_LEVITATE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
    },

#if P_GEN_4_POKEMON == TRUE
    [SPECIES_LOPUNNY_MEGA] =
    {
        .baseHP        = 65,
        .baseAttack    = 136,
        .baseDefense   = 94,
        .baseSpeed     = 135,
        .baseSpAttack  = 54,
        .baseSpDefense = 96,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 60,
        .expYield = 203,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 140,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_SCRAPPY, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GARCHOMP_MEGA] =
    {
        .baseHP        = 108,
        .baseAttack    = 170,
        .baseDefense   = 115,
        .baseSpeed     = 92,
        .baseSpAttack  = 120,
        .baseSpDefense = 95,
        .types = { TYPE_DRAGON, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 315,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAND_FORCE, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_LUCARIO_MEGA] =
    {
        .baseHP        = 70,
        .baseAttack    = 145,
        .baseDefense   = 88,
        .baseSpeed     = 112,
        .baseSpAttack  = 140,
        .baseSpDefense = 70,
        .types = { TYPE_FIGHTING, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 219,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_ADAPTABILITY, ABILITY_ADAPTABILITY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_ABOMASNOW_MEGA] =
    {
        .baseHP        = 90,
        .baseAttack    = 132,
        .baseDefense   = 105,
        .baseSpeed     = 30,
        .baseSpAttack  = 132,
        .baseSpDefense = 105,
        .types = { TYPE_GRASS, TYPE_ICE},
        .catchRate = 60,
        .expYield = 208,
        .evYield_Attack    = 1,
        .evYield_SpAttack  = 1,
        .itemRare = ITEM_NEVER_MELT_ICE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SNOW_WARNING, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_GALLADE_MEGA] =
    {
        .baseHP        = 68,
        .baseAttack    = 165,
        .baseDefense   = 95,
        .baseSpeed     = 110,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = { TYPE_PSYCHIC, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 278,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },
#endif

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_AUDINO_MEGA] =
    {
        .baseHP        = 103,
        .baseAttack    = 60,
        .baseDefense   = 126,
        .baseSpeed     = 50,
        .baseSpAttack  = 80,
        .baseSpDefense = 126,
        .types = { TYPE_NORMAL, TYPE_FAIRY},
        .catchRate = 255,
        .expYield = 425,
        .evYield_HP        = 2,
        .itemCommon = ITEM_ORAN_BERRY,
        .itemRare = ITEM_SITRUS_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_HEALER, ABILITY_HEALER},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MEGA_EVOLUTION,
    },
#endif

#if P_GEN_6_POKEMON == TRUE
    [SPECIES_DIANCIE_MEGA] =
    {
        .baseHP        = 50,
        .baseAttack    = 160,
        .baseDefense   = 110,
        .baseSpeed     = 110,
        .baseSpAttack  = 160,
        .baseSpDefense = 110,
        .types = { TYPE_ROCK, TYPE_FAIRY},
        .catchRate = 3,
        .expYield = 315,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MAGIC_BOUNCE, ABILITY_MAGIC_BOUNCE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL | SPECIES_FLAG_MEGA_EVOLUTION,
    },
#endif

    [SPECIES_RAYQUAZA_MEGA] =
    {
        .baseHP        = 105,
        .baseAttack    = 180,
        .baseDefense   = 100,
        .baseSpeed     = 115,
        .baseSpAttack  = 180,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 306,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DELTA_STREAM, ABILITY_DELTA_STREAM},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_MEGA_EVOLUTION,
    },

    [SPECIES_KYOGRE_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 150,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 180,
        .baseSpDefense = 160,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 3,
        .expYield = 302,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRIMORDIAL_SEA, ABILITY_PRIMORDIAL_SEA},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_PRIMAL_REVERSION,
    },

    [SPECIES_GROUDON_PRIMAL] =
    {
        .baseHP        = 100,
        .baseAttack    = 180,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 90,
        .types = { TYPE_GROUND, TYPE_FIRE},
        .catchRate = 3,
        .expYield = 302,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DESOLATE_LAND, ABILITY_DESOLATE_LAND},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_PRIMAL_REVERSION,
    },

    [SPECIES_RATTATA_ALOLAN] =
    {
        .baseHP        = 30,
        .baseAttack    = 56,
        .baseDefense   = 35,
        .baseSpeed     = 72,
        .baseSpAttack  = 25,
        .baseSpDefense = 35,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 51,
        .evYield_Speed     = 1,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_RATICATE_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 71,
        .baseDefense   = 70,
        .baseSpeed     = 77,
        .baseSpAttack  = 40,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 127,
        .expYield = 145,
        .evYield_Speed     = 2,
        .itemRare = ITEM_PECHA_BERRY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_GLUTTONY, ABILITY_HUSTLE, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_RAICHU_ALOLAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 85,
        .baseDefense   = 50,
        .baseSpeed     = 110,
        .baseSpAttack  = 95,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 218,
        .evYield_Speed     = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 10,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_SURGE_SURFER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_SANDSHREW_ALOLAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 75,
        .baseDefense   = 90,
        .baseSpeed     = 40,
        .baseSpAttack  = 10,
        .baseSpDefense = 35,
        .types = { TYPE_ICE, TYPE_STEEL},
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_GRIP_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_SANDSLASH_ALOLAN] =
    {
        .baseHP        = 75,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 65,
        .baseSpAttack  = 25,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_STEEL},
        .catchRate = 90,
        .expYield = 158,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SLUSH_RUSH},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_VULPIX_ALOLAN] =
    {
        .baseHP        = 38,
        .baseAttack    = 41,
        .baseDefense   = 40,
        .baseSpeed     = 65,
        .baseSpAttack  = 50,
        .baseSpDefense = 65,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 190,
        .expYield = 60,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SNOWBALL,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_NINETALES_ALOLAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 67,
        .baseDefense   = 75,
        .baseSpeed     = 109,
        .baseSpAttack  = 81,
        .baseSpDefense = 100,
        .types = { TYPE_ICE, TYPE_FAIRY},
        .catchRate = 75,
        .expYield = 177,
        .evYield_Speed     = 1,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SNOW_CLOAK, ABILITY_NONE, ABILITY_SNOW_WARNING},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_DIGLETT_ALOLAN] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 30,
        .baseSpeed     = 90,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_GROUND, TYPE_STEEL},
        .catchRate = 255,
        .expYield = 53,
        .evYield_Speed     = 1,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_DUGTRIO_ALOLAN] =
    {
        .baseHP        = 35,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL},
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed     = 2,
        .itemRare = ITEM_SOFT_SAND,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_VEIL, ABILITY_TANGLING_HAIR, ABILITY_SAND_FORCE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_MEOWTH_ALOLAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 35,
        .baseDefense   = 35,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 255,
        .expYield = 58,
        .evYield_Speed     = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_TECHNICIAN, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_PERSIAN_ALOLAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 115,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_DARK},
        .catchRate = 90,
        .expYield = 154,
        .evYield_Speed     = 2,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_FUR_COAT, ABILITY_TECHNICIAN, ABILITY_RATTLED},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_GEODUDE_ALOLAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 80,
        .baseDefense   = 100,
        .baseSpeed     = 20,
        .baseSpAttack  = 30,
        .baseSpDefense = 30,
        .types = { TYPE_ROCK, TYPE_ELECTRIC},
        .catchRate = 255,
        .expYield = 60,
        .evYield_Defense   = 1,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_GRAVELER_ALOLAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_ROCK, TYPE_ELECTRIC},
        .catchRate = 120,
        .expYield = 137,
        .evYield_Defense   = 2,
        .itemRare = ITEM_CELL_BATTERY,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_GOLEM_ALOLAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 130,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ELECTRIC},
        .catchRate = 45,
        .expYield = 223,
        .evYield_Defense   = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_MAGNET_PULL, ABILITY_STURDY, ABILITY_GALVANIZE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_GRIMER_ALOLAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 80,
        .baseDefense   = 50,
        .baseSpeed     = 25,
        .baseSpAttack  = 40,
        .baseSpDefense = 50,
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 190,
        .expYield = 65,
        .evYield_HP        = 1,
        .itemRare = ITEM_BLACK_SLUDGE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_MUK_ALOLAN] =
    {
        .baseHP        = 105,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 50,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = { TYPE_POISON, TYPE_DARK},
        .catchRate = 75,
        .expYield = 175,
        .evYield_HP        = 1,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_POISON_TOUCH, ABILITY_GLUTTONY, ABILITY_POWER_OF_ALCHEMY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_EXEGGUTOR_ALOLAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 105,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 125,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_DRAGON},
        .catchRate = 45,
        .expYield = 186,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_FRISK, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_MAROWAK_ALOLAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 80,
        .baseDefense   = 110,
        .baseSpeed     = 45,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_GHOST},
        .catchRate = 75,
        .expYield = 149,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MONSTER},
        .abilities = {ABILITY_CURSED_BODY, ABILITY_LIGHTNING_ROD, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_ALOLAN_FORM,
    },

    [SPECIES_MEOWTH_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 55,
        .baseSpeed     = 40,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_STEEL, TYPE_STEEL},
        .catchRate = 255,
        .expYield = 58,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_TOUGH_CLAWS, ABILITY_UNNERVE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_PONYTA_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 85,
        .baseDefense   = 55,
        .baseSpeed     = 90,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 190,
        .expYield = 82,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_RAPIDASH_GALARIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 100,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .types = { TYPE_PSYCHIC, TYPE_FAIRY},
        .catchRate = 60,
        .expYield = 175,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PASTEL_VEIL, ABILITY_ANTICIPATION},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_SLOWPOKE_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 15,
        .baseSpAttack  = 40,
        .baseSpDefense = 40,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 190,
        .expYield = 63,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_GLUTTONY, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_SLOWBRO_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 100,
        .baseDefense   = 95,
        .baseSpeed     = 30,
        .baseSpAttack  = 100,
        .baseSpDefense = 70,
        .types = { TYPE_POISON, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 172,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_QUICK_DRAW, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_FARFETCHD_GALARIAN] =
    {
        .baseHP        = 52,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 55,
        .baseSpAttack  = 58,
        .baseSpDefense = 62,
        .types = { TYPE_FIGHTING, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 132,
        .evYield_Attack    = 1,
        .itemCommon = ITEM_LEEK,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STEADFAST, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_WEEZING_GALARIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 90,
        .baseDefense   = 120,
        .baseSpeed     = 60,
        .baseSpAttack  = 85,
        .baseSpDefense = 70,
        .types = { TYPE_POISON, TYPE_FAIRY},
        .catchRate = 60,
        .expYield = 172,
        .evYield_Defense   = 2,
        .itemRare = ITEM_MISTY_SEED,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_AMORPHOUS, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_LEVITATE, ABILITY_NEUTRALIZING_GAS, ABILITY_MISTY_SURGE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_MR_MIME_GALARIAN] =
    {
        .baseHP        = 50,
        .baseAttack    = 65,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 90,
        .baseSpDefense = 90,
        .types = { TYPE_ICE, TYPE_PSYCHIC},
        .catchRate = 45,
        .expYield = 161,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_SCREEN_CLEANER, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_ARTICUNO_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 95,
        .baseSpeed     = 105,
        .baseSpAttack  = 125,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_COMPETITIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_ZAPDOS_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 125,
        .baseDefense   = 90,
        .baseSpeed     = 110,
        .baseSpAttack  = 85,
        .baseSpDefense = 100,
        .types = { TYPE_FIGHTING, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 290,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DEFIANT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_MOLTRES_GALARIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 85,
        .baseDefense   = 90,
        .baseSpeed     = 100,
        .baseSpAttack  = 125,
        .baseSpDefense = 110,
        .types = { TYPE_DARK, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 290,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BERSERK, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_SLOWKING_GALARIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 65,
        .baseDefense   = 80,
        .baseSpeed     = 30,
        .baseSpAttack  = 110,
        .baseSpDefense = 110,
        .types = { TYPE_POISON, TYPE_PSYCHIC},
        .catchRate = 70,
        .expYield = 172,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_CURIOUS_MEDICINE, ABILITY_OWN_TEMPO, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_CORSOLA_GALARIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 55,
        .baseDefense   = 100,
        .baseSpeed     = 30,
        .baseSpAttack  = 65,
        .baseSpDefense = 100,
        .types = { TYPE_GHOST, TYPE_GHOST},
        .catchRate = 60,
        .expYield = 144,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(75),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_WEAK_ARMOR, ABILITY_NONE, ABILITY_CURSED_BODY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_ZIGZAGOON_GALARIAN] =
    {
        .baseHP        = 38,
        .baseAttack    = 30,
        .baseDefense   = 41,
        .baseSpeed     = 60,
        .baseSpAttack  = 30,
        .baseSpDefense = 41,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 255,
        .expYield = 56,
        .evYield_Speed     = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_LINOONE_GALARIAN] =
    {
        .baseHP        = 78,
        .baseAttack    = 70,
        .baseDefense   = 61,
        .baseSpeed     = 100,
        .baseSpAttack  = 50,
        .baseSpDefense = 61,
        .types = { TYPE_DARK, TYPE_NORMAL},
        .catchRate = 90,
        .expYield = 147,
        .evYield_Speed     = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_GLUTTONY, ABILITY_QUICK_FEET},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_DARUMAKA_GALARIAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 90,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 15,
        .baseSpDefense = 45,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 120,
        .expYield = 63,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_HUSTLE, ABILITY_NONE, ABILITY_INNER_FOCUS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_DARMANITAN_GALARIAN_STANDARD_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 140,
        .baseDefense   = 55,
        .baseSpeed     = 95,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 60,
        .expYield = 168,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_GORILLA_TACTICS, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_YAMASK_GALARIAN] =
    {
        .baseHP        = 38,
        .baseAttack    = 55,
        .baseDefense   = 85,
        .baseSpeed     = 30,
        .baseSpAttack  = 30,
        .baseSpDefense = 65,
        .types = { TYPE_GROUND, TYPE_GHOST},
        .catchRate = 190,
        .expYield = 61,
        .evYield_Defense   = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_WANDERING_SPIRIT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_STUNFISK_GALARIAN] =
    {
        .baseHP        = 109,
        .baseAttack    = 81,
        .baseDefense   = 99,
        .baseSpeed     = 32,
        .baseSpAttack  = 66,
        .baseSpDefense = 84,
        .types = { TYPE_GROUND, TYPE_STEEL},
        .catchRate = 75,
        .expYield = 165,
        .evYield_HP        = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_AMORPHOUS},
        .abilities = {ABILITY_MIMICRY, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },
#endif

    [SPECIES_GROWLITHE_HISUIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_FIRE, TYPE_ROCK},
        .catchRate = 190,
        .expYield = 70,
        .evYield_Attack    = 1,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_ARCANINE_HISUIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 115,
        .baseDefense   = 80,
        .baseSpeed     = 90,
        .baseSpAttack  = 95,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_ROCK},
        .catchRate = 75,
        .expYield = 194,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(25),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_FLASH_FIRE, ABILITY_ROCK_HEAD},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_VOLTORB_HISUIAN] =
    {
        .baseHP        = 40,
        .baseAttack    = 30,
        .baseDefense   = 50,
        .baseSpeed     = 100,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_ELECTRIC, TYPE_GRASS},
        .catchRate = 190,
        .expYield = 66,
        .evYield_Speed     = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_ELECTRODE_HISUIAN] =
    {
        .baseHP        = 60,
        .baseAttack    = 50,
        .baseDefense   = 70,
        .baseSpAttack  = 80,
        .baseSpDefense = 80,
        .baseSpeed     = 150,
        .types = { TYPE_ELECTRIC, TYPE_GRASS},
        .catchRate = 60,
        .expYield = 172,
        .evYield_Speed     = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_SOUNDPROOF, ABILITY_STATIC, ABILITY_AFTERMATH},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_TYPHLOSION_HISUIAN] =
    {
        .baseHP        = 73,
        .baseAttack    = 84,
        .baseDefense   = 78,
        .baseSpeed     = 95,
        .baseSpAttack  = 119,
        .baseSpDefense = 85,
        .types = { TYPE_FIRE, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 240,
        .evYield_SpAttack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_FRISK},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_QWILFISH_HISUIAN] =
    {
        .baseHP        = 65,
        .baseAttack    = 95,
        .baseDefense   = 85,
        .baseSpeed     = 85,
        .baseSpAttack  = 55,
        .baseSpDefense = 55,
        .types = { TYPE_DARK, TYPE_POISON},
        .catchRate = 45,
        .expYield = 88,
        .evYield_Attack    = 1,
        .itemRare = ITEM_POISON_BARB,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_POISON_POINT, ABILITY_SWIFT_SWIM, ABILITY_INTIMIDATE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_SNEASEL_HISUIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 95,
        .baseDefense   = 55,
        .baseSpeed     = 115,
        .baseSpAttack  = 35,
        .baseSpDefense = 75,
        .types = { TYPE_POISON, TYPE_FIGHTING},
        .catchRate = 60,
        .expYield = 86,
        .evYield_Speed     = 1,
        .itemRare = ITEM_QUICK_CLAW,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 35,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INNER_FOCUS, ABILITY_KEEN_EYE, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_SAMUROTT_HISUIAN] =
    {
        .baseHP        = 90,
        .baseAttack    = 108,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 100,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 45,
        .expYield = 238,
        .evYield_Attack  = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_SHARPNESS},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_LILLIGANT_HISUIAN] =
    {
        .baseHP        = 70,
        .baseAttack    = 105,
        .baseDefense   = 75,
        .baseSpeed     = 105,
        .baseSpAttack  = 50,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_FIGHTING},
        .catchRate = 75,
        .expYield = 168,
        .evYield_Attack  = 1,
        .evYield_Speed  = 1,
        .itemRare = ITEM_ABSORB_BULB,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_HUSTLE, ABILITY_LEAF_GUARD},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_ZORUA_HISUIAN] =
    {
        .baseHP        = 35,
        .baseAttack    = 60,
        .baseDefense   = 40,
        .baseSpeed     = 70,
        .baseSpAttack  = 85,
        .baseSpDefense = 40,
        .types = { TYPE_NORMAL, TYPE_GHOST},
        .catchRate = 75,
        .expYield = 66,
        .evYield_SpAttack  = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_ZOROARK_HISUIAN] =
    {
        .baseHP        = 55,
        .baseAttack    = 100,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 125,
        .baseSpDefense = 60,
        .types = { TYPE_NORMAL, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 179,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ILLUSION, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_BRAVIARY_HISUIAN] =
    {
        .baseHP        = 110,
        .baseAttack    = 83,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 112,
        .baseSpDefense = 70,
        .types = { TYPE_PSYCHIC, TYPE_FLYING},
        .catchRate = 60,
        .expYield = 179,
        .evYield_SpAttack    = 2,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_SHEER_FORCE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },
#endif

#if P_GEN_6_POKEMON == TRUE
    [SPECIES_SLIGGOO_HISUIAN] =
    {
        .baseHP        = 58,
        .baseAttack    = 75,
        .baseDefense   = 83,
        .baseSpeed     = 40,
        .baseSpAttack  = 83,
        .baseSpDefense = 113,
        .types = { TYPE_DRAGON, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 158,
        .evYield_SpDefense = 2,
        .itemRare = ITEM_SHED_SHELL,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_GOODRA_HISUIAN] =
    {
        .baseHP        = 80,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 150,
        .types = { TYPE_DRAGON, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 270,
        .evYield_SpDefense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_DRAGON},
        .abilities = {ABILITY_SAP_SIPPER, ABILITY_SHELL_ARMOR, ABILITY_GOOEY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },

    [SPECIES_AVALUGG_HISUIAN] =
    {
        .baseHP        = 95,
        .baseAttack    = 127,
        .baseDefense   = 184,
        .baseSpeed     = 38,
        .baseSpAttack  = 34,
        .baseSpDefense = 36,
        .types = { TYPE_ICE, TYPE_ROCK},
        .catchRate = 55,
        .expYield = 180,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MONSTER, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STRONG_JAW, ABILITY_ICE_BODY, ABILITY_STURDY},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },
#endif

#if P_GEN_7_POKEMON == TRUE
    [SPECIES_DECIDUEYE_HISUIAN] =
    {
        .baseHP        = 88,
        .baseAttack    = 112,
        .baseDefense   = 80,
        .baseSpeed     = 60,
        .baseSpAttack  = 95,
        .baseSpDefense = 95,
        .types = { TYPE_GRASS, TYPE_FIGHTING},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Attack    = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_SCRAPPY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_HISUIAN_FORM,
    },
#endif

    [SPECIES_PIKACHU_COSPLAY]   = COSPLAY_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_ROCK_STAR] = COSPLAY_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_BELLE]     = COSPLAY_PIKACHU_SPECIES_INFO(NO_FLIP),
    [SPECIES_PIKACHU_POP_STAR]  = COSPLAY_PIKACHU_SPECIES_INFO(NO_FLIP),
    [SPECIES_PIKACHU_PH_D]      = COSPLAY_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_LIBRE]     = COSPLAY_PIKACHU_SPECIES_INFO(FLIP),

    [SPECIES_PIKACHU_ORIGINAL_CAP] = CAP_PIKACHU_SPECIES_INFO(NO_FLIP),
    [SPECIES_PIKACHU_HOENN_CAP]    = CAP_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_SINNOH_CAP]   = CAP_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_UNOVA_CAP]    = CAP_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_KALOS_CAP]    = CAP_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_ALOLA_CAP]    = CAP_PIKACHU_SPECIES_INFO(FLIP),
    [SPECIES_PIKACHU_PARTNER_CAP]  = CAP_PIKACHU_SPECIES_INFO(NO_FLIP),
    [SPECIES_PIKACHU_WORLD_CAP]    = CAP_PIKACHU_SPECIES_INFO(FLIP),

    [SPECIES_PICHU_SPIKY_EARED] = PICHU_SPECIES_INFO(NO_FLIP),

    [SPECIES_UNOWN_B] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_C] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_D] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_E] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_F] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_G] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_H] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_I] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_J] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_K] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_L] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_M] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_N] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_O] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_P] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_Q] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_R] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_S] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_T] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_U] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_V] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_W] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_X] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_Y] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_Z] = UNOWN_SPECIES_INFO(NO_FLIP),
    [SPECIES_UNOWN_EMARK] = UNOWN_SPECIES_INFO(FLIP),
    [SPECIES_UNOWN_QMARK] = UNOWN_SPECIES_INFO(NO_FLIP),

    [SPECIES_CASTFORM_SUNNY] = CASTFORM_SPECIES_INFO(TYPE_FIRE, BODY_COLOR_RED),
    [SPECIES_CASTFORM_RAINY] = CASTFORM_SPECIES_INFO(TYPE_WATER, BODY_COLOR_BLUE),
    [SPECIES_CASTFORM_SNOWY] = CASTFORM_SPECIES_INFO(TYPE_ICE, BODY_COLOR_WHITE),

    [SPECIES_DEOXYS_ATTACK] =
    {
        .baseHP        = 50,
        .baseAttack    = 180,
        .baseDefense   = 20,
        .baseSpeed     = 150,
        .baseSpAttack  = 180,
        .baseSpDefense = 20,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack    = 2,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS_DEFENSE] =
    {
        .baseHP        = 50,
        .baseAttack    = 70,
        .baseDefense   = 160,
        .baseSpeed     = 90,
        .baseSpAttack  = 70,
        .baseSpDefense = 160,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_DEOXYS_SPEED] =
    {
        .baseHP        = 50,
        .baseAttack    = 95,
        .baseDefense   = 90,
        .baseSpeed     = 180,
        .baseSpAttack  = 95,
        .baseSpDefense = 90,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = TRUE,
    },

#if P_GEN_4_POKEMON == TRUE
    [SPECIES_BURMY_SANDY_CLOAK] = BURMY_SPECIES_INFO(BODY_COLOR_BROWN),
    [SPECIES_BURMY_TRASH_CLOAK] = BURMY_SPECIES_INFO(BODY_COLOR_RED),

    [SPECIES_WORMADAM_SANDY_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 105,
        .baseSpeed     = 36,
        .baseSpAttack  = 59,
        .baseSpDefense = 85,
        .types = { TYPE_BUG, TYPE_GROUND},
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 2,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WORMADAM_TRASH_CLOAK] =
    {
        .baseHP        = 60,
        .baseAttack    = 69,
        .baseDefense   = 95,
        .baseSpeed     = 36,
        .baseSpAttack  = 69,
        .baseSpDefense = 95,
        .types = { TYPE_BUG, TYPE_STEEL},
        .catchRate = 45,
        .expYield = 148,
        .evYield_Defense   = 1,
        .evYield_SpDefense = 1,
        .itemRare = ITEM_SILVER_POWDER,
        .genderRatio = MON_FEMALE,
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_NONE, ABILITY_OVERCOAT},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CHERRIM_SUNSHINE] = CHERRIM_SPECIES_INFO(BODY_COLOR_PINK),

    [SPECIES_SHELLOS_EAST_SEA] = SHELLOS_SPECIES_INFO(BODY_COLOR_BLUE),

    [SPECIES_GASTRODON_EAST_SEA] = GASTRODON_SPECIES_INFO(BODY_COLOR_BLUE),

    [SPECIES_ROTOM_HEAT]  = ROTOM_FORM_SPECIES_INFO(TYPE_FIRE, FLIP, ABILITY_SCORCHATE),
    [SPECIES_ROTOM_WASH]  = ROTOM_FORM_SPECIES_INFO(TYPE_WATER, NO_FLIP, ABILITY_OCEANATE),
    [SPECIES_ROTOM_FROST] = ROTOM_FORM_SPECIES_INFO(TYPE_ICE, FLIP, ABILITY_REFRIGERATE),
    [SPECIES_ROTOM_FAN]   = ROTOM_FORM_SPECIES_INFO(TYPE_FLYING, FLIP, ABILITY_AERILATE),
    [SPECIES_ROTOM_MOW]   = ROTOM_FORM_SPECIES_INFO(TYPE_GRASS, FLIP, ABILITY_HERBIVATE),

    [SPECIES_DIALGA_ORIGIN] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 120,
        .baseSpeed     = 90,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = { TYPE_STEEL, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_PALKIA_ORIGIN] =
    {
        .baseHP        = 90,
        .baseAttack    = 100,
        .baseDefense   = 100,
        .baseSpeed     = 120,
        .baseSpAttack  = 150,
        .baseSpDefense = 120,
        .types = { TYPE_WATER, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_GIRATINA_ORIGIN] =
    {
        .baseHP        = 150,
        .baseAttack    = 120,
        .baseDefense   = 100,
        .baseSpeed     = 90,
        .baseSpAttack  = 120,
        .baseSpDefense = 100,
        .types = { TYPE_GHOST, TYPE_DRAGON},
        .catchRate = 3,
        .expYield = 306,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_LEVITATE, ABILITY_NONE, ABILITY_PHANTOM_GALE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_SHAYMIN_SKY] =
    {
        .baseHP        = 100,
        .baseAttack    = 103,
        .baseDefense   = 75,
        .baseSpeed     = 127,
        .baseSpAttack  = 120,
        .baseSpDefense = 75,
        .types = { TYPE_GRASS, TYPE_FLYING},
        .catchRate = 45,
        .expYield = 270,
        .evYield_HP        = 3,
        .itemCommon = ITEM_LUM_BERRY,
        .itemRare = ITEM_LUM_BERRY,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = TRUE,
    },

    [SPECIES_ARCEUS_FIGHTING] = ARCEUS_SPECIES_INFO(TYPE_FIGHTING),
    [SPECIES_ARCEUS_FLYING]   = ARCEUS_SPECIES_INFO(TYPE_FLYING),
    [SPECIES_ARCEUS_POISON]   = ARCEUS_SPECIES_INFO(TYPE_POISON),
    [SPECIES_ARCEUS_GROUND]   = ARCEUS_SPECIES_INFO(TYPE_GROUND),
    [SPECIES_ARCEUS_ROCK]     = ARCEUS_SPECIES_INFO(TYPE_ROCK),
    [SPECIES_ARCEUS_BUG]      = ARCEUS_SPECIES_INFO(TYPE_BUG),
    [SPECIES_ARCEUS_GHOST]    = ARCEUS_SPECIES_INFO(TYPE_GHOST),
    [SPECIES_ARCEUS_STEEL]    = ARCEUS_SPECIES_INFO(TYPE_STEEL),
    [SPECIES_ARCEUS_FIRE]     = ARCEUS_SPECIES_INFO(TYPE_FIRE),
    [SPECIES_ARCEUS_WATER]    = ARCEUS_SPECIES_INFO(TYPE_WATER),
    [SPECIES_ARCEUS_GRASS]    = ARCEUS_SPECIES_INFO(TYPE_GRASS),
    [SPECIES_ARCEUS_ELECTRIC] = ARCEUS_SPECIES_INFO(TYPE_ELECTRIC),
    [SPECIES_ARCEUS_PSYCHIC]  = ARCEUS_SPECIES_INFO(TYPE_PSYCHIC),
    [SPECIES_ARCEUS_ICE]      = ARCEUS_SPECIES_INFO(TYPE_ICE),
    [SPECIES_ARCEUS_DRAGON]   = ARCEUS_SPECIES_INFO(TYPE_DRAGON),
    [SPECIES_ARCEUS_DARK]     = ARCEUS_SPECIES_INFO(TYPE_DARK),
    [SPECIES_ARCEUS_FAIRY]    = ARCEUS_SPECIES_INFO(TYPE_FAIRY),
#endif

#if P_GEN_5_POKEMON == TRUE
    [SPECIES_BASCULIN_BLUE_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed     = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_ROCK_HEAD, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_BASCULIN_WHITE_STRIPED] =
    {
        .baseHP        = 70,
        .baseAttack    = 92,
        .baseDefense   = 65,
        .baseSpeed     = 98,
        .baseSpAttack  = 80,
        .baseSpDefense = 55,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 190,
        .expYield = 161,
        .evYield_Speed     = 2,
        .itemRare = ITEM_DEEP_SEA_SCALE,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_RATTLED, ABILITY_ADAPTABILITY, ABILITY_MOLD_BREAKER},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DARMANITAN_ZEN_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 30,
        .baseDefense   = 105,
        .baseSpeed     = 55,
        .baseSpAttack  = 140,
        .baseSpDefense = 105,
        .types = { TYPE_FIRE, TYPE_PSYCHIC},
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_GORILLA_TACTICS, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_DARMANITAN_GALARIAN_ZEN_MODE] =
    {
        .baseHP        = 105,
        .baseAttack    = 160,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_ICE, TYPE_FIRE},
        .catchRate = 60,
        .expYield = 189,
        .evYield_SpAttack  = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHEER_FORCE, ABILITY_GORILLA_TACTICS, ABILITY_ZEN_MODE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_GALARIAN_FORM,
    },

    [SPECIES_DEERLING_SUMMER] = DEERLING_SPECIES_INFO(BODY_COLOR_GREEN),
    [SPECIES_DEERLING_AUTUMN] = DEERLING_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_DEERLING_WINTER] = DEERLING_SPECIES_INFO(BODY_COLOR_BROWN),

    [SPECIES_SAWSBUCK_SUMMER] = SAWSBUCK_SPECIES_INFO,
    [SPECIES_SAWSBUCK_AUTUMN] = SAWSBUCK_SPECIES_INFO,
    [SPECIES_SAWSBUCK_WINTER] = SAWSBUCK_SPECIES_INFO,

    [SPECIES_TORNADUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 100,
        .baseDefense   = 80,
        .baseSpeed     = 121,
        .baseSpAttack  = 110,
        .baseSpDefense = 90,
        .types = { TYPE_FLYING, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_Attack    = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_REGENERATOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_THUNDURUS_THERIAN] =
    {
        .baseHP        = 79,
        .baseAttack    = 105,
        .baseDefense   = 70,
        .baseSpeed     = 101,
        .baseSpAttack  = 145,
        .baseSpDefense = 80,
        .types = { TYPE_ELECTRIC, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_LANDORUS_THERIAN] =
    {
        .baseHP        = 89,
        .baseAttack    = 145,
        .baseDefense   = 90,
        .baseSpeed     = 91,
        .baseSpAttack  = 105,
        .baseSpDefense = 80,
        .types = { TYPE_GROUND, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack  = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 120,
        .friendship = 90,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_KYUREM_WHITE] =
    {
        .baseHP        = 125,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 95,
        .baseSpAttack  = 170,
        .baseSpDefense = 100,
        .types = { TYPE_DRAGON, TYPE_ICE},
        .catchRate = 3,
        .expYield = 315,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TURBOBLAZE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_KYUREM_BLACK] =
    {
        .baseHP        = 125,
        .baseAttack    = 170,
        .baseDefense   = 100,
        .baseSpeed     = 95,
        .baseSpAttack  = 120,
        .baseSpDefense = 90,
        .types = { TYPE_DRAGON, TYPE_ICE},
        .catchRate = 3,
        .expYield = 315,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TERAVOLT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_KELDEO_RESOLUTE] =
    {
        .baseHP        = 91,
        .baseAttack    = 72,
        .baseDefense   = 90,
        .baseSpeed     = 108,
        .baseSpAttack  = 129,
        .baseSpDefense = 90,
        .types = { TYPE_WATER, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 261,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 80,
        .friendship = 35,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_JUSTIFIED, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_MELOETTA_PIROUETTE] =
    {
        .baseHP        = 100,
        .baseAttack    = 128,
        .baseDefense   = 90,
        .baseSpeed     = 128,
        .baseSpAttack  = 77,
        .baseSpDefense = 77,
        .types = { TYPE_NORMAL, TYPE_FIGHTING},
        .catchRate = 3,
        .expYield = 270,
        .evYield_Attack  = 1,
        .evYield_Defense = 1,
        .evYield_Speed     = 1,
        .itemCommon = ITEM_STAR_PIECE,
        .itemRare = ITEM_STAR_PIECE,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },

    [SPECIES_GENESECT_DOUSE_DRIVE] = GENESECT_SPECIES_INFO,
    [SPECIES_GENESECT_SHOCK_DRIVE] = GENESECT_SPECIES_INFO,
    [SPECIES_GENESECT_BURN_DRIVE] = GENESECT_SPECIES_INFO,
    [SPECIES_GENESECT_CHILL_DRIVE] = GENESECT_SPECIES_INFO,
#endif

#if P_GEN_6_POKEMON == TRUE
    [SPECIES_GRENINJA_BATTLE_BOND] =
    {
        .baseHP        = 72,
        .baseAttack    = 95,
        .baseDefense   = 67,
        .baseSpeed     = 122,
        .baseSpAttack  = 103,
        .baseSpDefense = 71,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 45,
        .expYield = 239,
        .evYield_Speed     = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BATTLE_BOND, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_GRENINJA_ASH] =
    {
        .baseHP        = 72,
        .baseAttack    = 145,
        .baseDefense   = 67,
        .baseSpeed     = 132,
        .baseSpAttack  = 153,
        .baseSpDefense = 71,
        .types = { TYPE_WATER, TYPE_DARK},
        .catchRate = 45,
        .expYield = 288,
        .evYield_Speed     = 3,
        .genderRatio = MON_MALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BATTLE_BOND, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
    },

    [SPECIES_VIVILLON_POLAR]       = VIVILLON_SPECIES_INFO(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_TUNDRA]      = VIVILLON_SPECIES_INFO(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_CONTINENTAL] = VIVILLON_SPECIES_INFO(BODY_COLOR_YELLOW),
    [SPECIES_VIVILLON_GARDEN]      = VIVILLON_SPECIES_INFO(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_ELEGANT]     = VIVILLON_SPECIES_INFO(BODY_COLOR_PURPLE),
    [SPECIES_VIVILLON_MEADOW]      = VIVILLON_SPECIES_INFO(BODY_COLOR_PINK),
    [SPECIES_VIVILLON_MODERN]      = VIVILLON_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_VIVILLON_MARINE]      = VIVILLON_SPECIES_INFO(BODY_COLOR_BLUE),
    [SPECIES_VIVILLON_ARCHIPELAGO] = VIVILLON_SPECIES_INFO(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_HIGH_PLAINS] = VIVILLON_SPECIES_INFO(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_SANDSTORM]   = VIVILLON_SPECIES_INFO(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_RIVER]       = VIVILLON_SPECIES_INFO(BODY_COLOR_BROWN),
    [SPECIES_VIVILLON_MONSOON]     = VIVILLON_SPECIES_INFO(BODY_COLOR_GRAY),
    [SPECIES_VIVILLON_SAVANNA]     = VIVILLON_SPECIES_INFO(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_SUN]         = VIVILLON_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_VIVILLON_OCEAN]       = VIVILLON_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_VIVILLON_JUNGLE]      = VIVILLON_SPECIES_INFO(BODY_COLOR_GREEN),
    [SPECIES_VIVILLON_FANCY]       = VIVILLON_SPECIES_INFO(BODY_COLOR_PINK),
    [SPECIES_VIVILLON_POKE_BALL]   = VIVILLON_SPECIES_INFO(BODY_COLOR_RED),

    [SPECIES_FLABEBE_YELLOW_FLOWER] = FLABEBE_SPECIES_INFO,
    [SPECIES_FLABEBE_ORANGE_FLOWER] = FLABEBE_SPECIES_INFO,
    [SPECIES_FLABEBE_BLUE_FLOWER]   = FLABEBE_SPECIES_INFO,
    [SPECIES_FLABEBE_WHITE_FLOWER]  = FLABEBE_SPECIES_INFO,

    [SPECIES_FLOETTE_YELLOW_FLOWER] = FLOETTE_SPECIES_INFO,
    [SPECIES_FLOETTE_ORANGE_FLOWER] = FLOETTE_SPECIES_INFO,
    [SPECIES_FLOETTE_BLUE_FLOWER]   = FLOETTE_SPECIES_INFO,
    [SPECIES_FLOETTE_WHITE_FLOWER]  = FLOETTE_SPECIES_INFO,

    [SPECIES_FLOETTE_ETERNAL_FLOWER] =
    {
        .baseHP        = 74,
        .baseAttack    = 65,
        .baseDefense   = 67,
        .baseSpeed     = 92,
        .baseSpAttack  = 125,
        .baseSpDefense = 128,
        .types = { TYPE_FAIRY, TYPE_FAIRY},
        .catchRate = 120,
        .expYield = 243,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_FLOWER_VEIL, ABILITY_NONE, ABILITY_SYMBIOSIS},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FLORGES_YELLOW_FLOWER] = FLORGES_SPECIES_INFO,
    [SPECIES_FLORGES_ORANGE_FLOWER] = FLORGES_SPECIES_INFO,
    [SPECIES_FLORGES_BLUE_FLOWER]   = FLORGES_SPECIES_INFO,
    [SPECIES_FLORGES_WHITE_FLOWER]  = FLORGES_SPECIES_INFO,

    [SPECIES_FURFROU_HEART_TRIM]     = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_STAR_TRIM]      = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_DIAMOND_TRIM]   = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_DEBUTANTE_TRIM] = FURFROU_SPECIES_INFO(NO_FLIP),
    [SPECIES_FURFROU_MATRON_TRIM]    = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_DANDY_TRIM]     = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_LA_REINE_TRIM]  = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_KABUKI_TRIM]    = FURFROU_SPECIES_INFO(FLIP),
    [SPECIES_FURFROU_PHARAOH_TRIM]   = FURFROU_SPECIES_INFO(FLIP),

    [SPECIES_MEOWSTIC_FEMALE] =
    {
        .baseHP        = 74,
        .baseAttack    = 48,
        .baseDefense   = 76,
        .baseSpeed     = 104,
        .baseSpAttack  = 83,
        .baseSpDefense = 81,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC},
        .catchRate = 75,
        .expYield = 163,
        .evYield_Speed     = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_INFILTRATOR, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_AEGISLASH_BLADE] =
    {
        .baseHP        = 60,
        .baseDefense   = 50,
        .baseSpeed     = 60,
        #if P_UPDATED_STATS >= GEN_8
        .baseAttack    = 140,
        .baseSpAttack  = 140,
        #else
        .baseAttack    = 150,
        .baseSpAttack  = 150,
        #endif
        .baseSpDefense = 50,
        .types = { TYPE_STEEL, TYPE_GHOST},
        .catchRate = 45,
        .expYield = 234,
        .evYield_Defense   = 2,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_STANCE_CHANGE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_PUMPKABOO_SMALL] =
    {
        .baseHP        = 44,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 56,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMPKABOO_MISC_INFO,
    },

    [SPECIES_PUMPKABOO_LARGE] =
    {
        .baseHP        = 54,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 46,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        PUMPKABOO_MISC_INFO,
    },

    [SPECIES_PUMPKABOO_SUPER] =
    {
        .baseHP        = 59,
        .baseAttack    = 66,
        .baseDefense   = 70,
        .baseSpeed     = 41,
        .baseSpAttack  = 44,
        .baseSpDefense = 55,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        PUMPKABOO_MISC_INFO,
    },

    [SPECIES_GOURGEIST_SMALL] =
    {
        .baseHP        = 55,
        .baseAttack    = 85,
        .baseDefense   = 122,
        .baseSpeed     = 99,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_INFO,
    },

    [SPECIES_GOURGEIST_LARGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 95,
        .baseDefense   = 122,
        .baseSpeed     = 69,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        GOURGEIST_MISC_INFO,
    },

    [SPECIES_GOURGEIST_SUPER] =
    {
        .baseHP        = 85,
        .baseAttack    = 100,
        .baseDefense   = 122,
        .baseSpeed     = 54,
        .baseSpAttack  = 58,
        .baseSpDefense = 75,
        .itemCommon = ITEM_MIRACLE_SEED,
        .itemRare = ITEM_MIRACLE_SEED,
        GOURGEIST_MISC_INFO,
    },

    [SPECIES_XERNEAS_ACTIVE] = XERNEAS_SPECIES_INFO,

    [SPECIES_ZYGARDE_10_AURA_BREAK] = ZYGARDE_10_SPECIES_INFO(ABILITY_AURA_BREAK),
    [SPECIES_ZYGARDE_10_POWER_CONSTRUCT] = ZYGARDE_50_SPECIES_INFO(ABILITY_POWER_CONSTRUCT),
    [SPECIES_ZYGARDE_50_POWER_CONSTRUCT] = ZYGARDE_50_SPECIES_INFO(ABILITY_POWER_CONSTRUCT),

    [SPECIES_ZYGARDE_COMPLETE] =
    {
        .baseHP        = 216,
        .baseAttack    = 100,
        .baseDefense   = 121,
        .baseSpeed     = 85,
        .baseSpAttack  = 91,
        .baseSpDefense = 95,
        .types = { TYPE_DRAGON, TYPE_GROUND},
        .catchRate = 3,
        .expYield = 319,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_POWER_CONSTRUCT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_HOOPA_UNBOUND] =
    {
        .baseHP        = 80,
        .baseAttack    = 160,
        .baseDefense   = 60,
        .baseSpeed     = 80,
        .baseSpAttack  = 170,
        .baseSpDefense = 130,
        .types = { TYPE_PSYCHIC, TYPE_DARK},
        .catchRate = 3,
        .expYield = 270,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = P_UPDATED_FRIENDSHIP >= GEN_8 ? STANDARD_FRIENDSHIP : 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_MAGICIAN, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_MYTHICAL,
    },
#endif

#if P_GEN_7_POKEMON == TRUE
    [SPECIES_ORICORIO_POM_POM] = ORICORIO_SPECIES_INFO(TYPE_ELECTRIC, BODY_COLOR_YELLOW),
    [SPECIES_ORICORIO_PAU]     = ORICORIO_SPECIES_INFO(TYPE_PSYCHIC, BODY_COLOR_PINK),
    [SPECIES_ORICORIO_SENSU]   = ORICORIO_SPECIES_INFO(TYPE_GHOST, BODY_COLOR_PURPLE),

    [SPECIES_ROCKRUFF_OWN_TEMPO] = ROCKRUFF_SPECIES_INFO(ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_NONE),

    [SPECIES_LYCANROC_MIDNIGHT] =
    {
        .baseHP        = 85,
        .baseAttack    = 115,
        .baseDefense   = 75,
        .baseSpeed     = 82,
        .baseSpAttack  = 55,
        .baseSpDefense = 75,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_KEEN_EYE, ABILITY_VITAL_SPIRIT, ABILITY_NO_GUARD},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_LYCANROC_DUSK] =
    {
        .baseHP        = 75,
        .baseAttack    = 117,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 55,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ROCK},
        .catchRate = 90,
        .expYield = 170,
        .evYield_Attack    = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_TOUGH_CLAWS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_WISHIWASHI_SCHOOL] =
    {
        .baseHP        = 45,
        .baseAttack    = 140,
        .baseDefense   = 130,
        .baseSpeed     = 30,
        .baseSpAttack  = 140,
        .baseSpDefense = 135,
        .types = { TYPE_WATER, TYPE_WATER},
        .catchRate = 60,
        .expYield = 61,
        .evYield_HP        = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_SCHOOLING, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_SILVALLY_FIGHTING] = SILVALLY_SPECIES_INFO(TYPE_FIGHTING),
    [SPECIES_SILVALLY_FLYING]   = SILVALLY_SPECIES_INFO(TYPE_FLYING),
    [SPECIES_SILVALLY_POISON]   = SILVALLY_SPECIES_INFO(TYPE_POISON),
    [SPECIES_SILVALLY_GROUND]   = SILVALLY_SPECIES_INFO(TYPE_GROUND),
    [SPECIES_SILVALLY_ROCK]     = SILVALLY_SPECIES_INFO(TYPE_ROCK),
    [SPECIES_SILVALLY_BUG]      = SILVALLY_SPECIES_INFO(TYPE_BUG),
    [SPECIES_SILVALLY_GHOST]    = SILVALLY_SPECIES_INFO(TYPE_GHOST),
    [SPECIES_SILVALLY_STEEL]    = SILVALLY_SPECIES_INFO(TYPE_STEEL),
    [SPECIES_SILVALLY_FIRE]     = SILVALLY_SPECIES_INFO(TYPE_FIRE),
    [SPECIES_SILVALLY_WATER]    = SILVALLY_SPECIES_INFO(TYPE_WATER),
    [SPECIES_SILVALLY_GRASS]    = SILVALLY_SPECIES_INFO(TYPE_GRASS),
    [SPECIES_SILVALLY_ELECTRIC] = SILVALLY_SPECIES_INFO(TYPE_ELECTRIC),
    [SPECIES_SILVALLY_PSYCHIC]  = SILVALLY_SPECIES_INFO(TYPE_PSYCHIC),
    [SPECIES_SILVALLY_ICE]      = SILVALLY_SPECIES_INFO(TYPE_ICE),
    [SPECIES_SILVALLY_DRAGON]   = SILVALLY_SPECIES_INFO(TYPE_DRAGON),
    [SPECIES_SILVALLY_DARK]     = SILVALLY_SPECIES_INFO(TYPE_DARK),
    [SPECIES_SILVALLY_FAIRY]    = SILVALLY_SPECIES_INFO(TYPE_FAIRY),

    [SPECIES_MINIOR_METEOR_ORANGE] = MINIOR_METEOR_SPECIES_INFO,
    [SPECIES_MINIOR_METEOR_YELLOW] = MINIOR_METEOR_SPECIES_INFO,
    [SPECIES_MINIOR_METEOR_GREEN]  = MINIOR_METEOR_SPECIES_INFO,
    [SPECIES_MINIOR_METEOR_BLUE]   = MINIOR_METEOR_SPECIES_INFO,
    [SPECIES_MINIOR_METEOR_INDIGO] = MINIOR_METEOR_SPECIES_INFO,
    [SPECIES_MINIOR_METEOR_VIOLET] = MINIOR_METEOR_SPECIES_INFO,

    [SPECIES_MINIOR_CORE_RED]    = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_MINIOR_CORE_ORANGE] = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_MINIOR_CORE_YELLOW] = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_YELLOW),
    [SPECIES_MINIOR_CORE_GREEN]  = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_GREEN),
    [SPECIES_MINIOR_CORE_BLUE]   = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_BLUE),
    [SPECIES_MINIOR_CORE_INDIGO] = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_BLUE),
    [SPECIES_MINIOR_CORE_VIOLET] = MINIOR_CORE_SPECIES_INFO(BODY_COLOR_PURPLE),

    [SPECIES_MIMIKYU_BUSTED] = MIMIKYU_SPECIES_INFO,

    [SPECIES_NECROZMA_DUSK_MANE] =
    {
        .baseHP        = 97,
        .baseAttack    = 157,
        .baseDefense   = 127,
        .baseSpeed     = 77,
        .baseSpAttack  = 113,
        .baseSpDefense = 109,
        .types = { TYPE_PSYCHIC, TYPE_STEEL},
        .catchRate = 255,
        .expYield = 306,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_NECROZMA_DAWN_WINGS] =
    {
        .baseHP        = 97,
        .baseAttack    = 113,
        .baseDefense   = 109,
        .baseSpeed     = 77,
        .baseSpAttack  = 157,
        .baseSpDefense = 127,
        .types = { TYPE_PSYCHIC, TYPE_GHOST},
        .catchRate = 255,
        .expYield = 306,
        .evYield_SpAttack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRISM_ARMOR, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_NECROZMA_ULTRA] =
    {
        .baseHP        = 97,
        .baseAttack    = 167,
        .baseDefense   = 97,
        .baseSpeed     = 129,
        .baseSpAttack  = 167,
        .baseSpDefense = 97,
        .types = { TYPE_PSYCHIC, TYPE_DRAGON},
        .catchRate = 255,
        .expYield = 339,
        .evYield_Attack    = 1,
        .evYield_Speed     = 1,
        .evYield_SpAttack  = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_NEUROFORCE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = TRUE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_ULTRA_BURST,
    },

    [SPECIES_MAGEARNA_ORIGINAL_COLOR] = MAGEARNA_SPECIES_INFO(BODY_COLOR_RED),
#endif

#if P_GEN_8_POKEMON == TRUE
    [SPECIES_CRAMORANT_GULPING] = CRAMORANT_SPECIES_INFO,
    [SPECIES_CRAMORANT_GORGING] = CRAMORANT_SPECIES_INFO,

    [SPECIES_TOXTRICITY_LOW_KEY] =
    {
        TOXTRICITY_MISC_INFO(ABILITY_MINUS),
    },

    [SPECIES_SINISTEA_ANTIQUE] = SINISTEA_SPECIES_INFO,

    [SPECIES_POLTEAGEIST_ANTIQUE] = POLTEAGEIST_SPECIES_INFO,

    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_CREAM]    = { ALCREMIE_MISC_INFO(BODY_COLOR_PINK) },
    [SPECIES_ALCREMIE_STRAWBERRY_MATCHA_CREAM]  = { ALCREMIE_MISC_INFO(BODY_COLOR_GREEN) },
    [SPECIES_ALCREMIE_STRAWBERRY_MINT_CREAM]    = { ALCREMIE_MISC_INFO(BODY_COLOR_BLUE) },
    [SPECIES_ALCREMIE_STRAWBERRY_LEMON_CREAM]   = { ALCREMIE_MISC_INFO(BODY_COLOR_YELLOW) },
    [SPECIES_ALCREMIE_STRAWBERRY_SALTED_CREAM]  = { ALCREMIE_MISC_INFO(BODY_COLOR_WHITE) },
    [SPECIES_ALCREMIE_STRAWBERRY_RUBY_SWIRL]    = { ALCREMIE_MISC_INFO(BODY_COLOR_YELLOW) },
    [SPECIES_ALCREMIE_STRAWBERRY_CARAMEL_SWIRL] = { ALCREMIE_MISC_INFO(BODY_COLOR_BROWN) },
    [SPECIES_ALCREMIE_STRAWBERRY_RAINBOW_SWIRL] = { ALCREMIE_MISC_INFO(BODY_COLOR_YELLOW) },

    [SPECIES_EISCUE_NOICE_FACE] =
    {
        .baseHP        = 75,
        .baseAttack    = 80,
        .baseDefense   = 70,
        .baseSpeed     = 130,
        .baseSpAttack  = 65,
        .baseSpDefense = 50,
        .types = { TYPE_ICE, TYPE_ICE},
        .catchRate = 60,
        .expYield = 165,
        .evYield_Defense   = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_ICE_FACE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_INDEEDEE_FEMALE] =
    {
        .baseHP        = 70,
        .baseAttack    = 55,
        .baseDefense   = 65,
        .baseSpeed     = 85,
        .baseSpAttack  = 95,
        .baseSpDefense = 105,
        .types = { TYPE_PSYCHIC, TYPE_NORMAL},
        .catchRate = 30,
        .expYield = 166,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 40,
        .friendship = 140,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_SYNCHRONIZE, ABILITY_PSYCHIC_SURGE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
    },

    [SPECIES_MORPEKO_HANGRY] = MORPEKO_SPECIES_INFO,

    [SPECIES_ZACIAN_CROWNED_SWORD] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 150 : 170,
        .baseDefense   = 115,
        .baseSpeed     = 148,
        .baseSpAttack  = 80,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_STEEL},
        .catchRate = 10,
        .expYield = 360,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_INTREPID_SWORD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ZAMAZENTA_CROWNED_SHIELD] =
    {
        .baseHP        = 92,
        .baseAttack    = P_UPDATED_STATS >= GEN_9 ? 120 : 130,
        .baseDefense   = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .baseSpeed     = 128,
        .baseSpAttack  = 80,
        .baseSpDefense = P_UPDATED_STATS >= GEN_9 ? 140 : 145,
        .types = { TYPE_FIGHTING, TYPE_STEEL},
        .catchRate = 10,
        .expYield = 360,
        .evYield_Speed     = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_DAUNTLESS_SHIELD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ETERNATUS_ETERNAMAX] =
    {
        .baseHP        = 255,
        .baseAttack    = 115,
        .baseDefense   = 250,
        .baseSpeed     = 130,
        .baseSpAttack  = 125,
        .baseSpDefense = 250,
        .types = { TYPE_POISON, TYPE_DRAGON},
        .catchRate = 255,
        .expYield = 563,
        .evYield_HP        = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PRESSURE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE] =
    {
        URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO,
    },

    [SPECIES_ZARUDE_DADA] = ZARUDE_SPECIES_INFO,

    [SPECIES_CALYREX_ICE_RIDER] =
    {
        .baseHP        = 100,
        .baseAttack    = 165,
        .baseDefense   = 150,
        .baseSpeed     = 50,
        .baseSpAttack  = 85,
        .baseSpDefense = 130,
        .types = { TYPE_PSYCHIC, TYPE_ICE},
        .catchRate = 3,
        .expYield = 340,
        .evYield_Attack    = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_AS_ONE_ICE_RIDER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_CALYREX_SHADOW_RIDER] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 80,
        .baseSpeed     = 150,
        .baseSpAttack  = 165,
        .baseSpDefense = 100,
        .types = { TYPE_PSYCHIC, TYPE_GHOST},
        .catchRate = 3,
        .expYield = 340,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 120,
        .friendship = 100,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_AS_ONE_SHADOW_RIDER, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_CANNOT_BE_TRADED,
    },

    [SPECIES_ENAMORUS_THERIAN] =
    {
        .baseHP        = 74,
        .baseAttack    = 115,
        .baseDefense   = 110,
        .baseSpeed     = 46,
        .baseSpAttack  = 135,
        .baseSpDefense = 100,
        .types = { TYPE_FAIRY, TYPE_FLYING},
        .catchRate = 3,
        .expYield = 116,
        .evYield_SpAttack  = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = STANDARD_FRIENDSHIP,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_OVERCOAT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    // Gigantamax Forms
    [SPECIES_VENUSAUR_GIGANTAMAX] =
    {
        VENUSAUR_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_CHARIZARD_GIGANTAMAX] =
    {
        CHARIZARD_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_BLASTOISE_GIGANTAMAX] =
    {
        BLASTOISE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_BUTTERFREE_GIGANTAMAX] =
    {
        BUTTERFREE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_PIKACHU_GIGANTAMAX] =
    {
        PIKACHU_MISC_INFO(PERCENT_FEMALE(50), FLIP),
        .gigantamax = TRUE,
    },
    [SPECIES_MEOWTH_GIGANTAMAX] =
    {
        MEOWTH_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_MACHAMP_GIGANTAMAX] =
    {
        MACHAMP_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_GENGAR_GIGANTAMAX] =
    {
        GENGAR_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_KINGLER_GIGANTAMAX] =
    {
        KINGLER_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_LAPRAS_GIGANTAMAX] =
    {
        LAPRAS_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_EEVEE_GIGANTAMAX] =
    {
        EEVEE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_SNORLAX_GIGANTAMAX] =
    {
        SNORLAX_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_GARBODOR_GIGANTAMAX] =
    {
        GARBODOR_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_MELMETAL_GIGANTAMAX] =
    {
        MELMETAL_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_RILLABOOM_GIGANTAMAX] =
    {
        RILLABOOM_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_CINDERACE_GIGANTAMAX] =
    {
        CINDERACE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_INTELEON_GIGANTAMAX] =
    {
        INTELEON_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_CORVIKNIGHT_GIGANTAMAX] =
    {
        CORVIKNIGHT_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_ORBEETLE_GIGANTAMAX] =
    {
        ORBEETLE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_DREDNAW_GIGANTAMAX] =
    {
        DREDNAW_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_COALOSSAL_GIGANTAMAX] =
    {
        COALOSSAL_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_FLAPPLE_GIGANTAMAX] =
    {
        FLAPPLE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_APPLETUN_GIGANTAMAX] =
    {
        APPLETUN_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_SANDACONDA_GIGANTAMAX] =
    {
        SANDACONDA_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_TOXTRICITY_AMPED_GIGANTAMAX] =
    {
        TOXTRICITY_MISC_INFO(ABILITY_PLUS),
        .gigantamax = TRUE,
    },
    [SPECIES_TOXTRICITY_LOW_KEY_GIGANTAMAX] =
    {
        TOXTRICITY_MISC_INFO(ABILITY_MINUS),
        .gigantamax = TRUE,
    },
    [SPECIES_CENTISKORCH_GIGANTAMAX] =
    {
        CENTISKORCH_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_HATTERENE_GIGANTAMAX] =
    {
        HATTERENE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_GRIMMSNARL_GIGANTAMAX] =
    {
        GRIMMSNARL_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_ALCREMIE_GIGANTAMAX] =
    {
        ALCREMIE_MISC_INFO(BODY_COLOR_PINK),
        .gigantamax = TRUE,
    },
    [SPECIES_COPPERAJAH_GIGANTAMAX] =
    {
        COPPERAJAH_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_DURALUDON_GIGANTAMAX] =
    {
        DURALUDON_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_URSHIFU_SINGLE_STRIKE_STYLE_GIGANTAMAX] =
    {
        URSHIFU_SINGLE_STRIKE_STYLE_MISC_INFO,
        .gigantamax = TRUE,
    },
    [SPECIES_URSHIFU_RAPID_STRIKE_STYLE_GIGANTAMAX] =
    {
        URSHIFU_RAPID_STRIKE_STYLE_MISC_INFO,
        .gigantamax = TRUE,
    },

#endif
#if P_GEN_9_POKEMON == TRUE
    [SPECIES_SPRIGATITO] =
    {
        .baseHP        = 40,
        .baseAttack    = 61,
        .baseDefense   = 54,
        .baseSpeed     = 65,
        .baseSpAttack  = 45,
        .baseSpDefense = 45,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLORAGATO] =
    {
        .baseHP        = 61,
        .baseAttack    = 80,
        .baseDefense   = 63,
        .baseSpeed     = 83,
        .baseSpAttack  = 60,
        .baseSpDefense = 63,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_MEOWSCARADA] =
    {
        .baseHP        = 76,
        .baseAttack    = 110,
        .baseDefense   = 70,
        .baseSpeed     = 123,
        .baseSpAttack  = 81,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Speed = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_GRASS},
        .abilities = {ABILITY_OVERGROW, ABILITY_NONE, ABILITY_PROTEAN},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FUECOCO] =
    {
        .baseHP        = 67,
        .baseAttack    = 45,
        .baseDefense   = 59,
        .baseSpeed     = 36,
        .baseSpAttack  = 63,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 62,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CROCALOR] =
    {
        .baseHP        = 81,
        .baseAttack    = 55,
        .baseDefense   = 78,
        .baseSpeed     = 49,
        .baseSpAttack  = 90,
        .baseSpDefense = 58,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 45,
        .expYield = 144,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_SKELEDIRGE] =
    {
        .baseHP        = 104,
        .baseAttack    = 75,
        .baseDefense   = 100,
        .baseSpeed     = 66,
        .baseSpAttack  = 110,
        .baseSpDefense = 75,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 265,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_BLAZE, ABILITY_NONE, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_QUAXLY] =
    {
        .baseHP        = 55,
        .baseAttack    = 65,
        .baseDefense   = 45,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 45,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield =  62,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_QUAXWELL] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 65,
        .baseSpeed     = 65,
        .baseSpAttack  = 65,
        .baseSpDefense = 60,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 45,
        .expYield = 144,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_QUAQUAVAL] =
    {
        .baseHP        = 85,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 85,
        .baseSpDefense = 75,
        .types = { TYPE_WATER, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 265,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(12.5),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_TORRENT, ABILITY_NONE, ABILITY_MOXIE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_LECHONK] =
    {
        .baseHP        = 54,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 51,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

#define OINKOLOGNE_MISC_INFO                                \
        .types = { TYPE_NORMAL, TYPE_NORMAL },              \
        .catchRate = 100,                                   \
        .expYield = 171,                                    \
        .evYield_HP = 2,                                    \
        .eggCycles = 15,                                    \
        .friendship = 50,                                   \
        .growthRate = GROWTH_MEDIUM_FAST,                   \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},   \
        .bodyColor = BODY_COLOR_GRAY,                       \
        .noFlip = FALSE

    [SPECIES_OINKOLOGNE] =
    {
        .baseHP        = 110,
        .baseAttack    = 100,
        .baseDefense   = 75,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 80,
        .genderRatio = PERCENT_FEMALE(0),
        .abilities = {ABILITY_LINGERING_AROMA, ABILITY_GLUTTONY, ABILITY_THICK_FAT},
        OINKOLOGNE_MISC_INFO,
    },

    [SPECIES_OINKOLOGNE_FEMALE] =
    {
        .baseHP        = 115,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 59,
        .baseSpDefense = 90,
        .genderRatio = PERCENT_FEMALE(100),
        .abilities = {ABILITY_AROMA_VEIL, ABILITY_GLUTTONY, ABILITY_THICK_FAT},
        OINKOLOGNE_MISC_INFO,
    },

    [SPECIES_TAROUNTULA] =
    {
        .baseHP        = 35,
        .baseAttack    = 41,
        .baseDefense   = 45,
        .baseSpeed     = 20,
        .baseSpAttack  = 29,
        .baseSpDefense = 40,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 255,
        .expYield = 42,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_SPIDOPS] =
    {
        .baseHP        = 60,
        .baseAttack    = 79,
        .baseDefense   = 92,
        .baseSpeed     = 35,
        .baseSpAttack  = 52,
        .baseSpDefense = 86,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 120,
        .expYield = 141,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_ERRATIC,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_INSOMNIA, ABILITY_NONE, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_NYMBLE] =
    {
        .baseHP        = 33,
        .baseAttack    = 46,
        .baseDefense   = 40,
        .baseSpeed     = 45,
        .baseSpAttack  = 21,
        .baseSpDefense = 25,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 190,
        .expYield = 42,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 20,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_LOKIX] =
    {
        .baseHP        = 71,
        .baseAttack    = 102,
        .baseDefense   = 78,
        .baseSpeed     = 92,
        .baseSpAttack  = 52,
        .baseSpDefense = 55,
        .types = { TYPE_BUG, TYPE_DARK },
        .catchRate = 30,
        .expYield = 158,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 0,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SWARM, ABILITY_NONE, ABILITY_TINTED_LENS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_PAWMI] =
    {
        .baseHP        = 45,
        .baseAttack    = 50,
        .baseDefense   = 20,
        .baseSpeed     = 60,
        .baseSpAttack  = 40,
        .baseSpDefense = 25,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 48,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_STATIC, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PAWMO] =
    {
        .baseHP        = 60,
        .baseAttack    = 75,
        .baseDefense   = 40,
        .baseSpeed     = 85,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_FIGHTING },
        .catchRate = 80,
        .expYield = 123,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_PAWMOT] =
    {
        .baseHP        = 70,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 105,
        .baseSpAttack  = 70,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_FIGHTING },
        .catchRate = 45,
        .expYield = 245,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 15,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VOLT_ABSORB, ABILITY_NATURAL_CURE, ABILITY_IRON_FIST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TANDEMAUS] =
    {
        .baseHP        = 50,
        .baseAttack    = 50,
        .baseDefense   = 45,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 45,
        .types = { TYPE_NORMAL, TYPE_NORMAL },
        .catchRate = 150,
        .expYield = 61,
        .evYield_Speed = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 10,
        .friendship = 50,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_RUN_AWAY, ABILITY_PICKUP, ABILITY_OWN_TEMPO},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

#define MAUSHOLD_SPECIES_INFO \
    { \
        .baseHP        = 74, \
        .baseAttack    = 75, \
        .baseDefense   = 70, \
        .baseSpeed     = 111, \
        .baseSpAttack  = 65, \
        .baseSpDefense = 75, \
        .types = { TYPE_NORMAL, TYPE_NORMAL }, \
        .catchRate = 75, \
        .expYield = 165, \
        .evYield_Speed = 2, \
        .genderRatio = MON_GENDERLESS, \
        .eggCycles = 10, \
        .friendship = 50, \
        .growthRate = GROWTH_FAST, \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FAIRY}, \
        .abilities = {ABILITY_FRIEND_GUARD, ABILITY_CHEEK_POUCH, ABILITY_TECHNICIAN}, \
        .bodyColor = BODY_COLOR_WHITE, \
        .noFlip = FALSE, \
    }

    [SPECIES_MAUSHOLD_FAMILY_OF_FOUR] = MAUSHOLD_SPECIES_INFO,
    [SPECIES_MAUSHOLD_FAMILY_OF_THREE] = MAUSHOLD_SPECIES_INFO,

    [SPECIES_FIDOUGH] =
    {
        .baseHP        = 37,
        .baseAttack    = 55,
        .baseDefense   = 70,
        .baseSpeed     = 65,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 190,
        .expYield = 62,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_NONE, ABILITY_KLUTZ},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_DACHSBUN] =
    {
        .baseHP        = 57,
        .baseAttack    = 80,
        .baseDefense   = 115,
        .baseSpeed     = 95,
        .baseSpAttack  = 50,
        .baseSpDefense = 80,
        .types = { TYPE_FAIRY, TYPE_FAIRY },
        .catchRate = 90,
        .expYield = 167,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_WELL_BAKED_BODY, ABILITY_NONE, ABILITY_AROMA_VEIL},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_SMOLIV] =
    {
        .baseHP        = 41,
        .baseAttack    = 35,
        .baseDefense   = 45,
        .baseSpeed     = 30,
        .baseSpAttack  = 58,
        .baseSpDefense = 51,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 255,
        .expYield = 52,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_DOLLIV] =
    {
        .baseHP        = 52,
        .baseAttack    = 53,
        .baseDefense   = 60,
        .baseSpeed     = 33,
        .baseSpAttack  = 78,
        .baseSpDefense = 78,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 120,
        .expYield = 124,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_EARLY_BIRD, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ARBOLIVA] =
    {
        .baseHP        = 78,
        .baseAttack    = 69,
        .baseDefense   = 90,
        .baseSpeed     = 39,
        .baseSpAttack  = 125,
        .baseSpDefense = 109,
        .types = { TYPE_GRASS, TYPE_NORMAL },
        .catchRate = 45,
        .expYield = 255,
        .evYield_SpAttack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_SEED_SOWER, ABILITY_NONE, ABILITY_HARVEST},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

#define SQUAWKABILLY_MISC_INFO                                  \
        .baseHP        = 82,                                    \
        .baseAttack    = 96,                                    \
        .baseDefense   = 51,                                    \
        .baseSpeed     = 92,                                    \
        .baseSpAttack  = 45,                                    \
        .baseSpDefense = 51,                                    \
        .types = { TYPE_NORMAL, TYPE_FLYING },                  \
        .catchRate = 190,                                       \
        .expYield = 146,                                        \
        .evYield_Attack = 1,                                    \
        .genderRatio = PERCENT_FEMALE(50),                      \
        .eggCycles = 15,                                        \
        .friendship = 50,                                       \
        .growthRate = GROWTH_ERRATIC,                           \
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},     \
        .noFlip = FALSE

    [SPECIES_SQUAWKABILLY] =
    {
        .abilities = {ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_GREEN,
        SQUAWKABILLY_MISC_INFO,
    },

    [SPECIES_SQUAWKABILLY_BLUE_PLUMAGE] =
    {
        .abilities = {ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_GUTS},
        .bodyColor = BODY_COLOR_BLUE,
        SQUAWKABILLY_MISC_INFO,
    },

    [SPECIES_SQUAWKABILLY_YELLOW_PLUMAGE] =
    {
        .abilities = {ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_YELLOW,
        SQUAWKABILLY_MISC_INFO,
    },

    [SPECIES_SQUAWKABILLY_WHITE_PLUMAGE] =
    {
        .abilities = {ABILITY_INTIMIDATE, ABILITY_HUSTLE, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_WHITE,
        SQUAWKABILLY_MISC_INFO,
    },

    [SPECIES_NACLI] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 75,
        .baseSpeed     = 25,
        .baseSpAttack  = 35,
        .baseSpDefense = 35,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 255,
        .expYield = 56,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_NACLSTACK] =
    {
        .baseHP        = 60,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 35,
        .baseSpAttack  = 35,
        .baseSpDefense = 65,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 124,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_GARGANACL] =
    {
        .baseHP        = 100,
        .baseAttack    = 100,
        .baseDefense   = 130,
        .baseSpeed     = 35,
        .baseSpAttack  = 45,
        .baseSpDefense = 90,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 45,
        .expYield = 250,
        .evYield_Defense = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_PURIFYING_SALT, ABILITY_STURDY, ABILITY_CLEAR_BODY},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_CHARCADET] =
    {
        .baseHP        = 40,
        .baseAttack    = 50,
        .baseDefense   = 40,
        .baseSpeed     = 35,
        .baseSpAttack  = 50,
        .baseSpDefense = 40,
        .types = { TYPE_FIRE, TYPE_FIRE },
        .catchRate = 90,
        .expYield = 51,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_NONE, ABILITY_FLAME_BODY},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_ARMAROUGE] =
    {
        .baseHP        = 85,
        .baseAttack    = 60,
        .baseDefense   = 100,
        .baseSpeed     = 75,
        .baseSpAttack  = 125,
        .baseSpDefense = 80,
        .types = { TYPE_FIRE, TYPE_PSYCHIC },
        .catchRate = 25,
        .expYield = 263,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_MEGA_LAUNCHER, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CERULEDGE] =
    {
        .baseHP        = 75,
        .baseAttack    = 125,
        .baseDefense   = 80,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 100,
        .types = { TYPE_FIRE, TYPE_GHOST },
        .catchRate = 25,
        .expYield = 263,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 20,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_FLASH_FIRE, ABILITY_SHARPNESS, ABILITY_WEAK_ARMOR},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_TADBULB] =
    {
        .baseHP        = 61,
        .baseAttack    = 31,
        .baseDefense   = 41,
        .baseSpeed     = 45,
        .baseSpAttack  = 59,
        .baseSpDefense = 35,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 190,
        .expYield = 54,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_OWN_TEMPO, ABILITY_STATIC, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_BELLIBOLT] =
    {
        .baseHP        = 109,
        .baseAttack    = 64,
        .baseDefense   = 91,
        .baseSpeed     = 45,
        .baseSpAttack  = 103,
        .baseSpDefense = 83,
        .types = { TYPE_ELECTRIC, TYPE_ELECTRIC },
        .catchRate = 50,
        .expYield = 173,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_WATER_1},
        .abilities = {ABILITY_ELECTROMORPHOSIS, ABILITY_STATIC, ABILITY_DAMP},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_WATTREL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 55,
        .baseSpDefense = 40,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .catchRate = 180,
        .expYield = 56,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_KILOWATTREL] =
    {
        .baseHP        = 70,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 125,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_ELECTRIC, TYPE_FLYING },
        .catchRate = 90,
        .expYield = 172,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FLYING},
        .abilities = {ABILITY_WIND_POWER, ABILITY_VOLT_ABSORB, ABILITY_COMPETITIVE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_MASCHIFF] =
    {
        .baseHP        = 60,
        .baseAttack    = 78,
        .baseDefense   = 60,
        .baseSpeed     = 51,
        .baseSpAttack  = 40,
        .baseSpDefense = 51,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 150,
        .expYield = 68,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_RUN_AWAY, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_MABOSSTIFF] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 90,
        .baseSpeed     = 85,
        .baseSpAttack  = 60,
        .baseSpDefense = 70,
        .types = { TYPE_DARK, TYPE_DARK },
        .catchRate = 75,
        .expYield = 177,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_INTIMIDATE, ABILITY_GUARD_DOG, ABILITY_STAKEOUT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_SHROODLE] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 35,
        .baseSpeed     = 75,
        .baseSpAttack  = 40,
        .baseSpDefense = 35,
        .types = { TYPE_POISON, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 58,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_UNBURDEN, ABILITY_PICKPOCKET, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_GRAFAIAI] =
    {
        .baseHP        = 63,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 110,
        .baseSpAttack  = 80,
        .baseSpDefense = 72,
        .types = { TYPE_POISON, TYPE_NORMAL },
        .catchRate = 90,
        .expYield = 170,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_UNBURDEN, ABILITY_POISON_TOUCH, ABILITY_PRANKSTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BRAMBLIN] =
    {
        .baseHP        = 40,
        .baseAttack    = 65,
        .baseDefense   = 30,
        .baseSpeed     = 60,
        .baseSpAttack  = 45,
        .baseSpDefense = 35,
        .types = { TYPE_GRASS, TYPE_GHOST },
        .catchRate = 190,
        .expYield = 55,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_BRAMBLEGHAST] =
    {
        .baseHP        = 55,
        .baseAttack    = 115,
        .baseDefense   = 70,
        .baseSpeed     = 90,
        .baseSpAttack  = 80,
        .baseSpDefense = 70,
        .types = { TYPE_GRASS, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 168,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_WIND_RIDER, ABILITY_NONE, ABILITY_INFILTRATOR},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_TOEDSCOOL] =
    {
        .baseHP        = 40,
        .baseAttack    = 40,
        .baseDefense   = 35,
        .baseSpeed     = 70,
        .baseSpAttack  = 50,
        .baseSpDefense = 100,
        .types = { TYPE_GROUND, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 67,
        .evYield_SpDefense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_MYCELIUM_MIGHT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TOEDSCRUEL] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 65,
        .baseSpeed     = 100,
        .baseSpAttack  = 80,
        .baseSpDefense = 120,
        .types = { TYPE_GROUND, TYPE_GRASS },
        .catchRate = 90,
        .expYield = 180,
        .evYield_SpDefense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_MYCELIUM_MIGHT, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_KLAWF] =
    {
        .baseHP        = 70,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 75,
        .baseSpAttack  = 35,
        .baseSpDefense = 55,
        .types = { TYPE_ROCK, TYPE_ROCK },
        .catchRate = 120,
        .expYield = 158,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_ANGER_SHELL, ABILITY_SHELL_ARMOR, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_CAPSAKID] =
    {
        .baseHP        = 50,
        .baseAttack    = 62,
        .baseDefense   = 40,
        .baseSpeed     = 50,
        .baseSpAttack  = 62,
        .baseSpDefense = 40,
        .types = { TYPE_GRASS, TYPE_GRASS },
        .catchRate = 190,
        .expYield = 61,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_KLUTZ},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_SCOVILLAIN] =
    {
        .baseHP        = 65,
        .baseAttack    = 108,
        .baseDefense   = 65,
        .baseSpeed     = 75,
        .baseSpAttack  = 108,
        .baseSpDefense = 65,
        .types = { TYPE_GRASS, TYPE_FIRE },
        .catchRate = 75,
        .expYield = 170,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_GRASS, EGG_GROUP_GRASS},
        .abilities = {ABILITY_CHLOROPHYLL, ABILITY_INSOMNIA, ABILITY_MOODY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_RELLOR] =
    {
        .baseHP        = 41,
        .baseAttack    = 50,
        .baseDefense   = 60,
        .baseSpeed     = 30,
        .baseSpAttack  = 31,
        .baseSpDefense = 58,
        .types = { TYPE_BUG, TYPE_BUG },
        .catchRate = 190,
        .expYield = 54,
        .evYield_Defense = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_COMPOUND_EYES, ABILITY_NONE, ABILITY_SHED_SKIN},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_RABSCA] =
    {
        .baseHP        = 75,
        .baseAttack    = 50,
        .baseDefense   = 85,
        .baseSpeed     = 45,
        .baseSpAttack  = 115,
        .baseSpDefense = 100,
        .types = { TYPE_BUG, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 165,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_BUG, EGG_GROUP_BUG},
        .abilities = {ABILITY_SYNCHRONIZE, ABILITY_NONE, ABILITY_TELEPATHY},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_FLITTLE] =
    {
        .baseHP        = 30,
        .baseAttack    = 35,
        .baseDefense   = 30,
        .baseSpeed     = 75,
        .baseSpAttack  = 55,
        .baseSpDefense = 30,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 120,
        .expYield = 51,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_ANTICIPATION, ABILITY_FRISK, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_ESPATHRA] =
    {
        .baseHP        = 95,
        .baseAttack    = 60,
        .baseDefense   = 60,
        .baseSpeed     = 105,
        .baseSpAttack  = 101,
        .baseSpDefense = 60,
        .types = { TYPE_PSYCHIC, TYPE_PSYCHIC },
        .catchRate = 60,
        .expYield = 168,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_OPPORTUNIST, ABILITY_FRISK, ABILITY_SPEED_BOOST},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_TINKATINK] =
    {
        .baseHP        = 50,
        .baseAttack    = 45,
        .baseDefense   = 45,
        .baseSpeed     = 58,
        .baseSpAttack  = 35,
        .baseSpDefense = 64,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 190,
        .expYield = 59,
        .evYield_SpDefense = 1,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TINKATUFF] =
    {
        .baseHP        = 65,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 78,
        .baseSpAttack  = 45,
        .baseSpDefense = 82,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 90,
        .expYield = 133,
        .evYield_SpDefense = 2,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_TINKATON] =
    {
        .baseHP        = 85,
        .baseAttack    = 75,
        .baseDefense   = 77,
        .baseSpeed     = 94,
        .baseSpAttack  = 70,
        .baseSpDefense = 105,
        .types = { TYPE_FAIRY, TYPE_STEEL },
        .catchRate = 45,
        .expYield = 253,
        .evYield_SpDefense = 3,
        .genderRatio = MON_FEMALE,
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FAIRY, EGG_GROUP_FAIRY},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_OWN_TEMPO, ABILITY_PICKPOCKET},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_WIGLETT] =
    {
        .baseHP        = 10,
        .baseAttack    = 55,
        .baseDefense   = 25,
        .baseSpeed     = 95,
        .baseSpAttack  = 35,
        .baseSpDefense = 25,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 255,
        .expYield = 49,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_GOOEY, ABILITY_RATTLED, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_WUGTRIO] =
    {
        .baseHP        = 35,
        .baseAttack    = 100,
        .baseDefense   = 50,
        .baseSpeed     = 120,
        .baseSpAttack  = 50,
        .baseSpDefense = 70,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 50,
        .expYield = 149,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_3, EGG_GROUP_WATER_3},
        .abilities = {ABILITY_GOOEY, ABILITY_TECHNICIAN, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
    },

    [SPECIES_BOMBIRDIER] =
    {
        .baseHP        = 70,
        .baseAttack    = 103,
        .baseDefense   = 85,
        .baseSpeed     = 82,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = { TYPE_FLYING, TYPE_DARK },
        .catchRate = 25,
        .expYield = 243,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_BIG_PECKS, ABILITY_KEEN_EYE, ABILITY_ROCKY_PAYLOAD},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FINIZEN] =
    {
        .baseHP        = 70,
        .baseAttack    = 45,
        .baseDefense   = 40,
        .baseSpeed     = 75,
        .baseSpAttack  = 45,
        .baseSpDefense = 40,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 200,
        .expYield = 63,
        .evYield_Speed = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_WATER_VEIL, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

#define PALAFIN_MISC_INFO                                   \
        .baseHP        = 100,                               \
        .baseSpeed     = 100,                               \
        .types = { TYPE_WATER, TYPE_WATER },                \
        .catchRate = 45,                                    \
        .evYield_HP = 2,                                    \
        .genderRatio = PERCENT_FEMALE(50),                  \
        .eggCycles = 40,                                    \
        .friendship = 50,                                   \
        .growthRate = GROWTH_SLOW,                          \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_WATER_2}, \
        .abilities = {ABILITY_ZERO_TO_HERO, ABILITY_NONE},  \
        .bodyColor = BODY_COLOR_BLUE,                       \
        .noFlip = FALSE

    [SPECIES_PALAFIN] =
    {
        .baseAttack    = 70,
        .baseDefense   = 72,
        .baseSpAttack  = 53,
        .baseSpDefense = 62,
        .expYield = 160,
        PALAFIN_MISC_INFO,
    },

    [SPECIES_PALAFIN_HERO] =
    {
        .baseAttack    = 160,
        .baseDefense   = 97,
        .baseSpAttack  = 106,
        .baseSpDefense = 87,
        .expYield = 228,
        PALAFIN_MISC_INFO,
    },

    [SPECIES_VAROOM] =
    {
        .baseHP        = 45,
        .baseAttack    = 70,
        .baseDefense   = 63,
        .baseSpeed     = 47,
        .baseSpAttack  = 30,
        .baseSpDefense = 45,
        .types = { TYPE_STEEL, TYPE_POISON },
        .catchRate = 190,
        .expYield = 60,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_SLOW_START},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_REVAVROOM] =
    {
        .baseHP        = 80,
        .baseAttack    = 119,
        .baseDefense   = 90,
        .baseSpeed     = 90,
        .baseSpAttack  = 54,
        .baseSpDefense = 67,
        .types = { TYPE_STEEL, TYPE_POISON },
        .catchRate = 75,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_OVERCOAT, ABILITY_NONE, ABILITY_FILTER},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CYCLIZAR] =
    {
        .baseHP        = 70,
        .baseAttack    = 95,
        .baseDefense   = 65,
        .baseSpeed     = 121,
        .baseSpAttack  = 85,
        .baseSpDefense = 65,
        .types = { TYPE_DRAGON, TYPE_NORMAL },
        .catchRate = 190,
        .expYield = 175,
        .evYield_Speed = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SHED_SKIN, ABILITY_NONE, ABILITY_REGENERATOR},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
    },

    [SPECIES_ORTHWORM] =
    {
        .baseHP        = 70,
        .baseAttack    = 85,
        .baseDefense   = 145,
        .baseSpeed     = 65,
        .baseSpAttack  = 60,
        .baseSpDefense = 55,
        .types = { TYPE_STEEL, TYPE_STEEL },
        .catchRate = 25,
        .expYield = 240,
        .evYield_Defense = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 35,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_EARTH_EATER, ABILITY_NONE, ABILITY_SAND_VEIL},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_GLIMMET] =
    {
        .baseHP        = 48,
        .baseAttack    = 35,
        .baseDefense   = 42,
        .baseSpeed     = 60,
        .baseSpAttack  = 105,
        .baseSpDefense = 60,
        .types = { TYPE_ROCK, TYPE_POISON },
        .catchRate = 70,
        .expYield = 70,
        .evYield_SpAttack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TOXIC_DEBRIS, ABILITY_NONE, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GLIMMORA] =
    {
        .baseHP        = 83,
        .baseAttack    = 55,
        .baseDefense   = 90,
        .baseSpeed     = 86,
        .baseSpAttack  = 130,
        .baseSpDefense = 81,
        .types = { TYPE_ROCK, TYPE_POISON },
        .catchRate = 25,
        .expYield = 184,
        .evYield_SpAttack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 30,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_MINERAL, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_TOXIC_DEBRIS, ABILITY_NONE, ABILITY_CORROSION},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

    [SPECIES_GREAVARD] =
    {
        .baseHP        = 50,
        .baseAttack    = 61,
        .baseDefense   = 60,
        .baseSpeed     = 34,
        .baseSpAttack  = 30,
        .baseSpDefense = 55,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 120,
        .expYield = 58,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_PICKUP, ABILITY_NONE, ABILITY_FLUFFY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_HOUNDSTONE] =
    {
        .baseHP        = 72,
        .baseAttack    = 101,
        .baseDefense   = 100,
        .baseSpeed     = 68,
        .baseSpAttack  = 50,
        .baseSpDefense = 97,
        .types = { TYPE_GHOST, TYPE_GHOST },
        .catchRate = 60,
        .expYield = 171,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_SAND_RUSH, ABILITY_NONE, ABILITY_FLUFFY},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_FLAMIGO] =
    {
        .baseHP        = 82,
        .baseAttack    = 115,
        .baseDefense   = 74,
        .baseSpeed     = 90,
        .baseSpAttack  = 75,
        .baseSpDefense = 64,
        .types = { TYPE_FLYING, TYPE_FIGHTING },
        .catchRate = 100,
        .expYield = 175,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FLYING, EGG_GROUP_FLYING},
        .abilities = {ABILITY_SCRAPPY, ABILITY_TANGLED_FEET, ABILITY_COSTAR},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
    },

    [SPECIES_CETODDLE] =
    {
        .baseHP        = 108,
        .baseAttack    = 68,
        .baseDefense   = 45,
        .baseSpeed     = 43,
        .baseSpAttack  = 30,
        .baseSpDefense = 40,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 150,
        .expYield = 67,
        .evYield_HP = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_SNOW_CLOAK, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_CETITAN] =
    {
        .baseHP        = 170,
        .baseAttack    = 113,
        .baseDefense   = 65,
        .baseSpeed     = 73,
        .baseSpAttack  = 45,
        .baseSpDefense = 55,
        .types = { TYPE_ICE, TYPE_ICE },
        .catchRate = 50,
        .expYield = 182,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 25,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_SLOW,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_THICK_FAT, ABILITY_SLUSH_RUSH, ABILITY_SHEER_FORCE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
    },

    [SPECIES_VELUZA] =
    {
        .baseHP        =      90,
        .baseAttack    =  102,
        .baseDefense   = 73,
        .baseSpeed     =   70,
        .baseSpAttack  =   78,
        .baseSpDefense =   65,
        .types = { TYPE_WATER, TYPE_PSYCHIC },
        .catchRate = 100,
        .expYield = 167,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_FAST,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_MOLD_BREAKER, ABILITY_NONE, ABILITY_SHARPNESS},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_DONDOZO] =
    {
        .baseHP        = 150,
        .baseAttack    = 100,
        .baseDefense   = 115,
        .baseSpeed     = 35,
        .baseSpAttack  = 65,
        .baseSpDefense = 65,
        .types = { TYPE_WATER, TYPE_WATER },
        .catchRate = 25,
        .expYield = 265,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2},
        .abilities = {ABILITY_UNAWARE, ABILITY_OBLIVIOUS, ABILITY_WATER_VEIL},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
    },

#define TATSUGIRI_SPECIES_INFO(color) \
    { \
        .baseHP        = 68, \
        .baseAttack    = 50, \
        .baseDefense   = 60, \
        .baseSpeed     = 82, \
        .baseSpAttack  = 120, \
        .baseSpDefense = 95, \
        .types = { TYPE_DRAGON, TYPE_WATER }, \
        .catchRate = 100, \
        .expYield = 166, \
        .evYield_SpAttack = 2, \
        .genderRatio = PERCENT_FEMALE(50), \
        .eggCycles = 35, \
        .friendship = 50, \
        .growthRate = GROWTH_MEDIUM_SLOW, \
        .eggGroups = { EGG_GROUP_WATER_2, EGG_GROUP_WATER_2}, \
        .abilities = {ABILITY_COMMANDER, ABILITY_NONE, ABILITY_STORM_DRAIN}, \
        .bodyColor = color, \
        .noFlip = FALSE, \
    }

    [SPECIES_TATSUGIRI] = TATSUGIRI_SPECIES_INFO(BODY_COLOR_PINK),
    [SPECIES_TATSUGIRI_DROOPY] = TATSUGIRI_SPECIES_INFO(BODY_COLOR_RED),
    [SPECIES_TATSUGIRI_STRETCHY] = TATSUGIRI_SPECIES_INFO(BODY_COLOR_YELLOW),

    [SPECIES_ANNIHILAPE] =
    {
        .baseHP        = 110,
        .baseAttack    = 115,
        .baseDefense   = 85,
        .baseSpeed     = 90,
        .baseSpAttack  = 50,
        .baseSpDefense = 95,
        .types = { TYPE_FIGHTING, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 268,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_VITAL_SPIRIT, ABILITY_INNER_FOCUS, ABILITY_DEFIANT},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_CLODSIRE] =
    {
        .baseHP        = 130,
        .baseAttack    = 75,
        .baseDefense   = 60,
        .baseSpeed     = 20,
        .baseSpAttack  = 45,
        .baseSpDefense = 100,
        .types = { TYPE_POISON, TYPE_GROUND },
        .catchRate = 90,
        .expYield = 151,
        .evYield_HP = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_WATER_1, EGG_GROUP_FIELD},
        .abilities = {ABILITY_POISON_POINT, ABILITY_WATER_ABSORB, ABILITY_UNAWARE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

    [SPECIES_FARIGIRAF] =
    {
        .baseHP        = 120,
        .baseAttack    = 90,
        .baseDefense   = 70,
        .baseSpeed     = 60,
        .baseSpAttack  = 110,
        .baseSpDefense = 70,
        .types = { TYPE_NORMAL, TYPE_PSYCHIC },
        .catchRate = 45,
        .expYield = 260,
        .evYield_HP = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD},
        .abilities = {ABILITY_CUD_CHEW, ABILITY_ARMOR_TAIL, ABILITY_SAP_SIPPER},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
    },

#define DUDUNSPARCE_SPECIES_INFO \
    { \
        .baseHP        = 125, \
        .baseAttack    = 100, \
        .baseDefense   = 80, \
        .baseSpeed     = 55, \
        .baseSpAttack  = 85, \
        .baseSpDefense = 75, \
        .types = { TYPE_NORMAL, TYPE_NORMAL }, \
        .catchRate = 45, \
        .expYield = 182, \
        .evYield_HP = 2, \
        .genderRatio = PERCENT_FEMALE(50), \
        .eggCycles = 20, \
        .friendship = 50, \
        .growthRate = GROWTH_MEDIUM_FAST, \
        .eggGroups = { EGG_GROUP_FIELD, EGG_GROUP_FIELD}, \
        .abilities = {ABILITY_SERENE_GRACE, ABILITY_RUN_AWAY, ABILITY_RATTLED}, \
        .bodyColor = BODY_COLOR_YELLOW, \
        .noFlip = FALSE, \
    }

    [SPECIES_DUDUNSPARCE] = DUDUNSPARCE_SPECIES_INFO,
    [SPECIES_DUDUNSPARCE_THREE_SEGMENT] = DUDUNSPARCE_SPECIES_INFO,

    [SPECIES_KINGAMBIT] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,
        .baseDefense   = 120,
        .baseSpeed     = 50,
        .baseSpAttack  = 60,
        .baseSpDefense = 85,
        .types = { TYPE_DARK, TYPE_STEEL },
        .catchRate = 25,
        .expYield = 275,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 20,
        .friendship = 50,
        .growthRate = GROWTH_MEDIUM_FAST,
        .eggGroups = { EGG_GROUP_HUMAN_LIKE, EGG_GROUP_HUMAN_LIKE},
        .abilities = {ABILITY_DEFIANT, ABILITY_SUPREME_OVERLORD, ABILITY_PRESSURE},
        .bodyColor = BODY_COLOR_BLACK,
        .noFlip = FALSE,
    },

    [SPECIES_GREAT_TUSK] =
    {
        .baseHP        = 115,
        .baseAttack    = 131,
        .baseDefense   = 131,
        .baseSpeed     = 87,
        .baseSpAttack  = 53,
        .baseSpDefense = 53,
        .types = { TYPE_GROUND, TYPE_FIGHTING },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PURPLE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_SCREAM_TAIL] =
    {
        .baseHP        = 115,
        .baseAttack    = 65,
        .baseDefense   = 99,
        .baseSpeed     = 111,
        .baseSpAttack  = 65,
        .baseSpDefense = 115,
        .types = { TYPE_FAIRY, TYPE_PSYCHIC },
        .catchRate = 50,
        .expYield = 285,
        .evYield_HP = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_PINK,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_BRUTE_BONNET] =
    {
        .baseHP        = 111,
        .baseAttack    = 127,
        .baseDefense   = 99,
        .baseSpeed     = 55,
        .baseSpAttack  = 79,
        .baseSpDefense = 99,
        .types = { TYPE_GRASS, TYPE_DARK },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_FLUTTER_MANE] =
    {
        .baseHP        = 55,
        .baseAttack    = 55,
        .baseDefense   = 55,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 135,
        .types = { TYPE_GHOST, TYPE_FAIRY },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Speed = 1,
        .evYield_SpAttack = 1,
        .evYield_SpDefense = 1,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_SLITHER_WING] =
    {
        .baseHP        = 85,
        .baseAttack    = 135,
        .baseDefense   = 79,
        .baseSpeed     = 81,
        .baseSpAttack  = 85,
        .baseSpDefense = 105,
        .types = { TYPE_BUG, TYPE_FIGHTING },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_SANDY_SHOCKS] =
    {
        .baseHP        = 85,
        .baseAttack    = 81,
        .baseDefense   = 97,
        .baseSpeed     = 101,
        .baseSpAttack  = 121,
        .baseSpDefense = 85,
        .types = { TYPE_ELECTRIC, TYPE_GROUND },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_TREADS] =
    {
        .baseHP        = 90,
        .baseAttack    = 112,
        .baseDefense   = 120,
        .baseSpeed     = 106,
        .baseSpAttack  = 72,
        .baseSpDefense = 70,
        .types = { TYPE_GROUND, TYPE_STEEL },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_BUNDLE] =
    {
        .baseHP        = 56,
        .baseAttack    = 80,
        .baseDefense   = 114,
        .baseSpeed     = 136,
        .baseSpAttack  = 124,
        .baseSpDefense = 60,
        .types = { TYPE_ICE, TYPE_WATER },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_HANDS] =
    {
        .baseHP        = 154,
        .baseAttack    = 140,
        .baseDefense   = 108,
        .baseSpeed     = 50,
        .baseSpAttack  = 50,
        .baseSpDefense = 68,
        .types = { TYPE_FIGHTING, TYPE_ELECTRIC },
        .catchRate = 50,
        .expYield = 285,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_JUGULIS] =
    {
        .baseHP        = 94,
        .baseAttack    = 80,
        .baseDefense   = 86,
        .baseSpeed     = 108,
        .baseSpAttack  = 122,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_FLYING },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_MOTH] =
    {
        .baseHP        = 80,
        .baseAttack    = 70,
        .baseDefense   = 60,
        .baseSpeed     = 110,
        .baseSpAttack  = 140,
        .baseSpDefense = 110,
        .types = { TYPE_FIRE, TYPE_POISON },
        .catchRate = 30,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_THORNS] =
    {
        .baseHP        = 100,
        .baseAttack    = 134,
        .baseDefense   = 110,
        .baseSpeed     = 72,
        .baseSpAttack  = 70,
        .baseSpDefense = 84,
        .types = { TYPE_ROCK, TYPE_ELECTRIC },
        .catchRate = 30,
        .expYield = 285,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_FRIGIBAX] =
    {
        .baseHP        = 65,
        .baseAttack    = 75,
        .baseDefense   = 45,
        .baseSpeed     = 55,
        .baseSpAttack  = 35,
        .baseSpDefense = 45,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 45,
        .expYield = 64,
        .evYield_Attack = 1,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_ARCTIBAX] =
    {
        .baseHP        = 90,
        .baseAttack    = 95,
        .baseDefense   = 66,
        .baseSpeed     = 62,
        .baseSpAttack  = 45,
        .baseSpDefense = 65,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 25,
        .expYield = 148,
        .evYield_Attack = 2,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

    [SPECIES_BAXCALIBUR] =
    {
        .baseHP        = 115,
        .baseAttack    = 145,
        .baseDefense   = 92,
        .baseSpeed     = 87,
        .baseSpAttack  = 75,
        .baseSpDefense = 86,
        .types = { TYPE_DRAGON, TYPE_ICE },
        .catchRate = 10,
        .expYield = 300,
        .evYield_Attack = 3,
        .genderRatio = PERCENT_FEMALE(50),
        .eggCycles = 40,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_DRAGON, EGG_GROUP_MINERAL},
        .abilities = {ABILITY_THERMAL_EXCHANGE, ABILITY_NONE, ABILITY_ICE_BODY},
        .bodyColor = BODY_COLOR_GRAY,
        .noFlip = FALSE,
    },

#define GIMMIGHOUL_MISC_INFO \
        .types = { TYPE_GHOST, TYPE_GHOST }, \
        .catchRate = 45, \
        .expYield = 60, \
        .evYield_SpAttack = 1, \
        .genderRatio = MON_GENDERLESS, \
        .eggCycles = 50, \
        .friendship = 50, \
        .growthRate = GROWTH_SLOW, \
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED}, \
        .noFlip = FALSE

    [SPECIES_GIMMIGHOUL] =
    {
        .baseHP        = 45, \
        .baseAttack    = 30, \
        .baseDefense   = 70, \
        .baseSpeed     = 10, \
        .baseSpAttack  = 75, \
        .baseSpDefense = 70, \
        .abilities = {ABILITY_RATTLED, ABILITY_NONE}, \
        .bodyColor = BODY_COLOR_BROWN, \
        GIMMIGHOUL_MISC_INFO
    },

    [SPECIES_GIMMIGHOUL_ROAMING] =
    {
        .baseHP        = 45, \
        .baseAttack    = 30, \
        .baseDefense   = 25, \
        .baseSpeed     = 80, \
        .baseSpAttack  = 75, \
        .baseSpDefense = 45, \
        .abilities = {ABILITY_RUN_AWAY, ABILITY_NONE}, \
        .bodyColor = BODY_COLOR_BLUE, \
        GIMMIGHOUL_MISC_INFO
    },

    [SPECIES_GHOLDENGO] =
    {
        .baseHP        = 87,
        .baseAttack    = 60,
        .baseDefense   = 95,
        .baseSpeed     = 84,
        .baseSpAttack  = 133,
        .baseSpDefense = 91,
        .types = { TYPE_STEEL, TYPE_GHOST },
        .catchRate = 45,
        .expYield = 275,
        .evYield_SpAttack = 2,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 50,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_GOOD_AS_GOLD, ABILITY_NONE},
        .bodyColor = BODY_COLOR_YELLOW,
        .noFlip = FALSE,
    },

    [SPECIES_WO_CHIEN] =
    {
        .baseHP        = 85,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 70,
        .baseSpAttack  = 95,
        .baseSpDefense = 135,
        .types = { TYPE_DARK, TYPE_GRASS },
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpDefense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_TABLETS_OF_RUIN, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_CHIEN_PAO] =
    {
        .baseHP        = 80,
        .baseAttack    = 120,
        .baseDefense   = 80,
        .baseSpeed     = 135,
        .baseSpAttack  = 90,
        .baseSpDefense = 65,
        .types = { TYPE_DARK, TYPE_ICE },
        .catchRate = 6,
        .expYield = 285,
        .evYield_Speed = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_SWORD_OF_RUIN, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_TING_LU] =
    {
        .baseHP        = 155,
        .baseAttack    = 110,
        .baseDefense   = 125,
        .baseSpeed     = 45,
        .baseSpAttack  = 55,
        .baseSpDefense = 80,
        .types = { TYPE_DARK, TYPE_GROUND },
        .catchRate = 6,
        .expYield = 285,
        .evYield_Defense = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_VESSEL_OF_RUIN, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BROWN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_CHI_YU] =
    {
        .baseHP        = 55,
        .baseAttack    = 80,
        .baseDefense   = 80,
        .baseSpeed     = 100,
        .baseSpAttack  = 135,
        .baseSpDefense = 120,
        .types = { TYPE_DARK, TYPE_FIRE },
        .catchRate = 6,
        .expYield = 285,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_BEADS_OF_RUIN, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY,
    },

    [SPECIES_ROARING_MOON] =
    {
        .baseHP        = 105,
        .baseAttack    = 139,
        .baseDefense   = 71,
        .baseSpeed     = 119,
        .baseSpAttack  = 55,
        .baseSpDefense = 101,
        .types = { TYPE_DRAGON, TYPE_DARK },
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_VALIANT] =
    {
        .baseHP        = 74,
        .baseAttack    = 130,
        .baseDefense   = 90,
        .baseSpeed     = 116,
        .baseSpAttack  = 120,
        .baseSpDefense = 60,
        .types = { TYPE_FAIRY, TYPE_FIGHTING },
        .catchRate = 10,
        .expYield = 295,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_WHITE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_KORAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 135,
        .baseDefense   = 115,
        .baseSpeed     = 135,
        .baseSpAttack  = 85,
        .baseSpDefense = 100,
        .types = { TYPE_FIGHTING, TYPE_DRAGON },
        .catchRate = 3,
        .expYield = 335,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_ORICHALCUM_PULSE, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_RED,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_PARADOX,
    },

    [SPECIES_MIRAIDON] =
    {
        .baseHP        = 100,
        .baseAttack    = 85,
        .baseDefense   = 100,
        .baseSpeed     = 135,
        .baseSpAttack  = 135,
        .baseSpDefense = 115,
        .types = { TYPE_ELECTRIC, TYPE_DRAGON },
        .catchRate = 3,
        .expYield = 335,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_HADRON_ENGINE, ABILITY_NONE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_LEGENDARY | SPECIES_FLAG_PARADOX,
    },

    [SPECIES_WALKING_WAKE] =
    {
        .baseHP        = 99,
        .baseAttack    = 83,
        .baseDefense   = 91,
        .baseSpeed     = 109,
        .baseSpAttack  = 125,
        .baseSpDefense = 83,
        .types = { TYPE_WATER, TYPE_DRAGON },
        .catchRate = 5,
        .expYield = 295,
        .evYield_SpAttack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_PROTOSYNTHESIS, ABILITY_NONE},
        .bodyColor = BODY_COLOR_BLUE,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },

    [SPECIES_IRON_LEAVES] =
    {
        .baseHP        = 90,
        .baseAttack    = 130,
        .baseDefense   = 88,
        .baseSpeed     = 104,
        .baseSpAttack  = 70,
        .baseSpDefense = 108,
        .types = { TYPE_GRASS, TYPE_PSYCHIC },
        .catchRate = 5,
        .expYield = 295,
        .evYield_Attack = 3,
        .genderRatio = MON_GENDERLESS,
        .eggCycles = 50,
        .friendship = 0,
        .growthRate = GROWTH_SLOW,
        .eggGroups = { EGG_GROUP_UNDISCOVERED, EGG_GROUP_UNDISCOVERED},
        .abilities = {ABILITY_QUARK_DRIVE, ABILITY_NONE},
        .bodyColor = BODY_COLOR_GREEN,
        .noFlip = FALSE,
        .flags = SPECIES_FLAG_PARADOX,
    },
#endif
};
