@ FUN_080f2120  entry 0x080f2120  size 70
.thumb
.org 0xf2120
FUN_080f2120:
	push {r4, r5, r6, lr}	@ 000f2120 70b5
.org 0xf2122
	adds r4, r0, #0	@ 000f2122 041c
.org 0xf2124
	ldrb r1, [r4, #10]	@ 000f2124 a17a
.org 0xf2126
	movs r0, #2	@ 000f2126 0220
.org 0xf2128
	movs r6, #0	@ 000f2128 0026
.org 0xf212a
	orrs r0, r1	@ 000f212a 0843
.org 0xf212c
	movs r1, #4	@ 000f212c 0421
.org 0xf212e
	orrs r0, r1	@ 000f212e 0843
.org 0xf2130
	strb r0, [r4, #10]	@ 000f2130 a072
.org 0xf2132
	adds r5, r4, #0	@ 000f2132 251c
.org 0xf2134
	adds r5, #116	@ 000f2134 7435
.org 0xf2136
	ldr r1, [pc, #48]	@ 000f2136 0c49
.org 0xf2138
	adds r2, r4, #0	@ 000f2138 221c
.org 0xf213a
	adds r2, #84	@ 000f213a 5432
.org 0xf213c
	adds r0, r5, #0	@ 000f213c 281c
.org 0xf213e
	movs r3, #0	@ 000f213e 0023
.org 0xf2140
	bl 0x5760	@ 000f2140 13f70efb
.org 0xf2144
	str r4, [r5, #44]	@ 000f2144 ec62
.org 0xf2146
	str r6, [r5, #36]	@ 000f2146 6e62
.org 0xf2148
	ldr r1, [pc, #32]	@ 000f2148 0849
.org 0xf214a
	ldrb r0, [r4, #9]	@ 000f214a 607a
.org 0xf214c
	lsls r0, r0, #2	@ 000f214c 8000
.org 0xf214e
	adds r0, r0, r1	@ 000f214e 4018
.org 0xf2150
	movs r1, #1	@ 000f2150 0121
.org 0xf2152
	str r1, [r4, #12]	@ 000f2152 e160
.org 0xf2154
	ldr r0, [r0, #0]	@ 000f2154 0068
.org 0xf2156
	ldr r0, [r0, #4]	@ 000f2156 4068
.org 0xf2158
	str r0, [r4, #20]	@ 000f2158 6061
.org 0xf215a
	adds r0, r4, #0	@ 000f215a 201c
.org 0xf215c
	bl 0xf2170	@ 000f215c 00f008f8
.org 0xf2160
	pop {r4, r5, r6}	@ 000f2160 70bc
.org 0xf2162
	pop {r0}	@ 000f2162 01bc
.org 0xf2164
	bx r0	@ 000f2164 0047
