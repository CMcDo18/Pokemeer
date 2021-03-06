MauvilleCity_MapScripts:: @ 81DF385
	map_script 3, MauvilleCity_MapScript1_1DF38B
	.byte 0

MauvilleCity_MapScript1_1DF38B: @ 81DF38B
	setflag FLAG_VISITED_MAUVILLE_CITY
	clearflag FLAG_0x09D
	clearflag FLAG_0x3C1
	setflag FLAG_SYS_TV_START
	clearflag FLAG_0x063
	setvar VAR_0x4093, 0
	checkflag FLAG_0x0D1
	call_if 1, MauvilleCity_EventScript_1DF3A9
	end

MauvilleCity_EventScript_1DF3A9:: @ 81DF3A9
	clearflag FLAG_0x391
	setflag FLAG_0x390
	setflag FLAG_0x05B
	return

MauvilleCity_EventScript_1DF3B3:: @ 81DF3B3
	msgbox MauvilleCity_Text_1E0301, 2
	end

MauvilleCity_EventScript_1DF3BC:: @ 81DF3BC
	msgbox MauvilleCity_Text_1E037C, 2
	end

MauvilleCity_EventScript_1DF3C5:: @ 81DF3C5
	msgbox MauvilleCity_Text_1E03FB, 2
	end

MauvilleCity_EventScript_1DF3CE:: @ 81DF3CE
	msgbox MauvilleCity_Text_1E044A, 2
	end

MauvilleCity_EventScript_1DF3D7:: @ 81DF3D7
	msgbox MauvilleCity_Text_1E0485, 3
	end

MauvilleCity_EventScript_1DF3E0:: @ 81DF3E0
	msgbox MauvilleCity_Text_1E04B7, 3
	end

MauvilleCity_EventScript_1DF3E9:: @ 81DF3E9
	msgbox MauvilleCity_Text_1E0504, 3
	end

MauvilleCity_EventScript_1DF3F2:: @ 81DF3F2
	msgbox MauvilleCity_Text_1E053C, 3
	end

MauvilleCity_EventScript_1DF3FB:: @ 81DF3FB
	lock
	faceplayer
	checkflag FLAG_0x062
	goto_eq MauvilleCity_EventScript_1DF413
	msgbox MauvilleCity_Text_1E056A, 4
	setflag FLAG_0x062
	release
	end

MauvilleCity_EventScript_1DF413:: @ 81DF413
	msgbox MauvilleCity_Text_1E0699, 4
	release
	end

MauvilleCity_EventScript_1DF41D:: @ 81DF41D
	lock
	faceplayer
	checkflag FLAG_0x11C
	goto_eq MauvilleCity_EventScript_1DF43D
	msgbox MauvilleCity_Text_1DF7DC, 4
	closemessage
	applymovement 7, MauvilleCity_Movement_2725A2
	waitmovement 0
	release
	end

MauvilleCity_EventScript_1DF43D:: @ 81DF43D
	msgbox MauvilleCity_Text_1DFAA5, 4
	closemessage
	applymovement 7, MauvilleCity_Movement_2725A2
	waitmovement 0
	release
	end

MauvilleCity_EventScript_1DF452:: @ 81DF452
	lockall
	checkflag FLAG_0x11C
	goto_eq MauvilleCity_EventScript_1DF690
	applymovement 6, MauvilleCity_Movement_2725A8
	waitmovement 0
	msgbox MauvilleCity_Text_1DF845, 4
	msgbox MauvilleCity_Text_1DF8B9, 4
	msgbox MauvilleCity_Text_1DF963, 4
	applymovement 6, MauvilleCity_Movement_27259E
	waitmovement 0
	playse SE_PIN
	applymovement 6, MauvilleCity_Movement_272598
	waitmovement 0
	applymovement 6, MauvilleCity_Movement_27259A
	waitmovement 0
	msgbox MauvilleCity_Text_1DF9B2, 5
	goto MauvilleCity_EventScript_1DF4AD
	end

MauvilleCity_EventScript_1DF4AD:: @ 81DF4AD
	compare VAR_RESULT, 1
	call_if 1, MauvilleCity_EventScript_1DF63A
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_EventScript_1DF683
	closemessage
	switch VAR_FACING
	case 2, MauvilleCity_EventScript_1DF4E0
	case 4, MauvilleCity_EventScript_1DF53D
	end

