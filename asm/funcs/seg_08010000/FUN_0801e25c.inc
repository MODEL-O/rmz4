@ FUN_0801e25c  entry 0x0801e25c  size 502
.thumb
.org 0x1e25c
FUN_0801e25c:
	push {r4, r5, r6, r7, lr}	@ 0001e25c f0b5
.org 0x1e25e
	mov r7, sl	@ 0001e25e 5746
.org 0x1e260
	mov r6, r9	@ 0001e260 4e46
.org 0x1e262
	mov r5, r8	@ 0001e262 4546
.org 0x1e264
	push {r5, r6, r7}	@ 0001e264 e0b4
.org 0x1e266
	sub sp, #16	@ 0001e266 84b0
.org 0x1e268
	lsls r0, r0, #24	@ 0001e268 0006
.org 0x1e26a
	lsls r1, r1, #24	@ 0001e26a 0906
.org 0x1e26c
	lsrs r1, r1, #24	@ 0001e26c 090e
.org 0x1e26e
	str r1, [sp, #8]	@ 0001e26e 0291
.org 0x1e270
	ldr r1, [pc, #480]	@ 0001e270 7849
.org 0x1e272
	lsrs r0, r0, #22	@ 0001e272 800d
.org 0x1e274
	str r0, [sp, #12]	@ 0001e274 0390
.org 0x1e276
	adds r0, r0, r1	@ 0001e276 4018
.org 0x1e278
	ldr r7, [r0, #0]	@ 0001e278 0768
.org 0x1e27a
	ldr r2, [pc, #476]	@ 0001e27a 774a
.org 0x1e27c
	ldrb r0, [r2, #0]	@ 0001e27c 1078
.org 0x1e27e
	cmp r0, #255	@ 0001e27e ff28
.org 0x1e280
	bne.n 0x1e370	@ 0001e280 76d1
.org 0x1e282
	ldr r0, [pc, #472]	@ 0001e282 7648
.org 0x1e284
	mov sl, r0	@ 0001e284 8246
.org 0x1e286
	ldr r1, [pc, #472]	@ 0001e286 7649
.org 0x1e288
	mov r8, r1	@ 0001e288 8846
.org 0x1e28a
	ldrh r1, [r1, #0]	@ 0001e28a 0988
.org 0x1e28c
	ldrh r0, [r0, #6]	@ 0001e28c c088
.org 0x1e28e
	lsrs r0, r0, #6	@ 0001e28e 8009
.org 0x1e290
	subs r1, r1, r0	@ 0001e290 091a
.org 0x1e292
	lsls r1, r1, #5	@ 0001e292 4901
.org 0x1e294
	movs r6, #128	@ 0001e294 8026
.org 0x1e296
	lsls r6, r6, #9	@ 0001e296 7602
.org 0x1e298
	adds r1, r1, r6	@ 0001e298 8919
.org 0x1e29a
	mov r0, sl	@ 0001e29a 5046
.org 0x1e29c
	bl 0x1d30	@ 0001e29c e3f748fd
.org 0x1e2a0
	ldr r2, [pc, #448]	@ 0001e2a0 704a
.org 0x1e2a2
	mov r9, r2	@ 0001e2a2 9146
.org 0x1e2a4
	ldr r5, [pc, #448]	@ 0001e2a4 704d
.org 0x1e2a6
	ldrh r1, [r5, #0]	@ 0001e2a6 2988
.org 0x1e2a8
	ldrb r0, [r2, #7]	@ 0001e2a8 d079
.org 0x1e2aa
	subs r1, r1, r0	@ 0001e2aa 091a
.org 0x1e2ac
	lsls r1, r1, #5	@ 0001e2ac 4901
.org 0x1e2ae
	movs r4, #128	@ 0001e2ae 8024
.org 0x1e2b0
	lsls r4, r4, #2	@ 0001e2b0 a400
.org 0x1e2b2
	adds r1, r1, r4	@ 0001e2b2 0919
.org 0x1e2b4
	mov r0, r9	@ 0001e2b4 4846
.org 0x1e2b6
	bl 0x2208	@ 0001e2b6 e3f7a7ff
.org 0x1e2ba
	mov r0, sl	@ 0001e2ba 5046
.org 0x1e2bc
	adds r0, #20	@ 0001e2bc 1430
.org 0x1e2be
	mov r2, r8	@ 0001e2be 4246
.org 0x1e2c0
	ldrh r1, [r2, #2]	@ 0001e2c0 5188
.org 0x1e2c2
	ldrh r2, [r0, #6]	@ 0001e2c2 c288
.org 0x1e2c4
	lsrs r2, r2, #6	@ 0001e2c4 9209
.org 0x1e2c6
	subs r1, r1, r2	@ 0001e2c6 891a
.org 0x1e2c8
	lsls r1, r1, #5	@ 0001e2c8 4901
.org 0x1e2ca
	adds r1, r1, r6	@ 0001e2ca 8919
.org 0x1e2cc
	bl 0x1d30	@ 0001e2cc e3f730fd
.org 0x1e2d0
	mov r0, r9	@ 0001e2d0 4846
.org 0x1e2d2
	adds r0, #20	@ 0001e2d2 1430
.org 0x1e2d4
	ldrh r1, [r5, #2]	@ 0001e2d4 6988
.org 0x1e2d6
	ldrb r2, [r0, #7]	@ 0001e2d6 c279
.org 0x1e2d8
	subs r1, r1, r2	@ 0001e2d8 891a
.org 0x1e2da
	lsls r1, r1, #5	@ 0001e2da 4901
.org 0x1e2dc
	adds r1, r1, r4	@ 0001e2dc 0919
.org 0x1e2de
	bl 0x2208	@ 0001e2de e3f793ff
.org 0x1e2e2
	mov r0, sl	@ 0001e2e2 5046
.org 0x1e2e4
	adds r0, #40	@ 0001e2e4 2830
.org 0x1e2e6
	mov r2, r8	@ 0001e2e6 4246
.org 0x1e2e8
	ldrh r1, [r2, #4]	@ 0001e2e8 9188
.org 0x1e2ea
	ldrh r2, [r0, #6]	@ 0001e2ea c288
.org 0x1e2ec
	lsrs r2, r2, #6	@ 0001e2ec 9209
.org 0x1e2ee
	subs r1, r1, r2	@ 0001e2ee 891a
.org 0x1e2f0
	lsls r1, r1, #5	@ 0001e2f0 4901
.org 0x1e2f2
	adds r1, r1, r6	@ 0001e2f2 8919
.org 0x1e2f4
	bl 0x1d30	@ 0001e2f4 e3f71cfd
.org 0x1e2f8
	mov r0, r9	@ 0001e2f8 4846
.org 0x1e2fa
	adds r0, #40	@ 0001e2fa 2830
.org 0x1e2fc
	ldrh r1, [r5, #4]	@ 0001e2fc a988
.org 0x1e2fe
	ldrb r2, [r0, #7]	@ 0001e2fe c279
.org 0x1e300
	subs r1, r1, r2	@ 0001e300 891a
.org 0x1e302
	lsls r1, r1, #5	@ 0001e302 4901
.org 0x1e304
	adds r1, r1, r4	@ 0001e304 0919
.org 0x1e306
	bl 0x2208	@ 0001e306 e3f77fff
.org 0x1e30a
	mov r0, sl	@ 0001e30a 5046
.org 0x1e30c
	adds r0, #80	@ 0001e30c 5030
.org 0x1e30e
	mov r2, r8	@ 0001e30e 4246
.org 0x1e310
	ldrh r1, [r2, #8]	@ 0001e310 1189
.org 0x1e312
	ldrh r2, [r0, #6]	@ 0001e312 c288
.org 0x1e314
	lsrs r2, r2, #6	@ 0001e314 9209
.org 0x1e316
	subs r1, r1, r2	@ 0001e316 891a
.org 0x1e318
	lsls r1, r1, #5	@ 0001e318 4901
.org 0x1e31a
	adds r1, r1, r6	@ 0001e31a 8919
.org 0x1e31c
	bl 0x1d30	@ 0001e31c e3f708fd
.org 0x1e320
	mov r0, r9	@ 0001e320 4846
.org 0x1e322
	adds r0, #80	@ 0001e322 5030
.org 0x1e324
	ldrh r1, [r5, #8]	@ 0001e324 2989
.org 0x1e326
	ldrb r2, [r0, #7]	@ 0001e326 c279
.org 0x1e328
	subs r1, r1, r2	@ 0001e328 891a
.org 0x1e32a
	lsls r1, r1, #5	@ 0001e32a 4901
.org 0x1e32c
	adds r1, r1, r4	@ 0001e32c 0919
.org 0x1e32e
	bl 0x2208	@ 0001e32e e3f76bff
.org 0x1e332
	mov r0, sl	@ 0001e332 5046
.org 0x1e334
	adds r0, #100	@ 0001e334 6430
.org 0x1e336
	mov r2, r8	@ 0001e336 4246
.org 0x1e338
	ldrh r1, [r2, #10]	@ 0001e338 5189
.org 0x1e33a
	ldrh r2, [r0, #6]	@ 0001e33a c288
.org 0x1e33c
	lsrs r2, r2, #6	@ 0001e33c 9209
.org 0x1e33e
	subs r1, r1, r2	@ 0001e33e 891a
.org 0x1e340
	lsls r1, r1, #5	@ 0001e340 4901
.org 0x1e342
	adds r1, r1, r6	@ 0001e342 8919
.org 0x1e344
	bl 0x1d30	@ 0001e344 e3f7f4fc
.org 0x1e348
	mov r0, r9	@ 0001e348 4846
.org 0x1e34a
	adds r0, #100	@ 0001e34a 6430
.org 0x1e34c
	ldrh r1, [r5, #10]	@ 0001e34c 6989
.org 0x1e34e
	ldrb r2, [r0, #7]	@ 0001e34e c279
.org 0x1e350
	subs r1, r1, r2	@ 0001e350 891a
.org 0x1e352
	lsls r1, r1, #5	@ 0001e352 4901
.org 0x1e354
	adds r1, r1, r4	@ 0001e354 0919
.org 0x1e356
	bl 0x2208	@ 0001e356 e3f757ff
.org 0x1e35a
	movs r0, #1	@ 0001e35a 0120
.org 0x1e35c
	negs r0, r0	@ 0001e35c 4042
.org 0x1e35e
	ldr r1, [pc, #268]	@ 0001e35e 4349
.org 0x1e360
	str r0, [sp, #0]	@ 0001e360 0090
.org 0x1e362
	ldr r2, [pc, #268]	@ 0001e362 434a
.org 0x1e364
	mov r0, sp	@ 0001e364 6846
.org 0x1e366
	bl 0x128be0	@ 0001e366 0af13bfc
.org 0x1e36a
	movs r0, #254	@ 0001e36a fe20
.org 0x1e36c
	ldr r1, [pc, #232]	@ 0001e36c 3a49
.org 0x1e36e
	strb r0, [r1, #0]	@ 0001e36e 0870
.org 0x1e370
	ldr r2, [pc, #256]	@ 0001e370 404a
.org 0x1e372
	ldr r1, [pc, #260]	@ 0001e372 4149
.org 0x1e374
	adds r0, r2, r1	@ 0001e374 5018
.org 0x1e376
	ldrh r1, [r0, #0]	@ 0001e376 0188
.org 0x1e378
	movs r0, #1	@ 0001e378 0120
.org 0x1e37a
	ands r0, r1	@ 0001e37a 0840
.org 0x1e37c
	adds r5, r2, #0	@ 0001e37c 151c
.org 0x1e37e
	cmp r0, #0	@ 0001e37e 0028
.org 0x1e380
	bne.n 0x1e442	@ 0001e380 5fd1
.org 0x1e382
	ldr r2, [pc, #212]	@ 0001e382 354a
.org 0x1e384
	ldrb r0, [r2, #0]	@ 0001e384 1078
.org 0x1e386
	ldr r4, [sp, #12]	@ 0001e386 039c
.org 0x1e388
	cmp r0, #254	@ 0001e388 fe28
.org 0x1e38a
	bne.n 0x1e3b2	@ 0001e38a 12d1
.org 0x1e38c
	ldrb r0, [r7, #0]	@ 0001e38c 3878
.org 0x1e38e
	cmp r0, #255	@ 0001e38e ff28
.org 0x1e390
	beq.n 0x1e3b2	@ 0001e390 0fd0
.org 0x1e392
	ldr r3, [pc, #204]	@ 0001e392 334b
.org 0x1e394
	ldr r2, [pc, #208]	@ 0001e394 344a
.org 0x1e396
	ldrb r0, [r7, #0]	@ 0001e396 3878
.org 0x1e398
	lsls r0, r0, #1	@ 0001e398 4000
.org 0x1e39a
	adds r0, r0, r3	@ 0001e39a c018
.org 0x1e39c
	ldrh r1, [r7, #2]	@ 0001e39c 7988
.org 0x1e39e
	strh r1, [r0, #0]	@ 0001e39e 0180
.org 0x1e3a0
	ldrb r0, [r7, #0]	@ 0001e3a0 3878
.org 0x1e3a2
	lsls r0, r0, #1	@ 0001e3a2 4000
.org 0x1e3a4
	adds r0, r0, r2	@ 0001e3a4 8018
.org 0x1e3a6
	ldrb r1, [r7, #4]	@ 0001e3a6 3979
.org 0x1e3a8
	strh r1, [r0, #0]	@ 0001e3a8 0180
.org 0x1e3aa
	adds r7, #8	@ 0001e3aa 0837
.org 0x1e3ac
	ldrb r0, [r7, #0]	@ 0001e3ac 3878
.org 0x1e3ae
	cmp r0, #255	@ 0001e3ae ff28
.org 0x1e3b0
	bne.n 0x1e396	@ 0001e3b0 f1d1
.org 0x1e3b2
	ldr r0, [pc, #200]	@ 0001e3b2 3248
.org 0x1e3b4
	adds r1, r5, r0	@ 0001e3b4 2918
.org 0x1e3b6
	movs r0, #0	@ 0001e3b6 0020
.org 0x1e3b8
	strh r0, [r1, #0]	@ 0001e3b8 0880
.org 0x1e3ba
	ldr r1, [pc, #152]	@ 0001e3ba 2649
.org 0x1e3bc
	adds r0, r4, r1	@ 0001e3bc 6018
.org 0x1e3be
	ldr r7, [r0, #0]	@ 0001e3be 0768
.org 0x1e3c0
	ldrb r0, [r7, #0]	@ 0001e3c0 3878
.org 0x1e3c2
	cmp r0, #255	@ 0001e3c2 ff28
.org 0x1e3c4
	beq.n 0x1e436	@ 0001e3c4 37d0
.org 0x1e3c6
	ldr r2, [pc, #152]	@ 0001e3c6 264a
.org 0x1e3c8
	mov r8, r2	@ 0001e3c8 9046
.org 0x1e3ca
	ldr r6, [pc, #156]	@ 0001e3ca 274e
.org 0x1e3cc
	ldrb r0, [r7, #1]	@ 0001e3cc 7878
.org 0x1e3ce
	ldr r1, [sp, #8]	@ 0001e3ce 0299
.org 0x1e3d0
	asrs r0, r1	@ 0001e3d0 0841
.org 0x1e3d2
	movs r1, #1	@ 0001e3d2 0121
.org 0x1e3d4
	ands r0, r1	@ 0001e3d4 0840
.org 0x1e3d6
	cmp r0, #0	@ 0001e3d6 0028
.org 0x1e3d8
	beq.n 0x1e42e	@ 0001e3d8 29d0
.org 0x1e3da
	ldrb r0, [r7, #0]	@ 0001e3da 3878
.org 0x1e3dc
	lsls r0, r0, #1	@ 0001e3dc 4000
.org 0x1e3de
	add r0, r8	@ 0001e3de 4044
.org 0x1e3e0
	ldrh r1, [r7, #2]	@ 0001e3e0 7988
.org 0x1e3e2
	strh r1, [r0, #0]	@ 0001e3e2 0180
.org 0x1e3e4
	ldrb r0, [r7, #0]	@ 0001e3e4 3878
.org 0x1e3e6
	lsls r0, r0, #1	@ 0001e3e6 4000
.org 0x1e3e8
	adds r0, r0, r6	@ 0001e3e8 8019
.org 0x1e3ea
	ldrb r1, [r7, #4]	@ 0001e3ea 3979
.org 0x1e3ec
	strh r1, [r0, #0]	@ 0001e3ec 0180
.org 0x1e3ee
	ldrb r4, [r7, #0]	@ 0001e3ee 3c78
.org 0x1e3f0
	lsls r5, r4, #2	@ 0001e3f0 a500
.org 0x1e3f2
	adds r5, r5, r4	@ 0001e3f2 2d19
.org 0x1e3f4
	lsls r5, r5, #2	@ 0001e3f4 ad00
.org 0x1e3f6
	ldr r2, [pc, #100]	@ 0001e3f6 194a
.org 0x1e3f8
	adds r0, r5, r2	@ 0001e3f8 a818
.org 0x1e3fa
	lsls r4, r4, #1	@ 0001e3fa 6400
.org 0x1e3fc
	mov r2, r8	@ 0001e3fc 4246
.org 0x1e3fe
	adds r1, r4, r2	@ 0001e3fe a118
.org 0x1e400
	ldrh r1, [r1, #0]	@ 0001e400 0988
.org 0x1e402
	ldrh r2, [r0, #6]	@ 0001e402 c288
.org 0x1e404
	lsrs r2, r2, #6	@ 0001e404 9209
.org 0x1e406
	subs r1, r1, r2	@ 0001e406 891a
.org 0x1e408
	lsls r1, r1, #5	@ 0001e408 4901
.org 0x1e40a
	movs r2, #128	@ 0001e40a 8022
.org 0x1e40c
	lsls r2, r2, #9	@ 0001e40c 5202
.org 0x1e40e
	adds r1, r1, r2	@ 0001e40e 8918
.org 0x1e410
	bl 0x1d30	@ 0001e410 e3f78efc
.org 0x1e414
	ldr r0, [pc, #76]	@ 0001e414 1348
.org 0x1e416
	adds r5, r5, r0	@ 0001e416 2d18
.org 0x1e418
	adds r4, r4, r6	@ 0001e418 a419
.org 0x1e41a
	ldrh r1, [r4, #0]	@ 0001e41a 2188
.org 0x1e41c
	ldrb r0, [r5, #7]	@ 0001e41c e879
.org 0x1e41e
	subs r1, r1, r0	@ 0001e41e 091a
.org 0x1e420
	lsls r1, r1, #5	@ 0001e420 4901
.org 0x1e422
	movs r2, #128	@ 0001e422 8022
.org 0x1e424
	lsls r2, r2, #2	@ 0001e424 9200
.org 0x1e426
	adds r1, r1, r2	@ 0001e426 8918
.org 0x1e428
	adds r0, r5, #0	@ 0001e428 281c
.org 0x1e42a
	bl 0x2208	@ 0001e42a e3f7edfe
.org 0x1e42e
	adds r7, #8	@ 0001e42e 0837
.org 0x1e430
	ldrb r0, [r7, #0]	@ 0001e430 3878
.org 0x1e432
	cmp r0, #255	@ 0001e432 ff28
.org 0x1e434
	bne.n 0x1e3cc	@ 0001e434 cad1
.org 0x1e436
	ldr r0, [pc, #60]	@ 0001e436 0f48
.org 0x1e438
	ldr r1, [pc, #68]	@ 0001e438 1149
.org 0x1e43a
	adds r0, r0, r1	@ 0001e43a 4018
.org 0x1e43c
	mov r2, sp	@ 0001e43c 6a46
.org 0x1e43e
	ldrb r2, [r2, #8]	@ 0001e43e 127a
.org 0x1e440
	strb r2, [r0, #0]	@ 0001e440 0270
.org 0x1e442
	add sp, #16	@ 0001e442 04b0
.org 0x1e444
	pop {r3, r4, r5}	@ 0001e444 38bc
.org 0x1e446
	mov r8, r3	@ 0001e446 9846
.org 0x1e448
	mov r9, r4	@ 0001e448 a146
.org 0x1e44a
	mov sl, r5	@ 0001e44a aa46
.org 0x1e44c
	pop {r4, r5, r6, r7}	@ 0001e44c f0bc
.org 0x1e44e
	pop {r0}	@ 0001e44e 01bc
.org 0x1e450
	bx r0	@ 0001e450 0047
