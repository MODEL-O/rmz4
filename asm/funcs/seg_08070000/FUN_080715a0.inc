@ FUN_080715a0  entry 0x080715a0  size 20
.thumb
.org 0x715a0
FUN_080715a0:
	push {lr}	@ 000715a0 00b5
.org 0x715a2
	ldr r2, [pc, #16]	@ 000715a2 044a
.org 0x715a4
	ldrb r1, [r0, #14]	@ 000715a4 817b
.org 0x715a6
	lsls r1, r1, #2	@ 000715a6 8900
.org 0x715a8
	adds r1, r1, r2	@ 000715a8 8918
.org 0x715aa
	ldr r1, [r1, #0]	@ 000715aa 0968
.org 0x715ac
	bl 0x128f80	@ 000715ac b7f0e8fc
.org 0x715b0
	pop {r0}	@ 000715b0 01bc
.org 0x715b2
	bx r0	@ 000715b2 0047
