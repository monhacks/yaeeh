#ifndef GUARD_CONSTANTS_ITEMS_H
#define GUARD_CONSTANTS_ITEMS_H

#define ITEM_NONE 0

// Poké Balls
#define ITEM_POKE_BALL 1
#define ITEM_GREAT_BALL 2
#define ITEM_ULTRA_BALL 3
#define ITEM_MASTER_BALL 4
#define ITEM_PREMIER_BALL 5
#define ITEM_HEAL_BALL 6
#define ITEM_NET_BALL 7
#define ITEM_NEST_BALL 8
#define ITEM_DIVE_BALL 9
#define ITEM_DUSK_BALL 10
#define ITEM_TIMER_BALL 11
#define ITEM_QUICK_BALL 12
#define ITEM_REPEAT_BALL 13
#define ITEM_LUXURY_BALL 14
#define ITEM_LEVEL_BALL 15
#define ITEM_LURE_BALL 16
#define ITEM_MOON_BALL 17
#define ITEM_FRIEND_BALL 18
#define ITEM_LOVE_BALL 19
#define ITEM_FAST_BALL 20
#define ITEM_HEAVY_BALL 21
#define ITEM_DREAM_BALL 22
#define ITEM_SAFARI_BALL 23
#define ITEM_SPORT_BALL 24
#define ITEM_PARK_BALL 25
#define ITEM_BEAST_BALL 26
#define ITEM_CHERISH_BALL 27

// Note: If moving ball IDs around, updating FIRST_BALL/LAST_BALL is not sufficient
//       Several places expect the ball IDs to be first and contiguous (e.g. MON_DATA_POKEBALL)
//       If adding new balls, it's easiest to insert them after the last ball and increment the below IDs (and removing ITEM_034 for example)
#define FIRST_BALL ITEM_POKE_BALL
#define LAST_BALL  ITEM_CHERISH_BALL

// Medicine
#define ITEM_POTION 28
#define ITEM_SUPER_POTION 29
#define ITEM_HYPER_POTION 30
#define ITEM_MAX_POTION 31
#define ITEM_FULL_RESTORE 32
#define ITEM_REVIVE 33
#define ITEM_MAX_REVIVE 34
#define ITEM_FRESH_WATER 35
#define ITEM_SODA_POP 36
#define ITEM_LEMONADE 37
#define ITEM_MOOMOO_MILK 38
#define ITEM_ENERGY_POWDER 39
#define ITEM_ENERGY_ROOT 40
#define ITEM_HEAL_POWDER 41
#define ITEM_REVIVAL_HERB 42
#define ITEM_ANTIDOTE 43
#define ITEM_PARALYZE_HEAL 44
#define ITEM_BURN_HEAL 45
#define ITEM_ICE_HEAL 46
#define ITEM_AWAKENING 47
#define ITEM_FULL_HEAL 48
#define ITEM_ETHER 49
#define ITEM_MAX_ETHER 50
#define ITEM_ELIXIR 51
#define ITEM_MAX_ELIXIR 52
#define ITEM_BERRY_JUICE 53
#define ITEM_SACRED_ASH 54
#define ITEM_SWEET_HEART 55
#define ITEM_MAX_HONEY 56

// Regional Specialties
#define ITEM_PEWTER_CRUNCHIES 57
#define ITEM_RAGE_CANDY_BAR 58
#define ITEM_LAVA_COOKIE 59
#define ITEM_OLD_GATEAU 60
#define ITEM_CASTELIACONE 61
#define ITEM_LUMIOSE_GALETTE 62
#define ITEM_SHALOUR_SABLE 63
#define ITEM_BIG_MALASADA 64

// Vitamins
#define ITEM_HP_UP 65
#define ITEM_PROTEIN 66
#define ITEM_IRON 67
#define ITEM_CALCIUM 68
#define ITEM_ZINC 69
#define ITEM_CARBOS 70
#define ITEM_PP_UP 71
#define ITEM_PP_MAX 72

// EV Feathers
#define ITEM_HEALTH_FEATHER 73
#define ITEM_MUSCLE_FEATHER 74
#define ITEM_RESIST_FEATHER 75
#define ITEM_GENIUS_FEATHER 76
#define ITEM_CLEVER_FEATHER 77
#define ITEM_SWIFT_FEATHER 78

// Ability Modifiers
#define ITEM_ABILITY_CAPSULE 79
#define ITEM_ABILITY_PATCH 80

// Mints
#define ITEM_LONELY_MINT 81
#define ITEM_ADAMANT_MINT 82
#define ITEM_NAUGHTY_MINT 83
#define ITEM_BRAVE_MINT 84
#define ITEM_BOLD_MINT 85
#define ITEM_IMPISH_MINT 86
#define ITEM_LAX_MINT 87
#define ITEM_RELAXED_MINT 88
#define ITEM_MODEST_MINT 89
#define ITEM_MILD_MINT 90
#define ITEM_RASH_MINT 91
#define ITEM_QUIET_MINT 92
#define ITEM_CALM_MINT 93
#define ITEM_GENTLE_MINT 94
#define ITEM_CAREFUL_MINT 95
#define ITEM_SASSY_MINT 96
#define ITEM_TIMID_MINT 97
#define ITEM_HASTY_MINT 98
#define ITEM_JOLLY_MINT 99
#define ITEM_NAIVE_MINT 100
#define ITEM_SERIOUS_MINT 101

// Candy
#define ITEM_RARE_CANDY 102
#define ITEM_EXP_CANDY_XS 103
#define ITEM_EXP_CANDY_S 104
#define ITEM_EXP_CANDY_M 105
#define ITEM_EXP_CANDY_L 106
#define ITEM_EXP_CANDY_XL 107
#define ITEM_DYNAMAX_CANDY 108

// Medicinal Flutes
#define ITEM_BLUE_FLUTE 109
#define ITEM_YELLOW_FLUTE 110
#define ITEM_RED_FLUTE 111

// Encounter-modifying Flutes
#define ITEM_BLACK_FLUTE 112
#define ITEM_WHITE_FLUTE 113

// Encounter Modifiers
#define ITEM_REPEL 114
#define ITEM_SUPER_REPEL 115
#define ITEM_MAX_REPEL 116
#define ITEM_LURE 117
#define ITEM_SUPER_LURE 118
#define ITEM_MAX_LURE 119

#define ITEM_ESCAPE_ROPE 120

// X Items
#define ITEM_X_ATTACK 121
#define ITEM_X_DEFENSE 122
#define ITEM_X_SP_ATK 123
#define ITEM_X_SP_DEF 124
#define ITEM_X_SPEED 125
#define ITEM_X_ACCURACY 126

#define ITEM_DIRE_HIT 127
#define ITEM_GUARD_SPEC 128

// Escape Items
#define ITEM_POKE_DOLL 129
#define ITEM_FLUFFY_TAIL 130
#define ITEM_POKE_TOY 131

#define ITEM_MAX_MUSHROOMS 132

