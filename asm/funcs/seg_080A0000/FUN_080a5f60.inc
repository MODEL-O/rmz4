@ FUN_080a5f60  entry 0x080a5f60  size 20
.thumb
.org 0xa5f60
FUN_080a5f60:
	push {lr}	@ 000a5f60 00b5
.org 0xa5f62
	ldr r2, [pc, #16]	@ 000a5f62 044a
.org 0xa5f64
	ldrb r1, [r0, #13]	@ 000a5f64 417b
.org 0xa5f66
	lsls r1, r1, #2	@ 000a5f66 8900
.org 0xa5f68
	adds r1, r1, r2	@ 000a5f68 8918
.org 0xa5f6a
	ldr r1, [r1, #0]	@ 000a5f6a 0968
.org 0xa5f6c
	bl 0x128f80	@ 000a5f6c 83f008f8
.org 0xa5f70
	pop {r0}	@ 000a5f70 01bc
.org 0xa5f72
	bx r0	@ 000a5f72 0047
