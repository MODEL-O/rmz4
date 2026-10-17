@ FUN_08118994  entry 0x08118994  size 20
.thumb
.org 0x118994
FUN_08118994:
	push {lr}	@ 00118994 00b5
.org 0x118996
	ldr r2, [pc, #16]	@ 00118996 044a
.org 0x118998
	ldrb r1, [r0, #3]	@ 00118998 c178
.org 0x11899a
	lsls r1, r1, #2	@ 0011899a 8900
.org 0x11899c
	adds r1, r1, r2	@ 0011899c 8918
.org 0x11899e
	ldr r1, [r1, #0]	@ 0011899e 0968
.org 0x1189a0
	bl 0x128f80	@ 001189a0 10f0eefa
.org 0x1189a4
	pop {r0}	@ 001189a4 01bc
.org 0x1189a6
	bx r0	@ 001189a6 0047
