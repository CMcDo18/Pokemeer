OldaleTown_PokemonCenter_1F_MapObjects: @ 852D844
	object_event 1, MAP_OBJ_GFX_NURSE, 0, 0, 7, 2, 3, 8, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC01A, 0, 0, 0
	object_event 2, MAP_OBJ_GFX_GENTLEMAN, 0, 0, 4, 4, 3, 8, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC028, 0, 0, 0
	object_event 3, MAP_OBJ_GFX_BOY_1, 0, 0, 10, 6, 3, 10, 0, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC031, 0, 0, 0
	object_event 4, MAP_OBJ_GFX_GIRL_3, 0, 0, 3, 7, 3, 10, 17, 0, 0, 0, OldaleTown_PokemonCenter_1F_EventScript_1FC03A, 0, 0, 0

OldaleTown_PokemonCenter_1F_MapWarps: @ 852D8A4
	warp_def 7, 8, 3, 2, OLDALE_TOWN
	warp_def 6, 8, 3, 2, OLDALE_TOWN
	warp_def 1, 6, 4, 0, OLDALE_TOWN_POKEMON_CENTER_2F

OldaleTown_PokemonCenter_1F_MapEvents:: @ 852D8BC
	map_events OldaleTown_PokemonCenter_1F_MapObjects, OldaleTown_PokemonCenter_1F_MapWarps, 0x0, 0x0

