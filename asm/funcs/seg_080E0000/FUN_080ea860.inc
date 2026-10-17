@ FUN_080ea860  entry 0x080ea860  size 198
.thumb
.org 0xea860
FUN_080ea860:
	push {r4, r5, r6, r7, lr}	@ 000ea860 f0b5
.org 0xea862
	adds r7, r0, #0	@ 000ea862 071c
.org 0xea864
	ldrb r4, [r7, #14]	@ 000ea864 bc7b
.org 0xea866
	cmp r4, #1	@ 000ea866 012c
.org 0xea868
	beq.n 0xea87e	@ 000ea868 09d0
.org 0xea86a
	cmp r4, #1	@ 000ea86a 012c
.org 0xea86c
	bgt.n 0xea874	@ 000ea86c 02dc
.org 0xea86e
	cmp r4, #0	@ 000ea86e 002c
.org 0xea870
	beq.n 0xea87a	@ 000ea870 03d0
.org 0xea872
	b.n 0xea93a	@ 000ea872 62e0
.org 0xea874
	cmp r4, #2	@ 000ea874 022c
.org 0xea876
	beq.n 0xea918	@ 000ea876 4fd0
.org 0xea878
	b.n 0xea93a	@ 000ea878 5fe0
.org 0xea87a
	movs r0, #1	@ 000ea87a 0120
.org 0xea87c
	strb r0, [r7, #14]	@ 000ea87c b873
.org 0xea87e
	adds r0, r7, #0	@ 000ea87e 381c
.org 0xea880
	bl 0x1cff0	@ 000ea880 32f7b6fb
.org 0xea884
	adds r0, r7, #0	@ 000ea884 381c
.org 0xea886
	adds r0, #115	@ 000ea886 7330
.org 0xea888
	ldrb r0, [r0, #0]	@ 000ea888 0078
.org 0xea88a
	cmp r0, #3	@ 000ea88a 0328
.org 0xea88c
	bne.n 0xea93a	@ 000ea88c 55d1
.org 0xea88e
	ldr r2, [pc, #112]	@ 000ea88e 1c4a
.org 0xea890
	ldrb r1, [r2, #20]	@ 000ea890 117d
.org 0xea892
	movs r0, #64	@ 000ea892 4020
.org 0xea894
	orrs r0, r1	@ 000ea894 0843
.org 0xea896
	strb r0, [r2, #20]	@ 000ea896 1075
.org 0xea898
	adds r6, r7, #0	@ 000ea898 3e1c
.org 0xea89a
	adds r6, #184	@ 000ea89a b836
.org 0xea89c
	movs r5, #203	@ 000ea89c cb25
.org 0xea89e
	strb r5, [r6, #0]	@ 000ea89e 3570
.org 0xea8a0
	lsls r4, r5, #4	@ 000ea8a0 2c01
.org 0xea8a2
	movs r0, #203	@ 000ea8a2 cb20
.org 0xea8a4
	lsls r0, r0, #2	@ 000ea8a4 8000
.org 0xea8a6
	adds r4, r4, r0	@ 000ea8a6 2418
.org 0xea8a8
	ldr r0, [pc, #88]	@ 000ea8a8 1648
.org 0xea8aa
	adds r0, r4, r0	@ 000ea8aa 2018
.org 0xea8ac
	ldr r1, [pc, #88]	@ 000ea8ac 1649
.org 0xea8ae
	lsls r5, r5, #1	@ 000ea8ae 6d00
.org 0xea8b0
	adds r1, r1, r5	@ 000ea8b0 4919
.org 0xea8b2
	ldrh r1, [r1, #0]	@ 000ea8b2 0988
.org 0xea8b4
	ldrh r2, [r0, #6]	@ 000ea8b4 c288
.org 0xea8b6
	lsrs r2, r2, #6	@ 000ea8b6 9209
.org 0xea8b8
	subs r1, r1, r2	@ 000ea8b8 891a
.org 0xea8ba
	lsls r1, r1, #5	@ 000ea8ba 4901
.org 0xea8bc
	movs r2, #128	@ 000ea8bc 8022
.org 0xea8be
	lsls r2, r2, #9	@ 000ea8be 5202
.org 0xea8c0
	adds r1, r1, r2	@ 000ea8c0 8918
.org 0xea8c2
	bl 0x1ea4	@ 000ea8c2 17f7effa
.org 0xea8c6
	ldr r0, [pc, #68]	@ 000ea8c6 1148
.org 0xea8c8
	adds r4, r4, r0	@ 000ea8c8 2418
.org 0xea8ca
	ldr r0, [pc, #68]	@ 000ea8ca 1148
.org 0xea8cc
	adds r0, r0, r5	@ 000ea8cc 4019
.org 0xea8ce
	ldrh r1, [r0, #0]	@ 000ea8ce 0188
.org 0xea8d0
	ldrb r0, [r4, #7]	@ 000ea8d0 e079
.org 0xea8d2
	subs r1, r1, r0	@ 000ea8d2 091a
.org 0xea8d4
	lsls r1, r1, #5	@ 000ea8d4 4901
.org 0xea8d6
	movs r2, #128	@ 000ea8d6 8022
.org 0xea8d8
	lsls r2, r2, #2	@ 000ea8d8 9200
.org 0xea8da
	adds r1, r1, r2	@ 000ea8da 8918
.org 0xea8dc
	adds r0, r4, #0	@ 000ea8dc 201c
.org 0xea8de
	bl 0x2208	@ 000ea8de 17f793fc
.org 0xea8e2
	ldrb r1, [r6, #0]	@ 000ea8e2 3178
.org 0xea8e4
	lsls r1, r1, #8	@ 000ea8e4 0902
.org 0xea8e6
	adds r0, r7, #0	@ 000ea8e6 381c
.org 0xea8e8
	bl 0x1cf00	@ 000ea8e8 32f70afb
.org 0xea8ec
	adds r0, r7, #0	@ 000ea8ec 381c
.org 0xea8ee
	bl 0x1cff0	@ 000ea8ee 32f77ffb
.org 0xea8f2
	ldr r0, [pc, #32]	@ 000ea8f2 0848
.org 0xea8f4
	bl 0xe9590	@ 000ea8f4 fef74cfe
.org 0xea8f8
	ldrb r0, [r7, #14]	@ 000ea8f8 b87b
.org 0xea8fa
	adds r0, #1	@ 000ea8fa 0130
.org 0xea8fc
	b.n 0xea938	@ 000ea8fc 1ce0
.org 0xea8fe
	.byte 0x00	@ 000ea8fe data
.org 0xea8ff
	.byte 0x00	@ 000ea8ff data
.org 0xea900
	.byte 0xb0,0xe8,0x02,0x02	@ 000ea900 data
.org 0xea904
	.byte 0x00,0x40,0xc4,0x08	@ 000ea904 data
.org 0xea908
	.byte 0x40,0xe0,0x02,0x02	@ 000ea908 data
.org 0xea90c
	.byte 0x0c,0x40,0xc4,0x08	@ 000ea90c data
.org 0xea910
	.byte 0x40,0xde,0x02,0x02	@ 000ea910 data
.org 0xea914
	.byte 0x79,0xa9,0x0e,0x08	@ 000ea914 data
.org 0xea918
	adds r0, r7, #0	@ 000ea918 381c
.org 0xea91a
	bl 0x1cff0	@ 000ea91a 32f769fb
.org 0xea91e
	ldrb r0, [r7, #16]	@ 000ea91e 387c
.org 0xea920
	ands r4, r0	@ 000ea920 0440
.org 0xea922
	cmp r4, #0	@ 000ea922 002c
.org 0xea924
	beq.n 0xea93a	@ 000ea924 09d0
