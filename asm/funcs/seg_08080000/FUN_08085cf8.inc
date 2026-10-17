@ FUN_08085cf8  entry 0x08085cf8  size 28
.thumb
.org 0x85cf8
FUN_08085cf8:
	push {r4, lr}	@ 00085cf8 10b5
.org 0x85cfa
	adds r4, r0, #0	@ 00085cfa 041c
.org 0x85cfc
	ldrb r0, [r4, #14]	@ 00085cfc a07b
.org 0x85cfe
	cmp r0, #5	@ 00085cfe 0528
.org 0x85d00
	bls.n 0x85d04	@ 00085d00 00d9
.org 0x85d02
	b.n 0x85e1a	@ 00085d02 8ae0
.org 0x85d04
	lsls r0, r0, #2	@ 00085d04 8000
.org 0x85d06
	ldr r1, [pc, #8]	@ 00085d06 0249
.org 0x85d08
	adds r0, r0, r1	@ 00085d08 4018
.org 0x85d0a
	ldr r0, [r0, #0]	@ 00085d0a 0068
.org 0x85d0c
	mov pc, r0	@ 00085d0c 8746
.org 0x85d0e
	.byte 0x00	@ 00085d0e data
.org 0x85d0f
	.byte 0x00	@ 00085d0f data
.org 0x85d10
	.byte 0x14,0x5d,0x08,0x08	@ 00085d10 data
