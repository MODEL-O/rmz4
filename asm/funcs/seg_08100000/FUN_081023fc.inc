@ FUN_081023fc  entry 0x081023fc  size 220
.thumb
.org 0x1023fc
FUN_081023fc:
	push {r4, lr}	@ 001023fc 10b5
.org 0x1023fe
	adds r4, r0, #0	@ 001023fe 041c
.org 0x102400
	ldrb r0, [r4, #14]	@ 00102400 a07b
.org 0x102402
	cmp r0, #0	@ 00102402 0028
.org 0x102404
	bne.n 0x102434	@ 00102404 16d1
.org 0x102406
	adds r0, r4, #0	@ 00102406 201c
.org 0x102408
	adds r0, #192	@ 00102408 c030
.org 0x10240a
	ldrh r1, [r0, #0]	@ 0010240a 0188
.org 0x10240c
	adds r0, r4, #0	@ 0010240c 201c
.org 0x10240e
	bl 0x1cf00	@ 0010240e 1af777fd
.org 0x102412
	ldr r2, [pc, #112]	@ 00102412 1c4a
.org 0x102414
	ldr r1, [r2, #0]	@ 00102414 1168
.org 0x102416
	ldr r0, [pc, #112]	@ 00102416 1c48
.org 0x102418
	muls r0, r1	@ 00102418 4843
.org 0x10241a
	ldr r1, [pc, #112]	@ 0010241a 1c49
.org 0x10241c
	adds r0, r0, r1	@ 0010241c 4018
.org 0x10241e
	lsls r0, r0, #1	@ 0010241e 4000
.org 0x102420
	lsrs r1, r0, #1	@ 00102420 4108
.org 0x102422
	str r1, [r2, #0]	@ 00102422 1160
.org 0x102424
	lsrs r0, r0, #17	@ 00102424 400c
.org 0x102426
	movs r1, #63	@ 00102426 3f21
.org 0x102428
	ands r0, r1	@ 00102428 0840
.org 0x10242a
	adds r0, #28	@ 0010242a 1c30
.org 0x10242c
	strb r0, [r4, #18]	@ 0010242c a074
.org 0x10242e
	ldrb r0, [r4, #14]	@ 0010242e a07b
.org 0x102430
	adds r0, #1	@ 00102430 0130
.org 0x102432
	strb r0, [r4, #14]	@ 00102432 a073
.org 0x102434
	ldr r0, [r4, #84]	@ 00102434 606d
.org 0x102436
	ldr r1, [r4, #92]	@ 00102436 e16d
.org 0x102438
	adds r0, r0, r1	@ 00102438 4018
.org 0x10243a
	str r0, [r4, #84]	@ 0010243a 6065
.org 0x10243c
	ldr r3, [pc, #80]	@ 0010243c 144b
.org 0x10243e
	ldrb r2, [r4, #10]	@ 0010243e a27a
.org 0x102440
	movs r1, #16	@ 00102440 1021
.org 0x102442
	ands r1, r2	@ 00102442 1140
.org 0x102444
	lsls r1, r1, #24	@ 00102444 0906
.org 0x102446
	lsrs r1, r1, #24	@ 00102446 090e
.org 0x102448
	negs r1, r1	@ 00102448 4942
.org 0x10244a
	asrs r1, r1, #31	@ 0010244a c917
.org 0x10244c
	movs r2, #4	@ 0010244c 0422
.org 0x10244e
	ands r1, r2	@ 0010244e 1140
.org 0x102450
	adds r1, r1, r3	@ 00102450 c918
.org 0x102452
	ldr r1, [r1, #0]	@ 00102452 0968
.org 0x102454
	lsls r1, r1, #8	@ 00102454 0902
.org 0x102456
	adds r0, r0, r1	@ 00102456 4018
.org 0x102458
	ldr r1, [r4, #88]	@ 00102458 a16d
.org 0x10245a
	ldr r2, [pc, #56]	@ 0010245a 0e4a
.org 0x10245c
	adds r1, r1, r2	@ 0010245c 8918
.org 0x10245e
	bl 0x7c7c	@ 0010245e 05f70dfc
.org 0x102462
	lsls r0, r0, #16	@ 00102462 0004
.org 0x102464
	cmp r0, #0	@ 00102464 0028
.org 0x102466
	bne.n 0x10249e	@ 00102466 1ad1
.org 0x102468
	adds r0, r4, #0	@ 00102468 201c
.org 0x10246a
	adds r0, #184	@ 0010246a b830
.org 0x10246c
	ldrb r0, [r0, #0]	@ 0010246c 0078
.org 0x10246e
	lsls r3, r0, #8	@ 0010246e 0302
.org 0x102470
	adds r0, r4, #0	@ 00102470 201c
.org 0x102472
	adds r0, #180	@ 00102472 b430
.org 0x102474
	ldr r2, [r0, #0]	@ 00102474 0268
.org 0x102476
	ldr r0, [r4, #84]	@ 00102476 606d
.org 0x102478
	subs r1, r2, r0	@ 00102478 111a
.org 0x10247a
	cmp r1, #0	@ 0010247a 0029
.org 0x10247c
	blt.n 0x102498	@ 0010247c 0cdb
.org 0x10247e
	cmp r1, r3	@ 0010247e 9942
.org 0x102480
	bgt.n 0x10249e	@ 00102480 0ddc
.org 0x102482
	b.n 0x1024b0	@ 00102482 15e0
.org 0x102484
	.byte 0x38,0xdc,0x02,0x02	@ 00102484 data
.org 0x102488
	.byte 0xfd,0x43,0x03,0x00	@ 00102488 data
.org 0x10248c
	.byte 0xc3,0x9e,0x26,0x00	@ 0010248c data
.org 0x102490
	.byte 0xb0,0xbb,0x86,0x08	@ 00102490 data
.org 0x102494
	.byte 0x00,0xf8,0xff,0xff	@ 00102494 data
.org 0x102498
	subs r0, r0, r2	@ 00102498 801a
.org 0x10249a
	cmp r0, r3	@ 0010249a 9842
.org 0x10249c
	ble.n 0x1024b0	@ 0010249c 08dd
.org 0x10249e
	movs r1, #0	@ 0010249e 0021
.org 0x1024a0
	movs r0, #2	@ 001024a0 0220
.org 0x1024a2
	strb r0, [r4, #13]	@ 001024a2 6073
.org 0x1024a4
	strb r1, [r4, #14]	@ 001024a4 a173
.org 0x1024a6
	ldr r0, [r4, #84]	@ 001024a6 606d
.org 0x1024a8
	ldr r1, [r4, #92]	@ 001024a8 e16d
.org 0x1024aa
	subs r0, r0, r1	@ 001024aa 401a
.org 0x1024ac
	str r0, [r4, #84]	@ 001024ac 6065
.org 0x1024ae
	b.n 0x1024f4	@ 001024ae 21e0
.org 0x1024b0
	ldrb r0, [r4, #18]	@ 001024b0 a07c
.org 0x1024b2
	subs r0, #1	@ 001024b2 0138
.org 0x1024b4
	strb r0, [r4, #18]	@ 001024b4 a074
.org 0x1024b6
	lsls r0, r0, #24	@ 001024b6 0006
.org 0x1024b8
	lsrs r0, r0, #24	@ 001024b8 000e
.org 0x1024ba
	cmp r0, #255	@ 001024ba ff28
.org 0x1024bc
	bne.n 0x1024f4	@ 001024bc 1ad1
.org 0x1024be
	ldr r2, [pc, #32]	@ 001024be 084a
.org 0x1024c0
	ldr r1, [r2, #0]	@ 001024c0 1168
.org 0x1024c2
	ldr r0, [pc, #32]	@ 001024c2 0848
.org 0x1024c4
	muls r0, r1	@ 001024c4 4843
.org 0x1024c6
	ldr r1, [pc, #32]	@ 001024c6 0849
.org 0x1024c8
	adds r0, r0, r1	@ 001024c8 4018
.org 0x1024ca
	lsls r0, r0, #1	@ 001024ca 4000
.org 0x1024cc
	lsrs r1, r0, #1	@ 001024cc 4108
.org 0x1024ce
	str r1, [r2, #0]	@ 001024ce 1160
.org 0x1024d0
	lsrs r0, r0, #17	@ 001024d0 400c
.org 0x1024d2
	movs r1, #1	@ 001024d2 0121
.org 0x1024d4
	ands r0, r1	@ 001024d4 0840
.org 0x1024d6
	cmp r0, #0	@ 001024d6 0028
