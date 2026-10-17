@ FUN_080414d4  entry 0x080414d4  size 152
.thumb
.org 0x414d4
FUN_080414d4:
	push {r4, r5, r6, r7, lr}	@ 000414d4 f0b5
.org 0x414d6
	sub sp, #8	@ 000414d6 82b0
.org 0x414d8
	adds r7, r0, #0	@ 000414d8 071c
.org 0x414da
	ldr r1, [pc, #128]	@ 000414da 2049
.org 0x414dc
	ldrb r0, [r7, #9]	@ 000414dc 787a
.org 0x414de
	lsls r0, r0, #2	@ 000414de 8000
.org 0x414e0
	adds r0, r0, r1	@ 000414e0 4018
.org 0x414e2
	movs r1, #1	@ 000414e2 0121
.org 0x414e4
	str r1, [r7, #12]	@ 000414e4 f960
.org 0x414e6
	ldr r0, [r0, #0]	@ 000414e6 0068
.org 0x414e8
	ldr r0, [r0, #4]	@ 000414e8 4068
.org 0x414ea
	str r0, [r7, #20]	@ 000414ea 7861
.org 0x414ec
	adds r0, r7, #0	@ 000414ec 381c
.org 0x414ee
	bl 0x1cc9c	@ 000414ee dbf7d5fb
.org 0x414f2
	adds r0, r7, #0	@ 000414f2 381c
.org 0x414f4
	bl 0x1ceec	@ 000414f4 dbf7fafc
.org 0x414f8
	ldrb r1, [r7, #10]	@ 000414f8 b97a
.org 0x414fa
	movs r0, #1	@ 000414fa 0120
.org 0x414fc
	movs r6, #0	@ 000414fc 0026
.org 0x414fe
	orrs r0, r1	@ 000414fe 0843
.org 0x41500
	movs r1, #2	@ 00041500 0221
.org 0x41502
	orrs r0, r1	@ 00041502 0843
.org 0x41504
	strb r0, [r7, #10]	@ 00041504 b872
.org 0x41506
	ldr r1, [pc, #88]	@ 00041506 1649
.org 0x41508
	adds r0, r7, #0	@ 00041508 381c
.org 0x4150a
	bl 0x1cf00	@ 0004150a dbf7f9fc
.org 0x4150e
	adds r0, r7, #0	@ 0004150e 381c
.org 0x41510
	bl 0x1cff0	@ 00041510 dbf76efd
.org 0x41514
	ldrb r1, [r7, #10]	@ 00041514 b97a
.org 0x41516
	movs r0, #4	@ 00041516 0420
.org 0x41518
	orrs r0, r1	@ 00041518 0843
.org 0x4151a
	strb r0, [r7, #10]	@ 0004151a b872
.org 0x4151c
	adds r4, r7, #0	@ 0004151c 3c1c
.org 0x4151e
	adds r4, #116	@ 0004151e 7434
.org 0x41520
	ldr r5, [pc, #64]	@ 00041520 104d
.org 0x41522
	adds r2, r7, #0	@ 00041522 3a1c
.org 0x41524
	adds r2, #84	@ 00041524 5432
.org 0x41526
	adds r0, r4, #0	@ 00041526 201c
.org 0x41528
	adds r1, r5, #0	@ 00041528 291c
.org 0x4152a
	movs r3, #1	@ 0004152a 0123
.org 0x4152c
	bl 0x5760	@ 0004152c c4f718f9
.org 0x41530
	str r7, [r4, #44]	@ 00041530 e762
.org 0x41532
	str r6, [r4, #36]	@ 00041532 6662
.org 0x41534
	movs r3, #1	@ 00041534 0123
.org 0x41536
	negs r3, r3	@ 00041536 5b42
.org 0x41538
	str r3, [sp, #0]	@ 00041538 0093
.org 0x4153a
	str r3, [sp, #4]	@ 0004153a 0193
.org 0x4153c
	adds r0, r4, #0	@ 0004153c 201c
.org 0x4153e
	adds r1, r5, #0	@ 0004153e 291c
.org 0x41540
	movs r2, #6	@ 00041540 0622
.org 0x41542
	bl 0x5794	@ 00041542 c4f727f9
.org 0x41546
	ldr r0, [pc, #32]	@ 00041546 0848
.org 0x41548
	str r0, [r4, #36]	@ 00041548 6062
.org 0x4154a
	ldrb r1, [r7, #10]	@ 0004154a b97a
.org 0x4154c
	movs r0, #16	@ 0004154c 1020
.org 0x4154e
	ands r0, r1	@ 0004154e 0840
.org 0x41550
	cmp r0, #0	@ 00041550 0028
.org 0x41552
	beq.n 0x4156c	@ 00041552 0bd0
.org 0x41554
	movs r0, #192	@ 00041554 c020
.org 0x41556
	lsls r0, r0, #3	@ 00041556 c000
.org 0x41558
	b.n 0x4156e	@ 00041558 09e0
.org 0x4155a
	.byte 0x00	@ 0004155a data
.org 0x4155b
	.byte 0x00	@ 0004155b data
.org 0x4155c
	.byte 0xf8,0x39,0x85,0x08	@ 0004155c data
.org 0x41560
	.byte 0x16,0x80,0x00,0x00	@ 00041560 data
.org 0x41564
	.byte 0xd0,0x59,0x85,0x08	@ 00041564 data
.org 0x41568
	.byte 0x09,0x16,0x04,0x08	@ 00041568 data
