@ FUN_080c62fc  entry 0x080c62fc  size 70
.thumb
.org 0xc62fc
FUN_080c62fc:
	push {r4, r5, lr}	@ 000c62fc 30b5
.org 0xc62fe
	adds r4, r0, #0	@ 000c62fe 041c
.org 0xc6300
	lsls r1, r1, #24	@ 000c6300 0906
.org 0xc6302
	lsrs r5, r1, #24	@ 000c6302 0d0e
.org 0xc6304
	ldr r0, [pc, #60]	@ 000c6304 0f48
.org 0xc6306
	ldr r0, [r0, #0]	@ 000c6306 0068
.org 0xc6308
	bl 0x5500	@ 000c6308 3ff7faf8
.org 0xc630c
	adds r3, r0, #0	@ 000c630c 031c
.org 0xc630e
	cmp r3, #0	@ 000c630e 002b
.org 0xc6310
	beq.n 0xc633a	@ 000c6310 13d0
.org 0xc6312
	adds r1, r3, #0	@ 000c6312 191c
.org 0xc6314
	adds r1, #37	@ 000c6314 2531
.org 0xc6316
	movs r2, #0	@ 000c6316 0022
.org 0xc6318
	movs r0, #8	@ 000c6318 0820
.org 0xc631a
	strb r0, [r1, #0]	@ 000c631a 0870
.org 0xc631c
	ldr r1, [pc, #40]	@ 000c631c 0a49
.org 0xc631e
	movs r0, #26	@ 000c631e 1a20
.org 0xc6320
	strb r0, [r3, #9]	@ 000c6320 5872
.org 0xc6322
	ldr r0, [r1, #104]	@ 000c6322 886e
.org 0xc6324
	ldr r0, [r0, #0]	@ 000c6324 0068
.org 0xc6326
	str r0, [r3, #20]	@ 000c6326 5861
.org 0xc6328
	movs r0, #0	@ 000c6328 0020
.org 0xc632a
	strh r2, [r3, #32]	@ 000c632a 1a84
.org 0xc632c
	adds r1, r3, #0	@ 000c632c 191c
.org 0xc632e
	adds r1, #34	@ 000c632e 2231
.org 0xc6330
	strb r0, [r1, #0]	@ 000c6330 0870
.org 0xc6332
	str r4, [r3, #40]	@ 000c6332 9c62
.org 0xc6334
	movs r0, #1	@ 000c6334 0120
.org 0xc6336
	strb r0, [r3, #16]	@ 000c6336 1874
.org 0xc6338
	strb r5, [r3, #17]	@ 000c6338 5d74
.org 0xc633a
	adds r0, r3, #0	@ 000c633a 181c
.org 0xc633c
	pop {r4, r5}	@ 000c633c 30bc
.org 0xc633e
	pop {r1}	@ 000c633e 02bc
.org 0xc6340
	bx r1	@ 000c6340 0847