// Treasures
#define ITEM_BOTTLE_CAP 133
#define ITEM_GOLD_BOTTLE_CAP 134
#define ITEM_NUGGET 135
#define ITEM_BIG_NUGGET 136
#define ITEM_TINY_MUSHROOM 137
#define ITEM_BIG_MUSHROOM 138
#define ITEM_BALM_MUSHROOM 139
#define ITEM_PEARL 140
#define ITEM_BIG_PEARL 141
#define ITEM_PEARL_STRING 142
#define ITEM_STARDUST 143
#define ITEM_STAR_PIECE 144
#define ITEM_COMET_SHARD 145
#define ITEM_SHOAL_SALT 146
#define ITEM_SHOAL_SHELL 147
#define ITEM_RED_SHARD 148
#define ITEM_BLUE_SHARD 149
#define ITEM_YELLOW_SHARD 150
#define ITEM_GREEN_SHARD 151
#define ITEM_HEART_SCALE 152
#define ITEM_HONEY 153
#define ITEM_RARE_BONE 154
#define ITEM_ODD_KEYSTONE 155
#define ITEM_PRETTY_FEATHER 156
#define ITEM_RELIC_COPPER 157
#define ITEM_RELIC_SILVER 158
#define ITEM_RELIC_GOLD 159
#define ITEM_RELIC_VASE 160
#define ITEM_RELIC_BAND 161
#define ITEM_RELIC_STATUE 162
#define ITEM_RELIC_CROWN 163
#define ITEM_STRANGE_SOUVENIR 164

// Fossils
#define ITEM_HELIX_FOSSIL 165
#define ITEM_DOME_FOSSIL 166
#define ITEM_OLD_AMBER 167
#define ITEM_ROOT_FOSSIL 168
#define ITEM_CLAW_FOSSIL 169
#define ITEM_ARMOR_FOSSIL 170
#define ITEM_SKULL_FOSSIL 171
#define ITEM_COVER_FOSSIL 172
#define ITEM_PLUME_FOSSIL 173
#define ITEM_JAW_FOSSIL 174
#define ITEM_SAIL_FOSSIL 175
#define ITEM_FOSSILIZED_BIRD 176
#define ITEM_FOSSILIZED_FISH 177
#define ITEM_FOSSILIZED_DRAKE 178
#define ITEM_FOSSILIZED_DINO 179

// Mulch
#define ITEM_GROWTH_MULCH 180
#define ITEM_DAMP_MULCH 181
#define ITEM_STABLE_MULCH 182
#define ITEM_GOOEY_MULCH 183
#define ITEM_RICH_MULCH 184
#define ITEM_SURPRISE_MULCH 185
#define ITEM_BOOST_MULCH 186
#define ITEM_AMAZE_MULCH 187

// Apricorns
#define ITEM_RED_APRICORN 188
#define ITEM_BLUE_APRICORN 189
#define ITEM_YELLOW_APRICORN 190
#define ITEM_GREEN_APRICORN 191
#define ITEM_PINK_APRICORN 192
#define ITEM_WHITE_APRICORN 193
#define ITEM_BLACK_APRICORN 194

#define ITEM_WISHING_PIECE 195
#define ITEM_GALARICA_TWIG 196
#define ITEM_ARMORITE_ORE 197
#define ITEM_DYNITE_ORE 198

// Mail
#define ITEM_ORANGE_MAIL 199
#define ITEM_HARBOR_MAIL 200
#define ITEM_GLITTER_MAIL 201
#define ITEM_MECH_MAIL 202
#define ITEM_WOOD_MAIL 203
#define ITEM_WAVE_MAIL 204
#define ITEM_BEAD_MAIL 205
#define ITEM_SHADOW_MAIL 206
#define ITEM_TROPIC_MAIL 207
#define ITEM_DREAM_MAIL 208
#define ITEM_FAB_MAIL 209
#define ITEM_RETRO_MAIL 210

#define FIRST_MAIL_INDEX ITEM_ORANGE_MAIL

// Evolution Items
#define ITEM_FIRE_STONE 211
#define ITEM_WATER_STONE 212
#define ITEM_THUNDER_STONE 213
#define ITEM_LEAF_STONE 214
#define ITEM_ICE_STONE 215
#define ITEM_SUN_STONE 216
#define ITEM_MOON_STONE 217
#define ITEM_SHINY_STONE 218
#define ITEM_DUSK_STONE 219
#define ITEM_DAWN_STONE 220
#define ITEM_SWEET_APPLE 221
#define ITEM_TART_APPLE 222
#define ITEM_CRACKED_POT 223
#define ITEM_CHIPPED_POT 224
#define ITEM_GALARICA_CUFF 225
#define ITEM_GALARICA_WREATH 226
#define ITEM_DRAGON_SCALE 227
#define ITEM_UPGRADE 228
#define ITEM_PROTECTOR 229
#define ITEM_ELECTIRIZER 230
#define ITEM_MAGMARIZER 231
#define ITEM_DUBIOUS_DISC 232
#define ITEM_REAPER_CLOTH 233
#define ITEM_PRISM_SCALE 234
#define ITEM_WHIPPED_DREAM 235
#define ITEM_SACHET 236
#define ITEM_OVAL_STONE 237
#define ITEM_STRAWBERRY_SWEET 238
#define ITEM_LOVE_SWEET 239
#define ITEM_BERRY_SWEET 240
#define ITEM_CLOVER_SWEET 241
#define ITEM_FLOWER_SWEET 242
#define ITEM_STAR_SWEET 243
#define ITEM_RIBBON_SWEET 244

#define ITEM_EVERSTONE 245

// Nectars
#define ITEM_RED_NECTAR 246
#define ITEM_YELLOW_NECTAR 247
#define ITEM_PINK_NECTAR 248
#define ITEM_PURPLE_NECTAR 249

// Plates
#define ITEM_FLAME_PLATE 250
#define ITEM_SPLASH_PLATE 251
#define ITEM_ZAP_PLATE 252
#define ITEM_MEADOW_PLATE 253
#define ITEM_ICICLE_PLATE 254
#define ITEM_FIST_PLATE 255
#define ITEM_TOXIC_PLATE 256
#define ITEM_EARTH_PLATE 257
#define ITEM_SKY_PLATE 258
#define ITEM_MIND_PLATE 259
#define ITEM_INSECT_PLATE 260
#define ITEM_STONE_PLATE 261
#define ITEM_SPOOKY_PLATE 262
#define ITEM_DRACO_PLATE 263
#define ITEM_DREAD_PLATE 264
#define ITEM_IRON_PLATE 265
#define ITEM_PIXIE_PLATE 266

// Drives
#define ITEM_DOUSE_DRIVE 267
#define ITEM_SHOCK_DRIVE 268
#define ITEM_BURN_DRIVE 269
#define ITEM_CHILL_DRIVE 270

// Memories
#define ITEM_FIRE_MEMORY 271
#define ITEM_WATER_MEMORY 272
#define ITEM_ELECTRIC_MEMORY 273
#define ITEM_GRASS_MEMORY 274
#define ITEM_ICE_MEMORY 275
#define ITEM_FIGHTING_MEMORY 276
#define ITEM_POISON_MEMORY 277
#define ITEM_GROUND_MEMORY 278
#define ITEM_FLYING_MEMORY 279
#define ITEM_PSYCHIC_MEMORY 280
#define ITEM_BUG_MEMORY 281
#define ITEM_ROCK_MEMORY 282
#define ITEM_GHOST_MEMORY 283
#define ITEM_DRAGON_MEMORY 284
#define ITEM_DARK_MEMORY 285
#define ITEM_STEEL_MEMORY 286
#define ITEM_FAIRY_MEMORY 287

