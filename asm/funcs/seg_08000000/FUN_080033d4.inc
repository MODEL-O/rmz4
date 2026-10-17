@ FUN_080033d4  entry 0x080033d4  size 16
.thumb
.org 0x33d4
FUN_080033d4:
	movs r2, #128	@ 000033d4 8022
.org 0x33d6
	lsls r2, r2, #2	@ 000033d6 9200
.org 0x33d8
	adds r0, r0, r2	@ 000033d8 8018
.org 0x33da
	ldr r2, [r0, #0]	@ 000033da 0268
.org 0x33dc
	ldr r0, [r2, #0]	@ 000033dc 1068
.org 0x33de
	str r0, [r1, #0]	@ 000033de 0860
.org 0x33e0
	str r1, [r2, #0]	@ 000033e0 1160
.org 0x33e2
	bx lr	@ 000033e2 7047
