@ FUN_080de380  entry 0x080de380  size 94
.thumb
.org 0xde380
FUN_080de380:
	push {r4, r5, lr}	@ 000de380 30b5
.org 0xde382
	adds r4, r0, #0	@ 000de382 041c
.org 0xde384
	movs r5, #0	@ 000de384 0025
.org 0xde386
	ldr r1, [pc, #88]	@ 000de386 1649
.org 0xde388
	ldrb r0, [r4, #9]	@ 000de388 607a
.org 0xde38a
	lsls r0, r0, #2	@ 000de38a 8000
.org 0xde38c
	adds r0, r0, r1	@ 000de38c 4018
.org 0xde38e
	movs r1, #1	@ 000de38e 0121
.org 0xde390
	str r1, [r4, #12]	@ 000de390 e160
.org 0xde392
	ldr r0, [r0, #0]	@ 000de392 0068
.org 0xde394
	ldr r0, [r0, #4]	@ 000de394 4068
.org 0xde396
	str r0, [r4, #20]	@ 000de396 6061
.org 0xde398
	ldrb r1, [r4, #10]	@ 000de398 a17a
.org 0xde39a
	movs r0, #1	@ 000de39a 0120
.org 0xde39c
	orrs r0, r1	@ 000de39c 0843
.org 0xde39e
	movs r1, #2	@ 000de39e 0221
.org 0xde3a0
	orrs r0, r1	@ 000de3a0 0843
.org 0xde3a2
	strb r0, [r4, #10]	@ 000de3a2 a072
.org 0xde3a4
	strb r5, [r4, #18]	@ 000de3a4 a574
.org 0xde3a6
	adds r0, r4, #0	@ 000de3a6 201c
.org 0xde3a8
	bl 0x1cc9c	@ 000de3a8 3ef778fc
.org 0xde3ac
	ldrb r1, [r4, #10]	@ 000de3ac a17a
.org 0xde3ae
	movs r0, #239	@ 000de3ae ef20
.org 0xde3b0
	ands r0, r1	@ 000de3b0 0840
.org 0xde3b2
	strb r0, [r4, #10]	@ 000de3b2 a072
.org 0xde3b4
	adds r0, r4, #0	@ 000de3b4 201c
.org 0xde3b6
	adds r0, #76	@ 000de3b6 4c30
.org 0xde3b8
	strb r5, [r0, #0]	@ 000de3b8 0570
.org 0xde3ba
	adds r2, r4, #0	@ 000de3ba 221c
.org 0xde3bc
	adds r2, #74	@ 000de3bc 4a32
.org 0xde3be
	ldrb r1, [r2, #0]	@ 000de3be 1178
.org 0xde3c0
	movs r0, #17	@ 000de3c0 1120
.org 0xde3c2
	negs r0, r0	@ 000de3c2 4042
.org 0xde3c4
	ands r0, r1	@ 000de3c4 0840
.org 0xde3c6
	strb r0, [r2, #0]	@ 000de3c6 1070
.org 0xde3c8
	movs r1, #162	@ 000de3c8 a221
.org 0xde3ca
	lsls r1, r1, #7	@ 000de3ca c901
.org 0xde3cc
	adds r0, r4, #0	@ 000de3cc 201c
.org 0xde3ce
	bl 0x1cf00	@ 000de3ce 3ef797fd
.org 0xde3d2
	adds r0, r4, #0	@ 000de3d2 201c
.org 0xde3d4
	bl 0xde3e4	@ 000de3d4 00f006f8
.org 0xde3d8
	pop {r4, r5}	@ 000de3d8 30bc
.org 0xde3da
	pop {r0}	@ 000de3da 01bc
.org 0xde3dc
	bx r0	@ 000de3dc 0047
