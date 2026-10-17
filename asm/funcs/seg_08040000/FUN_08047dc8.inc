@ FUN_08047dc8  entry 0x08047dc8  size 306
.thumb
.org 0x47dc8
FUN_08047dc8:
	push {r4, r5, r6, lr}	@ 00047dc8 70b5
.org 0x47dca
	adds r5, r0, #0	@ 00047dca 051c
.org 0x47dcc
	ldr r6, [r5, #40]	@ 00047dcc ae6a
.org 0x47dce
	movs r1, #168	@ 00047dce a821
.org 0x47dd0
	lsls r1, r1, #1	@ 00047dd0 4900
.org 0x47dd2
	adds r0, r6, r1	@ 00047dd2 7018
.org 0x47dd4
	ldrb r0, [r0, #0]	@ 00047dd4 0078
.org 0x47dd6
	cmp r0, #255	@ 00047dd6 ff28
.org 0x47dd8
	bne.n 0x47e24	@ 00047dd8 24d1
.org 0x47dda
	ldr r0, [pc, #64]	@ 00047dda 1048
.org 0x47ddc
	adds r2, r6, r0	@ 00047ddc 3218
.org 0x47dde
	ldrb r0, [r2, #0]	@ 00047dde 1078
.org 0x47de0
	movs r1, #64	@ 00047de0 4021
.org 0x47de2
	orrs r0, r1	@ 00047de2 0843
.org 0x47de4
	strb r0, [r2, #0]	@ 00047de4 1070
.org 0x47de6
	ldrb r1, [r5, #10]	@ 00047de6 a97a
.org 0x47de8
	movs r0, #254	@ 00047de8 fe20
.org 0x47dea
	ands r0, r1	@ 00047dea 0840
.org 0x47dec
	movs r2, #0	@ 00047dec 0022
.org 0x47dee
	movs r1, #253	@ 00047dee fd21
.org 0x47df0
	ands r0, r1	@ 00047df0 0840
.org 0x47df2
	strb r0, [r5, #10]	@ 00047df2 a872
.org 0x47df4
	adds r0, r5, #0	@ 00047df4 281c
.org 0x47df6
	adds r0, #140	@ 00047df6 8c30
.org 0x47df8
	str r2, [r0, #0]	@ 00047df8 0260
.org 0x47dfa
	adds r0, #4	@ 00047dfa 0430
.org 0x47dfc
	str r2, [r0, #0]	@ 00047dfc 0260
.org 0x47dfe
	adds r0, #4	@ 00047dfe 0430
.org 0x47e00
	strb r2, [r0, #0]	@ 00047e00 0270
.org 0x47e02
	ldrb r1, [r5, #10]	@ 00047e02 a97a
.org 0x47e04
	movs r0, #251	@ 00047e04 fb20
.org 0x47e06
	ands r0, r1	@ 00047e06 0840
.org 0x47e08
	strb r0, [r5, #10]	@ 00047e08 a872
.org 0x47e0a
	ldr r1, [pc, #20]	@ 00047e0a 0549
.org 0x47e0c
	ldrb r0, [r5, #9]	@ 00047e0c 687a
.org 0x47e0e
	lsls r0, r0, #2	@ 00047e0e 8000
.org 0x47e10
	adds r0, r0, r1	@ 00047e10 4018
.org 0x47e12
	movs r1, #3	@ 00047e12 0321
.org 0x47e14
	str r1, [r5, #12]	@ 00047e14 e960
.org 0x47e16
	ldr r0, [r0, #0]	@ 00047e16 0068
.org 0x47e18
	ldr r0, [r0, #12]	@ 00047e18 c068
.org 0x47e1a
	b.n 0x47f00	@ 00047e1a 71e0
.org 0x47e1c
	.byte 0x53,0x01,0x00,0x00	@ 00047e1c data
.org 0x47e20
	.byte 0xf8,0x39,0x85,0x08	@ 00047e20 data
.org 0x47e24
	adds r0, r5, #0	@ 00047e24 281c
.org 0x47e26
	bl 0x1cff0	@ 00047e26 d5f7e3f8
.org 0x47e2a
	ldrb r0, [r6, #10]	@ 00047e2a b07a
.org 0x47e2c
	lsrs r2, r0, #4	@ 00047e2c 0209
.org 0x47e2e
	movs r0, #1	@ 00047e2e 0120
.org 0x47e30
	ands r2, r0	@ 00047e30 0240
.org 0x47e32
	cmp r2, #0	@ 00047e32 002a
.org 0x47e34
	beq.n 0x47e3e	@ 00047e34 03d0
.org 0x47e36
	ldrb r1, [r5, #10]	@ 00047e36 a97a
.org 0x47e38
	movs r0, #16	@ 00047e38 1020
.org 0x47e3a
	orrs r0, r1	@ 00047e3a 0843
.org 0x47e3c
	b.n 0x47e44	@ 00047e3c 02e0
.org 0x47e3e
	ldrb r1, [r5, #10]	@ 00047e3e a97a
.org 0x47e40
	movs r0, #239	@ 00047e40 ef20
.org 0x47e42
	ands r0, r1	@ 00047e42 0840
.org 0x47e44
	strb r0, [r5, #10]	@ 00047e44 a872
.org 0x47e46
	adds r1, r2, #0	@ 00047e46 111c
.org 0x47e48
	adds r0, r5, #0	@ 00047e48 281c
.org 0x47e4a
	adds r0, #76	@ 00047e4a 4c30
.org 0x47e4c
	strb r1, [r0, #0]	@ 00047e4c 0170
.org 0x47e4e
	adds r3, r5, #0	@ 00047e4e 2b1c
.org 0x47e50
	adds r3, #74	@ 00047e50 4a33
.org 0x47e52
	lsls r1, r1, #4	@ 00047e52 0901
.org 0x47e54
	ldrb r2, [r3, #0]	@ 00047e54 1a78
.org 0x47e56
	movs r0, #17	@ 00047e56 1120
.org 0x47e58
	negs r0, r0	@ 00047e58 4042
.org 0x47e5a
	ands r0, r2	@ 00047e5a 1040
.org 0x47e5c
	orrs r0, r1	@ 00047e5c 0843
.org 0x47e5e
	strb r0, [r3, #0]	@ 00047e5e 1870
.org 0x47e60
	adds r0, r6, #0	@ 00047e60 301c
.org 0x47e62
	adds r0, #113	@ 00047e62 7130
.org 0x47e64
	ldrb r0, [r0, #0]	@ 00047e64 0078
.org 0x47e66
	lsls r0, r0, #24	@ 00047e66 0006
.org 0x47e68
	asrs r0, r0, #24	@ 00047e68 0016
.org 0x47e6a
	movs r4, #0	@ 00047e6a 0024
.org 0x47e6c
	cmp r0, #3	@ 00047e6c 0328
.org 0x47e6e
	bne.n 0x47e72	@ 00047e6e 00d1
.org 0x47e70
	movs r4, #1	@ 00047e70 0124
.org 0x47e72
	ldrb r1, [r5, #10]	@ 00047e72 a97a
.org 0x47e74
	movs r0, #16	@ 00047e74 1020
.org 0x47e76
	ands r0, r1	@ 00047e76 0840
.org 0x47e78
	cmp r0, #0	@ 00047e78 0028
.org 0x47e7a
	beq.n 0x47e9c	@ 00047e7a 0fd0
.org 0x47e7c
	ldr r3, [pc, #24]	@ 00047e7c 064b
.org 0x47e7e
	lsls r4, r4, #3	@ 00047e7e e400
.org 0x47e80
	movs r1, #168	@ 00047e80 a821
.org 0x47e82
	lsls r1, r1, #1	@ 00047e82 4900
.org 0x47e84
	adds r2, r6, r1	@ 00047e84 7218
.org 0x47e86
	ldrb r0, [r2, #0]	@ 00047e86 1078
.org 0x47e88
	lsls r0, r0, #4	@ 00047e88 0001
.org 0x47e8a
	adds r0, r4, r0	@ 00047e8a 2018
.org 0x47e8c
	adds r0, r0, r3	@ 00047e8c c018
.org 0x47e8e
	ldr r1, [r6, #84]	@ 00047e8e 716d
.org 0x47e90
	ldr r0, [r0, #0]	@ 00047e90 0068
.org 0x47e92
	subs r1, r1, r0	@ 00047e92 091a
.org 0x47e94
	b.n 0x47eb4	@ 00047e94 0ee0
.org 0x47e96
	.byte 0x00	@ 00047e96 data
.org 0x47e97
	.byte 0x00	@ 00047e97 data
.org 0x47e98
	.byte 0x4c,0x35,0x85,0x08	@ 00047e98 data
.org 0x47e9c
	ldr r3, [pc, #104]	@ 00047e9c 1a4b
.org 0x47e9e
	lsls r4, r4, #3	@ 00047e9e e400
.org 0x47ea0
	movs r0, #168	@ 00047ea0 a820
.org 0x47ea2
	lsls r0, r0, #1	@ 00047ea2 4000
.org 0x47ea4
	adds r2, r6, r0	@ 00047ea4 3218
.org 0x47ea6
	ldrb r0, [r2, #0]	@ 00047ea6 1078
.org 0x47ea8
	lsls r0, r0, #4	@ 00047ea8 0001
.org 0x47eaa
	adds r0, r4, r0	@ 00047eaa 2018
.org 0x47eac
	adds r0, r0, r3	@ 00047eac c018
.org 0x47eae
	ldr r1, [r6, #84]	@ 00047eae 716d
.org 0x47eb0
	ldr r0, [r0, #0]	@ 00047eb0 0068
.org 0x47eb2
	adds r1, r1, r0	@ 00047eb2 0918
.org 0x47eb4
	str r1, [r5, #84]	@ 00047eb4 6965
.org 0x47eb6
	ldrb r0, [r2, #0]	@ 00047eb6 1078
.org 0x47eb8
	lsls r0, r0, #4	@ 00047eb8 0001
.org 0x47eba
	adds r0, r4, r0	@ 00047eba 2018
.org 0x47ebc
	adds r1, r3, #4	@ 00047ebc 191d
.org 0x47ebe
	adds r0, r0, r1	@ 00047ebe 4018
.org 0x47ec0
	ldr r1, [r6, #88]	@ 00047ec0 b16d
.org 0x47ec2
	ldr r0, [r0, #0]	@ 00047ec2 0068
.org 0x47ec4
	adds r1, r1, r0	@ 00047ec4 0918
.org 0x47ec6
	str r1, [r5, #88]	@ 00047ec6 a965
.org 0x47ec8
	ldr r1, [pc, #64]	@ 00047ec8 1049
.org 0x47eca
	ldrb r0, [r2, #0]	@ 00047eca 1078
.org 0x47ecc
	adds r0, r0, r1	@ 00047ecc 4018
.org 0x47ece
	ldrb r1, [r0, #0]	@ 00047ece 0178
.org 0x47ed0
	adds r0, r5, #0	@ 00047ed0 281c
.org 0x47ed2
	adds r0, #36	@ 00047ed2 2430
.org 0x47ed4
	strb r1, [r0, #0]	@ 00047ed4 0170
.org 0x47ed6
	ldrb r0, [r5, #18]	@ 00047ed6 a87c
.org 0x47ed8
	adds r1, r0, #1	@ 00047ed8 411c
.org 0x47eda
	strb r1, [r5, #18]	@ 00047eda a974
.org 0x47edc
	lsls r0, r0, #24	@ 00047edc 0006
.org 0x47ede
	lsrs r0, r0, #24	@ 00047ede 000e
.org 0x47ee0
	cmp r0, #16	@ 00047ee0 1028
.org 0x47ee2
	bls.n 0x47f02	@ 00047ee2 0ed9
.org 0x47ee4
	ldr r1, [pc, #40]	@ 00047ee4 0a49
.org 0x47ee6
	adds r2, r6, r1	@ 00047ee6 7218
.org 0x47ee8
	ldrb r0, [r2, #0]	@ 00047ee8 1078
.org 0x47eea
	movs r1, #64	@ 00047eea 4021
.org 0x47eec
	orrs r0, r1	@ 00047eec 0843
.org 0x47eee
	strb r0, [r2, #0]	@ 00047eee 1070
.org 0x47ef0
	ldr r1, [pc, #32]	@ 00047ef0 0849
.org 0x47ef2
	ldrb r0, [r5, #9]	@ 00047ef2 687a
.org 0x47ef4
	lsls r0, r0, #2	@ 00047ef4 8000
.org 0x47ef6
	adds r0, r0, r1	@ 00047ef6 4018
.org 0x47ef8
	movs r1, #2	@ 00047ef8 0221
