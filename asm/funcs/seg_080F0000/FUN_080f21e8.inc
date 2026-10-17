@ FUN_080f21e8  entry 0x080f21e8  size 20
.thumb
.org 0xf21e8
FUN_080f21e8:
	push {lr}	@ 000f21e8 00b5
.org 0xf21ea
	ldr r2, [pc, #16]	@ 000f21ea 044a
.org 0xf21ec
	ldrb r1, [r0, #16]	@ 000f21ec 017c
.org 0xf21ee
	lsls r1, r1, #2	@ 000f21ee 8900
.org 0xf21f0
	adds r1, r1, r2	@ 000f21f0 8918
.org 0xf21f2
	ldr r1, [r1, #0]	@ 000f21f2 0968
.org 0xf21f4
	bl 0x128f80	@ 000f21f4 36f0c4fe
.org 0xf21f8
	pop {r0}	@ 000f21f8 01bc
.org 0xf21fa
	bx r0	@ 000f21fa 0047
