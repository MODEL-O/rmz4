@ FUN_080b79e4  entry 0x080b79e4  size 92
.thumb
.org 0xb79e4
FUN_080b79e4:
	push {r4, r5, lr}	@ 000b79e4 30b5
.org 0xb79e6
	adds r4, r0, #0	@ 000b79e6 041c
.org 0xb79e8
	ldr r0, [r4, #84]	@ 000b79e8 606d
.org 0xb79ea
	ldr r1, [r4, #88]	@ 000b79ea a16d
.org 0xb79ec
	bl 0x7c7c	@ 000b79ec 50f746f9
.org 0xb79f0
	lsls r0, r0, #16	@ 000b79f0 0004
.org 0xb79f2
	lsrs r5, r0, #16	@ 000b79f2 050c
.org 0xb79f4
	cmp r5, #0	@ 000b79f4 002d
.org 0xb79f6
	bne.n 0xb7a1c	@ 000b79f6 11d1
.org 0xb79f8
	ldr r1, [r4, #88]	@ 000b79f8 a16d
.org 0xb79fa
	ldr r0, [r4, #96]	@ 000b79fa 206e
.org 0xb79fc
	adds r1, r1, r0	@ 000b79fc 0918
.org 0xb79fe
	str r1, [r4, #88]	@ 000b79fe a165
.org 0xb7a00
	adds r0, #64	@ 000b7a00 4030
.org 0xb7a02
	str r0, [r4, #96]	@ 000b7a02 2066
.org 0xb7a04
	ldr r0, [r4, #84]	@ 000b7a04 606d
.org 0xb7a06
	bl 0x7c7c	@ 000b7a06 50f739f9
.org 0xb7a0a
	lsls r0, r0, #16	@ 000b7a0a 0004
.org 0xb7a0c
	cmp r0, #0	@ 000b7a0c 0028
.org 0xb7a0e
	beq.n 0xb7a1c	@ 000b7a0e 05d0
.org 0xb7a10
	ldr r0, [r4, #84]	@ 000b7a10 606d
.org 0xb7a12
	ldr r1, [r4, #88]	@ 000b7a12 a16d
.org 0xb7a14
	bl 0x8534	@ 000b7a14 50f78efd
.org 0xb7a18
	str r0, [r4, #88]	@ 000b7a18 a065
.org 0xb7a1a
	str r5, [r4, #96]	@ 000b7a1a 2566
.org 0xb7a1c
	adds r5, r4, #0	@ 000b7a1c 251c
.org 0xb7a1e
	adds r5, #192	@ 000b7a1e c035
.org 0xb7a20
	ldr r0, [r5, #0]	@ 000b7a20 2868
.org 0xb7a22
	bl 0x2b3e4	@ 000b7a22 73f7dffc
.org 0xb7a26
	cmp r0, #0	@ 000b7a26 0028
.org 0xb7a28
	beq.n 0xb7a3a	@ 000b7a28 07d0
.org 0xb7a2a
	adds r0, r4, #0	@ 000b7a2a 201c
.org 0xb7a2c
	adds r0, #116	@ 000b7a2c 7430
.org 0xb7a2e
	ldr r1, [pc, #16]	@ 000b7a2e 0449
.org 0xb7a30
	bl 0x5784	@ 000b7a30 4df7a8fe
.org 0xb7a34
	movs r0, #0	@ 000b7a34 0020
.org 0xb7a36
	str r0, [r5, #0]	@ 000b7a36 2860
.org 0xb7a38
	strb r0, [r4, #14]	@ 000b7a38 a073
.org 0xb7a3a
	pop {r4, r5}	@ 000b7a3a 30bc
.org 0xb7a3c
	pop {r0}	@ 000b7a3c 01bc
.org 0xb7a3e
	bx r0	@ 000b7a3e 0047
