@ FUN_080be300  entry 0x080be300  size 50
.thumb
.org 0xbe300
FUN_080be300:
	push {r4, lr}	@ 000be300 10b5
.org 0xbe302
	adds r4, r0, #0	@ 000be302 041c
.org 0xbe304
	bl 0x1cc9c	@ 000be304 5ef7cafc
.org 0xbe308
	ldrb r1, [r4, #10]	@ 000be308 a17a
.org 0xbe30a
	movs r0, #1	@ 000be30a 0120
.org 0xbe30c
	orrs r0, r1	@ 000be30c 0843
.org 0xbe30e
	movs r1, #2	@ 000be30e 0221
.org 0xbe310
	orrs r0, r1	@ 000be310 0843
.org 0xbe312
	strb r0, [r4, #10]	@ 000be312 a072
.org 0xbe314
	ldr r1, [pc, #28]	@ 000be314 0749
.org 0xbe316
	ldrb r0, [r4, #9]	@ 000be316 607a
.org 0xbe318
	lsls r0, r0, #2	@ 000be318 8000
.org 0xbe31a
	adds r0, r0, r1	@ 000be31a 4018
.org 0xbe31c
	movs r1, #1	@ 000be31c 0121
.org 0xbe31e
	str r1, [r4, #12]	@ 000be31e e160
.org 0xbe320
	ldr r0, [r0, #0]	@ 000be320 0068
.org 0xbe322
	ldr r0, [r0, #4]	@ 000be322 4068
.org 0xbe324
	str r0, [r4, #20]	@ 000be324 6061
.org 0xbe326
	adds r0, r4, #0	@ 000be326 201c
.org 0xbe328
	bl 0xbe338	@ 000be328 00f006f8
.org 0xbe32c
	pop {r4}	@ 000be32c 10bc
.org 0xbe32e
	pop {r0}	@ 000be32e 01bc
.org 0xbe330
	bx r0	@ 000be330 0047
