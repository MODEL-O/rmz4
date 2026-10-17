@ FUN_080c84ec  entry 0x080c84ec  size 20
.thumb
.org 0xc84ec
FUN_080c84ec:
	push {lr}	@ 000c84ec 00b5
.org 0xc84ee
	ldr r2, [pc, #16]	@ 000c84ee 044a
.org 0xc84f0
	ldrb r1, [r0, #13]	@ 000c84f0 417b
.org 0xc84f2
	lsls r1, r1, #2	@ 000c84f2 8900
.org 0xc84f4
	adds r1, r1, r2	@ 000c84f4 8918
.org 0xc84f6
	ldr r1, [r1, #0]	@ 000c84f6 0968
.org 0xc84f8
	bl 0x128f80	@ 000c84f8 60f042fd
.org 0xc84fc
	pop {r0}	@ 000c84fc 01bc
.org 0xc84fe
	bx r0	@ 000c84fe 0047
