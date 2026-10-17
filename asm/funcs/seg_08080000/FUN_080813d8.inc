@ FUN_080813d8  entry 0x080813d8  size 256
.thumb
.org 0x813d8
FUN_080813d8:
	push {r4, r5, r6, lr}	@ 000813d8 70b5
.org 0x813da
	adds r5, r0, #0	@ 000813da 051c
.org 0x813dc
	adds r4, r5, #0	@ 000813dc 2c1c
.org 0x813de
	adds r4, #140	@ 000813de 8c34
.org 0x813e0
	ldr r0, [r4, #0]	@ 000813e0 2068
.org 0x813e2
	movs r6, #1	@ 000813e2 0126
.org 0x813e4
	ands r0, r6	@ 000813e4 3040
.org 0x813e6
	cmp r0, #0	@ 000813e6 0028
.org 0x813e8
	beq.n 0x813f0	@ 000813e8 02d0
.org 0x813ea
	movs r0, #54	@ 000813ea 3620
.org 0x813ec
	bl 0x6984	@ 000813ec 85f7cafa
.org 0x813f0
	ldr r1, [r4, #0]	@ 000813f0 2168
.org 0x813f2
	movs r0, #128	@ 000813f2 8020
.org 0x813f4
	lsls r0, r0, #2	@ 000813f4 8000
.org 0x813f6
	ands r0, r1	@ 000813f6 0840
.org 0x813f8
	cmp r0, #0	@ 000813f8 0028
.org 0x813fa
	beq.n 0x81432	@ 000813fa 1ad0
.org 0x813fc
	ldr r1, [pc, #32]	@ 000813fc 0849
.org 0x813fe
	ldrb r0, [r5, #9]	@ 000813fe 687a
.org 0x81400
	lsls r0, r0, #2	@ 00081400 8000
.org 0x81402
	adds r0, r0, r1	@ 00081402 4018
.org 0x81404
	movs r1, #2	@ 00081404 0221
.org 0x81406
	str r1, [r5, #12]	@ 00081406 e960
.org 0x81408
	ldr r0, [r0, #0]	@ 00081408 0068
.org 0x8140a
	ldr r0, [r0, #8]	@ 0008140a 8068
.org 0x8140c
	str r0, [r5, #20]	@ 0008140c 6861
.org 0x8140e
	adds r0, r5, #0	@ 0008140e 281c
.org 0x81410
	adds r0, #182	@ 00081410 b630
.org 0x81412
	ldrb r0, [r0, #0]	@ 00081412 0078
.org 0x81414
	cmp r0, #0	@ 00081414 0028
.org 0x81416
	beq.n 0x81424	@ 00081416 05d0
.org 0x81418
	movs r0, #0	@ 00081418 0020
.org 0x8141a
	strb r6, [r5, #13]	@ 0008141a 6e73
.org 0x8141c
	b.n 0x81426	@ 0008141c 03e0
.org 0x8141e
	.byte 0x00	@ 0008141e data
.org 0x8141f
	.byte 0x00	@ 0008141f data
.org 0x81420
	.byte 0x40,0xdb,0x85,0x08	@ 00081420 data
.org 0x81424
	strb r0, [r5, #13]	@ 00081424 6873
.org 0x81426
	strb r0, [r5, #14]	@ 00081426 a873
.org 0x81428
	strb r0, [r5, #15]	@ 00081428 e873
.org 0x8142a
	adds r0, r5, #0	@ 0008142a 281c
.org 0x8142c
	bl 0x81aac	@ 0008142c 00f03efb
.org 0x81430
	b.n 0x814e8	@ 00081430 5ae0
.org 0x81432
	ands r1, r6	@ 00081432 3140
.org 0x81434
	cmp r1, #0	@ 00081434 0029
.org 0x81436
	beq.n 0x81454	@ 00081436 0dd0
.org 0x81438
	ldr r0, [r5, #44]	@ 00081438 e86a
.org 0x8143a
	cmp r0, #0	@ 0008143a 0028
.org 0x8143c
	bne.n 0x8145a	@ 0008143c 0dd1
.org 0x8143e
	ldr r2, [pc, #124]	@ 0008143e 1f4a
.org 0x81440
	movs r0, #0	@ 00081440 0020
.org 0x81442
	adds r1, r5, #0	@ 00081442 291c
.org 0x81444
	bl 0x2adac	@ 00081444 a9f7b2fc
.org 0x81448
	str r0, [r5, #44]	@ 00081448 e862
.org 0x8144a
	cmp r0, #0	@ 0008144a 0028
.org 0x8144c
	beq.n 0x814d8	@ 0008144c 44d0
.org 0x8144e
	adds r0, r5, #0	@ 0008144e 281c
.org 0x81450
	adds r0, #181	@ 00081450 b530
.org 0x81452
	strb r6, [r0, #0]	@ 00081452 0670
.org 0x81454
	ldr r0, [r5, #44]	@ 00081454 e86a
.org 0x81456
	cmp r0, #0	@ 00081456 0028
.org 0x81458
	beq.n 0x814d8	@ 00081458 3ed0
.org 0x8145a
	ldr r0, [r5, #44]	@ 0008145a e86a
.org 0x8145c
	bl 0x2b3e4	@ 0008145c a9f7c2ff
.org 0x81460
	cmp r0, #0	@ 00081460 0028
.org 0x81462
	beq.n 0x8146e	@ 00081462 04d0
.org 0x81464
	movs r0, #0	@ 00081464 0020
.org 0x81466
	str r0, [r5, #44]	@ 00081466 e862
.org 0x81468
	adds r1, r5, #0	@ 00081468 291c
.org 0x8146a
	adds r1, #181	@ 0008146a b531
.org 0x8146c
	strb r0, [r1, #0]	@ 0008146c 0870
.org 0x8146e
	ldr r0, [r5, #44]	@ 0008146e e86a
.org 0x81470
	cmp r0, #0	@ 00081470 0028
.org 0x81472
	beq.n 0x814d8	@ 00081472 31d0
.org 0x81474
	adds r0, r5, #0	@ 00081474 281c
.org 0x81476
	bl 0x1d1f4	@ 00081476 9bf7bdfe
.org 0x8147a
	ldrb r0, [r5, #13]	@ 0008147a 687b
.org 0x8147c
	cmp r0, #0	@ 0008147c 0028
.org 0x8147e
	beq.n 0x814c8	@ 0008147e 23d0
.org 0x81480
	adds r0, r5, #0	@ 00081480 281c
.org 0x81482
	adds r0, #116	@ 00081482 7430
.org 0x81484
	ldr r4, [pc, #56]	@ 00081484 0e4c
.org 0x81486
	adds r1, r5, #0	@ 00081486 291c
.org 0x81488
	adds r1, #181	@ 00081488 b531
.org 0x8148a
	ldrb r3, [r1, #0]	@ 0008148a 0b78
.org 0x8148c
	lsls r3, r3, #2	@ 0008148c 9b00
.org 0x8148e
	ldrb r1, [r5, #30]	@ 0008148e a97f
.org 0x81490
	lsls r1, r1, #8	@ 00081490 0902
.org 0x81492
	adds r2, r5, #0	@ 00081492 2a1c
.org 0x81494
	adds r2, #112	@ 00081494 7032
.org 0x81496
	ldrb r2, [r2, #0]	@ 00081496 1278
.org 0x81498
	orrs r1, r2	@ 00081498 1143
.org 0x8149a
	ldr r2, [pc, #40]	@ 0008149a 0a4a
.org 0x8149c
	adds r1, r1, r2	@ 0008149c 8918
.org 0x8149e
	lsls r1, r1, #3	@ 0008149e c900
.org 0x814a0
	adds r3, r3, r1	@ 000814a0 5b18
.org 0x814a2
	adds r3, r3, r4	@ 000814a2 1b19
.org 0x814a4
	adds r1, r5, #0	@ 000814a4 291c
.org 0x814a6
	adds r1, #113	@ 000814a6 7131
.org 0x814a8
	ldrb r1, [r1, #0]	@ 000814a8 0978
.org 0x814aa
	lsls r1, r1, #24	@ 000814aa 0906
.org 0x814ac
	asrs r1, r1, #24	@ 000814ac 0916
.org 0x814ae
	ldr r2, [r3, #0]	@ 000814ae 1a68
.org 0x814b0
	lsls r1, r1, #2	@ 000814b0 8900
.org 0x814b2
	adds r1, r1, r2	@ 000814b2 8918
.org 0x814b4
	ldr r1, [r1, #0]	@ 000814b4 0968
.org 0x814b6
	bl 0x5784	@ 000814b6 84f765f9
.org 0x814ba
	b.n 0x814e8	@ 000814ba 15e0
.org 0x814bc
	.byte 0x6c,0xe7,0x85,0x08	@ 000814bc data
.org 0x814c0
	.byte 0x1c,0xe7,0x85,0x08	@ 000814c0 data
.org 0x814c4
	.byte 0x00,0xe9,0xff,0xff	@ 000814c4 data
.org 0x814c8
	adds r0, r5, #0	@ 000814c8 281c
.org 0x814ca
	adds r0, #116	@ 000814ca 7430
.org 0x814cc
	ldr r1, [pc, #4]	@ 000814cc 0149
.org 0x814ce
	bl 0x5784	@ 000814ce 84f759f9
.org 0x814d2
	b.n 0x814e8	@ 000814d2 09e0
.org 0x814d4
	.byte 0xec,0xe4,0x85,0x08	@ 000814d4 data
