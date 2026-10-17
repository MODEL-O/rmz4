@ FUN_080054c4  entry 0x080054c4  size 8
.thumb
.org 0x54c4
FUN_080054c4:
	adds r1, r0, #0	@ 000054c4 011c
.org 0x54c6
	adds r1, #20	@ 000054c6 1431
.org 0x54c8
	str r1, [r0, #12]	@ 000054c8 c160
.org 0x54ca
	bx lr	@ 000054ca 7047
