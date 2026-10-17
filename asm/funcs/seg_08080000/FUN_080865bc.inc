@ FUN_080865bc  entry 0x080865bc  size 20
.thumb
.org 0x865bc
FUN_080865bc:
	push {lr}	@ 000865bc 00b5
.org 0x865be
	ldr r2, [pc, #16]	@ 000865be 044a
.org 0x865c0
	ldrb r1, [r0, #14]	@ 000865c0 817b
.org 0x865c2
	lsls r1, r1, #2	@ 000865c2 8900
.org 0x865c4
	adds r1, r1, r2	@ 000865c4 8918
.org 0x865c6
	ldr r1, [r1, #0]	@ 000865c6 0968
.org 0x865c8
	bl 0x128f80	@ 000865c8 a2f0dafc
.org 0x865cc
	pop {r0}	@ 000865cc 01bc
.org 0x865ce
	bx r0	@ 000865ce 0047
