@ FUN_080a4df0  entry 0x080a4df0  size 248
.thumb
.org 0xa4df0
FUN_080a4df0:
	push {r4, r5, r6, r7, lr}	@ 000a4df0 f0b5
.org 0xa4df2
	adds r4, r0, #0	@ 000a4df2 041c
.org 0xa4df4
	ldr r0, [pc, #164]	@ 000a4df4 2948
.org 0xa4df6
	ldr r5, [r0, #0]	@ 000a4df6 0568
.org 0xa4df8
	movs r6, #0	@ 000a4df8 0026
.org 0xa4dfa
	ldrb r0, [r4, #15]	@ 000a4dfa e07b
.org 0xa4dfc
	cmp r0, #0	@ 000a4dfc 0028
.org 0xa4dfe
	bne.n 0xa4e38	@ 000a4dfe 1bd1
.org 0xa4e00
	movs r0, #64	@ 000a4e00 4020
.org 0xa4e02
	bl 0x2b10	@ 000a4e02 5df785fe
.org 0xa4e06
	adds r0, r4, #0	@ 000a4e06 201c
.org 0xa4e08
	bl 0xa5448	@ 000a4e08 00f01efb
.org 0xa4e0c
	adds r0, r4, #0	@ 000a4e0c 201c
.org 0xa4e0e
	adds r0, #116	@ 000a4e0e 7430
.org 0xa4e10
	ldr r1, [pc, #140]	@ 000a4e10 2349
.org 0xa4e12
	bl 0x5784	@ 000a4e12 60f7b7fc
.org 0xa4e16
	adds r1, r4, #0	@ 000a4e16 211c
.org 0xa4e18
	adds r1, #37	@ 000a4e18 2531
.org 0xa4e1a
	movs r0, #15	@ 000a4e1a 0f20
.org 0xa4e1c
	strb r0, [r1, #0]	@ 000a4e1c 0870
.org 0xa4e1e
	movs r1, #136	@ 000a4e1e 8821
.org 0xa4e20
	lsls r1, r1, #6	@ 000a4e20 8901
.org 0xa4e22
	adds r0, r4, #0	@ 000a4e22 201c
.org 0xa4e24
	bl 0x1cf00	@ 000a4e24 78f76cf8
.org 0xa4e28
	adds r1, r4, #0	@ 000a4e28 211c
.org 0xa4e2a
	adds r1, #184	@ 000a4e2a b831
.org 0xa4e2c
	movs r0, #150	@ 000a4e2c 9620
.org 0xa4e2e
	lsls r0, r0, #1	@ 000a4e2e 4000
.org 0xa4e30
	str r0, [r1, #0]	@ 000a4e30 0860
.org 0xa4e32
	ldrb r0, [r4, #15]	@ 000a4e32 e07b
.org 0xa4e34
	adds r0, #1	@ 000a4e34 0130
.org 0xa4e36
	strb r0, [r4, #15]	@ 000a4e36 e073
.org 0xa4e38
	adds r0, r4, #0	@ 000a4e38 201c
.org 0xa4e3a
	bl 0x1cff0	@ 000a4e3a 78f7d9f8
.org 0xa4e3e
	adds r2, r4, #0	@ 000a4e3e 221c
.org 0xa4e40
	adds r2, #184	@ 000a4e40 b832
.org 0xa4e42
	ldr r0, [r2, #0]	@ 000a4e42 1068
.org 0xa4e44
	subs r0, #1	@ 000a4e44 0138
.org 0xa4e46
	str r0, [r2, #0]	@ 000a4e46 1060
.org 0xa4e48
	cmp r0, #0	@ 000a4e48 0028
.org 0xa4e4a
	bne.n 0xa4e4e	@ 000a4e4a 00d1
.org 0xa4e4c
	movs r6, #1	@ 000a4e4c 0126
.org 0xa4e4e
	adds r0, r4, #0	@ 000a4e4e 201c
.org 0xa4e50
	adds r0, #140	@ 000a4e50 8c30
.org 0xa4e52
	ldr r0, [r0, #0]	@ 000a4e52 0068
.org 0xa4e54
	movs r1, #128	@ 000a4e54 8021
.org 0xa4e56
	lsls r1, r1, #4	@ 000a4e56 0901
.org 0xa4e58
	ands r0, r1	@ 000a4e58 0840
.org 0xa4e5a
	cmp r0, #0	@ 000a4e5a 0028
.org 0xa4e5c
	beq.n 0xa4e76	@ 000a4e5c 0bd0
.org 0xa4e5e
	cmp r5, #0	@ 000a4e5e 002d
.org 0xa4e60
	beq.n 0xa4e76	@ 000a4e60 09d0
.org 0xa4e62
	adds r0, r5, #0	@ 000a4e62 281c
.org 0xa4e64
	adds r0, #140	@ 000a4e64 8c30
.org 0xa4e66
	ldr r0, [r0, #0]	@ 000a4e66 0068
.org 0xa4e68
	movs r3, #1	@ 000a4e68 0123
.org 0xa4e6a
	ands r0, r3	@ 000a4e6a 1840
.org 0xa4e6c
	cmp r0, #0	@ 000a4e6c 0028
.org 0xa4e6e
	beq.n 0xa4e72	@ 000a4e6e 00d0
.org 0xa4e70
	movs r6, #1	@ 000a4e70 0126
.org 0xa4e72
	cmp r6, #0	@ 000a4e72 002e
.org 0xa4e74
	beq.n 0xa4ea8	@ 000a4e74 18d0
.org 0xa4e76
	ldr r1, [pc, #44]	@ 000a4e76 0b49
.org 0xa4e78
	ldrb r0, [r4, #9]	@ 000a4e78 607a
.org 0xa4e7a
	lsls r0, r0, #2	@ 000a4e7a 8000
.org 0xa4e7c
	adds r0, r0, r1	@ 000a4e7c 4018
.org 0xa4e7e
	movs r1, #2	@ 000a4e7e 0221
.org 0xa4e80
	str r1, [r4, #12]	@ 000a4e80 e160
.org 0xa4e82
	ldr r0, [r0, #0]	@ 000a4e82 0068
.org 0xa4e84
	ldr r0, [r0, #8]	@ 000a4e84 8068
.org 0xa4e86
	str r0, [r4, #20]	@ 000a4e86 6061
.org 0xa4e88
	movs r1, #0	@ 000a4e88 0021
.org 0xa4e8a
	movs r0, #1	@ 000a4e8a 0120
.org 0xa4e8c
	strb r0, [r4, #13]	@ 000a4e8c 6073
.org 0xa4e8e
	strb r1, [r4, #14]	@ 000a4e8e a173
.org 0xa4e90
	strb r1, [r4, #15]	@ 000a4e90 e173
.org 0xa4e92
	adds r0, r4, #0	@ 000a4e92 201c
.org 0xa4e94
	bl 0xa5188	@ 000a4e94 00f078f9
.org 0xa4e98
	b.n 0xa4ef6	@ 000a4e98 2de0
.org 0xa4e9a
	.byte 0x00	@ 000a4e9a data
.org 0xa4e9b
	.byte 0x00	@ 000a4e9b data
.org 0xa4e9c
	.byte 0xf0,0xdb,0x02,0x02	@ 000a4e9c data
.org 0xa4ea0
	.byte 0xa0,0x21,0x86,0x08	@ 000a4ea0 data
.org 0xa4ea4
	.byte 0x40,0xdb,0x85,0x08	@ 000a4ea4 data
.org 0xa4ea8
	ldr r1, [pc, #36]	@ 000a4ea8 0949
.org 0xa4eaa
	adds r0, r5, r1	@ 000a4eaa 6818
.org 0xa4eac
	movs r1, #0	@ 000a4eac 0021
.org 0xa4eae
	mov ip, r1	@ 000a4eae 8c46
.org 0xa4eb0
	movs r7, #1	@ 000a4eb0 0127
.org 0xa4eb2
	strb r3, [r0, #0]	@ 000a4eb2 0370
.org 0xa4eb4
	movs r1, #185	@ 000a4eb4 b921
.org 0xa4eb6
	lsls r1, r1, #1	@ 000a4eb6 4900
.org 0xa4eb8
	adds r0, r5, r1	@ 000a4eb8 6818
.org 0xa4eba
	strb r6, [r0, #0]	@ 000a4eba 0670
.org 0xa4ebc
	ldr r1, [r2, #0]	@ 000a4ebc 1168
.org 0xa4ebe
	cmp r1, #74	@ 000a4ebe 4a29
.org 0xa4ec0
	bgt.n 0xa4ed4	@ 000a4ec0 08dc
.org 0xa4ec2
	ands r1, r3	@ 000a4ec2 1940
.org 0xa4ec4
	cmp r1, #0	@ 000a4ec4 0029
.org 0xa4ec6
	beq.n 0xa4ee2	@ 000a4ec6 0cd0
.org 0xa4ec8
	ldrb r0, [r4, #10]	@ 000a4ec8 a07a
.org 0xa4eca
	orrs r0, r7	@ 000a4eca 3843
.org 0xa4ecc
	b.n 0xa4ee8	@ 000a4ecc 0ce0
.org 0xa4ece
	.byte 0x00	@ 000a4ece data
.org 0xa4ecf
	.byte 0x00	@ 000a4ecf data
.org 0xa4ed0
	.byte 0x71,0x01,0x00,0x00	@ 000a4ed0 data
.org 0xa4ed4
	movs r0, #3	@ 000a4ed4 0320
.org 0xa4ed6
	ands r1, r0	@ 000a4ed6 0140
.org 0xa4ed8
	cmp r1, #0	@ 000a4ed8 0029
.org 0xa4eda
	beq.n 0xa4ee2	@ 000a4eda 02d0
.org 0xa4edc
	ldrb r0, [r4, #10]	@ 000a4edc a07a
.org 0xa4ede
	orrs r0, r7	@ 000a4ede 3843
.org 0xa4ee0
	b.n 0xa4ee8	@ 000a4ee0 02e0
.org 0xa4ee2
	ldrb r1, [r4, #10]	@ 000a4ee2 a17a
.org 0xa4ee4
	movs r0, #254	@ 000a4ee4 fe20
.org 0xa4ee6
	ands r0, r1	@ 000a4ee6 0840
