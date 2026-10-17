@ FUN_080631dc  entry 0x080631dc  size 20
.thumb
.org 0x631dc
FUN_080631dc:
	push {lr}	@ 000631dc 00b5
.org 0x631de
	ldr r2, [pc, #16]	@ 000631de 044a
.org 0x631e0
	ldrb r1, [r0, #14]	@ 000631e0 817b
.org 0x631e2
	lsls r1, r1, #2	@ 000631e2 8900
.org 0x631e4
	adds r1, r1, r2	@ 000631e4 8918
.org 0x631e6
	ldr r1, [r1, #0]	@ 000631e6 0968
.org 0x631e8
	bl 0x128f80	@ 000631e8 c5f0cafe
.org 0x631ec
	pop {r0}	@ 000631ec 01bc
.org 0x631ee
	bx r0	@ 000631ee 0047