MauvilleCity_EventScript_1DF4E0:: @ 81DF4E0
	applymovement 255, MauvilleCity_Movement_1DF6DF
	applymovement 6, MauvilleCity_Movement_1DF6A8
	applymovement 7, MauvilleCity_Movement_1DF6E2
	waitmovement 0
	applymovement 6, MauvilleCity_Movement_2725A8
	waitmovement 0
	delay 30
	applymovement 255, MauvilleCity_Movement_1DF6EE
	applymovement 7, MauvilleCity_Movement_1DF6F3
	waitmovement 0
	msgbox MauvilleCity_Text_1DFD34, 4
	closemessage
	applymovement 255, MauvilleCity_Movement_1DF6CC
	applymovement 7, MauvilleCity_Movement_1DF6FA
	applymovement 6, MauvilleCity_Movement_1DF6B4
	waitmovement 0
	goto MauvilleCity_EventScript_1DF593
	end

MauvilleCity_EventScript_1DF53D:: @ 81DF53D
	applymovement 255, MauvilleCity_Movement_1DF6DC
	applymovement 6, MauvilleCity_Movement_1DF6AE
	applymovement 7, MauvilleCity_Movement_1DF6E8
	waitmovement 0
	applymovement 6, MauvilleCity_Movement_2725A8
	waitmovement 0
	delay 30
	applymovement 7, MauvilleCity_Movement_1DF6F7
	waitmovement 0
	msgbox MauvilleCity_Text_1DFD34, 4
	closemessage
	applymovement 255, MauvilleCity_Movement_1DF6D0
	applymovement 7, MauvilleCity_Movement_1DF703
	applymovement 6, MauvilleCity_Movement_1DF6C0
	waitmovement 0
	goto MauvilleCity_EventScript_1DF593
	end

MauvilleCity_EventScript_1DF593:: @ 81DF593
	removeobject 6
	removeobject 7
	clearflag FLAG_0x326
	clearflag FLAG_0x329
	setflag FLAG_0x0BE
	setvar VAR_0x40F2, 0
	setflag FLAG_0x088
	compare VAR_FACING, 2
	call_if 1, MauvilleCity_EventScript_1DF5F3
	compare VAR_FACING, 4
	call_if 1, MauvilleCity_EventScript_1DF601
	applymovement 255, MauvilleCity_Movement_2725AA
	waitmovement 0
	msgbox MauvilleCity_Text_1DFED5, 4
	closemessage
	addvar VAR_0x40D1, 1
	compare VAR_FACING, 2
	call_if 1, MauvilleCity_EventScript_1DF616
	compare VAR_FACING, 4
	call_if 1, MauvilleCity_EventScript_1DF628
	removeobject 11
	releaseall
	end

MauvilleCity_EventScript_1DF5F3:: @ 81DF5F3
	addobject 11
	applymovement 11, MauvilleCity_Movement_1DF70D
	waitmovement 0
	return

MauvilleCity_EventScript_1DF601:: @ 81DF601
	setobjectxyperm 11, 12, 13
	addobject 11
	applymovement 11, MauvilleCity_Movement_1DF719
	waitmovement 0
	return

MauvilleCity_EventScript_1DF616:: @ 81DF616
	applymovement 255, MauvilleCity_Movement_1DF6D5
	applymovement 11, MauvilleCity_Movement_1DF725
	waitmovement 0
	return

MauvilleCity_EventScript_1DF628:: @ 81DF628
	applymovement 255, MauvilleCity_Movement_1DF6D8
	applymovement 11, MauvilleCity_Movement_1DF72F
	waitmovement 0
	return

MauvilleCity_EventScript_1DF63A:: @ 81DF63A
	msgbox MauvilleCity_Text_1DFB6D, 4
	trainerbattle 3, TRAINER_WALLY_2, 0, MauvilleCity_Text_1DFB96
	applymovement 6, MauvilleCity_Movement_2725A8
	waitmovement 0
	msgbox MauvilleCity_Text_1DFBC3, 4
	applymovement 6, MauvilleCity_Movement_27259E
	waitmovement 0
	msgbox MauvilleCity_Text_1DFBED, 4
	applymovement 6, MauvilleCity_Movement_2725A8
	waitmovement 0
	msgbox MauvilleCity_Text_1DFC8A, 4
	return

MauvilleCity_EventScript_1DF683:: @ 81DF683
	setflag FLAG_0x11C
	msgbox MauvilleCity_Text_1DFA4A, 4
	release
	end

MauvilleCity_EventScript_1DF690:: @ 81DF690
	applymovement 6, MauvilleCity_Movement_27259E
	waitmovement 0
	msgbox MauvilleCity_Text_1DFB42, 5
	goto MauvilleCity_EventScript_1DF4AD
	end

