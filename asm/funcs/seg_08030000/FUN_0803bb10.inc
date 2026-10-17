@ FUN_0803bb10  entry 0x0803bb10  size 166
.thumb
.org 0x3bb10
FUN_0803bb10:
	push {r4, r5, r6, lr}	@ 0003bb10 70b5
.org 0x3bb12
	adds r5, r0, #0	@ 0003bb12 051c
.org 0x3bb14
	ldr r0, [r5, #84]	@ 0003bb14 686d
.org 0x3bb16
	ldr r1, [r5, #92]	@ 0003bb16 e96d
.org 0x3bb18
	adds r0, r0, r1	@ 0003bb18 4018
.org 0x3bb1a
	str r0, [r5, #84]	@ 0003bb1a 6865
.org 0x3bb1c
	ldr r0, [r5, #88]	@ 0003bb1c a86d
.org 0x3bb1e
	ldr r1, [r5, #96]	@ 0003bb1e 296e
.org 0x3bb20
	adds r0, r0, r1	@ 0003bb20 4018
.org 0x3bb22
	str r0, [r5, #88]	@ 0003bb22 a865
.org 0x3bb24
	ldrb r0, [r5, #13]	@ 0003bb24 687b
.org 0x3bb26
	cmp r0, #0	@ 0003bb26 0028
.org 0x3bb28
	bne.n 0x3bb9e	@ 0003bb28 39d1
.org 0x3bb2a
	adds r0, r5, #0	@ 0003bb2a 281c
.org 0x3bb2c
	bl 0x3c400	@ 0003bb2c 00f068fc
.org 0x3bb30
	lsls r0, r0, #24	@ 0003bb30 0006
.org 0x3bb32
	cmp r0, #0	@ 0003bb32 0028
.org 0x3bb34
	beq.n 0x3bb9e	@ 0003bb34 33d0
.org 0x3bb36
	adds r0, r5, #0	@ 0003bb36 281c
.org 0x3bb38
	adds r0, #84	@ 0003bb38 5430
.org 0x3bb3a
	ldrb r2, [r5, #10]	@ 0003bb3a aa7a
.org 0x3bb3c
	lsrs r2, r2, #4	@ 0003bb3c 1209
.org 0x3bb3e
	movs r4, #1	@ 0003bb3e 0124
.org 0x3bb40
	ands r2, r4	@ 0003bb40 2240
.org 0x3bb42
	movs r1, #6	@ 0003bb42 0621
.org 0x3bb44
	bl 0xd1bcc	@ 0003bb44 96f042f8
.org 0x3bb48
	ldr r6, [r5, #92]	@ 0003bb48 ee6d
.org 0x3bb4a
	negs r3, r6	@ 0003bb4a 7342
.org 0x3bb4c
	str r3, [r5, #92]	@ 0003bb4c eb65
.org 0x3bb4e
	ldr r2, [pc, #28]	@ 0003bb4e 074a
.org 0x3bb50
	ldr r1, [r2, #0]	@ 0003bb50 1168
.org 0x3bb52
	ldr r0, [pc, #28]	@ 0003bb52 0748
.org 0x3bb54
	muls r0, r1	@ 0003bb54 4843
.org 0x3bb56
	ldr r1, [pc, #28]	@ 0003bb56 0749
.org 0x3bb58
	adds r0, r0, r1	@ 0003bb58 4018
.org 0x3bb5a
	lsls r0, r0, #1	@ 0003bb5a 4000
.org 0x3bb5c
	lsrs r1, r0, #1	@ 0003bb5c 4108
.org 0x3bb5e
	str r1, [r2, #0]	@ 0003bb5e 1160
.org 0x3bb60
	lsrs r0, r0, #17	@ 0003bb60 400c
.org 0x3bb62
	ands r0, r4	@ 0003bb62 2040
.org 0x3bb64
	cmp r0, #0	@ 0003bb64 0028
.org 0x3bb66
	beq.n 0x3bb78	@ 0003bb66 07d0
.org 0x3bb68
	str r3, [r5, #96]	@ 0003bb68 2b66
.org 0x3bb6a
	b.n 0x3bb7a	@ 0003bb6a 06e0
.org 0x3bb6c
	.byte 0x38,0xdc,0x02,0x02	@ 0003bb6c data
.org 0x3bb70
	.byte 0xfd,0x43,0x03,0x00	@ 0003bb70 data
.org 0x3bb74
	.byte 0xc3,0x9e,0x26,0x00	@ 0003bb74 data
.org 0x3bb78
	str r6, [r5, #96]	@ 0003bb78 2e66
.org 0x3bb7a
	movs r0, #43	@ 0003bb7a 2b20
.org 0x3bb7c
	bl 0x2b10	@ 0003bb7c c6f7c8ff
.org 0x3bb80
	adds r0, r5, #0	@ 0003bb80 281c
.org 0x3bb82
	adds r0, #140	@ 0003bb82 8c30
.org 0x3bb84
	movs r1, #0	@ 0003bb84 0021
.org 0x3bb86
	str r1, [r0, #0]	@ 0003bb86 0160
.org 0x3bb88
	adds r0, #4	@ 0003bb88 0430
.org 0x3bb8a
	str r1, [r0, #0]	@ 0003bb8a 0160
.org 0x3bb8c
	adds r0, #4	@ 0003bb8c 0430
.org 0x3bb8e
	strb r1, [r0, #0]	@ 0003bb8e 0170
.org 0x3bb90
	ldrb r1, [r5, #10]	@ 0003bb90 a97a
.org 0x3bb92
	movs r0, #251	@ 0003bb92 fb20
.org 0x3bb94
	ands r0, r1	@ 0003bb94 0840
.org 0x3bb96
	strb r0, [r5, #10]	@ 0003bb96 a872
.org 0x3bb98
	ldrb r0, [r5, #13]	@ 0003bb98 687b
.org 0x3bb9a
	adds r0, #1	@ 0003bb9a 0130
.org 0x3bb9c
	strb r0, [r5, #13]	@ 0003bb9c 6873
.org 0x3bb9e
	adds r0, r5, #0	@ 0003bb9e 281c
.org 0x3bba0
	bl 0x3c1e4	@ 0003bba0 00f020fb
.org 0x3bba4
	lsls r0, r0, #24	@ 0003bba4 0006
.org 0x3bba6
	cmp r0, #0	@ 0003bba6 0028
.org 0x3bba8
	beq.n 0x3bbbc	@ 0003bba8 08d0
.org 0x3bbaa
	ldr r1, [pc, #24]	@ 0003bbaa 0649
.org 0x3bbac
	ldrb r0, [r5, #9]	@ 0003bbac 687a
.org 0x3bbae
	lsls r0, r0, #2	@ 0003bbae 8000
.org 0x3bbb0
	adds r0, r0, r1	@ 0003bbb0 4018
.org 0x3bbb2
	movs r1, #2	@ 0003bbb2 0221
.org 0x3bbb4
	str r1, [r5, #12]	@ 0003bbb4 e960
