SeafloorCavern_Room1_MapObjects: @ 85356F8
	object_event 1, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 5, 11, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room1_EventScript_2908BA, 17, 0, 0
	object_event 2, MAP_OBJ_GFX_PUSHABLE_BOULDER, 0, 0, 12, 11, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room1_EventScript_2908BA, 18, 0, 0
	object_event 3, MAP_OBJ_GFX_BREAKABLE_ROCK, 0, 0, 5, 10, 3, 1, 0, 0, 0, 0, SeafloorCavern_Room1_EventScript_2907A6, 19, 0, 0
	object_event 4, MAP_OBJ_GFX_AQUA_MEMBER_M, 0, 0, 8, 6, 3, 1, 17, 0, 1, 2, SeafloorCavern_Room1_EventScript_2347EC, 946, 0, 0
	object_event 5, MAP_OBJ_GFX_AQUA_MEMBER_M, 0, 0, 15, 10, 3, 16, 17, 0, 1, 3, SeafloorCavern_Room1_EventScript_234803, 946, 0, 0

SeafloorCavern_Room1_MapWarps: @ 8535770
	warp_def 5, 18, 3, 1, SEAFLOOR_CAVERN_ENTRANCE
	warp_def 17, 13, 3, 0, SEAFLOOR_CAVERN_ROOM_5
	warp_def 6, 2, 3, 0, SEAFLOOR_CAVERN_ROOM_2

SeafloorCavern_Room1_MapEvents:: @ 8535788
	map_events SeafloorCavern_Room1_MapObjects, SeafloorCavern_Room1_MapWarps, 0x0, 0x0