MauvilleCity_Movement_1DF6A8: @ 81DF6A8
	step_left
	step_left
	step_down
	step_down
	step_left
	step_end

MauvilleCity_Movement_1DF6AE: @ 81DF6AE
	step_down
	step_down
	step_left
	step_left
	step_left
	step_end

MauvilleCity_Movement_1DF6B4: @ 81DF6B4
	step_14
	step_14
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_13
	step_end

MauvilleCity_Movement_1DF6C0: @ 81DF6C0
	step_14
	step_14
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_13
	step_end

MauvilleCity_Movement_1DF6CC: @ 81DF6CC
	step_14
	step_13
	step_27
	step_end

MauvilleCity_Movement_1DF6D0: @ 81DF6D0
	step_14
	step_14
	step_14
	step_27
	step_end

MauvilleCity_Movement_1DF6D5: @ 81DF6D5
	step_14
	step_27
	step_end

MauvilleCity_Movement_1DF6D8: @ 81DF6D8
	step_14
	step_14
	step_27
	step_end

MauvilleCity_Movement_1DF6DC: @ 81DF6DC
	step_14
	step_25
	step_end

MauvilleCity_Movement_1DF6DF: @ 81DF6DF
	step_14
	step_27
	step_end

MauvilleCity_Movement_1DF6E2: @ 81DF6E2
	step_left
	step_left
	step_left
	step_down
	step_down
	step_end

MauvilleCity_Movement_1DF6E8: @ 81DF6E8
	step_left
	step_down
	step_down
	step_left
	step_left
	step_end

MauvilleCity_Movement_1DF6EE: @ 81DF6EE
	step_14
	step_13
	step_12
	step_25
	step_end

MauvilleCity_Movement_1DF6F3: @ 81DF6F3
	step_right
	step_right
	step_26
	step_end

MauvilleCity_Movement_1DF6F7: @ 81DF6F7
	step_right
	step_up
	step_end

MauvilleCity_Movement_1DF6FA: @ 81DF6FA
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

MauvilleCity_Movement_1DF703: @ 81DF703
	step_down
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

MauvilleCity_Movement_1DF70D: @ 81DF70D
	step_up
	step_up
	step_up
	step_up
	step_up
	step_up
	step_left
	step_left
	step_left
	step_left
	step_26
	step_end

MauvilleCity_Movement_1DF719: @ 81DF719
	step_up
	step_up
	step_up
	step_up
	step_up
	step_left
	step_left
	step_left
	step_left
	step_left
	step_up
	step_end

MauvilleCity_Movement_1DF725: @ 81DF725
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

MauvilleCity_Movement_1DF72F: @ 81DF72F
	step_down
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_left
	step_end

MauvilleCity_EventScript_1DF73A:: @ 81DF73A
	lock
	faceplayer
	checkflag FLAG_0x0D1
	goto_eq MauvilleCity_EventScript_1DF7B0
	compare VAR_0x40BA, 2
	goto_eq MauvilleCity_EventScript_1DF784
	checkflag FLAG_0x0D0
	goto_eq MauvilleCity_EventScript_1DF77A
	msgbox MauvilleCity_Text_1DFFE4, 4
	giveitem_std ITEM_BASEMENT_KEY
	setflag FLAG_0x0D0
	msgbox MauvilleCity_Text_1E0154, 4
	release
	end

MauvilleCity_EventScript_1DF77A:: @ 81DF77A
	msgbox MauvilleCity_Text_1E0154, 4
	release
	end

MauvilleCity_EventScript_1DF784:: @ 81DF784
	msgbox MauvilleCity_Text_1E020E, 4
	giveitem_std ITEM_TM24
	compare VAR_RESULT, 0
	goto_eq MauvilleCity_EventScript_272054
	setflag FLAG_0x0D1
	msgbox MauvilleCity_Text_1E02AA, 4
	release
	end

MauvilleCity_EventScript_1DF7B0:: @ 81DF7B0
	msgbox MauvilleCity_Text_1E02AA, 4
	release
	end

MauvilleCity_EventScript_1DF7BA:: @ 81DF7BA
	lockall
	pokenavcall MauvilleCity_Text_1DFDFB
	waitmessage
	delay 30
	playfanfare MUS_ME_TORE_EYE
	msgbox MauvilleCity_Text_1DFEB4, 4
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_0x0D6
	clearflag FLAG_0x088
	releaseall
	end

