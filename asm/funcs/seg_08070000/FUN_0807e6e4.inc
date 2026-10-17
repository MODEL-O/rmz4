@ FUN_0807e6e4  entry 0x0807e6e4  size 20
.thumb
.org 0x7e6e4
FUN_0807e6e4:
	push {lr}	@ 0007e6e4 00b5
.org 0x7e6e6
	ldr r2, [pc, #16]	@ 0007e6e6 044a
.org 0x7e6e8
	ldrb r1, [r0, #14]	@ 0007e6e8 817b
.org 0x7e6ea
	lsls r1, r1, #2	@ 0007e6ea 8900
.org 0x7e6ec
	adds r1, r1, r2	@ 0007e6ec 8918
.org 0x7e6ee
	ldr r1, [r1, #0]	@ 0007e6ee 0968
.org 0x7e6f0
	bl 0x128f80	@ 0007e6f0 aaf046fc
.org 0x7e6f4
	pop {r0}	@ 0007e6f4 01bc
.org 0x7e6f6
	bx r0	@ 0007e6f6 0047
