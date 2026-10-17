@ FUN_08078f20  entry 0x08078f20  size 8
.thumb
.org 0x78f20
FUN_08078f20:
	adds r0, #214	@ 00078f20 d630
.org 0x78f22
	movs r1, #0	@ 00078f22 0021
.org 0x78f24
	strb r1, [r0, #0]	@ 00078f24 0170
.org 0x78f26
	bx lr	@ 00078f26 7047
