@ FUN_08040664  entry 0x08040664  size 186
.thumb
.org 0x40664
FUN_08040664:
	push {r4, r5, r6, lr}	@ 00040664 70b5
.org 0x40666
	adds r6, r0, #0	@ 00040666 061c
.org 0x40668
	lsls r1, r1, #24	@ 00040668 0906
.org 0x4066a
	lsrs r5, r1, #24	@ 0004066a 0d0e
.org 0x4066c
	ldr r0, [pc, #84]	@ 0004066c 1548
.org 0x4066e
	ldr r0, [r0, #0]	@ 0004066e 0068
.org 0x40670
	bl 0x5500	@ 00040670 c4f746ff
.org 0x40674
	adds r4, r0, #0	@ 00040674 041c
.org 0x40676
	cmp r4, #0	@ 00040676 002c
.org 0x40678
	beq.n 0x4072a	@ 00040678 57d0
.org 0x4067a
	strb r5, [r4, #17]	@ 0004067a 6574
.org 0x4067c
	adds r0, r6, #0	@ 0004067c 301c
.org 0x4067e
	adds r0, #248	@ 0004067e f830
.org 0x40680
	ldrb r0, [r0, #0]	@ 00040680 0078
.org 0x40682
	cmp r0, #2	@ 00040682 0228
.org 0x40684
	bne.n 0x406d4	@ 00040684 26d1
.org 0x40686
	ldr r1, [pc, #64]	@ 00040686 1049
.org 0x40688
	movs r0, #9	@ 00040688 0920
.org 0x4068a
	strb r0, [r4, #9]	@ 0004068a 6072
.org 0x4068c
	ldr r0, [r1, #36]	@ 0004068c 486a
.org 0x4068e
	ldr r0, [r0, #0]	@ 0004068e 0068
.org 0x40690
	str r0, [r4, #20]	@ 00040690 6061
.org 0x40692
	ldrb r1, [r4, #11]	@ 00040692 e17a
.org 0x40694
	movs r0, #191	@ 00040694 bf20
.org 0x40696
	ands r0, r1	@ 00040696 0840
.org 0x40698
	strb r0, [r4, #11]	@ 00040698 e072
.org 0x4069a
	adds r1, r4, #0	@ 0004069a 211c
.org 0x4069c
	adds r1, #37	@ 0004069c 2531
.org 0x4069e
	movs r0, #16	@ 0004069e 1020
.org 0x406a0
	strb r0, [r1, #0]	@ 000406a0 0870
.org 0x406a2
	ldr r0, [pc, #40]	@ 000406a2 0a48
.org 0x406a4
	ldrh r0, [r0, #0]	@ 000406a4 0088
.org 0x406a6
	strh r0, [r4, #32]	@ 000406a6 2084
.org 0x406a8
	ldr r0, [pc, #36]	@ 000406a8 0948
.org 0x406aa
	ldrb r0, [r0, #0]	@ 000406aa 0078
.org 0x406ac
	subs r1, #3	@ 000406ac 0339
.org 0x406ae
	strb r0, [r1, #0]	@ 000406ae 0870
.org 0x406b0
	ldrb r0, [r4, #17]	@ 000406b0 607c
.org 0x406b2
	cmp r0, #0	@ 000406b2 0028
.org 0x406b4
	beq.n 0x40724	@ 000406b4 36d0
.org 0x406b6
	movs r0, #0	@ 000406b6 0020
.org 0x406b8
	movs r1, #0	@ 000406b8 0021
.org 0x406ba
	movs r2, #1	@ 000406ba 0122
.org 0x406bc
	bl 0x3a8d4	@ 000406bc faf70af9
.org 0x406c0
	b.n 0x4070e	@ 000406c0 25e0
.org 0x406c2
	.byte 0x00	@ 000406c2 data
.org 0x406c3
	.byte 0x00	@ 000406c3 data
.org 0x406c4
	.byte 0x88,0xed,0x02,0x02	@ 000406c4 data
.org 0x406c8
	.byte 0xf8,0x39,0x85,0x08	@ 000406c8 data
.org 0x406cc
	.byte 0xfc,0x36,0x85,0x08	@ 000406cc data
.org 0x406d0
	.byte 0x04,0x37,0x85,0x08	@ 000406d0 data
.org 0x406d4
	ldr r1, [pc, #88]	@ 000406d4 1649
.org 0x406d6
	movs r0, #9	@ 000406d6 0920
.org 0x406d8
	strb r0, [r4, #9]	@ 000406d8 6072
.org 0x406da
	ldr r0, [r1, #36]	@ 000406da 486a
.org 0x406dc
	ldr r0, [r0, #0]	@ 000406dc 0068
.org 0x406de
	str r0, [r4, #20]	@ 000406de 6061
.org 0x406e0
	ldrb r1, [r4, #11]	@ 000406e0 e17a
.org 0x406e2
	movs r0, #191	@ 000406e2 bf20
.org 0x406e4
	ands r0, r1	@ 000406e4 0840
.org 0x406e6
	strb r0, [r4, #11]	@ 000406e6 e072
.org 0x406e8
	adds r1, r4, #0	@ 000406e8 211c
.org 0x406ea
	adds r1, #37	@ 000406ea 2531
.org 0x406ec
	movs r0, #16	@ 000406ec 1020
.org 0x406ee
	strb r0, [r1, #0]	@ 000406ee 0870
.org 0x406f0
	ldr r0, [pc, #64]	@ 000406f0 1048
.org 0x406f2
	ldrh r0, [r0, #2]	@ 000406f2 4088
.org 0x406f4
	strh r0, [r4, #32]	@ 000406f4 2084
.org 0x406f6
	ldr r0, [pc, #64]	@ 000406f6 1048
.org 0x406f8
	ldrb r0, [r0, #1]	@ 000406f8 4078
.org 0x406fa
	subs r1, #3	@ 000406fa 0339
.org 0x406fc
	strb r0, [r1, #0]	@ 000406fc 0870
.org 0x406fe
	ldrb r0, [r4, #17]	@ 000406fe 607c
.org 0x40700
	cmp r0, #0	@ 00040700 0028
.org 0x40702
	beq.n 0x40724	@ 00040702 0fd0
.org 0x40704
	movs r0, #1	@ 00040704 0120
.org 0x40706
	movs r1, #0	@ 00040706 0021
.org 0x40708
	movs r2, #1	@ 00040708 0122
.org 0x4070a
	bl 0x3a8d4	@ 0004070a faf7e3f8
.org 0x4070e
	ldrb r0, [r4, #17]	@ 0004070e 607c
.org 0x40710
	cmp r0, #0	@ 00040710 0028
.org 0x40712
	beq.n 0x40724	@ 00040712 07d0
.org 0x40714
	movs r0, #173	@ 00040714 ad20
.org 0x40716
	lsls r0, r0, #1	@ 00040716 4000
.org 0x40718
	adds r1, r6, r0	@ 00040718 3118
.org 0x4071a
	ldr r0, [pc, #32]	@ 0004071a 0848
.org 0x4071c
	strh r0, [r1, #0]	@ 0004071c 0880
