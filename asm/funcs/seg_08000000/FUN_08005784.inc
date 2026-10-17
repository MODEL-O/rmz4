@ FUN_08005784  entry 0x08005784  size 16
.thumb
.org 0x5784
FUN_08005784:
	str r1, [r0, #0]	@ 00005784 0160
.org 0x5786
	adds r2, r0, #0	@ 00005786 021c
.org 0x5788
	adds r2, #59	@ 00005788 3b32
.org 0x578a
	movs r1, #0	@ 0000578a 0021
.org 0x578c
	strb r1, [r2, #0]	@ 0000578c 1170
.org 0x578e
	adds r0, #54	@ 0000578e 3630
.org 0x5790
	strb r1, [r0, #0]	@ 00005790 0170
.org 0x5792
	bx lr	@ 00005792 7047