#define ITEM_RUSTED_SWORD 288
#define ITEM_RUSTED_SHIELD 289

// Colored Orbs
#define ITEM_RED_ORB 290
#define ITEM_BLUE_ORB 291

// Mega Stones
#define ITEM_VENUSAURITE 292
#define ITEM_CHARIZARDITE_X 293
#define ITEM_CHARIZARDITE_Y 294
#define ITEM_BLASTOISINITE 295
#define ITEM_BEEDRILLITE 296
#define ITEM_PIDGEOTITE 297
#define ITEM_ALAKAZITE 298
#define ITEM_SLOWBRONITE 299
#define ITEM_GENGARITE 300
#define ITEM_KANGASKHANITE 301
#define ITEM_PINSIRITE 302
#define ITEM_GYARADOSITE 303
#define ITEM_AERODACTYLITE 304
#define ITEM_MEWTWONITE_X 305
#define ITEM_MEWTWONITE_Y 306
#define ITEM_AMPHAROSITE 307
#define ITEM_STEELIXITE 308
#define ITEM_SCIZORITE 309
#define ITEM_HERACRONITE 310
#define ITEM_HOUNDOOMINITE 311
#define ITEM_TYRANITARITE 312
#define ITEM_SCEPTILITE 313
#define ITEM_BLAZIKENITE 314
#define ITEM_SWAMPERTITE 315
#define ITEM_GARDEVOIRITE 316
#define ITEM_SABLENITE 317
#define ITEM_MAWILITE 318
#define ITEM_AGGRONITE 319
#define ITEM_MEDICHAMITE 320
#define ITEM_MANECTITE 321
#define ITEM_SHARPEDONITE 322
#define ITEM_CAMERUPTITE 323
#define ITEM_ALTARIANITE 324
#define ITEM_BANETTITE 325
#define ITEM_ABSOLITE 326
#define ITEM_GLALITITE 327
#define ITEM_SALAMENCITE 328
#define ITEM_METAGROSSITE 329
#define ITEM_LATIASITE 330
#define ITEM_LATIOSITE 331
#define ITEM_LOPUNNITE 332
#define ITEM_GARCHOMPITE 333
#define ITEM_LUCARIONITE 334
#define ITEM_ABOMASITE 335
#define ITEM_GALLADITE 336
#define ITEM_AUDINITE 337
#define ITEM_DIANCITE 338

// Gems
#define ITEM_NORMAL_GEM 339
#define ITEM_FIRE_GEM 340
#define ITEM_WATER_GEM 341
#define ITEM_ELECTRIC_GEM 342
#define ITEM_GRASS_GEM 343
#define ITEM_ICE_GEM 344
#define ITEM_FIGHTING_GEM 345
#define ITEM_POISON_GEM 346
#define ITEM_GROUND_GEM 347
#define ITEM_FLYING_GEM 348
#define ITEM_PSYCHIC_GEM 349
#define ITEM_BUG_GEM 350
#define ITEM_ROCK_GEM 351
#define ITEM_GHOST_GEM 352
#define ITEM_DRAGON_GEM 353
#define ITEM_DARK_GEM 354
#define ITEM_STEEL_GEM 355
#define ITEM_FAIRY_GEM 356

// Z-Crystals
#define ITEM_NORMALIUM_Z 357
#define ITEM_FIRIUM_Z 358
#define ITEM_WATERIUM_Z 359
#define ITEM_ELECTRIUM_Z 360
#define ITEM_GRASSIUM_Z 361
#define ITEM_ICIUM_Z 362
#define ITEM_FIGHTINIUM_Z 363
#define ITEM_POISONIUM_Z 364
#define ITEM_GROUNDIUM_Z 365
#define ITEM_FLYINIUM_Z 366
#define ITEM_PSYCHIUM_Z 367
#define ITEM_BUGINIUM_Z 368
#define ITEM_ROCKIUM_Z 369
#define ITEM_GHOSTIUM_Z 370
#define ITEM_DRAGONIUM_Z 371
#define ITEM_DARKINIUM_Z 372
#define ITEM_STEELIUM_Z 373
#define ITEM_FAIRIUM_Z 374
#define ITEM_PIKANIUM_Z 375
#define ITEM_EEVIUM_Z 376
#define ITEM_SNORLIUM_Z 377
#define ITEM_MEWNIUM_Z 378
#define ITEM_DECIDIUM_Z 379
#define ITEM_INCINIUM_Z 380
#define ITEM_PRIMARIUM_Z 381
#define ITEM_LYCANIUM_Z 382
#define ITEM_MIMIKIUM_Z 383
#define ITEM_KOMMONIUM_Z 384
#define ITEM_TAPUNIUM_Z 385
#define ITEM_SOLGANIUM_Z 386
#define ITEM_LUNALIUM_Z 387
#define ITEM_MARSHADIUM_Z 388
#define ITEM_ALORAICHIUM_Z 389
#define ITEM_PIKASHUNIUM_Z 390
#define ITEM_ULTRANECROZIUM_Z 391

// Species-specific Held Items
#define ITEM_LIGHT_BALL 392
#define ITEM_LEEK 393
#define ITEM_THICK_CLUB 394
#define ITEM_LUCKY_PUNCH 395
#define ITEM_METAL_POWDER 396
#define ITEM_QUICK_POWDER 397
#define ITEM_DEEP_SEA_SCALE 398
#define ITEM_DEEP_SEA_TOOTH 399
#define ITEM_SOUL_DEW 400
#define ITEM_ADAMANT_ORB 401
#define ITEM_LUSTROUS_ORB 402
#define ITEM_GRISEOUS_ORB 403

// Incenses
#define ITEM_SEA_INCENSE 404
#define ITEM_LAX_INCENSE 405
#define ITEM_ODD_INCENSE 406
#define ITEM_ROCK_INCENSE 407
#define ITEM_FULL_INCENSE 408
#define ITEM_WAVE_INCENSE 409
#define ITEM_ROSE_INCENSE 410
#define ITEM_LUCK_INCENSE 411
#define ITEM_PURE_INCENSE 412

// Contest Scarves
#define ITEM_RED_SCARF 413
#define ITEM_BLUE_SCARF 414
#define ITEM_PINK_SCARF 415
#define ITEM_GREEN_SCARF 416
#define ITEM_YELLOW_SCARF 417

// EV Gain Modifiers
#define ITEM_MACHO_BRACE 418
#define ITEM_POWER_WEIGHT 419
#define ITEM_POWER_BRACER 420
#define ITEM_POWER_BELT 421
#define ITEM_POWER_LENS 422
#define ITEM_POWER_BAND 423
#define ITEM_POWER_ANKLET 424

