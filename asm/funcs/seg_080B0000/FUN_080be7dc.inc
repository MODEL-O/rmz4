@ FUN_080be7dc  entry 0x080be7dc  size 20
.thumb
.org 0xbe7dc
FUN_080be7dc:
	push {lr}	@ 000be7dc 00b5
.org 0xbe7de
	ldr r2, [pc, #16]	@ 000be7de 044a
.org 0xbe7e0
	ldrb r1, [r0, #16]	@ 000be7e0 017c
.org 0xbe7e2
	lsls r1, r1, #2	@ 000be7e2 8900
.org 0xbe7e4
	adds r1, r1, r2	@ 000be7e4 8918
.org 0xbe7e6
	ldr r1, [r1, #0]	@ 000be7e6 0968
.org 0xbe7e8
	bl 0x128f80	@ 000be7e8 6af0cafb
.org 0xbe7ec
	pop {r0}	@ 000be7ec 01bc
.org 0xbe7ee
	bx r0	@ 000be7ee 0047
