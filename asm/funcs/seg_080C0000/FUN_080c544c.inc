@ FUN_080c544c  entry 0x080c544c  size 90
.thumb
.org 0xc544c
FUN_080c544c:
	push {r4, r5, r6, r7, lr}	@ 000c544c f0b5
.org 0xc544e
	adds r4, r0, #0	@ 000c544e 041c
.org 0xc5450
	adds r5, r1, #0	@ 000c5450 0d1c
.org 0xc5452
	adds r6, r2, #0	@ 000c5452 161c
.org 0xc5454
	lsls r3, r3, #24	@ 000c5454 1b06
.org 0xc5456
	lsrs r7, r3, #24	@ 000c5456 1f0e
.org 0xc5458
	ldr r0, [pc, #76]	@ 000c5458 1348
.org 0xc545a
	ldr r0, [r0, #0]	@ 000c545a 0068
.org 0xc545c
	bl 0x5500	@ 000c545c 40f750f8
.org 0xc5460
	adds r3, r0, #0	@ 000c5460 031c
.org 0xc5462
	cmp r3, #0	@ 000c5462 002b
.org 0xc5464
	beq.n 0xc549e	@ 000c5464 1bd0
.org 0xc5466
	adds r1, r3, #0	@ 000c5466 191c
.org 0xc5468
	adds r1, #37	@ 000c5468 2531
.org 0xc546a
	movs r2, #0	@ 000c546a 0022
.org 0xc546c
	movs r0, #8	@ 000c546c 0820
.org 0xc546e
	strb r0, [r1, #0]	@ 000c546e 0870
.org 0xc5470
	ldr r1, [pc, #56]	@ 000c5470 0e49
.org 0xc5472
	movs r0, #24	@ 000c5472 1820
.org 0xc5474
	strb r0, [r3, #9]	@ 000c5474 5872
.org 0xc5476
	ldr r0, [r1, #96]	@ 000c5476 086e
.org 0xc5478
	ldr r0, [r0, #0]	@ 000c5478 0068
.org 0xc547a
	str r0, [r3, #20]	@ 000c547a 5861
.org 0xc547c
	movs r0, #0	@ 000c547c 0020
.org 0xc547e
	strh r2, [r3, #32]	@ 000c547e 1a84
.org 0xc5480
	adds r1, r3, #0	@ 000c5480 191c
.org 0xc5482
	adds r1, #34	@ 000c5482 2231
.org 0xc5484
	strb r0, [r1, #0]	@ 000c5484 0870
.org 0xc5486
	str r4, [r3, #40]	@ 000c5486 9c62
.org 0xc5488
	ldr r0, [r5, #0]	@ 000c5488 2868
.org 0xc548a
	ldr r1, [r5, #4]	@ 000c548a 6968
.org 0xc548c
	str r0, [r3, #84]	@ 000c548c 5865
.org 0xc548e
	str r1, [r3, #88]	@ 000c548e 9965
.org 0xc5490
	ldr r0, [r6, #0]	@ 000c5490 3068
.org 0xc5492
	ldr r1, [r6, #4]	@ 000c5492 7168
.org 0xc5494
	str r0, [r3, #92]	@ 000c5494 d865
.org 0xc5496
	str r1, [r3, #96]	@ 000c5496 1966
.org 0xc5498
	movs r0, #1	@ 000c5498 0120
.org 0xc549a
	strb r0, [r3, #16]	@ 000c549a 1874
.org 0xc549c
	strb r7, [r3, #17]	@ 000c549c 5f74
.org 0xc549e
	adds r0, r3, #0	@ 000c549e 181c
.org 0xc54a0
	pop {r4, r5, r6, r7}	@ 000c54a0 f0bc
.org 0xc54a2
	pop {r1}	@ 000c54a2 02bc
.org 0xc54a4
	bx r1	@ 000c54a4 0847
