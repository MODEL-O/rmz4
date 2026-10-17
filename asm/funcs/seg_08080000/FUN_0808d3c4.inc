@ FUN_0808d3c4  entry 0x0808d3c4  size 32
.thumb
.org 0x8d3c4
FUN_0808d3c4:
	push {r4, r5, r6, r7, lr}	@ 0008d3c4 f0b5
.org 0x8d3c6
	sub sp, #16	@ 0008d3c6 84b0
.org 0x8d3c8
	adds r5, r0, #0	@ 0008d3c8 051c
.org 0x8d3ca
	ldrb r0, [r5, #14]	@ 0008d3ca a87b
.org 0x8d3cc
	cmp r0, #11	@ 0008d3cc 0b28
.org 0x8d3ce
	bls.n 0x8d3d2	@ 0008d3ce 00d9
.org 0x8d3d0
	b.n 0x8d5c0	@ 0008d3d0 f6e0
.org 0x8d3d2
	lsls r0, r0, #2	@ 0008d3d2 8000
.org 0x8d3d4
	ldr r1, [pc, #4]	@ 0008d3d4 0149
.org 0x8d3d6
	adds r0, r0, r1	@ 0008d3d6 4018
.org 0x8d3d8
	ldr r0, [r0, #0]	@ 0008d3d8 0068
.org 0x8d3da
	mov pc, r0	@ 0008d3da 8746
.org 0x8d3dc
	.byte 0xe0,0xd3,0x08,0x08	@ 0008d3dc data
.org 0x8d3e0
	.byte 0x10,0xd4,0x08,0x08	@ 0008d3e0 data
