@ FUN_0805972c  entry 0x0805972c  size 18
.thumb
.org 0x5972c
FUN_0805972c:
	adds r2, r0, #0	@ 0005972c 021c
.org 0x5972e
	adds r1, r2, #0	@ 0005972e 111c
.org 0x59730
	adds r1, #181	@ 00059730 b531
.org 0x59732
	movs r0, #0	@ 00059732 0020
.org 0x59734
	strb r0, [r1, #0]	@ 00059734 0870
.org 0x59736
	adds r1, #7	@ 00059736 0731
.org 0x59738
	ldr r0, [r2, #88]	@ 00059738 906d
.org 0x5973a
	str r0, [r1, #0]	@ 0005973a 0860
.org 0x5973c
	bx lr	@ 0005973c 7047
