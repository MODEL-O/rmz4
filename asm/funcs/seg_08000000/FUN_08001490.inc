@ FUN_08001490  entry 0x08001490  size 28
.thumb
.org 0x1490
FUN_08001490:
	push {r4, r5, lr}	@ 00001490 30b5
.org 0x1492
	movs r4, #0	@ 00001492 0024
.org 0x1494
	ldr r5, [pc, #20]	@ 00001494 054d
.org 0x1496
	adds r0, r5, #0	@ 00001496 281c
.org 0x1498
	adds r1, r4, #0	@ 00001498 211c
.org 0x149a
	bl 0x14b0	@ 0000149a 00f009f8
.org 0x149e
	adds r5, #24	@ 0000149e 1835
.org 0x14a0
	adds r4, #1	@ 000014a0 0134
.org 0x14a2
	cmp r4, #1	@ 000014a2 012c
.org 0x14a4
	ble.n 0x1496	@ 000014a4 f7dd
.org 0x14a6
	pop {r4, r5}	@ 000014a6 30bc
.org 0x14a8
	pop {r0}	@ 000014a8 01bc
.org 0x14aa
	bx r0	@ 000014aa 0047
