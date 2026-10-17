@ FUN_08001464  entry 0x08001464  size 38
.thumb
.org 0x1464
FUN_08001464:
	push {r4, r5, r6, r7, lr}	@ 00001464 f0b5
.org 0x1466
	movs r6, #0	@ 00001466 0026
.org 0x1468
	ldr r7, [pc, #32]	@ 00001468 084f
.org 0x146a
	movs r5, #1	@ 0000146a 0125
.org 0x146c
	adds r4, r6, r7	@ 0000146c f419
.org 0x146e
	adds r0, r4, #0	@ 0000146e 201c
.org 0x1470
	bl 0x153c	@ 00001470 00f064f8
.org 0x1474
	movs r0, #24	@ 00001474 1820
.org 0x1476
	strb r0, [r4, #20]	@ 00001476 2075
.org 0x1478
	movs r0, #4	@ 00001478 0420
.org 0x147a
	strb r0, [r4, #21]	@ 0000147a 6075
.org 0x147c
	adds r6, #24	@ 0000147c 1836
.org 0x147e
	subs r5, #1	@ 0000147e 013d
.org 0x1480
	cmp r5, #0	@ 00001480 002d
.org 0x1482
	bge.n 0x146c	@ 00001482 f3da
.org 0x1484
	pop {r4, r5, r6, r7}	@ 00001484 f0bc
.org 0x1486
	pop {r0}	@ 00001486 01bc
.org 0x1488
	bx r0	@ 00001488 0047
