@ FUN_080e2134  entry 0x080e2134  size 48
.thumb
.org 0xe2134
FUN_080e2134:
	push {r4, lr}	@ 000e2134 10b5
.org 0xe2136
	adds r4, r0, #0	@ 000e2136 041c
.org 0xe2138
	bl 0x1cff0	@ 000e2138 3af75aff
.org 0xe213c
	adds r0, r4, #0	@ 000e213c 201c
.org 0xe213e
	adds r0, #115	@ 000e213e 7330
.org 0xe2140
	ldrb r0, [r0, #0]	@ 000e2140 0078
.org 0xe2142
	cmp r0, #3	@ 000e2142 0328
.org 0xe2144
	bne.n 0xe215e	@ 000e2144 0bd1
.org 0xe2146
	ldr r1, [pc, #28]	@ 000e2146 0749
.org 0xe2148
	ldrb r0, [r4, #9]	@ 000e2148 607a
.org 0xe214a
	lsls r0, r0, #2	@ 000e214a 8000
.org 0xe214c
	adds r0, r0, r1	@ 000e214c 4018
.org 0xe214e
	movs r1, #2	@ 000e214e 0221
.org 0xe2150
	str r1, [r4, #12]	@ 000e2150 e160
.org 0xe2152
	ldr r0, [r0, #0]	@ 000e2152 0068
.org 0xe2154
	ldr r0, [r0, #8]	@ 000e2154 8068
.org 0xe2156
	str r0, [r4, #20]	@ 000e2156 6061
.org 0xe2158
	adds r0, r4, #0	@ 000e2158 201c
.org 0xe215a
	bl 0xe2168	@ 000e215a 00f005f8
.org 0xe215e
	pop {r4}	@ 000e215e 10bc
.org 0xe2160
	pop {r0}	@ 000e2160 01bc
.org 0xe2162
	bx r0	@ 000e2162 0047
