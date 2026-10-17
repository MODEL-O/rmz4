@ FUN_080ff2dc  entry 0x080ff2dc  size 152
.thumb
.org 0xff2dc
FUN_080ff2dc:
	push {r2, r3, r4, r5, lr}	@ 000ff2dc 3cb5
.org 0xff2de
	lsrs r6, r0, #2	@ 000ff2de 8608
.org 0xff2e0
	.byte 0x59,0xf9	@ 000ff2e0 (raw)
.org 0xff2e2
	.byte 0x0f,0x08	@ 000ff2e2 (raw)
.org 0xff2e4
	push {r2, r4, r6, r7, lr}	@ 000ff2e4 d4b5
.org 0xff2e6
	lsrs r6, r0, #2	@ 000ff2e6 8608
.org 0xff2e8
	str r2, [sp, #1008]	@ 000ff2e8 fc92
.org 0xff2ea
	lsrs r6, r0, #2	@ 000ff2ea 8608
.org 0xff2ec
	push {r4, r5, lr}	@ 000ff2ec 30b5
.org 0xff2ee
	adds r4, r0, #0	@ 000ff2ee 041c
.org 0xff2f0
	bl 0x1cc9c	@ 000ff2f0 1df7d4fc
.org 0xff2f4
	ldrb r1, [r4, #10]	@ 000ff2f4 a17a
.org 0xff2f6
	movs r0, #1	@ 000ff2f6 0120
.org 0xff2f8
	orrs r0, r1	@ 000ff2f8 0843
.org 0xff2fa
	movs r1, #2	@ 000ff2fa 0221
.org 0xff2fc
	orrs r0, r1	@ 000ff2fc 0843
.org 0xff2fe
	strb r0, [r4, #10]	@ 000ff2fe a072
.org 0xff300
	ldr r1, [pc, #112]	@ 000ff300 1c49
.org 0xff302
	adds r0, r4, #0	@ 000ff302 201c
.org 0xff304
	bl 0x1cf00	@ 000ff304 1df7fcfd
.org 0xff308
	adds r0, r4, #0	@ 000ff308 201c
.org 0xff30a
	bl 0x1cff0	@ 000ff30a 1df771fe
.org 0xff30e
	movs r2, #0	@ 000ff30e 0022
.org 0xff310
	ldrb r1, [r4, #10]	@ 000ff310 a17a
.org 0xff312
	movs r0, #239	@ 000ff312 ef20
.org 0xff314
	ands r0, r1	@ 000ff314 0840
.org 0xff316
	strb r0, [r4, #10]	@ 000ff316 a072
.org 0xff318
	movs r5, #1	@ 000ff318 0125
.org 0xff31a
	adds r0, r4, #0	@ 000ff31a 201c
.org 0xff31c
	adds r0, #76	@ 000ff31c 4c30
.org 0xff31e
	strb r2, [r0, #0]	@ 000ff31e 0270
.org 0xff320
	adds r2, r4, #0	@ 000ff320 221c
.org 0xff322
	adds r2, #74	@ 000ff322 4a32
.org 0xff324
	ldrb r1, [r2, #0]	@ 000ff324 1178
.org 0xff326
	movs r0, #17	@ 000ff326 1120
.org 0xff328
	negs r0, r0	@ 000ff328 4042
.org 0xff32a
	ands r0, r1	@ 000ff32a 0840
.org 0xff32c
	strb r0, [r2, #0]	@ 000ff32c 1070
.org 0xff32e
	subs r2, #1	@ 000ff32e 013a
.org 0xff330
	ldrb r1, [r2, #0]	@ 000ff330 1178
.org 0xff332
	movs r0, #13	@ 000ff332 0d20
.org 0xff334
	negs r0, r0	@ 000ff334 4042
.org 0xff336
	ands r0, r1	@ 000ff336 0840
.org 0xff338
	movs r1, #4	@ 000ff338 0421
.org 0xff33a
	orrs r0, r1	@ 000ff33a 0843
.org 0xff33c
	strb r0, [r2, #0]	@ 000ff33c 1070
.org 0xff33e
	ldr r0, [r4, #84]	@ 000ff33e 606d
.org 0xff340
	ldr r1, [r4, #88]	@ 000ff340 a16d
.org 0xff342
	bl 0x8748	@ 000ff342 09f701fa
.org 0xff346
	str r0, [r4, #88]	@ 000ff346 a065
.org 0xff348
	adds r1, r4, #0	@ 000ff348 211c
.org 0xff34a
	adds r1, #184	@ 000ff34a b831
.org 0xff34c
	str r0, [r1, #0]	@ 000ff34c 0860
.org 0xff34e
	adds r0, r4, #0	@ 000ff34e 201c
.org 0xff350
	movs r1, #2	@ 000ff350 0221
.org 0xff352
	movs r2, #0	@ 000ff352 0022
.org 0xff354
	bl 0xff0b8	@ 000ff354 fff7b0fe
.org 0xff358
	ldr r1, [pc, #28]	@ 000ff358 0749
.org 0xff35a
	ldrb r0, [r4, #9]	@ 000ff35a 607a
.org 0xff35c
	lsls r0, r0, #2	@ 000ff35c 8000
.org 0xff35e
	adds r0, r0, r1	@ 000ff35e 4018
.org 0xff360
	str r5, [r4, #12]	@ 000ff360 e560
.org 0xff362
	ldr r0, [r0, #0]	@ 000ff362 0068
.org 0xff364
	ldr r0, [r0, #4]	@ 000ff364 4068
.org 0xff366
	str r0, [r4, #20]	@ 000ff366 6061
.org 0xff368
	adds r0, r4, #0	@ 000ff368 201c
.org 0xff36a
	bl 0xff134	@ 000ff36a fff7e3fe
.org 0xff36e
	pop {r4, r5}	@ 000ff36e 30bc
.org 0xff370
	pop {r0}	@ 000ff370 01bc
.org 0xff372
	bx r0	@ 000ff372 0047
