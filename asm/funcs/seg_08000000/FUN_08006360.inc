@ FUN_08006360  entry 0x08006360  size 118
.thumb
.org 0x6360
FUN_08006360:
	push {r4, r5, r6, r7, lr}	@ 00006360 f0b5
.org 0x6362
	mov r7, sl	@ 00006362 5746
.org 0x6364
	mov r6, r9	@ 00006364 4e46
.org 0x6366
	mov r5, r8	@ 00006366 4546
.org 0x6368
	push {r5, r6, r7}	@ 00006368 e0b4
.org 0x636a
	adds r5, r0, #0	@ 0000636a 051c
.org 0x636c
	mov sl, r1	@ 0000636c 8a46
.org 0x636e
	cmp r5, #0	@ 0000636e 002d
.org 0x6370
	beq.n 0x63c8	@ 00006370 2ad0
.org 0x6372
	cmp r1, #0	@ 00006372 0029
.org 0x6374
	beq.n 0x63c8	@ 00006374 28d0
.org 0x6376
	ldr r0, [r5, #12]	@ 00006376 e868
.org 0x6378
	mov r9, r0	@ 00006378 8146
.org 0x637a
	ldr r1, [r5, #16]	@ 0000637a 2969
.org 0x637c
	mov r8, r1	@ 0000637c 8846
.org 0x637e
	ldrh r7, [r5, #20]	@ 0000637e af8a
.org 0x6380
	ldrh r6, [r5, #22]	@ 00006380 ee8a
.org 0x6382
	mov r4, sl	@ 00006382 5446
.org 0x6384
	cmp r4, #0	@ 00006384 002c
.org 0x6386
	beq.n 0x63c2	@ 00006386 1cd0
.org 0x6388
	ldr r1, [r5, #8]	@ 00006388 a968
.org 0x638a
	ldr r0, [r4, #8]	@ 0000638a a068
.org 0x638c
	cmp r1, r0	@ 0000638c 8142
.org 0x638e
	beq.n 0x63bc	@ 0000638e 15d0
.org 0x6390
	ldrh r2, [r4, #20]	@ 00006390 a28a
.org 0x6392
	adds r2, r7, r2	@ 00006392 ba18
.org 0x6394
	ldrh r0, [r4, #22]	@ 00006394 e08a
.org 0x6396
	adds r3, r6, r0	@ 00006396 3318
.org 0x6398
	ldr r0, [r4, #12]	@ 00006398 e068
.org 0x639a
	mov r1, r9	@ 0000639a 4946
.org 0x639c
	subs r0, r1, r0	@ 0000639c 081a
.org 0x639e
	lsrs r1, r2, #1	@ 0000639e 5108
.org 0x63a0
	adds r0, r0, r1	@ 000063a0 4018
.org 0x63a2
	cmp r0, r2	@ 000063a2 9042
.org 0x63a4
	bcs.n 0x63bc	@ 000063a4 0ad2
.org 0x63a6
	ldr r0, [r4, #16]	@ 000063a6 2069
.org 0x63a8
	mov r1, r8	@ 000063a8 4146
.org 0x63aa
	subs r0, r1, r0	@ 000063aa 081a
.org 0x63ac
	lsrs r1, r3, #1	@ 000063ac 5908
.org 0x63ae
	adds r0, r0, r1	@ 000063ae 4018
.org 0x63b0
	cmp r0, r3	@ 000063b0 9842
.org 0x63b2
	bcs.n 0x63bc	@ 000063b2 03d2
.org 0x63b4
	adds r0, r5, #0	@ 000063b4 281c
.org 0x63b6
	adds r1, r4, #0	@ 000063b6 211c
.org 0x63b8
	bl 0x6610	@ 000063b8 00f02af9
.org 0x63bc
	ldr r4, [r4, #0]	@ 000063bc 2468
.org 0x63be
	cmp r4, #0	@ 000063be 002c
.org 0x63c0
	bne.n 0x6388	@ 000063c0 e2d1
.org 0x63c2
	ldr r5, [r5, #0]	@ 000063c2 2d68
.org 0x63c4
	cmp r5, #0	@ 000063c4 002d
.org 0x63c6
	bne.n 0x6376	@ 000063c6 d6d1
.org 0x63c8
	pop {r3, r4, r5}	@ 000063c8 38bc
.org 0x63ca
	mov r8, r3	@ 000063ca 9846
.org 0x63cc
	mov r9, r4	@ 000063cc a146
.org 0x63ce
	mov sl, r5	@ 000063ce aa46
.org 0x63d0
	pop {r4, r5, r6, r7}	@ 000063d0 f0bc
.org 0x63d2
	pop {r0}	@ 000063d2 01bc
.org 0x63d4
	bx r0	@ 000063d4 0047
