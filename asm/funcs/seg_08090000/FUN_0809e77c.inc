@ FUN_0809e77c  entry 0x0809e77c  size 202
.thumb
.org 0x9e77c
FUN_0809e77c:
	push {r4, r5, lr}	@ 0009e77c 30b5
.org 0x9e77e
	adds r4, r0, #0	@ 0009e77e 041c
.org 0x9e780
	adds r0, #140	@ 0009e780 8c30
.org 0x9e782
	ldr r0, [r0, #0]	@ 0009e782 0068
.org 0x9e784
	movs r1, #129	@ 0009e784 8121
.org 0x9e786
	lsls r1, r1, #2	@ 0009e786 8900
.org 0x9e788
	ands r0, r1	@ 0009e788 0840
.org 0x9e78a
	cmp r0, #0	@ 0009e78a 0028
.org 0x9e78c
	bne.n 0x9e7aa	@ 0009e78c 0dd1
.org 0x9e78e
	adds r0, r4, #0	@ 0009e78e 201c
.org 0x9e790
	adds r0, #188	@ 0009e790 bc30
.org 0x9e792
	ldr r2, [r0, #0]	@ 0009e792 0268
.org 0x9e794
	subs r1, #246	@ 0009e794 f639
.org 0x9e796
	adds r5, r0, #0	@ 0009e796 051c
.org 0x9e798
	cmp r2, r1	@ 0009e798 8a42
.org 0x9e79a
	bhi.n 0x9e7aa	@ 0009e79a 06d8
.org 0x9e79c
	ldr r0, [r4, #84]	@ 0009e79c 606d
.org 0x9e79e
	ldr r1, [r4, #88]	@ 0009e79e a16d
.org 0x9e7a0
	bl 0x7c7c	@ 0009e7a0 69f76cfa
.org 0x9e7a4
	lsls r0, r0, #16	@ 0009e7a4 0004
.org 0x9e7a6
	cmp r0, #0	@ 0009e7a6 0028
.org 0x9e7a8
	beq.n 0x9e7c8	@ 0009e7a8 0ed0
.org 0x9e7aa
	ldr r1, [pc, #24]	@ 0009e7aa 0649
.org 0x9e7ac
	ldrb r0, [r4, #9]	@ 0009e7ac 607a
.org 0x9e7ae
	lsls r0, r0, #2	@ 0009e7ae 8000
.org 0x9e7b0
	adds r0, r0, r1	@ 0009e7b0 4018
.org 0x9e7b2
	movs r1, #2	@ 0009e7b2 0221
.org 0x9e7b4
	str r1, [r4, #12]	@ 0009e7b4 e160
.org 0x9e7b6
	ldr r0, [r0, #0]	@ 0009e7b6 0068
.org 0x9e7b8
	ldr r0, [r0, #8]	@ 0009e7b8 8068
.org 0x9e7ba
	str r0, [r4, #20]	@ 0009e7ba 6061
.org 0x9e7bc
	adds r0, r4, #0	@ 0009e7bc 201c
.org 0x9e7be
	bl 0x9e85c	@ 0009e7be 00f04df8
.org 0x9e7c2
	b.n 0x9e848	@ 0009e7c2 41e0
.org 0x9e7c4
	.byte 0x40,0xdb,0x85,0x08	@ 0009e7c4 data
.org 0x9e7c8
	ldrb r0, [r4, #16]	@ 0009e7c8 207c
.org 0x9e7ca
	cmp r0, #0	@ 0009e7ca 0028
.org 0x9e7cc
	bne.n 0x9e7e4	@ 0009e7cc 0ad1
.org 0x9e7ce
	ldr r0, [pc, #16]	@ 0009e7ce 0448
.org 0x9e7d0
	ldrb r1, [r4, #13]	@ 0009e7d0 617b
.org 0x9e7d2
	lsls r1, r1, #2	@ 0009e7d2 8900
.org 0x9e7d4
	adds r1, r1, r0	@ 0009e7d4 0918
.org 0x9e7d6
	ldr r1, [r1, #0]	@ 0009e7d6 0968
.org 0x9e7d8
	adds r0, r4, #0	@ 0009e7d8 201c
.org 0x9e7da
	bl 0x128f80	@ 0009e7da 8af0d1fb
.org 0x9e7de
	b.n 0x9e7f4	@ 0009e7de 09e0
.org 0x9e7e0
	.byte 0x58,0x16,0x86,0x08	@ 0009e7e0 data
.org 0x9e7e4
	ldr r0, [pc, #104]	@ 0009e7e4 1a48
.org 0x9e7e6
	ldrb r1, [r4, #13]	@ 0009e7e6 617b
.org 0x9e7e8
	lsls r1, r1, #2	@ 0009e7e8 8900
.org 0x9e7ea
	adds r1, r1, r0	@ 0009e7ea 0918
.org 0x9e7ec
	ldr r1, [r1, #0]	@ 0009e7ec 0968
.org 0x9e7ee
	adds r0, r4, #0	@ 0009e7ee 201c
.org 0x9e7f0
	bl 0x128f80	@ 0009e7f0 8af0c6fb
.org 0x9e7f4
	ldr r0, [r5, #0]	@ 0009e7f4 2868
.org 0x9e7f6
	cmp r0, #120	@ 0009e7f6 7828
.org 0x9e7f8
	bls.n 0x9e842	@ 0009e7f8 23d9
.org 0x9e7fa
	ldr r0, [pc, #88]	@ 0009e7fa 1648
.org 0x9e7fc
	adds r1, r4, #0	@ 0009e7fc 211c
.org 0x9e7fe
	adds r1, #84	@ 0009e7fe 5431
.org 0x9e800
	bl 0x1fb14	@ 0009e800 81f788f9
.org 0x9e804
	movs r1, #128	@ 0009e804 8021
.org 0x9e806
	lsls r1, r1, #7	@ 0009e806 c901
.org 0x9e808
	cmp r0, r1	@ 0009e808 8842
.org 0x9e80a
	bls.n 0x9e842	@ 0009e80a 1ad9
.org 0x9e80c
	ldrb r1, [r4, #10]	@ 0009e80c a17a
.org 0x9e80e
	movs r0, #254	@ 0009e80e fe20
.org 0x9e810
	ands r0, r1	@ 0009e810 0840
.org 0x9e812
	movs r2, #0	@ 0009e812 0022
.org 0x9e814
	movs r1, #253	@ 0009e814 fd21
.org 0x9e816
	ands r0, r1	@ 0009e816 0840
.org 0x9e818
	strb r0, [r4, #10]	@ 0009e818 a072
.org 0x9e81a
	adds r0, r4, #0	@ 0009e81a 201c
.org 0x9e81c
	adds r0, #140	@ 0009e81c 8c30
.org 0x9e81e
	str r2, [r0, #0]	@ 0009e81e 0260
.org 0x9e820
	adds r0, #4	@ 0009e820 0430
.org 0x9e822
	str r2, [r0, #0]	@ 0009e822 0260
.org 0x9e824
	adds r0, #4	@ 0009e824 0430
.org 0x9e826
	strb r2, [r0, #0]	@ 0009e826 0270
.org 0x9e828
	ldrb r1, [r4, #10]	@ 0009e828 a17a
.org 0x9e82a
	movs r0, #251	@ 0009e82a fb20
.org 0x9e82c
	ands r0, r1	@ 0009e82c 0840
.org 0x9e82e
	strb r0, [r4, #10]	@ 0009e82e a072
.org 0x9e830
	ldr r1, [pc, #36]	@ 0009e830 0949
.org 0x9e832
	ldrb r0, [r4, #9]	@ 0009e832 607a
.org 0x9e834
	lsls r0, r0, #2	@ 0009e834 8000
.org 0x9e836
	adds r0, r0, r1	@ 0009e836 4018
.org 0x9e838
	movs r1, #3	@ 0009e838 0321
.org 0x9e83a
	str r1, [r4, #12]	@ 0009e83a e160
.org 0x9e83c
	ldr r0, [r0, #0]	@ 0009e83c 0068
.org 0x9e83e
	ldr r0, [r0, #12]	@ 0009e83e c068
.org 0x9e840
	str r0, [r4, #20]	@ 0009e840 6061
.org 0x9e842
	ldr r0, [r5, #0]	@ 0009e842 2868
.org 0x9e844
	adds r0, #1	@ 0009e844 0130
