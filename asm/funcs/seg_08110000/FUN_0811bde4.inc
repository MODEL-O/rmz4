@ FUN_0811bde4  entry 0x0811bde4  size 20
.thumb
.org 0x11bde4
FUN_0811bde4:
	push {lr}	@ 0011bde4 00b5
.org 0x11bde6
	ldr r2, [pc, #16]	@ 0011bde6 044a
.org 0x11bde8
	ldrb r1, [r0, #2]	@ 0011bde8 8178
.org 0x11bdea
	lsls r1, r1, #2	@ 0011bdea 8900
.org 0x11bdec
	adds r1, r1, r2	@ 0011bdec 8918
.org 0x11bdee
	ldr r1, [r1, #0]	@ 0011bdee 0968
.org 0x11bdf0
	bl 0x128f80	@ 0011bdf0 0df0c6f8
.org 0x11bdf4
	pop {r0}	@ 0011bdf4 01bc
.org 0x11bdf6
	bx r0	@ 0011bdf6 0047
