@ FUN_080be370  entry 0x080be370  size 168
.thumb
.org 0xbe370
FUN_080be370:
	push {r4, lr}	@ 000be370 10b5
.org 0xbe372
	adds r4, r0, #0	@ 000be372 041c
.org 0xbe374
	ldrb r1, [r4, #13]	@ 000be374 617b
.org 0xbe376
	cmp r1, #0	@ 000be376 0029
.org 0xbe378
	beq.n 0xbe380	@ 000be378 02d0
.org 0xbe37a
	cmp r1, #1	@ 000be37a 0129
.org 0xbe37c
	beq.n 0xbe3c6	@ 000be37c 23d0
.org 0xbe37e
	b.n 0xbe412	@ 000be37e 48e0
.org 0xbe380
	adds r0, r4, #0	@ 000be380 201c
.org 0xbe382
	adds r0, #140	@ 000be382 8c30
.org 0xbe384
	str r1, [r0, #0]	@ 000be384 0160
.org 0xbe386
	adds r0, #4	@ 000be386 0430
.org 0xbe388
	str r1, [r0, #0]	@ 000be388 0160
.org 0xbe38a
	adds r0, #4	@ 000be38a 0430
.org 0xbe38c
	strb r1, [r0, #0]	@ 000be38c 0170
.org 0xbe38e
	ldrb r1, [r4, #10]	@ 000be38e a17a
.org 0xbe390
	movs r0, #251	@ 000be390 fb20
.org 0xbe392
	ands r0, r1	@ 000be392 0840
.org 0xbe394
	strb r0, [r4, #10]	@ 000be394 a072
.org 0xbe396
	ldr r1, [pc, #128]	@ 000be396 2049
.org 0xbe398
	ldrb r0, [r4, #16]	@ 000be398 207c
.org 0xbe39a
	lsls r0, r0, #1	@ 000be39a 4000
.org 0xbe39c
	adds r0, r0, r1	@ 000be39c 4018
.org 0xbe39e
	ldrh r1, [r0, #0]	@ 000be39e 0188
.org 0xbe3a0
	adds r0, r4, #0	@ 000be3a0 201c
.org 0xbe3a2
	bl 0x1cf00	@ 000be3a2 5ef7adfd
.org 0xbe3a6
	ldr r0, [r4, #84]	@ 000be3a6 606d
.org 0xbe3a8
	ldr r1, [r4, #92]	@ 000be3a8 e16d
.org 0xbe3aa
	subs r0, r0, r1	@ 000be3aa 401a
.org 0xbe3ac
	str r0, [r4, #84]	@ 000be3ac 6065
.org 0xbe3ae
	ldrb r1, [r4, #10]	@ 000be3ae a17a
.org 0xbe3b0
	movs r0, #16	@ 000be3b0 1020
.org 0xbe3b2
	ands r0, r1	@ 000be3b2 0840
.org 0xbe3b4
	movs r1, #128	@ 000be3b4 8021
.org 0xbe3b6
	cmp r0, #0	@ 000be3b6 0028
.org 0xbe3b8
	beq.n 0xbe3be	@ 000be3b8 01d0
.org 0xbe3ba
	movs r1, #128	@ 000be3ba 8021
.org 0xbe3bc
	negs r1, r1	@ 000be3bc 4942
.org 0xbe3be
	str r1, [r4, #92]	@ 000be3be e165
.org 0xbe3c0
	ldrb r0, [r4, #13]	@ 000be3c0 607b
.org 0xbe3c2
	adds r0, #1	@ 000be3c2 0130
.org 0xbe3c4
	strb r0, [r4, #13]	@ 000be3c4 6073
.org 0xbe3c6
	ldr r0, [r4, #84]	@ 000be3c6 606d
.org 0xbe3c8
	ldr r1, [r4, #92]	@ 000be3c8 e16d
.org 0xbe3ca
	adds r0, r0, r1	@ 000be3ca 4018
.org 0xbe3cc
	str r0, [r4, #84]	@ 000be3cc 6065
.org 0xbe3ce
	adds r0, r4, #0	@ 000be3ce 201c
.org 0xbe3d0
	adds r0, #115	@ 000be3d0 7330
.org 0xbe3d2
	ldrb r3, [r0, #0]	@ 000be3d2 0378
.org 0xbe3d4
	cmp r3, #3	@ 000be3d4 032b
.org 0xbe3d6
	bne.n 0xbe40c	@ 000be3d6 19d1
.org 0xbe3d8
	ldrb r1, [r4, #10]	@ 000be3d8 a17a
.org 0xbe3da
	movs r0, #254	@ 000be3da fe20
.org 0xbe3dc
	ands r0, r1	@ 000be3dc 0840
.org 0xbe3de
	movs r2, #0	@ 000be3de 0022
.org 0xbe3e0
	movs r1, #253	@ 000be3e0 fd21
.org 0xbe3e2
	ands r0, r1	@ 000be3e2 0840
.org 0xbe3e4
	strb r0, [r4, #10]	@ 000be3e4 a072
.org 0xbe3e6
	adds r0, r4, #0	@ 000be3e6 201c
.org 0xbe3e8
	adds r0, #140	@ 000be3e8 8c30
.org 0xbe3ea
	str r2, [r0, #0]	@ 000be3ea 0260
.org 0xbe3ec
	adds r0, #4	@ 000be3ec 0430
.org 0xbe3ee
	str r2, [r0, #0]	@ 000be3ee 0260
.org 0xbe3f0
	adds r0, #4	@ 000be3f0 0430
.org 0xbe3f2
	strb r2, [r0, #0]	@ 000be3f2 0270
.org 0xbe3f4
	ldrb r1, [r4, #10]	@ 000be3f4 a17a
.org 0xbe3f6
	movs r0, #251	@ 000be3f6 fb20
.org 0xbe3f8
	ands r0, r1	@ 000be3f8 0840
.org 0xbe3fa
	strb r0, [r4, #10]	@ 000be3fa a072
.org 0xbe3fc
	ldr r1, [pc, #28]	@ 000be3fc 0749
.org 0xbe3fe
	ldrb r0, [r4, #9]	@ 000be3fe 607a
.org 0xbe400
	lsls r0, r0, #2	@ 000be400 8000
.org 0xbe402
	adds r0, r0, r1	@ 000be402 4018
.org 0xbe404
	str r3, [r4, #12]	@ 000be404 e360
.org 0xbe406
	ldr r0, [r0, #0]	@ 000be406 0068
.org 0xbe408
	ldr r0, [r0, #12]	@ 000be408 c068
.org 0xbe40a
	str r0, [r4, #20]	@ 000be40a 6061
.org 0xbe40c
	adds r0, r4, #0	@ 000be40c 201c
.org 0xbe40e
	bl 0x1cff0	@ 000be40e 5ef7effd
.org 0xbe412
	pop {r4}	@ 000be412 10bc
.org 0xbe414
	pop {r0}	@ 000be414 01bc
.org 0xbe416
	bx r0	@ 000be416 0047
