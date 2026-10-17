@ FUN_0810b3fc  entry 0x0810b3fc  size 202
.thumb
.org 0x10b3fc
FUN_0810b3fc:
	push {r4, r5, lr}	@ 0010b3fc 30b5
.org 0x10b3fe
	adds r4, r0, #0	@ 0010b3fe 041c
.org 0x10b400
	ldr r5, [r4, #40]	@ 0010b400 a56a
.org 0x10b402
	ldrb r0, [r5, #3]	@ 0010b402 e878
.org 0x10b404
	cmp r0, #1	@ 0010b404 0128
.org 0x10b406
	bhi.n 0x10b424	@ 0010b406 0dd8
.org 0x10b408
	cmp r0, #1	@ 0010b408 0128
.org 0x10b40a
	bne.n 0x10b42e	@ 0010b40a 10d1
.org 0x10b40c
	movs r1, #221	@ 0010b40c dd21
.org 0x10b40e
	lsls r1, r1, #4	@ 0010b40e 0901
.org 0x10b410
	adds r0, r5, r1	@ 0010b410 6818
.org 0x10b412
	ldrb r0, [r0, #0]	@ 0010b412 0078
.org 0x10b414
	ldrb r3, [r4, #17]	@ 0010b414 637c
.org 0x10b416
	cmp r0, r3	@ 0010b416 9842
.org 0x10b418
	beq.n 0x10b42e	@ 0010b418 09d0
.org 0x10b41a
	adds r1, #39	@ 0010b41a 2731
.org 0x10b41c
	adds r0, r5, r1	@ 0010b41c 6818
.org 0x10b41e
	ldrb r0, [r0, #0]	@ 0010b41e 0078
.org 0x10b420
	cmp r0, #2	@ 0010b420 0228
.org 0x10b422
	bls.n 0x10b42e	@ 0010b422 04d9
.org 0x10b424
	ldrb r1, [r4, #10]	@ 0010b424 a17a
.org 0x10b426
	movs r0, #254	@ 0010b426 fe20
.org 0x10b428
	ands r0, r1	@ 0010b428 0840
.org 0x10b42a
	strb r0, [r4, #10]	@ 0010b42a a072
.org 0x10b42c
	b.n 0x10b4ca	@ 0010b42c 4de0
.org 0x10b42e
	ldrb r0, [r4, #10]	@ 0010b42e a07a
.org 0x10b430
	movs r1, #1	@ 0010b430 0121
.org 0x10b432
	orrs r1, r0	@ 0010b432 0143
.org 0x10b434
	strb r1, [r4, #10]	@ 0010b434 a172
.org 0x10b436
	ldrb r0, [r4, #13]	@ 0010b436 607b
.org 0x10b438
	cmp r0, #0	@ 0010b438 0028
.org 0x10b43a
	beq.n 0x10b464	@ 0010b43a 13d0
.org 0x10b43c
	movs r3, #221	@ 0010b43c dd23
.org 0x10b43e
	lsls r3, r3, #4	@ 0010b43e 1b01
.org 0x10b440
	adds r0, r5, r3	@ 0010b440 e818
.org 0x10b442
	ldrb r0, [r0, #0]	@ 0010b442 0078
.org 0x10b444
	ldrb r1, [r4, #17]	@ 0010b444 617c
.org 0x10b446
	cmp r0, r1	@ 0010b446 8842
.org 0x10b448
	bne.n 0x10b488	@ 0010b448 1ed1
.org 0x10b44a
	ldr r1, [pc, #20]	@ 0010b44a 0549
.org 0x10b44c
	ldrb r0, [r4, #17]	@ 0010b44c 607c
.org 0x10b44e
	lsls r0, r0, #2	@ 0010b44e 8000
.org 0x10b450
	adds r0, r0, r1	@ 0010b450 4018
.org 0x10b452
	ldrh r1, [r0, #0]	@ 0010b452 0188
.org 0x10b454
	adds r0, r4, #0	@ 0010b454 201c
.org 0x10b456
	bl 0x1cf00	@ 0010b456 11f753fd
.org 0x10b45a
	movs r0, #0	@ 0010b45a 0020
.org 0x10b45c
	b.n 0x10b486	@ 0010b45c 13e0
.org 0x10b45e
	.byte 0x00	@ 0010b45e data
.org 0x10b45f
	.byte 0x00	@ 0010b45f data
.org 0x10b460
	.byte 0x30,0xcc,0x86,0x08	@ 0010b460 data
.org 0x10b464
	movs r3, #221	@ 0010b464 dd23
.org 0x10b466
	lsls r3, r3, #4	@ 0010b466 1b01
.org 0x10b468
	adds r0, r5, r3	@ 0010b468 e818
.org 0x10b46a
	ldrb r0, [r0, #0]	@ 0010b46a 0078
.org 0x10b46c
	ldrb r1, [r4, #17]	@ 0010b46c 617c
.org 0x10b46e
	cmp r0, r1	@ 0010b46e 8842
.org 0x10b470
	beq.n 0x10b488	@ 0010b470 0ad0
.org 0x10b472
	ldr r1, [pc, #32]	@ 0010b472 0849
.org 0x10b474
	ldrb r0, [r4, #17]	@ 0010b474 607c
.org 0x10b476
	lsls r0, r0, #2	@ 0010b476 8000
.org 0x10b478
	adds r1, #2	@ 0010b478 0231
.org 0x10b47a
	adds r0, r0, r1	@ 0010b47a 4018
.org 0x10b47c
	ldrh r1, [r0, #0]	@ 0010b47c 0188
.org 0x10b47e
	adds r0, r4, #0	@ 0010b47e 201c
.org 0x10b480
	bl 0x1cf00	@ 0010b480 11f73efd
.org 0x10b484
	movs r0, #1	@ 0010b484 0120
.org 0x10b486
	strb r0, [r4, #13]	@ 0010b486 6073
.org 0x10b488
	ldrb r0, [r4, #17]	@ 0010b488 607c
.org 0x10b48a
	cmp r0, #3	@ 0010b48a 0328
.org 0x10b48c
	bne.n 0x10b498	@ 0010b48c 04d1
.org 0x10b48e
	movs r0, #224	@ 0010b48e e020
.org 0x10b490
	lsls r0, r0, #7	@ 0010b490 c001
.org 0x10b492
	b.n 0x10b49c	@ 0010b492 03e0
.org 0x10b494
	.byte 0x30,0xcc,0x86,0x08	@ 0010b494 data
.org 0x10b498
	movs r0, #176	@ 0010b498 b020
.org 0x10b49a
	lsls r0, r0, #7	@ 0010b49a c001
.org 0x10b49c
	str r0, [r4, #84]	@ 0010b49c 6065
.org 0x10b49e
	ldrb r0, [r4, #17]	@ 0010b49e 607c
.org 0x10b4a0
	lsls r0, r0, #5	@ 0010b4a0 4001
.org 0x10b4a2
	adds r0, #8	@ 0010b4a2 0830
.org 0x10b4a4
	lsls r0, r0, #8	@ 0010b4a4 0002
.org 0x10b4a6
	str r0, [r4, #88]	@ 0010b4a6 a065
.org 0x10b4a8
	ldr r2, [r4, #84]	@ 0010b4a8 626d
.org 0x10b4aa
	movs r3, #128	@ 0010b4aa 8023
.org 0x10b4ac
	lsls r3, r3, #9	@ 0010b4ac 5b02
.org 0x10b4ae
	adds r2, r2, r3	@ 0010b4ae d218
.org 0x10b4b0
	str r2, [r4, #84]	@ 0010b4b0 6265
.org 0x10b4b2
	ldrb r1, [r4, #17]	@ 0010b4b2 617c
.org 0x10b4b4
	lsls r1, r1, #1	@ 0010b4b4 4900
.org 0x10b4b6
	ldr r3, [pc, #24]	@ 0010b4b6 064b
.org 0x10b4b8
	adds r0, r5, r3	@ 0010b4b8 e818
.org 0x10b4ba
	adds r0, r0, r1	@ 0010b4ba 4018
.org 0x10b4bc
	movs r1, #0	@ 0010b4bc 0021
.org 0x10b4be
	ldrsh r0, [r0, r1]	@ 0010b4be 405e
.org 0x10b4c0
	subs r2, r2, r0	@ 0010b4c0 121a
.org 0x10b4c2
	str r2, [r4, #84]	@ 0010b4c2 6265
.org 0x10b4c4
	adds r0, r4, #0	@ 0010b4c4 201c
