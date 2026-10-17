@ FUN_08012ce4  entry 0x08012ce4  size 72
.thumb
.org 0x12ce4
FUN_08012ce4:
	push {lr}	@ 00012ce4 00b5
.org 0x12ce6
	movs r0, #36	@ 00012ce6 2420
.org 0x12ce8
	bl 0x2624	@ 00012ce8 eff79cfc
.org 0x12cec
	movs r0, #37	@ 00012cec 2520
.org 0x12cee
	bl 0x2624	@ 00012cee eff799fc
.org 0x12cf2
	movs r0, #38	@ 00012cf2 2620
.org 0x12cf4
	bl 0x2624	@ 00012cf4 eff796fc
.org 0x12cf8
	movs r0, #39	@ 00012cf8 2720
.org 0x12cfa
	bl 0x2624	@ 00012cfa eff793fc
.org 0x12cfe
	movs r0, #40	@ 00012cfe 2820
.org 0x12d00
	bl 0x2624	@ 00012d00 eff790fc
.org 0x12d04
	movs r0, #41	@ 00012d04 2920
.org 0x12d06
	bl 0x2624	@ 00012d06 eff78dfc
.org 0x12d0a
	movs r0, #46	@ 00012d0a 2e20
.org 0x12d0c
	bl 0x2624	@ 00012d0c eff78afc
.org 0x12d10
	movs r0, #178	@ 00012d10 b220
.org 0x12d12
	bl 0x2624	@ 00012d12 eff787fc
.org 0x12d16
	movs r0, #179	@ 00012d16 b320
.org 0x12d18
	bl 0x2624	@ 00012d18 eff784fc
.org 0x12d1c
	movs r0, #180	@ 00012d1c b420
.org 0x12d1e
	bl 0x2624	@ 00012d1e eff781fc
.org 0x12d22
	movs r0, #181	@ 00012d22 b520
.org 0x12d24
	bl 0x2624	@ 00012d24 eff77efc
.org 0x12d28
	pop {r0}	@ 00012d28 01bc
.org 0x12d2a
	bx r0	@ 00012d2a 0047
