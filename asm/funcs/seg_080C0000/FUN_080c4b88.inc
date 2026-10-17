@ FUN_080c4b88  entry 0x080c4b88  size 20
.thumb
.org 0xc4b88
FUN_080c4b88:
	push {lr}	@ 000c4b88 00b5
.org 0xc4b8a
	ldr r2, [pc, #16]	@ 000c4b8a 044a
.org 0xc4b8c
	ldrb r1, [r0, #16]	@ 000c4b8c 017c
.org 0xc4b8e
	lsls r1, r1, #2	@ 000c4b8e 8900
.org 0xc4b90
	adds r1, r1, r2	@ 000c4b90 8918
.org 0xc4b92
	ldr r1, [r1, #0]	@ 000c4b92 0968
.org 0xc4b94
	bl 0x128f80	@ 000c4b94 64f0f4f9
.org 0xc4b98
	pop {r0}	@ 000c4b98 01bc
.org 0xc4b9a
	bx r0	@ 000c4b9a 0047
