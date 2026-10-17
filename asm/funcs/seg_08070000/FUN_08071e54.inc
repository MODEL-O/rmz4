@ FUN_08071e54  entry 0x08071e54  size 28
.thumb
.org 0x71e54
FUN_08071e54:
	push {lr}	@ 00071e54 00b5
.org 0x71e56
	movs r2, #0	@ 00071e56 0022
.org 0x71e58
	movs r1, #25	@ 00071e58 1921
.org 0x71e5a
	strb r1, [r0, #14]	@ 00071e5a 8173
.org 0x71e5c
	strb r2, [r0, #15]	@ 00071e5c c273
.org 0x71e5e
	ldr r2, [pc, #16]	@ 00071e5e 044a
.org 0x71e60
	ldrb r1, [r0, #13]	@ 00071e60 417b
.org 0x71e62
	lsls r1, r1, #2	@ 00071e62 8900
.org 0x71e64
	adds r1, r1, r2	@ 00071e64 8918
.org 0x71e66
	ldr r1, [r1, #0]	@ 00071e66 0968
.org 0x71e68
	bl 0x128f80	@ 00071e68 b7f08af8
.org 0x71e6c
	pop {r0}	@ 00071e6c 01bc
.org 0x71e6e
	bx r0	@ 00071e6e 0047
