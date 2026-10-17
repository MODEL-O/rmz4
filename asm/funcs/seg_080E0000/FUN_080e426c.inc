@ FUN_080e426c  entry 0x080e426c  size 20
.thumb
.org 0xe426c
FUN_080e426c:
	push {lr}	@ 000e426c 00b5
.org 0xe426e
	ldr r2, [pc, #16]	@ 000e426e 044a
.org 0xe4270
	ldrb r1, [r0, #16]	@ 000e4270 017c
.org 0xe4272
	lsls r1, r1, #2	@ 000e4272 8900
.org 0xe4274
	adds r1, r1, r2	@ 000e4274 8918
.org 0xe4276
	ldr r1, [r1, #0]	@ 000e4276 0968
.org 0xe4278
	bl 0x128f80	@ 000e4278 44f082fe
.org 0xe427c
	pop {r0}	@ 000e427c 01bc
.org 0xe427e
	bx r0	@ 000e427e 0047
