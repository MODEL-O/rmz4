@ FUN_08059eb0  entry 0x08059eb0  size 148
.thumb
.org 0x59eb0
FUN_08059eb0:
	push {r4, lr}	@ 00059eb0 10b5
.org 0x59eb2
	adds r4, r0, #0	@ 00059eb2 041c
.org 0x59eb4
	ldrb r0, [r4, #15]	@ 00059eb4 e07b
.org 0x59eb6
	cmp r0, #0	@ 00059eb6 0028
.org 0x59eb8
	bne.n 0x59eee	@ 00059eb8 19d1
.org 0x59eba
	adds r0, r4, #0	@ 00059eba 201c
.org 0x59ebc
	adds r0, #116	@ 00059ebc 7430
.org 0x59ebe
	ldr r1, [pc, #132]	@ 00059ebe 2149
.org 0x59ec0
	bl 0x5784	@ 00059ec0 abf760fc
.org 0x59ec4
	ldrb r0, [r4, #30]	@ 00059ec4 a07f
.org 0x59ec6
	lsls r0, r0, #8	@ 00059ec6 0002
.org 0x59ec8
	adds r1, r4, #0	@ 00059ec8 211c
.org 0x59eca
	adds r1, #112	@ 00059eca 7031
.org 0x59ecc
	ldrb r1, [r1, #0]	@ 00059ecc 0978
.org 0x59ece
	orrs r0, r1	@ 00059ece 0843
.org 0x59ed0
	ldr r1, [pc, #116]	@ 00059ed0 1d49
.org 0x59ed2
	cmp r0, r1	@ 00059ed2 8842
.org 0x59ed4
	beq.n 0x59ee4	@ 00059ed4 06d0
.org 0x59ed6
	adds r0, r4, #0	@ 00059ed6 201c
.org 0x59ed8
	bl 0x1cf00	@ 00059ed8 c3f712f8
.org 0x59edc
	adds r1, r4, #0	@ 00059edc 211c
.org 0x59ede
	adds r1, #189	@ 00059ede bd31
.org 0x59ee0
	movs r0, #1	@ 00059ee0 0120
.org 0x59ee2
	strb r0, [r1, #0]	@ 00059ee2 0870
.org 0x59ee4
	movs r0, #32	@ 00059ee4 2020
.org 0x59ee6
	strb r0, [r4, #18]	@ 00059ee6 a074
.org 0x59ee8
	ldrb r0, [r4, #15]	@ 00059ee8 e07b
.org 0x59eea
	adds r0, #1	@ 00059eea 0130
.org 0x59eec
	strb r0, [r4, #15]	@ 00059eec e073
.org 0x59eee
	adds r0, r4, #0	@ 00059eee 201c
.org 0x59ef0
	bl 0x1cff0	@ 00059ef0 c3f77ef8
.org 0x59ef4
	ldrb r0, [r4, #18]	@ 00059ef4 a07c
.org 0x59ef6
	cmp r0, #0	@ 00059ef6 0028
.org 0x59ef8
	beq.n 0x59efe	@ 00059ef8 01d0
.org 0x59efa
	subs r0, #1	@ 00059efa 0138
.org 0x59efc
	strb r0, [r4, #18]	@ 00059efc a074
.org 0x59efe
	ldr r0, [pc, #76]	@ 00059efe 1348
.org 0x59f00
	ldrh r1, [r0, #8]	@ 00059f00 0189
.org 0x59f02
	movs r0, #8	@ 00059f02 0820
.org 0x59f04
	ands r0, r1	@ 00059f04 0840
.org 0x59f06
	cmp r0, #0	@ 00059f06 0028
.org 0x59f08
	bne.n 0x59f3e	@ 00059f08 19d1
.org 0x59f0a
	adds r0, r4, #0	@ 00059f0a 201c
.org 0x59f0c
	adds r0, #200	@ 00059f0c c830
.org 0x59f0e
	ldr r0, [r0, #0]	@ 00059f0e 0068
.org 0x59f10
	cmp r0, #0	@ 00059f10 0028
.org 0x59f12
	beq.n 0x59f32	@ 00059f12 0ed0
.org 0x59f14
	adds r0, r4, #0	@ 00059f14 201c
.org 0x59f16
	adds r0, #191	@ 00059f16 bf30
.org 0x59f18
	ldrb r1, [r0, #0]	@ 00059f18 0178
.org 0x59f1a
	subs r0, r1, #1	@ 00059f1a 481e
.org 0x59f1c
	lsls r0, r0, #24	@ 00059f1c 0006
.org 0x59f1e
	lsrs r0, r0, #24	@ 00059f1e 000e
.org 0x59f20
	cmp r0, #1	@ 00059f20 0128
.org 0x59f22
	bls.n 0x59f3e	@ 00059f22 0cd9
.org 0x59f24
	adds r0, r1, #0	@ 00059f24 081c
.org 0x59f26
	cmp r0, #4	@ 00059f26 0428
.org 0x59f28
	beq.n 0x59f3e	@ 00059f28 09d0
.org 0x59f2a
	cmp r0, #5	@ 00059f2a 0528
.org 0x59f2c
	beq.n 0x59f3e	@ 00059f2c 07d0
.org 0x59f2e
	cmp r0, #3	@ 00059f2e 0328
.org 0x59f30
	beq.n 0x59f3e	@ 00059f30 05d0
.org 0x59f32
	ldrb r0, [r4, #18]	@ 00059f32 a07c
.org 0x59f34
	cmp r0, #0	@ 00059f34 0028
.org 0x59f36
	bne.n 0x59f3e	@ 00059f36 02d1
.org 0x59f38
	adds r0, r4, #0	@ 00059f38 201c
.org 0x59f3a
	bl 0x5bf8c	@ 00059f3a 02f027f8
.org 0x59f3e
	pop {r4}	@ 00059f3e 10bc
.org 0x59f40
	pop {r0}	@ 00059f40 01bc
.org 0x59f42
	bx r0	@ 00059f42 0047
