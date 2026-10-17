@ FUN_080a9b7c  entry 0x080a9b7c  size 32
.thumb
.org 0xa9b7c
FUN_080a9b7c:
	push {lr}	@ 000a9b7c 00b5
.org 0xa9b7e
	ldr r2, [r0, #84]	@ 000a9b7e 426d
.org 0xa9b80
	ldr r1, [r0, #88]	@ 000a9b80 816d
.org 0xa9b82
	ldr r0, [pc, #20]	@ 000a9b82 0548
.org 0xa9b84
	adds r1, r1, r0	@ 000a9b84 0918
.org 0xa9b86
	adds r0, r2, #0	@ 000a9b86 101c
.org 0xa9b88
	bl 0x7c7c	@ 000a9b88 5ef778f8
.org 0xa9b8c
	lsls r0, r0, #16	@ 000a9b8c 0004
.org 0xa9b8e
	cmp r0, #0	@ 000a9b8e 0028
.org 0xa9b90
	bne.n 0xa9b9c	@ 000a9b90 04d1
.org 0xa9b92
	movs r0, #0	@ 000a9b92 0020
.org 0xa9b94
	b.n 0xa9b9e	@ 000a9b94 03e0
.org 0xa9b96
	.byte 0x00	@ 000a9b96 data
.org 0xa9b97
	.byte 0x00	@ 000a9b97 data
.org 0xa9b98
	.byte 0x00,0xd8,0xff,0xff	@ 000a9b98 data
