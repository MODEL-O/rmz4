@ FUN_080d72e4  entry 0x080d72e4  size 124
.thumb
.org 0xd72e4
FUN_080d72e4:
	push {r4, r5, r6, r7, lr}	@ 000d72e4 f0b5
.org 0xd72e6
	mov r7, sl	@ 000d72e6 5746
.org 0xd72e8
	mov r6, r9	@ 000d72e8 4e46
.org 0xd72ea
	mov r5, r8	@ 000d72ea 4546
.org 0xd72ec
	push {r5, r6, r7}	@ 000d72ec e0b4
.org 0xd72ee
	mov r9, r0	@ 000d72ee 8146
.org 0xd72f0
	adds r6, r1, #0	@ 000d72f0 0e1c
.org 0xd72f2
	mov r8, r2	@ 000d72f2 9046
.org 0xd72f4
	lsls r3, r3, #24	@ 000d72f4 1b06
.org 0xd72f6
	lsrs r7, r3, #24	@ 000d72f6 1f0e
.org 0xd72f8
	movs r5, #0	@ 000d72f8 0025
.org 0xd72fa
	cmp r5, r7	@ 000d72fa bd42
.org 0xd72fc
	bge.n 0xd7352	@ 000d72fc 29da
.org 0xd72fe
	movs r4, #0	@ 000d72fe 0024
.org 0xd7300
	ldr r0, [pc, #92]	@ 000d7300 1748
.org 0xd7302
	mov sl, r0	@ 000d7302 8246
.org 0xd7304
	ldr r0, [pc, #92]	@ 000d7304 1748
.org 0xd7306
	ldr r0, [r0, #0]	@ 000d7306 0068
.org 0xd7308
	bl 0x5500	@ 000d7308 2ef7faf8
.org 0xd730c
	adds r1, r0, #0	@ 000d730c 011c
.org 0xd730e
	cmp r1, #0	@ 000d730e 0029
.org 0xd7310
	beq.n 0xd734c	@ 000d7310 1cd0
.org 0xd7312
	adds r2, r1, #0	@ 000d7312 0a1c
.org 0xd7314
	adds r2, #37	@ 000d7314 2532
.org 0xd7316
	movs r0, #1	@ 000d7316 0120
.org 0xd7318
	strb r0, [r2, #0]	@ 000d7318 1070
.org 0xd731a
	movs r0, #23	@ 000d731a 1720
.org 0xd731c
	strb r0, [r1, #9]	@ 000d731c 4872
.org 0xd731e
	mov r2, sl	@ 000d731e 5246
.org 0xd7320
	ldr r0, [r2, #92]	@ 000d7320 d06d
.org 0xd7322
	ldr r0, [r0, #0]	@ 000d7322 0068
.org 0xd7324
	str r0, [r1, #20]	@ 000d7324 4861
.org 0xd7326
	strh r4, [r1, #32]	@ 000d7326 0c84
.org 0xd7328
	adds r0, r1, #0	@ 000d7328 081c
.org 0xd732a
	adds r0, #34	@ 000d732a 2230
.org 0xd732c
	strb r4, [r0, #0]	@ 000d732c 0470
.org 0xd732e
	strb r4, [r1, #16]	@ 000d732e 0c74
.org 0xd7330
	strb r5, [r1, #17]	@ 000d7330 4d74
.org 0xd7332
	mov r0, r9	@ 000d7332 4846
.org 0xd7334
	str r0, [r1, #40]	@ 000d7334 8862
.org 0xd7336
	mov r2, r8	@ 000d7336 4246
.org 0xd7338
	str r2, [r1, #116]	@ 000d7338 4a67
.org 0xd733a
	ldr r0, [r6, #0]	@ 000d733a 3068
.org 0xd733c
	str r0, [r1, #84]	@ 000d733c 4865
.org 0xd733e
	ldr r0, [r6, #4]	@ 000d733e 7068
.org 0xd7340
	str r0, [r1, #88]	@ 000d7340 8865
.org 0xd7342
	adds r0, r1, #0	@ 000d7342 081c
.org 0xd7344
	adds r0, #120	@ 000d7344 7830
.org 0xd7346
	strb r4, [r0, #0]	@ 000d7346 0470
.org 0xd7348
	adds r0, #1	@ 000d7348 0130
.org 0xd734a
	strb r4, [r0, #0]	@ 000d734a 0470
.org 0xd734c
	adds r5, #1	@ 000d734c 0135
.org 0xd734e
	cmp r5, r7	@ 000d734e bd42
.org 0xd7350
	blt.n 0xd7304	@ 000d7350 d8db
.org 0xd7352
	pop {r3, r4, r5}	@ 000d7352 38bc
.org 0xd7354
	mov r8, r3	@ 000d7354 9846
.org 0xd7356
	mov r9, r4	@ 000d7356 a146
.org 0xd7358
	mov sl, r5	@ 000d7358 aa46
.org 0xd735a
	pop {r4, r5, r6, r7}	@ 000d735a f0bc
.org 0xd735c
	pop {r0}	@ 000d735c 01bc
.org 0xd735e
	bx r0	@ 000d735e 0047
