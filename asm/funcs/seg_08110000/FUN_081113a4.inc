@ FUN_081113a4  entry 0x081113a4  size 152
.thumb
.org 0x1113a4
FUN_081113a4:
	push {r4, r5, r6, r7, lr}	@ 001113a4 f0b5
.org 0x1113a6
	mov r7, sl	@ 001113a6 5746
.org 0x1113a8
	mov r6, r9	@ 001113a8 4e46
.org 0x1113aa
	mov r5, r8	@ 001113aa 4546
.org 0x1113ac
	push {r5, r6, r7}	@ 001113ac e0b4
.org 0x1113ae
	sub sp, #72	@ 001113ae 92b0
.org 0x1113b0
	adds r5, r0, #0	@ 001113b0 051c
.org 0x1113b2
	mov r1, sp	@ 001113b2 6946
.org 0x1113b4
	ldr r0, [pc, #48]	@ 001113b4 0c48
.org 0x1113b6
	ldmia r0!, {r2, r3, r4}	@ 001113b6 1cc8
.org 0x1113b8
	stmia r1!, {r2, r3, r4}	@ 001113b8 1cc1
.org 0x1113ba
	ldmia r0!, {r2, r3, r6}	@ 001113ba 4cc8
.org 0x1113bc
	stmia r1!, {r2, r3, r6}	@ 001113bc 4cc1
.org 0x1113be
	ldmia r0!, {r4, r6}	@ 001113be 50c8
.org 0x1113c0
	stmia r1!, {r4, r6}	@ 001113c0 50c1
.org 0x1113c2
	add r2, sp, #32	@ 001113c2 08aa
.org 0x1113c4
	adds r1, r2, #0	@ 001113c4 111c
.org 0x1113c6
	ldr r0, [pc, #36]	@ 001113c6 0948
.org 0x1113c8
	ldmia r0!, {r3, r4, r6}	@ 001113c8 58c8
.org 0x1113ca
	stmia r1!, {r3, r4, r6}	@ 001113ca 58c1
.org 0x1113cc
	ldmia r0!, {r3, r4, r6}	@ 001113cc 58c8
.org 0x1113ce
	stmia r1!, {r3, r4, r6}	@ 001113ce 58c1
.org 0x1113d0
	ldmia r0!, {r3, r4}	@ 001113d0 18c8
.org 0x1113d2
	stmia r1!, {r3, r4}	@ 001113d2 18c1
.org 0x1113d4
	ldrb r0, [r5, #7]	@ 001113d4 e879
.org 0x1113d6
	mov sl, r2	@ 001113d6 9246
.org 0x1113d8
	cmp r0, #4	@ 001113d8 0428
.org 0x1113da
	bls.n 0x1113de	@ 001113da 00d9
.org 0x1113dc
	b.n 0x111814	@ 001113dc 1ae2
.org 0x1113de
	lsls r0, r0, #2	@ 001113de 8000
.org 0x1113e0
	ldr r1, [pc, #12]	@ 001113e0 0349
.org 0x1113e2
	adds r0, r0, r1	@ 001113e2 4018
.org 0x1113e4
	ldr r0, [r0, #0]	@ 001113e4 0068
.org 0x1113e6
	mov pc, r0	@ 001113e6 8746
.org 0x1113e8
	.byte 0x6c,0x96,0x13,0x08	@ 001113e8 data
.org 0x1113ec
	.byte 0x8c,0x96,0x13,0x08	@ 001113ec data
.org 0x1113f0
	.byte 0xf4,0x13,0x11,0x08	@ 001113f0 data
.org 0x1113f4
	.byte 0x08,0x14,0x11,0x08	@ 001113f4 data
.org 0x1113f8
	.byte 0x2e,0x14,0x11,0x08	@ 001113f8 data
.org 0x1113fc
	.byte 0xf4,0x14,0x11,0x08	@ 001113fc data
.org 0x111400
	.byte 0x1a,0x16,0x11,0x08	@ 00111400 data
.org 0x111404
	.byte 0xec,0x16,0x11,0x08	@ 00111404 data
.org 0x111408
	.byte 0x4b	@ 00111408 data
.org 0x111409
	.byte 0x49	@ 00111409 data
.org 0x11140a
	.byte 0x00	@ 0011140a data
.org 0x11140b
	.byte 0x20	@ 0011140b data
.org 0x11140c
	.byte 0x08	@ 0011140c data
.org 0x11140d
	.byte 0x80	@ 0011140d data
.org 0x11140e
	.byte 0x4b	@ 0011140e data
.org 0x11140f
	.byte 0x4b	@ 0011140f data
.org 0x111410
	.byte 0x19	@ 00111410 data
.org 0x111411
	.byte 0x88	@ 00111411 data
.org 0x111412
	.byte 0x4b	@ 00111412 data
.org 0x111413
	.byte 0x48	@ 00111413 data
.org 0x111414
	.byte 0x08	@ 00111414 data
.org 0x111415
	.byte 0x40	@ 00111415 data
.org 0x111416
	.byte 0xf4	@ 00111416 data
.org 0x111417
	.byte 0x26	@ 00111417 data
.org 0x111418
	.byte 0xb6	@ 00111418 data
.org 0x111419
	.byte 0x01	@ 00111419 data
.org 0x11141a
	.byte 0x31	@ 0011141a data
.org 0x11141b
	.byte 0x1c	@ 0011141b data
.org 0x11141c
	.byte 0x00	@ 0011141c data
.org 0x11141d
	.byte 0x22	@ 0011141d data
.org 0x11141e
	.byte 0x08	@ 0011141e data
.org 0x11141f
	.byte 0x43	@ 0011141f data
.org 0x111420
	.byte 0x18	@ 00111420 data
.org 0x111421
	.byte 0x80	@ 00111421 data
.org 0x111422
	.byte 0x48	@ 00111422 data
.org 0x111423
	.byte 0x49	@ 00111423 data
.org 0x111424
	.byte 0x68	@ 00111424 data
.org 0x111425
	.byte 0x18	@ 00111425 data
.org 0x111426
	.byte 0x02	@ 00111426 data
.org 0x111427
	.byte 0x70	@ 00111427 data
.org 0x111428
	.byte 0xe8	@ 00111428 data
.org 0x111429
	.byte 0x79	@ 00111429 data
.org 0x11142a
	.byte 0x01	@ 0011142a data
.org 0x11142b
	.byte 0x30	@ 0011142b data
.org 0x11142c
	.byte 0xe8	@ 0011142c data
.org 0x11142d
	.byte 0x71	@ 0011142d data
.org 0x11142e
	.byte 0x29	@ 0011142e data
.org 0x11142f
	.byte 0x8a	@ 0011142f data
.org 0x111430
	.byte 0x95	@ 00111430 data
.org 0x111431
	.byte 0x22	@ 00111431 data
.org 0x111432
	.byte 0x92	@ 00111432 data
.org 0x111433
	.byte 0x00	@ 00111433 data
.org 0x111434
	.byte 0xa8	@ 00111434 data
.org 0x111435
	.byte 0x18	@ 00111435 data
.org 0x111436
	.byte 0x01	@ 00111436 data
.org 0x111437
	.byte 0x70	@ 00111437 data
.org 0x111438
	.byte 0x05	@ 00111438 data
.org 0x111439
	.byte 0x20	@ 00111439 data
.org 0x11143a
	.byte 0x28	@ 0011143a data
.org 0x11143b
	.byte 0x81	@ 0011143b data
