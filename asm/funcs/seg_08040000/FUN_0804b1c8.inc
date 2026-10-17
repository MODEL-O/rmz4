@ FUN_0804b1c8  entry 0x0804b1c8  size 264
.thumb
.org 0x4b1c8
FUN_0804b1c8:
	push {r4, r5, lr}	@ 0004b1c8 30b5
.org 0x4b1ca
	adds r5, r0, #0	@ 0004b1ca 051c
.org 0x4b1cc
	ldr r1, [pc, #96]	@ 0004b1cc 1849
.org 0x4b1ce
	ldrb r0, [r5, #9]	@ 0004b1ce 687a
.org 0x4b1d0
	lsls r0, r0, #2	@ 0004b1d0 8000
.org 0x4b1d2
	adds r0, r0, r1	@ 0004b1d2 4018
.org 0x4b1d4
	movs r4, #1	@ 0004b1d4 0124
.org 0x4b1d6
	str r4, [r5, #12]	@ 0004b1d6 ec60
.org 0x4b1d8
	ldr r0, [r0, #0]	@ 0004b1d8 0068
.org 0x4b1da
	ldr r0, [r0, #4]	@ 0004b1da 4068
.org 0x4b1dc
	str r0, [r5, #20]	@ 0004b1dc 6861
.org 0x4b1de
	adds r0, r5, #0	@ 0004b1de 281c
.org 0x4b1e0
	bl 0x1cc9c	@ 0004b1e0 d1f75cfd
.org 0x4b1e4
	adds r0, r5, #0	@ 0004b1e4 281c
.org 0x4b1e6
	bl 0x1ceec	@ 0004b1e6 d1f781fe
.org 0x4b1ea
	ldrb r1, [r5, #10]	@ 0004b1ea a97a
.org 0x4b1ec
	movs r0, #1	@ 0004b1ec 0120
.org 0x4b1ee
	movs r2, #0	@ 0004b1ee 0022
.org 0x4b1f0
	orrs r0, r1	@ 0004b1f0 0843
.org 0x4b1f2
	movs r1, #2	@ 0004b1f2 0221
.org 0x4b1f4
	orrs r0, r1	@ 0004b1f4 0843
.org 0x4b1f6
	strb r0, [r5, #10]	@ 0004b1f6 a872
.org 0x4b1f8
	ldrb r1, [r5, #11]	@ 0004b1f8 e97a
.org 0x4b1fa
	movs r0, #251	@ 0004b1fa fb20
.org 0x4b1fc
	ands r0, r1	@ 0004b1fc 0840
.org 0x4b1fe
	strb r0, [r5, #11]	@ 0004b1fe e872
.org 0x4b200
	movs r0, #0	@ 0004b200 0020
.org 0x4b202
	strh r2, [r5, #32]	@ 0004b202 2a84
.org 0x4b204
	adds r1, r5, #0	@ 0004b204 291c
.org 0x4b206
	adds r1, #34	@ 0004b206 2231
.org 0x4b208
	strb r0, [r1, #0]	@ 0004b208 0870
.org 0x4b20a
	ldr r2, [pc, #40]	@ 0004b20a 0a4a
.org 0x4b20c
	ldr r1, [r2, #0]	@ 0004b20c 1168
.org 0x4b20e
	ldr r0, [pc, #40]	@ 0004b20e 0a48
.org 0x4b210
	muls r0, r1	@ 0004b210 4843
.org 0x4b212
	ldr r1, [pc, #40]	@ 0004b212 0a49
.org 0x4b214
	adds r0, r0, r1	@ 0004b214 4018
.org 0x4b216
	lsls r0, r0, #1	@ 0004b216 4000
.org 0x4b218
	lsrs r1, r0, #1	@ 0004b218 4108
.org 0x4b21a
	str r1, [r2, #0]	@ 0004b21a 1160
.org 0x4b21c
	lsrs r0, r0, #17	@ 0004b21c 400c
.org 0x4b21e
	ands r0, r4	@ 0004b21e 2040
.org 0x4b220
	cmp r0, #0	@ 0004b220 0028
.org 0x4b222
	beq.n 0x4b240	@ 0004b222 0dd0
.org 0x4b224
	adds r0, r5, #0	@ 0004b224 281c
.org 0x4b226
	movs r1, #28	@ 0004b226 1c21
.org 0x4b228
	bl 0x1cf00	@ 0004b228 d1f76afe
.org 0x4b22c
	b.n 0x4b248	@ 0004b22c 0ce0
.org 0x4b22e
	.byte 0x00	@ 0004b22e data
.org 0x4b22f
	.byte 0x00	@ 0004b22f data
.org 0x4b230
	.byte 0xf8,0x39,0x85,0x08	@ 0004b230 data
.org 0x4b234
	.byte 0x38,0xdc,0x02,0x02	@ 0004b234 data
.org 0x4b238
	.byte 0xfd,0x43,0x03,0x00	@ 0004b238 data
.org 0x4b23c
	.byte 0xc3,0x9e,0x26,0x00	@ 0004b23c data
.org 0x4b240
	adds r0, r5, #0	@ 0004b240 281c
.org 0x4b242
	movs r1, #29	@ 0004b242 1d21
.org 0x4b244
	bl 0x1cf00	@ 0004b244 d1f75cfe
.org 0x4b248
	adds r0, r5, #0	@ 0004b248 281c
.org 0x4b24a
	bl 0x1cff0	@ 0004b24a d1f7d1fe
.org 0x4b24e
	ldr r2, [pc, #36]	@ 0004b24e 094a
.org 0x4b250
	ldr r1, [r2, #0]	@ 0004b250 1168
.org 0x4b252
	ldr r0, [pc, #36]	@ 0004b252 0948
.org 0x4b254
	muls r0, r1	@ 0004b254 4843
.org 0x4b256
	ldr r1, [pc, #36]	@ 0004b256 0949
.org 0x4b258
	adds r0, r0, r1	@ 0004b258 4018
.org 0x4b25a
	lsls r0, r0, #1	@ 0004b25a 4000
.org 0x4b25c
	lsrs r1, r0, #1	@ 0004b25c 4108
.org 0x4b25e
	str r1, [r2, #0]	@ 0004b25e 1160
.org 0x4b260
	lsrs r2, r0, #17	@ 0004b260 420c
.org 0x4b262
	movs r0, #1	@ 0004b262 0120
.org 0x4b264
	ands r2, r0	@ 0004b264 0240
.org 0x4b266
	cmp r2, #0	@ 0004b266 002a
.org 0x4b268
	beq.n 0x4b280	@ 0004b268 0ad0
.org 0x4b26a
	ldrb r1, [r5, #10]	@ 0004b26a a97a
.org 0x4b26c
	movs r0, #16	@ 0004b26c 1020
.org 0x4b26e
	orrs r0, r1	@ 0004b26e 0843
.org 0x4b270
	b.n 0x4b286	@ 0004b270 09e0
.org 0x4b272
	.byte 0x00	@ 0004b272 data
.org 0x4b273
	.byte 0x00	@ 0004b273 data
.org 0x4b274
	.byte 0x38,0xdc,0x02,0x02	@ 0004b274 data
.org 0x4b278
	.byte 0xfd,0x43,0x03,0x00	@ 0004b278 data
.org 0x4b27c
	.byte 0xc3,0x9e,0x26,0x00	@ 0004b27c data
.org 0x4b280
	ldrb r1, [r5, #10]	@ 0004b280 a97a
.org 0x4b282
	movs r0, #239	@ 0004b282 ef20
.org 0x4b284
	ands r0, r1	@ 0004b284 0840
.org 0x4b286
	strb r0, [r5, #10]	@ 0004b286 a872
.org 0x4b288
	adds r1, r2, #0	@ 0004b288 111c
.org 0x4b28a
	adds r0, r5, #0	@ 0004b28a 281c
.org 0x4b28c
	adds r0, #76	@ 0004b28c 4c30
.org 0x4b28e
	strb r1, [r0, #0]	@ 0004b28e 0170
.org 0x4b290
	adds r3, r5, #0	@ 0004b290 2b1c
.org 0x4b292
	adds r3, #74	@ 0004b292 4a33
.org 0x4b294
	lsls r1, r1, #4	@ 0004b294 0901
.org 0x4b296
	ldrb r2, [r3, #0]	@ 0004b296 1a78
.org 0x4b298
	movs r0, #17	@ 0004b298 1120
.org 0x4b29a
	negs r0, r0	@ 0004b29a 4042
.org 0x4b29c
	ands r0, r2	@ 0004b29c 1040
.org 0x4b29e
	orrs r0, r1	@ 0004b29e 0843
.org 0x4b2a0
	strb r0, [r3, #0]	@ 0004b2a0 1870
.org 0x4b2a2
	ldrb r1, [r5, #10]	@ 0004b2a2 a97a
.org 0x4b2a4
	movs r0, #4	@ 0004b2a4 0420
.org 0x4b2a6
	orrs r0, r1	@ 0004b2a6 0843
.org 0x4b2a8
	strb r0, [r5, #10]	@ 0004b2a8 a872
.org 0x4b2aa
	adds r4, r5, #0	@ 0004b2aa 2c1c
.org 0x4b2ac
	adds r4, #116	@ 0004b2ac 7434
.org 0x4b2ae
	ldr r1, [pc, #32]	@ 0004b2ae 0849
.org 0x4b2b0
	adds r2, r5, #0	@ 0004b2b0 2a1c
.org 0x4b2b2
	adds r2, #84	@ 0004b2b2 5432
.org 0x4b2b4
	adds r0, r4, #0	@ 0004b2b4 201c
.org 0x4b2b6
	movs r3, #8	@ 0004b2b6 0823
.org 0x4b2b8
	bl 0x5760	@ 0004b2b8 baf752fa
.org 0x4b2bc
	str r5, [r4, #44]	@ 0004b2bc e562
.org 0x4b2be
	ldr r0, [pc, #20]	@ 0004b2be 0548
.org 0x4b2c0
	str r0, [r4, #36]	@ 0004b2c0 6062
.org 0x4b2c2
	ldrb r0, [r5, #17]	@ 0004b2c2 687c
.org 0x4b2c4
	cmp r0, #0	@ 0004b2c4 0028
.org 0x4b2c6
	beq.n 0x4b2d8	@ 0004b2c6 07d0
.org 0x4b2c8
	movs r0, #176	@ 0004b2c8 b020
.org 0x4b2ca
	lsls r0, r0, #2	@ 0004b2ca 8000
.org 0x4b2cc
	b.n 0x4b2da	@ 0004b2cc 05e0
.org 0x4b2ce
	.byte 0x00	@ 0004b2ce data
.org 0x4b2cf
	.byte 0x00	@ 0004b2cf data
