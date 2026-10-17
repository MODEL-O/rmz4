@ FUN_080a5f30  entry 0x080a5f30  size 20
.thumb
.org 0xa5f30
FUN_080a5f30:
	push {lr}	@ 000a5f30 00b5
.org 0xa5f32
	ldr r2, [pc, #16]	@ 000a5f32 044a
.org 0xa5f34
	ldrb r1, [r0, #16]	@ 000a5f34 017c
.org 0xa5f36
	lsls r1, r1, #2	@ 000a5f36 8900
.org 0xa5f38
	adds r1, r1, r2	@ 000a5f38 8918
.org 0xa5f3a
	ldr r1, [r1, #0]	@ 000a5f3a 0968
.org 0xa5f3c
	bl 0x128f80	@ 000a5f3c 83f020f8
.org 0xa5f40
	pop {r0}	@ 000a5f40 01bc
.org 0xa5f42
	bx r0	@ 000a5f42 0047
