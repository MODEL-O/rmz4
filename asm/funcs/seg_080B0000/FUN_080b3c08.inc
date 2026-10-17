@ FUN_080b3c08  entry 0x080b3c08  size 102
.thumb
.org 0xb3c08
FUN_080b3c08:
	push {r4, r5, lr}	@ 000b3c08 30b5
.org 0xb3c0a
	adds r4, r0, #0	@ 000b3c0a 041c
.org 0xb3c0c
	ldrb r0, [r4, #14]	@ 000b3c0c a07b
.org 0xb3c0e
	cmp r0, #0	@ 000b3c0e 0028
.org 0xb3c10
	bne.n 0xb3c24	@ 000b3c10 08d1
.org 0xb3c12
	ldr r1, [pc, #92]	@ 000b3c12 1749
.org 0xb3c14
	adds r0, r4, #0	@ 000b3c14 201c
.org 0xb3c16
	bl 0x1cf00	@ 000b3c16 69f773f9
.org 0xb3c1a
	movs r0, #40	@ 000b3c1a 2820
.org 0xb3c1c
	strb r0, [r4, #18]	@ 000b3c1c a074
.org 0xb3c1e
	ldrb r0, [r4, #14]	@ 000b3c1e a07b
.org 0xb3c20
	adds r0, #1	@ 000b3c20 0130
.org 0xb3c22
	strb r0, [r4, #14]	@ 000b3c22 a073
.org 0xb3c24
	adds r5, r4, #0	@ 000b3c24 251c
.org 0xb3c26
	adds r5, #113	@ 000b3c26 7135
.org 0xb3c28
	movs r0, #0	@ 000b3c28 0020
.org 0xb3c2a
	ldrsb r0, [r5, r0]	@ 000b3c2a 2856
.org 0xb3c2c
	cmp r0, #5	@ 000b3c2c 0528
.org 0xb3c2e
	bne.n 0xb3c42	@ 000b3c2e 08d1
.org 0xb3c30
	movs r0, #177	@ 000b3c30 b120
.org 0xb3c32
	lsls r0, r0, #1	@ 000b3c32 4000
.org 0xb3c34
	bl 0x2b10	@ 000b3c34 4ef76cff
.org 0xb3c38
	adds r0, r4, #0	@ 000b3c38 201c
.org 0xb3c3a
	adds r0, #116	@ 000b3c3a 7430
.org 0xb3c3c
	ldr r1, [pc, #52]	@ 000b3c3c 0d49
.org 0xb3c3e
	bl 0x5784	@ 000b3c3e 51f7a1fd
.org 0xb3c42
	movs r0, #0	@ 000b3c42 0020
.org 0xb3c44
	ldrsb r0, [r5, r0]	@ 000b3c44 2856
.org 0xb3c46
	cmp r0, #5	@ 000b3c46 0528
.org 0xb3c48
	ble.n 0xb3c68	@ 000b3c48 0edd
.org 0xb3c4a
	adds r0, r4, #0	@ 000b3c4a 201c
.org 0xb3c4c
	bl 0xb3f2c	@ 000b3c4c 00f06ef9
.org 0xb3c50
	lsls r0, r0, #24	@ 000b3c50 0006
.org 0xb3c52
	cmp r0, #0	@ 000b3c52 0028
.org 0xb3c54
	beq.n 0xb3c68	@ 000b3c54 08d0
.org 0xb3c56
	adds r0, r4, #0	@ 000b3c56 201c
.org 0xb3c58
	adds r0, #116	@ 000b3c58 7430
.org 0xb3c5a
	ldr r1, [pc, #28]	@ 000b3c5a 0749
.org 0xb3c5c
	bl 0x5784	@ 000b3c5c 51f792fd
.org 0xb3c60
	movs r1, #0	@ 000b3c60 0021
.org 0xb3c62
	movs r0, #2	@ 000b3c62 0220
.org 0xb3c64
	strb r0, [r4, #13]	@ 000b3c64 6073
.org 0xb3c66
	strb r1, [r4, #14]	@ 000b3c66 a173
.org 0xb3c68
	pop {r4, r5}	@ 000b3c68 30bc
.org 0xb3c6a
	pop {r0}	@ 000b3c6a 01bc
.org 0xb3c6c
	bx r0	@ 000b3c6c 0047
