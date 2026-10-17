@ FUN_080c870c  entry 0x080c870c  size 114
.thumb
.org 0xc870c
FUN_080c870c:
	push {r4, r5, lr}	@ 000c870c 30b5
.org 0xc870e
	adds r4, r0, #0	@ 000c870e 041c
.org 0xc8710
	ldrb r5, [r4, #16]	@ 000c8710 257c
.org 0xc8712
	ldrb r1, [r4, #15]	@ 000c8712 e17b
.org 0xc8714
	cmp r1, #0	@ 000c8714 0029
.org 0xc8716
	bne.n 0xc873a	@ 000c8716 10d1
.org 0xc8718
	adds r0, #140	@ 000c8718 8c30
.org 0xc871a
	str r1, [r0, #0]	@ 000c871a 0160
.org 0xc871c
	adds r0, #4	@ 000c871c 0430
.org 0xc871e
	str r1, [r0, #0]	@ 000c871e 0160
.org 0xc8720
	adds r0, #4	@ 000c8720 0430
.org 0xc8722
	strb r1, [r0, #0]	@ 000c8722 0170
.org 0xc8724
	ldrb r1, [r4, #10]	@ 000c8724 a17a
.org 0xc8726
	movs r0, #251	@ 000c8726 fb20
.org 0xc8728
	ands r0, r1	@ 000c8728 0840
.org 0xc872a
	strb r0, [r4, #10]	@ 000c872a a072
.org 0xc872c
	ldr r1, [pc, #80]	@ 000c872c 1449
.org 0xc872e
	adds r0, r4, #0	@ 000c872e 201c
.org 0xc8730
	bl 0x1cf00	@ 000c8730 54f7e6fb
.org 0xc8734
	ldrb r0, [r4, #15]	@ 000c8734 e07b
.org 0xc8736
	adds r0, #1	@ 000c8736 0130
.org 0xc8738
	strb r0, [r4, #15]	@ 000c8738 e073
.org 0xc873a
	adds r0, r4, #0	@ 000c873a 201c
.org 0xc873c
	bl 0x1cff0	@ 000c873c 54f758fc
.org 0xc8740
	adds r0, r4, #0	@ 000c8740 201c
.org 0xc8742
	adds r0, #115	@ 000c8742 7330
.org 0xc8744
	ldrb r0, [r0, #0]	@ 000c8744 0078
.org 0xc8746
	cmp r0, #3	@ 000c8746 0328
.org 0xc8748
	bne.n 0xc8778	@ 000c8748 16d1
.org 0xc874a
	cmp r5, #1	@ 000c874a 012d
.org 0xc874c
	bne.n 0xc875e	@ 000c874c 07d1
.org 0xc874e
	ldr r0, [pc, #52]	@ 000c874e 0d48
.org 0xc8750
	adds r1, r0, #0	@ 000c8750 011c
.org 0xc8752
	adds r1, #38	@ 000c8752 2631
.org 0xc8754
	ldrb r0, [r1, #0]	@ 000c8754 0878
.org 0xc8756
	cmp r0, #0	@ 000c8756 0028
.org 0xc8758
	beq.n 0xc875e	@ 000c8758 01d0
.org 0xc875a
	adds r0, #255	@ 000c875a ff30
.org 0xc875c
	strb r0, [r1, #0]	@ 000c875c 0870
.org 0xc875e
	ldrb r1, [r4, #10]	@ 000c875e a17a
.org 0xc8760
	movs r0, #254	@ 000c8760 fe20
.org 0xc8762
	ands r0, r1	@ 000c8762 0840
.org 0xc8764
	strb r0, [r4, #10]	@ 000c8764 a072
.org 0xc8766
	ldr r1, [pc, #32]	@ 000c8766 0849
.org 0xc8768
	ldrb r0, [r4, #9]	@ 000c8768 607a
.org 0xc876a
	lsls r0, r0, #2	@ 000c876a 8000
.org 0xc876c
	adds r0, r0, r1	@ 000c876c 4018
.org 0xc876e
	movs r1, #4	@ 000c876e 0421
.org 0xc8770
	str r1, [r4, #12]	@ 000c8770 e160
.org 0xc8772
	ldr r0, [r0, #0]	@ 000c8772 0068
.org 0xc8774
	ldr r0, [r0, #16]	@ 000c8774 0069
.org 0xc8776
	str r0, [r4, #20]	@ 000c8776 6061
.org 0xc8778
	pop {r4, r5}	@ 000c8778 30bc
.org 0xc877a
	pop {r0}	@ 000c877a 01bc
.org 0xc877c
	bx r0	@ 000c877c 0047
