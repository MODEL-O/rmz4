@ FUN_080a0f14  entry 0x080a0f14  size 20
.thumb
.org 0xa0f14
FUN_080a0f14:
	push {lr}	@ 000a0f14 00b5
.org 0xa0f16
	ldr r2, [pc, #16]	@ 000a0f16 044a
.org 0xa0f18
	ldrb r1, [r0, #13]	@ 000a0f18 417b
.org 0xa0f1a
	lsls r1, r1, #2	@ 000a0f1a 8900
.org 0xa0f1c
	adds r1, r1, r2	@ 000a0f1c 8918
.org 0xa0f1e
	ldr r1, [r1, #0]	@ 000a0f1e 0968
.org 0xa0f20
	bl 0x128f80	@ 000a0f20 88f02ef8
.org 0xa0f24
	pop {r0}	@ 000a0f24 01bc
.org 0xa0f26
	bx r0	@ 000a0f26 0047
