@ FUN_08077b44  entry 0x08077b44  size 20
.thumb
.org 0x77b44
FUN_08077b44:
	push {lr}	@ 00077b44 00b5
.org 0x77b46
	ldr r2, [pc, #16]	@ 00077b46 044a
.org 0x77b48
	ldrb r1, [r0, #14]	@ 00077b48 817b
.org 0x77b4a
	lsls r1, r1, #2	@ 00077b4a 8900
.org 0x77b4c
	adds r1, r1, r2	@ 00077b4c 8918
.org 0x77b4e
	ldr r1, [r1, #0]	@ 00077b4e 0968
.org 0x77b50
	bl 0x128f80	@ 00077b50 b1f016fa
.org 0x77b54
	pop {r0}	@ 00077b54 01bc
.org 0x77b56
	bx r0	@ 00077b56 0047
