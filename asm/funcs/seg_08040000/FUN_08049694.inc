@ FUN_08049694  entry 0x08049694  size 134
.thumb
.org 0x49694
FUN_08049694:
	push {r4, r5, lr}	@ 00049694 30b5
.org 0x49696
	adds r4, r0, #0	@ 00049696 041c
.org 0x49698
	lsls r1, r1, #24	@ 00049698 0906
.org 0x4969a
	lsrs r5, r1, #24	@ 0004969a 0d0e
.org 0x4969c
	ldr r0, [pc, #64]	@ 0004969c 1048
.org 0x4969e
	ldr r0, [r0, #0]	@ 0004969e 0068
.org 0x496a0
	bl 0x5500	@ 000496a0 bbf72eff
.org 0x496a4
	adds r2, r0, #0	@ 000496a4 021c
.org 0x496a6
	cmp r2, #0	@ 000496a6 002a
.org 0x496a8
	beq.n 0x49724	@ 000496a8 3cd0
.org 0x496aa
	adds r0, r4, #0	@ 000496aa 201c
.org 0x496ac
	adds r0, #248	@ 000496ac f830
.org 0x496ae
	ldrb r0, [r0, #0]	@ 000496ae 0078
.org 0x496b0
	cmp r0, #2	@ 000496b0 0228
.org 0x496b2
	bne.n 0x496f0	@ 000496b2 1dd1
.org 0x496b4
	ldr r0, [pc, #44]	@ 000496b4 0b48
.org 0x496b6
	movs r1, #35	@ 000496b6 2321
.org 0x496b8
	strb r1, [r2, #9]	@ 000496b8 5172
.org 0x496ba
	adds r0, #140	@ 000496ba 8c30
.org 0x496bc
	ldr r0, [r0, #0]	@ 000496bc 0068
.org 0x496be
	ldr r0, [r0, #0]	@ 000496be 0068
.org 0x496c0
	str r0, [r2, #20]	@ 000496c0 5061
.org 0x496c2
	ldrb r1, [r2, #11]	@ 000496c2 d17a
.org 0x496c4
	movs r0, #191	@ 000496c4 bf20
.org 0x496c6
	ands r0, r1	@ 000496c6 0840
.org 0x496c8
	strb r0, [r2, #11]	@ 000496c8 d072
.org 0x496ca
	adds r1, r2, #0	@ 000496ca 111c
.org 0x496cc
	adds r1, #37	@ 000496cc 2531
.org 0x496ce
	movs r0, #16	@ 000496ce 1020
.org 0x496d0
	strb r0, [r1, #0]	@ 000496d0 0870
.org 0x496d2
	ldr r0, [pc, #20]	@ 000496d2 0548
.org 0x496d4
	ldrh r0, [r0, #0]	@ 000496d4 0088
.org 0x496d6
	strh r0, [r2, #32]	@ 000496d6 1084
.org 0x496d8
	ldr r0, [pc, #16]	@ 000496d8 0448
.org 0x496da
	ldrb r0, [r0, #0]	@ 000496da 0078
.org 0x496dc
	b.n 0x49718	@ 000496dc 1ce0
.org 0x496de
	.byte 0x00	@ 000496de data
.org 0x496df
	.byte 0x00	@ 000496df data
.org 0x496e0
	.byte 0x88,0xed,0x02,0x02	@ 000496e0 data
.org 0x496e4
	.byte 0xf8,0x39,0x85,0x08	@ 000496e4 data
.org 0x496e8
	.byte 0xfc,0x36,0x85,0x08	@ 000496e8 data
.org 0x496ec
	.byte 0x04,0x37,0x85,0x08	@ 000496ec data
.org 0x496f0
	ldr r0, [pc, #56]	@ 000496f0 0e48
.org 0x496f2
	movs r1, #35	@ 000496f2 2321
.org 0x496f4
	strb r1, [r2, #9]	@ 000496f4 5172
.org 0x496f6
	adds r0, #140	@ 000496f6 8c30
.org 0x496f8
	ldr r0, [r0, #0]	@ 000496f8 0068
.org 0x496fa
	ldr r0, [r0, #0]	@ 000496fa 0068
.org 0x496fc
	str r0, [r2, #20]	@ 000496fc 5061
.org 0x496fe
	ldrb r1, [r2, #11]	@ 000496fe d17a
.org 0x49700
	movs r0, #191	@ 00049700 bf20
.org 0x49702
	ands r0, r1	@ 00049702 0840
.org 0x49704
	strb r0, [r2, #11]	@ 00049704 d072
.org 0x49706
	adds r1, r2, #0	@ 00049706 111c
.org 0x49708
	adds r1, #37	@ 00049708 2531
.org 0x4970a
	movs r0, #16	@ 0004970a 1020
.org 0x4970c
	strb r0, [r1, #0]	@ 0004970c 0870
.org 0x4970e
	ldr r0, [pc, #32]	@ 0004970e 0848
.org 0x49710
	ldrh r0, [r0, #2]	@ 00049710 4088
.org 0x49712
	strh r0, [r2, #32]	@ 00049712 1084
.org 0x49714
	ldr r0, [pc, #28]	@ 00049714 0748
.org 0x49716
	ldrb r0, [r0, #1]	@ 00049716 4078
.org 0x49718
	subs r1, #3	@ 00049718 0339
