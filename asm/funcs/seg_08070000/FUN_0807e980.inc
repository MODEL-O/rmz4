@ FUN_0807e980  entry 0x0807e980  size 44
.thumb
.org 0x7e980
FUN_0807e980:
	lsls r1, r1, #24	@ 0007e980 0906
.org 0x7e982
	lsrs r2, r1, #24	@ 0007e982 0a0e
.org 0x7e984
	adds r0, #180	@ 0007e984 b430
.org 0x7e986
	ldr r3, [pc, #36]	@ 0007e986 094b
.org 0x7e988
	lsrs r1, r1, #25	@ 0007e988 490e
.org 0x7e98a
	lsls r1, r1, #2	@ 0007e98a 8900
.org 0x7e98c
	adds r1, r1, r3	@ 0007e98c c918
.org 0x7e98e
	ldr r1, [r1, #0]	@ 0007e98e 0968
.org 0x7e990
	movs r3, #240	@ 0007e990 f023
.org 0x7e992
	lsls r3, r3, #7	@ 0007e992 db01
.org 0x7e994
	adds r1, r1, r3	@ 0007e994 c918
.org 0x7e996
	ldr r0, [r0, #0]	@ 0007e996 0068
.org 0x7e998
	adds r0, r0, r1	@ 0007e998 4018
.org 0x7e99a
	movs r1, #1	@ 0007e99a 0121
.org 0x7e99c
	ands r2, r1	@ 0007e99c 0a40
.org 0x7e99e
	lsls r2, r2, #1	@ 0007e99e 5200
.org 0x7e9a0
	subs r2, #1	@ 0007e9a0 013a
.org 0x7e9a2
	lsls r1, r2, #4	@ 0007e9a2 1101
.org 0x7e9a4
	subs r1, r1, r2	@ 0007e9a4 891a
.org 0x7e9a6
	lsls r1, r1, #8	@ 0007e9a6 0902
.org 0x7e9a8
	adds r0, r0, r1	@ 0007e9a8 4018
.org 0x7e9aa
	bx lr	@ 0007e9aa 7047
