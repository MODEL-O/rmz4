@ FUN_08068458  entry 0x08068458  size 132
.thumb
.org 0x68458
FUN_08068458:
	push {r2, r6, lr}	@ 00068458 44b5
.org 0x6845a
	lsrs r5, r0, #2	@ 0006845a 8508
.org 0x6845c
	push {r4, lr}	@ 0006845c 10b5
.org 0x6845e
	adds r4, r0, #0	@ 0006845e 041c
.org 0x68460
	ldrb r2, [r4, #14]	@ 00068460 a27b
.org 0x68462
	adds r1, r2, #0	@ 00068462 111c
.org 0x68464
	cmp r1, #0	@ 00068464 0029
.org 0x68466
	bne.n 0x68472	@ 00068466 04d1
.org 0x68468
	movs r0, #16	@ 00068468 1020
.org 0x6846a
	strb r0, [r4, #18]	@ 0006846a a074
.org 0x6846c
	strb r1, [r4, #15]	@ 0006846c e173
.org 0x6846e
	adds r0, r2, #1	@ 0006846e 501c
.org 0x68470
	strb r0, [r4, #14]	@ 00068470 a073
.org 0x68472
	adds r0, r4, #0	@ 00068472 201c
.org 0x68474
	bl 0x1cff0	@ 00068474 b4f7bcfd
.org 0x68478
	ldrb r0, [r4, #15]	@ 00068478 e07b
.org 0x6847a
	cmp r0, #0	@ 0006847a 0028
.org 0x6847c
	bne.n 0x684a8	@ 0006847c 14d1
.org 0x6847e
	ldrb r0, [r4, #18]	@ 0006847e a07c
.org 0x68480
	subs r0, #1	@ 00068480 0138
.org 0x68482
	strb r0, [r4, #18]	@ 00068482 a074
.org 0x68484
	lsls r0, r0, #24	@ 00068484 0006
.org 0x68486
	lsrs r0, r0, #24	@ 00068486 000e
.org 0x68488
	cmp r0, #255	@ 00068488 ff28
.org 0x6848a
	bne.n 0x684dc	@ 0006848a 27d1
.org 0x6848c
	ldr r1, [pc, #20]	@ 0006848c 0549
.org 0x6848e
	adds r0, r4, #0	@ 0006848e 201c
.org 0x68490
	bl 0x1cf00	@ 00068490 b4f736fd
.org 0x68494
	adds r0, r4, #0	@ 00068494 201c
.org 0x68496
	bl 0x1cff0	@ 00068496 b4f7abfd
.org 0x6849a
	ldrb r0, [r4, #15]	@ 0006849a e07b
.org 0x6849c
	adds r0, #1	@ 0006849c 0130
.org 0x6849e
	strb r0, [r4, #15]	@ 0006849e e073
.org 0x684a0
	b.n 0x684dc	@ 000684a0 1ce0
.org 0x684a2
	.byte 0x00	@ 000684a2 data
.org 0x684a3
	.byte 0x00	@ 000684a3 data
.org 0x684a4
	.byte 0x20,0xa9,0x00,0x00	@ 000684a4 data
.org 0x684a8
	adds r0, r4, #0	@ 000684a8 201c
.org 0x684aa
	adds r0, #113	@ 000684aa 7130
.org 0x684ac
	ldrb r0, [r0, #0]	@ 000684ac 0078
.org 0x684ae
	lsls r0, r0, #24	@ 000684ae 0006
.org 0x684b0
	asrs r0, r0, #24	@ 000684b0 0016
.org 0x684b2
	cmp r0, #4	@ 000684b2 0428
.org 0x684b4
	bne.n 0x684ca	@ 000684b4 09d1
.org 0x684b6
	adds r0, r4, #0	@ 000684b6 201c
.org 0x684b8
	adds r0, #114	@ 000684b8 7230
.org 0x684ba
	ldrb r0, [r0, #0]	@ 000684ba 0078
.org 0x684bc
	lsls r0, r0, #24	@ 000684bc 0006
.org 0x684be
	asrs r0, r0, #24	@ 000684be 0016
.org 0x684c0
	cmp r0, #1	@ 000684c0 0128
.org 0x684c2
	bgt.n 0x684ca	@ 000684c2 02dc
.org 0x684c4
	ldr r0, [pc, #28]	@ 000684c4 0748
.org 0x684c6
	bl 0x2b10	@ 000684c6 9af723fb
.org 0x684ca
	adds r0, r4, #0	@ 000684ca 201c
.org 0x684cc
	adds r0, #115	@ 000684cc 7330
.org 0x684ce
	ldrb r0, [r0, #0]	@ 000684ce 0078
.org 0x684d0
	cmp r0, #3	@ 000684d0 0328
.org 0x684d2
	bne.n 0x684dc	@ 000684d2 03d1
.org 0x684d4
	movs r1, #0	@ 000684d4 0021
.org 0x684d6
	movs r0, #34	@ 000684d6 2220
.org 0x684d8
	strb r0, [r4, #13]	@ 000684d8 6073
.org 0x684da
	strb r1, [r4, #14]	@ 000684da a173
