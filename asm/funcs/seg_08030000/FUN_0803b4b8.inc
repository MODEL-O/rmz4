@ FUN_0803b4b8  entry 0x0803b4b8  size 132
.thumb
.org 0x3b4b8
FUN_0803b4b8:
	push {r4, lr}	@ 0003b4b8 10b5
.org 0x3b4ba
	adds r4, r0, #0	@ 0003b4ba 041c
.org 0x3b4bc
	adds r3, r4, #0	@ 0003b4bc 231c
.org 0x3b4be
	adds r3, #180	@ 0003b4be b433
.org 0x3b4c0
	ldrb r0, [r3, #12]	@ 0003b4c0 187b
.org 0x3b4c2
	cmp r0, #0	@ 0003b4c2 0028
.org 0x3b4c4
	beq.n 0x3b524	@ 0003b4c4 2ed0
.org 0x3b4c6
	ldrb r0, [r4, #16]	@ 0003b4c6 207c
.org 0x3b4c8
	cmp r0, #5	@ 0003b4c8 0528
.org 0x3b4ca
	bne.n 0x3b4e8	@ 0003b4ca 0dd1
.org 0x3b4cc
	adds r0, r4, #0	@ 0003b4cc 201c
.org 0x3b4ce
	adds r0, #140	@ 0003b4ce 8c30
.org 0x3b4d0
	movs r1, #0	@ 0003b4d0 0021
.org 0x3b4d2
	str r1, [r0, #0]	@ 0003b4d2 0160
.org 0x3b4d4
	adds r0, #4	@ 0003b4d4 0430
.org 0x3b4d6
	str r1, [r0, #0]	@ 0003b4d6 0160
.org 0x3b4d8
	adds r0, #4	@ 0003b4d8 0430
.org 0x3b4da
	strb r1, [r0, #0]	@ 0003b4da 0170
.org 0x3b4dc
	ldrb r2, [r4, #10]	@ 0003b4dc a27a
.org 0x3b4de
	movs r0, #251	@ 0003b4de fb20
.org 0x3b4e0
	ands r0, r2	@ 0003b4e0 1040
.org 0x3b4e2
	strb r0, [r4, #10]	@ 0003b4e2 a072
.org 0x3b4e4
	strb r1, [r3, #12]	@ 0003b4e4 1973
.org 0x3b4e6
	b.n 0x3b53a	@ 0003b4e6 28e0
.org 0x3b4e8
	ldrb r1, [r4, #10]	@ 0003b4e8 a17a
.org 0x3b4ea
	movs r0, #254	@ 0003b4ea fe20
.org 0x3b4ec
	ands r0, r1	@ 0003b4ec 0840
.org 0x3b4ee
	movs r2, #0	@ 0003b4ee 0022
.org 0x3b4f0
	movs r1, #253	@ 0003b4f0 fd21
.org 0x3b4f2
	ands r0, r1	@ 0003b4f2 0840
.org 0x3b4f4
	strb r0, [r4, #10]	@ 0003b4f4 a072
.org 0x3b4f6
	adds r0, r4, #0	@ 0003b4f6 201c
.org 0x3b4f8
	adds r0, #140	@ 0003b4f8 8c30
.org 0x3b4fa
	str r2, [r0, #0]	@ 0003b4fa 0260
.org 0x3b4fc
	adds r0, #4	@ 0003b4fc 0430
.org 0x3b4fe
	str r2, [r0, #0]	@ 0003b4fe 0260
.org 0x3b500
	adds r0, #4	@ 0003b500 0430
.org 0x3b502
	strb r2, [r0, #0]	@ 0003b502 0270
.org 0x3b504
	ldrb r1, [r4, #10]	@ 0003b504 a17a
.org 0x3b506
	movs r0, #251	@ 0003b506 fb20
.org 0x3b508
	ands r0, r1	@ 0003b508 0840
.org 0x3b50a
	strb r0, [r4, #10]	@ 0003b50a a072
.org 0x3b50c
	ldr r1, [pc, #16]	@ 0003b50c 0449
.org 0x3b50e
	ldrb r0, [r4, #9]	@ 0003b50e 607a
.org 0x3b510
	lsls r0, r0, #2	@ 0003b510 8000
.org 0x3b512
	adds r0, r0, r1	@ 0003b512 4018
.org 0x3b514
	movs r1, #3	@ 0003b514 0321
.org 0x3b516
	str r1, [r4, #12]	@ 0003b516 e160
.org 0x3b518
	ldr r0, [r0, #0]	@ 0003b518 0068
.org 0x3b51a
	ldr r0, [r0, #12]	@ 0003b51a c068
.org 0x3b51c
	str r0, [r4, #20]	@ 0003b51c 6061
.org 0x3b51e
	b.n 0x3b53a	@ 0003b51e 0ce0
.org 0x3b520
	.byte 0xf8,0x39,0x85,0x08	@ 0003b520 data
.org 0x3b524
	ldr r0, [pc, #24]	@ 0003b524 0648
.org 0x3b526
	ldrb r1, [r4, #16]	@ 0003b526 217c
.org 0x3b528
	lsls r1, r1, #2	@ 0003b528 8900
.org 0x3b52a
	adds r1, r1, r0	@ 0003b52a 0918
.org 0x3b52c
	ldr r1, [r1, #0]	@ 0003b52c 0968
.org 0x3b52e
	adds r0, r4, #0	@ 0003b52e 201c
.org 0x3b530
	bl 0x128f80	@ 0003b530 edf026fd
.org 0x3b534
	adds r0, r4, #0	@ 0003b534 201c
.org 0x3b536
	bl 0x1cff0	@ 0003b536 e1f75bfd
.org 0x3b53a
	pop {r4}	@ 0003b53a 10bc