// Type-boosting Held Items
#define ITEM_SILK_SCARF 425
#define ITEM_CHARCOAL 426
#define ITEM_MYSTIC_WATER 427
#define ITEM_MAGNET 428
#define ITEM_MIRACLE_SEED 429
#define ITEM_NEVER_MELT_ICE 430
#define ITEM_BLACK_BELT 431
#define ITEM_POISON_BARB 432
#define ITEM_SOFT_SAND 433
#define ITEM_SHARP_BEAK 434
#define ITEM_TWISTED_SPOON 435
#define ITEM_SILVER_POWDER 436
#define ITEM_HARD_STONE 437
#define ITEM_SPELL_TAG 438
#define ITEM_DRAGON_FANG 439
#define ITEM_BLACK_GLASSES 440
#define ITEM_METAL_COAT 441

// Choice Items
#define ITEM_CHOICE_BAND 442
#define ITEM_CHOICE_SPECS 443
#define ITEM_CHOICE_SCARF 444

// Status Orbs
#define ITEM_FLAME_ORB 445
#define ITEM_TOXIC_ORB 446

// Weather Rocks
#define ITEM_DAMP_ROCK 447
#define ITEM_HEAT_ROCK 448
#define ITEM_SMOOTH_ROCK 449
#define ITEM_ICY_ROCK 450

// Terrain Seeds
#define ITEM_ELECTRIC_SEED 451
#define ITEM_PSYCHIC_SEED 452
#define ITEM_MISTY_SEED 453
#define ITEM_GRASSY_SEED 454

// Type-activated Stat Modifiers
#define ITEM_ABSORB_BULB 455
#define ITEM_CELL_BATTERY 456
#define ITEM_LUMINOUS_MOSS 457
#define ITEM_SNOWBALL 458

// Misc. Held Items
#define ITEM_BRIGHT_POWDER 459
#define ITEM_WHITE_HERB 460
#define ITEM_EXP_SHARE 461
#define ITEM_QUICK_CLAW 462
#define ITEM_SOOTHE_BELL 463
#define ITEM_MENTAL_HERB 464
#define ITEM_KINGS_ROCK 465
#define ITEM_AMULET_COIN 466
#define ITEM_CLEANSE_TAG 467
#define ITEM_SMOKE_BALL 468
#define ITEM_FOCUS_BAND 469
#define ITEM_LUCKY_EGG 470
#define ITEM_SCOPE_LENS 471
#define ITEM_LEFTOVERS 472
#define ITEM_SHELL_BELL 473
#define ITEM_WIDE_LENS 474
#define ITEM_MUSCLE_BAND 475
#define ITEM_WISE_GLASSES 476
#define ITEM_EXPERT_BELT 477
#define ITEM_LIGHT_CLAY 478
#define ITEM_LIFE_ORB 479
#define ITEM_POWER_HERB 480
#define ITEM_FOCUS_SASH 481
#define ITEM_ZOOM_LENS 482
#define ITEM_METRONOME 483
#define ITEM_IRON_BALL 484
#define ITEM_LAGGING_TAIL 485
#define ITEM_DESTINY_KNOT 486
#define ITEM_BLACK_SLUDGE 487
#define ITEM_GRIP_CLAW 488
#define ITEM_STICKY_BARB 489
#define ITEM_SHED_SHELL 490
#define ITEM_BIG_ROOT 491
#define ITEM_RAZOR_CLAW 492
#define ITEM_RAZOR_FANG 493
#define ITEM_EVIOLITE 494
#define ITEM_FLOAT_STONE 495
#define ITEM_ROCKY_HELMET 496
#define ITEM_AIR_BALLOON 497
#define ITEM_RED_CARD 498
#define ITEM_RING_TARGET 499
#define ITEM_BINDING_BAND 500
#define ITEM_EJECT_BUTTON 501
#define ITEM_WEAKNESS_POLICY 502
#define ITEM_ASSAULT_VEST 503
#define ITEM_SAFETY_GOGGLES 504
#define ITEM_ADRENALINE_ORB 505
#define ITEM_TERRAIN_EXTENDER 506
#define ITEM_PROTECTIVE_PADS 507
#define ITEM_THROAT_SPRAY 508
#define ITEM_EJECT_PACK 509
#define ITEM_HEAVY_DUTY_BOOTS 510
#define ITEM_BLUNDER_POLICY 511
#define ITEM_ROOM_SERVICE 512
#define ITEM_UTILITY_UMBRELLA 513

// Berries
#define ITEM_CHERI_BERRY 514
#define ITEM_CHESTO_BERRY 515
#define ITEM_PECHA_BERRY 516
#define ITEM_RAWST_BERRY 517
#define ITEM_ASPEAR_BERRY 518
#define ITEM_LEPPA_BERRY 519
#define ITEM_ORAN_BERRY 520
#define ITEM_PERSIM_BERRY 521
#define ITEM_LUM_BERRY 522
#define ITEM_SITRUS_BERRY 523
#define ITEM_FIGY_BERRY 524
#define ITEM_WIKI_BERRY 525
#define ITEM_MAGO_BERRY 526
#define ITEM_AGUAV_BERRY 527
#define ITEM_IAPAPA_BERRY 528
#define ITEM_RAZZ_BERRY 529
#define ITEM_BLUK_BERRY 530
#define ITEM_NANAB_BERRY 531
#define ITEM_WEPEAR_BERRY 532
#define ITEM_PINAP_BERRY 533
#define ITEM_POMEG_BERRY 534
#define ITEM_KELPSY_BERRY 535
#define ITEM_QUALOT_BERRY 536
#define ITEM_HONDEW_BERRY 537
#define ITEM_GREPA_BERRY 538
#define ITEM_TAMATO_BERRY 539
#define ITEM_CORNN_BERRY 540
#define ITEM_MAGOST_BERRY 541
#define ITEM_RABUTA_BERRY 542
#define ITEM_NOMEL_BERRY 543
#define ITEM_SPELON_BERRY 544
#define ITEM_PAMTRE_BERRY 545
#define ITEM_WATMEL_BERRY 546
#define ITEM_DURIN_BERRY 547
#define ITEM_BELUE_BERRY 548
#define ITEM_CHILAN_BERRY 549
#define ITEM_OCCA_BERRY 550
#define ITEM_PASSHO_BERRY 551
#define ITEM_WACAN_BERRY 552
#define ITEM_RINDO_BERRY 553
#define ITEM_YACHE_BERRY 554
#define ITEM_CHOPLE_BERRY 555
#define ITEM_KEBIA_BERRY 556
#define ITEM_SHUCA_BERRY 557
#define ITEM_COBA_BERRY 558
#define ITEM_PAYAPA_BERRY 559
#define ITEM_TANGA_BERRY 560
#define ITEM_CHARTI_BERRY 561
#define ITEM_KASIB_BERRY 562
#define ITEM_HABAN_BERRY 563
#define ITEM_COLBUR_BERRY 564
#define ITEM_BABIRI_BERRY 565
#define ITEM_ROSELI_BERRY 566
#define ITEM_LIECHI_BERRY 567
#define ITEM_GANLON_BERRY 568
#define ITEM_SALAC_BERRY 569
#define ITEM_PETAYA_BERRY 570
#define ITEM_APICOT_BERRY 571
#define ITEM_LANSAT_BERRY 572
#define ITEM_STARF_BERRY 573
#define ITEM_ENIGMA_BERRY 574
#define ITEM_MICLE_BERRY 575
#define ITEM_CUSTAP_BERRY 576
#define ITEM_JABOCA_BERRY 577
#define ITEM_ROWAP_BERRY 578
#define ITEM_KEE_BERRY 579
#define ITEM_MARANGA_BERRY 580
#define ITEM_ENIGMA_BERRY_E_READER 581

