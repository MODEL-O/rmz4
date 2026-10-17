@ FUN_0809f378  entry 0x0809f378  size 42
.thumb
.org 0x9f378
FUN_0809f378:
	push {r4, r5, lr}	@ 0009f378 30b5
.org 0x9f37a
	adds r4, r0, #0	@ 0009f37a 041c
.org 0x9f37c
	adds r5, r4, #0	@ 0009f37c 251c
.org 0x9f37e
	adds r5, #192	@ 0009f37e c035
.org 0x9f380
	ldr r0, [r5, #0]	@ 0009f380 2868
.org 0x9f382
	bl 0x2b3e4	@ 0009f382 8cf72ff8
.org 0x9f386
	cmp r0, #0	@ 0009f386 0028
.org 0x9f388
	beq.n 0x9f39c	@ 0009f388 08d0
.org 0x9f38a
	adds r0, r4, #0	@ 0009f38a 201c
.org 0x9f38c
	adds r0, #116	@ 0009f38c 7430
.org 0x9f38e
	ldr r1, [pc, #20]	@ 0009f38e 0549
.org 0x9f390
	bl 0x5784	@ 0009f390 66f7f8f9
.org 0x9f394
	movs r0, #0	@ 0009f394 0020
.org 0x9f396
	str r0, [r5, #0]	@ 0009f396 2860
.org 0x9f398
	strb r0, [r4, #13]	@ 0009f398 6073
.org 0x9f39a
	strb r0, [r4, #14]	@ 0009f39a a073
.org 0x9f39c
	pop {r4, r5}	@ 0009f39c 30bc
.org 0x9f39e
	pop {r0}	@ 0009f39e 01bc
.org 0x9f3a0
	bx r0	@ 0009f3a0 0047
