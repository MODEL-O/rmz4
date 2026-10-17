@ FUN_080e836c  entry 0x080e836c  size 88
.thumb
.org 0xe836c
FUN_080e836c:
	push {r4, lr}	@ 000e836c 10b5
.org 0xe836e
	adds r4, r0, #0	@ 000e836e 041c
.org 0xe8370
	ldr r0, [r4, #84]	@ 000e8370 606d
.org 0xe8372
	ldr r1, [r4, #92]	@ 000e8372 e16d
.org 0xe8374
	adds r0, r0, r1	@ 000e8374 4018
.org 0xe8376
	str r0, [r4, #84]	@ 000e8376 6065
.org 0xe8378
	ldr r0, [r4, #88]	@ 000e8378 a06d
.org 0xe837a
	ldr r1, [r4, #96]	@ 000e837a 216e
.org 0xe837c
	adds r0, r0, r1	@ 000e837c 4018
.org 0xe837e
	str r0, [r4, #88]	@ 000e837e a065
.org 0xe8380
	adds r1, #64	@ 000e8380 4031
.org 0xe8382
	str r1, [r4, #96]	@ 000e8382 2166
.org 0xe8384
	ldrb r1, [r4, #18]	@ 000e8384 a17c
.org 0xe8386
	adds r0, r4, #0	@ 000e8386 201c
.org 0xe8388
	adds r0, #36	@ 000e8388 2430
.org 0xe838a
	strb r1, [r0, #0]	@ 000e838a 0170
.org 0xe838c
	ldrb r0, [r4, #17]	@ 000e838c 607c
.org 0xe838e
	cmp r0, #0	@ 000e838e 0028
.org 0xe8390
	bne.n 0xe8398	@ 000e8390 02d1
.org 0xe8392
	ldrb r0, [r4, #18]	@ 000e8392 a07c
.org 0xe8394
	subs r0, #4	@ 000e8394 0438
.org 0xe8396
	b.n 0xe839c	@ 000e8396 01e0
.org 0xe8398
	ldrb r0, [r4, #18]	@ 000e8398 a07c
.org 0xe839a
	adds r0, #4	@ 000e839a 0430
.org 0xe839c
	strb r0, [r4, #18]	@ 000e839c a074
.org 0xe839e
	ldr r0, [r4, #84]	@ 000e839e 606d
.org 0xe83a0
	ldr r1, [r4, #88]	@ 000e83a0 a16d
.org 0xe83a2
	bl 0x7c7c	@ 000e83a2 1ff76bfc
.org 0xe83a6
	lsls r0, r0, #16	@ 000e83a6 0004
.org 0xe83a8
	cmp r0, #0	@ 000e83a8 0028
.org 0xe83aa
	beq.n 0xe83be	@ 000e83aa 08d0
.org 0xe83ac
	ldr r1, [pc, #20]	@ 000e83ac 0549
.org 0xe83ae
	ldrb r0, [r4, #9]	@ 000e83ae 607a
.org 0xe83b0
	lsls r0, r0, #2	@ 000e83b0 8000
.org 0xe83b2
	adds r0, r0, r1	@ 000e83b2 4018
.org 0xe83b4
	movs r1, #2	@ 000e83b4 0221
.org 0xe83b6
	str r1, [r4, #12]	@ 000e83b6 e160
.org 0xe83b8
	ldr r0, [r0, #0]	@ 000e83b8 0068
.org 0xe83ba
	ldr r0, [r0, #8]	@ 000e83ba 8068
.org 0xe83bc
	str r0, [r4, #20]	@ 000e83bc 6061
.org 0xe83be
	pop {r4}	@ 000e83be 10bc
.org 0xe83c0
	pop {r0}	@ 000e83c0 01bc
.org 0xe83c2
	bx r0	@ 000e83c2 0047
