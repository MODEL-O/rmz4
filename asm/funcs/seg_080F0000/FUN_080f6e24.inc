@ FUN_080f6e24  entry 0x080f6e24  size 20
.thumb
.org 0xf6e24
FUN_080f6e24:
	push {lr}	@ 000f6e24 00b5
.org 0xf6e26
	ldr r2, [pc, #16]	@ 000f6e26 044a
.org 0xf6e28
	ldrb r1, [r0, #16]	@ 000f6e28 017c
.org 0xf6e2a
	lsls r1, r1, #2	@ 000f6e2a 8900
.org 0xf6e2c
	adds r1, r1, r2	@ 000f6e2c 8918
.org 0xf6e2e
	ldr r1, [r1, #0]	@ 000f6e2e 0968
.org 0xf6e30
	bl 0x128f80	@ 000f6e30 32f0a6f8
.org 0xf6e34
	pop {r0}	@ 000f6e34 01bc
.org 0xf6e36
	bx r0	@ 000f6e36 0047
