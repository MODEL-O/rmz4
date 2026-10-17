@ FUN_080f0e90  entry 0x080f0e90  size 34
.thumb
.org 0xf0e90
FUN_080f0e90:
	push {r4, lr}	@ 000f0e90 10b5
.org 0xf0e92
	adds r4, r0, #0	@ 000f0e92 041c
.org 0xf0e94
	ldrb r0, [r4, #17]	@ 000f0e94 607c
.org 0xf0e96
	cmp r0, #10	@ 000f0e96 0a28
.org 0xf0e98
	bls.n 0xf0e9c	@ 000f0e98 00d9
.org 0xf0e9a
	b.n 0xf1036	@ 000f0e9a cce0
.org 0xf0e9c
	lsls r0, r0, #2	@ 000f0e9c 8000
.org 0xf0e9e
	ldr r1, [pc, #8]	@ 000f0e9e 0249
.org 0xf0ea0
	adds r0, r0, r1	@ 000f0ea0 4018
.org 0xf0ea2
	ldr r0, [r0, #0]	@ 000f0ea2 0068
.org 0xf0ea4
	mov pc, r0	@ 000f0ea4 8746
.org 0xf0ea6
	.byte 0x00	@ 000f0ea6 data
.org 0xf0ea7
	.byte 0x00	@ 000f0ea7 data
.org 0xf0ea8
	.byte 0xac,0x0e,0x0f,0x08	@ 000f0ea8 data
.org 0xf0eac
	.byte 0xd8,0x0e,0x0f,0x08	@ 000f0eac data
.org 0xf0eb0
	.byte 0xfe,0x0e,0x0f,0x08	@ 000f0eb0 data
