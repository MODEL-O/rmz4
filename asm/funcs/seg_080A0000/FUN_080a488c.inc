@ FUN_080a488c  entry 0x080a488c  size 158
.thumb
.org 0xa488c
FUN_080a488c:
	push {r4, r5, r6, lr}	@ 000a488c 70b5
.org 0xa488e
	adds r6, r0, #0	@ 000a488e 061c
.org 0xa4890
	ldrb r4, [r6, #17]	@ 000a4890 747c
.org 0xa4892
	movs r0, #45	@ 000a4892 2d20
.org 0xa4894
	bl 0x2b10	@ 000a4894 5ef73cf9
.org 0xa4898
	ldr r1, [pc, #56]	@ 000a4898 0e49
.org 0xa489a
	ldrb r0, [r6, #9]	@ 000a489a 707a
.org 0xa489c
	lsls r0, r0, #2	@ 000a489c 8000
.org 0xa489e
	adds r0, r0, r1	@ 000a489e 4018
.org 0xa48a0
	movs r1, #1	@ 000a48a0 0121
.org 0xa48a2
	str r1, [r6, #12]	@ 000a48a2 f160
.org 0xa48a4
	ldr r0, [r0, #0]	@ 000a48a4 0068
.org 0xa48a6
	ldr r0, [r0, #4]	@ 000a48a6 4068
.org 0xa48a8
	str r0, [r6, #20]	@ 000a48a8 7061
.org 0xa48aa
	movs r2, #0	@ 000a48aa 0022
.org 0xa48ac
	strb r2, [r6, #13]	@ 000a48ac 7273
.org 0xa48ae
	strb r2, [r6, #14]	@ 000a48ae b273
.org 0xa48b0
	strb r2, [r6, #15]	@ 000a48b0 f273
.org 0xa48b2
	ldrb r0, [r6, #10]	@ 000a48b2 b07a
.org 0xa48b4
	movs r5, #0	@ 000a48b4 0025
.org 0xa48b6
	orrs r0, r1	@ 000a48b6 0843
.org 0xa48b8
	movs r1, #2	@ 000a48b8 0221
.org 0xa48ba
	orrs r0, r1	@ 000a48ba 0843
.org 0xa48bc
	strb r0, [r6, #10]	@ 000a48bc b072
.org 0xa48be
	strb r2, [r6, #18]	@ 000a48be b274
.org 0xa48c0
	adds r0, r6, #0	@ 000a48c0 301c
.org 0xa48c2
	bl 0x1cc9c	@ 000a48c2 78f7ebf9
.org 0xa48c6
	cmp r4, #0	@ 000a48c6 002c
.org 0xa48c8
	beq.n 0xa48d8	@ 000a48c8 06d0
.org 0xa48ca
	ldrb r0, [r6, #10]	@ 000a48ca b07a
.org 0xa48cc
	movs r1, #16	@ 000a48cc 1021
.org 0xa48ce
	orrs r0, r1	@ 000a48ce 0843
.org 0xa48d0
	b.n 0xa48de	@ 000a48d0 05e0
.org 0xa48d2
	.byte 0x00	@ 000a48d2 data
.org 0xa48d3
	.byte 0x00	@ 000a48d3 data
.org 0xa48d4
	.byte 0x40,0xdb,0x85,0x08	@ 000a48d4 data
.org 0xa48d8
	ldrb r1, [r6, #10]	@ 000a48d8 b17a
.org 0xa48da
	movs r0, #239	@ 000a48da ef20
.org 0xa48dc
	ands r0, r1	@ 000a48dc 0840
.org 0xa48de
	strb r0, [r6, #10]	@ 000a48de b072
.org 0xa48e0
	movs r1, #1	@ 000a48e0 0121
.org 0xa48e2
	ands r1, r4	@ 000a48e2 2140
.org 0xa48e4
	adds r0, r6, #0	@ 000a48e4 301c
.org 0xa48e6
	adds r0, #76	@ 000a48e6 4c30
.org 0xa48e8
	movs r5, #0	@ 000a48e8 0025
.org 0xa48ea
	strb r1, [r0, #0]	@ 000a48ea 0170
.org 0xa48ec
	adds r3, r6, #0	@ 000a48ec 331c
.org 0xa48ee
	adds r3, #74	@ 000a48ee 4a33
.org 0xa48f0
	lsls r1, r1, #4	@ 000a48f0 0901
.org 0xa48f2
	ldrb r2, [r3, #0]	@ 000a48f2 1a78
.org 0xa48f4
	movs r0, #17	@ 000a48f4 1120
.org 0xa48f6
	negs r0, r0	@ 000a48f6 4042
.org 0xa48f8
	ands r0, r2	@ 000a48f8 1040
.org 0xa48fa
	orrs r0, r1	@ 000a48fa 0843
.org 0xa48fc
	strb r0, [r3, #0]	@ 000a48fc 1870
.org 0xa48fe
	ldr r1, [pc, #48]	@ 000a48fe 0c49
.org 0xa4900
	adds r0, r6, #0	@ 000a4900 301c
.org 0xa4902
	bl 0x1cf00	@ 000a4902 78f7fdfa
.org 0xa4906
	ldrb r1, [r6, #10]	@ 000a4906 b17a
.org 0xa4908
	movs r0, #4	@ 000a4908 0420
.org 0xa490a
	orrs r0, r1	@ 000a490a 0843
.org 0xa490c
	strb r0, [r6, #10]	@ 000a490c b072
.org 0xa490e
	adds r4, r6, #0	@ 000a490e 341c
.org 0xa4910
	adds r4, #116	@ 000a4910 7434
.org 0xa4912
	ldr r1, [pc, #32]	@ 000a4912 0849
.org 0xa4914
	adds r2, r6, #0	@ 000a4914 321c
.org 0xa4916
	adds r2, #84	@ 000a4916 5432
.org 0xa4918
	adds r0, r4, #0	@ 000a4918 201c
.org 0xa491a
	movs r3, #4	@ 000a491a 0423
.org 0xa491c
	bl 0x5760	@ 000a491c 60f720ff
.org 0xa4920
	str r6, [r4, #44]	@ 000a4920 e662
.org 0xa4922
	str r5, [r4, #36]	@ 000a4922 6562
.org 0xa4924
	adds r0, r6, #0	@ 000a4924 301c
.org 0xa4926
	bl 0xa4a18	@ 000a4926 00f077f8
