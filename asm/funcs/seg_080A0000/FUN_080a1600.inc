@ FUN_080a1600  entry 0x080a1600  size 20
.thumb
.org 0xa1600
FUN_080a1600:
	push {lr}	@ 000a1600 00b5
.org 0xa1602
	ldr r2, [pc, #16]	@ 000a1602 044a
.org 0xa1604
	ldrb r1, [r0, #13]	@ 000a1604 417b
.org 0xa1606
	lsls r1, r1, #2	@ 000a1606 8900
.org 0xa1608
	adds r1, r1, r2	@ 000a1608 8918
.org 0xa160a
	ldr r1, [r1, #0]	@ 000a160a 0968
.org 0xa160c
	bl 0x128f80	@ 000a160c 87f0b8fc
.org 0xa1610
	pop {r0}	@ 000a1610 01bc
.org 0xa1612
	bx r0	@ 000a1612 0047
