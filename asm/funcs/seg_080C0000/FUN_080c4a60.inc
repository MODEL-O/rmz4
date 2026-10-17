@ FUN_080c4a60  entry 0x080c4a60  size 20
.thumb
.org 0xc4a60
FUN_080c4a60:
	push {lr}	@ 000c4a60 00b5
.org 0xc4a62
	ldr r2, [pc, #16]	@ 000c4a62 044a
.org 0xc4a64
	ldrb r1, [r0, #13]	@ 000c4a64 417b
.org 0xc4a66
	lsls r1, r1, #2	@ 000c4a66 8900
.org 0xc4a68
	adds r1, r1, r2	@ 000c4a68 8918
.org 0xc4a6a
	ldr r1, [r1, #0]	@ 000c4a6a 0968
.org 0xc4a6c
	bl 0x128f80	@ 000c4a6c 64f088fa
.org 0xc4a70
	pop {r0}	@ 000c4a70 01bc
.org 0xc4a72
	bx r0	@ 000c4a72 0047
