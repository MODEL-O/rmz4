@ FUN_080a08dc  entry 0x080a08dc  size 20
.thumb
.org 0xa08dc
FUN_080a08dc:
	push {lr}	@ 000a08dc 00b5
.org 0xa08de
	ldr r2, [pc, #16]	@ 000a08de 044a
.org 0xa08e0
	ldrb r1, [r0, #16]	@ 000a08e0 017c
.org 0xa08e2
	lsls r1, r1, #2	@ 000a08e2 8900
.org 0xa08e4
	adds r1, r1, r2	@ 000a08e4 8918
.org 0xa08e6
	ldr r1, [r1, #0]	@ 000a08e6 0968
.org 0xa08e8
	bl 0x128f80	@ 000a08e8 88f04afb
.org 0xa08ec
	pop {r0}	@ 000a08ec 01bc
.org 0xa08ee
	bx r0	@ 000a08ee 0047
