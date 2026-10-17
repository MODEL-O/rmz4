@ FUN_08058f88  entry 0x08058f88  size 74
.thumb
.org 0x58f88
FUN_08058f88:
	push {r4, lr}	@ 00058f88 10b5
.org 0x58f8a
	adds r2, r0, #0	@ 00058f8a 021c
.org 0x58f8c
	ldrb r1, [r2, #10]	@ 00058f8c 917a
.org 0x58f8e
	lsrs r3, r1, #4	@ 00058f8e 0b09
.org 0x58f90
	movs r0, #1	@ 00058f90 0120
.org 0x58f92
	ands r3, r0	@ 00058f92 0340
.org 0x58f94
	orrs r0, r1	@ 00058f94 0843
.org 0x58f96
	strb r0, [r2, #10]	@ 00058f96 9072
.org 0x58f98
	movs r4, #0	@ 00058f98 0024
.org 0x58f9a
	adds r0, r2, #0	@ 00058f9a 101c
.org 0x58f9c
	adds r0, #204	@ 00058f9c cc30
.org 0x58f9e
	ldr r0, [r0, #0]	@ 00058f9e 0068
.org 0x58fa0
	movs r1, #240	@ 00058fa0 f021
.org 0x58fa2
	lsls r1, r1, #8	@ 00058fa2 0902
.org 0x58fa4
	adds r0, r0, r1	@ 00058fa4 4018
.org 0x58fa6
	ldr r1, [r2, #84]	@ 00058fa6 516d
.org 0x58fa8
	cmp r1, r0	@ 00058fa8 8142
.org 0x58faa
	blt.n 0x58fae	@ 00058faa 00db
.org 0x58fac
	movs r4, #1	@ 00058fac 0124
.org 0x58fae
	movs r0, #3	@ 00058fae 0320
.org 0x58fb0
	cmp r4, r3	@ 00058fb0 9c42
.org 0x58fb2
	bne.n 0x58fb6	@ 00058fb2 00d1
.org 0x58fb4
	movs r0, #1	@ 00058fb4 0120
.org 0x58fb6
	strb r0, [r2, #14]	@ 00058fb6 9073
.org 0x58fb8
	movs r0, #0	@ 00058fb8 0020
.org 0x58fba
	strb r0, [r2, #15]	@ 00058fba d073
.org 0x58fbc
	ldr r1, [pc, #20]	@ 00058fbc 0549
.org 0x58fbe
	ldrb r0, [r2, #14]	@ 00058fbe 907b
.org 0x58fc0
	lsls r0, r0, #2	@ 00058fc0 8000
.org 0x58fc2
	adds r0, r0, r1	@ 00058fc2 4018
.org 0x58fc4
	ldr r1, [r0, #0]	@ 00058fc4 0168
.org 0x58fc6
	adds r0, r2, #0	@ 00058fc6 101c
.org 0x58fc8
	bl 0x128f80	@ 00058fc8 cff0daff
.org 0x58fcc
	pop {r4}	@ 00058fcc 10bc
.org 0x58fce
	pop {r0}	@ 00058fce 01bc
.org 0x58fd0
	bx r0	@ 00058fd0 0047
