@ FUN_0810547c  entry 0x0810547c  size 160
.thumb
.org 0x10547c
FUN_0810547c:
	push {r4, r5, r6, lr}	@ 0010547c 70b5
.org 0x10547e
	adds r6, r0, #0	@ 0010547e 061c
.org 0x105480
	bl 0x1cc9c	@ 00105480 17f70cfc
.org 0x105484
	ldrb r0, [r6, #10]	@ 00105484 b07a
.org 0x105486
	movs r1, #1	@ 00105486 0121
.org 0x105488
	orrs r1, r0	@ 00105488 0143
.org 0x10548a
	movs r0, #2	@ 0010548a 0220
.org 0x10548c
	orrs r1, r0	@ 0010548c 0143
.org 0x10548e
	ldrb r2, [r6, #11]	@ 0010548e f27a
.org 0x105490
	movs r3, #239	@ 00105490 ef23
.org 0x105492
	adds r0, r3, #0	@ 00105492 181c
.org 0x105494
	ands r0, r2	@ 00105494 1040
.org 0x105496
	strb r0, [r6, #11]	@ 00105496 f072
.org 0x105498
	ldrb r0, [r6, #28]	@ 00105498 307f
.org 0x10549a
	strb r0, [r6, #29]	@ 0010549a 7077
.org 0x10549c
	movs r5, #0	@ 0010549c 0025
.org 0x10549e
	ands r1, r3	@ 0010549e 1940
.org 0x1054a0
	strb r1, [r6, #10]	@ 001054a0 b172
.org 0x1054a2
	movs r2, #1	@ 001054a2 0122
.org 0x1054a4
	adds r0, r6, #0	@ 001054a4 301c
.org 0x1054a6
	adds r0, #76	@ 001054a6 4c30
.org 0x1054a8
	strb r5, [r0, #0]	@ 001054a8 0570
.org 0x1054aa
	adds r3, r6, #0	@ 001054aa 331c
.org 0x1054ac
	adds r3, #74	@ 001054ac 4a33
.org 0x1054ae
	ldrb r1, [r3, #0]	@ 001054ae 1978
.org 0x1054b0
	movs r0, #17	@ 001054b0 1120
.org 0x1054b2
	negs r0, r0	@ 001054b2 4042
.org 0x1054b4
	ands r0, r1	@ 001054b4 0840
.org 0x1054b6
	strb r0, [r3, #0]	@ 001054b6 1870
.org 0x1054b8
	ldr r1, [pc, #96]	@ 001054b8 1849
.org 0x1054ba
	ldrb r0, [r6, #9]	@ 001054ba 707a
.org 0x1054bc
	lsls r0, r0, #2	@ 001054bc 8000
.org 0x1054be
	adds r0, r0, r1	@ 001054be 4018
.org 0x1054c0
	str r2, [r6, #12]	@ 001054c0 f260
.org 0x1054c2
	ldr r0, [r0, #0]	@ 001054c2 0068
.org 0x1054c4
	ldr r0, [r0, #4]	@ 001054c4 4068
.org 0x1054c6
	str r0, [r6, #20]	@ 001054c6 7061
.org 0x1054c8
	ldrb r1, [r6, #10]	@ 001054c8 b17a
.org 0x1054ca
	movs r0, #4	@ 001054ca 0420
.org 0x1054cc
	orrs r0, r1	@ 001054cc 0843
.org 0x1054ce
	strb r0, [r6, #10]	@ 001054ce b072
.org 0x1054d0
	adds r4, r6, #0	@ 001054d0 341c
.org 0x1054d2
	adds r4, #116	@ 001054d2 7434
.org 0x1054d4
	ldr r1, [pc, #72]	@ 001054d4 1249
.org 0x1054d6
	adds r2, r6, #0	@ 001054d6 321c
.org 0x1054d8
	adds r2, #84	@ 001054d8 5432
.org 0x1054da
	adds r0, r4, #0	@ 001054da 201c
.org 0x1054dc
	movs r3, #128	@ 001054dc 8023
.org 0x1054de
	bl 0x5760	@ 001054de 00f73ff9
.org 0x1054e2
	str r6, [r4, #44]	@ 001054e2 e662
.org 0x1054e4
	ldr r0, [pc, #60]	@ 001054e4 0f48
.org 0x1054e6
	str r0, [r4, #36]	@ 001054e6 6062
.org 0x1054e8
	adds r0, r6, #0	@ 001054e8 301c
.org 0x1054ea
	adds r0, #180	@ 001054ea b430
.org 0x1054ec
	strb r5, [r0, #0]	@ 001054ec 0570
.org 0x1054ee
	adds r0, #1	@ 001054ee 0130
.org 0x1054f0
	strb r5, [r0, #0]	@ 001054f0 0570
.org 0x1054f2
	adds r0, #1	@ 001054f2 0130
.org 0x1054f4
	strb r5, [r0, #0]	@ 001054f4 0570
.org 0x1054f6
	ldr r0, [r6, #84]	@ 001054f6 706d
.org 0x1054f8
	ldr r1, [r6, #88]	@ 001054f8 b16d
.org 0x1054fa
	bl 0x8534	@ 001054fa 03f71bf8
.org 0x1054fe
	movs r1, #128	@ 001054fe 8021
.org 0x105500
	lsls r1, r1, #4	@ 00105500 0901
.org 0x105502
	adds r0, r0, r1	@ 00105502 4018
.org 0x105504
	str r0, [r6, #88]	@ 00105504 b065
.org 0x105506
	movs r1, #169	@ 00105506 a921
.org 0x105508
	lsls r1, r1, #8	@ 00105508 0902
.org 0x10550a
	adds r0, r6, #0	@ 0010550a 301c
.org 0x10550c
	bl 0x1cf00	@ 0010550c 17f7f8fc
.org 0x105510
	adds r0, r6, #0	@ 00105510 301c
.org 0x105512
	bl 0x105528	@ 00105512 00f009f8
.org 0x105516
	pop {r4, r5, r6}	@ 00105516 70bc
.org 0x105518
	pop {r0}	@ 00105518 01bc
.org 0x10551a
	bx r0	@ 0010551a 0047
