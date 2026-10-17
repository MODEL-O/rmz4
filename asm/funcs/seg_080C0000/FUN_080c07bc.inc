@ FUN_080c07bc  entry 0x080c07bc  size 20
.thumb
.org 0xc07bc
FUN_080c07bc:
	push {lr}	@ 000c07bc 00b5
.org 0xc07be
	ldr r2, [pc, #16]	@ 000c07be 044a
.org 0xc07c0
	ldrb r1, [r0, #14]	@ 000c07c0 817b
.org 0xc07c2
	lsls r1, r1, #2	@ 000c07c2 8900
.org 0xc07c4
	adds r1, r1, r2	@ 000c07c4 8918
.org 0xc07c6
	ldr r1, [r1, #0]	@ 000c07c6 0968
.org 0xc07c8
	bl 0x128f80	@ 000c07c8 68f0dafb
.org 0xc07cc
	pop {r0}	@ 000c07cc 01bc
.org 0xc07ce
	bx r0	@ 000c07ce 0047
