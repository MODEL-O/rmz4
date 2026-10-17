@ FUN_08052ea0  entry 0x08052ea0  size 144
.thumb
.org 0x52ea0
FUN_08052ea0:
	push {r4, lr}	@ 00052ea0 10b5
.org 0x52ea2
	adds r4, r0, #0	@ 00052ea2 041c
.org 0x52ea4
	ldrb r0, [r4, #14]	@ 00052ea4 a07b
.org 0x52ea6
	cmp r0, #0	@ 00052ea6 0028
.org 0x52ea8
	bne.n 0x52eb8	@ 00052ea8 06d1
.org 0x52eaa
	ldr r1, [pc, #88]	@ 00052eaa 1649
.org 0x52eac
	adds r0, r4, #0	@ 00052eac 201c
.org 0x52eae
	bl 0x1cf00	@ 00052eae caf727f8
.org 0x52eb2
	ldrb r0, [r4, #14]	@ 00052eb2 a07b
.org 0x52eb4
	adds r0, #1	@ 00052eb4 0130
.org 0x52eb6
	strb r0, [r4, #14]	@ 00052eb6 a073
.org 0x52eb8
	adds r0, r4, #0	@ 00052eb8 201c
.org 0x52eba
	bl 0x1cff0	@ 00052eba caf799f8
.org 0x52ebe
	movs r3, #0	@ 00052ebe 0023
.org 0x52ec0
	ldr r0, [pc, #68]	@ 00052ec0 1148
.org 0x52ec2
	ldr r2, [r0, #0]	@ 00052ec2 0268
.org 0x52ec4
	ldr r1, [r4, #84]	@ 00052ec4 616d
.org 0x52ec6
	ldr r0, [r2, #84]	@ 00052ec6 506d
.org 0x52ec8
	cmp r1, r0	@ 00052ec8 8142
.org 0x52eca
	bge.n 0x52ece	@ 00052eca 00da
.org 0x52ecc
	movs r3, #1	@ 00052ecc 0123
.org 0x52ece
	adds r0, r4, #0	@ 00052ece 201c
.org 0x52ed0
	adds r0, #76	@ 00052ed0 4c30
.org 0x52ed2
	strb r3, [r0, #0]	@ 00052ed2 0370
.org 0x52ed4
	movs r3, #0	@ 00052ed4 0023
.org 0x52ed6
	ldr r1, [r4, #84]	@ 00052ed6 616d
.org 0x52ed8
	ldr r0, [r2, #84]	@ 00052ed8 506d
.org 0x52eda
	cmp r1, r0	@ 00052eda 8142
.org 0x52edc
	bge.n 0x52ee0	@ 00052edc 00da
.org 0x52ede
	movs r3, #1	@ 00052ede 0123
.org 0x52ee0
	movs r0, #74	@ 00052ee0 4a20
.org 0x52ee2
	adds r0, r0, r4	@ 00052ee2 0019
.org 0x52ee4
	mov ip, r0	@ 00052ee4 8446
.org 0x52ee6
	lsls r2, r3, #4	@ 00052ee6 1a01
.org 0x52ee8
	ldrb r1, [r0, #0]	@ 00052ee8 0178
.org 0x52eea
	movs r0, #17	@ 00052eea 1120
.org 0x52eec
	negs r0, r0	@ 00052eec 4042
.org 0x52eee
	ands r0, r1	@ 00052eee 0840
.org 0x52ef0
	orrs r0, r2	@ 00052ef0 1043
.org 0x52ef2
	mov r1, ip	@ 00052ef2 6146
.org 0x52ef4
	strb r0, [r1, #0]	@ 00052ef4 0870
.org 0x52ef6
	cmp r3, #0	@ 00052ef6 002b
.org 0x52ef8
	beq.n 0x52f0c	@ 00052ef8 08d0
.org 0x52efa
	ldrb r0, [r4, #10]	@ 00052efa a07a
.org 0x52efc
	movs r1, #16	@ 00052efc 1021
.org 0x52efe
	orrs r0, r1	@ 00052efe 0843
.org 0x52f00
	b.n 0x52f12	@ 00052f00 07e0
.org 0x52f02
	.byte 0x00	@ 00052f02 data
.org 0x52f03
	.byte 0x00	@ 00052f03 data
.org 0x52f04
	.byte 0x0c,0xa1,0x00,0x00	@ 00052f04 data
.org 0x52f08
	.byte 0xf0,0xdb,0x02,0x02	@ 00052f08 data
.org 0x52f0c
	ldrb r1, [r4, #10]	@ 00052f0c a17a
.org 0x52f0e
	movs r0, #239	@ 00052f0e ef20
.org 0x52f10
	ands r0, r1	@ 00052f10 0840
.org 0x52f12
	strb r0, [r4, #10]	@ 00052f12 a072
.org 0x52f14
	ldr r0, [r4, #88]	@ 00052f14 a06d
.org 0x52f16
	ldr r1, [r4, #96]	@ 00052f16 216e
.org 0x52f18
	adds r0, r0, r1	@ 00052f18 4018
.org 0x52f1a
	str r0, [r4, #88]	@ 00052f1a a065
.org 0x52f1c
	adds r1, #64	@ 00052f1c 4031
.org 0x52f1e
	str r1, [r4, #96]	@ 00052f1e 2166
.org 0x52f20
	adds r1, r4, #0	@ 00052f20 211c
.org 0x52f22
	adds r1, #180	@ 00052f22 b431
.org 0x52f24
	ldr r1, [r1, #4]	@ 00052f24 4968
.org 0x52f26
	cmp r0, r1	@ 00052f26 8842
.org 0x52f28
	ble.n 0x52f34	@ 00052f28 04dd
.org 0x52f2a
	str r1, [r4, #88]	@ 00052f2a a165
.org 0x52f2c
	movs r1, #0	@ 00052f2c 0021
.org 0x52f2e
	movs r0, #30	@ 00052f2e 1e20
