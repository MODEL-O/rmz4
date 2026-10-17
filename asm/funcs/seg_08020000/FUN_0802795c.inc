@ FUN_0802795c  entry 0x0802795c  size 234
.thumb
.org 0x2795c
FUN_0802795c:
	push {r4, r5, r6, r7, lr}	@ 0002795c f0b5
.org 0x2795e
	mov r7, r8	@ 0002795e 4746
.org 0x27960
	push {r7}	@ 00027960 80b4
.org 0x27962
	adds r4, r0, #0	@ 00027962 041c
.org 0x27964
	movs r0, #162	@ 00027964 a220
.org 0x27966
	lsls r0, r0, #1	@ 00027966 4000
.org 0x27968
	adds r5, r4, r0	@ 00027968 2518
.org 0x2796a
	ldr r3, [r5, #0]	@ 0002796a 2b68
.org 0x2796c
	lsrs r1, r3, #16	@ 0002796c 190c
.org 0x2796e
	cmp r3, #0	@ 0002796e 002b
.org 0x27970
	beq.n 0x27a5a	@ 00027970 73d0
.org 0x27972
	movs r0, #8	@ 00027972 0820
.org 0x27974
	ands r0, r3	@ 00027974 1840
.org 0x27976
	cmp r0, #0	@ 00027976 0028
.org 0x27978
	beq.n 0x279e0	@ 00027978 32d0
.org 0x2797a
	ldr r1, [pc, #80]	@ 0002797a 1449
.org 0x2797c
	ldr r2, [pc, #80]	@ 0002797c 144a
.org 0x2797e
	adds r2, r2, r1	@ 0002797e 5218
.org 0x27980
	mov r8, r2	@ 00027980 9046
.org 0x27982
	movs r4, #0	@ 00027982 0024
.org 0x27984
	movs r0, #32	@ 00027984 2020
.org 0x27986
	strb r0, [r2, #0]	@ 00027986 1070
.org 0x27988
	ldr r6, [pc, #72]	@ 00027988 124e
.org 0x2798a
	adds r7, r1, r6	@ 0002798a 8f19
.org 0x2798c
	strb r0, [r7, #0]	@ 0002798c 3870
.org 0x2798e
	movs r2, #128	@ 0002798e 8022
.org 0x27990
	lsls r2, r2, #3	@ 00027990 d200
.org 0x27992
	adds r6, r1, r2	@ 00027992 8e18
.org 0x27994
	strb r0, [r6, #0]	@ 00027994 3070
.org 0x27996
	movs r0, #192	@ 00027996 c020
.org 0x27998
	lsls r0, r0, #10	@ 00027998 8002
.org 0x2799a
	adds r1, r3, r0	@ 0002799a 1918
.org 0x2799c
	str r1, [r5, #0]	@ 0002799c 2960
.org 0x2799e
	movs r0, #128	@ 0002799e 8020
.org 0x279a0
	lsls r0, r0, #15	@ 000279a0 c003
.org 0x279a2
	cmp r1, r0	@ 000279a2 8142
.org 0x279a4
	bls.n 0x27a5a	@ 000279a4 59d9
.org 0x279a6
	movs r0, #1	@ 000279a6 0120
.org 0x279a8
	ands r1, r0	@ 000279a8 0140
.org 0x279aa
	cmp r1, #0	@ 000279aa 0029
.org 0x279ac
	bne.n 0x279bc	@ 000279ac 06d1
.org 0x279ae
	movs r0, #179	@ 000279ae b320
.org 0x279b0
	bl 0x2b10	@ 000279b0 dbf7aef8
.org 0x279b4
	mov r1, r8	@ 000279b4 4146
.org 0x279b6
	strb r4, [r1, #0]	@ 000279b6 0c70
.org 0x279b8
	strb r4, [r7, #0]	@ 000279b8 3c70
.org 0x279ba
	strb r4, [r6, #0]	@ 000279ba 3470
.org 0x279bc
	str r4, [r5, #0]	@ 000279bc 2c60
.org 0x279be
	ldr r2, [pc, #24]	@ 000279be 064a
.org 0x279c0
	ldrh r1, [r2, #0]	@ 000279c0 1188
.org 0x279c2
	ldr r0, [pc, #24]	@ 000279c2 0648
.org 0x279c4
	ands r0, r1	@ 000279c4 0840
.org 0x279c6
	strh r0, [r2, #0]	@ 000279c6 1080
.org 0x279c8
	b.n 0x27a5a	@ 000279c8 47e0
.org 0x279ca
	.byte 0x00	@ 000279ca data
.org 0x279cb
	.byte 0x00	@ 000279cb data
.org 0x279cc
	.byte 0xc0,0x2a,0x00,0x03	@ 000279cc data
.org 0x279d0
	.byte 0x02,0x04,0x00,0x00	@ 000279d0 data
.org 0x279d4
	.byte 0x01,0x04,0x00,0x00	@ 000279d4 data
.org 0x279d8
	.byte 0x50,0x0a,0x00,0x02	@ 000279d8 data
.org 0x279dc
	.byte 0xff,0xdf,0x00,0x00	@ 000279dc data
.org 0x279e0
	movs r0, #1	@ 000279e0 0120
.org 0x279e2
	ands r0, r3	@ 000279e2 1840
.org 0x279e4
	cmp r0, #0	@ 000279e4 0028
.org 0x279e6
	bne.n 0x279ec	@ 000279e6 01d1
.org 0x279e8
	movs r0, #64	@ 000279e8 4020
.org 0x279ea
	subs r1, r0, r1	@ 000279ea 411a
.org 0x279ec
	movs r0, #4	@ 000279ec 0420
.org 0x279ee
	ands r0, r3	@ 000279ee 1840
.org 0x279f0
	cmp r0, #0	@ 000279f0 0028
.org 0x279f2
	beq.n 0x27a24	@ 000279f2 17d0
.org 0x279f4
	ldr r2, [pc, #36]	@ 000279f4 094a
.org 0x279f6
	lsrs r1, r1, #1	@ 000279f6 4908
.org 0x279f8
	movs r0, #64	@ 000279f8 4020
.org 0x279fa
	subs r0, r0, r1	@ 000279fa 401a
.org 0x279fc
	ldr r6, [pc, #32]	@ 000279fc 084e
.org 0x279fe
	adds r1, r2, r6	@ 000279fe 9119
.org 0x27a00
	strb r0, [r1, #0]	@ 00027a00 0870
.org 0x27a02
	movs r1, #255	@ 00027a02 ff21
.org 0x27a04
	ands r0, r1	@ 00027a04 0840
.org 0x27a06
	subs r6, #1	@ 00027a06 013e
.org 0x27a08
	adds r1, r2, r6	@ 00027a08 9119
.org 0x27a0a
	strb r0, [r1, #0]	@ 00027a0a 0870
.org 0x27a0c
	movs r1, #128	@ 00027a0c 8021
.org 0x27a0e
	lsls r1, r1, #3	@ 00027a0e c900
.org 0x27a10
	adds r2, r2, r1	@ 00027a10 5218
.org 0x27a12
	strb r0, [r2, #0]	@ 00027a12 1070
.org 0x27a14
	movs r2, #128	@ 00027a14 8022
.org 0x27a16
	lsls r2, r2, #9	@ 00027a16 5202
.org 0x27a18
	adds r0, r3, r2	@ 00027a18 9818
.org 0x27a1a
	b.n 0x27a46	@ 00027a1a 14e0
.org 0x27a1c
	.byte 0xc0,0x2a,0x00,0x03	@ 00027a1c data
.org 0x27a20
	.byte 0x02,0x04,0x00,0x00	@ 00027a20 data
.org 0x27a24
	ldr r2, [pc, #60]	@ 00027a24 0f4a
.org 0x27a26
	lsrs r1, r1, #1	@ 00027a26 4908
.org 0x27a28
	ldr r6, [pc, #60]	@ 00027a28 0f4e
.org 0x27a2a
	adds r0, r2, r6	@ 00027a2a 9019
.org 0x27a2c
	strb r1, [r0, #0]	@ 00027a2c 0170
.org 0x27a2e
	movs r0, #255	@ 00027a2e ff20
.org 0x27a30
	ands r1, r0	@ 00027a30 0140
.org 0x27a32
	subs r6, #1	@ 00027a32 013e
.org 0x27a34
	adds r0, r2, r6	@ 00027a34 9019
.org 0x27a36
	strb r1, [r0, #0]	@ 00027a36 0170
.org 0x27a38
	movs r0, #128	@ 00027a38 8020
.org 0x27a3a
	lsls r0, r0, #3	@ 00027a3a c000
.org 0x27a3c
	adds r2, r2, r0	@ 00027a3c 1218
.org 0x27a3e
	strb r1, [r2, #0]	@ 00027a3e 1170
.org 0x27a40
	movs r1, #128	@ 00027a40 8021
.org 0x27a42
	lsls r1, r1, #10	@ 00027a42 8902
.org 0x27a44
	adds r0, r3, r1	@ 00027a44 5818
