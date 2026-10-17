@ FUN_08077b5c  entry 0x08077b5c  size 64
.thumb
.org 0x77b5c
FUN_08077b5c:
	push {r4, r5, lr}	@ 00077b5c 30b5
.org 0x77b5e
	ldrb r4, [r0, #14]	@ 00077b5e 847b
.org 0x77b60
	adds r2, r0, #0	@ 00077b60 021c
.org 0x77b62
	adds r2, #200	@ 00077b62 c832
.org 0x77b64
	ldr r1, [r2, #0]	@ 00077b64 1168
.org 0x77b66
	adds r1, #181	@ 00077b66 b531
.org 0x77b68
	movs r5, #0	@ 00077b68 0025
.org 0x77b6a
	movs r3, #1	@ 00077b6a 0123
.org 0x77b6c
	strb r3, [r1, #0]	@ 00077b6c 0b70
.org 0x77b6e
	ldr r1, [r2, #0]	@ 00077b6e 1168
.org 0x77b70
	adds r1, #182	@ 00077b70 b631
.org 0x77b72
	strb r3, [r1, #0]	@ 00077b72 0b70
.org 0x77b74
	adds r2, #4	@ 00077b74 0432
.org 0x77b76
	ldr r1, [r2, #0]	@ 00077b76 1168
.org 0x77b78
	adds r1, #182	@ 00077b78 b631
.org 0x77b7a
	strb r5, [r1, #0]	@ 00077b7a 0d70
.org 0x77b7c
	ldr r1, [r2, #0]	@ 00077b7c 1168
.org 0x77b7e
	adds r1, #185	@ 00077b7e b931
.org 0x77b80
	strb r3, [r1, #0]	@ 00077b80 0b70
.org 0x77b82
	adds r4, #1	@ 00077b82 0134
.org 0x77b84
	strb r4, [r0, #14]	@ 00077b84 8473
.org 0x77b86
	strb r5, [r0, #15]	@ 00077b86 c573
.org 0x77b88
	ldr r2, [pc, #16]	@ 00077b88 044a
.org 0x77b8a
	ldrb r1, [r0, #13]	@ 00077b8a 417b
.org 0x77b8c
	lsls r1, r1, #2	@ 00077b8c 8900
.org 0x77b8e
	adds r1, r1, r2	@ 00077b8e 8918
.org 0x77b90
	ldr r1, [r1, #0]	@ 00077b90 0968
.org 0x77b92
	bl 0x128f80	@ 00077b92 b1f0f5f9
.org 0x77b96
	pop {r4, r5}	@ 00077b96 30bc
.org 0x77b98
	pop {r0}	@ 00077b98 01bc
.org 0x77b9a
	bx r0	@ 00077b9a 0047
