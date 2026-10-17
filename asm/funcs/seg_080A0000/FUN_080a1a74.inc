@ FUN_080a1a74  entry 0x080a1a74  size 40
.thumb
.org 0xa1a74
FUN_080a1a74:
	push {r4, r5, r6, lr}	@ 000a1a74 70b5
.org 0xa1a76
	adds r4, r0, #0	@ 000a1a76 041c
.org 0xa1a78
	ldrb r0, [r4, #10]	@ 000a1a78 a07a
.org 0xa1a7a
	lsrs r6, r0, #4	@ 000a1a7a 0609
.org 0xa1a7c
	movs r0, #1	@ 000a1a7c 0120
.org 0xa1a7e
	ands r6, r0	@ 000a1a7e 0640
.org 0xa1a80
	adds r0, r4, #0	@ 000a1a80 201c
.org 0xa1a82
	adds r0, #184	@ 000a1a82 b830
.org 0xa1a84
	ldrb r0, [r0, #0]	@ 000a1a84 0078
.org 0xa1a86
	cmp r0, #7	@ 000a1a86 0728
.org 0xa1a88
	bls.n 0xa1a8c	@ 000a1a88 00d9
.org 0xa1a8a
	b.n 0xa1c30	@ 000a1a8a d1e0
.org 0xa1a8c
	lsls r0, r0, #2	@ 000a1a8c 8000
.org 0xa1a8e
	ldr r1, [pc, #8]	@ 000a1a8e 0249
.org 0xa1a90
	adds r0, r0, r1	@ 000a1a90 4018
.org 0xa1a92
	ldr r0, [r0, #0]	@ 000a1a92 0068
.org 0xa1a94
	mov pc, r0	@ 000a1a94 8746
.org 0xa1a96
	.byte 0x00	@ 000a1a96 data
.org 0xa1a97
	.byte 0x00	@ 000a1a97 data
.org 0xa1a98
	.byte 0x9c,0x1a,0x0a,0x08	@ 000a1a98 data
