@ FUN_08028c60  entry 0x08028c60  size 32
.thumb
.org 0x28c60
FUN_08028c60:
	push {r4, r5, r6, lr}	@ 00028c60 70b5
.org 0x28c62
	adds r4, r0, #0	@ 00028c62 041c
.org 0x28c64
	ldr r0, [r4, #12]	@ 00028c64 e068
.org 0x28c66
	ldrb r0, [r0, #1]	@ 00028c66 4078
.org 0x28c68
	cmp r0, #7	@ 00028c68 0728
.org 0x28c6a
	bls.n 0x28c6e	@ 00028c6a 00d9
.org 0x28c6c
	b.n 0x28daa	@ 00028c6c 9de0
.org 0x28c6e
	lsls r0, r0, #2	@ 00028c6e 8000
.org 0x28c70
	ldr r1, [pc, #4]	@ 00028c70 0149
.org 0x28c72
	adds r0, r0, r1	@ 00028c72 4018
.org 0x28c74
	ldr r0, [r0, #0]	@ 00028c74 0068
.org 0x28c76
	mov pc, r0	@ 00028c76 8746
.org 0x28c78
	.byte 0x7c,0x8c,0x02,0x08	@ 00028c78 data
.org 0x28c7c
	.byte 0x9c,0x8c,0x02,0x08	@ 00028c7c data
