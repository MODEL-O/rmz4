@ FUN_0810c214  entry 0x0810c214  size 38
.thumb
.org 0x10c214
FUN_0810c214:
	push {r4, r5, r6, lr}	@ 0010c214 70b5
.org 0x10c216
	adds r6, r0, #0	@ 0010c216 061c
.org 0x10c218
	ldrb r0, [r6, #13]	@ 0010c218 707b
.org 0x10c21a
	cmp r0, #4	@ 0010c21a 0428
.org 0x10c21c
	bls.n 0x10c220	@ 0010c21c 00d9
.org 0x10c21e
	b.n 0x10c3aa	@ 0010c21e c4e0
.org 0x10c220
	lsls r0, r0, #2	@ 0010c220 8000
.org 0x10c222
	ldr r1, [pc, #12]	@ 0010c222 0349
.org 0x10c224
	adds r0, r0, r1	@ 0010c224 4018
.org 0x10c226
	ldr r0, [r0, #0]	@ 0010c226 0068
.org 0x10c228
	adds r4, r6, #0	@ 0010c228 341c
.org 0x10c22a
	adds r4, #116	@ 0010c22a 7434
.org 0x10c22c
	mov pc, r0	@ 0010c22c 8746
.org 0x10c22e
	.byte 0x00	@ 0010c22e data
.org 0x10c22f
	.byte 0x00	@ 0010c22f data
.org 0x10c230
	.byte 0x34,0xc2,0x10,0x08	@ 0010c230 data
.org 0x10c234
	.byte 0x48,0xc2,0x10,0x08	@ 0010c234 data
.org 0x10c238
	.byte 0xcc,0xc2,0x10,0x08	@ 0010c238 data
