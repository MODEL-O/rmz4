@ FUN_08090b50  entry 0x08090b50  size 20
.thumb
.org 0x90b50
FUN_08090b50:
	push {lr}	@ 00090b50 00b5
.org 0x90b52
	ldr r2, [pc, #16]	@ 00090b52 044a
.org 0x90b54
	ldrb r1, [r0, #16]	@ 00090b54 017c
.org 0x90b56
	lsls r1, r1, #2	@ 00090b56 8900
.org 0x90b58
	adds r1, r1, r2	@ 00090b58 8918
.org 0x90b5a
	ldr r1, [r1, #0]	@ 00090b5a 0968
.org 0x90b5c
	bl 0x128f80	@ 00090b5c 98f010fa
.org 0x90b60
	pop {r0}	@ 00090b60 01bc
.org 0x90b62
	bx r0	@ 00090b62 0047
