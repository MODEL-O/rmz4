@ FUN_080e24c8  entry 0x080e24c8  size 52
.thumb
.org 0xe24c8
FUN_080e24c8:
	push {r4, r5, lr}	@ 000e24c8 30b5
.org 0xe24ca
	adds r4, r0, #0	@ 000e24ca 041c
.org 0xe24cc
	bl 0xe255c	@ 000e24cc 00f046f8
.org 0xe24d0
	adds r5, r4, #0	@ 000e24d0 251c
.org 0xe24d2
	adds r5, #84	@ 000e24d2 5435
.org 0xe24d4
	movs r0, #1	@ 000e24d4 0120
.org 0xe24d6
	adds r1, r5, #0	@ 000e24d6 291c
.org 0xe24d8
	bl 0xd0c88	@ 000e24d8 eef7d6fb
.org 0xe24dc
	adds r0, r4, #0	@ 000e24dc 201c
.org 0xe24de
	bl 0xe25a8	@ 000e24de 00f063f8
.org 0xe24e2
	movs r0, #0	@ 000e24e2 0020
.org 0xe24e4
	strb r0, [r4, #17]	@ 000e24e4 6074
.org 0xe24e6
	ldr r1, [pc, #20]	@ 000e24e6 0549
.org 0xe24e8
	ldrb r2, [r4, #10]	@ 000e24e8 a27a
.org 0xe24ea
	lsrs r2, r2, #4	@ 000e24ea 1209
.org 0xe24ec
	movs r0, #1	@ 000e24ec 0120
.org 0xe24ee
	ands r2, r0	@ 000e24ee 0240
.org 0xe24f0
	adds r0, r5, #0	@ 000e24f0 281c
.org 0xe24f2
	bl 0xe2188	@ 000e24f2 fff749fe
.org 0xe24f6
	pop {r4, r5}	@ 000e24f6 30bc
.org 0xe24f8
	pop {r0}	@ 000e24f8 01bc
.org 0xe24fa
	bx r0	@ 000e24fa 0047
