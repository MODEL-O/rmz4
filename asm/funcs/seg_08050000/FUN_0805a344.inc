@ FUN_0805a344  entry 0x0805a344  size 132
.thumb
.org 0x5a344
FUN_0805a344:
	push {r4, r5, r6, lr}	@ 0005a344 70b5
.org 0x5a346
	adds r4, r0, #0	@ 0005a346 041c
.org 0x5a348
	ldrb r0, [r4, #10]	@ 0005a348 a07a
.org 0x5a34a
	lsrs r5, r0, #4	@ 0005a34a 0509
.org 0x5a34c
	movs r6, #1	@ 0005a34c 0126
.org 0x5a34e
	ands r5, r6	@ 0005a34e 3540
.org 0x5a350
	ldrb r0, [r4, #15]	@ 0005a350 e07b
.org 0x5a352
	cmp r0, #0	@ 0005a352 0028
.org 0x5a354
	bne.n 0x5a3b6	@ 0005a354 2fd1
.org 0x5a356
	adds r0, r4, #0	@ 0005a356 201c
.org 0x5a358
	adds r0, #116	@ 0005a358 7430
.org 0x5a35a
	ldr r1, [pc, #68]	@ 0005a35a 1149
.org 0x5a35c
	bl 0x5784	@ 0005a35c abf712fa
.org 0x5a360
	ldr r1, [pc, #64]	@ 0005a360 1049
.org 0x5a362
	adds r0, r4, #0	@ 0005a362 201c
.org 0x5a364
	bl 0x1cf00	@ 0005a364 c2f7ccfd
.org 0x5a368
	adds r0, r4, #0	@ 0005a368 201c
.org 0x5a36a
	adds r0, #189	@ 0005a36a bd30
.org 0x5a36c
	strb r6, [r0, #0]	@ 0005a36c 0670
.org 0x5a36e
	movs r2, #1	@ 0005a36e 0122
.org 0x5a370
	eors r2, r5	@ 0005a370 6a40
.org 0x5a372
	adds r1, r2, #0	@ 0005a372 111c
.org 0x5a374
	ands r1, r6	@ 0005a374 3140
.org 0x5a376
	subs r0, #113	@ 0005a376 7138
.org 0x5a378
	strb r1, [r0, #0]	@ 0005a378 0170
.org 0x5a37a
	movs r0, #74	@ 0005a37a 4a20
.org 0x5a37c
	adds r0, r0, r4	@ 0005a37c 0019
.org 0x5a37e
	mov ip, r0	@ 0005a37e 8446
.org 0x5a380
	lsls r1, r1, #4	@ 0005a380 0901
.org 0x5a382
	ldrb r3, [r0, #0]	@ 0005a382 0378
.org 0x5a384
	movs r0, #17	@ 0005a384 1120
.org 0x5a386
	negs r0, r0	@ 0005a386 4042
.org 0x5a388
	ands r0, r3	@ 0005a388 1840
.org 0x5a38a
	orrs r0, r1	@ 0005a38a 0843
.org 0x5a38c
	mov r1, ip	@ 0005a38c 6146
.org 0x5a38e
	strb r0, [r1, #0]	@ 0005a38e 0870
.org 0x5a390
	ands r2, r6	@ 0005a390 3240
.org 0x5a392
	cmp r2, #0	@ 0005a392 002a
.org 0x5a394
	beq.n 0x5a3a8	@ 0005a394 08d0
.org 0x5a396
	ldrb r0, [r4, #10]	@ 0005a396 a07a
.org 0x5a398
	movs r1, #16	@ 0005a398 1021
.org 0x5a39a
	orrs r0, r1	@ 0005a39a 0843
.org 0x5a39c
	b.n 0x5a3ae	@ 0005a39c 07e0
.org 0x5a39e
	.byte 0x00	@ 0005a39e data
.org 0x5a39f
	.byte 0x00	@ 0005a39f data
.org 0x5a3a0
	.byte 0xe4,0x88,0x85,0x08	@ 0005a3a0 data
.org 0x5a3a4
	.byte 0x03,0xa3,0x00,0x00	@ 0005a3a4 data
.org 0x5a3a8
	ldrb r1, [r4, #10]	@ 0005a3a8 a17a
.org 0x5a3aa
	movs r0, #239	@ 0005a3aa ef20
.org 0x5a3ac
	ands r0, r1	@ 0005a3ac 0840
.org 0x5a3ae
	strb r0, [r4, #10]	@ 0005a3ae a072
.org 0x5a3b0
	ldrb r0, [r4, #15]	@ 0005a3b0 e07b
.org 0x5a3b2
	adds r0, #1	@ 0005a3b2 0130
.org 0x5a3b4
	strb r0, [r4, #15]	@ 0005a3b4 e073
.org 0x5a3b6
	adds r0, r4, #0	@ 0005a3b6 201c
.org 0x5a3b8
	bl 0x1cff0	@ 0005a3b8 c2f71afe
.org 0x5a3bc
	adds r0, r4, #0	@ 0005a3bc 201c
.org 0x5a3be
	adds r0, #115	@ 0005a3be 7330
.org 0x5a3c0
	ldrb r0, [r0, #0]	@ 0005a3c0 0078
.org 0x5a3c2
	cmp r0, #3	@ 0005a3c2 0328
.org 0x5a3c4
	bne.n 0x5a3cc	@ 0005a3c4 02d1
.org 0x5a3c6
	adds r0, r4, #0	@ 0005a3c6 201c
