@ FUN_08100f5c  entry 0x08100f5c  size 28
.thumb
.org 0x100f5c
FUN_08100f5c:
	push {r4, r5, r6, lr}	@ 00100f5c 70b5
.org 0x100f5e
	adds r6, r0, #0	@ 00100f5e 061c
.org 0x100f60
	ldrb r0, [r6, #14]	@ 00100f60 b07b
.org 0x100f62
	cmp r0, #4	@ 00100f62 0428
.org 0x100f64
	bls.n 0x100f68	@ 00100f64 00d9
.org 0x100f66
	b.n 0x101144	@ 00100f66 ede0
.org 0x100f68
	lsls r0, r0, #2	@ 00100f68 8000
.org 0x100f6a
	ldr r1, [pc, #8]	@ 00100f6a 0249
.org 0x100f6c
	adds r0, r0, r1	@ 00100f6c 4018
.org 0x100f6e
	ldr r0, [r0, #0]	@ 00100f6e 0068
.org 0x100f70
	mov pc, r0	@ 00100f70 8746
.org 0x100f72
	.byte 0x00	@ 00100f72 data
.org 0x100f73
	.byte 0x00	@ 00100f73 data
.org 0x100f74
	.byte 0x78,0x0f,0x10,0x08	@ 00100f74 data
