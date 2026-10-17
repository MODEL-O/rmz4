@ FUN_080434e0  entry 0x080434e0  size 86
.thumb
.org 0x434e0
FUN_080434e0:
	push {r4, lr}	@ 000434e0 10b5
.org 0x434e2
	adds r2, r0, #0	@ 000434e2 021c
.org 0x434e4
	ldr r0, [r2, #20]	@ 000434e4 5069
.org 0x434e6
	movs r1, #1	@ 000434e6 0121
.org 0x434e8
	ands r0, r1	@ 000434e8 0840
.org 0x434ea
	cmp r0, #0	@ 000434ea 0028
.org 0x434ec
	beq.n 0x43530	@ 000434ec 20d0
.org 0x434ee
	ldr r0, [r2, #12]	@ 000434ee d068
.org 0x434f0
	ldr r0, [r0, #44]	@ 000434f0 c06a
.org 0x434f2
	ldr r4, [r2, #44]	@ 000434f2 d46a
.org 0x434f4
	movs r2, #0	@ 000434f4 0022
.org 0x434f6
	ldr r1, [r0, #84]	@ 000434f6 416d
.org 0x434f8
	ldr r0, [r4, #84]	@ 000434f8 606d
.org 0x434fa
	cmp r1, r0	@ 000434fa 8142
.org 0x434fc
	ble.n 0x43500	@ 000434fc 00dd
.org 0x434fe
	movs r2, #1	@ 000434fe 0122
.org 0x43500
	adds r0, r4, #0	@ 00043500 201c
.org 0x43502
	adds r0, #188	@ 00043502 bc30
.org 0x43504
	strb r2, [r0, #0]	@ 00043504 0270
.org 0x43506
	ldr r0, [r4, #40]	@ 00043506 a06a
.org 0x43508
	movs r1, #5	@ 00043508 0521
.org 0x4350a
	movs r2, #0	@ 0004350a 0022
.org 0x4350c
	bl 0x3a578	@ 0004350c f7f734f8
.org 0x43510
	lsls r0, r0, #24	@ 00043510 0006
.org 0x43512
	cmp r0, #0	@ 00043512 0028
.org 0x43514
	beq.n 0x43530	@ 00043514 0cd0
.org 0x43516
	adds r1, r4, #0	@ 00043516 211c
.org 0x43518
	adds r1, #189	@ 00043518 bd31
.org 0x4351a
	movs r0, #0	@ 0004351a 0020
.org 0x4351c
	strb r0, [r1, #0]	@ 0004351c 0870
.org 0x4351e
	ldr r1, [pc, #24]	@ 0004351e 0649
.org 0x43520
	ldrb r0, [r4, #9]	@ 00043520 607a
.org 0x43522
	lsls r0, r0, #2	@ 00043522 8000
.org 0x43524
	adds r0, r0, r1	@ 00043524 4018
.org 0x43526
	movs r1, #2	@ 00043526 0221
.org 0x43528
	str r1, [r4, #12]	@ 00043528 e160
.org 0x4352a
	ldr r0, [r0, #0]	@ 0004352a 0068
.org 0x4352c
	ldr r0, [r0, #8]	@ 0004352c 8068
.org 0x4352e
	str r0, [r4, #20]	@ 0004352e 6061
.org 0x43530
	pop {r4}	@ 00043530 10bc
.org 0x43532
	pop {r0}	@ 00043532 01bc
.org 0x43534
	bx r0	@ 00043534 0047
