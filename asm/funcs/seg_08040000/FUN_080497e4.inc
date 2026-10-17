@ FUN_080497e4  entry 0x080497e4  size 20
.thumb
.org 0x497e4
FUN_080497e4:
	push {lr}	@ 000497e4 00b5
.org 0x497e6
	ldr r2, [pc, #16]	@ 000497e6 044a
.org 0x497e8
	ldrb r1, [r0, #16]	@ 000497e8 017c
.org 0x497ea
	lsls r1, r1, #2	@ 000497ea 8900
.org 0x497ec
	adds r1, r1, r2	@ 000497ec 8918
.org 0x497ee
	ldr r1, [r1, #0]	@ 000497ee 0968
.org 0x497f0
	bl 0x128f80	@ 000497f0 dff0c6fb
.org 0x497f4
	pop {r0}	@ 000497f4 01bc
.org 0x497f6
	bx r0	@ 000497f6 0047
