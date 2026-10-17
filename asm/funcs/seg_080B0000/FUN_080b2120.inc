@ FUN_080b2120  entry 0x080b2120  size 50
.thumb
.org 0xb2120
FUN_080b2120:
	push {r4, r5, lr}	@ 000b2120 30b5
.org 0xb2122
	adds r4, r0, #0	@ 000b2122 041c
.org 0xb2124
	adds r5, r4, #0	@ 000b2124 251c
.org 0xb2126
	adds r5, #192	@ 000b2126 c035
.org 0xb2128
	ldr r0, [r5, #0]	@ 000b2128 2868
.org 0xb212a
	bl 0x2b3e4	@ 000b212a 79f75bf9
.org 0xb212e
	cmp r0, #0	@ 000b212e 0028
.org 0xb2130
	beq.n 0xb214c	@ 000b2130 0cd0
.org 0xb2132
	ldrb r0, [r4, #13]	@ 000b2132 607b
.org 0xb2134
	cmp r0, #5	@ 000b2134 0528
.org 0xb2136
	beq.n 0xb2148	@ 000b2136 07d0
.org 0xb2138
	adds r0, r4, #0	@ 000b2138 201c
.org 0xb213a
	adds r0, #116	@ 000b213a 7430
.org 0xb213c
	ldr r1, [pc, #20]	@ 000b213c 0549
.org 0xb213e
	bl 0x5784	@ 000b213e 53f721fb
.org 0xb2142
	movs r0, #0	@ 000b2142 0020
.org 0xb2144
	strb r0, [r4, #13]	@ 000b2144 6073
.org 0xb2146
	strb r0, [r4, #14]	@ 000b2146 a073
.org 0xb2148
	movs r0, #0	@ 000b2148 0020
.org 0xb214a
	str r0, [r5, #0]	@ 000b214a 2860
.org 0xb214c
	pop {r4, r5}	@ 000b214c 30bc
.org 0xb214e
	pop {r0}	@ 000b214e 01bc
.org 0xb2150
	bx r0	@ 000b2150 0047
