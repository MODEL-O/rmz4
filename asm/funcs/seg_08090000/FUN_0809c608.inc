@ FUN_0809c608  entry 0x0809c608  size 20
.thumb
.org 0x9c608
FUN_0809c608:
	push {lr}	@ 0009c608 00b5
.org 0x9c60a
	ldr r2, [pc, #16]	@ 0009c60a 044a
.org 0x9c60c
	ldrb r1, [r0, #16]	@ 0009c60c 017c
.org 0x9c60e
	lsls r1, r1, #2	@ 0009c60e 8900
.org 0x9c610
	adds r1, r1, r2	@ 0009c610 8918
.org 0x9c612
	ldr r1, [r1, #0]	@ 0009c612 0968
.org 0x9c614
	bl 0x128f80	@ 0009c614 8cf0b4fc
.org 0x9c618
	pop {r0}	@ 0009c618 01bc
.org 0x9c61a
	bx r0	@ 0009c61a 0047
