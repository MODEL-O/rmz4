@ FUN_080d3f08  entry 0x080d3f08  size 20
.thumb
.org 0xd3f08
FUN_080d3f08:
	push {lr}	@ 000d3f08 00b5
.org 0xd3f0a
	ldr r2, [pc, #16]	@ 000d3f0a 044a
.org 0xd3f0c
	ldrb r1, [r0, #16]	@ 000d3f0c 017c
.org 0xd3f0e
	lsls r1, r1, #2	@ 000d3f0e 8900
.org 0xd3f10
	adds r1, r1, r2	@ 000d3f10 8918
.org 0xd3f12
	ldr r1, [r1, #0]	@ 000d3f12 0968
.org 0xd3f14
	bl 0x128f80	@ 000d3f14 55f034f8
.org 0xd3f18
	pop {r0}	@ 000d3f18 01bc
.org 0xd3f1a
	bx r0	@ 000d3f1a 0047
