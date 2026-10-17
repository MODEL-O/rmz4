@ FUN_08071438  entry 0x08071438  size 56
.thumb
.org 0x71438
FUN_08071438:
	push {lr}	@ 00071438 00b5
.org 0x7143a
	adds r2, r0, #0	@ 0007143a 021c
.org 0x7143c
	adds r0, #194	@ 0007143c c230
.org 0x7143e
	ldrb r1, [r0, #0]	@ 0007143e 0178
.org 0x71440
	subs r1, #1	@ 00071440 0139
.org 0x71442
	cmp r1, #0	@ 00071442 0029
.org 0x71444
	bgt.n 0x7144e	@ 00071444 03dc
.org 0x71446
	movs r1, #0	@ 00071446 0021
.org 0x71448
	ldrb r0, [r2, #14]	@ 00071448 907b
.org 0x7144a
	adds r0, #1	@ 0007144a 0130
.org 0x7144c
	b.n 0x71450	@ 0007144c 00e0
.org 0x7144e
	movs r0, #1	@ 0007144e 0120
.org 0x71450
	strb r0, [r2, #14]	@ 00071450 9073
.org 0x71452
	movs r0, #0	@ 00071452 0020
.org 0x71454
	strb r0, [r2, #15]	@ 00071454 d073
.org 0x71456
	adds r0, r2, #0	@ 00071456 101c
.org 0x71458
	adds r0, #194	@ 00071458 c230
.org 0x7145a
	strb r1, [r0, #0]	@ 0007145a 0170
.org 0x7145c
	ldr r1, [pc, #16]	@ 0007145c 0449
.org 0x7145e
	ldrb r0, [r2, #13]	@ 0007145e 507b
.org 0x71460
	lsls r0, r0, #2	@ 00071460 8000
.org 0x71462
	adds r0, r0, r1	@ 00071462 4018
.org 0x71464
	ldr r1, [r0, #0]	@ 00071464 0168
.org 0x71466
	adds r0, r2, #0	@ 00071466 101c
.org 0x71468
	bl 0x128f80	@ 00071468 b7f08afd
.org 0x7146c
	pop {r0}	@ 0007146c 01bc
.org 0x7146e
	bx r0	@ 0007146e 0047
