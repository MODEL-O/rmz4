@ FUN_0807728c  entry 0x0807728c  size 20
.thumb
.org 0x7728c
FUN_0807728c:
	push {lr}	@ 0007728c 00b5
.org 0x7728e
	ldr r2, [pc, #16]	@ 0007728e 044a
.org 0x77290
	ldrb r1, [r0, #14]	@ 00077290 817b
.org 0x77292
	lsls r1, r1, #2	@ 00077292 8900
.org 0x77294
	adds r1, r1, r2	@ 00077294 8918
.org 0x77296
	ldr r1, [r1, #0]	@ 00077296 0968
.org 0x77298
	bl 0x128f80	@ 00077298 b1f072fe
.org 0x7729c
	pop {r0}	@ 0007729c 01bc
.org 0x7729e
	bx r0	@ 0007729e 0047
