@ FUN_08030e68  entry 0x08030e68  size 38
.thumb
.org 0x30e68
FUN_08030e68:
	push {r4, r5, r6, r7, lr}	@ 00030e68 f0b5
.org 0x30e6a
	adds r5, r0, #0	@ 00030e6a 051c
.org 0x30e6c
	ldrb r0, [r5, #15]	@ 00030e6c e87b
.org 0x30e6e
	cmp r0, #5	@ 00030e6e 0528
.org 0x30e70
	bls.n 0x30e74	@ 00030e70 00d9
.org 0x30e72
	b.n 0x31128	@ 00030e72 59e1
.org 0x30e74
	lsls r0, r0, #2	@ 00030e74 8000
.org 0x30e76
	ldr r1, [pc, #8]	@ 00030e76 0249
.org 0x30e78
	adds r0, r0, r1	@ 00030e78 4018
.org 0x30e7a
	ldr r0, [r0, #0]	@ 00030e7a 0068
.org 0x30e7c
	mov pc, r0	@ 00030e7c 8746
.org 0x30e7e
	.byte 0x00	@ 00030e7e data
.org 0x30e7f
	.byte 0x00	@ 00030e7f data
.org 0x30e80
	.byte 0x84,0x0e,0x03,0x08	@ 00030e80 data
.org 0x30e84
	.byte 0x9c,0x0e,0x03,0x08	@ 00030e84 data
.org 0x30e88
	.byte 0xe4,0x0e,0x03,0x08	@ 00030e88 data
.org 0x30e8c
	.byte 0x3a,0x0f,0x03,0x08	@ 00030e8c data
