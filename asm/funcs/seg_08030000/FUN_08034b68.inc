@ FUN_08034b68  entry 0x08034b68  size 24
.thumb
.org 0x34b68
FUN_08034b68:
	push {lr}	@ 00034b68 00b5
.org 0x34b6a
	ldr r2, [pc, #20]	@ 00034b6a 054a
.org 0x34b6c
	ldr r3, [pc, #20]	@ 00034b6c 054b
.org 0x34b6e
	adds r1, r0, r3	@ 00034b6e c118
.org 0x34b70
	ldrb r1, [r1, #0]	@ 00034b70 0978
.org 0x34b72
	lsls r1, r1, #2	@ 00034b72 8900
.org 0x34b74
	adds r1, r1, r2	@ 00034b74 8918
.org 0x34b76
	ldr r1, [r1, #0]	@ 00034b76 0968
.org 0x34b78
	bl 0x128f80	@ 00034b78 f4f002fa
.org 0x34b7c
	pop {r0}	@ 00034b7c 01bc
.org 0x34b7e
	bx r0	@ 00034b7e 0047
