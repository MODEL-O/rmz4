@ FUN_080c0f38  entry 0x080c0f38  size 20
.thumb
.org 0xc0f38
FUN_080c0f38:
	push {lr}	@ 000c0f38 00b5
.org 0xc0f3a
	ldr r2, [pc, #16]	@ 000c0f3a 044a
.org 0xc0f3c
	ldrb r1, [r0, #13]	@ 000c0f3c 417b
.org 0xc0f3e
	lsls r1, r1, #2	@ 000c0f3e 8900
.org 0xc0f40
	adds r1, r1, r2	@ 000c0f40 8918
.org 0xc0f42
	ldr r1, [r1, #0]	@ 000c0f42 0968
.org 0xc0f44
	bl 0x128f80	@ 000c0f44 68f01cf8
.org 0xc0f48
	pop {r0}	@ 000c0f48 01bc
.org 0xc0f4a
	bx r0	@ 000c0f4a 0047
