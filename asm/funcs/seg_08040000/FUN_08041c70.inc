@ FUN_08041c70  entry 0x08041c70  size 246
.thumb
.org 0x41c70
FUN_08041c70:
	push {r4, r5, r6, lr}	@ 00041c70 70b5
.org 0x41c72
	adds r4, r0, #0	@ 00041c72 041c
.org 0x41c74
	ldr r5, [r4, #44]	@ 00041c74 e56a
.org 0x41c76
	ldrb r0, [r5, #12]	@ 00041c76 287b
.org 0x41c78
	cmp r0, #1	@ 00041c78 0128
.org 0x41c7a
	bls.n 0x41c94	@ 00041c7a 0bd9
.org 0x41c7c
	ldr r1, [pc, #16]	@ 00041c7c 0449
.org 0x41c7e
	ldrb r0, [r4, #9]	@ 00041c7e 607a
.org 0x41c80
	lsls r0, r0, #2	@ 00041c80 8000
.org 0x41c82
	adds r0, r0, r1	@ 00041c82 4018
.org 0x41c84
	movs r1, #2	@ 00041c84 0221
.org 0x41c86
	str r1, [r4, #12]	@ 00041c86 e160
.org 0x41c88
	ldr r0, [r0, #0]	@ 00041c88 0068
.org 0x41c8a
	ldr r0, [r0, #8]	@ 00041c8a 8068
.org 0x41c8c
	str r0, [r4, #20]	@ 00041c8c 6061
.org 0x41c8e
	b.n 0x41d68	@ 00041c8e 6be0
.org 0x41c90
	.byte 0xf8,0x39,0x85,0x08	@ 00041c90 data
.org 0x41c94
	ldrb r0, [r4, #17]	@ 00041c94 607c
.org 0x41c96
	lsls r0, r0, #11	@ 00041c96 c002
.org 0x41c98
	movs r1, #192	@ 00041c98 c021
.org 0x41c9a
	lsls r1, r1, #4	@ 00041c9a 0901
.org 0x41c9c
	adds r0, r0, r1	@ 00041c9c 4018
.org 0x41c9e
	ldr r1, [r5, #92]	@ 00041c9e e96d
.org 0x41ca0
	cmp r1, r0	@ 00041ca0 8142
.org 0x41ca2
	bgt.n 0x41cae	@ 00041ca2 04dc
.org 0x41ca4
	ldrb r1, [r4, #10]	@ 00041ca4 a17a
.org 0x41ca6
	movs r0, #254	@ 00041ca6 fe20
.org 0x41ca8
	ands r0, r1	@ 00041ca8 0840
.org 0x41caa
	strb r0, [r4, #10]	@ 00041caa a072
.org 0x41cac
	b.n 0x41d68	@ 00041cac 5ce0
.org 0x41cae
	ldrb r1, [r4, #10]	@ 00041cae a17a
.org 0x41cb0
	movs r0, #1	@ 00041cb0 0120
.org 0x41cb2
	movs r6, #0	@ 00041cb2 0026
.org 0x41cb4
	orrs r0, r1	@ 00041cb4 0843
.org 0x41cb6
	strb r0, [r4, #10]	@ 00041cb6 a072
.org 0x41cb8
	adds r0, r4, #0	@ 00041cb8 201c
.org 0x41cba
	bl 0x1cff0	@ 00041cba dbf799f9
.org 0x41cbe
	ldrb r0, [r5, #10]	@ 00041cbe a87a
.org 0x41cc0
	lsrs r2, r0, #4	@ 00041cc0 0209
.org 0x41cc2
	movs r0, #1	@ 00041cc2 0120
.org 0x41cc4
	ands r2, r0	@ 00041cc4 0240
.org 0x41cc6
	cmp r2, #0	@ 00041cc6 002a
.org 0x41cc8
	beq.n 0x41cd2	@ 00041cc8 03d0
.org 0x41cca
	ldrb r0, [r4, #10]	@ 00041cca a07a
.org 0x41ccc
	movs r1, #16	@ 00041ccc 1021
.org 0x41cce
	orrs r0, r1	@ 00041cce 0843
.org 0x41cd0
	b.n 0x41cd8	@ 00041cd0 02e0
.org 0x41cd2
	ldrb r1, [r4, #10]	@ 00041cd2 a17a
.org 0x41cd4
	movs r0, #239	@ 00041cd4 ef20
.org 0x41cd6
	ands r0, r1	@ 00041cd6 0840
.org 0x41cd8
	strb r0, [r4, #10]	@ 00041cd8 a072
.org 0x41cda
	adds r1, r2, #0	@ 00041cda 111c
.org 0x41cdc
	adds r0, r4, #0	@ 00041cdc 201c
.org 0x41cde
	adds r0, #76	@ 00041cde 4c30
.org 0x41ce0
	strb r1, [r0, #0]	@ 00041ce0 0170
.org 0x41ce2
	adds r3, r4, #0	@ 00041ce2 231c
.org 0x41ce4
	adds r3, #74	@ 00041ce4 4a33
.org 0x41ce6
	lsls r1, r1, #4	@ 00041ce6 0901
.org 0x41ce8
	ldrb r2, [r3, #0]	@ 00041ce8 1a78
.org 0x41cea
	movs r0, #17	@ 00041cea 1120
.org 0x41cec
	negs r0, r0	@ 00041cec 4042
.org 0x41cee
	ands r0, r2	@ 00041cee 1040
.org 0x41cf0
	orrs r0, r1	@ 00041cf0 0843
.org 0x41cf2
	strb r0, [r3, #0]	@ 00041cf2 1870
.org 0x41cf4
	adds r0, r5, #0	@ 00041cf4 281c
.org 0x41cf6
	adds r0, #36	@ 00041cf6 2430
.org 0x41cf8
	ldrb r3, [r0, #0]	@ 00041cf8 0378
.org 0x41cfa
	adds r0, r4, #0	@ 00041cfa 201c
.org 0x41cfc
	adds r0, #36	@ 00041cfc 2430
.org 0x41cfe
	strb r3, [r0, #0]	@ 00041cfe 0370
.org 0x41d00
	ldr r0, [r5, #100]	@ 00041d00 686e
.org 0x41d02
	ldr r1, [r5, #104]	@ 00041d02 a96e
.org 0x41d04
	str r0, [r4, #84]	@ 00041d04 6065
.org 0x41d06
	str r1, [r4, #88]	@ 00041d06 a165
.org 0x41d08
	ldrb r1, [r4, #10]	@ 00041d08 a17a
.org 0x41d0a
	movs r0, #16	@ 00041d0a 1020
.org 0x41d0c
	ands r0, r1	@ 00041d0c 0840
.org 0x41d0e
	cmp r0, #0	@ 00041d0e 0028
.org 0x41d10
	beq.n 0x41d34	@ 00041d10 10d0
.org 0x41d12
	ldr r2, [pc, #28]	@ 00041d12 074a
.org 0x41d14
	adds r0, r3, #0	@ 00041d14 181c
.org 0x41d16
	adds r0, #64	@ 00041d16 4030
.org 0x41d18
	lsls r0, r0, #24	@ 00041d18 0006
.org 0x41d1a
	lsrs r0, r0, #23	@ 00041d1a c00d
.org 0x41d1c
	adds r0, r0, r2	@ 00041d1c 8018
.org 0x41d1e
	movs r5, #0	@ 00041d1e 0025
.org 0x41d20
	ldrsh r1, [r0, r5]	@ 00041d20 415f
.org 0x41d22
	lsls r1, r1, #3	@ 00041d22 c900
.org 0x41d24
	ldrb r0, [r4, #17]	@ 00041d24 607c
.org 0x41d26
	adds r0, #1	@ 00041d26 0130
.org 0x41d28
	muls r1, r0	@ 00041d28 4143
.org 0x41d2a
	ldr r0, [r4, #84]	@ 00041d2a 606d
.org 0x41d2c
	adds r0, r0, r1	@ 00041d2c 4018
.org 0x41d2e
	b.n 0x41d50	@ 00041d2e 0fe0
.org 0x41d30
	.byte 0x0c,0x93,0x12,0x08	@ 00041d30 data
.org 0x41d34
	ldr r2, [pc, #56]	@ 00041d34 0e4a
.org 0x41d36
	adds r0, r3, #0	@ 00041d36 181c
.org 0x41d38
	adds r0, #64	@ 00041d38 4030
.org 0x41d3a
	lsls r0, r0, #24	@ 00041d3a 0006
.org 0x41d3c
	lsrs r0, r0, #23	@ 00041d3c c00d
.org 0x41d3e
	adds r0, r0, r2	@ 00041d3e 8018
.org 0x41d40
	movs r5, #0	@ 00041d40 0025
.org 0x41d42
	ldrsh r1, [r0, r5]	@ 00041d42 415f
.org 0x41d44
	lsls r1, r1, #3	@ 00041d44 c900
.org 0x41d46
	ldrb r0, [r4, #17]	@ 00041d46 607c
.org 0x41d48
	adds r0, #1	@ 00041d48 0130
.org 0x41d4a
	muls r1, r0	@ 00041d4a 4143
.org 0x41d4c
	ldr r0, [r4, #84]	@ 00041d4c 606d
.org 0x41d4e
	subs r0, r0, r1	@ 00041d4e 401a
.org 0x41d50
	str r0, [r4, #84]	@ 00041d50 6065
.org 0x41d52
	ldrb r1, [r4, #17]	@ 00041d52 617c
.org 0x41d54
	lsls r0, r3, #1	@ 00041d54 5800
.org 0x41d56
	adds r0, r0, r2	@ 00041d56 8018
.org 0x41d58
	movs r2, #0	@ 00041d58 0022
.org 0x41d5a
	ldrsh r0, [r0, r2]	@ 00041d5a 805e
.org 0x41d5c
	lsls r0, r0, #3	@ 00041d5c c000
.org 0x41d5e
	adds r1, #1	@ 00041d5e 0131
.org 0x41d60
	muls r1, r0	@ 00041d60 4143
.org 0x41d62
	ldr r0, [r4, #88]	@ 00041d62 a06d
.org 0x41d64
	subs r0, r0, r1	@ 00041d64 401a
