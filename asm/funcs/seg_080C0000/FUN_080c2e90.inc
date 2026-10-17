@ FUN_080c2e90  entry 0x080c2e90  size 136
.thumb
.org 0xc2e90
FUN_080c2e90:
	push {r4, lr}	@ 000c2e90 10b5
.org 0xc2e92
	adds r4, r0, #0	@ 000c2e92 041c
.org 0xc2e94
	ldr r0, [r4, #40]	@ 000c2e94 a06a
.org 0xc2e96
	ldrb r0, [r0, #12]	@ 000c2e96 007b
.org 0xc2e98
	cmp r0, #1	@ 000c2e98 0128
.org 0xc2e9a
	bls.n 0xc2ebc	@ 000c2e9a 0fd9
.org 0xc2e9c
	ldr r1, [pc, #24]	@ 000c2e9c 0649
.org 0xc2e9e
	ldrb r0, [r4, #9]	@ 000c2e9e 607a
.org 0xc2ea0
	lsls r0, r0, #2	@ 000c2ea0 8000
.org 0xc2ea2
	adds r0, r0, r1	@ 000c2ea2 4018
.org 0xc2ea4
	movs r1, #2	@ 000c2ea4 0221
.org 0xc2ea6
	str r1, [r4, #12]	@ 000c2ea6 e160
.org 0xc2ea8
	ldr r0, [r0, #0]	@ 000c2ea8 0068
.org 0xc2eaa
	ldr r0, [r0, #8]	@ 000c2eaa 8068
.org 0xc2eac
	str r0, [r4, #20]	@ 000c2eac 6061
.org 0xc2eae
	adds r0, r4, #0	@ 000c2eae 201c
.org 0xc2eb0
	bl 0xc2f2c	@ 000c2eb0 00f03cf8
.org 0xc2eb4
	b.n 0xc2f18	@ 000c2eb4 30e0
.org 0xc2eb6
	.byte 0x00	@ 000c2eb6 data
.org 0xc2eb7
	.byte 0x00	@ 000c2eb7 data
.org 0xc2eb8
	.byte 0xf4,0x49,0x86,0x08	@ 000c2eb8 data
.org 0xc2ebc
	adds r0, r4, #0	@ 000c2ebc 201c
.org 0xc2ebe
	bl 0x1cff0	@ 000c2ebe 5af797f8
.org 0xc2ec2
	ldr r0, [r4, #84]	@ 000c2ec2 606d
.org 0xc2ec4
	ldr r1, [r4, #92]	@ 000c2ec4 e16d
.org 0xc2ec6
	adds r0, r0, r1	@ 000c2ec6 4018
.org 0xc2ec8
	str r0, [r4, #84]	@ 000c2ec8 6065
.org 0xc2eca
	ldr r0, [r4, #88]	@ 000c2eca a06d
.org 0xc2ecc
	ldr r1, [r4, #96]	@ 000c2ecc 216e
.org 0xc2ece
	adds r0, r0, r1	@ 000c2ece 4018
.org 0xc2ed0
	str r0, [r4, #88]	@ 000c2ed0 a065
.org 0xc2ed2
	ldr r0, [pc, #76]	@ 000c2ed2 1348
.org 0xc2ed4
	adds r1, r4, #0	@ 000c2ed4 211c
.org 0xc2ed6
	adds r1, #84	@ 000c2ed6 5431
.org 0xc2ed8
	bl 0x1fb14	@ 000c2ed8 5cf71cfe
.org 0xc2edc
	ldr r1, [pc, #68]	@ 000c2edc 1149
.org 0xc2ede
	cmp r0, r1	@ 000c2ede 8842
.org 0xc2ee0
	bls.n 0xc2f18	@ 000c2ee0 1ad9
.org 0xc2ee2
	ldrb r1, [r4, #10]	@ 000c2ee2 a17a
.org 0xc2ee4
	movs r0, #254	@ 000c2ee4 fe20
.org 0xc2ee6
	ands r0, r1	@ 000c2ee6 0840
.org 0xc2ee8
	movs r2, #0	@ 000c2ee8 0022
.org 0xc2eea
	movs r1, #253	@ 000c2eea fd21
.org 0xc2eec
	ands r0, r1	@ 000c2eec 0840
.org 0xc2eee
	strb r0, [r4, #10]	@ 000c2eee a072
.org 0xc2ef0
	adds r0, r4, #0	@ 000c2ef0 201c
.org 0xc2ef2
	adds r0, #140	@ 000c2ef2 8c30
.org 0xc2ef4
	str r2, [r0, #0]	@ 000c2ef4 0260
.org 0xc2ef6
	adds r0, #4	@ 000c2ef6 0430
.org 0xc2ef8
	str r2, [r0, #0]	@ 000c2ef8 0260
.org 0xc2efa
	adds r0, #4	@ 000c2efa 0430
.org 0xc2efc
	strb r2, [r0, #0]	@ 000c2efc 0270
.org 0xc2efe
	ldrb r1, [r4, #10]	@ 000c2efe a17a
.org 0xc2f00
	movs r0, #251	@ 000c2f00 fb20
.org 0xc2f02
	ands r0, r1	@ 000c2f02 0840
.org 0xc2f04
	strb r0, [r4, #10]	@ 000c2f04 a072
.org 0xc2f06
	ldr r1, [pc, #32]	@ 000c2f06 0849
.org 0xc2f08
	ldrb r0, [r4, #9]	@ 000c2f08 607a
.org 0xc2f0a
	lsls r0, r0, #2	@ 000c2f0a 8000
.org 0xc2f0c
	adds r0, r0, r1	@ 000c2f0c 4018
.org 0xc2f0e
	movs r1, #3	@ 000c2f0e 0321
.org 0xc2f10
	str r1, [r4, #12]	@ 000c2f10 e160
.org 0xc2f12
	ldr r0, [r0, #0]	@ 000c2f12 0068
.org 0xc2f14
	ldr r0, [r0, #12]	@ 000c2f14 c068
.org 0xc2f16
	str r0, [r4, #20]	@ 000c2f16 6061
