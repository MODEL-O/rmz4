@ FUN_0808d28c  entry 0x0808d28c  size 32
.thumb
.org 0x8d28c
FUN_0808d28c:
	push {r4, lr}	@ 0008d28c 10b5
.org 0x8d28e
	sub sp, #8	@ 0008d28e 82b0
.org 0x8d290
	adds r4, r0, #0	@ 0008d290 041c
.org 0x8d292
	ldrb r0, [r4, #14]	@ 0008d292 a07b
.org 0x8d294
	cmp r0, #7	@ 0008d294 0728
.org 0x8d296
	bls.n 0x8d29a	@ 0008d296 00d9
.org 0x8d298
	b.n 0x8d3b2	@ 0008d298 8be0
.org 0x8d29a
	lsls r0, r0, #2	@ 0008d29a 8000
.org 0x8d29c
	ldr r1, [pc, #4]	@ 0008d29c 0149
.org 0x8d29e
	adds r0, r0, r1	@ 0008d29e 4018
.org 0x8d2a0
	ldr r0, [r0, #0]	@ 0008d2a0 0068
.org 0x8d2a2
	mov pc, r0	@ 0008d2a2 8746
.org 0x8d2a4
	.byte 0xa8,0xd2,0x08,0x08	@ 0008d2a4 data
.org 0x8d2a8
	.byte 0xc8,0xd2,0x08,0x08	@ 0008d2a8 data
