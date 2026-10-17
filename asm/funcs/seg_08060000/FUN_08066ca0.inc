@ FUN_08066ca0  entry 0x08066ca0  size 176
.thumb
.org 0x66ca0
FUN_08066ca0:
	push {r4, r5, lr}	@ 00066ca0 30b5
.org 0x66ca2
	adds r4, r0, #0	@ 00066ca2 041c
.org 0x66ca4
	ldrb r5, [r4, #14]	@ 00066ca4 a57b
.org 0x66ca6
	cmp r5, #0	@ 00066ca6 002d
.org 0x66ca8
	bne.n 0x66cbc	@ 00066ca8 08d1
.org 0x66caa
	ldr r1, [pc, #72]	@ 00066caa 1249
.org 0x66cac
	bl 0x1cf00	@ 00066cac b6f728f9
.org 0x66cb0
	movs r0, #4	@ 00066cb0 0420
.org 0x66cb2
	strb r0, [r4, #18]	@ 00066cb2 a074
.org 0x66cb4
	strb r5, [r4, #15]	@ 00066cb4 e573
.org 0x66cb6
	ldrb r0, [r4, #14]	@ 00066cb6 a07b
.org 0x66cb8
	adds r0, #1	@ 00066cb8 0130
.org 0x66cba
	strb r0, [r4, #14]	@ 00066cba a073
.org 0x66cbc
	adds r0, r4, #0	@ 00066cbc 201c
.org 0x66cbe
	bl 0x1cff0	@ 00066cbe b6f797f9
.org 0x66cc2
	ldrb r0, [r4, #15]	@ 00066cc2 e07b
.org 0x66cc4
	cmp r0, #0	@ 00066cc4 0028
.org 0x66cc6
	bne.n 0x66cfc	@ 00066cc6 19d1
.org 0x66cc8
	adds r0, r4, #0	@ 00066cc8 201c
.org 0x66cca
	adds r0, #115	@ 00066cca 7330
.org 0x66ccc
	ldrb r0, [r0, #0]	@ 00066ccc 0078
.org 0x66cce
	cmp r0, #4	@ 00066cce 0428
.org 0x66cd0
	bne.n 0x66d58	@ 00066cd0 42d1
.org 0x66cd2
	ldrb r0, [r4, #18]	@ 00066cd2 a07c
.org 0x66cd4
	subs r0, #1	@ 00066cd4 0138
.org 0x66cd6
	strb r0, [r4, #18]	@ 00066cd6 a074
.org 0x66cd8
	lsls r0, r0, #24	@ 00066cd8 0006
.org 0x66cda
	lsrs r0, r0, #24	@ 00066cda 000e
.org 0x66cdc
	cmp r0, #255	@ 00066cdc ff28
.org 0x66cde
	bne.n 0x66d58	@ 00066cde 3bd1
.org 0x66ce0
	ldr r1, [pc, #20]	@ 00066ce0 0549
.org 0x66ce2
	adds r0, r4, #0	@ 00066ce2 201c
.org 0x66ce4
	bl 0x1cf00	@ 00066ce4 b6f70cf9
.org 0x66ce8
	movs r0, #94	@ 00066ce8 5e20
.org 0x66cea
	bl 0x2b10	@ 00066cea 9bf711ff
.org 0x66cee
	movs r0, #80	@ 00066cee 5020
.org 0x66cf0
	strb r0, [r4, #18]	@ 00066cf0 a074
.org 0x66cf2
	b.n 0x66d16	@ 00066cf2 10e0
.org 0x66cf4
	.byte 0x13,0xa9,0x00,0x00	@ 00066cf4 data
.org 0x66cf8
	.byte 0x16,0xa9,0x00,0x00	@ 00066cf8 data
.org 0x66cfc
	cmp r0, #1	@ 00066cfc 0128
.org 0x66cfe
	bne.n 0x66d24	@ 00066cfe 11d1
.org 0x66d00
	ldrb r0, [r4, #18]	@ 00066d00 a07c
.org 0x66d02
	subs r0, #1	@ 00066d02 0138
.org 0x66d04
	strb r0, [r4, #18]	@ 00066d04 a074
.org 0x66d06
	lsls r0, r0, #24	@ 00066d06 0006
.org 0x66d08
	lsrs r0, r0, #24	@ 00066d08 000e
.org 0x66d0a
	cmp r0, #255	@ 00066d0a ff28
.org 0x66d0c
	bne.n 0x66d58	@ 00066d0c 24d1
.org 0x66d0e
	ldr r1, [pc, #16]	@ 00066d0e 0449
.org 0x66d10
	adds r0, r4, #0	@ 00066d10 201c
.org 0x66d12
	bl 0x1cf00	@ 00066d12 b6f7f5f8
.org 0x66d16
	ldrb r0, [r4, #15]	@ 00066d16 e07b
.org 0x66d18
	adds r0, #1	@ 00066d18 0130
.org 0x66d1a
	strb r0, [r4, #15]	@ 00066d1a e073
.org 0x66d1c
	b.n 0x66d58	@ 00066d1c 1ce0
.org 0x66d1e
	.byte 0x00	@ 00066d1e data
.org 0x66d1f
	.byte 0x00	@ 00066d1f data
.org 0x66d20
	.byte 0x17,0xa9,0x00,0x00	@ 00066d20 data
.org 0x66d24
	adds r0, r4, #0	@ 00066d24 201c
.org 0x66d26
	adds r0, #115	@ 00066d26 7330
.org 0x66d28
	ldrb r0, [r0, #0]	@ 00066d28 0078
.org 0x66d2a
	cmp r0, #3	@ 00066d2a 0328
.org 0x66d2c
	bne.n 0x66d46	@ 00066d2c 0bd1
.org 0x66d2e
	ldrb r0, [r4, #30]	@ 00066d2e a07f
.org 0x66d30
	lsls r0, r0, #8	@ 00066d30 0002
.org 0x66d32
	adds r1, r4, #0	@ 00066d32 211c
.org 0x66d34
	adds r1, #112	@ 00066d34 7031
.org 0x66d36
	ldrb r1, [r1, #0]	@ 00066d36 0978
.org 0x66d38
	orrs r0, r1	@ 00066d38 0843
.org 0x66d3a
	ldr r1, [pc, #36]	@ 00066d3a 0949
.org 0x66d3c
	cmp r0, r1	@ 00066d3c 8842
.org 0x66d3e
	beq.n 0x66d46	@ 00066d3e 02d0
.org 0x66d40
	adds r0, r4, #0	@ 00066d40 201c
.org 0x66d42
	bl 0x1cf00	@ 00066d42 b6f7ddf8
.org 0x66d46
	ldr r0, [pc, #28]	@ 00066d46 0748
.org 0x66d48
	ldrb r0, [r0, #18]	@ 00066d48 807c
.org 0x66d4a
	movs r1, #1	@ 00066d4a 0121
.org 0x66d4c
	ands r1, r0	@ 00066d4c 0140
.org 0x66d4e
	cmp r1, #0	@ 00066d4e 0029
