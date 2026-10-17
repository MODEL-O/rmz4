@ FUN_080c4114  entry 0x080c4114  size 216
.thumb
.org 0xc4114
FUN_080c4114:
	push {r4, r5, r6, r7, lr}	@ 000c4114 f0b5
.org 0xc4116
	mov r7, r8	@ 000c4116 4746
.org 0xc4118
	push {r7}	@ 000c4118 80b4
.org 0xc411a
	adds r4, r0, #0	@ 000c411a 041c
.org 0xc411c
	ldr r0, [r4, #40]	@ 000c411c a06a
.org 0xc411e
	mov r8, r0	@ 000c411e 8046
.org 0xc4120
	ldrb r0, [r0, #10]	@ 000c4120 807a
.org 0xc4122
	lsrs r7, r0, #4	@ 000c4122 0709
.org 0xc4124
	movs r0, #1	@ 000c4124 0120
.org 0xc4126
	ands r7, r0	@ 000c4126 0740
.org 0xc4128
	ldrb r0, [r4, #15]	@ 000c4128 e07b
.org 0xc412a
	cmp r0, #0	@ 000c412a 0028
.org 0xc412c
	bne.n 0xc413c	@ 000c412c 06d1
.org 0xc412e
	movs r0, #156	@ 000c412e 9c20
.org 0xc4130
	lsls r0, r0, #1	@ 000c4130 4000
.org 0xc4132
	bl 0x2b10	@ 000c4132 3ef7edfc
.org 0xc4136
	ldrb r0, [r4, #15]	@ 000c4136 e07b
.org 0xc4138
	adds r0, #1	@ 000c4138 0130
.org 0xc413a
	strb r0, [r4, #15]	@ 000c413a e073
.org 0xc413c
	adds r6, r4, #0	@ 000c413c 261c
.org 0xc413e
	adds r6, #180	@ 000c413e b436
.org 0xc4140
	ldrb r0, [r6, #0]	@ 000c4140 3078
.org 0xc4142
	cmp r0, #0	@ 000c4142 0028
.org 0xc4144
	beq.n 0xc416a	@ 000c4144 11d0
.org 0xc4146
	adds r5, r4, #0	@ 000c4146 251c
.org 0xc4148
	adds r5, #184	@ 000c4148 b835
.org 0xc414a
	ldr r0, [r5, #0]	@ 000c414a 2868
.org 0xc414c
	cmp r0, #0	@ 000c414c 0028
.org 0xc414e
	bne.n 0xc415c	@ 000c414e 05d1
.org 0xc4150
	adds r0, r4, #0	@ 000c4150 201c
.org 0xc4152
	bl 0xc3f04	@ 000c4152 fff7d7fe
.org 0xc4156
	str r0, [r5, #0]	@ 000c4156 2860
.org 0xc4158
	cmp r0, #0	@ 000c4158 0028
.org 0xc415a
	beq.n 0xc4168	@ 000c415a 05d0
.org 0xc415c
	ldr r0, [r5, #0]	@ 000c415c 2868
.org 0xc415e
	ldrb r0, [r0, #13]	@ 000c415e 407b
.org 0xc4160
	cmp r0, #1	@ 000c4160 0128
.org 0xc4162
	bne.n 0xc416a	@ 000c4162 02d1
.org 0xc4164
	movs r0, #0	@ 000c4164 0020
.org 0xc4166
	str r0, [r5, #0]	@ 000c4166 2860
.org 0xc4168
	strb r0, [r6, #0]	@ 000c4168 3070
.org 0xc416a
	adds r0, r4, #0	@ 000c416a 201c
.org 0xc416c
	bl 0x1cff0	@ 000c416c 58f740ff
.org 0xc4170
	adds r2, r7, #0	@ 000c4170 3a1c
.org 0xc4172
	cmp r2, #0	@ 000c4172 002a
.org 0xc4174
	beq.n 0xc417e	@ 000c4174 03d0
.org 0xc4176
	ldrb r1, [r4, #10]	@ 000c4176 a17a
.org 0xc4178
	movs r0, #16	@ 000c4178 1020
.org 0xc417a
	orrs r0, r1	@ 000c417a 0843
.org 0xc417c
	b.n 0xc4184	@ 000c417c 02e0
.org 0xc417e
	ldrb r1, [r4, #10]	@ 000c417e a17a
.org 0xc4180
	movs r0, #239	@ 000c4180 ef20
.org 0xc4182
	ands r0, r1	@ 000c4182 0840
.org 0xc4184
	strb r0, [r4, #10]	@ 000c4184 a072
.org 0xc4186
	adds r1, r2, #0	@ 000c4186 111c
.org 0xc4188
	adds r0, r4, #0	@ 000c4188 201c
.org 0xc418a
	adds r0, #76	@ 000c418a 4c30
.org 0xc418c
	strb r1, [r0, #0]	@ 000c418c 0170
.org 0xc418e
	adds r3, r4, #0	@ 000c418e 231c
.org 0xc4190
	adds r3, #74	@ 000c4190 4a33
.org 0xc4192
	lsls r1, r1, #4	@ 000c4192 0901
.org 0xc4194
	ldrb r2, [r3, #0]	@ 000c4194 1a78
.org 0xc4196
	movs r0, #17	@ 000c4196 1120
.org 0xc4198
	negs r0, r0	@ 000c4198 4042
.org 0xc419a
	ands r0, r2	@ 000c419a 1040
.org 0xc419c
	orrs r0, r1	@ 000c419c 0843
.org 0xc419e
	strb r0, [r3, #0]	@ 000c419e 1870
.org 0xc41a0
	mov r1, r8	@ 000c41a0 4146
.org 0xc41a2
	ldr r2, [r1, #84]	@ 000c41a2 4a6d
.org 0xc41a4
	ldrb r1, [r1, #10]	@ 000c41a4 897a
.org 0xc41a6
	movs r0, #16	@ 000c41a6 1020
.org 0xc41a8
	ands r0, r1	@ 000c41a8 0840
.org 0xc41aa
	cmp r0, #0	@ 000c41aa 0028
.org 0xc41ac
	beq.n 0xc41b4	@ 000c41ac 02d0
.org 0xc41ae
	movs r1, #176	@ 000c41ae b021
.org 0xc41b0
	lsls r1, r1, #6	@ 000c41b0 8901
.org 0xc41b2
	b.n 0xc41b6	@ 000c41b2 00e0
.org 0xc41b4
	ldr r1, [pc, #52]	@ 000c41b4 0d49
.org 0xc41b6
	adds r0, r2, r1	@ 000c41b6 5018
.org 0xc41b8
	str r0, [r4, #84]	@ 000c41b8 6065
.org 0xc41ba
	mov r1, r8	@ 000c41ba 4146
.org 0xc41bc
	ldr r0, [r1, #88]	@ 000c41bc 886d
.org 0xc41be
	movs r1, #176	@ 000c41be b021
.org 0xc41c0
	lsls r1, r1, #6	@ 000c41c0 8901
.org 0xc41c2
	adds r0, r0, r1	@ 000c41c2 4018
.org 0xc41c4
	str r0, [r4, #88]	@ 000c41c4 a065
.org 0xc41c6
	adds r0, r4, #0	@ 000c41c6 201c
.org 0xc41c8
	adds r0, #181	@ 000c41c8 b530
.org 0xc41ca
	ldrb r0, [r0, #0]	@ 000c41ca 0078
.org 0xc41cc
	cmp r0, #0	@ 000c41cc 0028
.org 0xc41ce
	beq.n 0xc41e2	@ 000c41ce 08d0
.org 0xc41d0
	adds r0, r4, #0	@ 000c41d0 201c
.org 0xc41d2
	adds r0, #184	@ 000c41d2 b830
.org 0xc41d4
	ldr r1, [r0, #0]	@ 000c41d4 0168
.org 0xc41d6
	cmp r1, #0	@ 000c41d6 0029
.org 0xc41d8
	bne.n 0xc41e2	@ 000c41d8 03d1
.org 0xc41da
	movs r0, #2	@ 000c41da 0220
.org 0xc41dc
	strb r0, [r4, #13]	@ 000c41dc 6073
.org 0xc41de
	strb r1, [r4, #14]	@ 000c41de a173
.org 0xc41e0
	strb r1, [r4, #15]	@ 000c41e0 e173
.org 0xc41e2
	pop {r3}	@ 000c41e2 08bc
.org 0xc41e4
	mov r8, r3	@ 000c41e4 9846
.org 0xc41e6
	pop {r4, r5, r6, r7}	@ 000c41e6 f0bc
.org 0xc41e8
	pop {r0}	@ 000c41e8 01bc
.org 0xc41ea
	bx r0	@ 000c41ea 0047
