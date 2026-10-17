@ FUN_0804b104  entry 0x0804b104  size 48
.thumb
.org 0x4b104
FUN_0804b104:
	adds r2, r0, #0	@ 0004b104 021c
.org 0x4b106
	adds r0, #140	@ 0004b106 8c30
.org 0x4b108
	movs r1, #0	@ 0004b108 0021
.org 0x4b10a
	str r1, [r0, #0]	@ 0004b10a 0160
.org 0x4b10c
	adds r0, #4	@ 0004b10c 0430
.org 0x4b10e
	str r1, [r0, #0]	@ 0004b10e 0160
.org 0x4b110
	adds r0, #4	@ 0004b110 0430
.org 0x4b112
	strb r1, [r0, #0]	@ 0004b112 0170
.org 0x4b114
	ldrb r1, [r2, #10]	@ 0004b114 917a
.org 0x4b116
	movs r0, #251	@ 0004b116 fb20
.org 0x4b118
	ands r0, r1	@ 0004b118 0840
.org 0x4b11a
	movs r1, #254	@ 0004b11a fe21
.org 0x4b11c
	ands r0, r1	@ 0004b11c 0840
.org 0x4b11e
	strb r0, [r2, #10]	@ 0004b11e 9072
.org 0x4b120
	ldr r1, [pc, #16]	@ 0004b120 0449
.org 0x4b122
	ldrb r0, [r2, #9]	@ 0004b122 507a
.org 0x4b124
	lsls r0, r0, #2	@ 0004b124 8000
.org 0x4b126
	adds r0, r0, r1	@ 0004b126 4018
.org 0x4b128
	movs r1, #4	@ 0004b128 0421
.org 0x4b12a
	str r1, [r2, #12]	@ 0004b12a d160
.org 0x4b12c
	ldr r0, [r0, #0]	@ 0004b12c 0068
.org 0x4b12e
	ldr r0, [r0, #16]	@ 0004b12e 0069
.org 0x4b130
	str r0, [r2, #20]	@ 0004b130 5061
.org 0x4b132
	bx lr	@ 0004b132 7047
