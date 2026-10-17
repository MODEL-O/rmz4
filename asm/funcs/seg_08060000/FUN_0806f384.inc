@ FUN_0806f384  entry 0x0806f384  size 78
.thumb
.org 0x6f384
FUN_0806f384:
	push {r4, r5, r6, lr}	@ 0006f384 70b5
.org 0x6f386
	adds r6, r0, #0	@ 0006f386 061c
.org 0x6f388
	ldrb r4, [r6, #10]	@ 0006f388 b47a
.org 0x6f38a
	lsrs r4, r4, #4	@ 0006f38a 2409
.org 0x6f38c
	movs r5, #1	@ 0006f38c 0125
.org 0x6f38e
	ands r4, r5	@ 0006f38e 2c40
.org 0x6f390
	bl 0x1cc9c	@ 0006f390 adf784fc
.org 0x6f394
	adds r0, r6, #0	@ 0006f394 301c
.org 0x6f396
	bl 0x1ceec	@ 0006f396 adf7a9fd
.org 0x6f39a
	adds r1, r4, #0	@ 0006f39a 211c
.org 0x6f39c
	ands r1, r5	@ 0006f39c 2940
.org 0x6f39e
	adds r0, r6, #0	@ 0006f39e 301c
.org 0x6f3a0
	adds r0, #76	@ 0006f3a0 4c30
.org 0x6f3a2
	strb r1, [r0, #0]	@ 0006f3a2 0170
.org 0x6f3a4
	adds r3, r6, #0	@ 0006f3a4 331c
.org 0x6f3a6
	adds r3, #74	@ 0006f3a6 4a33
.org 0x6f3a8
	lsls r1, r1, #4	@ 0006f3a8 0901
.org 0x6f3aa
	ldrb r2, [r3, #0]	@ 0006f3aa 1a78
.org 0x6f3ac
	movs r0, #17	@ 0006f3ac 1120
.org 0x6f3ae
	negs r0, r0	@ 0006f3ae 4042
.org 0x6f3b0
	ands r0, r2	@ 0006f3b0 1040
.org 0x6f3b2
	orrs r0, r1	@ 0006f3b2 0843
.org 0x6f3b4
	strb r0, [r3, #0]	@ 0006f3b4 1870
.org 0x6f3b6
	ands r4, r5	@ 0006f3b6 2c40
.org 0x6f3b8
	cmp r4, #0	@ 0006f3b8 002c
.org 0x6f3ba
	beq.n 0x6f3c4	@ 0006f3ba 03d0
.org 0x6f3bc
	ldrb r0, [r6, #10]	@ 0006f3bc b07a
.org 0x6f3be
	movs r1, #16	@ 0006f3be 1021
.org 0x6f3c0
	orrs r0, r1	@ 0006f3c0 0843
.org 0x6f3c2
	b.n 0x6f3ca	@ 0006f3c2 02e0
.org 0x6f3c4
	ldrb r1, [r6, #10]	@ 0006f3c4 b17a
.org 0x6f3c6
	movs r0, #239	@ 0006f3c6 ef20
.org 0x6f3c8
	ands r0, r1	@ 0006f3c8 0840
.org 0x6f3ca
	strb r0, [r6, #10]	@ 0006f3ca b072
.org 0x6f3cc
	pop {r4, r5, r6}	@ 0006f3cc 70bc
.org 0x6f3ce
	pop {r0}	@ 0006f3ce 01bc
.org 0x6f3d0
	bx r0	@ 0006f3d0 0047
