@ FUN_080cb354  entry 0x080cb354  size 160
.thumb
.org 0xcb354
FUN_080cb354:
	push {r4, lr}	@ 000cb354 10b5
.org 0xcb356
	sub sp, #8	@ 000cb356 82b0
.org 0xcb358
	adds r4, r0, #0	@ 000cb358 041c
.org 0xcb35a
	bl 0x1cff0	@ 000cb35a 51f749fe
.org 0xcb35e
	ldrb r0, [r4, #13]	@ 000cb35e 607b
.org 0xcb360
	cmp r0, #0	@ 000cb360 0028
.org 0xcb362
	bne.n 0xcb3a8	@ 000cb362 21d1
.org 0xcb364
	ldrb r0, [r4, #18]	@ 000cb364 a07c
.org 0xcb366
	subs r0, #1	@ 000cb366 0138
.org 0xcb368
	strb r0, [r4, #18]	@ 000cb368 a074
.org 0xcb36a
	lsls r0, r0, #24	@ 000cb36a 0006
.org 0xcb36c
	lsrs r0, r0, #24	@ 000cb36c 000e
.org 0xcb36e
	cmp r0, #255	@ 000cb36e ff28
.org 0xcb370
	bne.n 0xcb3a8	@ 000cb370 1ad1
.org 0xcb372
	ldrb r0, [r4, #17]	@ 000cb372 607c
.org 0xcb374
	cmp r0, #0	@ 000cb374 0028
.org 0xcb376
	beq.n 0xcb380	@ 000cb376 03d0
.org 0xcb378
	ldr r0, [r4, #84]	@ 000cb378 606d
.org 0xcb37a
	movs r1, #192	@ 000cb37a c021
.org 0xcb37c
	lsls r1, r1, #4	@ 000cb37c 0901
.org 0xcb37e
	b.n 0xcb384	@ 000cb37e 01e0
.org 0xcb380
	ldr r0, [r4, #84]	@ 000cb380 606d
.org 0xcb382
	ldr r1, [pc, #112]	@ 000cb382 1c49
.org 0xcb384
	adds r0, r0, r1	@ 000cb384 4018
.org 0xcb386
	str r0, [sp, #0]	@ 000cb386 0090
.org 0xcb388
	ldr r0, [r4, #88]	@ 000cb388 a06d
.org 0xcb38a
	str r0, [sp, #4]	@ 000cb38a 0190
.org 0xcb38c
	ldrb r3, [r4, #19]	@ 000cb38c e37c
.org 0xcb38e
	cmp r3, #17	@ 000cb38e 112b
.org 0xcb390
	bhi.n 0xcb3a2	@ 000cb390 07d8
.org 0xcb392
	ldrb r2, [r4, #17]	@ 000cb392 627c
.org 0xcb394
	adds r3, #1	@ 000cb394 0133
.org 0xcb396
	lsls r3, r3, #24	@ 000cb396 1b06
.org 0xcb398
	lsrs r3, r3, #24	@ 000cb398 1b0e
.org 0xcb39a
	mov r0, sp	@ 000cb39a 6846
.org 0xcb39c
	movs r1, #0	@ 000cb39c 0021
.org 0xcb39e
	bl 0xcb0bc	@ 000cb39e fff78dfe
.org 0xcb3a2
	ldrb r0, [r4, #13]	@ 000cb3a2 607b
.org 0xcb3a4
	adds r0, #1	@ 000cb3a4 0130
.org 0xcb3a6
	strb r0, [r4, #13]	@ 000cb3a6 6073
.org 0xcb3a8
	adds r0, r4, #0	@ 000cb3a8 201c
.org 0xcb3aa
	adds r0, #116	@ 000cb3aa 7430
.org 0xcb3ac
	ldr r2, [pc, #72]	@ 000cb3ac 124a
.org 0xcb3ae
	adds r1, r4, #0	@ 000cb3ae 211c
.org 0xcb3b0
	adds r1, #113	@ 000cb3b0 7131
.org 0xcb3b2
	ldrb r1, [r1, #0]	@ 000cb3b2 0978
.org 0xcb3b4
	lsls r1, r1, #24	@ 000cb3b4 0906
.org 0xcb3b6
	asrs r1, r1, #24	@ 000cb3b6 0916
.org 0xcb3b8
	adds r1, r1, r2	@ 000cb3b8 8918
.org 0xcb3ba
	ldrb r2, [r1, #0]	@ 000cb3ba 0a78
.org 0xcb3bc
	lsls r1, r2, #1	@ 000cb3bc 5100
.org 0xcb3be
	adds r1, r1, r2	@ 000cb3be 8918
.org 0xcb3c0
	lsls r1, r1, #3	@ 000cb3c0 c900
.org 0xcb3c2
	ldr r2, [pc, #56]	@ 000cb3c2 0e4a
.org 0xcb3c4
	adds r1, r1, r2	@ 000cb3c4 8918
.org 0xcb3c6
	bl 0x5784	@ 000cb3c6 3af7ddf9
.org 0xcb3ca
	adds r0, r4, #0	@ 000cb3ca 201c
.org 0xcb3cc
	adds r0, #115	@ 000cb3cc 7330
.org 0xcb3ce
	ldrb r0, [r0, #0]	@ 000cb3ce 0078
.org 0xcb3d0
	cmp r0, #3	@ 000cb3d0 0328
.org 0xcb3d2
	bne.n 0xcb3ec	@ 000cb3d2 0bd1
.org 0xcb3d4
	ldr r1, [pc, #40]	@ 000cb3d4 0a49
.org 0xcb3d6
	ldrb r0, [r4, #9]	@ 000cb3d6 607a
.org 0xcb3d8
	lsls r0, r0, #2	@ 000cb3d8 8000
.org 0xcb3da
	adds r0, r0, r1	@ 000cb3da 4018
.org 0xcb3dc
	movs r1, #2	@ 000cb3dc 0221
.org 0xcb3de
	str r1, [r4, #12]	@ 000cb3de e160
.org 0xcb3e0
	ldr r0, [r0, #0]	@ 000cb3e0 0068
.org 0xcb3e2
	ldr r0, [r0, #8]	@ 000cb3e2 8068
.org 0xcb3e4
	str r0, [r4, #20]	@ 000cb3e4 6061
.org 0xcb3e6
	adds r0, r4, #0	@ 000cb3e6 201c
.org 0xcb3e8
	bl 0xcb178	@ 000cb3e8 fff7c6fe
.org 0xcb3ec
	add sp, #8	@ 000cb3ec 02b0
.org 0xcb3ee
	pop {r4}	@ 000cb3ee 10bc
.org 0xcb3f0
	pop {r0}	@ 000cb3f0 01bc
.org 0xcb3f2
	bx r0	@ 000cb3f2 0047
