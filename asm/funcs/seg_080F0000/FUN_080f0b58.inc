@ FUN_080f0b58  entry 0x080f0b58  size 32
.thumb
.org 0xf0b58
FUN_080f0b58:
	push {r4, r5, r6, r7, lr}	@ 000f0b58 f0b5
.org 0xf0b5a
	sub sp, #16	@ 000f0b5a 84b0
.org 0xf0b5c
	adds r5, r0, #0	@ 000f0b5c 051c
.org 0xf0b5e
	ldrb r0, [r5, #13]	@ 000f0b5e 687b
.org 0xf0b60
	cmp r0, #5	@ 000f0b60 0528
.org 0xf0b62
	bls.n 0xf0b66	@ 000f0b62 00d9
.org 0xf0b64
	b.n 0xf0dba	@ 000f0b64 29e1
.org 0xf0b66
	lsls r0, r0, #2	@ 000f0b66 8000
.org 0xf0b68
	ldr r1, [pc, #4]	@ 000f0b68 0149
.org 0xf0b6a
	adds r0, r0, r1	@ 000f0b6a 4018
.org 0xf0b6c
	ldr r0, [r0, #0]	@ 000f0b6c 0068
.org 0xf0b6e
	mov pc, r0	@ 000f0b6e 8746
.org 0xf0b70
	.byte 0x74,0x0b,0x0f,0x08	@ 000f0b70 data
.org 0xf0b74
	.byte 0x8c,0x0b,0x0f,0x08	@ 000f0b74 data
