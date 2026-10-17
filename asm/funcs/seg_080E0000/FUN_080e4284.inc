@ FUN_080e4284  entry 0x080e4284  size 20
.thumb
.org 0xe4284
FUN_080e4284:
	push {lr}	@ 000e4284 00b5
.org 0xe4286
	ldr r2, [pc, #16]	@ 000e4286 044a
.org 0xe4288
	ldrb r1, [r0, #16]	@ 000e4288 017c
.org 0xe428a
	lsls r1, r1, #2	@ 000e428a 8900
.org 0xe428c
	adds r1, r1, r2	@ 000e428c 8918
.org 0xe428e
	ldr r1, [r1, #0]	@ 000e428e 0968
.org 0xe4290
	bl 0x128f80	@ 000e4290 44f076fe
.org 0xe4294
	pop {r0}	@ 000e4294 01bc
.org 0xe4296
	bx r0	@ 000e4296 0047
