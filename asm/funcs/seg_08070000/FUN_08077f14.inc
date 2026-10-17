@ FUN_08077f14  entry 0x08077f14  size 64
.thumb
.org 0x77f14
FUN_08077f14:
	push {r4, r5, lr}	@ 00077f14 30b5
.org 0x77f16
	ldrb r4, [r0, #14]	@ 00077f16 847b
.org 0x77f18
	adds r2, r0, #0	@ 00077f18 021c
.org 0x77f1a
	adds r2, #200	@ 00077f1a c832
.org 0x77f1c
	ldr r1, [r2, #0]	@ 00077f1c 1168
.org 0x77f1e
	adds r1, #181	@ 00077f1e b531
.org 0x77f20
	movs r5, #0	@ 00077f20 0025
.org 0x77f22
	movs r3, #1	@ 00077f22 0123
.org 0x77f24
	strb r3, [r1, #0]	@ 00077f24 0b70
.org 0x77f26
	ldr r1, [r2, #0]	@ 00077f26 1168
.org 0x77f28
	adds r1, #182	@ 00077f28 b631
.org 0x77f2a
	strb r3, [r1, #0]	@ 00077f2a 0b70
.org 0x77f2c
	adds r2, #4	@ 00077f2c 0432
.org 0x77f2e
	ldr r1, [r2, #0]	@ 00077f2e 1168
.org 0x77f30
	adds r1, #182	@ 00077f30 b631
.org 0x77f32
	strb r5, [r1, #0]	@ 00077f32 0d70
.org 0x77f34
	ldr r1, [r2, #0]	@ 00077f34 1168
.org 0x77f36
	adds r1, #185	@ 00077f36 b931
.org 0x77f38
	strb r3, [r1, #0]	@ 00077f38 0b70
.org 0x77f3a
	adds r4, #1	@ 00077f3a 0134
.org 0x77f3c
	strb r4, [r0, #14]	@ 00077f3c 8473
.org 0x77f3e
	strb r5, [r0, #15]	@ 00077f3e c573
.org 0x77f40
	ldr r2, [pc, #16]	@ 00077f40 044a
.org 0x77f42
	ldrb r1, [r0, #13]	@ 00077f42 417b
.org 0x77f44
	lsls r1, r1, #2	@ 00077f44 8900
.org 0x77f46
	adds r1, r1, r2	@ 00077f46 8918
.org 0x77f48
	ldr r1, [r1, #0]	@ 00077f48 0968
.org 0x77f4a
	bl 0x128f80	@ 00077f4a b1f019f8
.org 0x77f4e
	pop {r4, r5}	@ 00077f4e 30bc
.org 0x77f50
	pop {r0}	@ 00077f50 01bc
.org 0x77f52
	bx r0	@ 00077f52 0047
