@ FUN_0803f710  entry 0x0803f710  size 174
.thumb
.org 0x3f710
FUN_0803f710:
	push {r4, r5, r6, r7, lr}	@ 0003f710 f0b5
.org 0x3f712
	sub sp, #8	@ 0003f712 82b0
.org 0x3f714
	adds r7, r0, #0	@ 0003f714 071c
.org 0x3f716
	ldr r1, [pc, #136]	@ 0003f716 2249
.org 0x3f718
	ldrb r0, [r7, #9]	@ 0003f718 787a
.org 0x3f71a
	lsls r0, r0, #2	@ 0003f71a 8000
.org 0x3f71c
	adds r0, r0, r1	@ 0003f71c 4018
.org 0x3f71e
	movs r1, #1	@ 0003f71e 0121
.org 0x3f720
	str r1, [r7, #12]	@ 0003f720 f960
.org 0x3f722
	ldr r0, [r0, #0]	@ 0003f722 0068
.org 0x3f724
	ldr r0, [r0, #4]	@ 0003f724 4068
.org 0x3f726
	str r0, [r7, #20]	@ 0003f726 7861
.org 0x3f728
	adds r0, r7, #0	@ 0003f728 381c
.org 0x3f72a
	bl 0x1cc9c	@ 0003f72a ddf7b7fa
.org 0x3f72e
	adds r0, r7, #0	@ 0003f72e 381c
.org 0x3f730
	bl 0x1ceec	@ 0003f730 ddf7dcfb
.org 0x3f734
	ldrb r1, [r7, #10]	@ 0003f734 b97a
.org 0x3f736
	movs r0, #1	@ 0003f736 0120
.org 0x3f738
	movs r6, #0	@ 0003f738 0026
.org 0x3f73a
	orrs r0, r1	@ 0003f73a 0843
.org 0x3f73c
	movs r1, #2	@ 0003f73c 0221
.org 0x3f73e
	orrs r0, r1	@ 0003f73e 0843
.org 0x3f740
	strb r0, [r7, #10]	@ 0003f740 b872
.org 0x3f742
	ldr r1, [pc, #96]	@ 0003f742 1849
.org 0x3f744
	adds r0, r7, #0	@ 0003f744 381c
.org 0x3f746
	movs r2, #0	@ 0003f746 0022
.org 0x3f748
	movs r3, #4	@ 0003f748 0423
.org 0x3f74a
	bl 0x1cfc8	@ 0003f74a ddf73dfc
.org 0x3f74e
	adds r0, r7, #0	@ 0003f74e 381c
.org 0x3f750
	bl 0x1cff0	@ 0003f750 ddf74efc
.org 0x3f754
	ldrb r1, [r7, #10]	@ 0003f754 b97a
.org 0x3f756
	movs r0, #4	@ 0003f756 0420
.org 0x3f758
	orrs r0, r1	@ 0003f758 0843
.org 0x3f75a
	strb r0, [r7, #10]	@ 0003f75a b872
.org 0x3f75c
	adds r4, r7, #0	@ 0003f75c 3c1c
.org 0x3f75e
	adds r4, #116	@ 0003f75e 7434
.org 0x3f760
	ldr r5, [pc, #68]	@ 0003f760 114d
.org 0x3f762
	adds r2, r7, #0	@ 0003f762 3a1c
.org 0x3f764
	adds r2, #84	@ 0003f764 5432
.org 0x3f766
	adds r0, r4, #0	@ 0003f766 201c
.org 0x3f768
	adds r1, r5, #0	@ 0003f768 291c
.org 0x3f76a
	movs r3, #8	@ 0003f76a 0823
.org 0x3f76c
	bl 0x5760	@ 0003f76c c5f7f8ff
.org 0x3f770
	str r7, [r4, #44]	@ 0003f770 e762
.org 0x3f772
	str r6, [r4, #36]	@ 0003f772 6662
.org 0x3f774
	movs r3, #1	@ 0003f774 0123
.org 0x3f776
	negs r3, r3	@ 0003f776 5b42
.org 0x3f778
	str r3, [sp, #0]	@ 0003f778 0093
.org 0x3f77a
	adds r0, r7, #0	@ 0003f77a 381c
.org 0x3f77c
	adds r0, #189	@ 0003f77c bd30
.org 0x3f77e
	ldrb r0, [r0, #0]	@ 0003f77e 0078
.org 0x3f780
	str r0, [sp, #4]	@ 0003f780 0190
.org 0x3f782
	adds r0, r4, #0	@ 0003f782 201c
.org 0x3f784
	adds r1, r5, #0	@ 0003f784 291c
.org 0x3f786
	adds r2, r3, #0	@ 0003f786 1a1c
.org 0x3f788
	bl 0x5794	@ 0003f788 c6f704f8
.org 0x3f78c
	ldr r0, [pc, #28]	@ 0003f78c 0748
.org 0x3f78e
	str r0, [r4, #36]	@ 0003f78e 6062
.org 0x3f790
	ldrb r1, [r7, #10]	@ 0003f790 b97a
.org 0x3f792
	movs r0, #16	@ 0003f792 1020
.org 0x3f794
	ands r0, r1	@ 0003f794 0840
.org 0x3f796
	cmp r0, #0	@ 0003f796 0028
.org 0x3f798
	beq.n 0x3f7b0	@ 0003f798 0ad0
.org 0x3f79a
	movs r0, #240	@ 0003f79a f020
.org 0x3f79c
	lsls r0, r0, #2	@ 0003f79c 8000
.org 0x3f79e
	b.n 0x3f7b2	@ 0003f79e 08e0
.org 0x3f7a0
	.byte 0xf8,0x39,0x85,0x08	@ 0003f7a0 data
.org 0x3f7a4
	.byte 0x0c,0x80,0x00,0x00	@ 0003f7a4 data
.org 0x3f7a8
	.byte 0xf8,0x53,0x85,0x08	@ 0003f7a8 data
.org 0x3f7ac
	.byte 0xb1,0xf9,0x03,0x08	@ 0003f7ac data
.org 0x3f7b0
	ldr r0, [pc, #28]	@ 0003f7b0 0748
.org 0x3f7b2
	str r0, [r7, #92]	@ 0003f7b2 f865
.org 0x3f7b4
	adds r0, r7, #0	@ 0003f7b4 381c
.org 0x3f7b6
	adds r0, #184	@ 0003f7b6 b830
.org 0x3f7b8
	ldr r1, [r7, #88]	@ 0003f7b8 b96d
.org 0x3f7ba
	str r1, [r0, #0]	@ 0003f7ba 0160
.org 0x3f7bc
	movs r0, #4	@ 0003f7bc 0420
