@ FUN_08090c78  entry 0x08090c78  size 20
.thumb
.org 0x90c78
FUN_08090c78:
	push {lr}	@ 00090c78 00b5
.org 0x90c7a
	ldr r2, [pc, #16]	@ 00090c7a 044a
.org 0x90c7c
	ldrb r1, [r0, #16]	@ 00090c7c 017c
.org 0x90c7e
	lsls r1, r1, #2	@ 00090c7e 8900
.org 0x90c80
	adds r1, r1, r2	@ 00090c80 8918
.org 0x90c82
	ldr r1, [r1, #0]	@ 00090c82 0968
.org 0x90c84
	bl 0x128f80	@ 00090c84 98f07cf9
.org 0x90c88
	pop {r0}	@ 00090c88 01bc
.org 0x90c8a
	bx r0	@ 00090c8a 0047
