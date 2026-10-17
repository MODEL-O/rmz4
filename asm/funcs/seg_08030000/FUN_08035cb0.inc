@ FUN_08035cb0  entry 0x08035cb0  size 160
.thumb
.org 0x35cb0
FUN_08035cb0:
	push {r4, lr}	@ 00035cb0 10b5
.org 0x35cb2
	adds r4, r0, #0	@ 00035cb2 041c
.org 0x35cb4
	ldrb r0, [r4, #30]	@ 00035cb4 a07f
.org 0x35cb6
	lsls r0, r0, #8	@ 00035cb6 0002
.org 0x35cb8
	adds r1, r4, #0	@ 00035cb8 211c
.org 0x35cba
	adds r1, #112	@ 00035cba 7031
.org 0x35cbc
	ldrb r1, [r1, #0]	@ 00035cbc 0978
.org 0x35cbe
	orrs r1, r0	@ 00035cbe 0143
.org 0x35cc0
	ldr r2, [pc, #16]	@ 00035cc0 044a
.org 0x35cc2
	cmp r1, r2	@ 00035cc2 9142
.org 0x35cc4
	beq.n 0x35cd8	@ 00035cc4 08d0
.org 0x35cc6
	adds r0, r4, #0	@ 00035cc6 201c
.org 0x35cc8
	adds r1, r2, #0	@ 00035cc8 111c
.org 0x35cca
	movs r2, #2	@ 00035cca 0222
.org 0x35ccc
	movs r3, #2	@ 00035ccc 0223
.org 0x35cce
	bl 0x1cfc8	@ 00035cce e7f77bf9
.org 0x35cd2
	b.n 0x35cf0	@ 00035cd2 0de0
.org 0x35cd4
	.byte 0x01,0x0b,0x00,0x00	@ 00035cd4 data
.org 0x35cd8
	adds r0, r4, #0	@ 00035cd8 201c
.org 0x35cda
	adds r0, #113	@ 00035cda 7130
.org 0x35cdc
	ldrb r0, [r0, #0]	@ 00035cdc 0078
.org 0x35cde
	lsls r0, r0, #24	@ 00035cde 0006
.org 0x35ce0
	asrs r0, r0, #24	@ 00035ce0 0016
.org 0x35ce2
	cmp r0, #1	@ 00035ce2 0128
.org 0x35ce4
	bgt.n 0x35cf0	@ 00035ce4 04dc
.org 0x35ce6
	adds r0, r4, #0	@ 00035ce6 201c
.org 0x35ce8
	movs r2, #2	@ 00035ce8 0222
.org 0x35cea
	movs r3, #2	@ 00035cea 0223
.org 0x35cec
	bl 0x1cfc8	@ 00035cec e7f76cf9
.org 0x35cf0
	movs r1, #170	@ 00035cf0 aa21
.org 0x35cf2
	lsls r1, r1, #1	@ 00035cf2 4900
.org 0x35cf4
	adds r0, r4, r1	@ 00035cf4 6018
.org 0x35cf6
	ldrb r0, [r0, #0]	@ 00035cf6 0078
.org 0x35cf8
	cmp r0, #4	@ 00035cf8 0428
.org 0x35cfa
	bne.n 0x35d28	@ 00035cfa 15d1
.org 0x35cfc
	subs r1, #84	@ 00035cfc 5439
.org 0x35cfe
	adds r0, r4, r1	@ 00035cfe 6018
.org 0x35d00
	movs r1, #0	@ 00035d00 0021
.org 0x35d02
	strb r1, [r0, #0]	@ 00035d02 0170
.org 0x35d04
	ldrb r0, [r4, #14]	@ 00035d04 a07b
.org 0x35d06
	cmp r0, #1	@ 00035d06 0128
.org 0x35d08
	bne.n 0x35d1c	@ 00035d08 08d1
.org 0x35d0a
	ldr r1, [pc, #12]	@ 00035d0a 0349
.org 0x35d0c
	adds r0, r4, #0	@ 00035d0c 201c
.org 0x35d0e
	movs r2, #2	@ 00035d0e 0222
.org 0x35d10
	movs r3, #1	@ 00035d10 0123
.org 0x35d12
	bl 0x1cfc8	@ 00035d12 e7f759f9
.org 0x35d16
	b.n 0x35d28	@ 00035d16 07e0
.org 0x35d18
	.byte 0x03,0x04,0x00,0x00	@ 00035d18 data
.org 0x35d1c
	ldr r1, [pc, #56]	@ 00035d1c 0e49
.org 0x35d1e
	adds r0, r4, #0	@ 00035d1e 201c
.org 0x35d20
	movs r2, #2	@ 00035d20 0222
.org 0x35d22
	movs r3, #1	@ 00035d22 0123
.org 0x35d24
	bl 0x1cfc8	@ 00035d24 e7f750f9
.org 0x35d28
	movs r0, #162	@ 00035d28 a220
.org 0x35d2a
	lsls r0, r0, #1	@ 00035d2a 4000
.org 0x35d2c
	adds r1, r4, r0	@ 00035d2c 2118
.org 0x35d2e
	adds r0, r4, #0	@ 00035d2e 201c
.org 0x35d30
	bl 0x39fd8	@ 00035d30 04f052f9
.org 0x35d34
	lsls r0, r0, #24	@ 00035d34 0006
.org 0x35d36
	cmp r0, #0	@ 00035d36 0028
.org 0x35d38
	beq.n 0x35d52	@ 00035d38 0bd0
.org 0x35d3a
	movs r1, #128	@ 00035d3a 8021
.org 0x35d3c
	lsls r1, r1, #1	@ 00035d3c 4900
.org 0x35d3e
	adds r0, r4, r1	@ 00035d3e 6018
.org 0x35d40
	movs r2, #0	@ 00035d40 0022
.org 0x35d42
	movs r1, #3	@ 00035d42 0321
.org 0x35d44
	strb r1, [r0, #0]	@ 00035d44 0170
.org 0x35d46
	adds r1, #254	@ 00035d46 fe31
.org 0x35d48
	adds r0, r4, r1	@ 00035d48 6018
.org 0x35d4a
	strb r2, [r0, #0]	@ 00035d4a 0270
.org 0x35d4c
	adds r0, r4, #0	@ 00035d4c 201c
.org 0x35d4e
	bl 0x35b7c	@ 00035d4e fff715ff