#define FIRST_BERRY_INDEX ITEM_CHERI_BERRY
#define LAST_BERRY_INDEX  ITEM_ENIGMA_BERRY_E_READER

// TMs/HMs
#define ITEM_TM01 582
#define ITEM_TM02 583
#define ITEM_TM03 584
#define ITEM_TM04 585
#define ITEM_TM05 586
#define ITEM_TM06 587
#define ITEM_TM07 588
#define ITEM_TM08 589
#define ITEM_TM09 590
#define ITEM_TM10 591
#define ITEM_TM11 592
#define ITEM_TM12 593
#define ITEM_TM13 594
#define ITEM_TM14 595
#define ITEM_TM15 596
#define ITEM_TM16 597
#define ITEM_TM17 598
#define ITEM_TM18 599
#define ITEM_TM19 600
#define ITEM_TM20 601
#define ITEM_TM21 602
#define ITEM_TM22 603
#define ITEM_TM23 604
#define ITEM_TM24 605
#define ITEM_TM25 606
#define ITEM_TM26 607
#define ITEM_TM27 608
#define ITEM_TM28 609
#define ITEM_TM29 610
#define ITEM_TM30 611
#define ITEM_TM31 612
#define ITEM_TM32 613
#define ITEM_TM33 614
#define ITEM_TM34 615
#define ITEM_TM35 616
#define ITEM_TM36 617
#define ITEM_TM37 618
#define ITEM_TM38 619
#define ITEM_TM39 620
#define ITEM_TM40 621
#define ITEM_TM41 622
#define ITEM_TM42 623
#define ITEM_TM43 624
#define ITEM_TM44 625
#define ITEM_TM45 626
#define ITEM_TM46 627
#define ITEM_TM47 628
#define ITEM_TM48 629
#define ITEM_TM49 630
#define ITEM_TM50 631
#define ITEM_TM51 632
#define ITEM_TM52 633
#define ITEM_TM53 634
#define ITEM_TM54 635
#define ITEM_TM55 636
#define ITEM_TM56 637
#define ITEM_TM57 638
#define ITEM_TM58 639
#define ITEM_TM59 640
#define ITEM_TM60 641
#define ITEM_TM61 642
#define ITEM_TM62 643
#define ITEM_TM63 644
#define ITEM_TM64 645
#define ITEM_TM65 646
#define ITEM_TM66 647
#define ITEM_TM67 648
#define ITEM_TM68 649
#define ITEM_TM69 650
#define ITEM_TM70 651
#define ITEM_TM71 652
#define ITEM_TM72 653
#define ITEM_TM73 654
#define ITEM_TM74 655
#define ITEM_TM75 656
#define ITEM_TM76 657
#define ITEM_TM77 658
#define ITEM_TM78 659
#define ITEM_TM79 660
#define ITEM_TM80 661
#define ITEM_TM81 662
#define ITEM_TM82 663
#define ITEM_TM83 664
#define ITEM_TM84 665
#define ITEM_TM85 666
#define ITEM_TM86 667
#define ITEM_TM87 668
#define ITEM_TM88 669
#define ITEM_TM89 670
#define ITEM_TM90 671
#define ITEM_TM91 672
#define ITEM_TM92 673
#define ITEM_TM93 674
#define ITEM_TM94 675
#define ITEM_TM95 676
#define ITEM_TM96 677
#define ITEM_TM97 678
#define ITEM_TM98 679
#define ITEM_TM99 680
#define ITEM_TM100 681
#define ITEM_TM101 682
#define ITEM_TM102 683
#define ITEM_TM103 684
#define ITEM_TM104 685
#define ITEM_TM105 686
#define ITEM_TM106 687
#define ITEM_TM107 688
#define ITEM_TM108 689
#define ITEM_TM109 690
#define ITEM_TM110 691
#define ITEM_TM111 692
#define ITEM_TM112 693
#define ITEM_TM113 694
#define ITEM_TM114 695
#define ITEM_TM115 696
#define ITEM_TM116 697
#define ITEM_TM117 698
#define ITEM_TM118 699
#define ITEM_TM119 700
#define ITEM_TM120 701
#define ITEM_TM121 702
#define ITEM_TM122 703
#define ITEM_TM123 704
#define ITEM_TM124 705
#define ITEM_TM125 706
#define ITEM_TM126 707
#define ITEM_TM127 708
#define ITEM_TM128 709
#define ITEM_TM129 710
#define ITEM_TM130 711
#define ITEM_TM131 712
#define ITEM_TM132 713
#define ITEM_TM133 714
#define ITEM_TM134 715
#define ITEM_TM135 716
#define ITEM_TM136 717
#define ITEM_TM137 718
#define ITEM_TM138 719
#define ITEM_TM139 720
#define ITEM_TM140 721
#define ITEM_TM141 722
#define ITEM_TM142 723
#define ITEM_TM143 724
#define ITEM_TM144 725
#define ITEM_TM145 726
#define ITEM_TM146 727
#define ITEM_TM147 728
#define ITEM_TM148 729
#define ITEM_TM149 730
#define ITEM_TM150 731

#define ITEM_HM01 732
#define ITEM_HM02 733
#define ITEM_HM03 734
#define ITEM_HM04 735
#define ITEM_HM05 736
#define ITEM_HM06 737
#define ITEM_HM07 738
#define ITEM_HM08 739

