@ FUN_080f1540  entry 0x080f1540  size 38
.thumb
.org 0xf1540
FUN_080f1540:
	push {r4, r5, lr}	@ 000f1540 30b5
.org 0xf1542
	adds r5, r0, #0	@ 000f1542 051c
.org 0xf1544
	ldr r0, [pc, #32]	@ 000f1544 0848
.org 0xf1546
	ldr r4, [r0, #0]	@ 000f1546 0468
.org 0xf1548
	adds r0, r4, #0	@ 000f1548 201c
.org 0xf154a
	bl 0x3891c	@ 000f154a 47f7e7f9
.org 0xf154e
	adds r1, r0, #0	@ 000f154e 011c
.org 0xf1550
	lsls r1, r1, #24	@ 000f1550 0906
.org 0xf1552
	lsrs r1, r1, #24	@ 000f1552 090e
.org 0xf1554
	adds r0, r4, #0	@ 000f1554 201c
.org 0xf1556
	bl 0x2b53c	@ 000f1556 39f7f1ff
.org 0xf155a
	adds r0, r5, #0	@ 000f155a 281c
.org 0xf155c
	bl 0xedb2c	@ 000f155c fcf7e6fa
.org 0xf1560
	pop {r4, r5}	@ 000f1560 30bc
.org 0xf1562
	pop {r0}	@ 000f1562 01bc
.org 0xf1564
	bx r0	@ 000f1564 0047
