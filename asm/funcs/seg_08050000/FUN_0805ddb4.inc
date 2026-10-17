@ FUN_0805ddb4  entry 0x0805ddb4  size 20
.thumb
.org 0x5ddb4
FUN_0805ddb4:
	push {lr}	@ 0005ddb4 00b5
.org 0x5ddb6
	ldr r2, [pc, #16]	@ 0005ddb6 044a
.org 0x5ddb8
	ldrb r1, [r0, #14]	@ 0005ddb8 817b
.org 0x5ddba
	lsls r1, r1, #2	@ 0005ddba 8900
.org 0x5ddbc
	adds r1, r1, r2	@ 0005ddbc 8918
.org 0x5ddbe
	ldr r1, [r1, #0]	@ 0005ddbe 0968
.org 0x5ddc0
	bl 0x128f80	@ 0005ddc0 cbf0def8
.org 0x5ddc4
	pop {r0}	@ 0005ddc4 01bc
.org 0x5ddc6
	bx r0	@ 0005ddc6 0047
