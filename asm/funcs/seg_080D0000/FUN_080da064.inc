@ FUN_080da064  entry 0x080da064  size 74
.thumb
.org 0xda064
FUN_080da064:
	push {r4, r5, lr}	@ 000da064 30b5
.org 0xda066
	adds r5, r0, #0	@ 000da066 051c
.org 0xda068
	ldr r0, [pc, #68]	@ 000da068 1148
.org 0xda06a
	ldr r0, [r0, #0]	@ 000da06a 0068
.org 0xda06c
	bl 0x5500	@ 000da06c 2bf748fa
.org 0xda070
	adds r4, r0, #0	@ 000da070 041c
.org 0xda072
	cmp r4, #0	@ 000da072 002c
.org 0xda074
	beq.n 0xda0a6	@ 000da074 17d0
.org 0xda076
	adds r1, r4, #0	@ 000da076 211c
.org 0xda078
	adds r1, #37	@ 000da078 2531
.org 0xda07a
	movs r3, #0	@ 000da07a 0023
.org 0xda07c
	movs r0, #1	@ 000da07c 0120
.org 0xda07e
	strb r0, [r1, #0]	@ 000da07e 0870
.org 0xda080
	ldr r0, [pc, #48]	@ 000da080 0c48
.org 0xda082
	movs r1, #33	@ 000da082 2121
.org 0xda084
	strb r1, [r4, #9]	@ 000da084 6172
.org 0xda086
	adds r0, #132	@ 000da086 8430
.org 0xda088
	ldr r0, [r0, #0]	@ 000da088 0068
.org 0xda08a
	ldr r0, [r0, #0]	@ 000da08a 0068
.org 0xda08c
	str r0, [r4, #20]	@ 000da08c 6061
.org 0xda08e
	movs r2, #0	@ 000da08e 0022
.org 0xda090
	strh r3, [r4, #32]	@ 000da090 2384
.org 0xda092
	adds r0, r4, #0	@ 000da092 201c
.org 0xda094
	adds r0, #34	@ 000da094 2230
.org 0xda096
	strb r2, [r0, #0]	@ 000da096 0270
.org 0xda098
	ldr r0, [r5, #0]	@ 000da098 2868
.org 0xda09a
	ldr r1, [r5, #4]	@ 000da09a 6968
.org 0xda09c
	str r0, [r4, #84]	@ 000da09c 6065
.org 0xda09e
	str r1, [r4, #88]	@ 000da09e a165
.org 0xda0a0
	strb r2, [r4, #16]	@ 000da0a0 2274
.org 0xda0a2
	movs r0, #2	@ 000da0a2 0220
.org 0xda0a4
	strb r0, [r4, #17]	@ 000da0a4 6074
.org 0xda0a6
	adds r0, r4, #0	@ 000da0a6 201c
.org 0xda0a8
	pop {r4, r5}	@ 000da0a8 30bc
.org 0xda0aa
	pop {r1}	@ 000da0aa 02bc
.org 0xda0ac
	bx r1	@ 000da0ac 0847
