@ FUN_0806737c  entry 0x0806737c  size 78
.thumb
.org 0x6737c
FUN_0806737c:
	push {r4, lr}	@ 0006737c 10b5
.org 0x6737e
	adds r4, r0, #0	@ 0006737e 041c
.org 0x67380
	ldrb r0, [r4, #14]	@ 00067380 a07b
.org 0x67382
	cmp r0, #0	@ 00067382 0028
.org 0x67384
	bne.n 0x673a8	@ 00067384 10d1
.org 0x67386
	ldr r1, [pc, #68]	@ 00067386 1149
.org 0x67388
	adds r0, r4, #0	@ 00067388 201c
.org 0x6738a
	bl 0x1cf00	@ 0006738a b5f7b9fd
.org 0x6738e
	movs r0, #96	@ 0006738e 6020
.org 0x67390
	bl 0x2b10	@ 00067390 9bf7befb
.org 0x67394
	movs r0, #97	@ 00067394 6120
.org 0x67396
	bl 0x2b10	@ 00067396 9bf7bbfb
.org 0x6739a
	adds r1, r4, #0	@ 0006739a 211c
.org 0x6739c
	adds r1, #180	@ 0006739c b431
.org 0x6739e
	movs r0, #97	@ 0006739e 6120
.org 0x673a0
	strh r0, [r1, #44]	@ 000673a0 8885
.org 0x673a2
	ldrb r0, [r4, #14]	@ 000673a2 a07b
.org 0x673a4
	adds r0, #1	@ 000673a4 0130
.org 0x673a6
	strb r0, [r4, #14]	@ 000673a6 a073
.org 0x673a8
	adds r0, r4, #0	@ 000673a8 201c
.org 0x673aa
	bl 0x1cff0	@ 000673aa b5f721fe
.org 0x673ae
	adds r0, r4, #0	@ 000673ae 201c
.org 0x673b0
	adds r0, #113	@ 000673b0 7130
.org 0x673b2
	ldrb r0, [r0, #0]	@ 000673b2 0078
.org 0x673b4
	lsls r0, r0, #24	@ 000673b4 0006
.org 0x673b6
	asrs r0, r0, #24	@ 000673b6 0016
.org 0x673b8
	cmp r0, #4	@ 000673b8 0428
.org 0x673ba
	ble.n 0x673c4	@ 000673ba 03dd
.org 0x673bc
	movs r1, #0	@ 000673bc 0021
.org 0x673be
	movs r0, #7	@ 000673be 0720
.org 0x673c0
	strb r0, [r4, #13]	@ 000673c0 6073
.org 0x673c2
	strb r1, [r4, #14]	@ 000673c2 a173
.org 0x673c4
	pop {r4}	@ 000673c4 10bc
.org 0x673c6
	pop {r0}	@ 000673c6 01bc
.org 0x673c8
	bx r0	@ 000673c8 0047
