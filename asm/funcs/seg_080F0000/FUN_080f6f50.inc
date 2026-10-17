@ FUN_080f6f50  entry 0x080f6f50  size 20
.thumb
.org 0xf6f50
FUN_080f6f50:
	push {lr}	@ 000f6f50 00b5
.org 0xf6f52
	ldr r2, [pc, #16]	@ 000f6f52 044a
.org 0xf6f54
	ldrb r1, [r0, #16]	@ 000f6f54 017c
.org 0xf6f56
	lsls r1, r1, #2	@ 000f6f56 8900
.org 0xf6f58
	adds r1, r1, r2	@ 000f6f58 8918
.org 0xf6f5a
	ldr r1, [r1, #0]	@ 000f6f5a 0968
.org 0xf6f5c
	bl 0x128f80	@ 000f6f5c 32f010f8
.org 0xf6f60
	pop {r0}	@ 000f6f60 01bc
.org 0xf6f62
	bx r0	@ 000f6f62 0047
