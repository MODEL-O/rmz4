@ FUN_080fe7c4  entry 0x080fe7c4  size 20
.thumb
.org 0xfe7c4
FUN_080fe7c4:
	ldr r2, [r0, #40]	@ 000fe7c4 826a
.org 0xfe7c6
	ldr r1, [r2, #84]	@ 000fe7c6 516d
.org 0xfe7c8
	ldr r3, [pc, #12]	@ 000fe7c8 034b
.org 0xfe7ca
	adds r1, r1, r3	@ 000fe7ca c918
.org 0xfe7cc
	str r1, [r0, #84]	@ 000fe7cc 4165
.org 0xfe7ce
	ldr r1, [r2, #88]	@ 000fe7ce 916d
.org 0xfe7d0
	ldr r2, [pc, #8]	@ 000fe7d0 024a
.org 0xfe7d2
	adds r1, r1, r2	@ 000fe7d2 8918
.org 0xfe7d4
	str r1, [r0, #88]	@ 000fe7d4 8165
.org 0xfe7d6
	bx lr	@ 000fe7d6 7047
