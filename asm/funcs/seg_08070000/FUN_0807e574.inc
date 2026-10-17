@ FUN_0807e574  entry 0x0807e574  size 30
.thumb
.org 0x7e574
FUN_0807e574:
	push {lr}	@ 0007e574 00b5
.org 0x7e576
	ldrb r1, [r0, #14]	@ 0007e576 817b
.org 0x7e578
	adds r1, #1	@ 0007e578 0131
.org 0x7e57a
	movs r2, #0	@ 0007e57a 0022
.org 0x7e57c
	strb r1, [r0, #14]	@ 0007e57c 8173
.org 0x7e57e
	strb r2, [r0, #15]	@ 0007e57e c273
.org 0x7e580
	ldr r2, [pc, #16]	@ 0007e580 044a
.org 0x7e582
	ldrb r1, [r0, #13]	@ 0007e582 417b
.org 0x7e584
	lsls r1, r1, #2	@ 0007e584 8900
.org 0x7e586
	adds r1, r1, r2	@ 0007e586 8918
.org 0x7e588
	ldr r1, [r1, #0]	@ 0007e588 0968
.org 0x7e58a
	bl 0x128f80	@ 0007e58a aaf0f9fc
.org 0x7e58e
	pop {r0}	@ 0007e58e 01bc
.org 0x7e590
	bx r0	@ 0007e590 0047
