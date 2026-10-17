@ FUN_08035b7c  entry 0x08035b7c  size 26
.thumb
.org 0x35b7c
FUN_08035b7c:
	push {lr}	@ 00035b7c 00b5
.org 0x35b7e
	ldr r2, [pc, #24]	@ 00035b7e 064a
.org 0x35b80
	movs r3, #162	@ 00035b80 a223
.org 0x35b82
	lsls r3, r3, #1	@ 00035b82 5b00
.org 0x35b84
	adds r1, r0, r3	@ 00035b84 c118
.org 0x35b86
	ldrb r1, [r1, #0]	@ 00035b86 0978
.org 0x35b88
	lsls r1, r1, #2	@ 00035b88 8900
.org 0x35b8a
	adds r1, r1, r2	@ 00035b8a 8918
.org 0x35b8c
	ldr r1, [r1, #0]	@ 00035b8c 0968
.org 0x35b8e
	bl 0x128f80	@ 00035b8e f3f0f7f9
.org 0x35b92
	pop {r0}	@ 00035b92 01bc
.org 0x35b94
	bx r0	@ 00035b94 0047
