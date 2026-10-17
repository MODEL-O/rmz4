@ FUN_08089294  entry 0x08089294  size 20
.thumb
.org 0x89294
FUN_08089294:
	push {lr}	@ 00089294 00b5
.org 0x89296
	ldr r2, [pc, #16]	@ 00089296 044a
.org 0x89298
	ldrb r1, [r0, #13]	@ 00089298 417b
.org 0x8929a
	lsls r1, r1, #2	@ 0008929a 8900
.org 0x8929c
	adds r1, r1, r2	@ 0008929c 8918
.org 0x8929e
	ldr r1, [r1, #0]	@ 0008929e 0968
.org 0x892a0
	bl 0x128f80	@ 000892a0 9ff06efe
.org 0x892a4
	pop {r0}	@ 000892a4 01bc
.org 0x892a6
	bx r0	@ 000892a6 0047
