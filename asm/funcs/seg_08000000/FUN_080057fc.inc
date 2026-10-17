@ FUN_080057fc  entry 0x080057fc  size 16
.thumb
.org 0x57fc
FUN_080057fc:
	str r1, [r0, #0]	@ 000057fc 0160
.org 0x57fe
	adds r3, r0, #0	@ 000057fe 031c
.org 0x5800
	adds r3, #59	@ 00005800 3b33
.org 0x5802
	movs r1, #0	@ 00005802 0021
.org 0x5804
	strb r2, [r3, #0]	@ 00005804 1a70
.org 0x5806
	adds r0, #54	@ 00005806 3630
.org 0x5808
	strb r1, [r0, #0]	@ 00005808 0170
.org 0x580a
	bx lr	@ 0000580a 7047
