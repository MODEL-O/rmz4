@ FUN_0810a460  entry 0x0810a460  size 82
.thumb
.org 0x10a460
FUN_0810a460:
	push {r4, lr}	@ 0010a460 10b5
.org 0x10a462
	adds r4, r0, #0	@ 0010a462 041c
.org 0x10a464
	ldr r1, [pc, #76]	@ 0010a464 1349
.org 0x10a466
	ldrb r0, [r4, #9]	@ 0010a466 607a
.org 0x10a468
	lsls r0, r0, #2	@ 0010a468 8000
.org 0x10a46a
	adds r0, r0, r1	@ 0010a46a 4018
.org 0x10a46c
	movs r1, #1	@ 0010a46c 0121
.org 0x10a46e
	str r1, [r4, #12]	@ 0010a46e e160
.org 0x10a470
	ldr r0, [r0, #0]	@ 0010a470 0068
.org 0x10a472
	ldr r0, [r0, #4]	@ 0010a472 4068
.org 0x10a474
	str r0, [r4, #20]	@ 0010a474 6061
.org 0x10a476
	adds r0, r4, #0	@ 0010a476 201c
.org 0x10a478
	bl 0x1cc9c	@ 0010a478 12f710fc
.org 0x10a47c
	ldrb r1, [r4, #10]	@ 0010a47c a17a
.org 0x10a47e
	movs r0, #1	@ 0010a47e 0120
.org 0x10a480
	movs r2, #0	@ 0010a480 0022
.org 0x10a482
	orrs r0, r1	@ 0010a482 0843
.org 0x10a484
	movs r1, #2	@ 0010a484 0221
.org 0x10a486
	orrs r0, r1	@ 0010a486 0843
.org 0x10a488
	strb r0, [r4, #10]	@ 0010a488 a072
.org 0x10a48a
	adds r0, r4, #0	@ 0010a48a 201c
.org 0x10a48c
	adds r0, #76	@ 0010a48c 4c30
.org 0x10a48e
	strb r2, [r0, #0]	@ 0010a48e 0270
.org 0x10a490
	adds r2, r4, #0	@ 0010a490 221c
.org 0x10a492
	adds r2, #74	@ 0010a492 4a32
.org 0x10a494
	ldrb r1, [r2, #0]	@ 0010a494 1178
.org 0x10a496
	movs r0, #17	@ 0010a496 1120
.org 0x10a498
	negs r0, r0	@ 0010a498 4042
.org 0x10a49a
	ands r0, r1	@ 0010a49a 0840
.org 0x10a49c
	strb r0, [r2, #0]	@ 0010a49c 1070
.org 0x10a49e
	ldrb r1, [r4, #10]	@ 0010a49e a17a
.org 0x10a4a0
	movs r0, #239	@ 0010a4a0 ef20
.org 0x10a4a2
	ands r0, r1	@ 0010a4a2 0840
.org 0x10a4a4
	strb r0, [r4, #10]	@ 0010a4a4 a072
.org 0x10a4a6
	adds r0, r4, #0	@ 0010a4a6 201c
.org 0x10a4a8
	bl 0x10a4b8	@ 0010a4a8 00f006f8
.org 0x10a4ac
	pop {r4}	@ 0010a4ac 10bc
.org 0x10a4ae
	pop {r0}	@ 0010a4ae 01bc
.org 0x10a4b0
	bx r0	@ 0010a4b0 0047
