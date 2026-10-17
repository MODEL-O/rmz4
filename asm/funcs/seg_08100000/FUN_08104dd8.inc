@ FUN_08104dd8  entry 0x08104dd8  size 270
.thumb
.org 0x104dd8
FUN_08104dd8:
	push {r4, r5, r6, r7, lr}	@ 00104dd8 f0b5
.org 0x104dda
	sub sp, #8	@ 00104dda 82b0
.org 0x104ddc
	adds r4, r0, #0	@ 00104ddc 041c
.org 0x104dde
	ldr r0, [r4, #40]	@ 00104dde a06a
.org 0x104de0
	ldr r3, [pc, #84]	@ 00104de0 154b
.org 0x104de2
	adds r0, r0, r3	@ 00104de2 c018
.org 0x104de4
	ldr r2, [r0, #20]	@ 00104de4 4269
.org 0x104de6
	cmp r2, #0	@ 00104de6 002a
.org 0x104de8
	bne.n 0x104e04	@ 00104de8 0cd1
.org 0x104dea
	adds r0, r4, #0	@ 00104dea 201c
.org 0x104dec
	adds r0, #180	@ 00104dec b430
.org 0x104dee
	strb r2, [r0, #0]	@ 00104dee 0270
.org 0x104df0
	ldr r1, [pc, #72]	@ 00104df0 1249
.org 0x104df2
	ldrb r0, [r4, #9]	@ 00104df2 607a
.org 0x104df4
	lsls r0, r0, #2	@ 00104df4 8000
.org 0x104df6
	adds r0, r0, r1	@ 00104df6 4018
.org 0x104df8
	movs r1, #2	@ 00104df8 0221
.org 0x104dfa
	str r1, [r4, #12]	@ 00104dfa e160
.org 0x104dfc
	ldr r0, [r0, #0]	@ 00104dfc 0068
.org 0x104dfe
	ldr r0, [r0, #8]	@ 00104dfe 8068
.org 0x104e00
	str r0, [r4, #20]	@ 00104e00 6061
.org 0x104e02
	strb r2, [r4, #14]	@ 00104e02 a273
.org 0x104e04
	ldrb r0, [r4, #16]	@ 00104e04 207c
.org 0x104e06
	cmp r0, #0	@ 00104e06 0028
.org 0x104e08
	beq.n 0x104eee	@ 00104e08 71d0
.org 0x104e0a
	adds r0, r4, #0	@ 00104e0a 201c
.org 0x104e0c
	adds r0, #140	@ 00104e0c 8c30
.org 0x104e0e
	ldr r0, [r0, #0]	@ 00104e0e 0068
.org 0x104e10
	movs r1, #128	@ 00104e10 8021
.org 0x104e12
	lsls r1, r1, #2	@ 00104e12 8900
.org 0x104e14
	ands r0, r1	@ 00104e14 0840
.org 0x104e16
	cmp r0, #0	@ 00104e16 0028
.org 0x104e18
	beq.n 0x104e40	@ 00104e18 12d0
.org 0x104e1a
	ldr r1, [pc, #32]	@ 00104e1a 0849
.org 0x104e1c
	ldrb r0, [r4, #9]	@ 00104e1c 607a
.org 0x104e1e
	lsls r0, r0, #2	@ 00104e1e 8000
.org 0x104e20
	adds r0, r0, r1	@ 00104e20 4018
.org 0x104e22
	movs r1, #2	@ 00104e22 0221
.org 0x104e24
	str r1, [r4, #12]	@ 00104e24 e160
.org 0x104e26
	ldr r0, [r0, #0]	@ 00104e26 0068
.org 0x104e28
	ldr r0, [r0, #8]	@ 00104e28 8068
.org 0x104e2a
	str r0, [r4, #20]	@ 00104e2a 6061
.org 0x104e2c
	movs r0, #0	@ 00104e2c 0020
.org 0x104e2e
	strb r0, [r4, #14]	@ 00104e2e a073
.org 0x104e30
	adds r0, r4, #0	@ 00104e30 201c
.org 0x104e32
	bl 0x104ef8	@ 00104e32 00f061f8
.org 0x104e36
	b.n 0x104eee	@ 00104e36 5ae0
.org 0x104e38
	.byte 0xcc,0x0d,0x00,0x00	@ 00104e38 data
.org 0x104e3c
	.byte 0xfc,0x92,0x86,0x08	@ 00104e3c data
.org 0x104e40
	ldr r1, [r4, #40]	@ 00104e40 a16a
.org 0x104e42
	adds r0, r1, r3	@ 00104e42 c818
.org 0x104e44
	ldr r3, [r0, #40]	@ 00104e44 836a
.org 0x104e46
	adds r7, r1, #0	@ 00104e46 0f1c
.org 0x104e48
	cmp r3, #0	@ 00104e48 002b
.org 0x104e4a
	bne.n 0x104ee2	@ 00104e4a 4ad1
.org 0x104e4c
	ldr r0, [pc, #64]	@ 00104e4c 1048
.org 0x104e4e
	adds r1, r7, r0	@ 00104e4e 3918
.org 0x104e50
	ldrb r2, [r4, #17]	@ 00104e50 627c
.org 0x104e52
	lsls r0, r2, #4	@ 00104e52 1001
.org 0x104e54
	adds r0, #8	@ 00104e54 0830
.org 0x104e56
	lsls r0, r0, #8	@ 00104e56 0002
.org 0x104e58
	ldr r1, [r1, #4]	@ 00104e58 4968
.org 0x104e5a
	adds r1, r1, r0	@ 00104e5a 0918
.org 0x104e5c
	ldr r0, [r4, #88]	@ 00104e5c a06d
.org 0x104e5e
	adds r6, r2, #0	@ 00104e5e 161c
.org 0x104e60
	cmp r1, r0	@ 00104e60 8142
.org 0x104e62
	bge.n 0x104e6a	@ 00104e62 02da
.org 0x104e64
	ldr r1, [pc, #44]	@ 00104e64 0b49
.org 0x104e66
	adds r0, r0, r1	@ 00104e66 4018
.org 0x104e68
	str r0, [r4, #88]	@ 00104e68 a065
.org 0x104e6a
	ldr r1, [r4, #44]	@ 00104e6a e16a
.org 0x104e6c
	cmp r1, #0	@ 00104e6c 0029
.org 0x104e6e
	bne.n 0x104ebe	@ 00104e6e 26d1
.org 0x104e70
	ldrb r0, [r4, #17]	@ 00104e70 607c
.org 0x104e72
	cmp r0, #1	@ 00104e72 0128
.org 0x104e74
	bhi.n 0x104ee2	@ 00104e74 35d8
.org 0x104e76
	adds r0, r4, #0	@ 00104e76 201c
.org 0x104e78
	adds r0, #184	@ 00104e78 b830
.org 0x104e7a
	ldr r2, [r0, #0]	@ 00104e7a 0268
.org 0x104e7c
	ldr r1, [r4, #88]	@ 00104e7c a16d
.org 0x104e7e
	subs r3, r2, r1	@ 00104e7e 531a
.org 0x104e80
	adds r5, r0, #0	@ 00104e80 051c
.org 0x104e82
	cmp r3, #0	@ 00104e82 002b
.org 0x104e84
	blt.n 0x104e98	@ 00104e84 08db
.org 0x104e86
	movs r0, #128	@ 00104e86 8020
.org 0x104e88
	lsls r0, r0, #5	@ 00104e88 4001
.org 0x104e8a
	cmp r3, r0	@ 00104e8a 8342
.org 0x104e8c
	bgt.n 0x104ea2	@ 00104e8c 09dc
.org 0x104e8e
	b.n 0x104ee2	@ 00104e8e 28e0
.org 0x104e90
	.byte 0xc4,0x0d,0x00,0x00	@ 00104e90 data
.org 0x104e94
	.byte 0x00,0xff,0xff,0xff	@ 00104e94 data
.org 0x104e98
	subs r1, r1, r2	@ 00104e98 891a
.org 0x104e9a
	movs r0, #128	@ 00104e9a 8020
.org 0x104e9c
	lsls r0, r0, #5	@ 00104e9c 4001
.org 0x104e9e
	cmp r1, r0	@ 00104e9e 8142
.org 0x104ea0
	ble.n 0x104ee2	@ 00104ea0 1fdd
.org 0x104ea2
	ldr r0, [r4, #84]	@ 00104ea2 606d
.org 0x104ea4
	str r0, [sp, #0]	@ 00104ea4 0090
.org 0x104ea6
	ldr r0, [r5, #0]	@ 00104ea6 2868
.org 0x104ea8
	str r0, [sp, #4]	@ 00104ea8 0190
.org 0x104eaa
	ldrb r1, [r4, #16]	@ 00104eaa 217c
.org 0x104eac
	lsls r1, r1, #8	@ 00104eac 0902
.org 0x104eae
	adds r0, r6, #1	@ 00104eae 701c
.org 0x104eb0
	orrs r1, r0	@ 00104eb0 0143
.org 0x104eb2
	mov r0, sp	@ 00104eb2 6846
.org 0x104eb4
	adds r2, r7, #0	@ 00104eb4 3a1c
.org 0x104eb6
	bl 0x104c9c	@ 00104eb6 fff7f1fe
.org 0x104eba
	str r0, [r4, #44]	@ 00104eba e062
.org 0x104ebc
	b.n 0x104ee2	@ 00104ebc 11e0
.org 0x104ebe
	ldrb r0, [r1, #12]	@ 00104ebe 087b
.org 0x104ec0
	cmp r0, #1	@ 00104ec0 0128
.org 0x104ec2
	bls.n 0x104ee2	@ 00104ec2 0ed9
.org 0x104ec4
	adds r0, r1, #0	@ 00104ec4 081c
.org 0x104ec6
	adds r0, #180	@ 00104ec6 b430
.org 0x104ec8
	strb r3, [r0, #0]	@ 00104ec8 0370
.org 0x104eca
	ldr r0, [r4, #44]	@ 00104eca e06a
.org 0x104ecc
	ldr r1, [r0, #44]	@ 00104ecc c16a
.org 0x104ece
	cmp r1, #0	@ 00104ece 0029
.org 0x104ed0
	beq.n 0x104ee2	@ 00104ed0 07d0
.org 0x104ed2
	str r1, [r4, #44]	@ 00104ed2 e162
.org 0x104ed4
	ldrb r0, [r4, #17]	@ 00104ed4 607c
.org 0x104ed6
	adds r0, #1	@ 00104ed6 0130
.org 0x104ed8
	strb r0, [r1, #17]	@ 00104ed8 4874
.org 0x104eda
	ldr r0, [r4, #44]	@ 00104eda e06a
.org 0x104edc
	adds r0, #181	@ 00104edc b530
.org 0x104ede
	movs r1, #1	@ 00104ede 0121
.org 0x104ee0
	strb r1, [r0, #0]	@ 00104ee0 0170
.org 0x104ee2
	adds r0, r4, #0	@ 00104ee2 201c
.org 0x104ee4
	bl 0x105084	@ 00104ee4 00f0cef8
