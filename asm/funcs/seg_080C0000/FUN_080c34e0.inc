@ FUN_080c34e0  entry 0x080c34e0  size 76
.thumb
.org 0xc34e0
FUN_080c34e0:
	push {r4, r5, lr}	@ 000c34e0 30b5
.org 0xc34e2
	adds r4, r0, #0	@ 000c34e2 041c
.org 0xc34e4
	lsls r1, r1, #24	@ 000c34e4 0906
.org 0xc34e6
	lsrs r5, r1, #24	@ 000c34e6 0d0e
.org 0xc34e8
	ldr r0, [pc, #64]	@ 000c34e8 1048
.org 0xc34ea
	ldr r0, [r0, #0]	@ 000c34ea 0068
.org 0xc34ec
	bl 0x5500	@ 000c34ec 42f708f8
.org 0xc34f0
	adds r3, r0, #0	@ 000c34f0 031c
.org 0xc34f2
	cmp r3, #0	@ 000c34f2 002b
.org 0xc34f4
	beq.n 0xc3526	@ 000c34f4 17d0
.org 0xc34f6
	adds r1, r3, #0	@ 000c34f6 191c
.org 0xc34f8
	adds r1, #37	@ 000c34f8 2531
.org 0xc34fa
	movs r2, #0	@ 000c34fa 0022
.org 0xc34fc
	movs r0, #8	@ 000c34fc 0820
.org 0xc34fe
	strb r0, [r1, #0]	@ 000c34fe 0870
.org 0xc3500
	ldr r1, [pc, #44]	@ 000c3500 0b49
.org 0xc3502
	movs r0, #18	@ 000c3502 1220
.org 0xc3504
	strb r0, [r3, #9]	@ 000c3504 5872
.org 0xc3506
	ldr r0, [r1, #72]	@ 000c3506 886c
.org 0xc3508
	ldr r0, [r0, #0]	@ 000c3508 0068
.org 0xc350a
	str r0, [r3, #20]	@ 000c350a 5861
.org 0xc350c
	movs r0, #0	@ 000c350c 0020
.org 0xc350e
	strh r2, [r3, #32]	@ 000c350e 1a84
.org 0xc3510
	adds r1, r3, #0	@ 000c3510 191c
.org 0xc3512
	adds r1, #34	@ 000c3512 2231
.org 0xc3514
	strb r0, [r1, #0]	@ 000c3514 0870
.org 0xc3516
	str r4, [r3, #40]	@ 000c3516 9c62
.org 0xc3518
	ldr r0, [r4, #84]	@ 000c3518 606d
.org 0xc351a
	ldr r1, [r4, #88]	@ 000c351a a16d
.org 0xc351c
	str r0, [r3, #84]	@ 000c351c 5865
.org 0xc351e
	str r1, [r3, #88]	@ 000c351e 9965
.org 0xc3520
	movs r0, #1	@ 000c3520 0120
.org 0xc3522
	strb r0, [r3, #16]	@ 000c3522 1874
.org 0xc3524
	strb r5, [r3, #17]	@ 000c3524 5d74
.org 0xc3526
	pop {r4, r5}	@ 000c3526 30bc
.org 0xc3528
	pop {r0}	@ 000c3528 01bc
.org 0xc352a
	bx r0	@ 000c352a 0047
