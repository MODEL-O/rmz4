@ FUN_080e57e8  entry 0x080e57e8  size 144
.thumb
.org 0xe57e8
FUN_080e57e8:
	push {r4, lr}	@ 000e57e8 10b5
.org 0xe57ea
	sub sp, #4	@ 000e57ea 81b0
.org 0xe57ec
	adds r4, r0, #0	@ 000e57ec 041c
.org 0xe57ee
	ldr r1, [pc, #136]	@ 000e57ee 2249
.org 0xe57f0
	mov r0, sp	@ 000e57f0 6846
.org 0xe57f2
	movs r2, #4	@ 000e57f2 0422
.org 0xe57f4
	bl 0x129258	@ 000e57f4 43f030fd
.org 0xe57f8
	ldrb r0, [r4, #17]	@ 000e57f8 607c
.org 0xe57fa
	cmp r0, #0	@ 000e57fa 0028
.org 0xe57fc
	bne.n 0xe5816	@ 000e57fc 0bd1
.org 0xe57fe
	adds r0, r4, #0	@ 000e57fe 201c
.org 0xe5800
	adds r0, #84	@ 000e5800 5430
.org 0xe5802
	ldrb r2, [r4, #10]	@ 000e5802 a27a
.org 0xe5804
	lsrs r2, r2, #4	@ 000e5804 1209
.org 0xe5806
	movs r1, #1	@ 000e5806 0121
.org 0xe5808
	ands r2, r1	@ 000e5808 0a40
.org 0xe580a
	bl 0xe56d0	@ 000e580a fff761ff
.org 0xe580e
	adds r1, r4, #0	@ 000e580e 211c
.org 0xe5810
	adds r1, #37	@ 000e5810 2531
.org 0xe5812
	movs r0, #24	@ 000e5812 1820
.org 0xe5814
	strb r0, [r1, #0]	@ 000e5814 0870
.org 0xe5816
	movs r0, #0	@ 000e5816 0020
.org 0xe5818
	str r0, [r4, #92]	@ 000e5818 e065
.org 0xe581a
	str r0, [r4, #100]	@ 000e581a 6066
.org 0xe581c
	ldrb r0, [r4, #17]	@ 000e581c 607c
.org 0xe581e
	cmp r0, #1	@ 000e581e 0128
.org 0xe5820
	bne.n 0xe582e	@ 000e5820 05d1
.org 0xe5822
	movs r0, #128	@ 000e5822 8020
.org 0xe5824
	lsls r0, r0, #1	@ 000e5824 4000
.org 0xe5826
	str r0, [r4, #92]	@ 000e5826 e065
.org 0xe5828
	movs r0, #12	@ 000e5828 0c20
.org 0xe582a
	negs r0, r0	@ 000e582a 4042
.org 0xe582c
	str r0, [r4, #100]	@ 000e582c 6066
.org 0xe582e
	ldr r0, [pc, #76]	@ 000e582e 1348
.org 0xe5830
	ldr r0, [r0, #0]	@ 000e5830 0068
.org 0xe5832
	ldr r1, [r0, #84]	@ 000e5832 416d
.org 0xe5834
	ldr r0, [r4, #84]	@ 000e5834 606d
.org 0xe5836
	cmp r1, r0	@ 000e5836 8142
.org 0xe5838
	ble.n 0xe585a	@ 000e5838 0fdd
.org 0xe583a
	ldr r0, [r4, #92]	@ 000e583a e06d
.org 0xe583c
	lsls r0, r0, #8	@ 000e583c 0002
.org 0xe583e
	negs r0, r0	@ 000e583e 4042
.org 0xe5840
	cmp r0, #0	@ 000e5840 0028
.org 0xe5842
	bge.n 0xe5846	@ 000e5842 00da
.org 0xe5844
	adds r0, #255	@ 000e5844 ff30
.org 0xe5846
	asrs r0, r0, #8	@ 000e5846 0012
.org 0xe5848
	str r0, [r4, #92]	@ 000e5848 e065
.org 0xe584a
	ldr r0, [r4, #100]	@ 000e584a 606e
.org 0xe584c
	lsls r0, r0, #8	@ 000e584c 0002
.org 0xe584e
	negs r0, r0	@ 000e584e 4042
.org 0xe5850
	cmp r0, #0	@ 000e5850 0028
.org 0xe5852
	bge.n 0xe5856	@ 000e5852 00da
.org 0xe5854
	adds r0, #255	@ 000e5854 ff30
.org 0xe5856
	asrs r0, r0, #8	@ 000e5856 0012
.org 0xe5858
	str r0, [r4, #100]	@ 000e5858 6066
.org 0xe585a
	ldrb r0, [r4, #17]	@ 000e585a 607c
.org 0xe585c
	lsls r0, r0, #1	@ 000e585c 4000
.org 0xe585e
	add r0, sp	@ 000e585e 6844
.org 0xe5860
	ldrh r1, [r0, #0]	@ 000e5860 0188
.org 0xe5862
	adds r0, r4, #0	@ 000e5862 201c
.org 0xe5864
	bl 0x1cf00	@ 000e5864 37f74cfb
.org 0xe5868
	movs r1, #0	@ 000e5868 0021
.org 0xe586a
	movs r0, #20	@ 000e586a 1420
.org 0xe586c
	strb r0, [r4, #18]	@ 000e586c a074
.org 0xe586e
	strb r1, [r4, #13]	@ 000e586e 6173
.org 0xe5870
	add sp, #4	@ 000e5870 01b0
.org 0xe5872
	pop {r4}	@ 000e5872 10bc
.org 0xe5874
	pop {r0}	@ 000e5874 01bc
.org 0xe5876
	bx r0	@ 000e5876 0047
