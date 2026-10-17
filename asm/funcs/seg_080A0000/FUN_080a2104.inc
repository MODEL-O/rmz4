@ FUN_080a2104  entry 0x080a2104  size 70
.thumb
.org 0xa2104
FUN_080a2104:
	push {r4, r5, r6, lr}	@ 000a2104 70b5
.org 0xa2106
	adds r4, r0, #0	@ 000a2106 041c
.org 0xa2108
	adds r5, r4, #0	@ 000a2108 251c
.org 0xa210a
	adds r5, #192	@ 000a210a c035
.org 0xa210c
	ldr r6, [r5, #0]	@ 000a210c 2e68
.org 0xa210e
	cmp r6, #0	@ 000a210e 002e
.org 0xa2110
	bne.n 0xa2144	@ 000a2110 18d1
.org 0xa2112
	adds r0, #140	@ 000a2112 8c30
.org 0xa2114
	ldr r0, [r0, #0]	@ 000a2114 0068
.org 0xa2116
	movs r1, #1	@ 000a2116 0121
.org 0xa2118
	ands r0, r1	@ 000a2118 0840
.org 0xa211a
	cmp r0, #0	@ 000a211a 0028
.org 0xa211c
	beq.n 0xa2144	@ 000a211c 12d0
.org 0xa211e
	ldr r2, [pc, #44]	@ 000a211e 0b4a
.org 0xa2120
	movs r0, #0	@ 000a2120 0020
.org 0xa2122
	adds r1, r4, #0	@ 000a2122 211c
.org 0xa2124
	bl 0x2adac	@ 000a2124 88f742fe
.org 0xa2128
	str r0, [r5, #0]	@ 000a2128 2860
.org 0xa212a
	cmp r0, #0	@ 000a212a 0028
.org 0xa212c
	beq.n 0xa2144	@ 000a212c 0ad0
.org 0xa212e
	adds r0, r4, #0	@ 000a212e 201c
.org 0xa2130
	adds r0, #116	@ 000a2130 7430
.org 0xa2132
	ldr r1, [pc, #28]	@ 000a2132 0749
.org 0xa2134
	bl 0x5784	@ 000a2134 63f726fb
.org 0xa2138
	movs r1, #190	@ 000a2138 be21
.org 0xa213a
	lsls r1, r1, #7	@ 000a213a c901
.org 0xa213c
	adds r0, r4, #0	@ 000a213c 201c
.org 0xa213e
	bl 0x1cf00	@ 000a213e 7af7dffe
.org 0xa2142
	str r6, [r4, #96]	@ 000a2142 2666
.org 0xa2144
	pop {r4, r5, r6}	@ 000a2144 70bc
.org 0xa2146
	pop {r0}	@ 000a2146 01bc
.org 0xa2148
	bx r0	@ 000a2148 0047
