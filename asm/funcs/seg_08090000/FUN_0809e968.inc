@ FUN_0809e968  entry 0x0809e968  size 42
.thumb
.org 0x9e968
FUN_0809e968:
	push {lr}	@ 0009e968 00b5
.org 0x9e96a
	adds r2, r0, #0	@ 0009e96a 021c
.org 0x9e96c
	ldr r0, [r2, #84]	@ 0009e96c 506d
.org 0x9e96e
	ldr r1, [r2, #92]	@ 0009e96e d16d
.org 0x9e970
	adds r0, r0, r1	@ 0009e970 4018
.org 0x9e972
	str r0, [r2, #84]	@ 0009e972 5065
.org 0x9e974
	adds r3, r1, #0	@ 0009e974 0b1c
.org 0x9e976
	cmp r1, #0	@ 0009e976 0029
.org 0x9e978
	bge.n 0x9e97c	@ 0009e978 00da
.org 0x9e97a
	negs r3, r1	@ 0009e97a 4b42
.org 0x9e97c
	ldr r0, [pc, #20]	@ 0009e97c 0548
.org 0x9e97e
	cmp r3, r0	@ 0009e97e 8342
.org 0x9e980
	bgt.n 0x9e988	@ 0009e980 02dc
.org 0x9e982
	ldr r0, [r2, #100]	@ 0009e982 506e
.org 0x9e984
	adds r0, r1, r0	@ 0009e984 0818
.org 0x9e986
	str r0, [r2, #92]	@ 0009e986 d065
.org 0x9e988
	adds r0, r2, #0	@ 0009e988 101c
.org 0x9e98a
	bl 0x1cff0	@ 0009e98a 7ef731fb
.org 0x9e98e
	pop {r0}	@ 0009e98e 01bc
.org 0x9e990
	bx r0	@ 0009e990 0047
