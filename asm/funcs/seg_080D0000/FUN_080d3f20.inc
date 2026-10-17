@ FUN_080d3f20  entry 0x080d3f20  size 20
.thumb
.org 0xd3f20
FUN_080d3f20:
	push {lr}	@ 000d3f20 00b5
.org 0xd3f22
	ldr r2, [pc, #16]	@ 000d3f22 044a
.org 0xd3f24
	ldrb r1, [r0, #16]	@ 000d3f24 017c
.org 0xd3f26
	lsls r1, r1, #2	@ 000d3f26 8900
.org 0xd3f28
	adds r1, r1, r2	@ 000d3f28 8918
.org 0xd3f2a
	ldr r1, [r1, #0]	@ 000d3f2a 0968
.org 0xd3f2c
	bl 0x128f80	@ 000d3f2c 55f028f8
.org 0xd3f30
	pop {r0}	@ 000d3f30 01bc
.org 0xd3f32
	bx r0	@ 000d3f32 0047
