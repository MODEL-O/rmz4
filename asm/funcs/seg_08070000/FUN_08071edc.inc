@ FUN_08071edc  entry 0x08071edc  size 30
.thumb
.org 0x71edc
FUN_08071edc:
	push {lr}	@ 00071edc 00b5
.org 0x71ede
	ldrb r1, [r0, #14]	@ 00071ede 817b
.org 0x71ee0
	adds r1, #1	@ 00071ee0 0131
.org 0x71ee2
	movs r2, #0	@ 00071ee2 0022
.org 0x71ee4
	strb r1, [r0, #14]	@ 00071ee4 8173
.org 0x71ee6
	strb r2, [r0, #15]	@ 00071ee6 c273
.org 0x71ee8
	ldr r2, [pc, #16]	@ 00071ee8 044a
.org 0x71eea
	ldrb r1, [r0, #13]	@ 00071eea 417b
.org 0x71eec
	lsls r1, r1, #2	@ 00071eec 8900
.org 0x71eee
	adds r1, r1, r2	@ 00071eee 8918
.org 0x71ef0
	ldr r1, [r1, #0]	@ 00071ef0 0968
.org 0x71ef2
	bl 0x128f80	@ 00071ef2 b7f045f8
.org 0x71ef6
	pop {r0}	@ 00071ef6 01bc
.org 0x71ef8
	bx r0	@ 00071ef8 0047
