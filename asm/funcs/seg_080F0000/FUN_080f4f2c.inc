@ FUN_080f4f2c  entry 0x080f4f2c  size 38
.thumb
.org 0xf4f2c
FUN_080f4f2c:
	push {r4, r5, lr}	@ 000f4f2c 30b5
.org 0xf4f2e
	sub sp, #8	@ 000f4f2e 82b0
.org 0xf4f30
	adds r5, r0, #0	@ 000f4f30 051c
.org 0xf4f32
	ldrb r0, [r5, #13]	@ 000f4f32 687b
.org 0xf4f34
	cmp r0, #5	@ 000f4f34 0528
.org 0xf4f36
	bls.n 0xf4f3a	@ 000f4f36 00d9
.org 0xf4f38
	b.n 0xf524e	@ 000f4f38 89e1
.org 0xf4f3a
	lsls r0, r0, #2	@ 000f4f3a 8000
.org 0xf4f3c
	ldr r1, [pc, #4]	@ 000f4f3c 0149
.org 0xf4f3e
	adds r0, r0, r1	@ 000f4f3e 4018
.org 0xf4f40
	ldr r0, [r0, #0]	@ 000f4f40 0068
.org 0xf4f42
	mov pc, r0	@ 000f4f42 8746
.org 0xf4f44
	.byte 0x48,0x4f,0x0f,0x08	@ 000f4f44 data
.org 0xf4f48
	.byte 0x60,0x4f,0x0f,0x08	@ 000f4f48 data
.org 0xf4f4c
	.byte 0xc0,0x4f,0x0f,0x08	@ 000f4f4c data
.org 0xf4f50
	.byte 0x10,0x50,0x0f,0x08	@ 000f4f50 data
