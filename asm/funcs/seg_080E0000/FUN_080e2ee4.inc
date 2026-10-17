@ FUN_080e2ee4  entry 0x080e2ee4  size 20
.thumb
.org 0xe2ee4
FUN_080e2ee4:
	push {lr}	@ 000e2ee4 00b5
.org 0xe2ee6
	ldr r2, [pc, #16]	@ 000e2ee6 044a
.org 0xe2ee8
	ldrb r1, [r0, #16]	@ 000e2ee8 017c
.org 0xe2eea
	lsls r1, r1, #2	@ 000e2eea 8900
.org 0xe2eec
	adds r1, r1, r2	@ 000e2eec 8918
.org 0xe2eee
	ldr r1, [r1, #0]	@ 000e2eee 0968
.org 0xe2ef0
	bl 0x128f80	@ 000e2ef0 46f046f8
.org 0xe2ef4
	pop {r0}	@ 000e2ef4 01bc
.org 0xe2ef6
	bx r0	@ 000e2ef6 0047
