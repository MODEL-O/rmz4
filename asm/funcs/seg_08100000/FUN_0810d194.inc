@ FUN_0810d194  entry 0x0810d194  size 266
.thumb
.org 0x10d194
FUN_0810d194:
	push {r4, r5, lr}	@ 0010d194 30b5
.org 0x10d196
	adds r4, r0, #0	@ 0010d196 041c
.org 0x10d198
	ldr r0, [r4, #40]	@ 0010d198 a06a
.org 0x10d19a
	ldr r1, [pc, #64]	@ 0010d19a 1049
.org 0x10d19c
	adds r5, r0, r1	@ 0010d19c 4518
.org 0x10d19e
	ldrb r0, [r5, #5]	@ 0010d19e 6879
.org 0x10d1a0
	cmp r0, #0	@ 0010d1a0 0028
.org 0x10d1a2
	bne.n 0x10d272	@ 0010d1a2 66d1
.org 0x10d1a4
	adds r1, r4, #0	@ 0010d1a4 211c
.org 0x10d1a6
	adds r1, #128	@ 0010d1a6 8031
.org 0x10d1a8
	ldrb r0, [r1, #0]	@ 0010d1a8 0878
.org 0x10d1aa
	cmp r0, #0	@ 0010d1aa 0028
.org 0x10d1ac
	beq.n 0x10d1b2	@ 0010d1ac 01d0
.org 0x10d1ae
	bl 0x25d8	@ 0010d1ae f5f613fa
.org 0x10d1b2
	ldrb r0, [r5, #18]	@ 0010d1b2 a87c
.org 0x10d1b4
	cmp r0, #3	@ 0010d1b4 0328
.org 0x10d1b6
	bne.n 0x10d1ba	@ 0010d1b6 00d1
.org 0x10d1b8
	strb r0, [r4, #13]	@ 0010d1b8 6073
.org 0x10d1ba
	adds r0, r4, #0	@ 0010d1ba 201c
.org 0x10d1bc
	adds r0, #120	@ 0010d1bc 7830
.org 0x10d1be
	ldrh r1, [r0, #0]	@ 0010d1be 0188
.org 0x10d1c0
	ldr r0, [pc, #28]	@ 0010d1c0 0748
.org 0x10d1c2
	cmp r1, r0	@ 0010d1c2 8142
.org 0x10d1c4
	bne.n 0x10d1ec	@ 0010d1c4 12d1
.org 0x10d1c6
	ldrb r1, [r4, #18]	@ 0010d1c6 a17c
.org 0x10d1c8
	adds r0, r1, #1	@ 0010d1c8 481c
.org 0x10d1ca
	strb r0, [r4, #18]	@ 0010d1ca a074
.org 0x10d1cc
	movs r0, #3	@ 0010d1cc 0320
.org 0x10d1ce
	ands r0, r1	@ 0010d1ce 0840
.org 0x10d1d0
	cmp r0, #0	@ 0010d1d0 0028
.org 0x10d1d2
	beq.n 0x10d1e4	@ 0010d1d2 07d0
.org 0x10d1d4
	ldrb r1, [r4, #10]	@ 0010d1d4 a17a
.org 0x10d1d6
	movs r0, #1	@ 0010d1d6 0120
.org 0x10d1d8
	orrs r0, r1	@ 0010d1d8 0843
.org 0x10d1da
	b.n 0x10d1ea	@ 0010d1da 06e0
.org 0x10d1dc
	.byte 0xcc,0x0d,0x00,0x00	@ 0010d1dc data
.org 0x10d1e0
	.byte 0x03,0xb0,0x00,0x00	@ 0010d1e0 data
.org 0x10d1e4
	ldrb r1, [r4, #10]	@ 0010d1e4 a17a
.org 0x10d1e6
	movs r0, #254	@ 0010d1e6 fe20
.org 0x10d1e8
	ands r0, r1	@ 0010d1e8 0840
.org 0x10d1ea
	strb r0, [r4, #10]	@ 0010d1ea a072
.org 0x10d1ec
	adds r0, r4, #0	@ 0010d1ec 201c
.org 0x10d1ee
	bl 0x1cff0	@ 0010d1ee 0ff7fffe
.org 0x10d1f2
	ldrb r0, [r4, #13]	@ 0010d1f2 607b
.org 0x10d1f4
	cmp r0, #1	@ 0010d1f4 0128
.org 0x10d1f6
	beq.n 0x10d242	@ 0010d1f6 24d0
.org 0x10d1f8
	cmp r0, #1	@ 0010d1f8 0128
.org 0x10d1fa
	bgt.n 0x10d202	@ 0010d1fa 02dc
.org 0x10d1fc
	cmp r0, #0	@ 0010d1fc 0028
.org 0x10d1fe
	beq.n 0x10d210	@ 0010d1fe 07d0
.org 0x10d200
	b.n 0x10d20a	@ 0010d200 03e0
.org 0x10d202
	cmp r0, #2	@ 0010d202 0228
.org 0x10d204
	beq.n 0x10d254	@ 0010d204 26d0
.org 0x10d206
	cmp r0, #3	@ 0010d206 0328
.org 0x10d208
	beq.n 0x10d272	@ 0010d208 33d0
.org 0x10d20a
	adds r2, r4, #0	@ 0010d20a 221c
.org 0x10d20c
	adds r2, #124	@ 0010d20c 7c32
.org 0x10d20e
	b.n 0x10d290	@ 0010d20e 3fe0
.org 0x10d210
	adds r2, r4, #0	@ 0010d210 221c
.org 0x10d212
	adds r2, #69	@ 0010d212 4532
.org 0x10d214
	ldrb r1, [r2, #0]	@ 0010d214 1178
.org 0x10d216
	movs r0, #13	@ 0010d216 0d20
.org 0x10d218
	negs r0, r0	@ 0010d218 4042
.org 0x10d21a
	ands r0, r1	@ 0010d21a 0840
.org 0x10d21c
	movs r1, #4	@ 0010d21c 0421
.org 0x10d21e
	orrs r0, r1	@ 0010d21e 0843
.org 0x10d220
	strb r0, [r2, #0]	@ 0010d220 1070
.org 0x10d222
	adds r1, r4, #0	@ 0010d222 211c
.org 0x10d224
	adds r1, #124	@ 0010d224 7c31
.org 0x10d226
	ldrb r0, [r1, #0]	@ 0010d226 0878
.org 0x10d228
	adds r0, #2	@ 0010d228 0230
.org 0x10d22a
	strb r0, [r1, #0]	@ 0010d22a 0870
.org 0x10d22c
	lsls r0, r0, #24	@ 0010d22c 0006
.org 0x10d22e
	lsrs r0, r0, #24	@ 0010d22e 000e
.org 0x10d230
	adds r2, r1, #0	@ 0010d230 0a1c
.org 0x10d232
	cmp r0, #15	@ 0010d232 0f28
.org 0x10d234
	bls.n 0x10d290	@ 0010d234 2cd9
.org 0x10d236
	movs r0, #16	@ 0010d236 1020
.org 0x10d238
	strb r0, [r2, #0]	@ 0010d238 1070
.org 0x10d23a
	ldrb r0, [r4, #13]	@ 0010d23a 607b
.org 0x10d23c
	adds r0, #1	@ 0010d23c 0130
.org 0x10d23e
	strb r0, [r4, #13]	@ 0010d23e 6073
.org 0x10d240
	b.n 0x10d290	@ 0010d240 26e0
.org 0x10d242
	adds r2, r4, #0	@ 0010d242 221c
.org 0x10d244
	adds r2, #69	@ 0010d244 4532
.org 0x10d246
	ldrb r1, [r2, #0]	@ 0010d246 1178
.org 0x10d248
	movs r0, #13	@ 0010d248 0d20
.org 0x10d24a
	negs r0, r0	@ 0010d24a 4042
.org 0x10d24c
	ands r0, r1	@ 0010d24c 0840
.org 0x10d24e
	strb r0, [r2, #0]	@ 0010d24e 1070
.org 0x10d250
	adds r2, #55	@ 0010d250 3732
.org 0x10d252
	b.n 0x10d290	@ 0010d252 1de0
.org 0x10d254
	adds r2, r4, #0	@ 0010d254 221c
.org 0x10d256
	adds r2, #69	@ 0010d256 4532
.org 0x10d258
	ldrb r1, [r2, #0]	@ 0010d258 1178
.org 0x10d25a
	movs r0, #13	@ 0010d25a 0d20
.org 0x10d25c
	negs r0, r0	@ 0010d25c 4042
.org 0x10d25e
	ands r0, r1	@ 0010d25e 0840
.org 0x10d260
	movs r1, #4	@ 0010d260 0421
.org 0x10d262
	orrs r0, r1	@ 0010d262 0843
.org 0x10d264
	strb r0, [r2, #0]	@ 0010d264 1070
.org 0x10d266
	adds r1, r4, #0	@ 0010d266 211c
.org 0x10d268
	adds r1, #124	@ 0010d268 7c31
.org 0x10d26a
	movs r0, #8	@ 0010d26a 0820
.org 0x10d26c
	strb r0, [r1, #0]	@ 0010d26c 0870
.org 0x10d26e
	adds r2, r1, #0	@ 0010d26e 0a1c
.org 0x10d270
	b.n 0x10d290	@ 0010d270 0ee0
.org 0x10d272
	ldr r1, [pc, #24]	@ 0010d272 0649
.org 0x10d274
	ldrb r0, [r4, #9]	@ 0010d274 607a
.org 0x10d276
	lsls r0, r0, #2	@ 0010d276 8000
.org 0x10d278
	adds r0, r0, r1	@ 0010d278 4018
.org 0x10d27a
	movs r1, #2	@ 0010d27a 0221
.org 0x10d27c
	str r1, [r4, #12]	@ 0010d27c e160
.org 0x10d27e
	ldr r0, [r0, #0]	@ 0010d27e 0068
.org 0x10d280
	ldr r0, [r0, #8]	@ 0010d280 8068
.org 0x10d282
	str r0, [r4, #20]	@ 0010d282 6061
.org 0x10d284
	adds r0, r4, #0	@ 0010d284 201c
.org 0x10d286
	bl 0x10d2b0	@ 0010d286 00f013f8
.org 0x10d28a
	b.n 0x10d2a4	@ 0010d28a 0be0
.org 0x10d28c
	.byte 0xf8,0xca,0x86,0x08	@ 0010d28c data
.org 0x10d290
	ldr r3, [pc, #24]	@ 0010d290 064b
.org 0x10d292
	ldrb r0, [r2, #0]	@ 0010d292 1078
.org 0x10d294
	movs r1, #31	@ 0010d294 1f21
.org 0x10d296
	ands r1, r0	@ 0010d296 0140
.org 0x10d298
	ldrb r2, [r2, #0]	@ 0010d298 1278
.org 0x10d29a
	movs r0, #16	@ 0010d29a 1020
.org 0x10d29c
	subs r0, r0, r2	@ 0010d29c 801a
