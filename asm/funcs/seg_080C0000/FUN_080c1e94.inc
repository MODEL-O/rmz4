@ FUN_080c1e94  entry 0x080c1e94  size 168
.thumb
.org 0xc1e94
FUN_080c1e94:
	push {r4, r5, r6, r7, lr}	@ 000c1e94 f0b5
.org 0xc1e96
	adds r7, r0, #0	@ 000c1e96 071c
.org 0xc1e98
	bl 0x1cc9c	@ 000c1e98 5af700ff
.org 0xc1e9c
	ldrb r1, [r7, #10]	@ 000c1e9c b97a
.org 0xc1e9e
	movs r0, #1	@ 000c1e9e 0120
.org 0xc1ea0
	movs r4, #0	@ 000c1ea0 0024
.org 0xc1ea2
	orrs r0, r1	@ 000c1ea2 0843
.org 0xc1ea4
	movs r1, #2	@ 000c1ea4 0221
.org 0xc1ea6
	orrs r0, r1	@ 000c1ea6 0843
.org 0xc1ea8
	strb r0, [r7, #10]	@ 000c1ea8 b872
.org 0xc1eaa
	movs r1, #244	@ 000c1eaa f421
.org 0xc1eac
	lsls r1, r1, #6	@ 000c1eac 8901
.org 0xc1eae
	adds r0, r7, #0	@ 000c1eae 381c
.org 0xc1eb0
	bl 0x1cf00	@ 000c1eb0 5bf726f8
.org 0xc1eb4
	adds r0, r7, #0	@ 000c1eb4 381c
.org 0xc1eb6
	bl 0x1cff0	@ 000c1eb6 5bf79bf8
.org 0xc1eba
	ldrb r2, [r7, #17]	@ 000c1eba 7a7c
.org 0xc1ebc
	cmp r2, #0	@ 000c1ebc 002a
.org 0xc1ebe
	beq.n 0xc1ec8	@ 000c1ebe 03d0
.org 0xc1ec0
	ldrb r0, [r7, #10]	@ 000c1ec0 b87a
.org 0xc1ec2
	movs r1, #16	@ 000c1ec2 1021
.org 0xc1ec4
	orrs r0, r1	@ 000c1ec4 0843
.org 0xc1ec6
	b.n 0xc1ece	@ 000c1ec6 02e0
.org 0xc1ec8
	ldrb r1, [r7, #10]	@ 000c1ec8 b97a
.org 0xc1eca
	movs r0, #239	@ 000c1eca ef20
.org 0xc1ecc
	ands r0, r1	@ 000c1ecc 0840
.org 0xc1ece
	strb r0, [r7, #10]	@ 000c1ece b872
.org 0xc1ed0
	movs r6, #1	@ 000c1ed0 0126
.org 0xc1ed2
	adds r1, r6, #0	@ 000c1ed2 311c
.org 0xc1ed4
	ands r1, r2	@ 000c1ed4 1140
.org 0xc1ed6
	adds r0, r7, #0	@ 000c1ed6 381c
.org 0xc1ed8
	adds r0, #76	@ 000c1ed8 4c30
.org 0xc1eda
	movs r5, #0	@ 000c1eda 0025
.org 0xc1edc
	strb r1, [r0, #0]	@ 000c1edc 0170
.org 0xc1ede
	adds r3, r7, #0	@ 000c1ede 3b1c
.org 0xc1ee0
	adds r3, #74	@ 000c1ee0 4a33
.org 0xc1ee2
	lsls r1, r1, #4	@ 000c1ee2 0901
.org 0xc1ee4
	ldrb r2, [r3, #0]	@ 000c1ee4 1a78
.org 0xc1ee6
	movs r0, #17	@ 000c1ee6 1120
.org 0xc1ee8
	negs r0, r0	@ 000c1ee8 4042
.org 0xc1eea
	ands r0, r2	@ 000c1eea 1040
.org 0xc1eec
	orrs r0, r1	@ 000c1eec 0843
.org 0xc1eee
	strb r0, [r3, #0]	@ 000c1eee 1870
.org 0xc1ef0
	ldrb r1, [r7, #10]	@ 000c1ef0 b97a
.org 0xc1ef2
	movs r0, #4	@ 000c1ef2 0420
.org 0xc1ef4
	orrs r0, r1	@ 000c1ef4 0843
.org 0xc1ef6
	strb r0, [r7, #10]	@ 000c1ef6 b872
.org 0xc1ef8
	adds r4, r7, #0	@ 000c1ef8 3c1c
.org 0xc1efa
	adds r4, #116	@ 000c1efa 7434
.org 0xc1efc
	ldr r1, [pc, #60]	@ 000c1efc 0f49
.org 0xc1efe
	adds r2, r7, #0	@ 000c1efe 3a1c
.org 0xc1f00
	adds r2, #84	@ 000c1f00 5432
.org 0xc1f02
	adds r0, r4, #0	@ 000c1f02 201c
.org 0xc1f04
	movs r3, #64	@ 000c1f04 4023
.org 0xc1f06
	bl 0x5760	@ 000c1f06 43f72bfc
.org 0xc1f0a
	str r7, [r4, #44]	@ 000c1f0a e762
.org 0xc1f0c
	str r5, [r4, #36]	@ 000c1f0c 6562
.org 0xc1f0e
	adds r1, r7, #0	@ 000c1f0e 391c
.org 0xc1f10
	adds r1, #184	@ 000c1f10 b831
.org 0xc1f12
	ldr r0, [r7, #88]	@ 000c1f12 b86d
.org 0xc1f14
	str r0, [r1, #0]	@ 000c1f14 0860
.org 0xc1f16
	ldr r0, [pc, #40]	@ 000c1f16 0a48
.org 0xc1f18
	str r0, [r7, #96]	@ 000c1f18 3866
.org 0xc1f1a
	strb r5, [r7, #18]	@ 000c1f1a bd74
.org 0xc1f1c
	ldrb r0, [r7, #17]	@ 000c1f1c 787c
.org 0xc1f1e
	strb r0, [r7, #19]	@ 000c1f1e f874
.org 0xc1f20
	ldr r1, [pc, #32]	@ 000c1f20 0849
.org 0xc1f22
	ldrb r0, [r7, #9]	@ 000c1f22 787a
.org 0xc1f24
	lsls r0, r0, #2	@ 000c1f24 8000
.org 0xc1f26
	adds r0, r0, r1	@ 000c1f26 4018
.org 0xc1f28
	str r6, [r7, #12]	@ 000c1f28 fe60
.org 0xc1f2a
	ldr r0, [r0, #0]	@ 000c1f2a 0068
.org 0xc1f2c
	ldr r0, [r0, #4]	@ 000c1f2c 4068
.org 0xc1f2e
	str r0, [r7, #20]	@ 000c1f2e 7861
.org 0xc1f30
	adds r0, r7, #0	@ 000c1f30 381c
.org 0xc1f32
	bl 0xc1b90	@ 000c1f32 fff72dfe
.org 0xc1f36
	pop {r4, r5, r6, r7}	@ 000c1f36 f0bc
.org 0xc1f38
	pop {r0}	@ 000c1f38 01bc
.org 0xc1f3a
	bx r0	@ 000c1f3a 0047
