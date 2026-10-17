@ FUN_0800153c  entry 0x0800153c  size 30
.thumb
.org 0x153c
FUN_0800153c:
	adds r1, r0, #0	@ 0000153c 011c
.org 0x153e
	movs r0, #0	@ 0000153e 0020
.org 0x1540
	strh r0, [r1, #8]	@ 00001540 0881
.org 0x1542
	strh r0, [r1, #6]	@ 00001542 c880
.org 0x1544
	strh r0, [r1, #4]	@ 00001544 8880
.org 0x1546
	strh r0, [r1, #2]	@ 00001546 4880
.org 0x1548
	strh r0, [r1, #0]	@ 00001548 0880
.org 0x154a
	adds r3, r1, #0	@ 0000154a 0b1c
.org 0x154c
	adds r3, #10	@ 0000154c 0a33
.org 0x154e
	adds r2, r1, #0	@ 0000154e 0a1c
.org 0x1550
	adds r2, #14	@ 00001550 0e32
.org 0x1552
	str r0, [r2, #0]	@ 00001552 1060
.org 0x1554
	str r0, [r3, #0]	@ 00001554 1860
.org 0x1556
	strh r0, [r1, #18]	@ 00001556 4882
.org 0x1558
	bx lr	@ 00001558 7047
