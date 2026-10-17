@ FUN_080c0f20  entry 0x080c0f20  size 20
.thumb
.org 0xc0f20
FUN_080c0f20:
	push {lr}	@ 000c0f20 00b5
.org 0xc0f22
	ldr r2, [pc, #16]	@ 000c0f22 044a
.org 0xc0f24
	ldrb r1, [r0, #16]	@ 000c0f24 017c
.org 0xc0f26
	lsls r1, r1, #2	@ 000c0f26 8900
.org 0xc0f28
	adds r1, r1, r2	@ 000c0f28 8918
.org 0xc0f2a
	ldr r1, [r1, #0]	@ 000c0f2a 0968
.org 0xc0f2c
	bl 0x128f80	@ 000c0f2c 68f028f8
.org 0xc0f30
	pop {r0}	@ 000c0f30 01bc
.org 0xc0f32
	bx r0	@ 000c0f32 0047
