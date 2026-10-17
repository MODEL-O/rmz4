@ FUN_08063330  entry 0x08063330  size 240
.thumb
.org 0x63330
FUN_08063330:
	push {r4, r5, r6, r7, lr}	@ 00063330 f0b5
.org 0x63332
	mov r7, r8	@ 00063332 4746
.org 0x63334
	push {r7}	@ 00063334 80b4
.org 0x63336
	sub sp, #8	@ 00063336 82b0
.org 0x63338
	adds r6, r0, #0	@ 00063338 061c
.org 0x6333a
	ldrb r0, [r6, #10]	@ 0006333a b07a
.org 0x6333c
	lsrs r7, r0, #4	@ 0006333c 0709
.org 0x6333e
	movs r4, #1	@ 0006333e 0124
.org 0x63340
	ands r7, r4	@ 00063340 2740
.org 0x63342
	ldrb r0, [r6, #15]	@ 00063342 f07b
.org 0x63344
	cmp r0, #0	@ 00063344 0028
.org 0x63346
	bne.n 0x63364	@ 00063346 0dd1
.org 0x63348
	movs r0, #131	@ 00063348 8320
.org 0x6334a
	lsls r0, r0, #1	@ 0006334a 4000
.org 0x6334c
	bl 0x2b10	@ 0006334c 9ff7e0fb
.org 0x63350
	adds r0, r6, #0	@ 00063350 301c
.org 0x63352
	movs r1, #9	@ 00063352 0921
.org 0x63354
	bl 0x65a94	@ 00063354 02f09efb
.org 0x63358
	movs r0, #64	@ 00063358 4020
.org 0x6335a
	strb r0, [r6, #18]	@ 0006335a b074
.org 0x6335c
	strb r4, [r6, #19]	@ 0006335c f474
.org 0x6335e
	ldrb r0, [r6, #15]	@ 0006335e f07b
.org 0x63360
	adds r0, #1	@ 00063360 0130
.org 0x63362
	strb r0, [r6, #15]	@ 00063362 f073
.org 0x63364
	adds r0, r6, #0	@ 00063364 301c
.org 0x63366
	bl 0x1cff0	@ 00063366 b9f743fe
.org 0x6336a
	adds r0, r6, #0	@ 0006336a 301c
.org 0x6336c
	adds r0, #116	@ 0006336c 7430
.org 0x6336e
	ldr r4, [pc, #148]	@ 0006336e 254c
.org 0x63370
	ldr r3, [pc, #148]	@ 00063370 254b
.org 0x63372
	adds r1, r6, #0	@ 00063372 311c
.org 0x63374
	adds r1, #180	@ 00063374 b431
.org 0x63376
	ldrb r2, [r1, #0]	@ 00063376 0a78
.org 0x63378
	lsls r1, r2, #1	@ 00063378 5100
.org 0x6337a
	adds r1, r1, r3	@ 0006337a c918
.org 0x6337c
	ldrh r1, [r1, #0]	@ 0006337c 0988
.org 0x6337e
	lsls r1, r1, #2	@ 0006337e 8900
.org 0x63380
	adds r1, r1, r4	@ 00063380 0919
.org 0x63382
	movs r3, #113	@ 00063382 7123
.org 0x63384
	adds r3, r3, r6	@ 00063384 9b19
.org 0x63386
	mov r8, r3	@ 00063386 9846
.org 0x63388
	movs r5, #0	@ 00063388 0025
.org 0x6338a
	ldrsb r5, [r3, r5]	@ 0006338a 5d57
.org 0x6338c
	ldr r1, [r1, #0]	@ 0006338c 0968
.org 0x6338e
	lsls r3, r5, #2	@ 0006338e ab00
.org 0x63390
	adds r3, r3, r1	@ 00063390 5b18
.org 0x63392
	ldr r4, [pc, #120]	@ 00063392 1e4c
.org 0x63394
	adds r1, r6, #0	@ 00063394 311c
.org 0x63396
	adds r1, #181	@ 00063396 b531
.org 0x63398
	ldrb r1, [r1, #0]	@ 00063398 0978
.org 0x6339a
	lsls r1, r1, #2	@ 0006339a 8900
.org 0x6339c
	adds r1, r1, r4	@ 0006339c 0919
.org 0x6339e
	ldr r1, [r1, #0]	@ 0006339e 0968
.org 0x633a0
	lsls r2, r2, #2	@ 000633a0 9200
.org 0x633a2
	adds r2, r2, r1	@ 000633a2 5218
.org 0x633a4
	ldr r1, [r2, #0]	@ 000633a4 1168
.org 0x633a6
	adds r1, r1, r5	@ 000633a6 4919
.org 0x633a8
	ldrb r1, [r1, #0]	@ 000633a8 0978
.org 0x633aa
	lsls r2, r1, #1	@ 000633aa 4a00
.org 0x633ac
	adds r2, r2, r1	@ 000633ac 5218
.org 0x633ae
	lsls r2, r2, #3	@ 000633ae d200
.org 0x633b0
	ldr r1, [r3, #0]	@ 000633b0 1968
.org 0x633b2
	adds r1, r1, r2	@ 000633b2 8918
.org 0x633b4
	bl 0x5784	@ 000633b4 a2f7e6f9
.org 0x633b8
	ldrb r0, [r6, #18]	@ 000633b8 b07c
.org 0x633ba
	cmp r0, #0	@ 000633ba 0028
.org 0x633bc
	beq.n 0x633c2	@ 000633bc 01d0
.org 0x633be
	subs r0, #1	@ 000633be 0138
.org 0x633c0
	strb r0, [r6, #18]	@ 000633c0 b074
.org 0x633c2
	ldrb r0, [r6, #19]	@ 000633c2 f07c
.org 0x633c4
	cmp r0, #0	@ 000633c4 0028
.org 0x633c6
	beq.n 0x63418	@ 000633c6 27d0
.org 0x633c8
	mov r1, r8	@ 000633c8 4146
.org 0x633ca
	movs r0, #0	@ 000633ca 0020
.org 0x633cc
	ldrsb r0, [r1, r0]	@ 000633cc 0856
.org 0x633ce
	cmp r0, #2	@ 000633ce 0228
.org 0x633d0
	ble.n 0x63418	@ 000633d0 22dd
.org 0x633d2
	lsls r1, r7, #1	@ 000633d2 7900
.org 0x633d4
	subs r1, #1	@ 000633d4 0139
.org 0x633d6
	lsls r1, r1, #14	@ 000633d6 8903
.org 0x633d8
	ldr r0, [r6, #84]	@ 000633d8 706d
.org 0x633da
	adds r0, r0, r1	@ 000633da 4018
.org 0x633dc
	str r0, [sp, #0]	@ 000633dc 0090
.org 0x633de
	ldr r0, [r6, #88]	@ 000633de b06d
.org 0x633e0
	ldr r3, [pc, #44]	@ 000633e0 0b4b
.org 0x633e2
	adds r0, r0, r3	@ 000633e2 c018
.org 0x633e4
	str r0, [sp, #4]	@ 000633e4 0190
.org 0x633e6
	adds r0, r6, #0	@ 000633e6 301c
.org 0x633e8
	mov r1, sp	@ 000633e8 6946
.org 0x633ea
	movs r2, #0	@ 000633ea 0022
.org 0x633ec
	adds r3, r7, #0	@ 000633ec 3b1c
.org 0x633ee
	bl 0x9b734	@ 000633ee 38f0a1f9
.org 0x633f2
	adds r1, r0, #0	@ 000633f2 011c
.org 0x633f4
	adds r0, r6, #0	@ 000633f4 301c
.org 0x633f6
	adds r0, #196	@ 000633f6 c430
.org 0x633f8
	str r1, [r0, #0]	@ 000633f8 0160
.org 0x633fa
	cmp r1, #0	@ 000633fa 0029
.org 0x633fc
	bne.n 0x63414	@ 000633fc 0ad1
.org 0x633fe
	strb r1, [r6, #13]	@ 000633fe 7173
.org 0x63400
	strb r1, [r6, #14]	@ 00063400 b173
.org 0x63402
	b.n 0x63422	@ 00063402 0ee0
.org 0x63404
	.byte 0x80,0xaf,0x85,0x08	@ 00063404 data
.org 0x63408
	.byte 0xa0,0xb0,0x85,0x08	@ 00063408 data
.org 0x6340c
	.byte 0x98,0xb0,0x85,0x08	@ 0006340c data
.org 0x63410
	.byte 0x00,0xfc,0xff,0xff	@ 00063410 data
.org 0x63414
	movs r0, #0	@ 00063414 0020
.org 0x63416
	strb r0, [r6, #19]	@ 00063416 f074
.org 0x63418
	ldrh r1, [r6, #18]	@ 00063418 718a
.org 0x6341a
	cmp r1, #0	@ 0006341a 0029
.org 0x6341c
	bne.n 0x63424	@ 0006341c 02d1
.org 0x6341e
	movs r0, #3	@ 0006341e 0320