MauvilleCity_Text_1DF7DC: @ 81DF7DC
	.string "UNCLE: It’s because of POKéMON that\n"
	.string "this boy’s got more pep, I suppose…\l"
	.string "But he’s become a bit too peppy…$"

MauvilleCity_Text_1DF845: @ 81DF845
	.string "WALLY: Aww, UNCLE, please?\p"
	.string "I want to challenge this GYM and see\n"
	.string "how much better I’ve become.\p"
	.string "Please? May I, please?$"

MauvilleCity_Text_1DF8B9: @ 81DF8B9
	.string "UNCLE: Now hold on, WALLY.\p"
	.string "Since you started living with POKéMON,\n"
	.string "you have grown quite a lot stronger.\p"
	.string "But don’t you think you’re pushing it\n"
	.string "to suddenly challenge a GYM?$"

MauvilleCity_Text_1DF963: @ 81DF963
	.string "WALLY: I’m not pushing it.\p"
	.string "If I combine forces with RALTS,\n"
	.string "we can beat anyone!$"

MauvilleCity_Text_1DF9B2: @ 81DF9B2
	.string "WALLY: Oh! Hi, {PLAYER}!\p"
	.string "I’ve gotten a lot stronger since\n"
	.string "we met.\p"
	.string "{PLAYER}, I want you and my UNCLE to\n"
	.string "understand that.\p"
	.string "{PLAYER}, please, will you have\n"
	.string "a battle with me?$"

MauvilleCity_Text_1DFA4A: @ 81DFA4A
	.string "WALLY: Oh… If you won’t battle me,\n"
	.string "{PLAYER}, my UNCLE won’t know that I’ve\l"
	.string "become really strong.$"

MauvilleCity_Text_1DFAA5: @ 81DFAA5
	.string "UNCLE: {PLAYER}{KUN}, was it?\n"
	.string "On WALLY’s behalf, can I ask you to\l"
	.string "battle with him just this once?\p"
	.string "I don’t think he’s going to listen to\n"
	.string "any reason the way he is now.$"

MauvilleCity_Text_1DFB42: @ 81DFB42
	.string "WALLY: {PLAYER}, please!\n"
	.string "Battle with me, please.$"

MauvilleCity_Text_1DFB6D: @ 81DFB6D
	.string "WALLY: {PLAYER}, thank you.\p"
	.string "Okay… Here I come!$"

MauvilleCity_Text_1DFB96: @ 81DFB96
	.string "WALLY: … … … … … … …\p"
	.string "… … … … … … … …\p"
	.string "I lost…$"

MauvilleCity_Text_1DFBC3: @ 81DFBC3
	.string "WALLY: UNCLE…\n"
	.string "I’ll go back to VERDANTURF…$"

MauvilleCity_Text_1DFBED: @ 81DFBED
	.string "{PLAYER}, thank you.\n"
	.string "Being a TRAINER is tough, isn’t it?\p"
	.string "It’s not enough just to have POKéMON\n"
	.string "and make them battle. That isn’t what\l"
	.string "being a real TRAINER is about.$"

MauvilleCity_Text_1DFC8A: @ 81DFC8A
	.string "UNCLE: WALLY, there’s no need to be so\n"
	.string "down on yourself.\p"
	.string "Why, what’s keeping you from becoming\n"
	.string "stronger and stronger?\p"
	.string "Come on, let’s go home.\n"
	.string "Everyone’s waiting for you.$"

MauvilleCity_Text_1DFD34: @ 81DFD34
	.string "UNCLE: {PLAYER}{KUN}, it just dawned on me\n"
	.string "that you must be the TRAINER who kept\l"
	.string "an eye out for WALLY when he caught\l"
	.string "his POKéMON.\p"
	.string "Why don’t you visit us in VERDANTURF\n"
	.string "sometime?\l"
	.string "I’m sure WALLY would enjoy it.$"


MauvilleCity_Text_1DFDFB: @ 81DFDFB
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "WALLY: Oh, hello, {PLAYER}!\p"
	.string "I just wanted to tell you that\n"
	.string "my uncle bought me a POKéNAV!\p"
	.string "Now I can get in touch with you\n"
	.string "anytime, {PLAYER}!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

MauvilleCity_Text_1DFEB4: @ 81DFEB4
	.string "Registered WALLY\n"
	.string "in the POKéNAV.$"

