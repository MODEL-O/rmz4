@ FUN_0803b574  entry 0x0803b574  size 30
.thumb
.org 0x3b574
FUN_0803b574:
	push {lr}	@ 0003b574 00b5
.org 0x3b576
	adds r3, r0, #0	@ 0003b576 031c
.org 0x3b578
	adds r3, #180	@ 0003b578 b433
.org 0x3b57a
	ldr r2, [r3, #0]	@ 0003b57a 1a68
.org 0x3b57c
	movs r1, #164	@ 0003b57c a421
.org 0x3b57e
	lsls r1, r1, #1	@ 0003b57e 4900
.org 0x3b580
	adds r2, r2, r1	@ 0003b580 5218
.org 0x3b582
	ldrb r1, [r2, #0]	@ 0003b582 1178
.org 0x3b584
	ldrb r3, [r3, #14]	@ 0003b584 9b7b
.org 0x3b586
	subs r1, r1, r3	@ 0003b586 c91a
.org 0x3b588
	strb r1, [r2, #0]	@ 0003b588 1170
.org 0x3b58a
	bl 0x55a4	@ 0003b58a caf70bf8
.org 0x3b58e
	pop {r0}	@ 0003b58e 01bc
.org 0x3b590
	bx r0	@ 0003b590 0047
