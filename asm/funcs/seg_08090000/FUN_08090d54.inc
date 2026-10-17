@ FUN_08090d54  entry 0x08090d54  size 20
.thumb
.org 0x90d54
FUN_08090d54:
	push {lr}	@ 00090d54 00b5
.org 0x90d56
	ldr r2, [pc, #16]	@ 00090d56 044a
.org 0x90d58
	ldrb r1, [r0, #16]	@ 00090d58 017c
.org 0x90d5a
	lsls r1, r1, #2	@ 00090d5a 8900
.org 0x90d5c
	adds r1, r1, r2	@ 00090d5c 8918
.org 0x90d5e
	ldr r1, [r1, #0]	@ 00090d5e 0968
.org 0x90d60
	bl 0x128f80	@ 00090d60 98f00ef9
.org 0x90d64
	pop {r0}	@ 00090d64 01bc
.org 0x90d66
	bx r0	@ 00090d66 0047
