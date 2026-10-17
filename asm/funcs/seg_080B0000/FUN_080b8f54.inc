@ FUN_080b8f54  entry 0x080b8f54  size 20
.thumb
.org 0xb8f54
FUN_080b8f54:
	push {lr}	@ 000b8f54 00b5
.org 0xb8f56
	ldr r2, [pc, #16]	@ 000b8f56 044a
.org 0xb8f58
	ldrb r1, [r0, #13]	@ 000b8f58 417b
.org 0xb8f5a
	lsls r1, r1, #2	@ 000b8f5a 8900
.org 0xb8f5c
	adds r1, r1, r2	@ 000b8f5c 8918
.org 0xb8f5e
	ldr r1, [r1, #0]	@ 000b8f5e 0968
.org 0xb8f60
	bl 0x128f80	@ 000b8f60 70f00ef8
.org 0xb8f64
	pop {r0}	@ 000b8f64 01bc
.org 0xb8f66
	bx r0	@ 000b8f66 0047
