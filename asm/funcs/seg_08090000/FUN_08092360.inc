@ FUN_08092360  entry 0x08092360  size 32
.thumb
.org 0x92360
FUN_08092360:
	push {r4, lr}	@ 00092360 10b5
.org 0x92362
	adds r4, r0, #0	@ 00092362 041c
.org 0x92364
	ldrb r0, [r4, #14]	@ 00092364 a07b
.org 0x92366
	cmp r0, #0	@ 00092366 0028
.org 0x92368
	bne.n 0x9237a	@ 00092368 07d1
.org 0x9236a
	adds r0, r4, #0	@ 0009236a 201c
.org 0x9236c
	adds r0, #116	@ 0009236c 7430
.org 0x9236e
	ldr r1, [pc, #16]	@ 0009236e 0449
.org 0x92370
	bl 0x5784	@ 00092370 73f708fa
.org 0x92374
	ldrb r0, [r4, #14]	@ 00092374 a07b
.org 0x92376
	adds r0, #1	@ 00092376 0130
.org 0x92378
	strb r0, [r4, #14]	@ 00092378 a073
.org 0x9237a
	pop {r4}	@ 0009237a 10bc
.org 0x9237c
	pop {r0}	@ 0009237c 01bc
.org 0x9237e
	bx r0	@ 0009237e 0047
