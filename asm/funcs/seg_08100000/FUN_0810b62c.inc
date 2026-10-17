@ FUN_0810b62c  entry 0x0810b62c  size 188
.thumb
.org 0x10b62c
FUN_0810b62c:
	push {r4, lr}	@ 0010b62c 10b5
.org 0x10b62e
	adds r4, r0, #0	@ 0010b62e 041c
.org 0x10b630
	ldr r2, [r4, #40]	@ 0010b630 a26a
.org 0x10b632
	ldr r1, [pc, #56]	@ 0010b632 0e49
.org 0x10b634
	adds r0, r2, r1	@ 0010b634 5018
.org 0x10b636
	ldr r3, [r0, #0]	@ 0010b636 0368
.org 0x10b638
	ldrb r0, [r2, #2]	@ 0010b638 9078
.org 0x10b63a
	cmp r0, #0	@ 0010b63a 0028
.org 0x10b63c
	beq.n 0x10b660	@ 0010b63c 10d0
.org 0x10b63e
	ldrb r0, [r2, #3]	@ 0010b63e d078
.org 0x10b640
	cmp r0, #2	@ 0010b640 0228
.org 0x10b642
	bls.n 0x10b660	@ 0010b642 0dd9
.org 0x10b644
	cmp r0, #6	@ 0010b644 0628
.org 0x10b646
	beq.n 0x10b660	@ 0010b646 0bd0
.org 0x10b648
	ldr r1, [pc, #36]	@ 0010b648 0949
.org 0x10b64a
	adds r0, r2, r1	@ 0010b64a 5018
.org 0x10b64c
	ldrb r0, [r0, #0]	@ 0010b64c 0078
.org 0x10b64e
	cmp r0, #0	@ 0010b64e 0028
.org 0x10b650
	beq.n 0x10b660	@ 0010b650 06d0
.org 0x10b652
	movs r1, #221	@ 0010b652 dd21
.org 0x10b654
	lsls r1, r1, #4	@ 0010b654 0901
.org 0x10b656
	adds r0, r2, r1	@ 0010b656 5018
.org 0x10b658
	ldrb r0, [r0, #10]	@ 0010b658 807a
.org 0x10b65a
	ldrb r1, [r4, #17]	@ 0010b65a 617c
.org 0x10b65c
	cmp r0, r1	@ 0010b65c 8842
.org 0x10b65e
	bhi.n 0x10b674	@ 0010b65e 09d8
.org 0x10b660
	ldrb r1, [r4, #10]	@ 0010b660 a17a
.org 0x10b662
	movs r0, #254	@ 0010b662 fe20
.org 0x10b664
	ands r0, r1	@ 0010b664 0840
.org 0x10b666
	strb r0, [r4, #10]	@ 0010b666 a072
.org 0x10b668
	b.n 0x10b700	@ 0010b668 4ae0
.org 0x10b66a
	.byte 0x00	@ 0010b66a data
.org 0x10b66b
	.byte 0x00	@ 0010b66b data
.org 0x10b66c
	.byte 0xa8,0x63,0x00,0x00	@ 0010b66c data
.org 0x10b670
	.byte 0xf7,0x0d,0x00,0x00	@ 0010b670 data
.org 0x10b674
	ldrb r1, [r4, #10]	@ 0010b674 a17a
.org 0x10b676
	movs r0, #1	@ 0010b676 0120
.org 0x10b678
	orrs r0, r1	@ 0010b678 0843
.org 0x10b67a
	strb r0, [r4, #10]	@ 0010b67a a072
.org 0x10b67c
	ldrb r0, [r2, #3]	@ 0010b67c d078
.org 0x10b67e
	cmp r0, #3	@ 0010b67e 0328
.org 0x10b680
	bne.n 0x10b6a0	@ 0010b680 0ed1
.org 0x10b682
	adds r0, r3, #0	@ 0010b682 181c
.org 0x10b684
	adds r0, #180	@ 0010b684 b430
.org 0x10b686
	ldr r3, [pc, #20]	@ 0010b686 054b
.org 0x10b688
	adds r1, r2, r3	@ 0010b688 d118
.org 0x10b68a
	ldrb r2, [r4, #17]	@ 0010b68a 627c
.org 0x10b68c
	adds r1, r1, r2	@ 0010b68c 8918
.org 0x10b68e
	ldrb r0, [r0, #16]	@ 0010b68e 007c
.org 0x10b690
	ldrb r1, [r1, #0]	@ 0010b690 0978
.org 0x10b692
	cmp r0, r1	@ 0010b692 8842
.org 0x10b694
	beq.n 0x10b6dc	@ 0010b694 22d0
.org 0x10b696
	movs r1, #134	@ 0010b696 8621
.org 0x10b698
	lsls r1, r1, #7	@ 0010b698 c901
.org 0x10b69a
	b.n 0x10b6de	@ 0010b69a 20e0
.org 0x10b69c
	.byte 0xd4,0x0d,0x00,0x00	@ 0010b69c data
.org 0x10b6a0
	cmp r0, #4	@ 0010b6a0 0428
.org 0x10b6a2
	bne.n 0x10b6c4	@ 0010b6a2 0fd1
.org 0x10b6a4
	adds r0, r3, #0	@ 0010b6a4 181c
.org 0x10b6a6
	adds r0, #180	@ 0010b6a6 b430
.org 0x10b6a8
	ldr r3, [pc, #20]	@ 0010b6a8 054b
.org 0x10b6aa
	adds r1, r2, r3	@ 0010b6aa d118
.org 0x10b6ac
	ldrb r2, [r4, #17]	@ 0010b6ac 627c
.org 0x10b6ae
	adds r1, r1, r2	@ 0010b6ae 8918
.org 0x10b6b0
	ldrb r0, [r0, #17]	@ 0010b6b0 407c
.org 0x10b6b2
	ldrb r1, [r1, #0]	@ 0010b6b2 0978
.org 0x10b6b4
	cmp r0, r1	@ 0010b6b4 8842
.org 0x10b6b6
	beq.n 0x10b6dc	@ 0010b6b6 11d0
.org 0x10b6b8
	movs r1, #134	@ 0010b6b8 8621
.org 0x10b6ba
	lsls r1, r1, #7	@ 0010b6ba c901
.org 0x10b6bc
	b.n 0x10b6de	@ 0010b6bc 0fe0
.org 0x10b6be
	.byte 0x00	@ 0010b6be data
.org 0x10b6bf
	.byte 0x00	@ 0010b6bf data
.org 0x10b6c0
	.byte 0xd4,0x0d,0x00,0x00	@ 0010b6c0 data
.org 0x10b6c4
	cmp r0, #5	@ 0010b6c4 0528
.org 0x10b6c6
	bne.n 0x10b6fa	@ 0010b6c6 18d1
.org 0x10b6c8
	adds r0, r3, #0	@ 0010b6c8 181c
.org 0x10b6ca
	adds r0, #180	@ 0010b6ca b430
.org 0x10b6cc
	ldr r3, [pc, #24]	@ 0010b6cc 064b
.org 0x10b6ce
	adds r1, r2, r3	@ 0010b6ce d118
.org 0x10b6d0
	ldrb r2, [r4, #17]	@ 0010b6d0 627c
.org 0x10b6d2
	adds r1, r1, r2	@ 0010b6d2 8918
.org 0x10b6d4
	ldrb r0, [r0, #18]	@ 0010b6d4 807c
.org 0x10b6d6
	ldrb r1, [r1, #0]	@ 0010b6d6 0978
.org 0x10b6d8
	cmp r0, r1	@ 0010b6d8 8842
.org 0x10b6da
	bne.n 0x10b6f0	@ 0010b6da 09d1
.org 0x10b6dc
	ldr r1, [pc, #12]	@ 0010b6dc 0349
.org 0x10b6de
	adds r0, r4, #0	@ 0010b6de 201c
.org 0x10b6e0
	bl 0x1cf00	@ 0010b6e0 11f70efc
.org 0x10b6e4
	b.n 0x10b6fa	@ 0010b6e4 09e0
.org 0x10b6e6
	.byte 0x00	@ 0010b6e6 data
.org 0x10b6e7
	.byte 0x00	@ 0010b6e7 data
