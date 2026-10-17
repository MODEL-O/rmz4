@ FUN_08100c48  entry 0x08100c48  size 48
.thumb
.org 0x100c48
FUN_08100c48:
	adds r2, r0, #0	@ 00100c48 021c
.org 0x100c4a
	adds r0, #140	@ 00100c4a 8c30
.org 0x100c4c
	movs r1, #0	@ 00100c4c 0021
.org 0x100c4e
	str r1, [r0, #0]	@ 00100c4e 0160
.org 0x100c50
	adds r0, #4	@ 00100c50 0430
.org 0x100c52
	str r1, [r0, #0]	@ 00100c52 0160
.org 0x100c54
	adds r0, #4	@ 00100c54 0430
.org 0x100c56
	strb r1, [r0, #0]	@ 00100c56 0170
.org 0x100c58
	ldrb r1, [r2, #10]	@ 00100c58 917a
.org 0x100c5a
	movs r0, #251	@ 00100c5a fb20
.org 0x100c5c
	ands r0, r1	@ 00100c5c 0840
.org 0x100c5e
	movs r1, #254	@ 00100c5e fe21
.org 0x100c60
	ands r0, r1	@ 00100c60 0840
.org 0x100c62
	strb r0, [r2, #10]	@ 00100c62 9072
.org 0x100c64
	ldr r1, [pc, #16]	@ 00100c64 0449
.org 0x100c66
	ldrb r0, [r2, #9]	@ 00100c66 507a
.org 0x100c68
	lsls r0, r0, #2	@ 00100c68 8000
.org 0x100c6a
	adds r0, r0, r1	@ 00100c6a 4018
.org 0x100c6c
	movs r1, #4	@ 00100c6c 0421
.org 0x100c6e
	str r1, [r2, #12]	@ 00100c6e d160
.org 0x100c70
	ldr r0, [r0, #0]	@ 00100c70 0068
.org 0x100c72
	ldr r0, [r0, #16]	@ 00100c72 0069
.org 0x100c74
	str r0, [r2, #20]	@ 00100c74 5061
.org 0x100c76
	bx lr	@ 00100c76 7047
