@ FUN_080f4c88  entry 0x080f4c88  size 86
.thumb
.org 0xf4c88
FUN_080f4c88:
	push {r4, r5, lr}	@ 000f4c88 30b5
.org 0xf4c8a
	adds r5, r0, #0	@ 000f4c8a 051c
.org 0xf4c8c
	bl 0x1cd28	@ 000f4c8c 28f74cf8
.org 0xf4c90
	ldrb r1, [r5, #10]	@ 000f4c90 a97a
.org 0xf4c92
	movs r0, #4	@ 000f4c92 0420
.org 0xf4c94
	orrs r0, r1	@ 000f4c94 0843
.org 0xf4c96
	strb r0, [r5, #10]	@ 000f4c96 a872
.org 0xf4c98
	adds r4, r5, #0	@ 000f4c98 2c1c
.org 0xf4c9a
	adds r4, #116	@ 000f4c9a 7434
.org 0xf4c9c
	ldr r1, [pc, #64]	@ 000f4c9c 1049
.org 0xf4c9e
	adds r2, r5, #0	@ 000f4c9e 2a1c
.org 0xf4ca0
	adds r2, #84	@ 000f4ca0 5432
.org 0xf4ca2
	adds r0, r4, #0	@ 000f4ca2 201c
.org 0xf4ca4
	movs r3, #28	@ 000f4ca4 1c23
.org 0xf4ca6
	bl 0x5760	@ 000f4ca6 10f75bfd
.org 0xf4caa
	str r5, [r4, #44]	@ 000f4caa e562
.org 0xf4cac
	ldr r0, [pc, #52]	@ 000f4cac 0d48
.org 0xf4cae
	str r0, [r4, #36]	@ 000f4cae 6062
.org 0xf4cb0
	ldr r1, [pc, #52]	@ 000f4cb0 0d49
.org 0xf4cb2
	adds r0, r5, #0	@ 000f4cb2 281c
.org 0xf4cb4
	bl 0x1cf00	@ 000f4cb4 28f724f9
.org 0xf4cb8
	adds r1, r5, #0	@ 000f4cb8 291c
.org 0xf4cba
	adds r1, #37	@ 000f4cba 2531
.org 0xf4cbc
	movs r0, #15	@ 000f4cbc 0f20
.org 0xf4cbe
	strb r0, [r1, #0]	@ 000f4cbe 0870
.org 0xf4cc0
	adds r0, r5, #0	@ 000f4cc0 281c
.org 0xf4cc2
	adds r0, #181	@ 000f4cc2 b530
.org 0xf4cc4
	movs r1, #128	@ 000f4cc4 8021
.org 0xf4cc6
	strb r1, [r0, #0]	@ 000f4cc6 0170
.org 0xf4cc8
	subs r0, #145	@ 000f4cc8 9138
.org 0xf4cca
	strb r1, [r0, #0]	@ 000f4cca 0170
.org 0xf4ccc
	ldrb r0, [r5, #10]	@ 000f4ccc a87a
.org 0xf4cce
	movs r1, #1	@ 000f4cce 0121
.org 0xf4cd0
	orrs r0, r1	@ 000f4cd0 0843
.org 0xf4cd2
	movs r1, #2	@ 000f4cd2 0221
.org 0xf4cd4
	orrs r0, r1	@ 000f4cd4 0843
.org 0xf4cd6
	strb r0, [r5, #10]	@ 000f4cd6 a872
.org 0xf4cd8
	pop {r4, r5}	@ 000f4cd8 30bc
.org 0xf4cda
	pop {r0}	@ 000f4cda 01bc
.org 0xf4cdc
	bx r0	@ 000f4cdc 0047
