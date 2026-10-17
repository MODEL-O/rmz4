@ FUN_080e2f14  entry 0x080e2f14  size 20
.thumb
.org 0xe2f14
FUN_080e2f14:
	push {lr}	@ 000e2f14 00b5
.org 0xe2f16
	ldr r2, [pc, #16]	@ 000e2f16 044a
.org 0xe2f18
	ldrb r1, [r0, #16]	@ 000e2f18 017c
.org 0xe2f1a
	lsls r1, r1, #2	@ 000e2f1a 8900
.org 0xe2f1c
	adds r1, r1, r2	@ 000e2f1c 8918
.org 0xe2f1e
	ldr r1, [r1, #0]	@ 000e2f1e 0968
.org 0xe2f20
	bl 0x128f80	@ 000e2f20 46f02ef8
.org 0xe2f24
	pop {r0}	@ 000e2f24 01bc
.org 0xe2f26
	bx r0	@ 000e2f26 0047
