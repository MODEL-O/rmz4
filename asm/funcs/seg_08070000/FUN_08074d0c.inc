@ FUN_08074d0c  entry 0x08074d0c  size 94
.thumb
.org 0x74d0c
FUN_08074d0c:
	push {r4, r5, lr}	@ 00074d0c 30b5
.org 0x74d0e
	adds r4, r0, #0	@ 00074d0e 041c
.org 0x74d10
	ldrb r0, [r4, #14]	@ 00074d10 a07b
.org 0x74d12
	cmp r0, #0	@ 00074d12 0028
.org 0x74d14
	bne.n 0x74d30	@ 00074d14 0cd1
.org 0x74d16
	ldr r1, [pc, #84]	@ 00074d16 1549
.org 0x74d18
	adds r0, r4, #0	@ 00074d18 201c
.org 0x74d1a
	bl 0x1cf00	@ 00074d1a a8f7f1f8
.org 0x74d1e
	adds r1, r4, #0	@ 00074d1e 211c
.org 0x74d20
	adds r1, #180	@ 00074d20 b431
.org 0x74d22
	movs r0, #8	@ 00074d22 0820
.org 0x74d24
	strh r0, [r1, #40]	@ 00074d24 0885
.org 0x74d26
	movs r0, #128	@ 00074d26 8020
.org 0x74d28
	strb r0, [r4, #18]	@ 00074d28 a074
.org 0x74d2a
	ldrb r0, [r4, #14]	@ 00074d2a a07b
.org 0x74d2c
	adds r0, #1	@ 00074d2c 0130
.org 0x74d2e
	strb r0, [r4, #14]	@ 00074d2e a073
.org 0x74d30
	adds r0, r4, #0	@ 00074d30 201c
.org 0x74d32
	bl 0x1cff0	@ 00074d32 a8f75df9
.org 0x74d36
	adds r5, r4, #0	@ 00074d36 251c
.org 0x74d38
	adds r5, #180	@ 00074d38 b435
.org 0x74d3a
	ldrh r0, [r5, #40]	@ 00074d3a 288d
.org 0x74d3c
	subs r0, #1	@ 00074d3c 0138
.org 0x74d3e
	strh r0, [r5, #40]	@ 00074d3e 2885
.org 0x74d40
	lsls r0, r0, #16	@ 00074d40 0004
.org 0x74d42
	ldr r1, [pc, #44]	@ 00074d42 0b49
.org 0x74d44
	cmp r0, r1	@ 00074d44 8842
.org 0x74d46
	bne.n 0x74d64	@ 00074d46 0dd1
.org 0x74d48
	ldrb r2, [r4, #18]	@ 00074d48 a27c
.org 0x74d4a
	adds r0, r4, #0	@ 00074d4a 201c
.org 0x74d4c
	movs r1, #1	@ 00074d4c 0121
.org 0x74d4e
	bl 0xcb4f4	@ 00074d4e 56f0d1fb
.org 0x74d52
	movs r0, #198	@ 00074d52 c620
.org 0x74d54
	lsls r0, r0, #1	@ 00074d54 4000
.org 0x74d56
	bl 0x2b10	@ 00074d56 8df7dbfe
.org 0x74d5a
	ldrb r0, [r4, #18]	@ 00074d5a a07c
.org 0x74d5c
	adds r0, #14	@ 00074d5c 0e30
.org 0x74d5e
	strb r0, [r4, #18]	@ 00074d5e a074
.org 0x74d60
	movs r0, #8	@ 00074d60 0820
.org 0x74d62
	strh r0, [r5, #40]	@ 00074d62 2885
.org 0x74d64
	pop {r4, r5}	@ 00074d64 30bc
.org 0x74d66
	pop {r0}	@ 00074d66 01bc
.org 0x74d68
	bx r0	@ 00074d68 0047