#define ITEM_TM_HIDDEN_POWER ITEM_TM01
#define ITEM_TM_DRAGON_CLAW ITEM_TM02
#define ITEM_TM_SCALD ITEM_TM03
#define ITEM_TM_CALM_MIND ITEM_TM04
#define ITEM_TM_BULK_UP ITEM_TM05
#define ITEM_TM_SUNNY_DAY ITEM_TM06
#define ITEM_TM_RAIN_DANCE ITEM_TM07
#define ITEM_TM_SNOWSCAPE ITEM_TM08
#define ITEM_TM_SANDSTORM ITEM_TM09
#define ITEM_TM_TOXIC ITEM_TM10
#define ITEM_TM_FLAMETHROWER ITEM_TM11
#define ITEM_TM_THUNDERBOLT ITEM_TM12
#define ITEM_TM_ICE_BEAM ITEM_TM13
#define ITEM_TM_ENERGY_BALL ITEM_TM14
#define ITEM_TM_BUBBLE_BEAM ITEM_TM15
#define ITEM_TM_PSYCHIC ITEM_TM16
#define ITEM_TM_SHADOW_BALL ITEM_TM17
#define ITEM_TM_DARK_PULSE ITEM_TM18
#define ITEM_TM_DRAGON_PULSE ITEM_TM19
#define ITEM_TM_FLASH_CANNON ITEM_TM20
#define ITEM_TM_POWER_GEM ITEM_TM21
#define ITEM_TM_SLUDGE_BOMB ITEM_TM22
#define ITEM_TM_BUG_BUZZ ITEM_TM23
#define ITEM_TM_MOONBLAST ITEM_TM24
#define ITEM_TM_EARTH_POWER ITEM_TM25
#define ITEM_TM_EARTHQUAKE ITEM_TM26
#define ITEM_TM_TAUNT ITEM_TM27
#define ITEM_TM_BLIZZARD ITEM_TM28
#define ITEM_TM_HYPER_BEAM ITEM_TM29
#define ITEM_TM_RETURN ITEM_TM30
#define ITEM_TM_FRUSTRATION ITEM_TM31
#define ITEM_TM_PROTECT ITEM_TM32
#define ITEM_TM_SWORDS_DANCE ITEM_TM33
#define ITEM_TM_NASTY_PLOT ITEM_TM34
#define ITEM_TM_DRAGON_DANCE ITEM_TM35
#define ITEM_TM_IRON_TAIL ITEM_TM36
#define ITEM_TM_THUNDER ITEM_TM37
#define ITEM_TM_DIG ITEM_TM38
#define ITEM_TM_BRICK_BREAK ITEM_TM39
#define ITEM_TM_REFLECT ITEM_TM40
#define ITEM_TM_LIGHT_SCREEN ITEM_TM41
#define ITEM_TM_SAFEGUARD ITEM_TM42
#define ITEM_TM_GIGA_DRAIN ITEM_TM43
#define ITEM_TM_DOUBLE_TEAM ITEM_TM44
#define ITEM_TM_ROCK_TOMB ITEM_TM45
#define ITEM_TM_AERIAL_ACE ITEM_TM46
#define ITEM_TM_STEEL_WING ITEM_TM47
#define ITEM_TM_THIEF ITEM_TM48
#define ITEM_TM_SHOCK_WAVE ITEM_TM49
#define ITEM_TM_SOLAR_BEAM ITEM_TM50
#define ITEM_TM_FACADE ITEM_TM51
#define ITEM_TM_SECRET_POWER ITEM_TM52
#define ITEM_TM_ATTRACT ITEM_TM53
#define ITEM_TM_FLAME_CHARGE ITEM_TM54
#define ITEM_TM_BULLET_SEED ITEM_TM55
#define ITEM_TM_U_TURN ITEM_TM56
#define ITEM_TM_VOLT_SWITCH ITEM_TM57
#define ITEM_TM_FLIP_TURN ITEM_TM58
#define ITEM_TM_BATON_PASS ITEM_TM59
#define ITEM_TM_TRICK ITEM_TM60
#define ITEM_TM_FIRE_PUNCH ITEM_TM61
#define ITEM_TM_THUNDER_PUNCH ITEM_TM62
#define ITEM_TM_ICE_PUNCH ITEM_TM63
#define ITEM_TM_WEATHER_BALL ITEM_TM64
#define ITEM_TM_FOCUS_PUNCH ITEM_TM65
#define ITEM_TM_FOCUS_BLAST ITEM_TM66
#define ITEM_TM_THUNDER_WAVE ITEM_TM67
#define ITEM_TM_WILL_O_WISP ITEM_TM68
#define ITEM_TM_PLAY_ROUGH ITEM_TM69 // nice
#define ITEM_TM_LEECH_LIFE ITEM_TM70
#define ITEM_TM_TORMENT ITEM_TM71
#define ITEM_TM_NATURE_POWER ITEM_TM72
#define ITEM_TM_GRASS_KNOT ITEM_TM73
#define ITEM_TM_FIRE_BLAST ITEM_TM74
#define ITEM_TM_STEALTH_ROCK ITEM_TM75
#define ITEM_TM_SPIKES ITEM_TM76
#define ITEM_TM_TOXIC_SPIKES ITEM_TM77
#define ITEM_TM_BUG_BITE ITEM_TM78
#define ITEM_TM_CHARGE_BEAM ITEM_TM79
#define ITEM_TM_LIQUIDATION ITEM_TM80
#define ITEM_TM_BODY_PRESS ITEM_TM81
#define ITEM_TM_DAZZLING_GLEAM ITEM_TM82
#define ITEM_TM_ZEN_HEADBUTT ITEM_TM83
#define ITEM_TM_HEAT_WAVE ITEM_TM84
#define ITEM_TM_FLASH ITEM_TM85
#define ITEM_TM_GRASSY_TERRAIN ITEM_TM86
#define ITEM_TM_MISTY_TERRAIN ITEM_TM87
#define ITEM_TM_ELECTRIC_TERRAIN ITEM_TM88
#define ITEM_TM_PSYCHIC_TERRAIN ITEM_TM89
#define ITEM_TM_TERRAIN_PULSE ITEM_TM90
#define ITEM_TM_ROCK_SLIDE ITEM_TM91
#define ITEM_TM_STOMPING_TANTRUM ITEM_TM92
#define ITEM_TM_SHADOW_CLAW ITEM_TM93
#define ITEM_TM_SKILL_SWAP ITEM_TM94
#define ITEM_TM_OVERHEAT ITEM_TM95
#define ITEM_TM_WORK_UP ITEM_TM96
#define ITEM_TM_ROOST ITEM_TM97
#define ITEM_TM_SLEEP_TALK ITEM_TM98
#define ITEM_TM_HONE_CLAWS ITEM_TM99
#define ITEM_TM_X_SCISSOR ITEM_TM100
#define ITEM_TM_HYDRO_PUMP ITEM_TM101
#define ITEM_TM_AIR_SLASH ITEM_TM102
#define ITEM_TM_ICY_WIND ITEM_TM103
#define ITEM_TM_HYPER_VOICE ITEM_TM104
#define ITEM_TM_PSYCHO_CUT ITEM_TM105
#define ITEM_TM_CROSS_POISON ITEM_TM106
#define ITEM_TM_LOW_SWEEP ITEM_TM107
#define ITEM_TM_HEX ITEM_TM108
#define ITEM_TM_ROUND ITEM_TM109
#define ITEM_TM_ELECTROWEB ITEM_TM110
#define ITEM_TM_PLUCK ITEM_TM111
#define ITEM_TM_SNARL ITEM_TM112
#define ITEM_TM_DRAINING_KISS ITEM_TM113
#define ITEM_TM_PHANTOM_FORCE ITEM_TM114
#define ITEM_TM_ACROBATICS ITEM_TM115
#define ITEM_TM_AGILITY ITEM_TM116
#define ITEM_TM_SUBSTITUTE ITEM_TM117
#define ITEM_TM_REVERSAL ITEM_TM118
#define ITEM_TM_PSYSHOCK ITEM_TM119
#define ITEM_TM_CRUNCH ITEM_TM120
#define ITEM_TM_UPROAR ITEM_TM121
#define ITEM_TM_DRAIN_PUNCH ITEM_TM122
#define ITEM_TM_SEED_BOMB ITEM_TM123
#define ITEM_TM_SLUDGE_WAVE ITEM_TM124
#define ITEM_TM_WILD_CHARGE ITEM_TM125
#define ITEM_TM_DRILL_RUN ITEM_TM126
#define ITEM_TM_GYRO_BALL ITEM_TM127
#define ITEM_TM_BOUNCE ITEM_TM128
#define ITEM_TM_MAGICAL_LEAF ITEM_TM129
#define ITEM_TM_GIGA_IMPACT ITEM_TM130
#define ITEM_TM_POLTERGEIST ITEM_TM131
#define ITEM_TM_POWER_WHIP ITEM_TM132
#define ITEM_TM_IRON_HEAD ITEM_TM133
#define ITEM_TM_SMART_STRIKE ITEM_TM134
#define ITEM_TM_DEFOG ITEM_TM135
#define ITEM_TM_SILVER_WIND ITEM_TM136
#define ITEM_TM_OMINOUS_WIND ITEM_TM137
#define ITEM_TM_ANCIENT_POWER ITEM_TM138
#define ITEM_TM_REST ITEM_TM139
#define ITEM_TM_CHIP_AWAY ITEM_TM140
#define ITEM_TM_SOLAR_BLADE ITEM_TM141
#define ITEM_TM_IRON_DEFENSE ITEM_TM142
#define ITEM_TM_AMNESIA ITEM_TM143
#define ITEM_TM_SCREECH ITEM_TM144
#define ITEM_TM_METAL_SOUND ITEM_TM145
#define ITEM_TM_CHARM ITEM_TM146
#define ITEM_TM_EERIE_IMPULSE ITEM_TM147
#define ITEM_TM_TRICK_ROOM ITEM_TM148
#define ITEM_TM_MAGIC_ROOM ITEM_TM149
#define ITEM_TM_WONDER_ROOM ITEM_TM150

