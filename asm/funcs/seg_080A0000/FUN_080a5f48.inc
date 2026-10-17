@ FUN_080a5f48  entry 0x080a5f48  size 20
.thumb
.org 0xa5f48
FUN_080a5f48:
	push {lr}	@ 000a5f48 00b5
.org 0xa5f4a
	ldr r2, [pc, #16]	@ 000a5f4a 044a
.org 0xa5f4c
	ldrb r1, [r0, #13]	@ 000a5f4c 417b
.org 0xa5f4e
	lsls r1, r1, #2	@ 000a5f4e 8900
.org 0xa5f50
	adds r1, r1, r2	@ 000a5f50 8918
.org 0xa5f52
	ldr r1, [r1, #0]	@ 000a5f52 0968
.org 0xa5f54
	bl 0x128f80	@ 000a5f54 83f014f8
.org 0xa5f58
	pop {r0}	@ 000a5f58 01bc
.org 0xa5f5a
	bx r0	@ 000a5f5a 0047
