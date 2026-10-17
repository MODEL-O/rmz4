@ FUN_080920fc  entry 0x080920fc  size 84
.thumb
.org 0x920fc
FUN_080920fc:
	push {r4, r5, r6, lr}	@ 000920fc 70b5
.org 0x920fe
	adds r5, r0, #0	@ 000920fe 051c
.org 0x92100
	adds r6, r1, #0	@ 00092100 0e1c
.org 0x92102
	lsls r2, r2, #24	@ 00092102 1206
.org 0x92104
	lsrs r4, r2, #24	@ 00092104 140e
.org 0x92106
	ldr r0, [pc, #72]	@ 00092106 1248
.org 0x92108
	ldr r0, [r0, #0]	@ 00092108 0068
.org 0x9210a
	bl 0x54cc	@ 0009210a 73f7dff9
.org 0x9210e
	adds r3, r0, #0	@ 0009210e 031c
.org 0x92110
	cmp r3, #0	@ 00092110 002b
.org 0x92112
	beq.n 0x9214a	@ 00092112 1ad0
.org 0x92114
	adds r1, r3, #0	@ 00092114 191c
.org 0x92116
	adds r1, #37	@ 00092116 2531
.org 0x92118
	movs r2, #0	@ 00092118 0022
.org 0x9211a
	movs r0, #24	@ 0009211a 1820
.org 0x9211c
	strb r0, [r1, #0]	@ 0009211c 0870
.org 0x9211e
	ldr r1, [pc, #52]	@ 0009211e 0d49
.org 0x92120
	movs r0, #23	@ 00092120 1720
.org 0x92122
	strb r0, [r3, #9]	@ 00092122 5872
.org 0x92124
	ldr r0, [r1, #92]	@ 00092124 c86d
.org 0x92126
	ldr r0, [r0, #0]	@ 00092126 0068
.org 0x92128
	str r0, [r3, #20]	@ 00092128 5861
.org 0x9212a
	movs r0, #0	@ 0009212a 0020
.org 0x9212c
	strh r2, [r3, #32]	@ 0009212c 1a84
.org 0x9212e
	adds r1, r3, #0	@ 0009212e 191c
.org 0x92130
	adds r1, #34	@ 00092130 2231
.org 0x92132
	strb r0, [r1, #0]	@ 00092132 0870
.org 0x92134
	ldrb r1, [r3, #11]	@ 00092134 d97a
.org 0x92136
	movs r0, #16	@ 00092136 1020
.org 0x92138
	orrs r0, r1	@ 00092138 0843
.org 0x9213a
	strb r0, [r3, #11]	@ 0009213a d872
.org 0x9213c
	ldrb r0, [r3, #28]	@ 0009213c 187f
.org 0x9213e
	strb r0, [r3, #29]	@ 0009213e 5877
.org 0x92140
	movs r0, #1	@ 00092140 0120
.org 0x92142
	strb r0, [r3, #16]	@ 00092142 1874
.org 0x92144
	strb r4, [r3, #18]	@ 00092144 9c74
.org 0x92146
	str r5, [r3, #84]	@ 00092146 5d65
.org 0x92148
	str r6, [r3, #88]	@ 00092148 9e65
.org 0x9214a
	pop {r4, r5, r6}	@ 0009214a 70bc
.org 0x9214c
	pop {r0}	@ 0009214c 01bc
.org 0x9214e
	bx r0	@ 0009214e 0047
