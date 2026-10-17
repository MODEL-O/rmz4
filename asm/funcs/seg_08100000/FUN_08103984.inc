@ FUN_08103984  entry 0x08103984  size 12
.thumb
.org 0x103984
FUN_08103984:
	ldr r2, [pc, #8]	@ 00103984 024a
.org 0x103986
	ldr r1, [r2, #56]	@ 00103986 916b
.org 0x103988
	str r1, [r0, #84]	@ 00103988 4165
.org 0x10398a
	ldr r1, [r2, #60]	@ 0010398a d16b
.org 0x10398c
	str r1, [r0, #88]	@ 0010398c 8165
.org 0x10398e
	bx lr	@ 0010398e 7047
