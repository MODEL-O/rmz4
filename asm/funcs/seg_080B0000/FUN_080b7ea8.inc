@ FUN_080b7ea8  entry 0x080b7ea8  size 246
.thumb
.org 0xb7ea8
FUN_080b7ea8:
	push {r4, r5, r6, r7, lr}	@ 000b7ea8 f0b5
.org 0xb7eaa
	mov r7, sl	@ 000b7eaa 5746
.org 0xb7eac
	mov r6, r9	@ 000b7eac 4e46
.org 0xb7eae
	mov r5, r8	@ 000b7eae 4546
.org 0xb7eb0
	push {r5, r6, r7}	@ 000b7eb0 e0b4
.org 0xb7eb2
	adds r7, r0, #0	@ 000b7eb2 071c
.org 0xb7eb4
	ldr r0, [r7, #40]	@ 000b7eb4 b86a
.org 0xb7eb6
	mov sl, r0	@ 000b7eb6 8246
.org 0xb7eb8
	ldrb r4, [r7, #14]	@ 000b7eb8 bc7b
.org 0xb7eba
	cmp r4, #0	@ 000b7eba 002c
.org 0xb7ebc
	bne.n 0xb7ef2	@ 000b7ebc 19d1
.org 0xb7ebe
	adds r0, r7, #0	@ 000b7ebe 381c
.org 0xb7ec0
	bl 0x1cd28	@ 000b7ec0 64f732ff
.org 0xb7ec4
	ldrb r1, [r7, #10]	@ 000b7ec4 b97a
.org 0xb7ec6
	movs r0, #1	@ 000b7ec6 0120
.org 0xb7ec8
	orrs r0, r1	@ 000b7ec8 0843
.org 0xb7eca
	movs r1, #2	@ 000b7eca 0221
.org 0xb7ecc
	orrs r0, r1	@ 000b7ecc 0843
.org 0xb7ece
	strb r0, [r7, #10]	@ 000b7ece b872
.org 0xb7ed0
	adds r0, r7, #0	@ 000b7ed0 381c
.org 0xb7ed2
	bl 0x1ceec	@ 000b7ed2 65f70bf8
.org 0xb7ed6
	movs r1, #178	@ 000b7ed6 b221
.org 0xb7ed8
	lsls r1, r1, #8	@ 000b7ed8 0902
.org 0xb7eda
	adds r0, r7, #0	@ 000b7eda 381c
.org 0xb7edc
	bl 0x1cf00	@ 000b7edc 65f710f8
.org 0xb7ee0
	strb r4, [r7, #18]	@ 000b7ee0 bc74
.org 0xb7ee2
	str r4, [r7, #100]	@ 000b7ee2 7c66
.org 0xb7ee4
	strb r4, [r7, #15]	@ 000b7ee4 fc73
.org 0xb7ee6
	movs r0, #89	@ 000b7ee6 5920
.org 0xb7ee8
	bl 0x2b10	@ 000b7ee8 4af712fe
.org 0xb7eec
	ldrb r0, [r7, #14]	@ 000b7eec b87b
.org 0xb7eee
	adds r0, #1	@ 000b7eee 0130
.org 0xb7ef0
	strb r0, [r7, #14]	@ 000b7ef0 b873
.org 0xb7ef2
	adds r0, r7, #0	@ 000b7ef2 381c
.org 0xb7ef4
	bl 0x1cff0	@ 000b7ef4 65f77cf8
.org 0xb7ef8
	mov r1, sl	@ 000b7ef8 5146
.org 0xb7efa
	ldrb r0, [r1, #13]	@ 000b7efa 487b
.org 0xb7efc
	cmp r0, #9	@ 000b7efc 0928
.org 0xb7efe
	bne.n 0xb7fa0	@ 000b7efe 4fd1
.org 0xb7f00
	ldr r0, [r7, #100]	@ 000b7f00 786e
.org 0xb7f02
	adds r1, r0, #0	@ 000b7f02 011c
.org 0xb7f04
	movs r2, #3	@ 000b7f04 0322
.org 0xb7f06
	ands r1, r2	@ 000b7f06 1140
.org 0xb7f08
	adds r0, #1	@ 000b7f08 0130
.org 0xb7f0a
	str r0, [r7, #100]	@ 000b7f0a 7866
.org 0xb7f0c
	cmp r1, #0	@ 000b7f0c 0029
.org 0xb7f0e
	bne.n 0xb7f1c	@ 000b7f0e 05d1
.org 0xb7f10
	adds r0, r7, #0	@ 000b7f10 381c
.org 0xb7f12
	adds r0, #84	@ 000b7f12 5430
.org 0xb7f14
	movs r1, #3	@ 000b7f14 0321
.org 0xb7f16
	movs r2, #0	@ 000b7f16 0022
.org 0xb7f18
	bl 0xe41b8	@ 000b7f18 2cf04ef9
.org 0xb7f1c
	ldrb r4, [r7, #18]	@ 000b7f1c bc7c
.org 0xb7f1e
	movs r0, #39	@ 000b7f1e 2720
.org 0xb7f20
	subs r0, r0, r4	@ 000b7f20 001b
.org 0xb7f22
	strb r0, [r7, #19]	@ 000b7f22 f874
.org 0xb7f24
	ldr r0, [r7, #40]	@ 000b7f24 b86a
.org 0xb7f26
	adds r6, r0, #0	@ 000b7f26 061c
.org 0xb7f28
	adds r6, #180	@ 000b7f28 b436
.org 0xb7f2a
	ldr r0, [r7, #84]	@ 000b7f2a 786d
.org 0xb7f2c
	mov sl, r0	@ 000b7f2c 8246
.org 0xb7f2e
	ldr r1, [pc, #104]	@ 000b7f2e 1a49
.org 0xb7f30
	add r1, sl	@ 000b7f30 5144
.org 0xb7f32
	ldr r0, [r6, #0]	@ 000b7f32 3068
.org 0xb7f34
	subs r0, r0, r1	@ 000b7f34 401a
.org 0xb7f36
	ldrb r1, [r7, #19]	@ 000b7f36 f97c
.org 0xb7f38
	bl 0x128fb8	@ 000b7f38 71f03ef8
.org 0xb7f3c
	mov r8, r0	@ 000b7f3c 8046
.org 0xb7f3e
	str r0, [r7, #92]	@ 000b7f3e f865
.org 0xb7f40
	ldr r1, [r7, #88]	@ 000b7f40 b96d
.org 0xb7f42
	mov r9, r1	@ 000b7f42 8946
.org 0xb7f44
	ldr r1, [pc, #84]	@ 000b7f44 1549
.org 0xb7f46
	add r1, r9	@ 000b7f46 4944
.org 0xb7f48
	ldr r0, [r6, #4]	@ 000b7f48 7068
.org 0xb7f4a
	subs r0, r0, r1	@ 000b7f4a 401a
.org 0xb7f4c
	ldrb r1, [r7, #19]	@ 000b7f4c f97c
.org 0xb7f4e
	bl 0x128fb8	@ 000b7f4e 71f033f8
.org 0xb7f52
	str r0, [r7, #96]	@ 000b7f52 3866
.org 0xb7f54
	mov r2, sl	@ 000b7f54 5246
.org 0xb7f56
	add r2, r8	@ 000b7f56 4244
.org 0xb7f58
	str r2, [r7, #84]	@ 000b7f58 7a65
.org 0xb7f5a
	add r0, r9	@ 000b7f5a 4844
.org 0xb7f5c
	str r0, [r7, #88]	@ 000b7f5c b865
.org 0xb7f5e
	adds r4, #1	@ 000b7f5e 0134
.org 0xb7f60
	strb r4, [r7, #18]	@ 000b7f60 bc74
.org 0xb7f62
	lsls r4, r4, #24	@ 000b7f62 2406
.org 0xb7f64
	lsrs r4, r4, #24	@ 000b7f64 240e
.org 0xb7f66
	cmp r4, #39	@ 000b7f66 272c
.org 0xb7f68
	bls.n 0xb7f8a	@ 000b7f68 0fd9
.org 0xb7f6a
	ldr r0, [r6, #0]	@ 000b7f6a 3068
.org 0xb7f6c
	movs r1, #128	@ 000b7f6c 8021
.org 0xb7f6e
	lsls r1, r1, #4	@ 000b7f6e 0901
.org 0xb7f70
	adds r0, r0, r1	@ 000b7f70 4018
.org 0xb7f72
	str r0, [r7, #84]	@ 000b7f72 7865
.org 0xb7f74
	ldr r0, [r6, #4]	@ 000b7f74 7068
.org 0xb7f76
	movs r2, #192	@ 000b7f76 c022
.org 0xb7f78
	lsls r2, r2, #6	@ 000b7f78 9201
.org 0xb7f7a
	adds r0, r0, r2	@ 000b7f7a 8018
.org 0xb7f7c
	str r0, [r7, #88]	@ 000b7f7c b865
.org 0xb7f7e
	movs r0, #39	@ 000b7f7e 2720
.org 0xb7f80
	strb r0, [r7, #18]	@ 000b7f80 b874
.org 0xb7f82
	movs r0, #3	@ 000b7f82 0320
.org 0xb7f84
	strb r0, [r7, #13]	@ 000b7f84 7873
.org 0xb7f86
	movs r0, #0	@ 000b7f86 0020
.org 0xb7f88
	strb r0, [r7, #14]	@ 000b7f88 b873
.org 0xb7f8a
	ldrb r0, [r7, #18]	@ 000b7f8a b87c
.org 0xb7f8c
	negs r0, r0	@ 000b7f8c 4042
.org 0xb7f8e
	adds r1, r7, #0	@ 000b7f8e 391c
.org 0xb7f90
	adds r1, #36	@ 000b7f90 2431
.org 0xb7f92
	strb r0, [r1, #0]	@ 000b7f92 0870
.org 0xb7f94
	b.n 0xb8050	@ 000b7f94 5ce0
.org 0xb7f96
	.byte 0x00	@ 000b7f96 data
.org 0xb7f97
	.byte 0x00	@ 000b7f97 data
.org 0xb7f98
	.byte 0x00,0xf8,0xff,0xff	@ 000b7f98 data
.org 0xb7f9c
	.byte 0x00,0xd0,0xff,0xff	@ 000b7f9c data
