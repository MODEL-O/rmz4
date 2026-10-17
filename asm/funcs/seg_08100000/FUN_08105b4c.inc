@ FUN_08105b4c  entry 0x08105b4c  size 28
.thumb
.org 0x105b4c
FUN_08105b4c:
	push {lr}	@ 00105b4c 00b5
.org 0x105b4e
	ldr r2, [pc, #24]	@ 00105b4e 064a
.org 0x105b50
	ldrb r1, [r0, #9]	@ 00105b50 417a
.org 0x105b52
	lsls r1, r1, #2	@ 00105b52 8900
.org 0x105b54
	adds r1, r1, r2	@ 00105b54 8918
.org 0x105b56
	movs r2, #2	@ 00105b56 0222
.org 0x105b58
	str r2, [r0, #12]	@ 00105b58 c260
.org 0x105b5a
	ldr r1, [r1, #0]	@ 00105b5a 0968
.org 0x105b5c
	ldr r1, [r1, #8]	@ 00105b5c 8968
.org 0x105b5e
	str r1, [r0, #20]	@ 00105b5e 4161
.org 0x105b60
	bl 0x1057d0	@ 00105b60 fff736fe
.org 0x105b64
	pop {r0}	@ 00105b64 01bc
.org 0x105b66
	bx r0	@ 00105b66 0047
