@ FUN_0807c608  entry 0x0807c608  size 20
.thumb
.org 0x7c608
FUN_0807c608:
	push {lr}	@ 0007c608 00b5
.org 0x7c60a
	ldr r2, [pc, #16]	@ 0007c60a 044a
.org 0x7c60c
	ldrb r1, [r0, #14]	@ 0007c60c 817b
.org 0x7c60e
	lsls r1, r1, #2	@ 0007c60e 8900
.org 0x7c610
	adds r1, r1, r2	@ 0007c610 8918
.org 0x7c612
	ldr r1, [r1, #0]	@ 0007c612 0968
.org 0x7c614
	bl 0x128f80	@ 0007c614 acf0b4fc
.org 0x7c618
	pop {r0}	@ 0007c618 01bc
.org 0x7c61a
	bx r0	@ 0007c61a 0047
