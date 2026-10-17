@ FUN_080f4d6c  entry 0x080f4d6c  size 32
.thumb
.org 0xf4d6c
FUN_080f4d6c:
	push {r4, r5, lr}	@ 000f4d6c 30b5
.org 0xf4d6e
	sub sp, #40	@ 000f4d6e 8ab0
.org 0xf4d70
	adds r5, r0, #0	@ 000f4d70 051c
.org 0xf4d72
	ldrb r0, [r5, #13]	@ 000f4d72 687b
.org 0xf4d74
	cmp r0, #4	@ 000f4d74 0428
.org 0xf4d76
	bls.n 0xf4d7a	@ 000f4d76 00d9
.org 0xf4d78
	b.n 0xf4f16	@ 000f4d78 cde0
.org 0xf4d7a
	lsls r0, r0, #2	@ 000f4d7a 8000
.org 0xf4d7c
	ldr r1, [pc, #4]	@ 000f4d7c 0149
.org 0xf4d7e
	adds r0, r0, r1	@ 000f4d7e 4018
.org 0xf4d80
	ldr r0, [r0, #0]	@ 000f4d80 0068
.org 0xf4d82
	mov pc, r0	@ 000f4d82 8746
.org 0xf4d84
	.byte 0x88,0x4d,0x0f,0x08	@ 000f4d84 data
.org 0xf4d88
	.byte 0x9c,0x4d,0x0f,0x08	@ 000f4d88 data
