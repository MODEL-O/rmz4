@ FUN_080a9c6c  entry 0x080a9c6c  size 64
.thumb
.org 0xa9c6c
FUN_080a9c6c:
	push {lr}	@ 000a9c6c 00b5
.org 0xa9c6e
	adds r1, r0, #0	@ 000a9c6e 011c
.org 0xa9c70
	adds r3, r1, #0	@ 000a9c70 0b1c
.org 0xa9c72
	adds r3, #183	@ 000a9c72 b733
.org 0xa9c74
	ldrb r0, [r3, #0]	@ 000a9c74 1878
.org 0xa9c76
	cmp r0, #0	@ 000a9c76 0028
.org 0xa9c78
	beq.n 0xa9ca8	@ 000a9c78 16d0
.org 0xa9c7a
	ldrb r0, [r1, #16]	@ 000a9c7a 087c
.org 0xa9c7c
	adds r2, r0, #0	@ 000a9c7c 021c
.org 0xa9c7e
	cmp r2, #0	@ 000a9c7e 002a
.org 0xa9c80
	bne.n 0xa9c8c	@ 000a9c80 04d1
.org 0xa9c82
	strb r2, [r1, #13]	@ 000a9c82 4a73
.org 0xa9c84
	ldrb r2, [r3, #0]	@ 000a9c84 1a78
.org 0xa9c86
	cmp r2, #1	@ 000a9c86 012a
.org 0xa9c88
	bne.n 0xa9c8c	@ 000a9c88 00d1
.org 0xa9c8a
	strb r2, [r1, #13]	@ 000a9c8a 4a73
.org 0xa9c8c
	lsls r0, r0, #24	@ 000a9c8c 0006
.org 0xa9c8e
	lsrs r2, r0, #24	@ 000a9c8e 020e
.org 0xa9c90
	cmp r2, #1	@ 000a9c90 012a
.org 0xa9c92
	bne.n 0xa9ca4	@ 000a9c92 07d1
.org 0xa9c94
	movs r0, #0	@ 000a9c94 0020
.org 0xa9c96
	strb r0, [r1, #13]	@ 000a9c96 4873
.org 0xa9c98
	adds r0, r1, #0	@ 000a9c98 081c
.org 0xa9c9a
	adds r0, #183	@ 000a9c9a b730
.org 0xa9c9c
	ldrb r0, [r0, #0]	@ 000a9c9c 0078
.org 0xa9c9e
	cmp r0, #2	@ 000a9c9e 0228
.org 0xa9ca0
	bne.n 0xa9ca4	@ 000a9ca0 00d1
.org 0xa9ca2
	strb r2, [r1, #13]	@ 000a9ca2 4a73
.org 0xa9ca4
	movs r0, #0	@ 000a9ca4 0020
.org 0xa9ca6
	strb r0, [r1, #14]	@ 000a9ca6 8873
.org 0xa9ca8
	pop {r0}	@ 000a9ca8 01bc
.org 0xa9caa
	bx r0	@ 000a9caa 0047