#define ITEM_HM_CUT ITEM_HM01
#define ITEM_HM_FLY ITEM_HM02
#define ITEM_HM_SURF ITEM_HM03
#define ITEM_HM_STRENGTH ITEM_HM04
#define ITEM_HM_ROCK_CLIMB ITEM_HM05
#define ITEM_HM_ROCK_SMASH ITEM_HM06
#define ITEM_HM_WATERFALL ITEM_HM07
#define ITEM_HM_DIVE ITEM_HM08

// Charms
#define ITEM_OVAL_CHARM 740
#define ITEM_SHINY_CHARM 741
#define ITEM_CATCHING_CHARM 742
#define ITEM_EXP_CHARM 743

// Form-changing Key Items
#define ITEM_ROTOM_CATALOG 744
#define ITEM_GRACIDEA 745
#define ITEM_REVEAL_GLASS 746
#define ITEM_DNA_SPLICERS 747
#define ITEM_ZYGARDE_CUBE 748
#define ITEM_PRISON_BOTTLE 749
#define ITEM_N_SOLARIZER 750
#define ITEM_N_LUNARIZER 751
#define ITEM_REINS_OF_UNITY 752

// Battle Mechanic Key Items
#define ITEM_MEGA_RING 753
#define ITEM_Z_POWER_RING 754
#define ITEM_DYNAMAX_BAND 755

// Misc. Key Items
#define ITEM_BICYCLE 756
#define ITEM_MACH_BIKE 757
#define ITEM_ACRO_BIKE 758
#define ITEM_OLD_ROD 759
#define ITEM_GOOD_ROD 760
#define ITEM_SUPER_ROD 761
#define ITEM_DOWSING_MACHINE 762
#define ITEM_TOWN_MAP 763
#define ITEM_VS_SEEKER 764
#define ITEM_TM_CASE 765
#define ITEM_BERRY_POUCH 766
#define ITEM_POKEMON_BOX_LINK 767
#define ITEM_COIN_CASE 768
#define ITEM_POWDER_JAR 769
#define ITEM_WAILMER_PAIL 770
#define ITEM_POKE_RADAR 771
#define ITEM_POKEBLOCK_CASE 772
#define ITEM_SOOT_SACK 773
#define ITEM_POKE_FLUTE 774
#define ITEM_FAME_CHECKER 775
#define ITEM_TEACHY_TV 776

// Story Key Items
#define ITEM_SS_TICKET 777
#define ITEM_EON_TICKET 778
#define ITEM_MYSTIC_TICKET 779
#define ITEM_AURORA_TICKET 780
#define ITEM_OLD_SEA_MAP 781
#define ITEM_LETTER 782
#define ITEM_DEVON_PARTS 783
#define ITEM_GO_GOGGLES 784
#define ITEM_DEVON_SCOPE 785
#define ITEM_BASEMENT_KEY 786
#define ITEM_SCANNER 787
#define ITEM_STORAGE_KEY 788
#define ITEM_KEY_TO_ROOM_1 789
#define ITEM_KEY_TO_ROOM_2 790
#define ITEM_KEY_TO_ROOM_4 791
#define ITEM_KEY_TO_ROOM_6 792
#define ITEM_METEORITE 793
#define ITEM_MAGMA_EMBLEM 794
#define ITEM_CONTEST_PASS 795
#define ITEM_OAKS_PARCEL 796
#define ITEM_SECRET_KEY 797
#define ITEM_BIKE_VOUCHER 798
#define ITEM_GOLD_TEETH 799
#define ITEM_CARD_KEY 800
#define ITEM_LIFT_KEY 801
#define ITEM_SILPH_SCOPE 802
#define ITEM_TRI_PASS 803
#define ITEM_RAINBOW_PASS 804
#define ITEM_TEA 805
#define ITEM_RUBY 806
#define ITEM_SAPPHIRE 807

// GEN IX ITEMS
#define ITEM_ABILITY_SHIELD 808
#define ITEM_CLEAR_AMULET 809
#define ITEM_PUNCHING_GLOVE 810
#define ITEM_COVERT_CLOAK 811
#define ITEM_LOADED_DICE 812
#define ITEM_AUSPICIOUS_ARMOR 813
#define ITEM_BOOSTER_ENERGY 814
#define ITEM_BIG_BAMBOO_SHOOT 815
#define ITEM_GIMMIGHOUL_COIN 816
#define ITEM_LEADERS_CREST 817
#define ITEM_MALICIOUS_ARMOR 818
#define ITEM_MIRROR_HERB 819
#define ITEM_SCROLL_OF_DARKNESS 820
#define ITEM_SCROLL_OF_WATERS 821
#define ITEM_TERA_ORB 822
#define ITEM_TINY_BAMBOO_SHOOT 823

#define ITEM_BUG_TERA_SHARD 824
#define ITEM_DARK_TERA_SHARD 825
#define ITEM_DRAGON_TERA_SHARD 826
#define ITEM_ELECTRIC_TERA_SHARD 827
#define ITEM_FAIRY_TERA_SHARD 828
#define ITEM_FIGHTING_TERA_SHARD 829
#define ITEM_FIRE_TERA_SHARD 830
#define ITEM_FLYING_TERA_SHARD 831
#define ITEM_GHOST_TERA_SHARD 832
#define ITEM_GRASS_TERA_SHARD 833
#define ITEM_GROUND_TERA_SHARD 834
#define ITEM_ICE_TERA_SHARD 835
#define ITEM_NORMAL_TERA_SHARD 836
#define ITEM_POISON_TERA_SHARD 837
#define ITEM_PSYCHIC_TERA_SHARD 838
#define ITEM_ROCK_TERA_SHARD 839
#define ITEM_STEEL_TERA_SHARD 840
#define ITEM_WATER_TERA_SHARD 841