MauvilleCity_Text_1DFED5: @ 81DFED5
	.string "SCOTT: Hehe…\n"
	.string "I was watching that match!\p"
	.string "You’re friends with that boy WALLY,\n"
	.string "aren’t you?\p"
	.string "But you didn’t hold anything back\n"
	.string "and beat him impressively.\p"
	.string "Yeah! That’s what a real POKéMON\n"
	.string "battle is all about!\p"
	.string "I idolize TRAINERS like that!\p"
	.string "… … … … … …\n"
	.string "I’ll be cheering for you!$"

MauvilleCity_Text_1DFFE4: @ 81DFFE4
	.string "WATTSON: Oh, {PLAYER}{KUN}!\n"
	.string "You look like you have a lot of zip!\l"
	.string "That’s a good thing, wahahahaha!\p"
	.string "Fine! I’ve decided!\n"
	.string "I need a favor, {PLAYER}{KUN}!\p"
	.string "MAUVILLE CITY has an underground\n"
	.string "sector called NEW MAUVILLE.\p"
	.string "{PLAYER}{KUN}, I’d like you to go there and\n"
	.string "switch off the GENERATOR.\p"
	.string "The GENERATOR has been running a bit\n"
	.string "haywire. It’s getting unsafe.\p"
	.string "Here, this is the KEY to get into\n"
	.string "NEW MAUVILLE.$"

MauvilleCity_Text_1E0154: @ 81E0154
	.string "WATTSON: Don’t you worry about it.\n"
	.string "It won’t be a challenge to you.\p"
	.string "The entrance to NEW MAUVILLE is just\n"
	.string "a short SURF away from ROUTE 110.\p"
	.string "That’s it, then, you have my trust!\n"
	.string "Wahahahaha!$"

MauvilleCity_Text_1E020E: @ 81E020E
	.string "WATTSON: Wahahahaha!\p"
	.string "I knew it, {PLAYER}{KUN}! I knew I’d made\n"
	.string "the right choice asking you!\p"
	.string "This is my thanks--a TM containing\n"
	.string "THUNDERBOLT!\p"
	.string "Go on, you’ve earned it!$"

MauvilleCity_Text_1E02AA: @ 81E02AA
	.string "WATTSON: Wahahahaha!\p"
	.string "It pleases me to no end to see\n"
	.string "the young step up and take charge!$"

MauvilleCity_Text_1E0301: @ 81E0301
	.string "You know, it’s cool to have POKéMON\n"
	.string "battles and stuff…\p"
	.string "But if your POKéMON gets hurt,\n"
	.string "you have to nurse it back to health.$"

MauvilleCity_Text_1E037C: @ 81E037C
	.string "The roads of this town stretch north\n"
	.string "and south, and east and west.\p"
	.string "Because of that, we get all sorts of\n"
	.string "people coming through.$"

MauvilleCity_Text_1E03FB: @ 81E03FB
	.string "Have you been to RYDEL’S CYCLES yet?\p"
	.string "RYDEL, the owner, is a very generous\n"
	.string "man.$"

MauvilleCity_Text_1E044A: @ 81E044A
	.string "Even if you’re riding a BIKE,\n"
	.string "wild POKéMON could jump you.$"

MauvilleCity_Text_1E0485: @ 81E0485
	.string "MAUVILLE CITY\n"
	.string "“The bright and shiny city of fun!”$"

MauvilleCity_Text_1E04B7: @ 81E04B7
	.string "MAUVILLE CITY POKéMON GYM\n"
	.string "LEADER: WATTSON\l"
	.string "“The cheerfully electrifying man!”$"

MauvilleCity_Text_1E0504: @ 81E0504
	.string "“Ride in gravel and shake up your\n"
	.string "soul!”\l"
	.string "RYDEL’S CYCLES$"

MauvilleCity_Text_1E053C: @ 81E053C
	.string "“The play spot for all!”\n"
	.string "MAUVILLE GAME CORNER$"

MauvilleCity_Text_1E056A: @ 81E056A
	.string "Hi, do you check out TV at all?\p"
	.string "They’ve added a bunch of cool new\n"
	.string "shows recently.\p"
	.string "TV is so cool. I’ve seen my friends on\n"
	.string "TV just out of the blue.\p"
	.string "And, sometimes, they even put you on TV\n"
	.string "without telling you.\p"
	.string "I wish I would be on TV sometime.\p"
	.string "That’s why I think you should check\n"
	.string "out TVs whenever you can.$"

MauvilleCity_Text_1E0699: @ 81E0699
	.string "Hi, have you been checking out TVs?$"
