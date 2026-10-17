@ FUN_0803b13c  entry 0x0803b13c  size 32
.thumb
.org 0x3b13c
FUN_0803b13c:
	push {lr}	@ 0003b13c 00b5
.org 0x3b13e
	adds r2, r0, #0	@ 0003b13e 021c
.org 0x3b140
	ldrb r0, [r2, #16]	@ 0003b140 107c
.org 0x3b142
	cmp r0, #1	@ 0003b142 0128
.org 0x3b144
	beq.n 0x3b15c	@ 0003b144 0ad0
.org 0x3b146
	ldr r0, [r2, #84]	@ 0003b146 506d
.org 0x3b148
	str r0, [r1, #0]	@ 0003b148 0860
.org 0x3b14a
	ldr r0, [r2, #88]	@ 0003b14a 906d
.org 0x3b14c
	ldr r2, [pc, #8]	@ 0003b14c 024a
.org 0x3b14e
	adds r0, r0, r2	@ 0003b14e 8018
.org 0x3b150
	str r0, [r1, #4]	@ 0003b150 4860
.org 0x3b152
	movs r0, #1	@ 0003b152 0120
.org 0x3b154
	b.n 0x3b15e	@ 0003b154 03e0
.org 0x3b156
	.byte 0x00	@ 0003b156 data
.org 0x3b157
	.byte 0x00	@ 0003b157 data
.org 0x3b158
	.byte 0x00,0xf4,0xff,0xff	@ 0003b158 data
