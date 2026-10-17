@ FUN_080e243c  entry 0x080e243c  size 64
.thumb
.org 0xe243c
FUN_080e243c:
	push {r4, r5, r6, lr}	@ 000e243c 70b5
.org 0xe243e
	adds r4, r0, #0	@ 000e243e 041c
.org 0xe2440
	bl 0xe255c	@ 000e2440 00f08cf8
.org 0xe2444
	adds r6, r4, #0	@ 000e2444 261c
.org 0xe2446
	adds r6, #84	@ 000e2446 5436
.org 0xe2448
	movs r1, #193	@ 000e2448 c121
.org 0xe244a
	lsls r1, r1, #2	@ 000e244a 8900
.org 0xe244c
	ldrb r2, [r4, #10]	@ 000e244c a27a
.org 0xe244e
	lsrs r2, r2, #4	@ 000e244e 1209
.org 0xe2450
	movs r5, #1	@ 000e2450 0125
.org 0xe2452
	ands r2, r5	@ 000e2452 2a40
.org 0xe2454
	adds r0, r6, #0	@ 000e2454 301c
.org 0xe2456
	bl 0xe2188	@ 000e2456 fff797fe
.org 0xe245a
	movs r2, #128	@ 000e245a 8022
.org 0xe245c
	lsls r2, r2, #2	@ 000e245c 9200
.org 0xe245e
	ldrb r3, [r4, #10]	@ 000e245e a37a
.org 0xe2460
	lsrs r3, r3, #4	@ 000e2460 1b09
.org 0xe2462
	ands r3, r5	@ 000e2462 2b40
.org 0xe2464
	movs r0, #0	@ 000e2464 0020
.org 0xe2466
	adds r1, r6, #0	@ 000e2466 311c
.org 0xe2468
	bl 0xd0dc4	@ 000e2468 eef7acfc
.org 0xe246c
	movs r0, #3	@ 000e246c 0320
.org 0xe246e
	strb r0, [r4, #17]	@ 000e246e 6074
.org 0xe2470
	adds r4, #37	@ 000e2470 2534
.org 0xe2472
	movs r0, #24	@ 000e2472 1820
.org 0xe2474
	strb r0, [r4, #0]	@ 000e2474 2070
.org 0xe2476
	pop {r4, r5, r6}	@ 000e2476 70bc
.org 0xe2478
	pop {r0}	@ 000e2478 01bc
.org 0xe247a
	bx r0	@ 000e247a 0047
