@ FUN_08036f1c  entry 0x08036f1c  size 24
.thumb
.org 0x36f1c
FUN_08036f1c:
	push {lr}	@ 00036f1c 00b5
.org 0x36f1e
	ldr r2, [pc, #20]	@ 00036f1e 054a
.org 0x36f20
	ldr r3, [pc, #20]	@ 00036f20 054b
.org 0x36f22
	adds r1, r0, r3	@ 00036f22 c118
.org 0x36f24
	ldrb r1, [r1, #0]	@ 00036f24 0978
.org 0x36f26
	lsls r1, r1, #2	@ 00036f26 8900
.org 0x36f28
	adds r1, r1, r2	@ 00036f28 8918
.org 0x36f2a
	ldr r1, [r1, #0]	@ 00036f2a 0968
.org 0x36f2c
	bl 0x128f80	@ 00036f2c f2f028f8
.org 0x36f30
	pop {r0}	@ 00036f30 01bc
.org 0x36f32
	bx r0	@ 00036f32 0047
