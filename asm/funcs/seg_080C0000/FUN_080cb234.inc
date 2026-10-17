@ FUN_080cb234  entry 0x080cb234  size 250
.thumb
.org 0xcb234
FUN_080cb234:
	push {r4, r5, r6, r7, lr}	@ 000cb234 f0b5
.org 0xcb236
	mov r7, r9	@ 000cb236 4f46
.org 0xcb238
	mov r6, r8	@ 000cb238 4646
.org 0xcb23a
	push {r6, r7}	@ 000cb23a c0b4
.org 0xcb23c
	adds r7, r0, #0	@ 000cb23c 071c
.org 0xcb23e
	bl 0x1cc9c	@ 000cb23e 51f72dfd
.org 0xcb242
	ldrb r0, [r7, #10]	@ 000cb242 b87a
.org 0xcb244
	movs r1, #1	@ 000cb244 0121
.org 0xcb246
	mov r8, r1	@ 000cb246 8846
.org 0xcb248
	movs r1, #0	@ 000cb248 0021
.org 0xcb24a
	mov r9, r1	@ 000cb24a 8946
.org 0xcb24c
	mov r1, r8	@ 000cb24c 4146
.org 0xcb24e
	orrs r0, r1	@ 000cb24e 0843
.org 0xcb250
	movs r1, #2	@ 000cb250 0221
.org 0xcb252
	orrs r0, r1	@ 000cb252 0843
.org 0xcb254
	strb r0, [r7, #10]	@ 000cb254 b872
.org 0xcb256
	ldr r4, [pc, #76]	@ 000cb256 134c
.org 0xcb258
	ldr r0, [r4, #0]	@ 000cb258 2068
.org 0xcb25a
	ldr r6, [pc, #76]	@ 000cb25a 134e
.org 0xcb25c
	adds r1, r0, #0	@ 000cb25c 011c
.org 0xcb25e
	muls r1, r6	@ 000cb25e 7143
.org 0xcb260
	ldr r5, [pc, #72]	@ 000cb260 124d
.org 0xcb262
	adds r1, r1, r5	@ 000cb262 4919
.org 0xcb264
	lsls r1, r1, #1	@ 000cb264 4900
.org 0xcb266
	lsrs r0, r1, #1	@ 000cb266 4808
.org 0xcb268
	str r0, [r4, #0]	@ 000cb268 2060
.org 0xcb26a
	lsrs r1, r1, #17	@ 000cb26a 490c
.org 0xcb26c
	movs r0, #1	@ 000cb26c 0120
.org 0xcb26e
	ands r1, r0	@ 000cb26e 0140
.org 0xcb270
	ldr r0, [pc, #60]	@ 000cb270 0f48
.org 0xcb272
	adds r1, r1, r0	@ 000cb272 0918
.org 0xcb274
	lsls r1, r1, #16	@ 000cb274 0904
.org 0xcb276
	lsrs r1, r1, #16	@ 000cb276 090c
.org 0xcb278
	adds r0, r7, #0	@ 000cb278 381c
.org 0xcb27a
	bl 0x1cf00	@ 000cb27a 51f741fe
.org 0xcb27e
	adds r0, r7, #0	@ 000cb27e 381c
.org 0xcb280
	bl 0x1cff0	@ 000cb280 51f7b6fe
.org 0xcb284
	ldr r0, [r4, #0]	@ 000cb284 2068
.org 0xcb286
	muls r0, r6	@ 000cb286 7043
.org 0xcb288
	adds r0, r0, r5	@ 000cb288 4019
.org 0xcb28a
	lsls r0, r0, #1	@ 000cb28a 4000
.org 0xcb28c
	lsrs r1, r0, #1	@ 000cb28c 4108
.org 0xcb28e
	str r1, [r4, #0]	@ 000cb28e 2160
.org 0xcb290
	lsrs r2, r0, #17	@ 000cb290 420c
.org 0xcb292
	mov r1, r8	@ 000cb292 4146
.org 0xcb294
	ands r2, r1	@ 000cb294 0a40
.org 0xcb296
	cmp r2, #0	@ 000cb296 002a
.org 0xcb298
	beq.n 0xcb2b4	@ 000cb298 0cd0
.org 0xcb29a
	ldrb r0, [r7, #10]	@ 000cb29a b87a
.org 0xcb29c
	movs r1, #16	@ 000cb29c 1021
.org 0xcb29e
	orrs r0, r1	@ 000cb29e 0843
.org 0xcb2a0
	b.n 0xcb2ba	@ 000cb2a0 0be0
.org 0xcb2a2
	.byte 0x00	@ 000cb2a2 data
.org 0xcb2a3
	.byte 0x00	@ 000cb2a3 data
.org 0xcb2a4
	.byte 0x38,0xdc,0x02,0x02	@ 000cb2a4 data
.org 0xcb2a8
	.byte 0xfd,0x43,0x03,0x00	@ 000cb2a8 data
.org 0xcb2ac
	.byte 0xc3,0x9e,0x26,0x00	@ 000cb2ac data
.org 0xcb2b0
	.byte 0x03,0x8f,0x00,0x00	@ 000cb2b0 data
.org 0xcb2b4
	ldrb r1, [r7, #10]	@ 000cb2b4 b97a
.org 0xcb2b6
	movs r0, #239	@ 000cb2b6 ef20
.org 0xcb2b8
	ands r0, r1	@ 000cb2b8 0840
.org 0xcb2ba
	strb r0, [r7, #10]	@ 000cb2ba b872
.org 0xcb2bc
	movs r6, #1	@ 000cb2bc 0126
.org 0xcb2be
	movs r0, #1	@ 000cb2be 0120
.org 0xcb2c0
	mov r8, r0	@ 000cb2c0 8046
.org 0xcb2c2
	mov r1, r8	@ 000cb2c2 4146
.org 0xcb2c4
	ands r1, r2	@ 000cb2c4 1140
.org 0xcb2c6
	adds r0, r7, #0	@ 000cb2c6 381c
.org 0xcb2c8
	adds r0, #76	@ 000cb2c8 4c30
.org 0xcb2ca
	movs r5, #0	@ 000cb2ca 0025
.org 0xcb2cc
	strb r1, [r0, #0]	@ 000cb2cc 0170
.org 0xcb2ce
	adds r3, r7, #0	@ 000cb2ce 3b1c
.org 0xcb2d0
	adds r3, #74	@ 000cb2d0 4a33
.org 0xcb2d2
	lsls r1, r1, #4	@ 000cb2d2 0901
.org 0xcb2d4
	ldrb r2, [r3, #0]	@ 000cb2d4 1a78
.org 0xcb2d6
	movs r0, #17	@ 000cb2d6 1120
.org 0xcb2d8
	negs r0, r0	@ 000cb2d8 4042
.org 0xcb2da
	ands r0, r2	@ 000cb2da 1040
.org 0xcb2dc
	orrs r0, r1	@ 000cb2dc 0843
.org 0xcb2de
	strb r0, [r3, #0]	@ 000cb2de 1870
.org 0xcb2e0
	adds r1, r7, #0	@ 000cb2e0 391c
.org 0xcb2e2
	adds r1, #37	@ 000cb2e2 2531
.org 0xcb2e4
	movs r0, #18	@ 000cb2e4 1220
.org 0xcb2e6
	strb r0, [r1, #0]	@ 000cb2e6 0870
.org 0xcb2e8
	ldr r4, [pc, #84]	@ 000cb2e8 154c
.org 0xcb2ea
	ldr r0, [r4, #0]	@ 000cb2ea 2068
.org 0xcb2ec
	ldr r3, [pc, #84]	@ 000cb2ec 154b
.org 0xcb2ee
	muls r0, r3	@ 000cb2ee 5843
.org 0xcb2f0
	ldr r2, [pc, #84]	@ 000cb2f0 154a
.org 0xcb2f2
	adds r0, r0, r2	@ 000cb2f2 8018
.org 0xcb2f4
	lsls r0, r0, #1	@ 000cb2f4 4000
.org 0xcb2f6
	lsrs r1, r0, #1	@ 000cb2f6 4108
.org 0xcb2f8
	lsrs r0, r0, #17	@ 000cb2f8 400c
.org 0xcb2fa
	ands r0, r6	@ 000cb2fa 3040
.org 0xcb2fc
	strb r0, [r7, #18]	@ 000cb2fc b874
.org 0xcb2fe
	str r5, [r7, #96]	@ 000cb2fe 3d66
.org 0xcb300
	adds r0, r1, #0	@ 000cb300 081c
.org 0xcb302
	muls r0, r3	@ 000cb302 5843
.org 0xcb304
	adds r0, r0, r2	@ 000cb304 8018
.org 0xcb306
	lsls r0, r0, #1	@ 000cb306 4000
.org 0xcb308
	lsrs r1, r0, #1	@ 000cb308 4108
.org 0xcb30a
	str r1, [r4, #0]	@ 000cb30a 2160
.org 0xcb30c
	lsrs r0, r0, #17	@ 000cb30c 400c
.org 0xcb30e
	movs r1, #31	@ 000cb30e 1f21
.org 0xcb310
	ands r0, r1	@ 000cb310 0840
.org 0xcb312
	subs r0, #16	@ 000cb312 1038
.org 0xcb314
	lsls r0, r0, #8	@ 000cb314 0002
.org 0xcb316
	ldr r1, [r7, #84]	@ 000cb316 796d
.org 0xcb318
	adds r1, r1, r0	@ 000cb318 0918
.org 0xcb31a
	str r1, [r7, #84]	@ 000cb31a 7965
.org 0xcb31c
	ldr r1, [pc, #44]	@ 000cb31c 0b49
.org 0xcb31e
	ldrb r0, [r7, #9]	@ 000cb31e 787a
.org 0xcb320
	lsls r0, r0, #2	@ 000cb320 8000
.org 0xcb322
	adds r0, r0, r1	@ 000cb322 4018
.org 0xcb324
	mov r1, r8	@ 000cb324 4146
.org 0xcb326
	str r1, [r7, #12]	@ 000cb326 f960
.org 0xcb328
	ldr r0, [r0, #0]	@ 000cb328 0068
.org 0xcb32a
	ldr r0, [r0, #4]	@ 000cb32a 4068
.org 0xcb32c
	str r0, [r7, #20]	@ 000cb32c 7861
