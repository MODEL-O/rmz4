@ FUN_080c7388  entry 0x080c7388  size 212
.thumb
.org 0xc7388
FUN_080c7388:
	push {r4, r5, r6, r7, lr}	@ 000c7388 f0b5
.org 0xc738a
	mov r7, r8	@ 000c738a 4746
.org 0xc738c
	push {r7}	@ 000c738c 80b4
.org 0xc738e
	adds r6, r0, #0	@ 000c738e 061c
.org 0xc7390
	ldr r0, [r6, #40]	@ 000c7390 b06a
.org 0xc7392
	ldrb r0, [r0, #10]	@ 000c7392 807a
.org 0xc7394
	lsrs r4, r0, #4	@ 000c7394 0409
.org 0xc7396
	movs r2, #1	@ 000c7396 0122
.org 0xc7398
	ands r4, r2	@ 000c7398 1440
.org 0xc739a
	ldrb r0, [r6, #17]	@ 000c739a 707c
.org 0xc739c
	mov r8, r0	@ 000c739c 8046
.org 0xc739e
	ldr r1, [pc, #76]	@ 000c739e 1349
.org 0xc73a0
	ldrb r0, [r6, #9]	@ 000c73a0 707a
.org 0xc73a2
	lsls r0, r0, #2	@ 000c73a2 8000
.org 0xc73a4
	adds r0, r0, r1	@ 000c73a4 4018
.org 0xc73a6
	str r2, [r6, #12]	@ 000c73a6 f260
.org 0xc73a8
	ldr r0, [r0, #0]	@ 000c73a8 0068
.org 0xc73aa
	ldr r0, [r0, #4]	@ 000c73aa 4068
.org 0xc73ac
	str r0, [r6, #20]	@ 000c73ac 7061
.org 0xc73ae
	ldrb r1, [r6, #10]	@ 000c73ae b17a
.org 0xc73b0
	movs r0, #1	@ 000c73b0 0120
.org 0xc73b2
	orrs r0, r1	@ 000c73b2 0843
.org 0xc73b4
	movs r1, #2	@ 000c73b4 0221
.org 0xc73b6
	orrs r0, r1	@ 000c73b6 0843
.org 0xc73b8
	strb r0, [r6, #10]	@ 000c73b8 b072
.org 0xc73ba
	adds r1, r6, #0	@ 000c73ba 311c
.org 0xc73bc
	adds r1, #180	@ 000c73bc b431
.org 0xc73be
	movs r0, #6	@ 000c73be 0620
.org 0xc73c0
	strb r0, [r1, #0]	@ 000c73c0 0870
.org 0xc73c2
	adds r2, r6, #0	@ 000c73c2 321c
.org 0xc73c4
	adds r2, #84	@ 000c73c4 5432
.org 0xc73c6
	movs r3, #1	@ 000c73c6 0123
.org 0xc73c8
	ldr r0, [r2, #0]	@ 000c73c8 1068
.org 0xc73ca
	ldr r1, [r2, #4]	@ 000c73ca 5168
.org 0xc73cc
	str r0, [r2, #8]	@ 000c73cc 9060
.org 0xc73ce
	str r1, [r2, #12]	@ 000c73ce d160
.org 0xc73d0
	adds r2, #8	@ 000c73d0 0832
.org 0xc73d2
	subs r3, #1	@ 000c73d2 013b
.org 0xc73d4
	cmp r3, #0	@ 000c73d4 002b
.org 0xc73d6
	bge.n 0xc73c8	@ 000c73d6 f7da
.org 0xc73d8
	adds r0, r6, #0	@ 000c73d8 301c
.org 0xc73da
	bl 0x1cc9c	@ 000c73da 55f75ffc
.org 0xc73de
	adds r2, r4, #0	@ 000c73de 221c
.org 0xc73e0
	cmp r2, #0	@ 000c73e0 002a
.org 0xc73e2
	beq.n 0xc73f0	@ 000c73e2 05d0
.org 0xc73e4
	ldrb r1, [r6, #10]	@ 000c73e4 b17a
.org 0xc73e6
	movs r0, #16	@ 000c73e6 1020
.org 0xc73e8
	orrs r0, r1	@ 000c73e8 0843
.org 0xc73ea
	b.n 0xc73f6	@ 000c73ea 04e0
.org 0xc73ec
	.byte 0xf4,0x49,0x86,0x08	@ 000c73ec data
.org 0xc73f0
	ldrb r1, [r6, #10]	@ 000c73f0 b17a
.org 0xc73f2
	movs r0, #239	@ 000c73f2 ef20
.org 0xc73f4
	ands r0, r1	@ 000c73f4 0840
.org 0xc73f6
	strb r0, [r6, #10]	@ 000c73f6 b072
.org 0xc73f8
	adds r1, r2, #0	@ 000c73f8 111c
.org 0xc73fa
	adds r0, r6, #0	@ 000c73fa 301c
.org 0xc73fc
	adds r0, #76	@ 000c73fc 4c30
.org 0xc73fe
	movs r5, #0	@ 000c73fe 0025
.org 0xc7400
	strb r1, [r0, #0]	@ 000c7400 0170
.org 0xc7402
	adds r3, r6, #0	@ 000c7402 331c
.org 0xc7404
	adds r3, #74	@ 000c7404 4a33
.org 0xc7406
	lsls r1, r1, #4	@ 000c7406 0901
.org 0xc7408
	ldrb r2, [r3, #0]	@ 000c7408 1a78
.org 0xc740a
	movs r0, #17	@ 000c740a 1120
.org 0xc740c
	negs r0, r0	@ 000c740c 4042
.org 0xc740e
	ands r0, r2	@ 000c740e 1040
.org 0xc7410
	orrs r0, r1	@ 000c7410 0843
.org 0xc7412
	strb r0, [r3, #0]	@ 000c7412 1870
.org 0xc7414
	ldr r1, [pc, #72]	@ 000c7414 1249
.org 0xc7416
	adds r0, r6, #0	@ 000c7416 301c
.org 0xc7418
	bl 0x1cf00	@ 000c7418 55f772fd
.org 0xc741c
	ldrb r1, [r6, #10]	@ 000c741c b17a
.org 0xc741e
	movs r0, #4	@ 000c741e 0420
.org 0xc7420
	orrs r0, r1	@ 000c7420 0843
.org 0xc7422
	strb r0, [r6, #10]	@ 000c7422 b072
.org 0xc7424
	adds r4, r6, #0	@ 000c7424 341c
.org 0xc7426
	adds r4, #116	@ 000c7426 7434
.org 0xc7428
	ldr r1, [pc, #56]	@ 000c7428 0e49
.org 0xc742a
	adds r7, r6, #0	@ 000c742a 371c
.org 0xc742c
	adds r7, #84	@ 000c742c 5437
.org 0xc742e
	adds r0, r4, #0	@ 000c742e 201c
.org 0xc7430
	adds r2, r7, #0	@ 000c7430 3a1c
.org 0xc7432
	movs r3, #64	@ 000c7432 4023
.org 0xc7434
	bl 0x5760	@ 000c7434 3ef794f9
.org 0xc7438
	str r6, [r4, #44]	@ 000c7438 e662
.org 0xc743a
	str r5, [r4, #36]	@ 000c743a 6562
.org 0xc743c
	mov r2, r8	@ 000c743c 4246
.org 0xc743e
	subs r2, #1	@ 000c743e 013a
.org 0xc7440
	cmp r2, #0	@ 000c7440 002a
.org 0xc7442
	beq.n 0xc7450	@ 000c7442 05d0
.org 0xc7444
	lsls r2, r2, #24	@ 000c7444 1206
.org 0xc7446
	lsrs r2, r2, #24	@ 000c7446 120e
.org 0xc7448
	adds r0, r6, #0	@ 000c7448 301c
.org 0xc744a
	adds r1, r7, #0	@ 000c744a 391c
.org 0xc744c
	bl 0xc7220	@ 000c744c fff7e8fe
.org 0xc7450
	adds r0, r6, #0	@ 000c7450 301c
.org 0xc7452
	bl 0xc7468	@ 000c7452 00f009f8
.org 0xc7456
	pop {r3}	@ 000c7456 08bc
.org 0xc7458
	mov r8, r3	@ 000c7458 9846
.org 0xc745a
	pop {r4, r5, r6, r7}	@ 000c745a f0bc
