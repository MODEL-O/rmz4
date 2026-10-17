@ FUN_080383a4  entry 0x080383a4  size 38
.thumb
.org 0x383a4
FUN_080383a4:
	push {lr}	@ 000383a4 00b5
.org 0x383a6
	adds r2, r0, #0	@ 000383a6 021c
.org 0x383a8
	ldrb r0, [r2, #12]	@ 000383a8 107b
.org 0x383aa
	cmp r0, #2	@ 000383aa 0228
.org 0x383ac
	bls.n 0x383b2	@ 000383ac 01d9
.org 0x383ae
	movs r0, #2	@ 000383ae 0220
.org 0x383b0
	strb r0, [r2, #12]	@ 000383b0 1073
.org 0x383b2
	ldrb r0, [r2, #13]	@ 000383b2 507b
.org 0x383b4
	cmp r0, #2	@ 000383b4 0228
.org 0x383b6
	bls.n 0x383bc	@ 000383b6 01d9
.org 0x383b8
	movs r0, #2	@ 000383b8 0220
.org 0x383ba
	strb r0, [r2, #13]	@ 000383ba 5073
.org 0x383bc
	movs r1, #0	@ 000383bc 0021
.org 0x383be
	strb r1, [r2, #15]	@ 000383be d173
.org 0x383c0
	adds r0, r2, #0	@ 000383c0 101c
.org 0x383c2
	adds r0, #50	@ 000383c2 3230
.org 0x383c4
	strb r1, [r0, #0]	@ 000383c4 0170
.org 0x383c6
	pop {r0}	@ 000383c6 01bc
.org 0x383c8
	bx r0	@ 000383c8 0047
