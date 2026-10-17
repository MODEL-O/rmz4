@ FUN_0805a3ec  entry 0x0805a3ec  size 142
.thumb
.org 0x5a3ec
FUN_0805a3ec:
	push {r4, r5, lr}	@ 0005a3ec 30b5
.org 0x5a3ee
	adds r4, r0, #0	@ 0005a3ee 041c
.org 0x5a3f0
	adds r1, r4, #0	@ 0005a3f0 211c
.org 0x5a3f2
	adds r1, #207	@ 0005a3f2 cf31
.org 0x5a3f4
	ldrb r0, [r1, #0]	@ 0005a3f4 0878
.org 0x5a3f6
	cmp r0, #255	@ 0005a3f6 ff28
.org 0x5a3f8
	beq.n 0x5a462	@ 0005a3f8 33d0
.org 0x5a3fa
	adds r5, r0, #0	@ 0005a3fa 051c
.org 0x5a3fc
	movs r2, #1	@ 0005a3fc 0122
.org 0x5a3fe
	adds r1, r5, #0	@ 0005a3fe 291c
.org 0x5a400
	ands r1, r2	@ 0005a400 1140
.org 0x5a402
	adds r0, r4, #0	@ 0005a402 201c
.org 0x5a404
	adds r0, #76	@ 0005a404 4c30
.org 0x5a406
	strb r1, [r0, #0]	@ 0005a406 0170
.org 0x5a408
	movs r0, #74	@ 0005a408 4a20
.org 0x5a40a
	adds r0, r0, r4	@ 0005a40a 0019
.org 0x5a40c
	mov ip, r0	@ 0005a40c 8446
.org 0x5a40e
	lsls r1, r1, #4	@ 0005a40e 0901
.org 0x5a410
	ldrb r3, [r0, #0]	@ 0005a410 0378
.org 0x5a412
	movs r0, #17	@ 0005a412 1120
.org 0x5a414
	negs r0, r0	@ 0005a414 4042
.org 0x5a416
	ands r0, r3	@ 0005a416 1840
.org 0x5a418
	orrs r0, r1	@ 0005a418 0843
.org 0x5a41a
	mov r1, ip	@ 0005a41a 6146
.org 0x5a41c
	strb r0, [r1, #0]	@ 0005a41c 0870
.org 0x5a41e
	ands r2, r5	@ 0005a41e 2a40
.org 0x5a420
	cmp r2, #0	@ 0005a420 002a
.org 0x5a422
	beq.n 0x5a42c	@ 0005a422 03d0
.org 0x5a424
	ldrb r0, [r4, #10]	@ 0005a424 a07a
.org 0x5a426
	movs r1, #16	@ 0005a426 1021
.org 0x5a428
	orrs r0, r1	@ 0005a428 0843
.org 0x5a42a
	b.n 0x5a432	@ 0005a42a 02e0
.org 0x5a42c
	ldrb r1, [r4, #10]	@ 0005a42c a17a
.org 0x5a42e
	movs r0, #239	@ 0005a42e ef20
.org 0x5a430
	ands r0, r1	@ 0005a430 0840
.org 0x5a432
	strb r0, [r4, #10]	@ 0005a432 a072
.org 0x5a434
	adds r0, r4, #0	@ 0005a434 201c
.org 0x5a436
	bl 0x5c3a8	@ 0005a436 01f0b7ff
.org 0x5a43a
	lsls r1, r5, #1	@ 0005a43a 6900
.org 0x5a43c
	subs r1, #1	@ 0005a43c 0139
.org 0x5a43e
	lsls r2, r1, #4	@ 0005a43e 0a01
.org 0x5a440
	subs r2, r2, r1	@ 0005a440 521a
.org 0x5a442
	lsls r2, r2, #12	@ 0005a442 1203
.org 0x5a444
	movs r1, #240	@ 0005a444 f021
.org 0x5a446
	lsls r1, r1, #7	@ 0005a446 c901
.org 0x5a448
	subs r1, r1, r2	@ 0005a448 891a
.org 0x5a44a
	adds r0, r0, r1	@ 0005a44a 4018
.org 0x5a44c
	str r0, [r4, #84]	@ 0005a44c 6065
.org 0x5a44e
	adds r0, r4, #0	@ 0005a44e 201c
.org 0x5a450
	adds r0, #180	@ 0005a450 b430
.org 0x5a452
	ldr r0, [r0, #0]	@ 0005a452 0068
.org 0x5a454
	ldr r1, [pc, #36]	@ 0005a454 0949
.org 0x5a456
	adds r0, r0, r1	@ 0005a456 4018
.org 0x5a458
	str r0, [r4, #88]	@ 0005a458 a065
.org 0x5a45a
	adds r1, r4, #0	@ 0005a45a 211c
.org 0x5a45c
	adds r1, #207	@ 0005a45c cf31
.org 0x5a45e
	movs r0, #255	@ 0005a45e ff20
.org 0x5a460
	strb r0, [r1, #0]	@ 0005a460 0870
.org 0x5a462
	movs r1, #0	@ 0005a462 0021
.org 0x5a464
	movs r0, #1	@ 0005a464 0120
.org 0x5a466
	strb r0, [r4, #14]	@ 0005a466 a073
.org 0x5a468
	strb r1, [r4, #15]	@ 0005a468 e173
.org 0x5a46a
	ldr r0, [pc, #20]	@ 0005a46a 0548
.org 0x5a46c
	ldr r1, [r0, #4]	@ 0005a46c 4168
.org 0x5a46e
	adds r0, r4, #0	@ 0005a46e 201c
.org 0x5a470
	bl 0x128f80	@ 0005a470 cef086fd
.org 0x5a474
	pop {r4, r5}	@ 0005a474 30bc
.org 0x5a476
	pop {r0}	@ 0005a476 01bc
.org 0x5a478
	bx r0	@ 0005a478 0047
