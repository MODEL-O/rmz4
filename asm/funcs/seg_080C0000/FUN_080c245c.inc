@ FUN_080c245c  entry 0x080c245c  size 62
.thumb
.org 0xc245c
FUN_080c245c:
	push {r4, lr}	@ 000c245c 10b5
.org 0xc245e
	adds r4, r0, #0	@ 000c245e 041c
.org 0xc2460
	ldr r0, [pc, #56]	@ 000c2460 0e48
.org 0xc2462
	ldr r0, [r0, #0]	@ 000c2462 0068
.org 0xc2464
	bl 0x5500	@ 000c2464 43f74cf8
.org 0xc2468
	adds r3, r0, #0	@ 000c2468 031c
.org 0xc246a
	cmp r3, #0	@ 000c246a 002b
.org 0xc246c
	beq.n 0xc2492	@ 000c246c 11d0
.org 0xc246e
	adds r1, r3, #0	@ 000c246e 191c
.org 0xc2470
	adds r1, #37	@ 000c2470 2531
.org 0xc2472
	movs r2, #0	@ 000c2472 0022
.org 0xc2474
	movs r0, #8	@ 000c2474 0820
.org 0xc2476
	strb r0, [r1, #0]	@ 000c2476 0870
.org 0xc2478
	ldr r1, [pc, #36]	@ 000c2478 0949
.org 0xc247a
	movs r0, #15	@ 000c247a 0f20
.org 0xc247c
	strb r0, [r3, #9]	@ 000c247c 5872
.org 0xc247e
	ldr r0, [r1, #60]	@ 000c247e c86b
.org 0xc2480
	ldr r0, [r0, #0]	@ 000c2480 0068
.org 0xc2482
	str r0, [r3, #20]	@ 000c2482 5861
.org 0xc2484
	movs r0, #0	@ 000c2484 0020
.org 0xc2486
	strh r2, [r3, #32]	@ 000c2486 1a84
.org 0xc2488
	adds r1, r3, #0	@ 000c2488 191c
.org 0xc248a
	adds r1, #34	@ 000c248a 2231
.org 0xc248c
	strb r0, [r1, #0]	@ 000c248c 0870
.org 0xc248e
	str r4, [r3, #40]	@ 000c248e 9c62
.org 0xc2490
	strb r0, [r3, #16]	@ 000c2490 1874
.org 0xc2492
	adds r0, r3, #0	@ 000c2492 181c
.org 0xc2494
	pop {r4}	@ 000c2494 10bc
.org 0xc2496
	pop {r1}	@ 000c2496 02bc
.org 0xc2498
	bx r1	@ 000c2498 0847
