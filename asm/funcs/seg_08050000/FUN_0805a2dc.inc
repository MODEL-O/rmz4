@ FUN_0805a2dc  entry 0x0805a2dc  size 20
.thumb
.org 0x5a2dc
FUN_0805a2dc:
	push {lr}	@ 0005a2dc 00b5
.org 0x5a2de
	ldr r2, [pc, #16]	@ 0005a2de 044a
.org 0x5a2e0
	ldrb r1, [r0, #14]	@ 0005a2e0 817b
.org 0x5a2e2
	lsls r1, r1, #2	@ 0005a2e2 8900
.org 0x5a2e4
	adds r1, r1, r2	@ 0005a2e4 8918
.org 0x5a2e6
	ldr r1, [r1, #0]	@ 0005a2e6 0968
.org 0x5a2e8
	bl 0x128f80	@ 0005a2e8 cef04afe
.org 0x5a2ec
	pop {r0}	@ 0005a2ec 01bc
.org 0x5a2ee
	bx r0	@ 0005a2ee 0047
