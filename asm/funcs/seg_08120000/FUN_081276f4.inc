@ FUN_081276f4  entry 0x081276f4  size 20
.thumb
.org 0x1276f4
FUN_081276f4:
	adds r2, r0, #0	@ 001276f4 021c
.org 0x1276f6
	ldr r3, [r2, #52]	@ 001276f6 536b
.org 0x1276f8
	ldr r0, [pc, #12]	@ 001276f8 0348
.org 0x1276fa
	cmp r3, r0	@ 001276fa 8342
.org 0x1276fc
	bne.n 0x127706	@ 001276fc 03d1
.org 0x1276fe
	ldr r0, [r2, #4]	@ 001276fe 5068
.org 0x127700
	ldr r1, [pc, #8]	@ 00127700 0249
.org 0x127702
	ands r0, r1	@ 00127702 0840
.org 0x127704
	str r0, [r2, #4]	@ 00127704 5060
.org 0x127706
	bx lr	@ 00127706 7047
