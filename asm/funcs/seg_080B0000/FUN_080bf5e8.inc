@ FUN_080bf5e8  entry 0x080bf5e8  size 20
.thumb
.org 0xbf5e8
FUN_080bf5e8:
	push {lr}	@ 000bf5e8 00b5
.org 0xbf5ea
	ldr r2, [pc, #16]	@ 000bf5ea 044a
.org 0xbf5ec
	ldrb r1, [r0, #16]	@ 000bf5ec 017c
.org 0xbf5ee
	lsls r1, r1, #2	@ 000bf5ee 8900
.org 0xbf5f0
	adds r1, r1, r2	@ 000bf5f0 8918
.org 0xbf5f2
	ldr r1, [r1, #0]	@ 000bf5f2 0968
.org 0xbf5f4
	bl 0x128f80	@ 000bf5f4 69f0c4fc
.org 0xbf5f8
	pop {r0}	@ 000bf5f8 01bc
.org 0xbf5fa
	bx r0	@ 000bf5fa 0047
