@ FUN_080f9a70  entry 0x080f9a70  size 20
.thumb
.org 0xf9a70
FUN_080f9a70:
	push {lr}	@ 000f9a70 00b5
.org 0xf9a72
	ldr r2, [pc, #16]	@ 000f9a72 044a
.org 0xf9a74
	ldrb r1, [r0, #13]	@ 000f9a74 417b
.org 0xf9a76
	lsls r1, r1, #2	@ 000f9a76 8900
.org 0xf9a78
	adds r1, r1, r2	@ 000f9a78 8918
.org 0xf9a7a
	ldr r1, [r1, #0]	@ 000f9a7a 0968
.org 0xf9a7c
	bl 0x128f80	@ 000f9a7c 2ff080fa
.org 0xf9a80
	pop {r0}	@ 000f9a80 01bc
.org 0xf9a82
	bx r0	@ 000f9a82 0047
