@ FUN_080d7de0  entry 0x080d7de0  size 354
.thumb
.org 0xd7de0
FUN_080d7de0:
	push {r4, r5, r6, r7, lr}	@ 000d7de0 f0b5
.org 0xd7de2
	adds r6, r0, #0	@ 000d7de2 061c
.org 0xd7de4
	ldr r0, [r6, #40]	@ 000d7de4 b06a
.org 0xd7de6
	ldrb r0, [r0, #10]	@ 000d7de6 807a
.org 0xd7de8
	lsls r0, r0, #24	@ 000d7de8 0006
.org 0xd7dea
	lsrs r5, r0, #28	@ 000d7dea 050f
.org 0xd7dec
	movs r1, #1	@ 000d7dec 0121
.org 0xd7dee
	ands r5, r1	@ 000d7dee 0d40
.org 0xd7df0
	lsrs r4, r0, #29	@ 000d7df0 440f
.org 0xd7df2
	ands r4, r1	@ 000d7df2 0c40
.org 0xd7df4
	ldrb r7, [r6, #17]	@ 000d7df4 777c
.org 0xd7df6
	ldrb r0, [r6, #14]	@ 000d7df6 b07b
.org 0xd7df8
	cmp r0, #0	@ 000d7df8 0028
.org 0xd7dfa
	beq.n 0xd7e02	@ 000d7dfa 02d0
.org 0xd7dfc
	cmp r0, #1	@ 000d7dfc 0128
.org 0xd7dfe
	beq.n 0xd7ec0	@ 000d7dfe 5fd0
.org 0xd7e00
	b.n 0xd7f50	@ 000d7e00 a6e0
.org 0xd7e02
	ldrb r1, [r6, #10]	@ 000d7e02 b17a
.org 0xd7e04
	movs r0, #1	@ 000d7e04 0120
.org 0xd7e06
	movs r3, #0	@ 000d7e06 0023
.org 0xd7e08
	adds r2, r0, #0	@ 000d7e08 021c
.org 0xd7e0a
	orrs r2, r1	@ 000d7e0a 0a43
.org 0xd7e0c
	strb r2, [r6, #10]	@ 000d7e0c b272
.org 0xd7e0e
	adds r1, r5, #0	@ 000d7e0e 291c
.org 0xd7e10
	cmp r5, #0	@ 000d7e10 002d
.org 0xd7e12
	beq.n 0xd7e1a	@ 000d7e12 02d0
.org 0xd7e14
	movs r0, #16	@ 000d7e14 1020
.org 0xd7e16
	orrs r2, r0	@ 000d7e16 0243
.org 0xd7e18
	b.n 0xd7e1e	@ 000d7e18 01e0
.org 0xd7e1a
	movs r0, #239	@ 000d7e1a ef20
.org 0xd7e1c
	ands r2, r0	@ 000d7e1c 0240
.org 0xd7e1e
	strb r2, [r6, #10]	@ 000d7e1e b272
.org 0xd7e20
	adds r0, r6, #0	@ 000d7e20 301c
.org 0xd7e22
	adds r0, #76	@ 000d7e22 4c30
.org 0xd7e24
	strb r1, [r0, #0]	@ 000d7e24 0170
.org 0xd7e26
	adds r2, r6, #0	@ 000d7e26 321c
.org 0xd7e28
	adds r2, #74	@ 000d7e28 4a32
.org 0xd7e2a
	lsls r1, r1, #4	@ 000d7e2a 0901
.org 0xd7e2c
	ldrb r3, [r2, #0]	@ 000d7e2c 1378
.org 0xd7e2e
	movs r0, #17	@ 000d7e2e 1120
.org 0xd7e30
	negs r0, r0	@ 000d7e30 4042
.org 0xd7e32
	ands r0, r3	@ 000d7e32 1840
.org 0xd7e34
	orrs r0, r1	@ 000d7e34 0843
.org 0xd7e36
	strb r0, [r2, #0]	@ 000d7e36 1070
.org 0xd7e38
	adds r3, r4, #0	@ 000d7e38 231c
.org 0xd7e3a
	adds r4, r2, #0	@ 000d7e3a 141c
.org 0xd7e3c
	cmp r3, #0	@ 000d7e3c 002b
.org 0xd7e3e
	beq.n 0xd7e48	@ 000d7e3e 03d0
.org 0xd7e40
	ldrb r0, [r6, #10]	@ 000d7e40 b07a
.org 0xd7e42
	movs r1, #32	@ 000d7e42 2021
.org 0xd7e44
	orrs r0, r1	@ 000d7e44 0843
.org 0xd7e46
	b.n 0xd7e4e	@ 000d7e46 02e0
.org 0xd7e48
	ldrb r1, [r6, #10]	@ 000d7e48 b17a
.org 0xd7e4a
	movs r0, #223	@ 000d7e4a df20
.org 0xd7e4c
	ands r0, r1	@ 000d7e4c 0840
.org 0xd7e4e
	strb r0, [r6, #10]	@ 000d7e4e b072
.org 0xd7e50
	adds r1, r3, #0	@ 000d7e50 191c
.org 0xd7e52
	adds r2, r6, #0	@ 000d7e52 321c
.org 0xd7e54
	adds r2, #77	@ 000d7e54 4d32
.org 0xd7e56
	strb r1, [r2, #0]	@ 000d7e56 1170
.org 0xd7e58
	lsls r1, r1, #5	@ 000d7e58 4901
.org 0xd7e5a
	ldrb r2, [r4, #0]	@ 000d7e5a 2278
.org 0xd7e5c
	movs r0, #33	@ 000d7e5c 2120
.org 0xd7e5e
	negs r0, r0	@ 000d7e5e 4042
.org 0xd7e60
	ands r0, r2	@ 000d7e60 1040
.org 0xd7e62
	orrs r0, r1	@ 000d7e62 0843
.org 0xd7e64
	strb r0, [r4, #0]	@ 000d7e64 2070
.org 0xd7e66
	ldr r1, [r6, #116]	@ 000d7e66 716f
.org 0xd7e68
	lsls r0, r7, #1	@ 000d7e68 7800
.org 0xd7e6a
	adds r0, r0, r1	@ 000d7e6a 4018
.org 0xd7e6c
	ldrh r1, [r0, #0]	@ 000d7e6c 0188
.org 0xd7e6e
	adds r0, r6, #0	@ 000d7e6e 301c
.org 0xd7e70
	bl 0x1cf00	@ 000d7e70 45f746f8
.org 0xd7e74
	cmp r5, #0	@ 000d7e74 002d
.org 0xd7e76
	beq.n 0xd7e7c	@ 000d7e76 01d0
.org 0xd7e78
	movs r0, #2	@ 000d7e78 0220
.org 0xd7e7a
	subs r7, r0, r7	@ 000d7e7a c71b
.org 0xd7e7c
	subs r1, r7, #1	@ 000d7e7c 791e
.org 0xd7e7e
	lsls r1, r1, #8	@ 000d7e7e 0902
.org 0xd7e80
	ldr r5, [pc, #80]	@ 000d7e80 144d
.org 0xd7e82
	ldr r0, [r5, #0]	@ 000d7e82 2868
.org 0xd7e84
	ldr r4, [pc, #80]	@ 000d7e84 144c
.org 0xd7e86
	muls r0, r4	@ 000d7e86 6043
.org 0xd7e88
	ldr r3, [pc, #80]	@ 000d7e88 144b
.org 0xd7e8a
	adds r0, r0, r3	@ 000d7e8a c018
.org 0xd7e8c
	lsls r0, r0, #1	@ 000d7e8c 4000
.org 0xd7e8e
	lsrs r2, r0, #1	@ 000d7e8e 4208
.org 0xd7e90
	lsls r0, r0, #6	@ 000d7e90 8001
.org 0xd7e92
	lsrs r0, r0, #23	@ 000d7e92 c00d
.org 0xd7e94
	adds r1, r1, r0	@ 000d7e94 0918
.org 0xd7e96
	ldr r0, [pc, #72]	@ 000d7e96 1248
.org 0xd7e98
	adds r1, r1, r0	@ 000d7e98 0918
.org 0xd7e9a
	str r1, [r6, #92]	@ 000d7e9a f165
.org 0xd7e9c
	adds r1, r2, #0	@ 000d7e9c 111c
.org 0xd7e9e
	muls r1, r4	@ 000d7e9e 6143
.org 0xd7ea0
	adds r1, r1, r3	@ 000d7ea0 c918
.org 0xd7ea2
	lsls r1, r1, #1	@ 000d7ea2 4900
.org 0xd7ea4
	lsrs r0, r1, #1	@ 000d7ea4 4808
.org 0xd7ea6
	str r0, [r5, #0]	@ 000d7ea6 2860
.org 0xd7ea8
	lsrs r1, r1, #17	@ 000d7ea8 490c
.org 0xd7eaa
	movs r0, #128	@ 000d7eaa 8020
.org 0xd7eac
	lsls r0, r0, #1	@ 000d7eac 4000
.org 0xd7eae
	ands r1, r0	@ 000d7eae 0140
.org 0xd7eb0
	ldr r0, [pc, #48]	@ 000d7eb0 0c48
.org 0xd7eb2
	subs r0, r0, r1	@ 000d7eb2 401a
.org 0xd7eb4
	str r0, [r6, #96]	@ 000d7eb4 3066
.org 0xd7eb6
	movs r0, #0	@ 000d7eb6 0020
.org 0xd7eb8
	strb r0, [r6, #18]	@ 000d7eb8 b074
.org 0xd7eba
	ldrb r0, [r6, #14]	@ 000d7eba b07b
.org 0xd7ebc
	adds r0, #1	@ 000d7ebc 0130
.org 0xd7ebe
	strb r0, [r6, #14]	@ 000d7ebe b073
.org 0xd7ec0
	ldrb r0, [r6, #18]	@ 000d7ec0 b07c
.org 0xd7ec2
	adds r0, #1	@ 000d7ec2 0130
.org 0xd7ec4
	strb r0, [r6, #18]	@ 000d7ec4 b074
.org 0xd7ec6
	movs r1, #1	@ 000d7ec6 0121
.org 0xd7ec8
	ands r0, r1	@ 000d7ec8 0840
.org 0xd7eca
	cmp r0, #0	@ 000d7eca 0028
.org 0xd7ecc
	beq.n 0xd7ee8	@ 000d7ecc 0cd0
.org 0xd7ece
	ldrb r0, [r6, #10]	@ 000d7ece b07a
.org 0xd7ed0
	orrs r0, r1	@ 000d7ed0 0843
.org 0xd7ed2
	b.n 0xd7eee	@ 000d7ed2 0ce0
.org 0xd7ed4
	.byte 0x38,0xdc,0x02,0x02	@ 000d7ed4 data
.org 0xd7ed8
	.byte 0xfd,0x43,0x03,0x00	@ 000d7ed8 data
.org 0xd7edc
	.byte 0xc3,0x9e,0x26,0x00	@ 000d7edc data
.org 0xd7ee0
	.byte 0x00,0xff,0xff,0xff	@ 000d7ee0 data
.org 0xd7ee4
	.byte 0x00,0xfe,0xff,0xff	@ 000d7ee4 data
.org 0xd7ee8
	ldrb r1, [r6, #10]	@ 000d7ee8 b17a
.org 0xd7eea
	movs r0, #254	@ 000d7eea fe20
.org 0xd7eec
	ands r0, r1	@ 000d7eec 0840
.org 0xd7eee
	strb r0, [r6, #10]	@ 000d7eee b072
.org 0xd7ef0
	ldr r0, [r6, #84]	@ 000d7ef0 706d
.org 0xd7ef2
	ldr r1, [r6, #92]	@ 000d7ef2 f16d
.org 0xd7ef4
	adds r0, r0, r1	@ 000d7ef4 4018
.org 0xd7ef6
	str r0, [r6, #84]	@ 000d7ef6 7065
.org 0xd7ef8
	ldr r0, [r6, #88]	@ 000d7ef8 b06d
.org 0xd7efa
	ldr r1, [r6, #96]	@ 000d7efa 316e
.org 0xd7efc
	adds r0, r0, r1	@ 000d7efc 4018
.org 0xd7efe
	str r0, [r6, #88]	@ 000d7efe b065
.org 0xd7f00
	adds r1, #64	@ 000d7f00 4031
.org 0xd7f02
	str r1, [r6, #96]	@ 000d7f02 3166
.org 0xd7f04
	adds r0, r6, #0	@ 000d7f04 301c
.org 0xd7f06
	bl 0x1d134	@ 000d7f06 45f715f9
.org 0xd7f0a
	ldrb r0, [r6, #18]	@ 000d7f0a b07c
.org 0xd7f0c
	cmp r0, #24	@ 000d7f0c 1828
.org 0xd7f0e
	bls.n 0xd7f50	@ 000d7f0e 1fd9
.org 0xd7f10
	ldr r0, [r6, #84]	@ 000d7f10 706d
.org 0xd7f12
	ldr r1, [r6, #88]	@ 000d7f12 b16d
.org 0xd7f14
	bl 0x7c7c	@ 000d7f14 2ff7b2fe
.org 0xd7f18
	lsls r0, r0, #16	@ 000d7f18 0004
.org 0xd7f1a
	cmp r0, #0	@ 000d7f1a 0028
.org 0xd7f1c
	beq.n 0xd7f50	@ 000d7f1c 18d0
.org 0xd7f1e
	adds r0, r6, #0	@ 000d7f1e 301c
.org 0xd7f20
	adds r0, #121	@ 000d7f20 7930
.org 0xd7f22
	ldrb r0, [r0, #0]	@ 000d7f22 0078
.org 0xd7f24
	cmp r0, #0	@ 000d7f24 0028
.org 0xd7f26
	bne.n 0xd7f34	@ 000d7f26 05d1
.org 0xd7f28
	adds r1, r6, #0	@ 000d7f28 311c
.org 0xd7f2a
	adds r1, #84	@ 000d7f2a 5431
.org 0xd7f2c
	movs r0, #3	@ 000d7f2c 0320
.org 0xd7f2e
	bl 0xd0c88	@ 000d7f2e f8f7abfe
.org 0xd7f32
	b.n 0xd7f3e	@ 000d7f32 04e0
.org 0xd7f34
	adds r1, r6, #0	@ 000d7f34 311c
.org 0xd7f36
	adds r1, #84	@ 000d7f36 5431
.org 0xd7f38
	movs r0, #2	@ 000d7f38 0220
.org 0xd7f3a
	bl 0xd0c88	@ 000d7f3a f8f7a5fe
.org 0xd7f3e
	ldr r1, [pc, #24]	@ 000d7f3e 0649
.org 0xd7f40
	ldrb r0, [r6, #9]	@ 000d7f40 707a
