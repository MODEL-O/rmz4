@ FUN_08099554  entry 0x08099554  size 172
.thumb
.org 0x99554
FUN_08099554:
	push {r4, r5, r6, lr}	@ 00099554 70b5
.org 0x99556
	sub sp, #8	@ 00099556 82b0
.org 0x99558
	adds r4, r0, #0	@ 00099558 041c
.org 0x9955a
	ldr r0, [r4, #84]	@ 0009955a 606d
.org 0x9955c
	str r0, [sp, #0]	@ 0009955c 0090
.org 0x9955e
	ldr r0, [r4, #88]	@ 0009955e a06d
.org 0x99560
	str r0, [sp, #4]	@ 00099560 0190
.org 0x99562
	ldr r5, [pc, #24]	@ 00099562 064d
.org 0x99564
	adds r0, r4, #0	@ 00099564 201c
.org 0x99566
	adds r0, #188	@ 00099566 bc30
.org 0x99568
	ldrb r2, [r0, #0]	@ 00099568 0278
.org 0x9956a
	ldrb r1, [r4, #10]	@ 0009956a a17a
.org 0x9956c
	movs r3, #16	@ 0009956c 1023
.org 0x9956e
	adds r0, r3, #0	@ 0009956e 181c
.org 0x99570
	ands r0, r1	@ 00099570 0840
.org 0x99572
	cmp r0, #0	@ 00099572 0028
.org 0x99574
	beq.n 0x99580	@ 00099574 04d0
.org 0x99576
	orrs r3, r2	@ 00099576 1343
.org 0x99578
	b.n 0x99582	@ 00099578 03e0
.org 0x9957a
	.byte 0x00	@ 0009957a data
.org 0x9957b
	.byte 0x00	@ 0009957b data
.org 0x9957c
	.byte 0xd8,0x0c,0x86,0x08	@ 0009957c data
.org 0x99580
	adds r3, r2, #0	@ 00099580 131c
.org 0x99582
	mov r0, sp	@ 00099582 6846
.org 0x99584
	adds r1, r5, #0	@ 00099584 291c
.org 0x99586
	movs r2, #0	@ 00099586 0022
.org 0x99588
	bl 0xd4c8c	@ 00099588 3bf080fb
.org 0x9958c
	mov r5, sp	@ 0009958c 6d46
.org 0x9958e
	ldr r6, [pc, #24]	@ 0009958e 064e
.org 0x99590
	adds r0, r4, #0	@ 00099590 201c
.org 0x99592
	adds r0, #188	@ 00099592 bc30
.org 0x99594
	ldrb r2, [r0, #0]	@ 00099594 0278
.org 0x99596
	ldrb r1, [r4, #10]	@ 00099596 a17a
.org 0x99598
	movs r3, #16	@ 00099598 1023
.org 0x9959a
	adds r0, r3, #0	@ 0009959a 181c
.org 0x9959c
	ands r0, r1	@ 0009959c 0840
.org 0x9959e
	cmp r0, #0	@ 0009959e 0028
.org 0x995a0
	beq.n 0x995ac	@ 000995a0 04d0
.org 0x995a2
	orrs r3, r2	@ 000995a2 1343
.org 0x995a4
	b.n 0x995ae	@ 000995a4 03e0
.org 0x995a6
	.byte 0x00	@ 000995a6 data
.org 0x995a7
	.byte 0x00	@ 000995a7 data
.org 0x995a8
	.byte 0x10,0x0d,0x86,0x08	@ 000995a8 data
.org 0x995ac
	adds r3, r2, #0	@ 000995ac 131c
.org 0x995ae
	adds r0, r5, #0	@ 000995ae 281c
.org 0x995b0
	adds r1, r6, #0	@ 000995b0 311c
.org 0x995b2
	movs r2, #0	@ 000995b2 0022
.org 0x995b4
	bl 0xd4c8c	@ 000995b4 3bf06afb
.org 0x995b8
	movs r0, #1	@ 000995b8 0120
.org 0x995ba
	mov r1, sp	@ 000995ba 6946
.org 0x995bc
	bl 0xd0c88	@ 000995bc 37f064fb
.org 0x995c0
	movs r0, #42	@ 000995c0 2a20
.org 0x995c2
	bl 0x2b10	@ 000995c2 69f7a5fa
.org 0x995c6
	adds r5, r4, #0	@ 000995c6 251c
.org 0x995c8
	adds r5, #84	@ 000995c8 5435
.org 0x995ca
	movs r0, #3	@ 000995ca 0320
.org 0x995cc
	movs r1, #21	@ 000995cc 1521
.org 0x995ce
	adds r2, r5, #0	@ 000995ce 2a1c
.org 0x995d0
	bl 0x2ab88	@ 000995d0 91f7dafa
.org 0x995d4
	ldrb r0, [r4, #10]	@ 000995d4 a07a
.org 0x995d6
	movs r1, #254	@ 000995d6 fe21
.org 0x995d8
	ands r1, r0	@ 000995d8 0140
.org 0x995da
	strb r1, [r4, #10]	@ 000995da a172
.org 0x995dc
	ldr r2, [pc, #44]	@ 000995dc 0b4a
.org 0x995de
	ldrh r1, [r2, #12]	@ 000995de 9189
.org 0x995e0
	ldr r0, [pc, #44]	@ 000995e0 0b48
.org 0x995e2
	cmp r1, r0	@ 000995e2 8142
.org 0x995e4
	bhi.n 0x995ea	@ 000995e4 01d8
.org 0x995e6
	adds r0, r1, #1	@ 000995e6 481c
.org 0x995e8
	strh r0, [r2, #12]	@ 000995e8 9081
.org 0x995ea
	adds r0, r4, #0	@ 000995ea 201c
.org 0x995ec
	adds r1, r5, #0	@ 000995ec 291c
.org 0x995ee
	bl 0x2abe0	@ 000995ee 91f7f7fa
.org 0x995f2
	ldr r1, [pc, #32]	@ 000995f2 0849
.org 0x995f4
	ldrb r0, [r4, #9]	@ 000995f4 607a
.org 0x995f6
	lsls r0, r0, #2	@ 000995f6 8000
.org 0x995f8
	adds r0, r0, r1	@ 000995f8 4018
.org 0x995fa
	movs r1, #4	@ 000995fa 0421
.org 0x995fc
	str r1, [r4, #12]	@ 000995fc e160
.org 0x995fe
	ldr r0, [r0, #0]	@ 000995fe 0068
