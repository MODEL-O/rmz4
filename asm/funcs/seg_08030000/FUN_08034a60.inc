@ FUN_08034a60  entry 0x08034a60  size 26
.thumb
.org 0x34a60
FUN_08034a60:
	push {lr}	@ 00034a60 00b5
.org 0x34a62
	ldr r2, [pc, #24]	@ 00034a62 064a
.org 0x34a64
	movs r3, #128	@ 00034a64 8023
.org 0x34a66
	lsls r3, r3, #1	@ 00034a66 5b00
.org 0x34a68
	adds r1, r0, r3	@ 00034a68 c118
.org 0x34a6a
	ldrb r1, [r1, #0]	@ 00034a6a 0978
.org 0x34a6c
	lsls r1, r1, #2	@ 00034a6c 8900
.org 0x34a6e
	adds r1, r1, r2	@ 00034a6e 8918
.org 0x34a70
	ldr r1, [r1, #0]	@ 00034a70 0968
.org 0x34a72
	bl 0x128f80	@ 00034a72 f4f085fa
.org 0x34a76
	pop {r0}	@ 00034a76 01bc
.org 0x34a78
	bx r0	@ 00034a78 0047
