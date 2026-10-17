@ FUN_080e0cbc  entry 0x080e0cbc  size 22
.thumb
.org 0xe0cbc
FUN_080e0cbc:
	ldr r1, [r0, #84]	@ 000e0cbc 416d
.org 0xe0cbe
	ldr r2, [r0, #92]	@ 000e0cbe c26d
.org 0xe0cc0
	adds r1, r1, r2	@ 000e0cc0 8918
.org 0xe0cc2
	str r1, [r0, #84]	@ 000e0cc2 4165
.org 0xe0cc4
	ldr r1, [r0, #88]	@ 000e0cc4 816d
.org 0xe0cc6
	ldr r2, [r0, #96]	@ 000e0cc6 026e
.org 0xe0cc8
	adds r1, r1, r2	@ 000e0cc8 8918
.org 0xe0cca
	str r1, [r0, #88]	@ 000e0cca 8165
.org 0xe0ccc
	adds r2, #64	@ 000e0ccc 4032
.org 0xe0cce
	str r2, [r0, #96]	@ 000e0cce 0266
.org 0xe0cd0
	bx lr	@ 000e0cd0 7047