#define ITEM_ADAMANT_CRYSTAL 842
#define ITEM_GRISEOUS_CORE 843
#define ITEM_LUSTROUS_GLOBE 844

#define ITEM_BLACK_AUGURITE 845
#define ITEM_LINKING_CORD 846
#define ITEM_PEAT_BLOCK 847
#define ITEM_BERSERK_GENE 848

#define ITEM_FAIRY_FEATHER 849
#define ITEM_SYRUPY_APPLE 850
#define ITEM_UNREMARKABLE_TEACUP 851
#define ITEM_MASTERPIECE_TEACUP 852
#define ITEM_CORNERSTONE_MASK 853
#define ITEM_WELLSPRING_MASK 854
#define ITEM_HEARTHFLAME_MASK 855
#define ITEM_HEALTH_MOCHI 856
#define ITEM_MUSCLE_MOCHI 857
#define ITEM_RESIST_MOCHI 858
#define ITEM_GENIUS_MOCHI 859
#define ITEM_CLEVER_MOCHI 860
#define ITEM_SWIFT_MOCHI 861
#define ITEM_FRESH_START_MOCHI 862
#define ITEM_GLIMMERING_CHARM 863

// Hidden Power Crystal
#define ITEM_FIRE_CRYSTAL 864
#define ITEM_WATER_CRYSTAL 865
#define ITEM_ELECTRIC_CRYSTAL 866
#define ITEM_GRASS_CRYSTAL 867
#define ITEM_ICE_CRYSTAL 868
#define ITEM_FIGHTING_CRYSTAL 869
#define ITEM_POISON_CRYSTAL 870
#define ITEM_GROUND_CRYSTAL 871
#define ITEM_FLYING_CRYSTAL 872
#define ITEM_PSYCHIC_CRYSTAL 873
#define ITEM_BUG_CRYSTAL 874
#define ITEM_ROCK_CRYSTAL 875
#define ITEM_GHOST_CRYSTAL 876
#define ITEM_DRAGON_CRYSTAL 877
#define ITEM_DARK_CRYSTAL 878
#define ITEM_STEEL_CRYSTAL 879

#define ITEMS_COUNT 880
#define ITEM_FIELD_ARROW ITEMS_COUNT

// A special item id associated with "Cancel"/"Exit" etc. in a list of items or decorations
// Its icon is defined at ITEMS_COUNT as the "return to field" arrow
#define ITEM_LIST_END 0xFFFF

// Range of berries given out by various NPCS
#define FIRST_BERRY_MASTER_BERRY ITEM_POMEG_BERRY
#define LAST_BERRY_MASTER_BERRY ITEM_NOMEL_BERRY
#define FIRST_BERRY_MASTER_WIFE_BERRY ITEM_CHERI_BERRY
#define LAST_BERRY_MASTER_WIFE_BERRY ITEM_SITRUS_BERRY
#define FIRST_KIRI_BERRY ITEM_POMEG_BERRY
#define LAST_KIRI_BERRY ITEM_NOMEL_BERRY
#define FIRST_ROUTE_114_MAN_BERRY ITEM_RAZZ_BERRY
#define LAST_ROUTE_114_MAN_BERRY ITEM_PINAP_BERRY

#define NUM_BERRY_MASTER_BERRIES (LAST_BERRY_MASTER_BERRY - FIRST_BERRY_MASTER_BERRY + 1)
#define NUM_BERRY_MASTER_BERRIES_SKIPPED (FIRST_BERRY_MASTER_BERRY - FIRST_BERRY_INDEX)
#define NUM_BERRY_MASTER_WIFE_BERRIES (LAST_BERRY_MASTER_WIFE_BERRY - FIRST_BERRY_MASTER_WIFE_BERRY + 1)
#define NUM_KIRI_BERRIES (LAST_KIRI_BERRY - FIRST_KIRI_BERRY + 1)
#define NUM_KIRI_BERRIES_SKIPPED (FIRST_KIRI_BERRY - FIRST_BERRY_INDEX)
#define NUM_ROUTE_114_MAN_BERRIES (LAST_ROUTE_114_MAN_BERRY - FIRST_ROUTE_114_MAN_BERRY + 1)
#define NUM_ROUTE_114_MAN_BERRIES_SKIPPED (FIRST_ROUTE_114_MAN_BERRY - FIRST_BERRY_INDEX)

#define ITEM_TO_BERRY(itemId) (((itemId)-FIRST_BERRY_INDEX) + 1)
#define ITEM_TO_MAIL(itemId) ((itemId)-FIRST_MAIL_INDEX)
#define MAIL_NONE 0xFF

#define NUM_TECHNICAL_MACHINES 150
#define NUM_HIDDEN_MACHINES 8

#define MAX_BAG_ITEM_CAPACITY  999
#define MAX_PC_ITEM_CAPACITY   999
#define MAX_BERRY_CAPACITY     999

#define BAG_ITEM_CAPACITY_DIGITS 3
#define BERRY_CAPACITY_DIGITS 3
#define MAX_ITEM_DIGITS BERRY_CAPACITY_DIGITS

// Secondary IDs for rods
#define OLD_ROD 0
#define GOOD_ROD 1
#define SUPER_ROD 2

// Secondary IDs for bikes
#define MACH_BIKE 0
#define ACRO_BIKE 1

// Item parameters for EXP Candies
#define EXP_100 1
#define EXP_800 2
#define EXP_3000 3
#define EXP_10000 4
#define EXP_30000 5

// Item type IDs (used to determine the exit callback)
#define ITEM_USE_MAIL 0
#define ITEM_USE_PARTY_MENU 1
#define ITEM_USE_FIELD 2
#define ITEM_USE_PBLOCK_CASE 3
#define ITEM_USE_BAG_MENU 4 // No exit callback, stays in bag menu
#define ITEM_USE_PARTY_MENU_MOVES 5

// Item battle script IDs (need to be non-zero)
#define EFFECT_ITEM_RESTORE_HP 1
#define EFFECT_ITEM_CURE_STATUS 2
#define EFFECT_ITEM_HEAL_AND_CURE_STATUS 3
#define EFFECT_ITEM_INCREASE_STAT 4
#define EFFECT_ITEM_SET_MIST 5
#define EFFECT_ITEM_SET_FOCUS_ENERGY 6
#define EFFECT_ITEM_ESCAPE 7
#define EFFECT_ITEM_THROW_BALL 8
#define EFFECT_ITEM_REVIVE 9
#define EFFECT_ITEM_RESTORE_PP 10
#define EFFECT_ITEM_INCREASE_ALL_STATS 11

// Enigma Berry dummy constant
#define EFFECT_ITEM_ENIGMA_BERRY_EREADER 1

#endif // GUARD_CONSTANTS_ITEMS_H
