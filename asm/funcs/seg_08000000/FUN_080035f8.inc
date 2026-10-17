@ FUN_080035f8  entry 0x080035f8  size 36
.thumb
.org 0x35f8
FUN_080035f8:
	push {r4, r5, lr}	@ 000035f8 30b5
.org 0x35fa
	ldr r4, [sp, #12]	@ 000035fa 039c
.org 0x35fc
	ldr r5, [sp, #16]	@ 000035fc 049d
.org 0x35fe
	ldr r2, [r1, #0]	@ 000035fe 0a68
.org 0x3600
	str r2, [r0, #0]	@ 00003600 0260
.org 0x3602
	ldr r1, [r1, #4]	@ 00003602 4968
.org 0x3604
	str r1, [r0, #4]	@ 00003604 4160
.org 0x3606
	str r3, [r0, #12]	@ 00003606 c360
.org 0x3608
	str r4, [r0, #16]	@ 00003608 0461
.org 0x360a
	str r5, [r0, #20]	@ 0000360a 4561
.org 0x360c
	ldr r3, [pc, #12]	@ 0000360c 034b
.org 0x360e
	ands r2, r3	@ 0000360e 1a40
.org 0x3610
	strh r2, [r0, #8]	@ 00003610 0281
.org 0x3612
	ands r1, r3	@ 00003612 1940
.org 0x3614
	strh r1, [r0, #10]	@ 00003614 4181
.org 0x3616
	pop {r4, r5}	@ 00003616 30bc
.org 0x3618
	pop {r0}	@ 00003618 01bc
.org 0x361a
	bx r0	@ 0000361a 0047
