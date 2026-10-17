@ FUN_0806eacc  entry 0x0806eacc  size 20
.thumb
.org 0x6eacc
FUN_0806eacc:
	push {lr}	@ 0006eacc 00b5
.org 0x6eace
	ldr r2, [pc, #16]	@ 0006eace 044a
.org 0x6ead0
	ldrb r1, [r0, #14]	@ 0006ead0 817b
.org 0x6ead2
	lsls r1, r1, #2	@ 0006ead2 8900
.org 0x6ead4
	adds r1, r1, r2	@ 0006ead4 8918
.org 0x6ead6
	ldr r1, [r1, #0]	@ 0006ead6 0968
.org 0x6ead8
	bl 0x128f80	@ 0006ead8 baf052fa
.org 0x6eadc
	pop {r0}	@ 0006eadc 01bc
.org 0x6eade
	bx r0	@ 0006eade 0047
