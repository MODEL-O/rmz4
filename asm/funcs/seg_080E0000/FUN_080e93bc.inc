@ FUN_080e93bc  entry 0x080e93bc  size 200
.thumb
.org 0xe93bc
FUN_080e93bc:
	push {r4, lr}	@ 000e93bc 10b5
.org 0xe93be
	adds r4, r0, #0	@ 000e93be 041c
.org 0xe93c0
	ldr r1, [r4, #88]	@ 000e93c0 a16d
.org 0xe93c2
	ldr r0, [r4, #120]	@ 000e93c2 a06f
.org 0xe93c4
	cmp r1, r0	@ 000e93c4 8142
.org 0xe93c6
	bge.n 0xe93d4	@ 000e93c6 05da
.org 0xe93c8
	ldr r0, [r4, #96]	@ 000e93c8 206e
.org 0xe93ca
	adds r1, r1, r0	@ 000e93ca 0918
.org 0xe93cc
	str r1, [r4, #88]	@ 000e93cc a165
.org 0xe93ce
	adds r0, #64	@ 000e93ce 4030
.org 0xe93d0
	str r0, [r4, #96]	@ 000e93d0 2066
.org 0xe93d2
	b.n 0xe9434	@ 000e93d2 2fe0
.org 0xe93d4
	str r0, [r4, #88]	@ 000e93d4 a065
.org 0xe93d6
	ldr r0, [r4, #44]	@ 000e93d6 e06a
.org 0xe93d8
	cmp r0, #0	@ 000e93d8 0028
.org 0xe93da
	bne.n 0xe9434	@ 000e93da 2bd1
.org 0xe93dc
	ldrb r0, [r4, #16]	@ 000e93dc 207c
.org 0xe93de
	cmp r0, #0	@ 000e93de 0028
.org 0xe93e0
	bne.n 0xe93fc	@ 000e93e0 0cd1
.org 0xe93e2
	ldrb r0, [r4, #17]	@ 000e93e2 607c
.org 0xe93e4
	cmp r0, #3	@ 000e93e4 0328
.org 0xe93e6
	bhi.n 0xe93f0	@ 000e93e6 03d8
.org 0xe93e8
	ldr r0, [r4, #40]	@ 000e93e8 a06a
.org 0xe93ea
	ldrb r1, [r4, #17]	@ 000e93ea 617c
.org 0xe93ec
	adds r1, #1	@ 000e93ec 0131
.org 0xe93ee
	b.n 0xe9416	@ 000e93ee 12e0
.org 0xe93f0
	ldr r0, [r4, #40]	@ 000e93f0 a06a
.org 0xe93f2
	ldr r1, [pc, #4]	@ 000e93f2 0149
.org 0xe93f4
	b.n 0xe9416	@ 000e93f4 0fe0
.org 0xe93f6
	.byte 0x00	@ 000e93f6 data
.org 0xe93f7
	.byte 0x00	@ 000e93f7 data
.org 0xe93f8
	.byte 0x03,0x01,0x00,0x00	@ 000e93f8 data
.org 0xe93fc
	ldrb r0, [r4, #17]	@ 000e93fc 607c
.org 0xe93fe
	cmp r0, #2	@ 000e93fe 0228
.org 0xe9400
	bhi.n 0xe9412	@ 000e9400 07d8
.org 0xe9402
	ldr r0, [r4, #40]	@ 000e9402 a06a
.org 0xe9404
	ldrb r1, [r4, #17]	@ 000e9404 617c
.org 0xe9406
	adds r1, #1	@ 000e9406 0131
.org 0xe9408
	movs r3, #192	@ 000e9408 c023
.org 0xe940a
	lsls r3, r3, #2	@ 000e940a 9b00
.org 0xe940c
	adds r2, r3, #0	@ 000e940c 1a1c
.org 0xe940e
	orrs r1, r2	@ 000e940e 1143
.org 0xe9410
	b.n 0xe9416	@ 000e9410 01e0
.org 0xe9412
	ldr r0, [r4, #40]	@ 000e9412 a06a
.org 0xe9414
	ldr r1, [pc, #52]	@ 000e9414 0d49
.org 0xe9416
	adds r2, r4, #0	@ 000e9416 221c
.org 0xe9418
	adds r2, #116	@ 000e9418 7432
.org 0xe941a
	ldrh r2, [r2, #0]	@ 000e941a 1288
.org 0xe941c
	bl 0xe8dd8	@ 000e941c fff7dcfc
.org 0xe9420
	str r0, [r4, #44]	@ 000e9420 e062
.org 0xe9422
	ldr r2, [r4, #44]	@ 000e9422 e26a
.org 0xe9424
	cmp r2, #0	@ 000e9424 002a
.org 0xe9426
	beq.n 0xe9434	@ 000e9426 05d0
.org 0xe9428
	adds r0, r4, #0	@ 000e9428 201c
.org 0xe942a
	adds r0, #124	@ 000e942a 7c30
.org 0xe942c
	ldrb r1, [r0, #0]	@ 000e942c 0178
.org 0xe942e
	adds r0, r2, #0	@ 000e942e 101c
.org 0xe9430
	adds r0, #124	@ 000e9430 7c30
.org 0xe9432
	strb r1, [r0, #0]	@ 000e9432 0170
.org 0xe9434
	adds r0, r4, #0	@ 000e9434 201c
.org 0xe9436
	adds r0, #118	@ 000e9436 7630
.org 0xe9438
	ldrh r1, [r0, #0]	@ 000e9438 0188
.org 0xe943a
	movs r2, #128	@ 000e943a 8022
.org 0xe943c
	lsls r2, r2, #1	@ 000e943c 5200
.org 0xe943e
	adds r3, r0, #0	@ 000e943e 031c
.org 0xe9440
	cmp r1, r2	@ 000e9440 9142
.org 0xe9442
	bhi.n 0xe9450	@ 000e9442 05d8
.org 0xe9444
	adds r0, r1, #0	@ 000e9444 081c
.org 0xe9446
	adds r0, #8	@ 000e9446 0830
.org 0xe9448
	strh r0, [r3, #0]	@ 000e9448 1880
.org 0xe944a
	b.n 0xe9452	@ 000e944a 02e0
.org 0xe944c
	.byte 0x04,0x04,0x00,0x00	@ 000e944c data
.org 0xe9450
	strh r2, [r3, #0]	@ 000e9450 1a80
.org 0xe9452
	ldrh r0, [r3, #0]	@ 000e9452 1888
.org 0xe9454
	movs r1, #128	@ 000e9454 8021
.org 0xe9456
	lsls r1, r1, #2	@ 000e9456 8900
.org 0xe9458
	adds r2, r1, #0	@ 000e9458 0a1c
.org 0xe945a
	subs r0, r2, r0	@ 000e945a 101a
.org 0xe945c
	adds r1, r4, #0	@ 000e945c 211c
.org 0xe945e
	adds r1, #80	@ 000e945e 5031
.org 0xe9460
	strh r0, [r1, #0]	@ 000e9460 0880
.org 0xe9462
	ldrh r0, [r3, #0]	@ 000e9462 1888
.org 0xe9464
	subs r2, r2, r0	@ 000e9464 121a
.org 0xe9466
	adds r1, #2	@ 000e9466 0231
.org 0xe9468
	strh r2, [r1, #0]	@ 000e9468 0a80
.org 0xe946a
	ldrb r0, [r4, #18]	@ 000e946a a07c
.org 0xe946c
	cmp r0, #0	@ 000e946c 0028
.org 0xe946e
	bne.n 0xe9482	@ 000e946e 08d1
.org 0xe9470
	ldr r1, [pc, #28]	@ 000e9470 0749
.org 0xe9472
	ldrb r0, [r4, #9]	@ 000e9472 607a
.org 0xe9474
	lsls r0, r0, #2	@ 000e9474 8000
.org 0xe9476
	adds r0, r0, r1	@ 000e9476 4018
.org 0xe9478
	movs r1, #2	@ 000e9478 0221
.org 0xe947a
	str r1, [r4, #12]	@ 000e947a e160
.org 0xe947c
	ldr r0, [r0, #0]	@ 000e947c 0068
.org 0xe947e
	ldr r0, [r0, #8]	@ 000e947e 8068
.org 0xe9480
	str r0, [r4, #20]	@ 000e9480 6061
.org 0xe9482
	ldrb r0, [r4, #18]	@ 000e9482 a07c
