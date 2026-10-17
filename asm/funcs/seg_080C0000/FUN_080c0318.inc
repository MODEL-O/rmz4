@ FUN_080c0318  entry 0x080c0318  size 66
.thumb
.org 0xc0318
FUN_080c0318:
	push {r4, lr}	@ 000c0318 10b5
.org 0xc031a
	adds r4, r0, #0	@ 000c031a 041c
.org 0xc031c
	ldr r0, [pc, #60]	@ 000c031c 0f48
.org 0xc031e
	ldr r0, [r0, #0]	@ 000c031e 0068
.org 0xc0320
	bl 0x5500	@ 000c0320 45f7eef8
.org 0xc0324
	adds r3, r0, #0	@ 000c0324 031c
.org 0xc0326
	cmp r3, #0	@ 000c0326 002b
.org 0xc0328
	beq.n 0xc0352	@ 000c0328 13d0
.org 0xc032a
	adds r1, r3, #0	@ 000c032a 191c
.org 0xc032c
	adds r1, #37	@ 000c032c 2531
.org 0xc032e
	movs r2, #0	@ 000c032e 0022
.org 0xc0330
	movs r0, #8	@ 000c0330 0820
.org 0xc0332
	strb r0, [r1, #0]	@ 000c0332 0870
.org 0xc0334
	ldr r1, [pc, #40]	@ 000c0334 0a49
.org 0xc0336
	movs r0, #11	@ 000c0336 0b20
.org 0xc0338
	strb r0, [r3, #9]	@ 000c0338 5872
.org 0xc033a
	ldr r0, [r1, #44]	@ 000c033a c86a
.org 0xc033c
	ldr r0, [r0, #0]	@ 000c033c 0068
.org 0xc033e
	str r0, [r3, #20]	@ 000c033e 5861
.org 0xc0340
	movs r1, #0	@ 000c0340 0021
.org 0xc0342
	strh r2, [r3, #32]	@ 000c0342 1a84
.org 0xc0344
	adds r0, r3, #0	@ 000c0344 181c
.org 0xc0346
	adds r0, #34	@ 000c0346 2230
.org 0xc0348
	strb r1, [r0, #0]	@ 000c0348 0170
.org 0xc034a
	str r4, [r3, #40]	@ 000c034a 9c62
.org 0xc034c
	strb r1, [r3, #16]	@ 000c034c 1974
.org 0xc034e
	adds r0, #150	@ 000c034e 9630
.org 0xc0350
	strb r1, [r0, #0]	@ 000c0350 0170
.org 0xc0352
	adds r0, r3, #0	@ 000c0352 181c
.org 0xc0354
	pop {r4}	@ 000c0354 10bc
.org 0xc0356
	pop {r1}	@ 000c0356 02bc
.org 0xc0358
	bx r1	@ 000c0358 0847
