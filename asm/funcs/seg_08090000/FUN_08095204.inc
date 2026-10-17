@ FUN_08095204  entry 0x08095204  size 64
.thumb
.org 0x95204
FUN_08095204:
	push {r4, lr}	@ 00095204 10b5
.org 0x95206
	adds r4, r0, #0	@ 00095206 041c
.org 0x95208
	ldr r1, [pc, #56]	@ 00095208 0e49
.org 0x9520a
	ldrb r0, [r4, #9]	@ 0009520a 607a
.org 0x9520c
	lsls r0, r0, #2	@ 0009520c 8000
.org 0x9520e
	adds r0, r0, r1	@ 0009520e 4018
.org 0x95210
	movs r1, #1	@ 00095210 0121
.org 0x95212
	str r1, [r4, #12]	@ 00095212 e160
.org 0x95214
	ldr r0, [r0, #0]	@ 00095214 0068
.org 0x95216
	ldr r0, [r0, #4]	@ 00095216 4068
.org 0x95218
	str r0, [r4, #20]	@ 00095218 6061
.org 0x9521a
	ldrb r1, [r4, #10]	@ 0009521a a17a
.org 0x9521c
	movs r0, #1	@ 0009521c 0120
.org 0x9521e
	movs r2, #0	@ 0009521e 0022
.org 0x95220
	orrs r0, r1	@ 00095220 0843
.org 0x95222
	movs r1, #2	@ 00095222 0221
.org 0x95224
	orrs r0, r1	@ 00095224 0843
.org 0x95226
	strb r0, [r4, #10]	@ 00095226 a072
.org 0x95228
	adds r0, r4, #0	@ 00095228 201c
.org 0x9522a
	adds r0, #184	@ 0009522a b830
.org 0x9522c
	str r2, [r0, #0]	@ 0009522c 0260
.org 0x9522e
	adds r0, #4	@ 0009522e 0430
.org 0x95230
	str r2, [r0, #0]	@ 00095230 0260
.org 0x95232
	adds r0, r4, #0	@ 00095232 201c
.org 0x95234
	bl 0x1cc9c	@ 00095234 87f732fd
.org 0x95238
	adds r0, r4, #0	@ 00095238 201c
.org 0x9523a
	bl 0x95390	@ 0009523a 00f0a9f8
.org 0x9523e
	pop {r4}	@ 0009523e 10bc
.org 0x95240
	pop {r0}	@ 00095240 01bc
.org 0x95242
	bx r0	@ 00095242 0047
