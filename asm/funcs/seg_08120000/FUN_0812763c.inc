@ FUN_0812763c  entry 0x0812763c  size 26
.thumb
.org 0x12763c
FUN_0812763c:
	movs r2, #0	@ 0012763c 0022
.org 0x12763e
	strb r2, [r1, #22]	@ 0012763e 8a75
.org 0x127640
	strb r2, [r1, #26]	@ 00127640 8a76
.org 0x127642
	ldrb r2, [r1, #24]	@ 00127642 0a7e
.org 0x127644
	cmp r2, #0	@ 00127644 002a
.org 0x127646
	bne.n 0x12764c	@ 00127646 01d1
.org 0x127648
	movs r2, #12	@ 00127648 0c22
.org 0x12764a
	b.n 0x12764e	@ 0012764a 00e0
.org 0x12764c
	movs r2, #3	@ 0012764c 0322
.org 0x12764e
	ldrb r3, [r1, #0]	@ 0012764e 0b78
.org 0x127650
	orrs r3, r2	@ 00127650 1343
.org 0x127652
	strb r3, [r1, #0]	@ 00127652 0b70
.org 0x127654
	bx lr	@ 00127654 7047
