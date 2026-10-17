@ FUN_080062e8  entry 0x080062e8  size 118
.thumb
.org 0x62e8
FUN_080062e8:
	push {r4, r5, r6, r7, lr}	@ 000062e8 f0b5
.org 0x62ea
	mov r7, sl	@ 000062ea 5746
.org 0x62ec
	mov r6, r9	@ 000062ec 4e46
.org 0x62ee
	mov r5, r8	@ 000062ee 4546
.org 0x62f0
	push {r5, r6, r7}	@ 000062f0 e0b4
.org 0x62f2
	adds r5, r0, #0	@ 000062f2 051c
.org 0x62f4
	mov sl, r1	@ 000062f4 8a46
.org 0x62f6
	cmp r5, #0	@ 000062f6 002d
.org 0x62f8
	beq.n 0x6350	@ 000062f8 2ad0
.org 0x62fa
	cmp r1, #0	@ 000062fa 0029
.org 0x62fc
	beq.n 0x6350	@ 000062fc 28d0
.org 0x62fe
	ldr r0, [r5, #12]	@ 000062fe e868
.org 0x6300
	mov r9, r0	@ 00006300 8146
.org 0x6302
	ldr r1, [r5, #16]	@ 00006302 2969
.org 0x6304
	mov r8, r1	@ 00006304 8846
.org 0x6306
	ldrh r7, [r5, #20]	@ 00006306 af8a
.org 0x6308
	ldrh r6, [r5, #22]	@ 00006308 ee8a
.org 0x630a
	mov r4, sl	@ 0000630a 5446
.org 0x630c
	cmp r4, #0	@ 0000630c 002c
.org 0x630e
	beq.n 0x634a	@ 0000630e 1cd0
.org 0x6310
	ldr r1, [r5, #8]	@ 00006310 a968
.org 0x6312
	ldr r0, [r4, #8]	@ 00006312 a068
.org 0x6314
	cmp r1, r0	@ 00006314 8142
.org 0x6316
	beq.n 0x6344	@ 00006316 15d0
.org 0x6318
	ldrh r2, [r4, #20]	@ 00006318 a28a
.org 0x631a
	adds r2, r7, r2	@ 0000631a ba18
.org 0x631c
	ldrh r0, [r4, #22]	@ 0000631c e08a
.org 0x631e
	adds r3, r6, r0	@ 0000631e 3318
.org 0x6320
	ldr r0, [r4, #12]	@ 00006320 e068
.org 0x6322
	mov r1, r9	@ 00006322 4946
.org 0x6324
	subs r0, r1, r0	@ 00006324 081a
.org 0x6326
	lsrs r1, r2, #1	@ 00006326 5108
.org 0x6328
	adds r0, r0, r1	@ 00006328 4018
.org 0x632a
	cmp r0, r2	@ 0000632a 9042
.org 0x632c
	bcs.n 0x6344	@ 0000632c 0ad2
.org 0x632e
	ldr r0, [r4, #16]	@ 0000632e 2069
.org 0x6330
	mov r1, r8	@ 00006330 4146
.org 0x6332
	subs r0, r1, r0	@ 00006332 081a
.org 0x6334
	lsrs r1, r3, #1	@ 00006334 5908
.org 0x6336
	adds r0, r0, r1	@ 00006336 4018
.org 0x6338
	cmp r0, r3	@ 00006338 9842
.org 0x633a
	bcs.n 0x6344	@ 0000633a 03d2
.org 0x633c
	adds r0, r5, #0	@ 0000633c 281c
.org 0x633e
	adds r1, r4, #0	@ 0000633e 211c
.org 0x6340
	bl 0x63d8	@ 00006340 00f04af8
.org 0x6344
	ldr r4, [r4, #0]	@ 00006344 2468
.org 0x6346
	cmp r4, #0	@ 00006346 002c
.org 0x6348
	bne.n 0x6310	@ 00006348 e2d1
.org 0x634a
	ldr r5, [r5, #0]	@ 0000634a 2d68
.org 0x634c
	cmp r5, #0	@ 0000634c 002d
.org 0x634e
	bne.n 0x62fe	@ 0000634e d6d1
.org 0x6350
	pop {r3, r4, r5}	@ 00006350 38bc
.org 0x6352
	mov r8, r3	@ 00006352 9846
.org 0x6354
	mov r9, r4	@ 00006354 a146
.org 0x6356
	mov sl, r5	@ 00006356 aa46
.org 0x6358
	pop {r4, r5, r6, r7}	@ 00006358 f0bc
.org 0x635a
	pop {r0}	@ 0000635a 01bc
.org 0x635c
	bx r0	@ 0000635c 0047
