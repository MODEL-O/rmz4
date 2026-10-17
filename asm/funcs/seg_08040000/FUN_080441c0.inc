@ FUN_080441c0  entry 0x080441c0  size 108
.thumb
.org 0x441c0
FUN_080441c0:
	push {r4, r5, lr}	@ 000441c0 30b5
.org 0x441c2
	adds r4, r0, #0	@ 000441c2 041c
.org 0x441c4
	ldr r1, [pc, #100]	@ 000441c4 1949
.org 0x441c6
	ldrb r0, [r4, #9]	@ 000441c6 607a
.org 0x441c8
	lsls r0, r0, #2	@ 000441c8 8000
.org 0x441ca
	adds r0, r0, r1	@ 000441ca 4018
.org 0x441cc
	movs r1, #1	@ 000441cc 0121
.org 0x441ce
	str r1, [r4, #12]	@ 000441ce e160
.org 0x441d0
	ldr r0, [r0, #0]	@ 000441d0 0068
.org 0x441d2
	ldr r0, [r0, #4]	@ 000441d2 4068
.org 0x441d4
	str r0, [r4, #20]	@ 000441d4 6061
.org 0x441d6
	adds r0, r4, #0	@ 000441d6 201c
.org 0x441d8
	bl 0x1cc9c	@ 000441d8 d8f760fd
.org 0x441dc
	adds r0, r4, #0	@ 000441dc 201c
.org 0x441de
	bl 0x1ceec	@ 000441de d8f785fe
.org 0x441e2
	ldrb r1, [r4, #10]	@ 000441e2 a17a
.org 0x441e4
	movs r0, #1	@ 000441e4 0120
.org 0x441e6
	orrs r0, r1	@ 000441e6 0843
.org 0x441e8
	movs r1, #2	@ 000441e8 0221
.org 0x441ea
	orrs r0, r1	@ 000441ea 0843
.org 0x441ec
	strb r0, [r4, #10]	@ 000441ec a072
.org 0x441ee
	ldr r1, [pc, #64]	@ 000441ee 1049
.org 0x441f0
	adds r0, r4, #0	@ 000441f0 201c
.org 0x441f2
	bl 0x1cf00	@ 000441f2 d8f785fe
.org 0x441f6
	adds r0, r4, #0	@ 000441f6 201c
.org 0x441f8
	bl 0x1cff0	@ 000441f8 d8f7fafe
.org 0x441fc
	ldrb r1, [r4, #10]	@ 000441fc a17a
.org 0x441fe
	movs r0, #4	@ 000441fe 0420
.org 0x44200
	orrs r0, r1	@ 00044200 0843
.org 0x44202
	strb r0, [r4, #10]	@ 00044202 a072
.org 0x44204
	adds r5, r4, #0	@ 00044204 251c
.org 0x44206
	adds r5, #116	@ 00044206 7435
.org 0x44208
	ldr r1, [pc, #40]	@ 00044208 0a49
.org 0x4420a
	adds r2, r4, #0	@ 0004420a 221c
.org 0x4420c
	adds r2, #84	@ 0004420c 5432
.org 0x4420e
	adds r0, r5, #0	@ 0004420e 281c
.org 0x44210
	movs r3, #8	@ 00044210 0823
.org 0x44212
	bl 0x5760	@ 00044212 c1f7a5fa
.org 0x44216
	str r4, [r5, #44]	@ 00044216 ec62
.org 0x44218
	ldr r0, [pc, #28]	@ 00044218 0748
.org 0x4421a
	str r0, [r5, #36]	@ 0004421a 6862
.org 0x4421c
	movs r0, #16	@ 0004421c 1020
.org 0x4421e
	strb r0, [r4, #18]	@ 0004421e a074
.org 0x44220
	adds r0, r4, #0	@ 00044220 201c
.org 0x44222
	bl 0x4423c	@ 00044222 00f00bf8
.org 0x44226
	pop {r4, r5}	@ 00044226 30bc
.org 0x44228
	pop {r0}	@ 00044228 01bc
.org 0x4422a
	bx r0	@ 0004422a 0047
