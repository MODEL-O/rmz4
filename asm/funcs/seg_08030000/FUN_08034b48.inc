@ FUN_08034b48  entry 0x08034b48  size 26
.thumb
.org 0x34b48
FUN_08034b48:
	push {lr}	@ 00034b48 00b5
.org 0x34b4a
	ldr r2, [pc, #24]	@ 00034b4a 064a
.org 0x34b4c
	movs r3, #162	@ 00034b4c a223
.org 0x34b4e
	lsls r3, r3, #1	@ 00034b4e 5b00
.org 0x34b50
	adds r1, r0, r3	@ 00034b50 c118
.org 0x34b52
	ldrb r1, [r1, #0]	@ 00034b52 0978
.org 0x34b54
	lsls r1, r1, #2	@ 00034b54 8900
.org 0x34b56
	adds r1, r1, r2	@ 00034b56 8918
.org 0x34b58
	ldr r1, [r1, #0]	@ 00034b58 0968
.org 0x34b5a
	bl 0x128f80	@ 00034b5a f4f011fa
.org 0x34b5e
	pop {r0}	@ 00034b5e 01bc
.org 0x34b60
	bx r0	@ 00034b60 0047
