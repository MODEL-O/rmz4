@ FUN_080a46a0  entry 0x080a46a0  size 172
.thumb
.org 0xa46a0
FUN_080a46a0:
	push {r4, r5, r6, lr}	@ 000a46a0 70b5
.org 0xa46a2
	adds r4, r0, #0	@ 000a46a2 041c
.org 0xa46a4
	adds r6, r4, #0	@ 000a46a4 261c
.org 0xa46a6
	adds r6, #140	@ 000a46a6 8c36
.org 0xa46a8
	ldr r0, [r6, #0]	@ 000a46a8 3068
.org 0xa46aa
	movs r1, #128	@ 000a46aa 8021
.org 0xa46ac
	lsls r1, r1, #2	@ 000a46ac 8900
.org 0xa46ae
	ands r0, r1	@ 000a46ae 0840
.org 0xa46b0
	cmp r0, #0	@ 000a46b0 0028
.org 0xa46b2
	bne.n 0xa46da	@ 000a46b2 12d1
.org 0xa46b4
	adds r1, r4, #0	@ 000a46b4 211c
.org 0xa46b6
	adds r1, #180	@ 000a46b6 b431
.org 0xa46b8
	ldr r0, [r1, #0]	@ 000a46b8 0868
.org 0xa46ba
	subs r0, #1	@ 000a46ba 0138
.org 0xa46bc
	str r0, [r1, #0]	@ 000a46bc 0860
.org 0xa46be
	cmp r0, #0	@ 000a46be 0028
.org 0xa46c0
	beq.n 0xa46da	@ 000a46c0 0bd0
.org 0xa46c2
	ldr r0, [r4, #84]	@ 000a46c2 606d
.org 0xa46c4
	ldr r1, [r4, #88]	@ 000a46c4 a16d
.org 0xa46c6
	bl 0x7c7c	@ 000a46c6 63f7d9fa
.org 0xa46ca
	lsls r0, r0, #16	@ 000a46ca 0004
.org 0xa46cc
	cmp r0, #0	@ 000a46cc 0028
.org 0xa46ce
	bne.n 0xa46da	@ 000a46ce 04d1
.org 0xa46d0
	ldr r5, [r6, #0]	@ 000a46d0 3568
.org 0xa46d2
	movs r0, #4	@ 000a46d2 0420
.org 0xa46d4
	ands r5, r0	@ 000a46d4 0540
.org 0xa46d6
	cmp r5, #0	@ 000a46d6 002d
.org 0xa46d8
	beq.n 0xa46f8	@ 000a46d8 0ed0
.org 0xa46da
	ldr r1, [pc, #24]	@ 000a46da 0649
.org 0xa46dc
	ldrb r0, [r4, #9]	@ 000a46dc 607a
.org 0xa46de
	lsls r0, r0, #2	@ 000a46de 8000
.org 0xa46e0
	adds r0, r0, r1	@ 000a46e0 4018
.org 0xa46e2
	movs r1, #2	@ 000a46e2 0221
.org 0xa46e4
	str r1, [r4, #12]	@ 000a46e4 e160
.org 0xa46e6
	ldr r0, [r0, #0]	@ 000a46e6 0068
.org 0xa46e8
	ldr r0, [r0, #8]	@ 000a46e8 8068
.org 0xa46ea
	str r0, [r4, #20]	@ 000a46ea 6061
.org 0xa46ec
	adds r0, r4, #0	@ 000a46ec 201c
.org 0xa46ee
	bl 0xa4758	@ 000a46ee 00f033f8
.org 0xa46f2
	b.n 0xa474a	@ 000a46f2 2ae0
.org 0xa46f4
	.byte 0x40,0xdb,0x85,0x08	@ 000a46f4 data
.org 0xa46f8
	adds r0, r4, #0	@ 000a46f8 201c
.org 0xa46fa
	bl 0x1cff0	@ 000a46fa 78f779fc
.org 0xa46fe
	ldr r0, [r4, #84]	@ 000a46fe 606d
.org 0xa4700
	ldr r1, [r4, #92]	@ 000a4700 e16d
.org 0xa4702
	adds r0, r0, r1	@ 000a4702 4018
.org 0xa4704
	str r0, [r4, #84]	@ 000a4704 6065
.org 0xa4706
	ldr r0, [pc, #72]	@ 000a4706 1248
.org 0xa4708
	adds r1, r4, #0	@ 000a4708 211c
.org 0xa470a
	adds r1, #84	@ 000a470a 5431
.org 0xa470c
	bl 0x1fb14	@ 000a470c 7bf702fa
.org 0xa4710
	movs r1, #128	@ 000a4710 8021
.org 0xa4712
	lsls r1, r1, #6	@ 000a4712 8901
.org 0xa4714
	cmp r0, r1	@ 000a4714 8842
.org 0xa4716
	bls.n 0xa474a	@ 000a4716 18d9
.org 0xa4718
	ldrb r1, [r4, #10]	@ 000a4718 a17a
.org 0xa471a
	movs r0, #254	@ 000a471a fe20
.org 0xa471c
	ands r0, r1	@ 000a471c 0840
.org 0xa471e
	movs r1, #253	@ 000a471e fd21
.org 0xa4720
	ands r0, r1	@ 000a4720 0840
.org 0xa4722
	strb r0, [r4, #10]	@ 000a4722 a072
.org 0xa4724
	str r5, [r6, #0]	@ 000a4724 3560
.org 0xa4726
	adds r0, r4, #0	@ 000a4726 201c
.org 0xa4728
	adds r0, #144	@ 000a4728 9030
.org 0xa472a
	str r5, [r0, #0]	@ 000a472a 0560
.org 0xa472c
	adds r0, #4	@ 000a472c 0430
.org 0xa472e
	strb r5, [r0, #0]	@ 000a472e 0570
.org 0xa4730
	ldrb r1, [r4, #10]	@ 000a4730 a17a
.org 0xa4732
	movs r0, #251	@ 000a4732 fb20
.org 0xa4734
	ands r0, r1	@ 000a4734 0840
.org 0xa4736
	strb r0, [r4, #10]	@ 000a4736 a072
.org 0xa4738
	ldr r1, [pc, #24]	@ 000a4738 0649
.org 0xa473a
	ldrb r0, [r4, #9]	@ 000a473a 607a
.org 0xa473c
	lsls r0, r0, #2	@ 000a473c 8000
.org 0xa473e
	adds r0, r0, r1	@ 000a473e 4018
.org 0xa4740
	movs r1, #3	@ 000a4740 0321
.org 0xa4742
	str r1, [r4, #12]	@ 000a4742 e160
.org 0xa4744
	ldr r0, [r0, #0]	@ 000a4744 0068
.org 0xa4746
	ldr r0, [r0, #12]	@ 000a4746 c068
.org 0xa4748
	str r0, [r4, #20]	@ 000a4748 6061
.org 0xa474a
	pop {r4, r5, r6}	@ 000a474a 70bc
