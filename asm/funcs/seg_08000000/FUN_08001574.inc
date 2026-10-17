@ FUN_08001574  entry 0x08001574  size 22
.thumb
.org 0x1574
FUN_08001574:
	push {lr}	@ 00001574 00b5
.org 0x1576
	ldr r0, [pc, #20]	@ 00001576 0548
.org 0x1578
	ldr r2, [pc, #20]	@ 00001578 054a
.org 0x157a
	ldrb r1, [r0, #2]	@ 0000157a 8178
.org 0x157c
	lsls r1, r1, #2	@ 0000157c 8900
.org 0x157e
	adds r1, r1, r2	@ 0000157e 8918
.org 0x1580
	ldr r1, [r1, #0]	@ 00001580 0968
.org 0x1582
	bl 0x128f80	@ 00001582 27f1fdfc
.org 0x1586
	pop {r0}	@ 00001586 01bc
.org 0x1588
	bx r0	@ 00001588 0047
