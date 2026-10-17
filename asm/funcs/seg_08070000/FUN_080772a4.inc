@ FUN_080772a4  entry 0x080772a4  size 64
.thumb
.org 0x772a4
FUN_080772a4:
	push {r4, r5, lr}	@ 000772a4 30b5
.org 0x772a6
	ldrb r4, [r0, #14]	@ 000772a6 847b
.org 0x772a8
	adds r2, r0, #0	@ 000772a8 021c
.org 0x772aa
	adds r2, #200	@ 000772aa c832
.org 0x772ac
	ldr r1, [r2, #0]	@ 000772ac 1168
.org 0x772ae
	adds r1, #181	@ 000772ae b531
.org 0x772b0
	movs r5, #0	@ 000772b0 0025
.org 0x772b2
	movs r3, #1	@ 000772b2 0123
.org 0x772b4
	strb r3, [r1, #0]	@ 000772b4 0b70
.org 0x772b6
	ldr r1, [r2, #0]	@ 000772b6 1168
.org 0x772b8
	adds r1, #182	@ 000772b8 b631
.org 0x772ba
	strb r3, [r1, #0]	@ 000772ba 0b70
.org 0x772bc
	adds r2, #4	@ 000772bc 0432
.org 0x772be
	ldr r1, [r2, #0]	@ 000772be 1168
.org 0x772c0
	adds r1, #182	@ 000772c0 b631
.org 0x772c2
	strb r5, [r1, #0]	@ 000772c2 0d70
.org 0x772c4
	ldr r1, [r2, #0]	@ 000772c4 1168
.org 0x772c6
	adds r1, #185	@ 000772c6 b931
.org 0x772c8
	strb r3, [r1, #0]	@ 000772c8 0b70
.org 0x772ca
	adds r4, #1	@ 000772ca 0134
.org 0x772cc
	strb r4, [r0, #14]	@ 000772cc 8473
.org 0x772ce
	strb r5, [r0, #15]	@ 000772ce c573
.org 0x772d0
	ldr r2, [pc, #16]	@ 000772d0 044a
.org 0x772d2
	ldrb r1, [r0, #13]	@ 000772d2 417b
.org 0x772d4
	lsls r1, r1, #2	@ 000772d4 8900
.org 0x772d6
	adds r1, r1, r2	@ 000772d6 8918
.org 0x772d8
	ldr r1, [r1, #0]	@ 000772d8 0968
.org 0x772da
	bl 0x128f80	@ 000772da b1f051fe
.org 0x772de
	pop {r4, r5}	@ 000772de 30bc
.org 0x772e0
	pop {r0}	@ 000772e0 01bc
.org 0x772e2
	bx r0	@ 000772e2 0047
