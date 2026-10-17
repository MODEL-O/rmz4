@ FUN_08001b24  entry 0x08001b24  size 16
.thumb
.org 0x1b24
FUN_08001b24:
	push {lr}	@ 00001b24 00b5
.org 0x1b26
	ldr r1, [pc, #12]	@ 00001b26 0349
.org 0x1b28
	ldrh r0, [r0, #32]	@ 00001b28 008c
.org 0x1b2a
	strh r0, [r1, #0]	@ 00001b2a 0880
.org 0x1b2c
	bl 0x127df0	@ 00001b2c 26f160f9
.org 0x1b30
	pop {r0}	@ 00001b30 01bc
.org 0x1b32
	bx r0	@ 00001b32 0047
