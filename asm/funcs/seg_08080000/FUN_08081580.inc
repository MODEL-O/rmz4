@ FUN_08081580  entry 0x08081580  size 20
.thumb
.org 0x81580
FUN_08081580:
	push {lr}	@ 00081580 00b5
.org 0x81582
	ldr r2, [pc, #16]	@ 00081582 044a
.org 0x81584
	ldrb r1, [r0, #14]	@ 00081584 817b
.org 0x81586
	lsls r1, r1, #2	@ 00081586 8900
.org 0x81588
	adds r1, r1, r2	@ 00081588 8918
.org 0x8158a
	ldr r1, [r1, #0]	@ 0008158a 0968
.org 0x8158c
	bl 0x128f80	@ 0008158c a7f0f8fc
.org 0x81590
	pop {r0}	@ 00081590 01bc
.org 0x81592
	bx r0	@ 00081592 0047
