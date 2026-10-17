@ FUN_0811a10c  entry 0x0811a10c  size 1000
.thumb
.org 0x11a10c
FUN_0811a10c:
	push {r4, r5, r6, r7, lr}	@ 0011a10c f0b5
.org 0x11a10e
	mov r7, r9	@ 0011a10e 4f46
.org 0x11a110
	mov r6, r8	@ 0011a110 4646
.org 0x11a112
	push {r6, r7}	@ 0011a112 c0b4
.org 0x11a114
	adds r6, r0, #0	@ 0011a114 061c
.org 0x11a116
	ldr r0, [pc, #120]	@ 0011a116 1e48
.org 0x11a118
	adds r4, r6, r0	@ 0011a118 3418
.org 0x11a11a
	ldrb r0, [r4, #0]	@ 0011a11a 2078
.org 0x11a11c
	cmp r0, #0	@ 0011a11c 0028
.org 0x11a11e
	bne.n 0x11a14c	@ 0011a11e 15d1
.org 0x11a120
	movs r0, #19	@ 0011a120 1320
.org 0x11a122
	movs r1, #0	@ 0011a122 0021
.org 0x11a124
	bl 0x249c	@ 0011a124 e8f6baf9
.org 0x11a128
	ldr r1, [pc, #104]	@ 0011a128 1a49
.org 0x11a12a
	movs r2, #0	@ 0011a12a 0022
.org 0x11a12c
	ldr r0, [pc, #104]	@ 0011a12c 1a48
.org 0x11a12e
	strh r0, [r1, #0]	@ 0011a12e 0880
.org 0x11a130
	movs r0, #221	@ 0011a130 dd20
.org 0x11a132
	lsls r0, r0, #4	@ 0011a132 0001
.org 0x11a134
	adds r1, r6, r0	@ 0011a134 3118
.org 0x11a136
	movs r0, #44	@ 0011a136 2c20
.org 0x11a138
	strb r0, [r1, #2]	@ 0011a138 8870
.org 0x11a13a
	ldr r1, [pc, #96]	@ 0011a13a 1849
.org 0x11a13c
	adds r0, r6, r1	@ 0011a13c 7018
.org 0x11a13e
	strb r2, [r0, #0]	@ 0011a13e 0270
.org 0x11a140
	adds r1, #1	@ 0011a140 0131
.org 0x11a142
	adds r0, r6, r1	@ 0011a142 7018
.org 0x11a144
	strb r2, [r0, #0]	@ 0011a144 0270
.org 0x11a146
	ldrb r0, [r4, #0]	@ 0011a146 2078
.org 0x11a148
	adds r0, #1	@ 0011a148 0130
.org 0x11a14a
	strb r0, [r4, #0]	@ 0011a14a 2070
.org 0x11a14c
	ldr r2, [pc, #80]	@ 0011a14c 144a
.org 0x11a14e
	adds r4, r6, r2	@ 0011a14e b418
.org 0x11a150
	ldrb r0, [r4, #0]	@ 0011a150 2078
.org 0x11a152
	cmp r0, #0	@ 0011a152 0028
.org 0x11a154
	bne.n 0x11a17e	@ 0011a154 13d1
.org 0x11a156
	movs r1, #221	@ 0011a156 dd21
.org 0x11a158
	lsls r1, r1, #4	@ 0011a158 0901
.org 0x11a15a
	adds r0, r6, r1	@ 0011a15a 7018
.org 0x11a15c
	ldrb r0, [r0, #0]	@ 0011a15c 0078
.org 0x11a15e
	adds r0, #20	@ 0011a15e 1430
.org 0x11a160
	bl 0x25d8	@ 0011a160 e8f63afa
.org 0x11a164
	movs r0, #19	@ 0011a164 1320
.org 0x11a166
	bl 0x25d8	@ 0011a166 e8f637fa
.org 0x11a16a
	lsls r0, r0, #24	@ 0011a16a 0006
.org 0x11a16c
	lsrs r0, r0, #24	@ 0011a16c 000e
.org 0x11a16e
	cmp r0, #3	@ 0011a16e 0328
.org 0x11a170
	bne.n 0x11a17e	@ 0011a170 05d1
.org 0x11a172
	movs r0, #19	@ 0011a172 1320
.org 0x11a174
	bl 0x2624	@ 0011a174 e8f656fa
.org 0x11a178
	ldrb r0, [r4, #0]	@ 0011a178 2078
.org 0x11a17a
	adds r0, #1	@ 0011a17a 0130
.org 0x11a17c
	strb r0, [r4, #0]	@ 0011a17c 2070
.org 0x11a17e
	ldr r2, [pc, #28]	@ 0011a17e 074a
.org 0x11a180
	adds r0, r6, r2	@ 0011a180 b018
.org 0x11a182
	ldrb r1, [r0, #0]	@ 0011a182 0178
.org 0x11a184
	adds r5, r0, #0	@ 0011a184 051c
.org 0x11a186
	cmp r1, #7	@ 0011a186 0729
.org 0x11a188
	bhi.n 0x11a1a8	@ 0011a188 0ed8
.org 0x11a18a
	ldr r0, [pc, #24]	@ 0011a18a 0648
.org 0x11a18c
	movs r1, #8	@ 0011a18c 0821
.org 0x11a18e
	b.n 0x11a1ac	@ 0011a18e 0de0
.org 0x11a190
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a190 data
.org 0x11a194
	.byte 0x40,0x0a,0x00,0x02	@ 0011a194 data
.org 0x11a198
	.byte 0x51,0x02,0x00,0x00	@ 0011a198 data
.org 0x11a19c
	.byte 0xfa,0x0d,0x00,0x00	@ 0011a19c data
.org 0x11a1a0
	.byte 0xfb,0x0d,0x00,0x00	@ 0011a1a0 data
.org 0x11a1a4
	.byte 0x50,0x0a,0x00,0x02	@ 0011a1a4 data
.org 0x11a1a8
	ldr r0, [pc, #32]	@ 0011a1a8 0848
.org 0x11a1aa
	ldr r1, [pc, #36]	@ 0011a1aa 0949
.org 0x11a1ac
	strh r1, [r0, #4]	@ 0011a1ac 8180
.org 0x11a1ae
	movs r1, #128	@ 0011a1ae 8021
.org 0x11a1b0
	strh r1, [r0, #8]	@ 0011a1b0 0181
.org 0x11a1b2
	ldrb r0, [r5, #0]	@ 0011a1b2 2878
.org 0x11a1b4
	adds r0, #1	@ 0011a1b4 0130
.org 0x11a1b6
	strb r0, [r5, #0]	@ 0011a1b6 2870
.org 0x11a1b8
	movs r0, #221	@ 0011a1b8 dd20
.org 0x11a1ba
	lsls r0, r0, #4	@ 0011a1ba 0001
.org 0x11a1bc
	adds r1, r6, r0	@ 0011a1bc 3118
.org 0x11a1be
	ldrb r0, [r1, #0]	@ 0011a1be 0878
.org 0x11a1c0
	cmp r0, #4	@ 0011a1c0 0428
.org 0x11a1c2
	bne.n 0x11a1d4	@ 0011a1c2 07d1
.org 0x11a1c4
	movs r1, #0	@ 0011a1c4 0021
.org 0x11a1c6
	mov r8, r1	@ 0011a1c6 8846
.org 0x11a1c8
	movs r7, #0	@ 0011a1c8 0027
.org 0x11a1ca
	b.n 0x11a1e2	@ 0011a1ca 0ae0
.org 0x11a1cc
	.byte 0x50,0x0a,0x00,0x02	@ 0011a1cc data
.org 0x11a1d0
	.byte 0xf0,0xb0,0x00,0x00	@ 0011a1d0 data
.org 0x11a1d4
	ldrb r0, [r1, #0]	@ 0011a1d4 0878
.org 0x11a1d6
	lsls r1, r0, #29	@ 0011a1d6 4107
.org 0x11a1d8
	lsrs r7, r1, #24	@ 0011a1d8 0f0e
.org 0x11a1da
	adds r0, #1	@ 0011a1da 0130
.org 0x11a1dc
	lsls r0, r0, #29	@ 0011a1dc 4007
.org 0x11a1de
	lsrs r0, r0, #24	@ 0011a1de 000e
.org 0x11a1e0
	mov r8, r0	@ 0011a1e0 8046
.org 0x11a1e2
	ldr r2, [pc, #44]	@ 0011a1e2 0b4a
.org 0x11a1e4
	adds r4, r6, r2	@ 0011a1e4 b418
.org 0x11a1e6
	ldr r1, [pc, #44]	@ 0011a1e6 0b49
.org 0x11a1e8
	adds r0, r6, r1	@ 0011a1e8 7018
.org 0x11a1ea
	ldrb r1, [r0, #0]	@ 0011a1ea 0178
.org 0x11a1ec
	mov r9, r0	@ 0011a1ec 8146
.org 0x11a1ee
	cmp r1, #2	@ 0011a1ee 0229
.org 0x11a1f0
	bhi.n 0x11a2b8	@ 0011a1f0 62d8
.org 0x11a1f2
	adds r0, r6, #0	@ 0011a1f2 301c
.org 0x11a1f4
	bl 0x11ad3c	@ 0011a1f4 00f0a2fd
.org 0x11a1f8
	movs r2, #221	@ 0011a1f8 dd22
.org 0x11a1fa
	lsls r2, r2, #4	@ 0011a1fa 1201
.org 0x11a1fc
	adds r0, r6, r2	@ 0011a1fc b018
.org 0x11a1fe
	ldrb r0, [r0, #0]	@ 0011a1fe 0078
.org 0x11a200
	cmp r0, #1	@ 0011a200 0128
.org 0x11a202
	beq.n 0x11a23e	@ 0011a202 1cd0
.org 0x11a204
	cmp r0, #1	@ 0011a204 0128
.org 0x11a206
	bgt.n 0x11a218	@ 0011a206 07dc
.org 0x11a208
	cmp r0, #0	@ 0011a208 0028
.org 0x11a20a
	beq.n 0x11a21e	@ 0011a20a 08d0
.org 0x11a20c
	b.n 0x11a28e	@ 0011a20c 3fe0
.org 0x11a20e
	.byte 0x00	@ 0011a20e data
.org 0x11a20f
	.byte 0x00	@ 0011a20f data
.org 0x11a210
	.byte 0xcc,0x0d,0x00,0x00	@ 0011a210 data
.org 0x11a214
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a214 data
.org 0x11a218
	cmp r0, #2	@ 0011a218 0228
.org 0x11a21a
	beq.n 0x11a266	@ 0011a21a 24d0
.org 0x11a21c
	b.n 0x11a28e	@ 0011a21c 37e0
.org 0x11a21e
	strh r0, [r4, #48]	@ 0011a21e 2086
.org 0x11a220
	ldrb r0, [r5, #0]	@ 0011a220 2878
.org 0x11a222
	lsls r0, r0, #6	@ 0011a222 8001
.org 0x11a224
	ldrh r1, [r4, #50]	@ 0011a224 618e
.org 0x11a226
	adds r0, r0, r1	@ 0011a226 4018
.org 0x11a228
	strh r0, [r4, #50]	@ 0011a228 6086
.org 0x11a22a
	ldrb r1, [r5, #0]	@ 0011a22a 2978
.org 0x11a22c
	lsls r0, r1, #1	@ 0011a22c 4800
.org 0x11a22e
	adds r0, r0, r1	@ 0011a22e 4018
.org 0x11a230
	lsls r0, r0, #5	@ 0011a230 4001
.org 0x11a232
	ldrh r2, [r4, #52]	@ 0011a232 a28e
.org 0x11a234
	adds r0, r0, r2	@ 0011a234 8018
.org 0x11a236
	strh r0, [r4, #52]	@ 0011a236 a086
.org 0x11a238
	ldrb r0, [r5, #0]	@ 0011a238 2878
.org 0x11a23a
	lsls r0, r0, #7	@ 0011a23a c001
.org 0x11a23c
	b.n 0x11a286	@ 0011a23c 23e0
.org 0x11a23e
	ldrb r0, [r5, #0]	@ 0011a23e 2878
.org 0x11a240
	lsls r0, r0, #6	@ 0011a240 8001
.org 0x11a242
	ldrh r2, [r4, #48]	@ 0011a242 228e
.org 0x11a244
	adds r0, r0, r2	@ 0011a244 8018
.org 0x11a246
	movs r1, #0	@ 0011a246 0021
.org 0x11a248
	strh r0, [r4, #48]	@ 0011a248 2086
.org 0x11a24a
	strh r1, [r4, #50]	@ 0011a24a 6186
.org 0x11a24c
	ldrb r0, [r5, #0]	@ 0011a24c 2878
.org 0x11a24e
	lsls r0, r0, #6	@ 0011a24e 8001
.org 0x11a250
	ldrh r1, [r4, #52]	@ 0011a250 a18e
.org 0x11a252
	adds r0, r0, r1	@ 0011a252 4018
.org 0x11a254
	strh r0, [r4, #52]	@ 0011a254 a086
.org 0x11a256
	ldrb r1, [r5, #0]	@ 0011a256 2978
.org 0x11a258
	lsls r0, r1, #1	@ 0011a258 4800
.org 0x11a25a
	adds r0, r0, r1	@ 0011a25a 4018
.org 0x11a25c
	lsls r0, r0, #5	@ 0011a25c 4001
.org 0x11a25e
	ldrh r2, [r4, #54]	@ 0011a25e e28e
.org 0x11a260
	adds r0, r0, r2	@ 0011a260 8018
.org 0x11a262
	strh r0, [r4, #54]	@ 0011a262 e086
.org 0x11a264
	b.n 0x11a2b8	@ 0011a264 28e0
.org 0x11a266
	ldrb r1, [r5, #0]	@ 0011a266 2978
.org 0x11a268
	lsls r0, r1, #1	@ 0011a268 4800
.org 0x11a26a
	adds r0, r0, r1	@ 0011a26a 4018
.org 0x11a26c
	lsls r0, r0, #5	@ 0011a26c 4001
.org 0x11a26e
	ldrh r1, [r4, #48]	@ 0011a26e 218e
.org 0x11a270
	adds r0, r0, r1	@ 0011a270 4018
.org 0x11a272
	movs r1, #0	@ 0011a272 0021
.org 0x11a274
	strh r0, [r4, #48]	@ 0011a274 2086
.org 0x11a276
	ldrb r0, [r5, #0]	@ 0011a276 2878
.org 0x11a278
	lsls r0, r0, #6	@ 0011a278 8001
.org 0x11a27a
	ldrh r2, [r4, #50]	@ 0011a27a 628e
.org 0x11a27c
	adds r0, r0, r2	@ 0011a27c 8018
.org 0x11a27e
	strh r0, [r4, #50]	@ 0011a27e 6086
.org 0x11a280
	strh r1, [r4, #52]	@ 0011a280 a186
.org 0x11a282
	ldrb r0, [r5, #0]	@ 0011a282 2878
.org 0x11a284
	lsls r0, r0, #6	@ 0011a284 8001
.org 0x11a286
	ldrh r1, [r4, #54]	@ 0011a286 e18e
.org 0x11a288
	adds r0, r0, r1	@ 0011a288 4018
.org 0x11a28a
	strh r0, [r4, #54]	@ 0011a28a e086
.org 0x11a28c
	b.n 0x11a2b8	@ 0011a28c 14e0
.org 0x11a28e
	ldr r2, [pc, #196]	@ 0011a28e 314a
.org 0x11a290
	adds r1, r6, r2	@ 0011a290 b118
.org 0x11a292
	ldrb r0, [r5, #0]	@ 0011a292 2878
.org 0x11a294
	lsls r0, r0, #7	@ 0011a294 c001
.org 0x11a296
	ldrh r2, [r1, #48]	@ 0011a296 0a8e
.org 0x11a298
	adds r0, r0, r2	@ 0011a298 8018
.org 0x11a29a
	movs r3, #0	@ 0011a29a 0023
.org 0x11a29c
	strh r0, [r1, #48]	@ 0011a29c 0886
.org 0x11a29e
	ldrb r2, [r5, #0]	@ 0011a29e 2a78
.org 0x11a2a0
	lsls r0, r2, #1	@ 0011a2a0 5000
.org 0x11a2a2
	adds r0, r0, r2	@ 0011a2a2 8018
.org 0x11a2a4
	lsls r0, r0, #5	@ 0011a2a4 4001
.org 0x11a2a6
	ldrh r2, [r1, #50]	@ 0011a2a6 4a8e
.org 0x11a2a8
	adds r0, r0, r2	@ 0011a2a8 8018
.org 0x11a2aa
	strh r0, [r1, #50]	@ 0011a2aa 4886
.org 0x11a2ac
	ldrb r0, [r5, #0]	@ 0011a2ac 2878
.org 0x11a2ae
	lsls r0, r0, #6	@ 0011a2ae 8001
.org 0x11a2b0
	ldrh r2, [r1, #52]	@ 0011a2b0 8a8e
.org 0x11a2b2
	adds r0, r0, r2	@ 0011a2b2 8018
.org 0x11a2b4
	strh r0, [r1, #52]	@ 0011a2b4 8886
.org 0x11a2b6
	strh r3, [r1, #54]	@ 0011a2b6 cb86
.org 0x11a2b8
	mov r4, r9	@ 0011a2b8 4c46
.org 0x11a2ba
	ldrb r0, [r4, #0]	@ 0011a2ba 2078
.org 0x11a2bc
	cmp r0, #1	@ 0011a2bc 0128
.org 0x11a2be
	bne.n 0x11a368	@ 0011a2be 53d1
.org 0x11a2c0
	ldr r3, [pc, #148]	@ 0011a2c0 254b
.org 0x11a2c2
	ldrb r2, [r5, #0]	@ 0011a2c2 2a78
.org 0x11a2c4
	lsls r1, r2, #1	@ 0011a2c4 5100
.org 0x11a2c6
	movs r0, #16	@ 0011a2c6 1020
.org 0x11a2c8
	subs r0, r0, r1	@ 0011a2c8 401a
.org 0x11a2ca
	movs r1, #31	@ 0011a2ca 1f21
.org 0x11a2cc
	ands r0, r1	@ 0011a2cc 0840
.org 0x11a2ce
	lsls r2, r2, #9	@ 0011a2ce 5202
.org 0x11a2d0
	orrs r0, r2	@ 0011a2d0 1043
.org 0x11a2d2
	strh r0, [r3, #2]	@ 0011a2d2 5880
.org 0x11a2d4
	ldrb r0, [r5, #0]	@ 0011a2d4 2878
.org 0x11a2d6
	cmp r0, #7	@ 0011a2d6 0728
.org 0x11a2d8
	bls.n 0x11a2e8	@ 0011a2d8 06d9
.org 0x11a2da
	movs r0, #2	@ 0011a2da 0220
.org 0x11a2dc
	strb r0, [r4, #0]	@ 0011a2dc 2070
.org 0x11a2de
	movs r0, #221	@ 0011a2de dd20
.org 0x11a2e0
	lsls r0, r0, #4	@ 0011a2e0 0001
.org 0x11a2e2
	adds r1, r6, r0	@ 0011a2e2 3118
.org 0x11a2e4
	movs r0, #255	@ 0011a2e4 ff20
.org 0x11a2e6
	strb r0, [r1, #2]	@ 0011a2e6 8870
.org 0x11a2e8
	movs r5, #160	@ 0011a2e8 a025
.org 0x11a2ea
	lsls r5, r5, #1	@ 0011a2ea 6d00
.org 0x11a2ec
	adds r0, r5, #0	@ 0011a2ec 281c
.org 0x11a2ee
	bl 0xa70	@ 0011a2ee e6f6bffb
.org 0x11a2f2
	adds r4, r0, #0	@ 0011a2f2 041c
.org 0x11a2f4
	cmp r4, #0	@ 0011a2f4 002c
.org 0x11a2f6
	bne.n 0x11a2fa	@ 0011a2f6 00d1
.org 0x11a2f8
	b.n 0x11a4f6	@ 0011a2f8 fde0
.org 0x11a2fa
	movs r1, #144	@ 0011a2fa 9021
.org 0x11a2fc
	lsls r1, r1, #2	@ 0011a2fc 8900
.org 0x11a2fe
	adds r0, r1, #0	@ 0011a2fe 081c
.org 0x11a300
	adds r1, r4, #0	@ 0011a300 211c
.org 0x11a302
	adds r2, r5, #0	@ 0011a302 2a1c
.org 0x11a304
	bl 0xab4	@ 0011a304 e6f6d6fb
.org 0x11a308
	ldr r1, [pc, #80]	@ 0011a308 1449
.org 0x11a30a
	movs r2, #0	@ 0011a30a 0022
.org 0x11a30c
	cmp r2, r7	@ 0011a30c ba42
.org 0x11a30e
	bcs.n 0x11a320	@ 0011a30e 07d2
.org 0x11a310
	lsls r0, r2, #1	@ 0011a310 5000
.org 0x11a312
	adds r0, r0, r4	@ 0011a312 0019
.org 0x11a314
	strh r1, [r0, #0]	@ 0011a314 0180
.org 0x11a316
	adds r0, r2, #1	@ 0011a316 501c
.org 0x11a318
	lsls r0, r0, #24	@ 0011a318 0006
.org 0x11a31a
	lsrs r2, r0, #24	@ 0011a31a 020e
.org 0x11a31c
	cmp r2, r7	@ 0011a31c ba42
.org 0x11a31e
	bcc.n 0x11a310	@ 0011a31e f7d3
.org 0x11a320
	mov r2, r8	@ 0011a320 4246
.org 0x11a322
	ldr r3, [pc, #60]	@ 0011a322 0f4b
.org 0x11a324
	cmp r2, #95	@ 0011a324 5f2a
.org 0x11a326
	bhi.n 0x11a338	@ 0011a326 07d8
.org 0x11a328
	lsls r0, r2, #1	@ 0011a328 5000
.org 0x11a32a
	adds r0, r0, r4	@ 0011a32a 0019
.org 0x11a32c
	strh r1, [r0, #0]	@ 0011a32c 0180
.org 0x11a32e
	adds r0, r2, #1	@ 0011a32e 501c
.org 0x11a330
	lsls r0, r0, #24	@ 0011a330 0006
.org 0x11a332
	lsrs r2, r0, #24	@ 0011a332 020e
.org 0x11a334
	cmp r2, #95	@ 0011a334 5f2a
.org 0x11a336
	bls.n 0x11a328	@ 0011a336 f7d9
.org 0x11a338
	movs r1, #186	@ 0011a338 ba21
.org 0x11a33a
	lsls r1, r1, #1	@ 0011a33a 4900
.org 0x11a33c
	adds r0, r3, r1	@ 0011a33c 5818
.org 0x11a33e
	str r4, [r0, #0]	@ 0011a33e 0460
.org 0x11a340
	movs r2, #188	@ 0011a340 bc22
.org 0x11a342
	lsls r2, r2, #1	@ 0011a342 5200
.org 0x11a344
	adds r1, r3, r2	@ 0011a344 9918
.org 0x11a346
	ldr r0, [pc, #28]	@ 0011a346 0748
.org 0x11a348
	str r0, [r1, #0]	@ 0011a348 0860
.org 0x11a34a
	movs r0, #190	@ 0011a34a be20
.org 0x11a34c
	lsls r0, r0, #1	@ 0011a34c 4000
.org 0x11a34e
	adds r1, r3, r0	@ 0011a34e 1918
.org 0x11a350
	b.n 0x11a4f2	@ 0011a350 cfe0
.org 0x11a352
	.byte 0x00	@ 0011a352 data
.org 0x11a353
	.byte 0x00	@ 0011a353 data
.org 0x11a354
	.byte 0xcc,0x0d,0x00,0x00	@ 0011a354 data
.org 0x11a358
	.byte 0x40,0x0a,0x00,0x02	@ 0011a358 data
.org 0x11a35c
	.byte 0x41,0x10,0x00,0x00	@ 0011a35c data
.org 0x11a360
	.byte 0x90,0x15,0x00,0x03	@ 0011a360 data
.org 0x11a364
	.byte 0x50,0x00,0x00,0x04	@ 0011a364 data
.org 0x11a368
	cmp r0, #2	@ 0011a368 0228
.org 0x11a36a
	bne.n 0x11a424	@ 0011a36a 5bd1
.org 0x11a36c
	ldr r3, [pc, #160]	@ 0011a36c 284b
.org 0x11a36e
	ldrb r2, [r5, #0]	@ 0011a36e 2a78
.org 0x11a370
	subs r2, #8	@ 0011a370 083a
.org 0x11a372
	lsls r1, r2, #1	@ 0011a372 5100
.org 0x11a374
	movs r0, #16	@ 0011a374 1020
.org 0x11a376
	subs r0, r0, r1	@ 0011a376 401a
.org 0x11a378
	movs r1, #31	@ 0011a378 1f21
.org 0x11a37a
	ands r0, r1	@ 0011a37a 0840
.org 0x11a37c
	lsls r2, r2, #9	@ 0011a37c 5202
.org 0x11a37e
	orrs r0, r2	@ 0011a37e 1043
.org 0x11a380
	strh r0, [r3, #2]	@ 0011a380 5880
.org 0x11a382
	ldrb r0, [r5, #0]	@ 0011a382 2878
.org 0x11a384
	cmp r0, #15	@ 0011a384 0f28
.org 0x11a386
	bls.n 0x11a38c	@ 0011a386 01d9
.org 0x11a388
	movs r0, #3	@ 0011a388 0320
.org 0x11a38a
	strb r0, [r4, #0]	@ 0011a38a 2070
.org 0x11a38c
	movs r5, #160	@ 0011a38c a025
.org 0x11a38e
	lsls r5, r5, #1	@ 0011a38e 6d00
.org 0x11a390
	adds r0, r5, #0	@ 0011a390 281c
.org 0x11a392
	bl 0xa70	@ 0011a392 e6f66dfb
.org 0x11a396
	adds r4, r0, #0	@ 0011a396 041c
.org 0x11a398
	cmp r4, #0	@ 0011a398 002c
.org 0x11a39a
	bne.n 0x11a39e	@ 0011a39a 00d1
.org 0x11a39c
	b.n 0x11a4f6	@ 0011a39c abe0
.org 0x11a39e
	movs r1, #144	@ 0011a39e 9021
.org 0x11a3a0
	lsls r1, r1, #2	@ 0011a3a0 8900
.org 0x11a3a2
	adds r0, r1, #0	@ 0011a3a2 081c
.org 0x11a3a4
	adds r1, r4, #0	@ 0011a3a4 211c
.org 0x11a3a6
	adds r2, r5, #0	@ 0011a3a6 2a1c
.org 0x11a3a8
	bl 0xab4	@ 0011a3a8 e6f684fb
.org 0x11a3ac
	ldr r1, [pc, #100]	@ 0011a3ac 1949
.org 0x11a3ae
	movs r2, #0	@ 0011a3ae 0022
.org 0x11a3b0
	cmp r2, r7	@ 0011a3b0 ba42
.org 0x11a3b2
	bcs.n 0x11a3c4	@ 0011a3b2 07d2
.org 0x11a3b4
	lsls r0, r2, #1	@ 0011a3b4 5000
.org 0x11a3b6
	adds r0, r0, r4	@ 0011a3b6 0019
.org 0x11a3b8
	strh r1, [r0, #0]	@ 0011a3b8 0180
.org 0x11a3ba
	adds r0, r2, #1	@ 0011a3ba 501c
.org 0x11a3bc
	lsls r0, r0, #24	@ 0011a3bc 0006
.org 0x11a3be
	lsrs r2, r0, #24	@ 0011a3be 020e
.org 0x11a3c0
	cmp r2, r7	@ 0011a3c0 ba42
.org 0x11a3c2
	bcc.n 0x11a3b4	@ 0011a3c2 f7d3
.org 0x11a3c4
	mov r2, r8	@ 0011a3c4 4246
.org 0x11a3c6
	lsls r0, r2, #24	@ 0011a3c6 1006
.org 0x11a3c8
	ldr r3, [pc, #76]	@ 0011a3c8 134b
.org 0x11a3ca
	cmp r0, #0	@ 0011a3ca 0028
.org 0x11a3cc
	blt.n 0x11a3de	@ 0011a3cc 07db
.org 0x11a3ce
	lsls r0, r2, #1	@ 0011a3ce 5000
.org 0x11a3d0
	adds r0, r0, r4	@ 0011a3d0 0019
.org 0x11a3d2
	strh r1, [r0, #0]	@ 0011a3d2 0180
.org 0x11a3d4
	adds r0, r2, #1	@ 0011a3d4 501c
.org 0x11a3d6
	lsls r0, r0, #24	@ 0011a3d6 0006
.org 0x11a3d8
	lsrs r2, r0, #24	@ 0011a3d8 020e
.org 0x11a3da
	cmp r0, #0	@ 0011a3da 0028
.org 0x11a3dc
	bge.n 0x11a3ce	@ 0011a3dc f7da
.org 0x11a3de
	ldr r1, [pc, #60]	@ 0011a3de 0f49
.org 0x11a3e0
	adds r2, r7, #0	@ 0011a3e0 3a1c
.org 0x11a3e2
	cmp r2, r8	@ 0011a3e2 4245
.org 0x11a3e4
	bcs.n 0x11a3f6	@ 0011a3e4 07d2
.org 0x11a3e6
	lsls r0, r2, #1	@ 0011a3e6 5000
.org 0x11a3e8
	adds r0, r0, r4	@ 0011a3e8 0019
.org 0x11a3ea
	strh r1, [r0, #0]	@ 0011a3ea 0180
.org 0x11a3ec
	adds r0, r2, #1	@ 0011a3ec 501c
.org 0x11a3ee
	lsls r0, r0, #24	@ 0011a3ee 0006
.org 0x11a3f0
	lsrs r2, r0, #24	@ 0011a3f0 020e
.org 0x11a3f2
	cmp r2, r8	@ 0011a3f2 4245
.org 0x11a3f4
	bcc.n 0x11a3e6	@ 0011a3f4 f7d3
.org 0x11a3f6
	movs r1, #186	@ 0011a3f6 ba21
.org 0x11a3f8
	lsls r1, r1, #1	@ 0011a3f8 4900
.org 0x11a3fa
	adds r0, r3, r1	@ 0011a3fa 5818
.org 0x11a3fc
	str r4, [r0, #0]	@ 0011a3fc 0460
.org 0x11a3fe
	movs r2, #188	@ 0011a3fe bc22
.org 0x11a400
	lsls r2, r2, #1	@ 0011a400 5200
.org 0x11a402
	adds r1, r3, r2	@ 0011a402 9918
.org 0x11a404
	ldr r0, [pc, #24]	@ 0011a404 0648
.org 0x11a406
	str r0, [r1, #0]	@ 0011a406 0860
.org 0x11a408
	movs r0, #190	@ 0011a408 be20
.org 0x11a40a
	lsls r0, r0, #1	@ 0011a40a 4000
.org 0x11a40c
	adds r1, r3, r0	@ 0011a40c 1918
.org 0x11a40e
	b.n 0x11a4f2	@ 0011a40e 70e0
.org 0x11a410
	.byte 0x40,0x0a,0x00,0x02	@ 0011a410 data
.org 0x11a414
	.byte 0x51,0x12,0x00,0x00	@ 0011a414 data
.org 0x11a418
	.byte 0x90,0x15,0x00,0x03	@ 0011a418 data
.org 0x11a41c
	.byte 0x41,0x12,0x00,0x00	@ 0011a41c data
.org 0x11a420
	.byte 0x50,0x00,0x00,0x04	@ 0011a420 data
.org 0x11a424
	ldr r4, [pc, #100]	@ 0011a424 194c
.org 0x11a426
	ldrb r2, [r5, #0]	@ 0011a426 2a78
.org 0x11a428
	subs r2, #16	@ 0011a428 103a
.org 0x11a42a
	lsls r1, r2, #1	@ 0011a42a 5100
.org 0x11a42c
	movs r0, #16	@ 0011a42c 1020
.org 0x11a42e
	subs r0, r0, r1	@ 0011a42e 401a
.org 0x11a430
	movs r1, #31	@ 0011a430 1f21
.org 0x11a432
	ands r0, r1	@ 0011a432 0840
.org 0x11a434
	lsls r2, r2, #9	@ 0011a434 5202
.org 0x11a436
	orrs r0, r2	@ 0011a436 1043
.org 0x11a438
	strh r0, [r4, #2]	@ 0011a438 6080
.org 0x11a43a
	ldrb r0, [r5, #0]	@ 0011a43a 2878
.org 0x11a43c
	cmp r0, #23	@ 0011a43c 1728
.org 0x11a43e
	bls.n 0x11a4a0	@ 0011a43e 2fd9
.org 0x11a440
	movs r1, #221	@ 0011a440 dd21
.org 0x11a442
	lsls r1, r1, #4	@ 0011a442 0901
.org 0x11a444
	adds r0, r6, r1	@ 0011a444 7018
.org 0x11a446
	ldrb r0, [r0, #0]	@ 0011a446 0078
.org 0x11a448
	adds r0, #3	@ 0011a448 0330
.org 0x11a44a
	strb r0, [r6, #3]	@ 0011a44a f070
.org 0x11a44c
	movs r0, #0	@ 0011a44c 0020
.org 0x11a44e
	mov r2, r9	@ 0011a44e 4a46
.org 0x11a450
	strb r0, [r2, #0]	@ 0011a450 1070
.org 0x11a452
	ldr r0, [pc, #60]	@ 0011a452 0f48
.org 0x11a454
	ldr r1, [pc, #60]	@ 0011a454 0f49
.org 0x11a456
	adds r1, #134	@ 0011a456 8631
.org 0x11a458
	ldrh r1, [r1, #0]	@ 0011a458 0988
.org 0x11a45a
	ldrh r2, [r0, #6]	@ 0011a45a c288
.org 0x11a45c
	lsrs r2, r2, #6	@ 0011a45c 9209
.org 0x11a45e
	subs r1, r1, r2	@ 0011a45e 891a
.org 0x11a460
	lsls r1, r1, #5	@ 0011a460 4901
.org 0x11a462
	movs r2, #128	@ 0011a462 8022
.org 0x11a464
	lsls r2, r2, #9	@ 0011a464 5202
.org 0x11a466
	adds r1, r1, r2	@ 0011a466 8918
.org 0x11a468
	bl 0x1d30	@ 0011a468 e7f662fc
.org 0x11a46c
	ldr r0, [pc, #40]	@ 0011a46c 0a48
.org 0x11a46e
	ldr r1, [pc, #44]	@ 0011a46e 0b49
.org 0x11a470
	adds r1, #134	@ 0011a470 8631
.org 0x11a472
	ldrh r1, [r1, #0]	@ 0011a472 0988
.org 0x11a474
	ldrb r2, [r0, #7]	@ 0011a474 c279
.org 0x11a476
	subs r1, r1, r2	@ 0011a476 891a
.org 0x11a478
	lsls r1, r1, #5	@ 0011a478 4901
.org 0x11a47a
	movs r2, #128	@ 0011a47a 8022
.org 0x11a47c
	lsls r2, r2, #2	@ 0011a47c 9200
.org 0x11a47e
	adds r1, r1, r2	@ 0011a47e 8918
.org 0x11a480
	bl 0x2208	@ 0011a480 e7f6c2fe
.org 0x11a484
	movs r0, #0	@ 0011a484 0020
.org 0x11a486
	strh r0, [r4, #0]	@ 0011a486 2080
.org 0x11a488
	b.n 0x11a552	@ 0011a488 63e0
.org 0x11a48a
	.byte 0x00	@ 0011a48a data
.org 0x11a48b
	.byte 0x00	@ 0011a48b data
.org 0x11a48c
	.byte 0x40,0x0a,0x00,0x02	@ 0011a48c data
.org 0x11a490
	.byte 0x3c,0x45,0xc4,0x08	@ 0011a490 data
.org 0x11a494
	.byte 0x40,0xe0,0x02,0x02	@ 0011a494 data
.org 0x11a498
	.byte 0x48,0x45,0xc4,0x08	@ 0011a498 data
.org 0x11a49c
	.byte 0x40,0xde,0x02,0x02	@ 0011a49c data
.org 0x11a4a0
	movs r5, #160	@ 0011a4a0 a025
.org 0x11a4a2
	lsls r5, r5, #1	@ 0011a4a2 6d00
.org 0x11a4a4
	adds r0, r5, #0	@ 0011a4a4 281c
.org 0x11a4a6
	bl 0xa70	@ 0011a4a6 e6f6e3fa
.org 0x11a4aa
	adds r4, r0, #0	@ 0011a4aa 041c
.org 0x11a4ac
	cmp r4, #0	@ 0011a4ac 002c
.org 0x11a4ae
	beq.n 0x11a4f6	@ 0011a4ae 22d0
.org 0x11a4b0
	movs r1, #144	@ 0011a4b0 9021
.org 0x11a4b2
	lsls r1, r1, #2	@ 0011a4b2 8900
.org 0x11a4b4
	adds r0, r1, #0	@ 0011a4b4 081c
.org 0x11a4b6
	adds r1, r4, #0	@ 0011a4b6 211c
.org 0x11a4b8
	adds r2, r5, #0	@ 0011a4b8 2a1c
.org 0x11a4ba
	bl 0xab4	@ 0011a4ba e6f6fbfa
.org 0x11a4be
	movs r1, #148	@ 0011a4be 9421
.org 0x11a4c0
	lsls r1, r1, #2	@ 0011a4c0 8900
.org 0x11a4c2
	adds r2, r7, #0	@ 0011a4c2 3a1c
.org 0x11a4c4
	cmp r2, r8	@ 0011a4c4 4245
.org 0x11a4c6
	bcs.n 0x11a4d8	@ 0011a4c6 07d2
.org 0x11a4c8
	lsls r0, r2, #1	@ 0011a4c8 5000
.org 0x11a4ca
	adds r0, r0, r4	@ 0011a4ca 0019
.org 0x11a4cc
	strh r1, [r0, #0]	@ 0011a4cc 0180
.org 0x11a4ce
	adds r0, r2, #1	@ 0011a4ce 501c
.org 0x11a4d0
	lsls r0, r0, #24	@ 0011a4d0 0006
.org 0x11a4d2
	lsrs r2, r0, #24	@ 0011a4d2 020e
.org 0x11a4d4
	cmp r2, r8	@ 0011a4d4 4245
.org 0x11a4d6
	bcc.n 0x11a4c8	@ 0011a4d6 f7d3
.org 0x11a4d8
	ldr r2, [pc, #132]	@ 0011a4d8 214a
.org 0x11a4da
	movs r1, #186	@ 0011a4da ba21
.org 0x11a4dc
	lsls r1, r1, #1	@ 0011a4dc 4900
.org 0x11a4de
	adds r0, r2, r1	@ 0011a4de 5018
.org 0x11a4e0
	str r4, [r0, #0]	@ 0011a4e0 0460
.org 0x11a4e2
	movs r0, #188	@ 0011a4e2 bc20
.org 0x11a4e4
	lsls r0, r0, #1	@ 0011a4e4 4000
.org 0x11a4e6
	adds r1, r2, r0	@ 0011a4e6 1118
.org 0x11a4e8
	ldr r0, [pc, #120]	@ 0011a4e8 1e48
.org 0x11a4ea
	str r0, [r1, #0]	@ 0011a4ea 0860
.org 0x11a4ec
	movs r0, #190	@ 0011a4ec be20
.org 0x11a4ee
	lsls r0, r0, #1	@ 0011a4ee 4000
.org 0x11a4f0
	adds r1, r2, r0	@ 0011a4f0 1118
.org 0x11a4f2
	ldr r0, [pc, #116]	@ 0011a4f2 1d48
