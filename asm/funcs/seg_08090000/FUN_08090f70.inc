@ FUN_08090f70  entry 0x08090f70  size 20
.thumb
.org 0x90f70
FUN_08090f70:
	push {lr}	@ 00090f70 00b5
.org 0x90f72
	ldr r2, [pc, #16]	@ 00090f72 044a
.org 0x90f74
	ldrb r1, [r0, #16]	@ 00090f74 017c
.org 0x90f76
	lsls r1, r1, #2	@ 00090f76 8900
.org 0x90f78
	adds r1, r1, r2	@ 00090f78 8918
.org 0x90f7a
	ldr r1, [r1, #0]	@ 00090f7a 0968
.org 0x90f7c
	bl 0x128f80	@ 00090f7c 98f000f8
.org 0x90f80
	pop {r0}	@ 00090f80 01bc
.org 0x90f82
	bx r0	@ 00090f82 0047
