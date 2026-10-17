@ FUN_080951ec  entry 0x080951ec  size 20
.thumb
.org 0x951ec
FUN_080951ec:
	push {lr}	@ 000951ec 00b5
.org 0x951ee
	ldr r2, [pc, #16]	@ 000951ee 044a
.org 0x951f0
	ldrb r1, [r0, #16]	@ 000951f0 017c
.org 0x951f2
	lsls r1, r1, #2	@ 000951f2 8900
.org 0x951f4
	adds r1, r1, r2	@ 000951f4 8918
.org 0x951f6
	ldr r1, [r1, #0]	@ 000951f6 0968
.org 0x951f8
	bl 0x128f80	@ 000951f8 93f0c2fe
.org 0x951fc
	pop {r0}	@ 000951fc 01bc
.org 0x951fe
	bx r0	@ 000951fe 0047
