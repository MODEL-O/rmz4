@ FUN_08078484  entry 0x08078484  size 192
.thumb
.org 0x78484
FUN_08078484:
	push {r4, r5, lr}	@ 00078484 30b5
.org 0x78486
	adds r4, r0, #0	@ 00078486 041c
.org 0x78488
	ldrb r3, [r4, #15]	@ 00078488 e37b
.org 0x7848a
	cmp r3, #0	@ 0007848a 002b
.org 0x7848c
	bne.n 0x784e0	@ 0007848c 28d1
.org 0x7848e
	adds r5, r4, #0	@ 0007848e 251c
.org 0x78490
	adds r5, #208	@ 00078490 d035
.org 0x78492
	ldr r2, [r5, #0]	@ 00078492 2a68
.org 0x78494
	cmp r2, #0	@ 00078494 002a
.org 0x78496
	beq.n 0x784ce	@ 00078496 1ad0
.org 0x78498
	ldrb r1, [r2, #10]	@ 00078498 917a
.org 0x7849a
	movs r0, #254	@ 0007849a fe20
.org 0x7849c
	ands r0, r1	@ 0007849c 0840
.org 0x7849e
	movs r1, #253	@ 0007849e fd21
.org 0x784a0
	ands r0, r1	@ 000784a0 0840
.org 0x784a2
	strb r0, [r2, #10]	@ 000784a2 9072
.org 0x784a4
	adds r0, r2, #0	@ 000784a4 101c
.org 0x784a6
	adds r0, #140	@ 000784a6 8c30
.org 0x784a8
	str r3, [r0, #0]	@ 000784a8 0360
.org 0x784aa
	adds r0, #4	@ 000784aa 0430
.org 0x784ac
	str r3, [r0, #0]	@ 000784ac 0360
.org 0x784ae
	adds r0, #4	@ 000784ae 0430
.org 0x784b0
	strb r3, [r0, #0]	@ 000784b0 0370
.org 0x784b2
	ldrb r1, [r2, #10]	@ 000784b2 917a
.org 0x784b4
	movs r0, #251	@ 000784b4 fb20
.org 0x784b6
	ands r0, r1	@ 000784b6 0840
.org 0x784b8
	strb r0, [r2, #10]	@ 000784b8 9072
.org 0x784ba
	ldr r1, [pc, #136]	@ 000784ba 2249
.org 0x784bc
	ldrb r0, [r2, #9]	@ 000784bc 507a
.org 0x784be
	lsls r0, r0, #2	@ 000784be 8000
.org 0x784c0
	adds r0, r0, r1	@ 000784c0 4018
.org 0x784c2
	movs r1, #3	@ 000784c2 0321
.org 0x784c4
	str r1, [r2, #12]	@ 000784c4 d160
.org 0x784c6
	ldr r0, [r0, #0]	@ 000784c6 0068
.org 0x784c8
	ldr r0, [r0, #12]	@ 000784c8 c068
.org 0x784ca
	str r0, [r2, #20]	@ 000784ca 5061
.org 0x784cc
	str r3, [r5, #0]	@ 000784cc 2b60
.org 0x784ce
	adds r0, r4, #0	@ 000784ce 201c
.org 0x784d0
	movs r1, #3	@ 000784d0 0321
.org 0x784d2
	bl 0x78fdc	@ 000784d2 00f083fd
.org 0x784d6
	movs r0, #32	@ 000784d6 2020
.org 0x784d8
	strb r0, [r4, #18]	@ 000784d8 a074
.org 0x784da
	ldrb r0, [r4, #15]	@ 000784da e07b
.org 0x784dc
	adds r0, #1	@ 000784dc 0130
.org 0x784de
	strb r0, [r4, #15]	@ 000784de e073
.org 0x784e0
	adds r0, r4, #0	@ 000784e0 201c
.org 0x784e2
	bl 0x1cff0	@ 000784e2 a4f785fd
.org 0x784e6
	adds r0, r4, #0	@ 000784e6 201c
.org 0x784e8
	adds r0, #116	@ 000784e8 7430
.org 0x784ea
	ldr r3, [pc, #92]	@ 000784ea 174b
.org 0x784ec
	ldr r2, [pc, #92]	@ 000784ec 174a
.org 0x784ee
	adds r1, r4, #0	@ 000784ee 211c
.org 0x784f0
	adds r1, #196	@ 000784f0 c431
.org 0x784f2
	ldrb r1, [r1, #0]	@ 000784f2 0978
.org 0x784f4
	lsls r1, r1, #1	@ 000784f4 4900
.org 0x784f6
	adds r1, r1, r2	@ 000784f6 8918
.org 0x784f8
	ldrh r2, [r1, #0]	@ 000784f8 0a88
.org 0x784fa
	lsls r2, r2, #2	@ 000784fa 9200
.org 0x784fc
	adds r2, r2, r3	@ 000784fc d218
.org 0x784fe
	adds r1, r4, #0	@ 000784fe 211c
.org 0x78500
	adds r1, #113	@ 00078500 7131
.org 0x78502
	ldrb r1, [r1, #0]	@ 00078502 0978
.org 0x78504
	lsls r1, r1, #24	@ 00078504 0906
.org 0x78506
	asrs r1, r1, #24	@ 00078506 0916
.org 0x78508
	ldr r2, [r2, #0]	@ 00078508 1268
.org 0x7850a
	lsls r1, r1, #2	@ 0007850a 8900
.org 0x7850c
	adds r1, r1, r2	@ 0007850c 8918
.org 0x7850e
	ldr r1, [r1, #0]	@ 0007850e 0968
.org 0x78510
	bl 0x5784	@ 00078510 8df738f9
.org 0x78514
	adds r0, r4, #0	@ 00078514 201c
.org 0x78516
	bl 0x78fa0	@ 00078516 00f043fd
.org 0x7851a
	ldrb r0, [r4, #18]	@ 0007851a a07c
.org 0x7851c
	cmp r0, #0	@ 0007851c 0028
.org 0x7851e
	beq.n 0x7852a	@ 0007851e 04d0
.org 0x78520
	subs r0, #1	@ 00078520 0138
.org 0x78522
	strb r0, [r4, #18]	@ 00078522 a074
.org 0x78524
	lsls r0, r0, #24	@ 00078524 0006
.org 0x78526
	cmp r0, #0	@ 00078526 0028
.org 0x78528
	bne.n 0x7853e	@ 00078528 09d1
.org 0x7852a
	adds r0, r4, #0	@ 0007852a 201c
.org 0x7852c
	adds r0, #115	@ 0007852c 7330
.org 0x7852e
	ldrb r0, [r0, #0]	@ 0007852e 0078
.org 0x78530
	cmp r0, #4	@ 00078530 0428
.org 0x78532
	bne.n 0x7853e	@ 00078532 04d1
.org 0x78534
	ldrb r0, [r4, #14]	@ 00078534 a07b
.org 0x78536
	adds r0, #1	@ 00078536 0130
.org 0x78538
	movs r1, #0	@ 00078538 0021
.org 0x7853a
	strb r0, [r4, #14]	@ 0007853a a073
.org 0x7853c
	strb r1, [r4, #15]	@ 0007853c e173
.org 0x7853e
	pop {r4, r5}	@ 0007853e 30bc
.org 0x78540
	pop {r0}	@ 00078540 01bc
.org 0x78542
	bx r0	@ 00078542 0047
