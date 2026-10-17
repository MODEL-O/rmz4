@ FUN_080e255c  entry 0x080e255c  size 72
.thumb
.org 0xe255c
FUN_080e255c:
	push {r4, r5, lr}	@ 000e255c 30b5
.org 0xe255e
	adds r4, r0, #0	@ 000e255e 041c
.org 0xe2560
	ldr r0, [r4, #84]	@ 000e2560 606d
.org 0xe2562
	ldr r1, [r4, #88]	@ 000e2562 a16d
.org 0xe2564
	movs r2, #1	@ 000e2564 0122
.org 0xe2566
	bl 0xd0ff4	@ 000e2566 eef745fd
.org 0xe256a
	ldr r0, [r4, #84]	@ 000e256a 606d
.org 0xe256c
	ldr r1, [r4, #88]	@ 000e256c a16d
.org 0xe256e
	movs r5, #160	@ 000e256e a025
.org 0xe2570
	lsls r5, r5, #3	@ 000e2570 ed00
.org 0xe2572
	adds r1, r1, r5	@ 000e2572 4919
.org 0xe2574
	movs r2, #1	@ 000e2574 0122
.org 0xe2576
	bl 0xd0ff4	@ 000e2576 eef73dfd
.org 0xe257a
	ldr r0, [r4, #84]	@ 000e257a 606d
.org 0xe257c
	adds r0, r0, r5	@ 000e257c 4019
.org 0xe257e
	ldr r1, [r4, #88]	@ 000e257e a16d
.org 0xe2580
	movs r2, #0	@ 000e2580 0022
.org 0xe2582
	bl 0xd0ff4	@ 000e2582 eef737fd
.org 0xe2586
	ldr r0, [r4, #84]	@ 000e2586 606d
.org 0xe2588
	ldr r1, [r4, #88]	@ 000e2588 a16d
.org 0xe258a
	movs r2, #0	@ 000e258a 0022
.org 0xe258c
	bl 0xd0ff4	@ 000e258c eef732fd
.org 0xe2590
	ldr r0, [r4, #84]	@ 000e2590 606d
.org 0xe2592
	ldr r1, [pc, #16]	@ 000e2592 0449
.org 0xe2594
	adds r0, r0, r1	@ 000e2594 4018
.org 0xe2596
	ldr r1, [r4, #88]	@ 000e2596 a16d
.org 0xe2598
	movs r2, #0	@ 000e2598 0022
.org 0xe259a
	bl 0xd0ff4	@ 000e259a eef72bfd
.org 0xe259e
	pop {r4, r5}	@ 000e259e 30bc
.org 0xe25a0
	pop {r0}	@ 000e25a0 01bc
.org 0xe25a2
	bx r0	@ 000e25a2 0047
