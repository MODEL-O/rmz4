@ FUN_08100d10  entry 0x08100d10  size 80
.thumb
.org 0x100d10
FUN_08100d10:
	push {r4, r5, lr}	@ 00100d10 30b5
.org 0x100d12
	adds r5, r0, #0	@ 00100d12 051c
.org 0x100d14
	ldrb r0, [r5, #14]	@ 00100d14 a87b
.org 0x100d16
	cmp r0, #0	@ 00100d16 0028
.org 0x100d18
	beq.n 0x100d20	@ 00100d18 02d0
.org 0x100d1a
	cmp r0, #1	@ 00100d1a 0128
.org 0x100d1c
	beq.n 0x100d54	@ 00100d1c 1ad0
.org 0x100d1e
	b.n 0x100d5a	@ 00100d1e 1ce0
.org 0x100d20
	adds r0, r5, #0	@ 00100d20 281c
.org 0x100d22
	adds r0, #184	@ 00100d22 b830
.org 0x100d24
	ldrb r1, [r0, #0]	@ 00100d24 0178
.org 0x100d26
	lsls r1, r1, #8	@ 00100d26 0902
.org 0x100d28
	adds r0, r5, #0	@ 00100d28 281c
.org 0x100d2a
	bl 0x1cf00	@ 00100d2a 1cf7e9f8
.org 0x100d2e
	ldrb r1, [r5, #10]	@ 00100d2e a97a
.org 0x100d30
	movs r0, #4	@ 00100d30 0420
.org 0x100d32
	orrs r0, r1	@ 00100d32 0843
.org 0x100d34
	strb r0, [r5, #10]	@ 00100d34 a872
.org 0x100d36
	adds r4, r5, #0	@ 00100d36 2c1c
.org 0x100d38
	adds r4, #116	@ 00100d38 7434
.org 0x100d3a
	ldr r1, [pc, #36]	@ 00100d3a 0949
.org 0x100d3c
	adds r2, r5, #0	@ 00100d3c 2a1c
.org 0x100d3e
	adds r2, #84	@ 00100d3e 5432
.org 0x100d40
	adds r0, r4, #0	@ 00100d40 201c
.org 0x100d42
	movs r3, #0	@ 00100d42 0023
.org 0x100d44
	bl 0x5760	@ 00100d44 04f70cfd
.org 0x100d48
	str r5, [r4, #44]	@ 00100d48 e562
.org 0x100d4a
	ldr r0, [pc, #24]	@ 00100d4a 0648
.org 0x100d4c
	str r0, [r4, #36]	@ 00100d4c 6062
.org 0x100d4e
	ldrb r0, [r5, #14]	@ 00100d4e a87b
.org 0x100d50
	adds r0, #1	@ 00100d50 0130
.org 0x100d52
	strb r0, [r5, #14]	@ 00100d52 a873
.org 0x100d54
	adds r0, r5, #0	@ 00100d54 281c
.org 0x100d56
	bl 0x1cff0	@ 00100d56 1cf74bf9
.org 0x100d5a
	pop {r4, r5}	@ 00100d5a 30bc
.org 0x100d5c
	pop {r0}	@ 00100d5c 01bc
.org 0x100d5e
	bx r0	@ 00100d5e 0047
