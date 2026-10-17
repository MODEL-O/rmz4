@ FUN_080e325c  entry 0x080e325c  size 248
.thumb
.org 0xe325c
FUN_080e325c:
	push {r4, r5, lr}	@ 000e325c 30b5
.org 0xe325e
	sub sp, #8	@ 000e325e 82b0
.org 0xe3260
	adds r4, r0, #0	@ 000e3260 041c
.org 0xe3262
	ldrb r0, [r4, #17]	@ 000e3262 607c
.org 0xe3264
	cmp r0, #0	@ 000e3264 0028
.org 0xe3266
	bne.n 0xe32cc	@ 000e3266 31d1
.org 0xe3268
	ldr r1, [r4, #84]	@ 000e3268 616d
.org 0xe326a
	str r1, [sp, #0]	@ 000e326a 0091
.org 0xe326c
	ldr r0, [r4, #88]	@ 000e326c a06d
.org 0xe326e
	ldr r2, [pc, #32]	@ 000e326e 084a
.org 0xe3270
	adds r0, r0, r2	@ 000e3270 8018
.org 0xe3272
	str r0, [sp, #4]	@ 000e3272 0190
.org 0xe3274
	ldr r0, [pc, #28]	@ 000e3274 0748
.org 0xe3276
	ldr r0, [r0, #0]	@ 000e3276 0068
.org 0xe3278
	ldr r0, [r0, #84]	@ 000e3278 406d
.org 0xe327a
	cmp r0, r1	@ 000e327a 8842
.org 0xe327c
	bge.n 0xe3298	@ 000e327c 0cda
.org 0xe327e
	movs r2, #128	@ 000e327e 8022
.org 0xe3280
	lsls r2, r2, #2	@ 000e3280 9200
.org 0xe3282
	movs r0, #0	@ 000e3282 0020
.org 0xe3284
	mov r1, sp	@ 000e3284 6946
.org 0xe3286
	movs r3, #0	@ 000e3286 0023
.org 0xe3288
	bl 0xd0dc4	@ 000e3288 edf79cfd
.org 0xe328c
	b.n 0xe32a6	@ 000e328c 0be0
.org 0xe328e
	.byte 0x00	@ 000e328e data
.org 0xe328f
	.byte 0x00	@ 000e328f data
.org 0xe3290
	.byte 0x00,0xf2,0xff,0xff	@ 000e3290 data
.org 0xe3294
	.byte 0xf0,0xdb,0x02,0x02	@ 000e3294 data
.org 0xe3298
	movs r2, #128	@ 000e3298 8022
.org 0xe329a
	lsls r2, r2, #2	@ 000e329a 9200
.org 0xe329c
	movs r0, #0	@ 000e329c 0020
.org 0xe329e
	mov r1, sp	@ 000e329e 6946
.org 0xe32a0
	movs r3, #1	@ 000e32a0 0123
.org 0xe32a2
	bl 0xd0dc4	@ 000e32a2 edf78ffd
.org 0xe32a6
	ldr r1, [pc, #184]	@ 000e32a6 2e49
.org 0xe32a8
	adds r0, r4, #0	@ 000e32a8 201c
.org 0xe32aa
	bl 0x1cf00	@ 000e32aa 39f729fe
.org 0xe32ae
	movs r0, #0	@ 000e32ae 0020
.org 0xe32b0
	str r0, [r4, #100]	@ 000e32b0 6066
.org 0xe32b2
	str r0, [r4, #104]	@ 000e32b2 a066
.org 0xe32b4
	movs r0, #30	@ 000e32b4 1e20
.org 0xe32b6
	strb r0, [r4, #18]	@ 000e32b6 a074
.org 0xe32b8
	adds r0, r4, #0	@ 000e32b8 201c
.org 0xe32ba
	adds r0, #84	@ 000e32ba 5430
.org 0xe32bc
	movs r1, #0	@ 000e32bc 0021
.org 0xe32be
	movs r2, #1	@ 000e32be 0122
.org 0xe32c0
	bl 0xe3110	@ 000e32c0 fff726ff
.org 0xe32c4
	adds r1, r4, #0	@ 000e32c4 211c
.org 0xe32c6
	adds r1, #37	@ 000e32c6 2531
.org 0xe32c8
	movs r0, #24	@ 000e32c8 1820
.org 0xe32ca
	strb r0, [r1, #0]	@ 000e32ca 0870
.org 0xe32cc
	ldrb r0, [r4, #17]	@ 000e32cc 607c
.org 0xe32ce
	cmp r0, #1	@ 000e32ce 0128
.org 0xe32d0
	bne.n 0xe330e	@ 000e32d0 1dd1
.org 0xe32d2
	ldr r1, [pc, #144]	@ 000e32d2 2449
.org 0xe32d4
	adds r0, r4, #0	@ 000e32d4 201c
.org 0xe32d6
	bl 0x1cf00	@ 000e32d6 39f713fe
.org 0xe32da
	ldr r5, [pc, #140]	@ 000e32da 234d
.org 0xe32dc
	movs r1, #229	@ 000e32dc e521
.org 0xe32de
	lsls r1, r1, #1	@ 000e32de 4900
.org 0xe32e0
	adds r0, r5, r1	@ 000e32e0 6818
.org 0xe32e2
	movs r2, #0	@ 000e32e2 0022
.org 0xe32e4
	ldrsh r0, [r0, r2]	@ 000e32e4 805e
.org 0xe32e6
	movs r1, #20	@ 000e32e6 1421
.org 0xe32e8
	bl 0x128fb8	@ 000e32e8 45f066fe
.org 0xe32ec
	lsls r0, r0, #16	@ 000e32ec 0004
.org 0xe32ee
	asrs r0, r0, #16	@ 000e32ee 0014
.org 0xe32f0
	str r0, [r4, #100]	@ 000e32f0 6066
.org 0xe32f2
	movs r1, #165	@ 000e32f2 a521
.org 0xe32f4
	lsls r1, r1, #1	@ 000e32f4 4900
.org 0xe32f6
	adds r0, r5, r1	@ 000e32f6 6818
.org 0xe32f8
	movs r2, #0	@ 000e32f8 0022
.org 0xe32fa
	ldrsh r0, [r0, r2]	@ 000e32fa 805e
.org 0xe32fc
	lsls r0, r0, #8	@ 000e32fc 0002
.org 0xe32fe
	negs r0, r0	@ 000e32fe 4042
.org 0xe3300
	movs r1, #160	@ 000e3300 a021
.org 0xe3302
	lsls r1, r1, #5	@ 000e3302 4901
.org 0xe3304
	bl 0x128fb8	@ 000e3304 45f058fe
.org 0xe3308
	str r0, [r4, #104]	@ 000e3308 a066
.org 0xe330a
	movs r0, #255	@ 000e330a ff20
.org 0xe330c
	strb r0, [r4, #18]	@ 000e330c a074
.org 0xe330e
	movs r0, #0	@ 000e330e 0020
.org 0xe3310
	str r0, [r4, #92]	@ 000e3310 e065
.org 0xe3312
	str r0, [r4, #96]	@ 000e3312 2066
.org 0xe3314
	ldr r0, [pc, #84]	@ 000e3314 1548
.org 0xe3316
	ldr r0, [r0, #0]	@ 000e3316 0068
.org 0xe3318
	ldr r1, [r0, #84]	@ 000e3318 416d
.org 0xe331a
	ldr r0, [r4, #84]	@ 000e331a 606d
.org 0xe331c
	cmp r1, r0	@ 000e331c 8142
.org 0xe331e
	ble.n 0xe3352	@ 000e331e 18dd
.org 0xe3320
	movs r2, #1	@ 000e3320 0122
.org 0xe3322
	ldrb r1, [r4, #10]	@ 000e3322 a17a
.org 0xe3324
	movs r0, #16	@ 000e3324 1020
.org 0xe3326
	orrs r0, r1	@ 000e3326 0843
.org 0xe3328
	strb r0, [r4, #10]	@ 000e3328 a072
.org 0xe332a
	adds r0, r4, #0	@ 000e332a 201c
.org 0xe332c
	adds r0, #76	@ 000e332c 4c30
.org 0xe332e
	strb r2, [r0, #0]	@ 000e332e 0270
.org 0xe3330
	adds r3, r4, #0	@ 000e3330 231c
.org 0xe3332
	adds r3, #74	@ 000e3332 4a33
.org 0xe3334
	movs r2, #16	@ 000e3334 1022
.org 0xe3336
	ldrb r1, [r3, #0]	@ 000e3336 1978
.org 0xe3338
	movs r0, #17	@ 000e3338 1120
.org 0xe333a
	negs r0, r0	@ 000e333a 4042
.org 0xe333c
	ands r0, r1	@ 000e333c 0840
.org 0xe333e
	orrs r0, r2	@ 000e333e 1043
.org 0xe3340
	strb r0, [r3, #0]	@ 000e3340 1870
.org 0xe3342
	ldr r0, [r4, #100]	@ 000e3342 606e
.org 0xe3344
	lsls r0, r0, #8	@ 000e3344 0002
.org 0xe3346
	negs r0, r0	@ 000e3346 4042
.org 0xe3348
	cmp r0, #0	@ 000e3348 0028
.org 0xe334a
	bge.n 0xe334e	@ 000e334a 00da
.org 0xe334c
	adds r0, #255	@ 000e334c ff30
.org 0xe334e
	asrs r0, r0, #8	@ 000e334e 0012
.org 0xe3350
	str r0, [r4, #100]	@ 000e3350 6066
.org 0xe3352
	movs r0, #0	@ 000e3352 0020
