@ FUN_080b0200  entry 0x080b0200  size 38
.thumb
.org 0xb0200
FUN_080b0200:
	push {r4, lr}	@ 000b0200 10b5
.org 0xb0202
	adds r4, r0, #0	@ 000b0202 041c
.org 0xb0204
	ldr r0, [r4, #40]	@ 000b0204 a06a
.org 0xb0206
	bl 0x2b3e4	@ 000b0206 7bf7edf8
.org 0xb020a
	cmp r0, #0	@ 000b020a 0028
.org 0xb020c
	beq.n 0xb0220	@ 000b020c 08d0
.org 0xb020e
	adds r0, r4, #0	@ 000b020e 201c
.org 0xb0210
	adds r0, #116	@ 000b0210 7430
.org 0xb0212
	ldr r1, [pc, #20]	@ 000b0212 0549
.org 0xb0214
	bl 0x5784	@ 000b0214 55f7b6fa
.org 0xb0218
	movs r0, #0	@ 000b0218 0020
.org 0xb021a
	str r0, [r4, #40]	@ 000b021a a062
.org 0xb021c
	strb r0, [r4, #13]	@ 000b021c 6073
.org 0xb021e
	strb r0, [r4, #14]	@ 000b021e a073
.org 0xb0220
	pop {r4}	@ 000b0220 10bc
.org 0xb0222
	pop {r0}	@ 000b0222 01bc
.org 0xb0224
	bx r0	@ 000b0224 0047
