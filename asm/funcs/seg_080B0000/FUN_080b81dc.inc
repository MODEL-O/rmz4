@ FUN_080b81dc  entry 0x080b81dc  size 468
.thumb
.org 0xb81dc
FUN_080b81dc:
	push {r4, r5, lr}	@ 000b81dc 30b5
.org 0xb81de
	sub sp, #8	@ 000b81de 82b0
.org 0xb81e0
	adds r4, r0, #0	@ 000b81e0 041c
.org 0xb81e2
	ldrb r5, [r4, #14]	@ 000b81e2 a57b
.org 0xb81e4
	cmp r5, #0	@ 000b81e4 002d
.org 0xb81e6
	bne.n 0xb8248	@ 000b81e6 2fd1
.org 0xb81e8
	ldr r0, [r4, #84]	@ 000b81e8 606d
.org 0xb81ea
	movs r1, #168	@ 000b81ea a821
.org 0xb81ec
	lsls r1, r1, #5	@ 000b81ec 4901
.org 0xb81ee
	adds r0, r0, r1	@ 000b81ee 4018
.org 0xb81f0
	str r0, [sp, #0]	@ 000b81f0 0090
.org 0xb81f2
	ldr r0, [r4, #88]	@ 000b81f2 a06d
.org 0xb81f4
	str r0, [sp, #4]	@ 000b81f4 0190
.org 0xb81f6
	mov r0, sp	@ 000b81f6 6846
.org 0xb81f8
	movs r1, #3	@ 000b81f8 0321
.org 0xb81fa
	movs r2, #0	@ 000b81fa 0022
.org 0xb81fc
	bl 0xe41b8	@ 000b81fc 2bf0dcff
.org 0xb8200
	mov r0, sp	@ 000b8200 6846
.org 0xb8202
	movs r1, #3	@ 000b8202 0321
.org 0xb8204
	movs r2, #0	@ 000b8204 0022
.org 0xb8206
	bl 0xe41b8	@ 000b8206 2bf0d7ff
.org 0xb820a
	mov r0, sp	@ 000b820a 6846
.org 0xb820c
	movs r1, #3	@ 000b820c 0321
.org 0xb820e
	movs r2, #0	@ 000b820e 0022
.org 0xb8210
	bl 0xe41b8	@ 000b8210 2bf0d2ff
.org 0xb8214
	mov r0, sp	@ 000b8214 6846
.org 0xb8216
	movs r1, #3	@ 000b8216 0321
.org 0xb8218
	movs r2, #0	@ 000b8218 0022
.org 0xb821a
	bl 0xe41b8	@ 000b821a 2bf0cdff
.org 0xb821e
	mov r0, sp	@ 000b821e 6846
.org 0xb8220
	movs r1, #3	@ 000b8220 0321
.org 0xb8222
	movs r2, #0	@ 000b8222 0022
.org 0xb8224
	bl 0xe41b8	@ 000b8224 2bf0c8ff
.org 0xb8228
	mov r0, sp	@ 000b8228 6846
.org 0xb822a
	movs r1, #3	@ 000b822a 0321
.org 0xb822c
	movs r2, #0	@ 000b822c 0022
.org 0xb822e
	bl 0xe41b8	@ 000b822e 2bf0c3ff
.org 0xb8232
	ldr r0, [pc, #76]	@ 000b8232 1348
.org 0xb8234
	str r0, [r4, #92]	@ 000b8234 e065
.org 0xb8236
	adds r0, #192	@ 000b8236 c030
.org 0xb8238
	str r0, [r4, #100]	@ 000b8238 6066
.org 0xb823a
	strb r5, [r4, #15]	@ 000b823a e573
.org 0xb823c
	ldr r0, [pc, #68]	@ 000b823c 1148
.org 0xb823e
	bl 0x2b10	@ 000b823e 4af767fc
.org 0xb8242
	ldrb r0, [r4, #14]	@ 000b8242 a07b
.org 0xb8244
	adds r0, #1	@ 000b8244 0130
.org 0xb8246
	strb r0, [r4, #14]	@ 000b8246 a073
.org 0xb8248
	ldrb r0, [r4, #15]	@ 000b8248 e07b
.org 0xb824a
	cmp r0, #0	@ 000b824a 0028
.org 0xb824c
	bne.n 0xb8290	@ 000b824c 20d1
.org 0xb824e
	ldr r0, [r4, #84]	@ 000b824e 606d
.org 0xb8250
	ldr r1, [r4, #92]	@ 000b8250 e16d
.org 0xb8252
	adds r0, r0, r1	@ 000b8252 4018
.org 0xb8254
	str r0, [r4, #84]	@ 000b8254 6065
.org 0xb8256
	ldr r0, [r4, #100]	@ 000b8256 606e
.org 0xb8258
	adds r1, r1, r0	@ 000b8258 0918
.org 0xb825a
	str r1, [r4, #92]	@ 000b825a e165
.org 0xb825c
	ldr r0, [pc, #40]	@ 000b825c 0a48
.org 0xb825e
	cmp r1, r0	@ 000b825e 8142
.org 0xb8260
	bge.n 0xb8264	@ 000b8260 00da
.org 0xb8262
	str r0, [r4, #92]	@ 000b8262 e065
.org 0xb8264
	ldr r0, [pc, #36]	@ 000b8264 0948
.org 0xb8266
	adds r1, r4, #0	@ 000b8266 211c
.org 0xb8268
	adds r1, #84	@ 000b8268 5431
.org 0xb826a
	bl 0x1fb14	@ 000b826a 67f753fc
.org 0xb826e
	movs r1, #128	@ 000b826e 8021
.org 0xb8270
	lsls r1, r1, #8	@ 000b8270 0902
.org 0xb8272
	cmp r0, r1	@ 000b8272 8842
.org 0xb8274
	bhi.n 0xb8278	@ 000b8274 00d8
.org 0xb8276
	b.n 0xb83c8	@ 000b8276 a7e0
.org 0xb8278
	movs r0, #128	@ 000b8278 8020
.org 0xb827a
	lsls r0, r0, #3	@ 000b827a c000
.org 0xb827c
	str r0, [r4, #92]	@ 000b827c e065
.org 0xb827e
	b.n 0xb8386	@ 000b827e 82e0
.org 0xb8280
	.byte 0x00,0xff,0xff,0xff	@ 000b8280 data
.org 0xb8284
	.byte 0x93,0x01,0x00,0x00	@ 000b8284 data
.org 0xb8288
	.byte 0x00,0xfc,0xff,0xff	@ 000b8288 data
.org 0xb828c
	.byte 0xf8,0xe9,0x02,0x02	@ 000b828c data
.org 0xb8290
	cmp r0, #1	@ 000b8290 0128
.org 0xb8292
	bne.n 0xb8318	@ 000b8292 41d1
.org 0xb8294
	ldr r1, [r4, #84]	@ 000b8294 616d
.org 0xb8296
	ldr r0, [r4, #92]	@ 000b8296 e06d
.org 0xb8298
	adds r1, r1, r0	@ 000b8298 0918
.org 0xb829a
	str r1, [r4, #84]	@ 000b829a 6165
.org 0xb829c
	ldr r0, [r4, #40]	@ 000b829c a06a
.org 0xb829e
	adds r0, #180	@ 000b829e b430
.org 0xb82a0
	ldr r0, [r0, #0]	@ 000b82a0 0068
.org 0xb82a2
	ldr r2, [pc, #108]	@ 000b82a2 1b4a
.org 0xb82a4
	adds r0, r0, r2	@ 000b82a4 8018
.org 0xb82a6
	cmp r1, r0	@ 000b82a6 8142
.org 0xb82a8
	bgt.n 0xb82ac	@ 000b82a8 00dc
.org 0xb82aa
	b.n 0xb83c8	@ 000b82aa 8de0
.org 0xb82ac
	movs r2, #168	@ 000b82ac a822
.org 0xb82ae
	lsls r2, r2, #5	@ 000b82ae 5201
.org 0xb82b0
	adds r0, r1, r2	@ 000b82b0 8818
.org 0xb82b2
	str r0, [sp, #0]	@ 000b82b2 0090
.org 0xb82b4
	ldr r0, [r4, #88]	@ 000b82b4 a06d
.org 0xb82b6
	str r0, [sp, #4]	@ 000b82b6 0190
.org 0xb82b8
	mov r0, sp	@ 000b82b8 6846
.org 0xb82ba
	movs r1, #3	@ 000b82ba 0321
.org 0xb82bc
	movs r2, #0	@ 000b82bc 0022
.org 0xb82be
	bl 0xe41b8	@ 000b82be 2bf07bff
.org 0xb82c2
	mov r0, sp	@ 000b82c2 6846
.org 0xb82c4
	movs r1, #3	@ 000b82c4 0321
.org 0xb82c6
	movs r2, #0	@ 000b82c6 0022
.org 0xb82c8
	bl 0xe41b8	@ 000b82c8 2bf076ff
.org 0xb82cc
	mov r0, sp	@ 000b82cc 6846
.org 0xb82ce
	movs r1, #3	@ 000b82ce 0321
.org 0xb82d0
	movs r2, #0	@ 000b82d0 0022
.org 0xb82d2
	bl 0xe41b8	@ 000b82d2 2bf071ff
.org 0xb82d6
	mov r0, sp	@ 000b82d6 6846
.org 0xb82d8
	movs r1, #3	@ 000b82d8 0321
.org 0xb82da
	movs r2, #0	@ 000b82da 0022
.org 0xb82dc
	bl 0xe41b8	@ 000b82dc 2bf06cff
.org 0xb82e0
	mov r0, sp	@ 000b82e0 6846
.org 0xb82e2
	movs r1, #3	@ 000b82e2 0321
.org 0xb82e4
	movs r2, #0	@ 000b82e4 0022
.org 0xb82e6
	bl 0xe41b8	@ 000b82e6 2bf067ff
.org 0xb82ea
	mov r0, sp	@ 000b82ea 6846
.org 0xb82ec
	movs r1, #3	@ 000b82ec 0321
.org 0xb82ee
	movs r2, #0	@ 000b82ee 0022
.org 0xb82f0
	bl 0xe41b8	@ 000b82f0 2bf062ff
.org 0xb82f4
	ldr r1, [pc, #28]	@ 000b82f4 0749
.org 0xb82f6
	adds r0, r4, #0	@ 000b82f6 201c
.org 0xb82f8
	bl 0x1cf00	@ 000b82f8 64f702fe
.org 0xb82fc
	ldr r1, [r4, #40]	@ 000b82fc a16a
.org 0xb82fe
	adds r1, #180	@ 000b82fe b431
.org 0xb8300
	ldr r0, [r1, #0]	@ 000b8300 0868
.org 0xb8302
	ldr r2, [pc, #12]	@ 000b8302 034a
.org 0xb8304
	adds r0, r0, r2	@ 000b8304 8018
.org 0xb8306
	str r0, [r4, #84]	@ 000b8306 6065
.org 0xb8308
	ldr r0, [r1, #4]	@ 000b8308 4868
.org 0xb830a
	movs r1, #220	@ 000b830a dc21
.org 0xb830c
	lsls r1, r1, #6	@ 000b830c 8901
.org 0xb830e
	b.n 0xb8382	@ 000b830e 38e0
.org 0xb8310
	.byte 0x00,0xe5,0xff,0xff	@ 000b8310 data
.org 0xb8314
	.byte 0x05,0xb2,0x00,0x00	@ 000b8314 data
.org 0xb8318
	cmp r0, #2	@ 000b8318 0228
.org 0xb831a
	bne.n 0xb839c	@ 000b831a 3fd1
.org 0xb831c
	ldr r1, [r4, #40]	@ 000b831c a16a
.org 0xb831e
	adds r1, #180	@ 000b831e b431
.org 0xb8320
	ldr r0, [r1, #0]	@ 000b8320 0868
.org 0xb8322
	ldr r2, [pc, #108]	@ 000b8322 1b4a
.org 0xb8324
	adds r0, r0, r2	@ 000b8324 8018
.org 0xb8326
	str r0, [r4, #84]	@ 000b8326 6065
.org 0xb8328
	ldr r0, [r1, #4]	@ 000b8328 4868
.org 0xb832a
	movs r1, #220	@ 000b832a dc21
.org 0xb832c
	lsls r1, r1, #6	@ 000b832c 8901
.org 0xb832e
	adds r0, r0, r1	@ 000b832e 4018
.org 0xb8330
	str r0, [r4, #88]	@ 000b8330 a065
.org 0xb8332
	adds r0, r4, #0	@ 000b8332 201c
.org 0xb8334
	adds r0, #115	@ 000b8334 7330
.org 0xb8336
	ldrb r0, [r0, #0]	@ 000b8336 0078
.org 0xb8338
	cmp r0, #3	@ 000b8338 0328
.org 0xb833a
	bne.n 0xb83c8	@ 000b833a 45d1
.org 0xb833c
	adds r0, r4, #0	@ 000b833c 201c
.org 0xb833e
	bl 0x1cd28	@ 000b833e 64f7f3fc
.org 0xb8342
	ldrb r1, [r4, #10]	@ 000b8342 a17a
.org 0xb8344
	movs r0, #1	@ 000b8344 0120
.org 0xb8346
	orrs r0, r1	@ 000b8346 0843
.org 0xb8348
	movs r1, #2	@ 000b8348 0221
.org 0xb834a
	orrs r0, r1	@ 000b834a 0843
.org 0xb834c
	strb r0, [r4, #10]	@ 000b834c a072
.org 0xb834e
	adds r0, r4, #0	@ 000b834e 201c
.org 0xb8350
	bl 0x1ceec	@ 000b8350 64f7ccfd
.org 0xb8354
	ldr r1, [pc, #60]	@ 000b8354 0f49
.org 0xb8356
	adds r0, r4, #0	@ 000b8356 201c
.org 0xb8358
	bl 0x1cf00	@ 000b8358 64f7d2fd
.org 0xb835c
	adds r0, r4, #0	@ 000b835c 201c
.org 0xb835e
	adds r0, #116	@ 000b835e 7430
.org 0xb8360
	ldr r1, [pc, #52]	@ 000b8360 0d49
.org 0xb8362
	bl 0x5784	@ 000b8362 4df70ffa
.org 0xb8366
	adds r1, r4, #0	@ 000b8366 211c
.org 0xb8368
	adds r1, #36	@ 000b8368 2431
.org 0xb836a
	movs r0, #217	@ 000b836a d920
.org 0xb836c
	strb r0, [r1, #0]	@ 000b836c 0870
.org 0xb836e
	ldr r1, [r4, #40]	@ 000b836e a16a
.org 0xb8370
	adds r1, #180	@ 000b8370 b431
.org 0xb8372
	ldr r0, [r1, #0]	@ 000b8372 0868
.org 0xb8374
	movs r2, #128	@ 000b8374 8022
.org 0xb8376
	lsls r2, r2, #4	@ 000b8376 1201
.org 0xb8378
	adds r0, r0, r2	@ 000b8378 8018
.org 0xb837a
	str r0, [r4, #84]	@ 000b837a 6065
.org 0xb837c
	ldr r0, [r1, #4]	@ 000b837c 4868
.org 0xb837e
	movs r1, #192	@ 000b837e c021
.org 0xb8380
	lsls r1, r1, #6	@ 000b8380 8901
.org 0xb8382
	adds r0, r0, r1	@ 000b8382 4018
.org 0xb8384
	str r0, [r4, #88]	@ 000b8384 a065
.org 0xb8386
	ldrb r0, [r4, #15]	@ 000b8386 e07b
.org 0xb8388
	adds r0, #1	@ 000b8388 0130
.org 0xb838a
	strb r0, [r4, #15]	@ 000b838a e073
.org 0xb838c
	b.n 0xb83c8	@ 000b838c 1ce0
.org 0xb838e
	.byte 0x00	@ 000b838e data
.org 0xb838f
	.byte 0x00	@ 000b838f data
.org 0xb8390
	.byte 0x00,0xe5,0xff,0xff	@ 000b8390 data
.org 0xb8394
	.byte 0x02,0xb2,0x00,0x00	@ 000b8394 data
.org 0xb8398
	.byte 0x6c,0x40,0x86,0x08	@ 000b8398 data
.org 0xb839c
	ldr r1, [r4, #40]	@ 000b839c a16a
.org 0xb839e
	adds r1, #180	@ 000b839e b431
.org 0xb83a0
	ldr r0, [r1, #0]	@ 000b83a0 0868
.org 0xb83a2
	movs r2, #128	@ 000b83a2 8022
.org 0xb83a4
	lsls r2, r2, #4	@ 000b83a4 1201
.org 0xb83a6
	adds r0, r0, r2	@ 000b83a6 8018
.org 0xb83a8
	str r0, [r4, #84]	@ 000b83a8 6065
.org 0xb83aa
	ldr r0, [r1, #4]	@ 000b83aa 4868
.org 0xb83ac
	movs r1, #192	@ 000b83ac c021
.org 0xb83ae
	lsls r1, r1, #6	@ 000b83ae 8901
