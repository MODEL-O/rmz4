@ FUN_0803351c  entry 0x0803351c  size 44
.thumb
.org 0x3351c
FUN_0803351c:
	push {r4, lr}	@ 0003351c 10b5
.org 0x3351e
	adds r4, r0, #0	@ 0003351e 041c
.org 0x33520
	bl 0x3a19c	@ 00033520 06f03cfe
.org 0x33524
	adds r1, r0, #0	@ 00033524 011c
.org 0x33526
	cmp r1, #0	@ 00033526 0029
.org 0x33528
	bne.n 0x33534	@ 00033528 04d1
.org 0x3352a
	movs r2, #128	@ 0003352a 8022
.org 0x3352c
	lsls r2, r2, #1	@ 0003352c 5200
.org 0x3352e
	adds r0, r4, r2	@ 0003352e a018
.org 0x33530
	strb r1, [r0, #0]	@ 00033530 0170
.org 0x33532
	b.n 0x33542	@ 00033532 06e0
.org 0x33534
	ldr r0, [pc, #16]	@ 00033534 0448
.org 0x33536
	adds r1, r4, r0	@ 00033536 2118
.org 0x33538
	movs r0, #1	@ 00033538 0120
.org 0x3353a
	strb r0, [r1, #0]	@ 0003353a 0870
.org 0x3353c
	adds r0, r4, #0	@ 0003353c 201c
.org 0x3353e
	bl 0x3354c	@ 0003353e 00f005f8
.org 0x33542
	pop {r4}	@ 00033542 10bc
.org 0x33544
	pop {r0}	@ 00033544 01bc
.org 0x33546
	bx r0	@ 00033546 0047
