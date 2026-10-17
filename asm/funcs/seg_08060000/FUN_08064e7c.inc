@ FUN_08064e7c  entry 0x08064e7c  size 20
.thumb
.org 0x64e7c
FUN_08064e7c:
	push {lr}	@ 00064e7c 00b5
.org 0x64e7e
	ldr r2, [pc, #16]	@ 00064e7e 044a
.org 0x64e80
	ldrb r1, [r0, #14]	@ 00064e80 817b
.org 0x64e82
	lsls r1, r1, #2	@ 00064e82 8900
.org 0x64e84
	adds r1, r1, r2	@ 00064e84 8918
.org 0x64e86
	ldr r1, [r1, #0]	@ 00064e86 0968
.org 0x64e88
	bl 0x128f80	@ 00064e88 c4f07af8
.org 0x64e8c
	pop {r0}	@ 00064e8c 01bc
.org 0x64e8e
	bx r0	@ 00064e8e 0047
