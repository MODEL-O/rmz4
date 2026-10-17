@ FUN_080d2564  entry 0x080d2564  size 62
.thumb
.org 0xd2564
FUN_080d2564:
	push {r4, lr}	@ 000d2564 10b5
.org 0xd2566
	adds r4, r0, #0	@ 000d2566 041c
.org 0xd2568
	bl 0x1cff0	@ 000d2568 4af742fd
.org 0xd256c
	ldr r0, [r4, #84]	@ 000d256c 606d
.org 0xd256e
	ldr r1, [r4, #92]	@ 000d256e e16d
.org 0xd2570
	adds r0, r0, r1	@ 000d2570 4018
.org 0xd2572
	str r0, [r4, #84]	@ 000d2572 6065
.org 0xd2574
	ldr r1, [r4, #88]	@ 000d2574 a16d
.org 0xd2576
	ldr r2, [r4, #96]	@ 000d2576 226e
.org 0xd2578
	adds r1, r1, r2	@ 000d2578 8918
.org 0xd257a
	str r1, [r4, #88]	@ 000d257a a165
.org 0xd257c
	adds r2, #64	@ 000d257c 4032
.org 0xd257e
	str r2, [r4, #96]	@ 000d257e 2266
.org 0xd2580
	bl 0x7c7c	@ 000d2580 35f77cfb
.org 0xd2584
	lsls r0, r0, #16	@ 000d2584 0004
.org 0xd2586
	cmp r0, #0	@ 000d2586 0028
.org 0xd2588
	beq.n 0xd259c	@ 000d2588 08d0
.org 0xd258a
	ldr r1, [pc, #24]	@ 000d258a 0649
.org 0xd258c
	ldrb r0, [r4, #9]	@ 000d258c 607a
.org 0xd258e
	lsls r0, r0, #2	@ 000d258e 8000
.org 0xd2590
	adds r0, r0, r1	@ 000d2590 4018
.org 0xd2592
	movs r1, #2	@ 000d2592 0221
.org 0xd2594
	str r1, [r4, #12]	@ 000d2594 e160
.org 0xd2596
	ldr r0, [r0, #0]	@ 000d2596 0068
.org 0xd2598
	ldr r0, [r0, #8]	@ 000d2598 8068
.org 0xd259a
	str r0, [r4, #20]	@ 000d259a 6061
.org 0xd259c
	pop {r4}	@ 000d259c 10bc
.org 0xd259e
	pop {r0}	@ 000d259e 01bc
.org 0xd25a0
	bx r0	@ 000d25a0 0047
