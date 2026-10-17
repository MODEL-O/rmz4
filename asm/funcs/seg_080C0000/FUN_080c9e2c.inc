@ FUN_080c9e2c  entry 0x080c9e2c  size 294
.thumb
.org 0xc9e2c
FUN_080c9e2c:
	push {r4, r5, r6, r7, lr}	@ 000c9e2c f0b5
.org 0xc9e2e
	mov r7, r8	@ 000c9e2e 4746
.org 0xc9e30
	push {r7}	@ 000c9e30 80b4
.org 0xc9e32
	adds r6, r0, #0	@ 000c9e32 061c
.org 0xc9e34
	adds r0, #180	@ 000c9e34 b430
.org 0xc9e36
	movs r4, #0	@ 000c9e36 0024
.org 0xc9e38
	strb r4, [r0, #0]	@ 000c9e38 0470
.org 0xc9e3a
	adds r0, #1	@ 000c9e3a 0130
.org 0xc9e3c
	strb r4, [r0, #0]	@ 000c9e3c 0470
.org 0xc9e3e
	adds r1, r6, #0	@ 000c9e3e 311c
.org 0xc9e40
	adds r1, #182	@ 000c9e40 b631
.org 0xc9e42
	movs r0, #255	@ 000c9e42 ff20
.org 0xc9e44
	strb r0, [r1, #0]	@ 000c9e44 0870
.org 0xc9e46
	adds r0, r6, #0	@ 000c9e46 301c
.org 0xc9e48
	adds r0, #184	@ 000c9e48 b830
.org 0xc9e4a
	str r4, [r0, #0]	@ 000c9e4a 0460
.org 0xc9e4c
	adds r0, #4	@ 000c9e4c 0430
.org 0xc9e4e
	str r4, [r0, #0]	@ 000c9e4e 0460
.org 0xc9e50
	adds r0, #5	@ 000c9e50 0530
.org 0xc9e52
	strb r4, [r0, #0]	@ 000c9e52 0470
.org 0xc9e54
	strb r4, [r6, #18]	@ 000c9e54 b474
.org 0xc9e56
	strb r4, [r6, #19]	@ 000c9e56 f474
.org 0xc9e58
	str r4, [r6, #40]	@ 000c9e58 b462
.org 0xc9e5a
	ldrb r0, [r6, #10]	@ 000c9e5a b07a
.org 0xc9e5c
	movs r1, #4	@ 000c9e5c 0421
.org 0xc9e5e
	orrs r0, r1	@ 000c9e5e 0843
.org 0xc9e60
	strb r0, [r6, #10]	@ 000c9e60 b072
.org 0xc9e62
	adds r5, r6, #0	@ 000c9e62 351c
.org 0xc9e64
	adds r5, #116	@ 000c9e64 7435
.org 0xc9e66
	ldr r1, [pc, #44]	@ 000c9e66 0b49
.org 0xc9e68
	adds r2, r6, #0	@ 000c9e68 321c
.org 0xc9e6a
	adds r2, #84	@ 000c9e6a 5432
.org 0xc9e6c
	adds r0, r5, #0	@ 000c9e6c 281c
.org 0xc9e6e
	movs r3, #128	@ 000c9e6e 8023
.org 0xc9e70
	bl 0x5760	@ 000c9e70 3bf776fc
.org 0xc9e74
	str r6, [r5, #44]	@ 000c9e74 ee62
.org 0xc9e76
	str r4, [r5, #36]	@ 000c9e76 6c62
.org 0xc9e78
	ldrb r0, [r6, #10]	@ 000c9e78 b07a
.org 0xc9e7a
	movs r2, #254	@ 000c9e7a fe22
.org 0xc9e7c
	ands r2, r0	@ 000c9e7c 0240
.org 0xc9e7e
	strb r2, [r6, #10]	@ 000c9e7e b272
.org 0xc9e80
	adds r0, r6, #0	@ 000c9e80 301c
.org 0xc9e82
	adds r0, #183	@ 000c9e82 b730
.org 0xc9e84
	ldrb r3, [r0, #0]	@ 000c9e84 0378
.org 0xc9e86
	cmp r3, #0	@ 000c9e86 002b
.org 0xc9e88
	beq.n 0xc9e98	@ 000c9e88 06d0
.org 0xc9e8a
	movs r1, #16	@ 000c9e8a 1021
.org 0xc9e8c
	adds r0, r2, #0	@ 000c9e8c 101c
.org 0xc9e8e
	orrs r0, r1	@ 000c9e8e 0843
.org 0xc9e90
	b.n 0xc9e9c	@ 000c9e90 04e0
.org 0xc9e92
	.byte 0x00	@ 000c9e92 data
.org 0xc9e93
	.byte 0x00	@ 000c9e93 data
.org 0xc9e94
	.byte 0x84,0x62,0x86,0x08	@ 000c9e94 data
.org 0xc9e98
	movs r0, #239	@ 000c9e98 ef20
.org 0xc9e9a
	ands r0, r2	@ 000c9e9a 1040
.org 0xc9e9c
	strb r0, [r6, #10]	@ 000c9e9c b072
.org 0xc9e9e
	movs r5, #1	@ 000c9e9e 0125
.org 0xc9ea0
	adds r1, r5, #0	@ 000c9ea0 291c
.org 0xc9ea2
	ands r1, r3	@ 000c9ea2 1940
.org 0xc9ea4
	adds r4, r6, #0	@ 000c9ea4 341c
.org 0xc9ea6
	adds r4, #76	@ 000c9ea6 4c34
.org 0xc9ea8
	movs r0, #0	@ 000c9ea8 0020
.org 0xc9eaa
	mov r8, r0	@ 000c9eaa 8046
.org 0xc9eac
	strb r1, [r4, #0]	@ 000c9eac 2170
.org 0xc9eae
	adds r3, r6, #0	@ 000c9eae 331c
.org 0xc9eb0
	adds r3, #74	@ 000c9eb0 4a33
.org 0xc9eb2
	lsls r1, r1, #4	@ 000c9eb2 0901
.org 0xc9eb4
	ldrb r2, [r3, #0]	@ 000c9eb4 1a78
.org 0xc9eb6
	movs r0, #17	@ 000c9eb6 1120
.org 0xc9eb8
	negs r0, r0	@ 000c9eb8 4042
.org 0xc9eba
	ands r0, r2	@ 000c9eba 1040
.org 0xc9ebc
	orrs r0, r1	@ 000c9ebc 0843
.org 0xc9ebe
	strb r0, [r3, #0]	@ 000c9ebe 1870
.org 0xc9ec0
	ldrb r0, [r6, #17]	@ 000c9ec0 707c
.org 0xc9ec2
	adds r7, r4, #0	@ 000c9ec2 271c
.org 0xc9ec4
	adds r4, r3, #0	@ 000c9ec4 1c1c
.org 0xc9ec6
	cmp r0, #0	@ 000c9ec6 0028
.org 0xc9ec8
	bne.n 0xc9eec	@ 000c9ec8 10d1
.org 0xc9eca
	movs r0, #196	@ 000c9eca c420
.org 0xc9ecc
	strb r0, [r6, #18]	@ 000c9ecc b074
.org 0xc9ece
	adds r0, r6, #0	@ 000c9ece 301c
.org 0xc9ed0
	adds r0, #181	@ 000c9ed0 b530
.org 0xc9ed2
	strb r5, [r0, #0]	@ 000c9ed2 0570
.org 0xc9ed4
	ldrb r0, [r6, #10]	@ 000c9ed4 b07a
.org 0xc9ed6
	movs r1, #1	@ 000c9ed6 0121
.org 0xc9ed8
	orrs r0, r1	@ 000c9ed8 0843
.org 0xc9eda
	strb r0, [r6, #10]	@ 000c9eda b072
.org 0xc9edc
	ldr r1, [pc, #8]	@ 000c9edc 0249
.org 0xc9ede
	adds r0, r6, #0	@ 000c9ede 301c
.org 0xc9ee0
	bl 0x1cf00	@ 000c9ee0 53f70ef8
.org 0xc9ee4
	b.n 0xc9f32	@ 000c9ee4 25e0
.org 0xc9ee6
	.byte 0x00	@ 000c9ee6 data
.org 0xc9ee7
	.byte 0x00	@ 000c9ee7 data
.org 0xc9ee8
	.byte 0x09,0x75,0x00,0x00	@ 000c9ee8 data
.org 0xc9eec
	cmp r0, #3	@ 000c9eec 0328
.org 0xc9eee
	bne.n 0xc9f2a	@ 000c9eee 1cd1
.org 0xc9ef0
	ldr r1, [pc, #24]	@ 000c9ef0 0649
.org 0xc9ef2
	adds r0, r6, #0	@ 000c9ef2 301c
.org 0xc9ef4
	bl 0x1cf00	@ 000c9ef4 53f704f8
.org 0xc9ef8
	ldrb r2, [r6, #10]	@ 000c9ef8 b27a
.org 0xc9efa
	lsrs r0, r2, #4	@ 000c9efa 1009
.org 0xc9efc
	adds r1, r5, #0	@ 000c9efc 291c
.org 0xc9efe
	bics r1, r0	@ 000c9efe 8143
.org 0xc9f00
	cmp r1, #0	@ 000c9f00 0029
.org 0xc9f02
	beq.n 0xc9f10	@ 000c9f02 05d0
.org 0xc9f04
	movs r0, #16	@ 000c9f04 1020
.org 0xc9f06
	orrs r0, r2	@ 000c9f06 1043
.org 0xc9f08
	b.n 0xc9f14	@ 000c9f08 04e0
.org 0xc9f0a
	.byte 0x00	@ 000c9f0a data
.org 0xc9f0b
	.byte 0x00	@ 000c9f0b data
.org 0xc9f0c
	.byte 0x09,0x75,0x00,0x00	@ 000c9f0c data
.org 0xc9f10
	movs r0, #239	@ 000c9f10 ef20
.org 0xc9f12
	ands r0, r2	@ 000c9f12 1040
.org 0xc9f14
	strb r0, [r6, #10]	@ 000c9f14 b072
.org 0xc9f16
	adds r0, r1, #0	@ 000c9f16 081c
.org 0xc9f18
	strb r0, [r7, #0]	@ 000c9f18 3870
.org 0xc9f1a
	lsls r0, r0, #4	@ 000c9f1a 0001
.org 0xc9f1c
	ldrb r2, [r4, #0]	@ 000c9f1c 2278
.org 0xc9f1e
	movs r1, #17	@ 000c9f1e 1121
.org 0xc9f20
	negs r1, r1	@ 000c9f20 4942
.org 0xc9f22
	ands r1, r2	@ 000c9f22 1140
.org 0xc9f24
	orrs r1, r0	@ 000c9f24 0143
.org 0xc9f26
	strb r1, [r4, #0]	@ 000c9f26 2170
.org 0xc9f28
	b.n 0xc9f32	@ 000c9f28 03e0
.org 0xc9f2a
	ldr r1, [pc, #56]	@ 000c9f2a 0e49
.org 0xc9f2c
	adds r0, r6, #0	@ 000c9f2c 301c
.org 0xc9f2e
	bl 0x1cf00	@ 000c9f2e 52f7e7ff
.org 0xc9f32
	adds r0, r6, #0	@ 000c9f32 301c
.org 0xc9f34
	bl 0xca2ec	@ 000c9f34 00f0daf9
.org 0xc9f38
	movs r2, #128	@ 000c9f38 8022
.org 0xc9f3a
	lsls r2, r2, #2	@ 000c9f3a 9200
.org 0xc9f3c
	str r2, [r6, #92]	@ 000c9f3c f265
.org 0xc9f3e
	movs r1, #0	@ 000c9f3e 0021
.org 0xc9f40
	str r1, [r6, #96]	@ 000c9f40 3166
.org 0xc9f42
	adds r0, r6, #0	@ 000c9f42 301c
.org 0xc9f44
	adds r0, #183	@ 000c9f44 b730
.org 0xc9f46
	ldrb r0, [r0, #0]	@ 000c9f46 0078
.org 0xc9f48
	cmp r0, #0	@ 000c9f48 0028
.org 0xc9f4a
	bne.n 0xc9f56	@ 000c9f4a 04d1
.org 0xc9f4c
	lsls r0, r2, #8	@ 000c9f4c 1002
.org 0xc9f4e
	negs r0, r0	@ 000c9f4e 4042
.org 0xc9f50
	adds r0, #255	@ 000c9f50 ff30
