@ FUN_0804a364  entry 0x0804a364  size 82
.thumb
.org 0x4a364
FUN_0804a364:
	push {r4, r5, lr}	@ 0004a364 30b5
.org 0x4a366
	adds r4, r0, #0	@ 0004a366 041c
.org 0x4a368
	ldr r1, [pc, #76]	@ 0004a368 1349
.org 0x4a36a
	ldrb r0, [r4, #9]	@ 0004a36a 607a
.org 0x4a36c
	lsls r0, r0, #2	@ 0004a36c 8000
.org 0x4a36e
	adds r0, r0, r1	@ 0004a36e 4018
.org 0x4a370
	movs r1, #1	@ 0004a370 0121
.org 0x4a372
	str r1, [r4, #12]	@ 0004a372 e160
.org 0x4a374
	ldr r0, [r0, #0]	@ 0004a374 0068
.org 0x4a376
	ldr r0, [r0, #4]	@ 0004a376 4068
.org 0x4a378
	str r0, [r4, #20]	@ 0004a378 6061
.org 0x4a37a
	adds r0, r4, #0	@ 0004a37a 201c
.org 0x4a37c
	bl 0x1cc9c	@ 0004a37c d2f78efc
.org 0x4a380
	adds r0, r4, #0	@ 0004a380 201c
.org 0x4a382
	bl 0x1ceec	@ 0004a382 d2f7b3fd
.org 0x4a386
	ldrb r1, [r4, #10]	@ 0004a386 a17a
.org 0x4a388
	movs r0, #254	@ 0004a388 fe20
.org 0x4a38a
	ands r0, r1	@ 0004a38a 0840
.org 0x4a38c
	movs r5, #0	@ 0004a38c 0025
.org 0x4a38e
	movs r1, #2	@ 0004a38e 0221
.org 0x4a390
	orrs r0, r1	@ 0004a390 0843
.org 0x4a392
	strb r0, [r4, #10]	@ 0004a392 a072
.org 0x4a394
	ldr r1, [pc, #36]	@ 0004a394 0949
.org 0x4a396
	adds r0, r4, #0	@ 0004a396 201c
.org 0x4a398
	bl 0x1cf00	@ 0004a398 d2f7b2fd
.org 0x4a39c
	movs r0, #8	@ 0004a39c 0820
.org 0x4a39e
	strb r0, [r4, #18]	@ 0004a39e a074
.org 0x4a3a0
	movs r0, #20	@ 0004a3a0 1420
.org 0x4a3a2
	strb r0, [r4, #19]	@ 0004a3a2 e074
.org 0x4a3a4
	adds r0, r4, #0	@ 0004a3a4 201c
.org 0x4a3a6
	adds r0, #190	@ 0004a3a6 be30
.org 0x4a3a8
	strb r5, [r0, #0]	@ 0004a3a8 0570
.org 0x4a3aa
	adds r0, r4, #0	@ 0004a3aa 201c
.org 0x4a3ac
	bl 0x4a3c0	@ 0004a3ac 00f008f8
.org 0x4a3b0
	pop {r4, r5}	@ 0004a3b0 30bc
.org 0x4a3b2
	pop {r0}	@ 0004a3b2 01bc
.org 0x4a3b4
	bx r0	@ 0004a3b4 0047
