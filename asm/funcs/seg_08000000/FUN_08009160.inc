@ FUN_08009160  entry 0x08009160  size 36
.thumb
.org 0x9160
FUN_08009160:
	push {lr}	@ 00009160 00b5
.org 0x9162
	adds r2, r0, #0	@ 00009162 021c
.org 0x9164
	ldr r0, [pc, #24]	@ 00009164 0648
.org 0x9166
	cmp r2, r0	@ 00009166 8242
.org 0x9168
	ble.n 0x917a	@ 00009168 07dd
.org 0x916a
	ldr r0, [pc, #24]	@ 0000916a 0648
.org 0x916c
	adds r1, r1, r0	@ 0000916c 0918
.org 0x916e
	ldr r3, [pc, #24]	@ 0000916e 064b
.org 0x9170
	adds r0, r2, r3	@ 00009170 d018
.org 0x9172
	lsls r0, r0, #1	@ 00009172 4000
.org 0x9174
	adds r0, r1, r0	@ 00009174 0818
.org 0x9176
	cmp r0, #0	@ 00009176 0028
.org 0x9178
	bgt.n 0x918c	@ 00009178 08dc
.org 0x917a
	movs r0, #0	@ 0000917a 0020
.org 0x917c
	b.n 0x918e	@ 0000917c 07e0
.org 0x917e
	.byte 0x00	@ 0000917e data
.org 0x917f
	.byte 0x00	@ 0000917f data
.org 0x9180
	.byte 0xff,0x07,0x00,0x00	@ 00009180 data
