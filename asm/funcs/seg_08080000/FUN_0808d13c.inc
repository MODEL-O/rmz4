@ FUN_0808d13c  entry 0x0808d13c  size 308
.thumb
.org 0x8d13c
FUN_0808d13c:
	push {r4, r5, lr}	@ 0008d13c 30b5
.org 0x8d13e
	adds r4, r0, #0	@ 0008d13e 041c
.org 0x8d140
	ldrb r5, [r4, #14]	@ 0008d140 a57b
.org 0x8d142
	cmp r5, #1	@ 0008d142 012d
.org 0x8d144
	beq.n 0x8d186	@ 0008d144 1fd0
.org 0x8d146
	cmp r5, #1	@ 0008d146 012d
.org 0x8d148
	bgt.n 0x8d150	@ 0008d148 02dc
.org 0x8d14a
	cmp r5, #0	@ 0008d14a 002d
.org 0x8d14c
	beq.n 0x8d15a	@ 0008d14c 05d0
.org 0x8d14e
	b.n 0x8d286	@ 0008d14e 9ae0
.org 0x8d150
	cmp r5, #2	@ 0008d150 022d
.org 0x8d152
	beq.n 0x8d1bc	@ 0008d152 33d0
.org 0x8d154
	cmp r5, #3	@ 0008d154 032d
.org 0x8d156
	beq.n 0x8d1cc	@ 0008d156 39d0
.org 0x8d158
	b.n 0x8d286	@ 0008d158 95e0
.org 0x8d15a
	adds r0, r4, #0	@ 0008d15a 201c
.org 0x8d15c
	adds r0, #116	@ 0008d15c 7430
.org 0x8d15e
	ldr r1, [pc, #84]	@ 0008d15e 1549
.org 0x8d160
	bl 0x5784	@ 0008d160 78f710fb
.org 0x8d164
	ldr r1, [pc, #80]	@ 0008d164 1449
.org 0x8d166
	adds r0, r4, #0	@ 0008d166 201c
.org 0x8d168
	bl 0x1cf00	@ 0008d168 8ff7cafe
.org 0x8d16c
	adds r0, r4, #0	@ 0008d16c 201c
.org 0x8d16e
	adds r0, #192	@ 0008d16e c030
.org 0x8d170
	movs r1, #0	@ 0008d170 0021
.org 0x8d172
	ldrsb r1, [r0, r1]	@ 0008d172 4156
.org 0x8d174
	ldr r0, [r4, #96]	@ 0008d174 206e
.org 0x8d176
	muls r0, r1	@ 0008d176 4843
.org 0x8d178
	str r0, [r4, #100]	@ 0008d178 6066
.org 0x8d17a
	str r5, [r4, #92]	@ 0008d17a e565
.org 0x8d17c
	movs r0, #48	@ 0008d17c 3020
.org 0x8d17e
	strb r0, [r4, #18]	@ 0008d17e a074
.org 0x8d180
	ldrb r0, [r4, #14]	@ 0008d180 a07b
.org 0x8d182
	adds r0, #1	@ 0008d182 0130
.org 0x8d184
	strb r0, [r4, #14]	@ 0008d184 a073
.org 0x8d186
	ldr r1, [r4, #92]	@ 0008d186 e16d
.org 0x8d188
	ldr r0, [r4, #100]	@ 0008d188 606e
.org 0x8d18a
	adds r1, r1, r0	@ 0008d18a 0918
.org 0x8d18c
	str r1, [r4, #92]	@ 0008d18c e165
.org 0x8d18e
	ldr r0, [r4, #84]	@ 0008d18e 606d
.org 0x8d190
	adds r0, r0, r1	@ 0008d190 4018
.org 0x8d192
	str r0, [r4, #84]	@ 0008d192 6065
.org 0x8d194
	adds r0, r4, #0	@ 0008d194 201c
.org 0x8d196
	bl 0x8db28	@ 0008d196 00f0c7fc
.org 0x8d19a
	adds r0, r4, #0	@ 0008d19a 201c
.org 0x8d19c
	bl 0x1cff0	@ 0008d19c 8ff728ff
.org 0x8d1a0
	ldrb r0, [r4, #18]	@ 0008d1a0 a07c
.org 0x8d1a2
	subs r0, #1	@ 0008d1a2 0138
.org 0x8d1a4
	strb r0, [r4, #18]	@ 0008d1a4 a074
.org 0x8d1a6
	lsls r0, r0, #24	@ 0008d1a6 0006
.org 0x8d1a8
	cmp r0, #0	@ 0008d1a8 0028
.org 0x8d1aa
	bne.n 0x8d286	@ 0008d1aa 6cd1
.org 0x8d1ac
	ldrb r0, [r4, #14]	@ 0008d1ac a07b
.org 0x8d1ae
	adds r0, #1	@ 0008d1ae 0130
.org 0x8d1b0
	strb r0, [r4, #14]	@ 0008d1b0 a073
.org 0x8d1b2
	b.n 0x8d286	@ 0008d1b2 68e0
.org 0x8d1b4
	.byte 0x3c,0xf9,0x85,0x08	@ 0008d1b4 data
.org 0x8d1b8
	.byte 0x01,0x25,0x00,0x00	@ 0008d1b8 data
.org 0x8d1bc
	ldr r0, [r4, #100]	@ 0008d1bc 606e
.org 0x8d1be
	negs r0, r0	@ 0008d1be 4042
.org 0x8d1c0
	str r0, [r4, #100]	@ 0008d1c0 6066
.org 0x8d1c2
	movs r0, #48	@ 0008d1c2 3020
.org 0x8d1c4
	strb r0, [r4, #18]	@ 0008d1c4 a074
.org 0x8d1c6
	ldrb r0, [r4, #14]	@ 0008d1c6 a07b
.org 0x8d1c8
	adds r0, #1	@ 0008d1c8 0130
.org 0x8d1ca
	strb r0, [r4, #14]	@ 0008d1ca a073
.org 0x8d1cc
	ldr r0, [r4, #92]	@ 0008d1cc e06d
.org 0x8d1ce
	ldr r1, [r4, #100]	@ 0008d1ce 616e
.org 0x8d1d0
	adds r0, r0, r1	@ 0008d1d0 4018
.org 0x8d1d2
	str r0, [r4, #92]	@ 0008d1d2 e065
.org 0x8d1d4
	adds r1, r0, #0	@ 0008d1d4 011c
.org 0x8d1d6
	cmp r1, #0	@ 0008d1d6 0029
.org 0x8d1d8
	bge.n 0x8d1dc	@ 0008d1d8 00da
.org 0x8d1da
	negs r1, r1	@ 0008d1da 4942
.org 0x8d1dc
	ldr r0, [r4, #96]	@ 0008d1dc 206e
.org 0x8d1de
	cmp r1, r0	@ 0008d1de 8142
.org 0x8d1e0
	bge.n 0x8d1e6	@ 0008d1e0 01da
.org 0x8d1e2
	movs r0, #0	@ 0008d1e2 0020
.org 0x8d1e4
	str r0, [r4, #92]	@ 0008d1e4 e065
.org 0x8d1e6
	ldr r0, [r4, #84]	@ 0008d1e6 606d
.org 0x8d1e8
	ldr r1, [r4, #92]	@ 0008d1e8 e16d
.org 0x8d1ea
	adds r0, r0, r1	@ 0008d1ea 4018
.org 0x8d1ec
	str r0, [r4, #84]	@ 0008d1ec 6065
.org 0x8d1ee
	adds r0, r4, #0	@ 0008d1ee 201c
.org 0x8d1f0
	bl 0x8db28	@ 0008d1f0 00f09afc
.org 0x8d1f4
	adds r0, r4, #0	@ 0008d1f4 201c
.org 0x8d1f6
	bl 0x1cff0	@ 0008d1f6 8ff7fbfe
.org 0x8d1fa
	ldrb r0, [r4, #18]	@ 0008d1fa a07c
.org 0x8d1fc
	subs r0, #1	@ 0008d1fc 0138
.org 0x8d1fe
	strb r0, [r4, #18]	@ 0008d1fe a074
.org 0x8d200
	lsls r0, r0, #24	@ 0008d200 0006
.org 0x8d202
	lsrs r5, r0, #24	@ 0008d202 050e
.org 0x8d204
	cmp r5, #0	@ 0008d204 002d
.org 0x8d206
	bne.n 0x8d286	@ 0008d206 3ed1
.org 0x8d208
	adds r3, r4, #0	@ 0008d208 231c
.org 0x8d20a
	adds r3, #184	@ 0008d20a b833
.org 0x8d20c
	adds r2, r4, #0	@ 0008d20c 221c
.org 0x8d20e
	adds r2, #192	@ 0008d20e c032
.org 0x8d210
	movs r1, #0	@ 0008d210 0021
.org 0x8d212
	ldrsb r1, [r2, r1]	@ 0008d212 5156
.org 0x8d214
	ldr r0, [r4, #104]	@ 0008d214 a06e
.org 0x8d216
	muls r1, r0	@ 0008d216 4143
.org 0x8d218
	ldr r0, [r3, #0]	@ 0008d218 1868
.org 0x8d21a
	adds r0, r0, r1	@ 0008d21a 4018
.org 0x8d21c
	str r0, [r4, #84]	@ 0008d21c 6065
.org 0x8d21e
	movs r0, #0	@ 0008d21e 0020
.org 0x8d220
	ldrsb r0, [r2, r0]	@ 0008d220 1056
.org 0x8d222
	negs r0, r0	@ 0008d222 4042
.org 0x8d224
	strb r0, [r2, #0]	@ 0008d224 1070
.org 0x8d226
	ldr r2, [pc, #60]	@ 0008d226 0f4a
.org 0x8d228
	ldr r1, [r2, #0]	@ 0008d228 1168
.org 0x8d22a
	ldr r0, [pc, #60]	@ 0008d22a 0f48
.org 0x8d22c
	muls r0, r1	@ 0008d22c 4843
.org 0x8d22e
	ldr r1, [pc, #60]	@ 0008d22e 0f49
.org 0x8d230
	adds r0, r0, r1	@ 0008d230 4018
.org 0x8d232
	lsls r0, r0, #1	@ 0008d232 4000
.org 0x8d234
	lsrs r1, r0, #1	@ 0008d234 4108
.org 0x8d236
	str r1, [r2, #0]	@ 0008d236 1160
.org 0x8d238
	lsrs r3, r0, #17	@ 0008d238 430c
.org 0x8d23a
	movs r0, #1	@ 0008d23a 0120
.org 0x8d23c
	ands r3, r0	@ 0008d23c 0340
.org 0x8d23e
	adds r1, r4, #0	@ 0008d23e 211c
.org 0x8d240
	adds r1, #195	@ 0008d240 c331
.org 0x8d242
	cmp r3, #0	@ 0008d242 002b
.org 0x8d244
	bne.n 0x8d24e	@ 0008d244 03d1
.org 0x8d246
	adds r2, r1, #0	@ 0008d246 0a1c
.org 0x8d248
	ldrb r0, [r2, #0]	@ 0008d248 1078
.org 0x8d24a
	cmp r0, #2	@ 0008d24a 0228
.org 0x8d24c
	bls.n 0x8d280	@ 0008d24c 18d9
.org 0x8d24e
	strb r5, [r1, #0]	@ 0008d24e 0d70
.org 0x8d250
	ldr r0, [pc, #28]	@ 0008d250 0748
.org 0x8d252
	ldr r1, [pc, #32]	@ 0008d252 0849
.org 0x8d254
	adds r0, r0, r1	@ 0008d254 4018
.org 0x8d256
	ldrb r1, [r0, #0]	@ 0008d256 0178
.org 0x8d258
	movs r0, #15	@ 0008d258 0f20
.org 0x8d25a
	ands r0, r1	@ 0008d25a 0840
.org 0x8d25c
	cmp r0, #1	@ 0008d25c 0128
.org 0x8d25e
	bne.n 0x8d278	@ 0008d25e 0bd1
.org 0x8d260
	movs r0, #3	@ 0008d260 0320
.org 0x8d262
	b.n 0x8d27a	@ 0008d262 0ae0
.org 0x8d264
	.byte 0x38,0xdc,0x02,0x02	@ 0008d264 data
.org 0x8d268
	.byte 0xfd,0x43,0x03,0x00	@ 0008d268 data
.org 0x8d26c
	.byte 0xc3,0x9e,0x26,0x00	@ 0008d26c data
