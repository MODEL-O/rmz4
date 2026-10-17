@ FUN_080bd2fc  entry 0x080bd2fc  size 102
.thumb
.org 0xbd2fc
FUN_080bd2fc:
	push {r4, r5, r6, r7, lr}	@ 000bd2fc f0b5
.org 0xbd2fe
	mov r7, r9	@ 000bd2fe 4f46
.org 0xbd300
	mov r6, r8	@ 000bd300 4646
.org 0xbd302
	push {r6, r7}	@ 000bd302 c0b4
.org 0xbd304
	sub sp, #4	@ 000bd304 81b0
.org 0xbd306
	mov r8, r0	@ 000bd306 8046
.org 0xbd308
	adds r5, r1, #0	@ 000bd308 0d1c
.org 0xbd30a
	lsls r2, r2, #16	@ 000bd30a 1204
.org 0xbd30c
	lsrs r0, r2, #16	@ 000bd30c 100c
.org 0xbd30e
	mov r9, r0	@ 000bd30e 8146
.org 0xbd310
	asrs r4, r2, #16	@ 000bd310 1414
.org 0xbd312
	str r4, [sp, #0]	@ 000bd312 0094
.org 0xbd314
	mov r0, r8	@ 000bd314 4046
.org 0xbd316
	movs r1, #4	@ 000bd316 0421
.org 0xbd318
	adds r2, r5, #0	@ 000bd318 2a1c
.org 0xbd31a
	movs r3, #196	@ 000bd31a c423
.org 0xbd31c
	bl 0x5440	@ 000bd31c 48f790f8
.org 0xbd320
	movs r3, #0	@ 000bd320 0023
.org 0xbd322
	cmp r3, r4	@ 000bd322 a342
.org 0xbd324
	bge.n 0xbd346	@ 000bd324 0fda
.org 0xbd326
	movs r7, #196	@ 000bd326 c427
.org 0xbd328
	ldr r6, [pc, #56]	@ 000bd328 0e4e
.org 0xbd32a
	lsls r0, r3, #16	@ 000bd32a 1804
.org 0xbd32c
	asrs r0, r0, #16	@ 000bd32c 0014
.org 0xbd32e
	adds r2, r0, #0	@ 000bd32e 021c
.org 0xbd330
	muls r2, r7	@ 000bd330 7a43
.org 0xbd332
	adds r2, r2, r5	@ 000bd332 5219
.org 0xbd334
	ldrb r1, [r6, #0]	@ 000bd334 3178
.org 0xbd336
	adds r1, r1, r3	@ 000bd336 c918
.org 0xbd338
	strb r1, [r2, #28]	@ 000bd338 1177
.org 0xbd33a
	adds r0, #1	@ 000bd33a 0130
.org 0xbd33c
	lsls r0, r0, #16	@ 000bd33c 0004
.org 0xbd33e
	lsrs r3, r0, #16	@ 000bd33e 030c
.org 0xbd340
	asrs r0, r0, #16	@ 000bd340 0014
.org 0xbd342
	cmp r0, r4	@ 000bd342 a042
.org 0xbd344
	blt.n 0xbd32a	@ 000bd344 f1db
.org 0xbd346
	ldr r0, [pc, #28]	@ 000bd346 0748
.org 0xbd348
	ldrb r1, [r0, #0]	@ 000bd348 0178
.org 0xbd34a
	add r1, r9	@ 000bd34a 4944
.org 0xbd34c
	strb r1, [r0, #0]	@ 000bd34c 0170
.org 0xbd34e
	ldr r0, [pc, #24]	@ 000bd34e 0648
.org 0xbd350
	mov r1, r8	@ 000bd350 4146
.org 0xbd352
	str r1, [r0, #0]	@ 000bd352 0160
.org 0xbd354
	add sp, #4	@ 000bd354 01b0
.org 0xbd356
	pop {r3, r4}	@ 000bd356 18bc
.org 0xbd358
	mov r8, r3	@ 000bd358 9846
.org 0xbd35a
	mov r9, r4	@ 000bd35a a146
.org 0xbd35c
	pop {r4, r5, r6, r7}	@ 000bd35c f0bc
.org 0xbd35e
	pop {r0}	@ 000bd35e 01bc
.org 0xbd360
	bx r0	@ 000bd360 0047
