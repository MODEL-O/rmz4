@ FUN_0807db78  entry 0x0807db78  size 20
.thumb
.org 0x7db78
FUN_0807db78:
	push {lr}	@ 0007db78 00b5
.org 0x7db7a
	ldr r2, [pc, #16]	@ 0007db7a 044a
.org 0x7db7c
	ldrb r1, [r0, #14]	@ 0007db7c 817b
.org 0x7db7e
	lsls r1, r1, #2	@ 0007db7e 8900
.org 0x7db80
	adds r1, r1, r2	@ 0007db80 8918
.org 0x7db82
	ldr r1, [r1, #0]	@ 0007db82 0968
.org 0x7db84
	bl 0x128f80	@ 0007db84 abf0fcf9
.org 0x7db88
	pop {r0}	@ 0007db88 01bc
.org 0x7db8a
	bx r0	@ 0007db8a 0047
