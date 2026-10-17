@ FUN_0801b184  entry 0x0801b184  size 922
.thumb
.org 0x1b184
FUN_0801b184:
	push {r4, r5, r6, lr}	@ 0001b184 70b5
.org 0x1b186
	ldr r5, [pc, #104]	@ 0001b186 1a4d
.org 0x1b188
	ldr r1, [pc, #104]	@ 0001b188 1a49
.org 0x1b18a
	adds r0, r5, r1	@ 0001b18a 6818
.org 0x1b18c
	ldrb r0, [r0, #0]	@ 0001b18c 0078
.org 0x1b18e
	cmp r0, #1	@ 0001b18e 0128
.org 0x1b190
	bne.n 0x1b214	@ 0001b190 40d1
.org 0x1b192
	ldr r2, [pc, #100]	@ 0001b192 194a
.org 0x1b194
	adds r6, r5, r2	@ 0001b194 ae18
.org 0x1b196
	ldr r0, [r6, #0]	@ 0001b196 3068
.org 0x1b198
	cmp r0, #0	@ 0001b198 0028
.org 0x1b19a
	bne.n 0x1b214	@ 0001b19a 3bd1
.org 0x1b19c
	ldr r0, [pc, #92]	@ 0001b19c 1748
.org 0x1b19e
	adds r0, #206	@ 0001b19e ce30
.org 0x1b1a0
	movs r1, #216	@ 0001b1a0 d821
.org 0x1b1a2
	lsls r1, r1, #2	@ 0001b1a2 8900
.org 0x1b1a4
	strh r1, [r0, #0]	@ 0001b1a4 0180
.org 0x1b1a6
	ldr r4, [pc, #88]	@ 0001b1a6 164c
.org 0x1b1a8
	adds r4, #206	@ 0001b1a8 ce34
.org 0x1b1aa
	movs r0, #7	@ 0001b1aa 0720
.org 0x1b1ac
	strh r0, [r4, #0]	@ 0001b1ac 2080
.org 0x1b1ae
	ldr r0, [pc, #84]	@ 0001b1ae 1548
.org 0x1b1b0
	ldrh r2, [r0, #6]	@ 0001b1b0 c288
.org 0x1b1b2
	lsrs r2, r2, #6	@ 0001b1b2 9209
.org 0x1b1b4
	subs r1, r1, r2	@ 0001b1b4 891a
.org 0x1b1b6
	lsls r1, r1, #5	@ 0001b1b6 4901
.org 0x1b1b8
	movs r2, #128	@ 0001b1b8 8022
.org 0x1b1ba
	lsls r2, r2, #9	@ 0001b1ba 5202
.org 0x1b1bc
	adds r1, r1, r2	@ 0001b1bc 8918
.org 0x1b1be
	bl 0x1d30	@ 0001b1be e6f7b7fd
.org 0x1b1c2
	ldr r0, [pc, #68]	@ 0001b1c2 1148
.org 0x1b1c4
	ldrh r1, [r4, #0]	@ 0001b1c4 2188
.org 0x1b1c6
	ldrb r2, [r0, #7]	@ 0001b1c6 c279
.org 0x1b1c8
	subs r1, r1, r2	@ 0001b1c8 891a
.org 0x1b1ca
	lsls r1, r1, #5	@ 0001b1ca 4901
.org 0x1b1cc
	movs r2, #128	@ 0001b1cc 8022
.org 0x1b1ce
	lsls r2, r2, #2	@ 0001b1ce 9200
.org 0x1b1d0
	adds r1, r1, r2	@ 0001b1d0 8918
.org 0x1b1d2
	bl 0x2208	@ 0001b1d2 e7f719f8
.org 0x1b1d6
	ldr r1, [pc, #52]	@ 0001b1d6 0d49
.org 0x1b1d8
	adds r0, r5, r1	@ 0001b1d8 6818
.org 0x1b1da
	bl 0x101cf8	@ 0001b1da e6f08dfd
.org 0x1b1de
	adds r1, r0, #0	@ 0001b1de 011c
.org 0x1b1e0
	str r1, [r6, #0]	@ 0001b1e0 3160
.org 0x1b1e2
	cmp r1, #0	@ 0001b1e2 0029
.org 0x1b1e4
	beq.n 0x1b248	@ 0001b1e4 30d0
.org 0x1b1e6
	ldr r0, [r1, #84]	@ 0001b1e6 486d
.org 0x1b1e8
	ldr r2, [pc, #36]	@ 0001b1e8 094a
.org 0x1b1ea
	adds r0, r0, r2	@ 0001b1ea 8018
.org 0x1b1ec
	str r0, [r1, #84]	@ 0001b1ec 4865
.org 0x1b1ee
	b.n 0x1b248	@ 0001b1ee 2be0
.org 0x1b1f0
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b1f0 data
.org 0x1b1f4
	.byte 0x26,0xd0,0x02,0x00	@ 0001b1f4 data
.org 0x1b1f8
	.byte 0x40,0xd0,0x02,0x00	@ 0001b1f8 data
.org 0x1b1fc
	.byte 0x40,0xe0,0x02,0x02	@ 0001b1fc data
.org 0x1b200
	.byte 0x40,0xde,0x02,0x02	@ 0001b200 data
.org 0x1b204
	.byte 0x0c,0x48,0xc4,0x08	@ 0001b204 data
.org 0x1b208
	.byte 0x18,0x48,0xc4,0x08	@ 0001b208 data
.org 0x1b20c
	.byte 0x44,0xd0,0x02,0x00	@ 0001b20c data
.org 0x1b210
	.byte 0x00,0xf0,0xff,0xff	@ 0001b210 data
.org 0x1b214
	ldr r2, [pc, #160]	@ 0001b214 284a
.org 0x1b216
	ldr r0, [pc, #164]	@ 0001b216 2948
.org 0x1b218
	adds r3, r2, r0	@ 0001b218 1318
.org 0x1b21a
	ldrb r0, [r3, #0]	@ 0001b21a 1878
.org 0x1b21c
	cmp r0, #2	@ 0001b21c 0228
.org 0x1b21e
	bne.n 0x1b248	@ 0001b21e 13d1
.org 0x1b220
	ldr r0, [pc, #156]	@ 0001b220 2748
.org 0x1b222
	adds r1, r2, r0	@ 0001b222 1118
.org 0x1b224
	ldr r0, [r1, #0]	@ 0001b224 0868
.org 0x1b226
	subs r0, #1	@ 0001b226 0138
.org 0x1b228
	str r0, [r1, #0]	@ 0001b228 0860
.org 0x1b22a
	cmp r0, #0	@ 0001b22a 0028
.org 0x1b22c
	beq.n 0x1b23a	@ 0001b22c 05d0
.org 0x1b22e
	ldr r0, [pc, #148]	@ 0001b22e 2548
.org 0x1b230
	ldrh r1, [r0, #8]	@ 0001b230 0189
.org 0x1b232
	movs r0, #16	@ 0001b232 1020
.org 0x1b234
	ands r0, r1	@ 0001b234 0840
.org 0x1b236
	cmp r0, #0	@ 0001b236 0028
.org 0x1b238
	beq.n 0x1b248	@ 0001b238 06d0
.org 0x1b23a
	ldr r1, [pc, #140]	@ 0001b23a 2349
.org 0x1b23c
	adds r0, r2, r1	@ 0001b23c 5018
.org 0x1b23e
	ldr r1, [r0, #0]	@ 0001b23e 0168
.org 0x1b240
	movs r2, #0	@ 0001b240 0022
.org 0x1b242
	movs r0, #1	@ 0001b242 0120
.org 0x1b244
	strb r0, [r1, #13]	@ 0001b244 4873
.org 0x1b246
	strb r2, [r3, #0]	@ 0001b246 1a70
.org 0x1b248
	ldr r1, [pc, #108]	@ 0001b248 1b49
.org 0x1b24a
	ldr r0, [pc, #128]	@ 0001b24a 2048
.org 0x1b24c
	adds r2, r1, r0	@ 0001b24c 0a18
.org 0x1b24e
	ldrh r0, [r2, #0]	@ 0001b24e 1088
.org 0x1b250
	adds r0, #1	@ 0001b250 0130
.org 0x1b252
	strh r0, [r2, #0]	@ 0001b252 1080
.org 0x1b254
	ldr r2, [pc, #120]	@ 0001b254 1e4a
.org 0x1b256
	adds r0, r1, r2	@ 0001b256 8818
.org 0x1b258
	ldrh r2, [r0, #0]	@ 0001b258 0288
.org 0x1b25a
	lsrs r0, r2, #8	@ 0001b25a 100a
.org 0x1b25c
	adds r3, r1, #0	@ 0001b25c 0b1c
.org 0x1b25e
	cmp r0, #16	@ 0001b25e 1028
.org 0x1b260
	bne.n 0x1b2dc	@ 0001b260 3cd1
.org 0x1b262
	movs r0, #255	@ 0001b262 ff20
.org 0x1b264
	ands r0, r2	@ 0001b264 1040
.org 0x1b266
	cmp r0, #6	@ 0001b266 0628
.org 0x1b268
	bne.n 0x1b280	@ 0001b268 0ad1
.org 0x1b26a
	ldr r0, [pc, #104]	@ 0001b26a 1a48
.org 0x1b26c
	adds r1, r3, r0	@ 0001b26c 1918
.org 0x1b26e
	ldrb r0, [r1, #0]	@ 0001b26e 0878
.org 0x1b270
	adds r0, #1	@ 0001b270 0130
.org 0x1b272
	strb r0, [r1, #0]	@ 0001b272 0870
.org 0x1b274
	lsls r0, r0, #24	@ 0001b274 0006
.org 0x1b276
	lsrs r0, r0, #24	@ 0001b276 000e
.org 0x1b278
	cmp r0, #8	@ 0001b278 0828
.org 0x1b27a
	bne.n 0x1b280	@ 0001b27a 01d1
.org 0x1b27c
	movs r0, #0	@ 0001b27c 0020
.org 0x1b27e
	strb r0, [r1, #0]	@ 0001b27e 0870
.org 0x1b280
	ldr r1, [pc, #76]	@ 0001b280 1349
.org 0x1b282
	adds r0, r3, r1	@ 0001b282 5818
.org 0x1b284
	ldrh r1, [r0, #0]	@ 0001b284 0188
.org 0x1b286
	lsrs r0, r1, #8	@ 0001b286 080a
.org 0x1b288
	cmp r0, #16	@ 0001b288 1028
.org 0x1b28a
	bne.n 0x1b2dc	@ 0001b28a 27d1
.org 0x1b28c
	movs r0, #255	@ 0001b28c ff20
.org 0x1b28e
	ands r0, r1	@ 0001b28e 0840
.org 0x1b290
	cmp r0, #0	@ 0001b290 0028
.org 0x1b292
	bne.n 0x1b2dc	@ 0001b292 23d1
.org 0x1b294
	ldr r2, [pc, #64]	@ 0001b294 104a
.org 0x1b296
	adds r1, r3, r2	@ 0001b296 9918
.org 0x1b298
	ldrb r2, [r1, #0]	@ 0001b298 0a78
.org 0x1b29a
	movs r0, #1	@ 0001b29a 0120
.org 0x1b29c
	ands r0, r2	@ 0001b29c 1040
.org 0x1b29e
	cmp r0, #0	@ 0001b29e 0028
.org 0x1b2a0
	bne.n 0x1b2b0	@ 0001b2a0 06d1
.org 0x1b2a2
	movs r0, #1	@ 0001b2a2 0120
.org 0x1b2a4
	orrs r0, r2	@ 0001b2a4 1043
.org 0x1b2a6
	strb r0, [r1, #0]	@ 0001b2a6 0870
.org 0x1b2a8
	movs r0, #138	@ 0001b2a8 8a20
.org 0x1b2aa
	movs r1, #0	@ 0001b2aa 0021
.org 0x1b2ac
	bl 0x249c	@ 0001b2ac e7f7f6f8
.org 0x1b2b0
	movs r0, #138	@ 0001b2b0 8a20
.org 0x1b2b2
	bl 0x25d8	@ 0001b2b2 e7f791f9
.org 0x1b2b6
	b.n 0x1b2f8	@ 0001b2b6 1fe0
.org 0x1b2b8
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b2b8 data
.org 0x1b2bc
	.byte 0x26,0xd0,0x02,0x00	@ 0001b2bc data
.org 0x1b2c0
	.byte 0x44,0xd0,0x02,0x00	@ 0001b2c0 data
.org 0x1b2c4
	.byte 0x10,0xe9,0x02,0x02	@ 0001b2c4 data
.org 0x1b2c8
	.byte 0x40,0xd0,0x02,0x00	@ 0001b2c8 data
.org 0x1b2cc
	.byte 0x3c,0xd0,0x02,0x00	@ 0001b2cc data
.org 0x1b2d0
	.byte 0xd4,0x07,0x00,0x00	@ 0001b2d0 data
.org 0x1b2d4
	.byte 0x2a,0xd0,0x02,0x00	@ 0001b2d4 data
.org 0x1b2d8
	.byte 0x28,0xd0,0x02,0x00	@ 0001b2d8 data
.org 0x1b2dc
	ldr r0, [pc, #124]	@ 0001b2dc 1f48
.org 0x1b2de
	ldr r1, [pc, #128]	@ 0001b2de 2049
.org 0x1b2e0
	adds r2, r0, r1	@ 0001b2e0 4218
.org 0x1b2e2
	ldrb r1, [r2, #0]	@ 0001b2e2 1178
.org 0x1b2e4
	movs r0, #1	@ 0001b2e4 0120
.org 0x1b2e6
	ands r0, r1	@ 0001b2e6 0840
.org 0x1b2e8
	cmp r0, #0	@ 0001b2e8 0028
.org 0x1b2ea
	beq.n 0x1b2f8	@ 0001b2ea 05d0
.org 0x1b2ec
	movs r0, #1	@ 0001b2ec 0120
.org 0x1b2ee
	eors r0, r1	@ 0001b2ee 4840
.org 0x1b2f0
	strb r0, [r2, #0]	@ 0001b2f0 1070
.org 0x1b2f2
	movs r0, #138	@ 0001b2f2 8a20
.org 0x1b2f4
	bl 0x2624	@ 0001b2f4 e7f796f9
.org 0x1b2f8
	ldr r2, [pc, #96]	@ 0001b2f8 184a
.org 0x1b2fa
	ldr r1, [pc, #104]	@ 0001b2fa 1a49
.org 0x1b2fc
	adds r0, r2, r1	@ 0001b2fc 5018
.org 0x1b2fe
	ldrh r1, [r0, #0]	@ 0001b2fe 0188
.org 0x1b300
	lsrs r0, r1, #8	@ 0001b300 080a
.org 0x1b302
	cmp r0, #16	@ 0001b302 1028
.org 0x1b304
	bne.n 0x1b368	@ 0001b304 30d1
.org 0x1b306
	movs r0, #255	@ 0001b306 ff20
.org 0x1b308
	ands r0, r1	@ 0001b308 0840
.org 0x1b30a
	cmp r0, #1	@ 0001b30a 0128
.org 0x1b30c
	bne.n 0x1b368	@ 0001b30c 2cd1
.org 0x1b30e
	ldr r0, [pc, #80]	@ 0001b30e 1448
.org 0x1b310
	adds r2, r2, r0	@ 0001b310 1218
.org 0x1b312
	ldrb r1, [r2, #0]	@ 0001b312 1178
.org 0x1b314
	movs r0, #2	@ 0001b314 0220
.org 0x1b316
	ands r0, r1	@ 0001b316 0840
.org 0x1b318
	cmp r0, #0	@ 0001b318 0028
.org 0x1b31a
	bne.n 0x1b342	@ 0001b31a 12d1
.org 0x1b31c
	movs r0, #2	@ 0001b31c 0220
.org 0x1b31e
	orrs r0, r1	@ 0001b31e 0843
.org 0x1b320
	strb r0, [r2, #0]	@ 0001b320 1070
.org 0x1b322
	movs r0, #139	@ 0001b322 8b20
.org 0x1b324
	movs r1, #0	@ 0001b324 0021
.org 0x1b326
	bl 0x249c	@ 0001b326 e7f7b9f8
.org 0x1b32a
	movs r0, #140	@ 0001b32a 8c20
.org 0x1b32c
	movs r1, #0	@ 0001b32c 0021
.org 0x1b32e
	bl 0x249c	@ 0001b32e e7f7b5f8
.org 0x1b332
	movs r0, #141	@ 0001b332 8d20
.org 0x1b334
	movs r1, #0	@ 0001b334 0021
.org 0x1b336
	bl 0x249c	@ 0001b336 e7f7b1f8
.org 0x1b33a
	movs r0, #142	@ 0001b33a 8e20
.org 0x1b33c
	movs r1, #0	@ 0001b33c 0021
.org 0x1b33e
	bl 0x249c	@ 0001b33e e7f7adf8
.org 0x1b342
	movs r0, #139	@ 0001b342 8b20
.org 0x1b344
	bl 0x25d8	@ 0001b344 e7f748f9
.org 0x1b348
	movs r0, #140	@ 0001b348 8c20
.org 0x1b34a
	bl 0x25d8	@ 0001b34a e7f745f9
.org 0x1b34e
	movs r0, #141	@ 0001b34e 8d20
.org 0x1b350
	bl 0x25d8	@ 0001b350 e7f742f9
.org 0x1b354
	movs r0, #142	@ 0001b354 8e20
.org 0x1b356
	bl 0x25d8	@ 0001b356 e7f73ff9
.org 0x1b35a
	b.n 0x1b396	@ 0001b35a 1ce0
.org 0x1b35c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b35c data
.org 0x1b360
	.byte 0x28,0xd0,0x02,0x00	@ 0001b360 data
.org 0x1b364
	.byte 0xd6,0x07,0x00,0x00	@ 0001b364 data
.org 0x1b368
	ldr r0, [pc, #100]	@ 0001b368 1948
.org 0x1b36a
	ldr r1, [pc, #104]	@ 0001b36a 1a49
.org 0x1b36c
	adds r2, r0, r1	@ 0001b36c 4218
.org 0x1b36e
	ldrb r1, [r2, #0]	@ 0001b36e 1178
.org 0x1b370
	movs r0, #2	@ 0001b370 0220
.org 0x1b372
	ands r0, r1	@ 0001b372 0840
.org 0x1b374
	cmp r0, #0	@ 0001b374 0028
.org 0x1b376
	beq.n 0x1b396	@ 0001b376 0ed0
.org 0x1b378
	movs r0, #2	@ 0001b378 0220
.org 0x1b37a
	eors r0, r1	@ 0001b37a 4840
.org 0x1b37c
	strb r0, [r2, #0]	@ 0001b37c 1070
.org 0x1b37e
	movs r0, #139	@ 0001b37e 8b20
.org 0x1b380
	bl 0x2624	@ 0001b380 e7f750f9
.org 0x1b384
	movs r0, #140	@ 0001b384 8c20
.org 0x1b386
	bl 0x2624	@ 0001b386 e7f74df9
.org 0x1b38a
	movs r0, #141	@ 0001b38a 8d20
.org 0x1b38c
	bl 0x2624	@ 0001b38c e7f74af9
.org 0x1b390
	movs r0, #142	@ 0001b390 8e20
.org 0x1b392
	bl 0x2624	@ 0001b392 e7f747f9
.org 0x1b396
	ldr r2, [pc, #56]	@ 0001b396 0e4a
.org 0x1b398
	ldr r1, [pc, #60]	@ 0001b398 0f49
.org 0x1b39a
	adds r0, r2, r1	@ 0001b39a 5018
.org 0x1b39c
	ldrh r1, [r0, #0]	@ 0001b39c 0188
.org 0x1b39e
	lsrs r0, r1, #8	@ 0001b39e 080a
.org 0x1b3a0
	cmp r0, #16	@ 0001b3a0 1028
.org 0x1b3a2
	bne.n 0x1b3dc	@ 0001b3a2 1bd1
.org 0x1b3a4
	movs r0, #255	@ 0001b3a4 ff20
.org 0x1b3a6
	ands r0, r1	@ 0001b3a6 0840
.org 0x1b3a8
	cmp r0, #2	@ 0001b3a8 0228
.org 0x1b3aa
	bne.n 0x1b3dc	@ 0001b3aa 17d1
.org 0x1b3ac
	ldr r0, [pc, #36]	@ 0001b3ac 0948
.org 0x1b3ae
	adds r2, r2, r0	@ 0001b3ae 1218
.org 0x1b3b0
	ldrb r1, [r2, #0]	@ 0001b3b0 1178
.org 0x1b3b2
	movs r0, #4	@ 0001b3b2 0420
.org 0x1b3b4
	ands r0, r1	@ 0001b3b4 0840
.org 0x1b3b6
	cmp r0, #0	@ 0001b3b6 0028
.org 0x1b3b8
	bne.n 0x1b3c8	@ 0001b3b8 06d1
.org 0x1b3ba
	movs r0, #4	@ 0001b3ba 0420
.org 0x1b3bc
	orrs r0, r1	@ 0001b3bc 0843
.org 0x1b3be
	strb r0, [r2, #0]	@ 0001b3be 1070
.org 0x1b3c0
	movs r0, #143	@ 0001b3c0 8f20
.org 0x1b3c2
	movs r1, #0	@ 0001b3c2 0021
.org 0x1b3c4
	bl 0x249c	@ 0001b3c4 e7f76af8
.org 0x1b3c8
	movs r0, #143	@ 0001b3c8 8f20
.org 0x1b3ca
	bl 0x25d8	@ 0001b3ca e7f705f9
.org 0x1b3ce
	b.n 0x1b3f8	@ 0001b3ce 13e0
.org 0x1b3d0
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b3d0 data
.org 0x1b3d4
	.byte 0x28,0xd0,0x02,0x00	@ 0001b3d4 data
.org 0x1b3d8
	.byte 0xd4,0x07,0x00,0x00	@ 0001b3d8 data
.org 0x1b3dc
	ldr r0, [pc, #96]	@ 0001b3dc 1848
.org 0x1b3de
	ldr r1, [pc, #100]	@ 0001b3de 1949
.org 0x1b3e0
	adds r2, r0, r1	@ 0001b3e0 4218
.org 0x1b3e2
	ldrb r1, [r2, #0]	@ 0001b3e2 1178
.org 0x1b3e4
	movs r0, #4	@ 0001b3e4 0420
.org 0x1b3e6
	ands r0, r1	@ 0001b3e6 0840
.org 0x1b3e8
	cmp r0, #0	@ 0001b3e8 0028
.org 0x1b3ea
	beq.n 0x1b3f8	@ 0001b3ea 05d0
.org 0x1b3ec
	movs r0, #4	@ 0001b3ec 0420
.org 0x1b3ee
	eors r0, r1	@ 0001b3ee 4840
.org 0x1b3f0
	strb r0, [r2, #0]	@ 0001b3f0 1070
.org 0x1b3f2
	movs r0, #143	@ 0001b3f2 8f20
.org 0x1b3f4
	bl 0x2624	@ 0001b3f4 e7f716f9
.org 0x1b3f8
	ldr r2, [pc, #68]	@ 0001b3f8 114a
.org 0x1b3fa
	ldr r1, [pc, #76]	@ 0001b3fa 1349
.org 0x1b3fc
	adds r0, r2, r1	@ 0001b3fc 5018
.org 0x1b3fe
	ldrh r1, [r0, #0]	@ 0001b3fe 0188
.org 0x1b400
	lsrs r0, r1, #8	@ 0001b400 080a
.org 0x1b402
	cmp r0, #16	@ 0001b402 1028
.org 0x1b404
	bne.n 0x1b44c	@ 0001b404 22d1
.org 0x1b406
	movs r0, #255	@ 0001b406 ff20
.org 0x1b408
	ands r0, r1	@ 0001b408 0840
.org 0x1b40a
	cmp r0, #3	@ 0001b40a 0328
.org 0x1b40c
	bne.n 0x1b44c	@ 0001b40c 1ed1
.org 0x1b40e
	ldr r0, [pc, #52]	@ 0001b40e 0d48
.org 0x1b410
	adds r2, r2, r0	@ 0001b410 1218
.org 0x1b412
	ldrb r1, [r2, #0]	@ 0001b412 1178
.org 0x1b414
	movs r0, #8	@ 0001b414 0820
.org 0x1b416
	ands r0, r1	@ 0001b416 0840
.org 0x1b418
	cmp r0, #0	@ 0001b418 0028
.org 0x1b41a
	bne.n 0x1b432	@ 0001b41a 0ad1
.org 0x1b41c
	movs r0, #8	@ 0001b41c 0820
.org 0x1b41e
	orrs r0, r1	@ 0001b41e 0843
.org 0x1b420
	strb r0, [r2, #0]	@ 0001b420 1070
.org 0x1b422
	movs r0, #144	@ 0001b422 9020
.org 0x1b424
	movs r1, #0	@ 0001b424 0021
.org 0x1b426
	bl 0x249c	@ 0001b426 e7f739f8
.org 0x1b42a
	movs r0, #147	@ 0001b42a 9320
.org 0x1b42c
	movs r1, #0	@ 0001b42c 0021
.org 0x1b42e
	bl 0x249c	@ 0001b42e e7f735f8
.org 0x1b432
	movs r0, #144	@ 0001b432 9020
.org 0x1b434
	bl 0x25d8	@ 0001b434 e7f7d0f8
.org 0x1b438
	movs r0, #147	@ 0001b438 9320
.org 0x1b43a
	bl 0x25d8	@ 0001b43a e7f7cdf8
.org 0x1b43e
	b.n 0x1b46e	@ 0001b43e 16e0
.org 0x1b440
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b440 data
.org 0x1b444
	.byte 0x28,0xd0,0x02,0x00	@ 0001b444 data
.org 0x1b448
	.byte 0xd4,0x07,0x00,0x00	@ 0001b448 data
.org 0x1b44c
	ldr r0, [pc, #88]	@ 0001b44c 1648
.org 0x1b44e
	ldr r1, [pc, #92]	@ 0001b44e 1749
.org 0x1b450
	adds r2, r0, r1	@ 0001b450 4218
.org 0x1b452
	ldrb r1, [r2, #0]	@ 0001b452 1178
.org 0x1b454
	movs r0, #8	@ 0001b454 0820
.org 0x1b456
	ands r0, r1	@ 0001b456 0840
.org 0x1b458
	cmp r0, #0	@ 0001b458 0028
.org 0x1b45a
	beq.n 0x1b46e	@ 0001b45a 08d0
.org 0x1b45c
	movs r0, #8	@ 0001b45c 0820
.org 0x1b45e
	eors r0, r1	@ 0001b45e 4840
.org 0x1b460
	strb r0, [r2, #0]	@ 0001b460 1070
.org 0x1b462
	movs r0, #144	@ 0001b462 9020
.org 0x1b464
	bl 0x2624	@ 0001b464 e7f7def8
.org 0x1b468
	movs r0, #147	@ 0001b468 9320
.org 0x1b46a
	bl 0x2624	@ 0001b46a e7f7dbf8
.org 0x1b46e
	ldr r3, [pc, #56]	@ 0001b46e 0e4b
.org 0x1b470
	ldr r2, [pc, #60]	@ 0001b470 0f4a
.org 0x1b472
	adds r0, r3, r2	@ 0001b472 9818
.org 0x1b474
	ldrh r2, [r0, #0]	@ 0001b474 0288
.org 0x1b476
	lsrs r1, r2, #8	@ 0001b476 110a
.org 0x1b478
	cmp r1, #16	@ 0001b478 1029
.org 0x1b47a
	bne.n 0x1b4b4	@ 0001b47a 1bd1
.org 0x1b47c
	movs r0, #255	@ 0001b47c ff20
.org 0x1b47e
	ands r0, r2	@ 0001b47e 1040
.org 0x1b480
	cmp r0, #5	@ 0001b480 0528
.org 0x1b482
	bne.n 0x1b4b4	@ 0001b482 17d1
.org 0x1b484
	ldr r0, [pc, #36]	@ 0001b484 0948
.org 0x1b486
	adds r3, r3, r0	@ 0001b486 1b18
.org 0x1b488
	ldrb r2, [r3, #0]	@ 0001b488 1a78
.org 0x1b48a
	ands r1, r2	@ 0001b48a 1140
.org 0x1b48c
	cmp r1, #0	@ 0001b48c 0029
.org 0x1b48e
	bne.n 0x1b49e	@ 0001b48e 06d1
.org 0x1b490
	movs r0, #16	@ 0001b490 1020
.org 0x1b492
	orrs r0, r2	@ 0001b492 1043
.org 0x1b494
	strb r0, [r3, #0]	@ 0001b494 1870
.org 0x1b496
	movs r0, #145	@ 0001b496 9120
.org 0x1b498
	movs r1, #0	@ 0001b498 0021
.org 0x1b49a
	bl 0x249c	@ 0001b49a e6f7ffff
.org 0x1b49e
	movs r0, #145	@ 0001b49e 9120
.org 0x1b4a0
	bl 0x25d8	@ 0001b4a0 e7f79af8
.org 0x1b4a4
	b.n 0x1b4d0	@ 0001b4a4 14e0
.org 0x1b4a6
	.byte 0x00	@ 0001b4a6 data
.org 0x1b4a7
	.byte 0x00	@ 0001b4a7 data
.org 0x1b4a8
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b4a8 data
.org 0x1b4ac
	.byte 0x28,0xd0,0x02,0x00	@ 0001b4ac data
.org 0x1b4b0
	.byte 0xd4,0x07,0x00,0x00	@ 0001b4b0 data
.org 0x1b4b4
	ldr r0, [pc, #84]	@ 0001b4b4 1548
.org 0x1b4b6
	ldr r1, [pc, #88]	@ 0001b4b6 1649
.org 0x1b4b8
	adds r2, r0, r1	@ 0001b4b8 4218
.org 0x1b4ba
	ldrb r1, [r2, #0]	@ 0001b4ba 1178
.org 0x1b4bc
	movs r0, #16	@ 0001b4bc 1020
.org 0x1b4be
	ands r0, r1	@ 0001b4be 0840
.org 0x1b4c0
	cmp r0, #0	@ 0001b4c0 0028
.org 0x1b4c2
	beq.n 0x1b4d0	@ 0001b4c2 05d0
.org 0x1b4c4
	movs r0, #16	@ 0001b4c4 1020
.org 0x1b4c6
	eors r0, r1	@ 0001b4c6 4840
.org 0x1b4c8
	strb r0, [r2, #0]	@ 0001b4c8 1070
.org 0x1b4ca
	movs r0, #145	@ 0001b4ca 9120
.org 0x1b4cc
	bl 0x2624	@ 0001b4cc e7f7aaf8
.org 0x1b4d0
	ldr r2, [pc, #56]	@ 0001b4d0 0e4a
.org 0x1b4d2
	ldr r1, [pc, #64]	@ 0001b4d2 1049
.org 0x1b4d4
	adds r0, r2, r1	@ 0001b4d4 5018
.org 0x1b4d6
	ldrh r1, [r0, #0]	@ 0001b4d6 0188
.org 0x1b4d8
	lsrs r0, r1, #8	@ 0001b4d8 080a
.org 0x1b4da
	cmp r0, #16	@ 0001b4da 1028
.org 0x1b4dc
	bne.n 0x1b518	@ 0001b4dc 1cd1
.org 0x1b4de
	movs r0, #255	@ 0001b4de ff20
.org 0x1b4e0
	ands r0, r1	@ 0001b4e0 0840
.org 0x1b4e2
	cmp r0, #7	@ 0001b4e2 0728
.org 0x1b4e4
	bne.n 0x1b518	@ 0001b4e4 18d1
.org 0x1b4e6
	ldr r0, [pc, #40]	@ 0001b4e6 0a48
.org 0x1b4e8
	adds r2, r2, r0	@ 0001b4e8 1218
.org 0x1b4ea
	ldrb r1, [r2, #0]	@ 0001b4ea 1178
.org 0x1b4ec
	movs r0, #32	@ 0001b4ec 2020
.org 0x1b4ee
	ands r0, r1	@ 0001b4ee 0840
.org 0x1b4f0
	cmp r0, #0	@ 0001b4f0 0028
.org 0x1b4f2
	bne.n 0x1b502	@ 0001b4f2 06d1
.org 0x1b4f4
	movs r0, #32	@ 0001b4f4 2020
.org 0x1b4f6
	orrs r0, r1	@ 0001b4f6 0843
.org 0x1b4f8
	strb r0, [r2, #0]	@ 0001b4f8 1070
.org 0x1b4fa
	movs r0, #146	@ 0001b4fa 9220
.org 0x1b4fc
	movs r1, #0	@ 0001b4fc 0021
.org 0x1b4fe
	bl 0x249c	@ 0001b4fe e6f7cdff
.org 0x1b502
	movs r0, #146	@ 0001b502 9220
.org 0x1b504
	bl 0x25d8	@ 0001b504 e7f768f8
.org 0x1b508
	b.n 0x1b534	@ 0001b508 14e0
.org 0x1b50a
	.byte 0x00	@ 0001b50a data
.org 0x1b50b
	.byte 0x00	@ 0001b50b data
.org 0x1b50c
	.byte 0xb0,0x0a,0x00,0x02	@ 0001b50c data
.org 0x1b510
	.byte 0x28,0xd0,0x02,0x00	@ 0001b510 data
.org 0x1b514
	.byte 0xd6,0x07,0x00,0x00	@ 0001b514 data
.org 0x1b518
	ldr r0, [pc, #108]	@ 0001b518 1b48
.org 0x1b51a
	ldr r1, [pc, #112]	@ 0001b51a 1c49
.org 0x1b51c
	adds r2, r0, r1	@ 0001b51c 4218
