@ FUN_080b1a00  entry 0x080b1a00  size 72
.thumb
.org 0xb1a00
FUN_080b1a00:
	push {r4, r5, lr}	@ 000b1a00 30b5
.org 0xb1a02
	adds r4, r0, #0	@ 000b1a02 041c
.org 0xb1a04
	adds r5, r4, #0	@ 000b1a04 251c
.org 0xb1a06
	adds r5, #192	@ 000b1a06 c035
.org 0xb1a08
	ldr r3, [r5, #0]	@ 000b1a08 2b68
.org 0xb1a0a
	cmp r3, #0	@ 000b1a0a 002b
.org 0xb1a0c
	bne.n 0xb1a42	@ 000b1a0c 19d1
.org 0xb1a0e
	adds r0, #140	@ 000b1a0e 8c30
.org 0xb1a10
	ldr r0, [r0, #0]	@ 000b1a10 0068
.org 0xb1a12
	movs r1, #1	@ 000b1a12 0121
.org 0xb1a14
	ands r0, r1	@ 000b1a14 0840
.org 0xb1a16
	cmp r0, #0	@ 000b1a16 0028
.org 0xb1a18
	beq.n 0xb1a42	@ 000b1a18 13d0
.org 0xb1a1a
	ldr r2, [pc, #44]	@ 000b1a1a 0b4a
.org 0xb1a1c
	str r3, [r2, #0]	@ 000b1a1c 1360
.org 0xb1a1e
	ldr r0, [pc, #44]	@ 000b1a1e 0b48
.org 0xb1a20
	str r0, [r2, #4]	@ 000b1a20 5060
.org 0xb1a22
	movs r0, #0	@ 000b1a22 0020
.org 0xb1a24
	adds r1, r4, #0	@ 000b1a24 211c
.org 0xb1a26
	bl 0x2adac	@ 000b1a26 79f7c1f9
.org 0xb1a2a
	str r0, [r5, #0]	@ 000b1a2a 2860
.org 0xb1a2c
	cmp r0, #0	@ 000b1a2c 0028
.org 0xb1a2e
	beq.n 0xb1a42	@ 000b1a2e 08d0
.org 0xb1a30
	adds r0, r4, #0	@ 000b1a30 201c
.org 0xb1a32
	adds r0, #116	@ 000b1a32 7430
.org 0xb1a34
	ldr r1, [pc, #24]	@ 000b1a34 0649
.org 0xb1a36
	bl 0x5784	@ 000b1a36 53f7a5fe
.org 0xb1a3a
	ldr r1, [pc, #24]	@ 000b1a3a 0649
.org 0xb1a3c
	adds r0, r4, #0	@ 000b1a3c 201c
.org 0xb1a3e
	bl 0x1cf00	@ 000b1a3e 6bf75ffa
.org 0xb1a42
	pop {r4, r5}	@ 000b1a42 30bc
.org 0xb1a44
	pop {r0}	@ 000b1a44 01bc
.org 0xb1a46
	bx r0	@ 000b1a46 0047
