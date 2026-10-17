@ FUN_080b10a8  entry 0x080b10a8  size 70
.thumb
.org 0xb10a8
FUN_080b10a8:
	push {r4, lr}	@ 000b10a8 10b5
.org 0xb10aa
	adds r4, r0, #0	@ 000b10aa 041c
.org 0xb10ac
	adds r0, #194	@ 000b10ac c230
.org 0xb10ae
	ldrb r0, [r0, #0]	@ 000b10ae 0078
.org 0xb10b0
	cmp r0, #255	@ 000b10b0 ff28
.org 0xb10b2
	bne.n 0xb10d6	@ 000b10b2 10d1
.org 0xb10b4
	adds r1, r4, #0	@ 000b10b4 211c
.org 0xb10b6
	adds r1, #84	@ 000b10b6 5431
.org 0xb10b8
	movs r0, #2	@ 000b10b8 0220
.org 0xb10ba
	bl 0xd0c88	@ 000b10ba 1ff0e5fd
.org 0xb10be
	ldr r1, [r4, #44]	@ 000b10be e16a
.org 0xb10c0
	cmp r1, #0	@ 000b10c0 0029
.org 0xb10c2
	beq.n 0xb10d6	@ 000b10c2 08d0
.org 0xb10c4
	ldrb r0, [r1, #12]	@ 000b10c4 087b
.org 0xb10c6
	cmp r0, #1	@ 000b10c6 0128
.org 0xb10c8
	bhi.n 0xb10d6	@ 000b10c8 05d8
.org 0xb10ca
	adds r0, r1, #0	@ 000b10ca 081c
.org 0xb10cc
	adds r0, #194	@ 000b10cc c230
.org 0xb10ce
	movs r1, #255	@ 000b10ce ff21
.org 0xb10d0
	strb r1, [r0, #0]	@ 000b10d0 0170
.org 0xb10d2
	movs r0, #0	@ 000b10d2 0020
.org 0xb10d4
	str r0, [r4, #44]	@ 000b10d4 e062
.org 0xb10d6
	ldr r1, [pc, #24]	@ 000b10d6 0649
.org 0xb10d8
	ldrb r0, [r4, #9]	@ 000b10d8 607a
.org 0xb10da
	lsls r0, r0, #2	@ 000b10da 8000
.org 0xb10dc
	adds r0, r0, r1	@ 000b10dc 4018
.org 0xb10de
	movs r1, #4	@ 000b10de 0421
.org 0xb10e0
	str r1, [r4, #12]	@ 000b10e0 e160
.org 0xb10e2
	ldr r0, [r0, #0]	@ 000b10e2 0068
.org 0xb10e4
	ldr r0, [r0, #16]	@ 000b10e4 0069
.org 0xb10e6
	str r0, [r4, #20]	@ 000b10e6 6061
.org 0xb10e8
	pop {r4}	@ 000b10e8 10bc
.org 0xb10ea
	pop {r0}	@ 000b10ea 01bc
.org 0xb10ec
	bx r0	@ 000b10ec 0047
