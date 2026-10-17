@ FUN_0801d134  entry 0x0801d134  size 176
.thumb
.org 0x1d134
FUN_0801d134:
	push {r4, r5, lr}	@ 0001d134 30b5
.org 0x1d136
	adds r4, r0, #0	@ 0001d136 041c
.org 0x1d138
	adds r5, r4, #0	@ 0001d138 251c
.org 0x1d13a
	adds r5, #52	@ 0001d13a 3435
.org 0x1d13c
	adds r0, #108	@ 0001d13c 6c30
.org 0x1d13e
	bl 0x3518	@ 0001d13e e6f7ebf9
.org 0x1d142
	adds r0, r4, #0	@ 0001d142 201c
.org 0x1d144
	adds r0, #112	@ 0001d144 7030
.org 0x1d146
	ldrb r1, [r0, #0]	@ 0001d146 0178
.org 0x1d148
	ldr r0, [r4, #108]	@ 0001d148 e06e
.org 0x1d14a
	lsls r1, r1, #2	@ 0001d14a 8900
.org 0x1d14c
	adds r1, r1, r0	@ 0001d14c 0918
.org 0x1d14e
	adds r0, r4, #0	@ 0001d14e 201c
.org 0x1d150
	adds r0, #113	@ 0001d150 7130
.org 0x1d152
	ldrb r0, [r0, #0]	@ 0001d152 0078
.org 0x1d154
	lsls r0, r0, #24	@ 0001d154 0006
.org 0x1d156
	asrs r0, r0, #24	@ 0001d156 0016
.org 0x1d158
	ldr r1, [r1, #0]	@ 0001d158 0968
.org 0x1d15a
	lsls r0, r0, #1	@ 0001d15a 4000
.org 0x1d15c
	adds r0, r0, r1	@ 0001d15c 4018
.org 0x1d15e
	ldrb r0, [r0, #0]	@ 0001d15e 0078
.org 0x1d160
	adds r3, r0, #0	@ 0001d160 031c
.org 0x1d162
	strb r3, [r5, #26]	@ 0001d162 ab76
.org 0x1d164
	ldrb r1, [r4, #11]	@ 0001d164 e17a
.org 0x1d166
	movs r0, #4	@ 0001d166 0420
.org 0x1d168
	ands r0, r1	@ 0001d168 0840
.org 0x1d16a
	cmp r0, #0	@ 0001d16a 0028
.org 0x1d16c
	beq.n 0x1d1de	@ 0001d16c 37d0
.org 0x1d16e
	ldrb r2, [r4, #30]	@ 0001d16e a27f
.org 0x1d170
	lsls r0, r2, #2	@ 0001d170 9000
.org 0x1d172
	ldr r1, [pc, #112]	@ 0001d172 1c49
.org 0x1d174
	adds r0, r0, r1	@ 0001d174 4018
.org 0x1d176
	ldr r1, [r0, #0]	@ 0001d176 0168
.org 0x1d178
	ldr r0, [r5, #8]	@ 0001d178 a868
.org 0x1d17a
	cmp r0, r1	@ 0001d17a 8842
.org 0x1d17c
	beq.n 0x1d180	@ 0001d17c 00d0
.org 0x1d17e
	str r1, [r4, #60]	@ 0001d17e e163
.org 0x1d180
	lsls r0, r3, #2	@ 0001d180 9800
.org 0x1d182
	adds r0, r0, r1	@ 0001d182 4018
.org 0x1d184
	ldrb r3, [r0, #3]	@ 0001d184 c378
.org 0x1d186
	ldrb r1, [r4, #31]	@ 0001d186 e17f
.org 0x1d188
	movs r0, #127	@ 0001d188 7f20
.org 0x1d18a
	ands r0, r1	@ 0001d18a 0840
.org 0x1d18c
	cmp r3, r0	@ 0001d18c 8342
.org 0x1d18e
	beq.n 0x1d1de	@ 0001d18e 26d0
.org 0x1d190
	movs r0, #128	@ 0001d190 8020
.org 0x1d192
	orrs r3, r0	@ 0001d192 0343
.org 0x1d194
	strb r3, [r4, #31]	@ 0001d194 e377
.org 0x1d196
	ldr r0, [pc, #80]	@ 0001d196 1448
.org 0x1d198
	lsls r2, r2, #1	@ 0001d198 5200
.org 0x1d19a
	adds r0, r2, r0	@ 0001d19a 1018
.org 0x1d19c
	ldrh r1, [r0, #0]	@ 0001d19c 0188
.org 0x1d19e
	ldrh r0, [r4, #32]	@ 0001d19e 208c
.org 0x1d1a0
	adds r1, r1, r0	@ 0001d1a0 0918
.org 0x1d1a2
	adds r3, r4, #0	@ 0001d1a2 231c
.org 0x1d1a4
	adds r3, #34	@ 0001d1a4 2233
.org 0x1d1a6
	ldr r0, [pc, #68]	@ 0001d1a6 1148
.org 0x1d1a8
	adds r2, r2, r0	@ 0001d1a8 1218
.org 0x1d1aa
	ldrh r0, [r2, #0]	@ 0001d1aa 1088
.org 0x1d1ac
	ldrb r3, [r3, #0]	@ 0001d1ac 1b78
.org 0x1d1ae
	adds r0, r0, r3	@ 0001d1ae c018
.org 0x1d1b0
	lsls r0, r0, #16	@ 0001d1b0 0004
.org 0x1d1b2
	lsrs r3, r0, #16	@ 0001d1b2 030c
.org 0x1d1b4
	lsls r1, r1, #22	@ 0001d1b4 8905
.org 0x1d1b6
	lsrs r1, r1, #22	@ 0001d1b6 890d
.org 0x1d1b8
	ldrh r2, [r5, #20]	@ 0001d1b8 aa8a
.org 0x1d1ba
	ldr r0, [pc, #52]	@ 0001d1ba 0d48
.org 0x1d1bc
	ands r0, r2	@ 0001d1bc 1040
.org 0x1d1be
	orrs r0, r1	@ 0001d1be 0843
.org 0x1d1c0
	strh r0, [r5, #20]	@ 0001d1c0 a882
.org 0x1d1c2
	ldrb r1, [r4, #11]	@ 0001d1c2 e17a
.org 0x1d1c4
	movs r0, #32	@ 0001d1c4 2020
.org 0x1d1c6
	ands r0, r1	@ 0001d1c6 0840
.org 0x1d1c8
	cmp r0, #0	@ 0001d1c8 0028
.org 0x1d1ca
	bne.n 0x1d1de	@ 0001d1ca 08d1
.org 0x1d1cc
	lsls r2, r3, #4	@ 0001d1cc 1a01
.org 0x1d1ce
	ldrb r1, [r5, #21]	@ 0001d1ce 697d
.org 0x1d1d0
	movs r0, #15	@ 0001d1d0 0f20
.org 0x1d1d2
	ands r0, r1	@ 0001d1d2 0840
.org 0x1d1d4
	orrs r0, r2	@ 0001d1d4 1043
.org 0x1d1d6
	strb r0, [r5, #21]	@ 0001d1d6 6875
.org 0x1d1d8
	adds r0, r4, #0	@ 0001d1d8 201c
.org 0x1d1da
	adds r0, #35	@ 0001d1da 2330
.org 0x1d1dc
	strb r3, [r0, #0]	@ 0001d1dc 0370
.org 0x1d1de
	pop {r4, r5}	@ 0001d1de 30bc
.org 0x1d1e0
	pop {r0}	@ 0001d1e0 01bc
.org 0x1d1e2
	bx r0	@ 0001d1e2 0047
