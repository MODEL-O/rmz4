@ FUN_0800a194  entry 0x0800a194  size 180
.thumb
.org 0xa194
FUN_0800a194:
	push {r4, r5, r6, lr}	@ 0000a194 70b5
.org 0xa196
	adds r5, r0, #0	@ 0000a196 051c
.org 0xa198
	ldr r0, [r5, #92]	@ 0000a198 e86d
.org 0xa19a
	lsls r0, r0, #16	@ 0000a19a 0004
.org 0xa19c
	ldrb r6, [r5, #14]	@ 0000a19c ae7b
.org 0xa19e
	cmp r6, #0	@ 0000a19e 002e
.org 0xa1a0
	bne.n 0xa21a	@ 0000a1a0 3bd1
.org 0xa1a2
	lsrs r3, r0, #20	@ 0000a1a2 030d
.org 0xa1a4
	lsls r2, r3, #1	@ 0000a1a4 5a00
.org 0xa1a6
	ldr r4, [pc, #64]	@ 0000a1a6 104c
.org 0xa1a8
	adds r2, r2, r4	@ 0000a1a8 1219
.org 0xa1aa
	ldr r1, [r5, #100]	@ 0000a1aa 696e
.org 0xa1ac
	movs r0, #69	@ 0000a1ac 4520
.org 0xa1ae
	orrs r1, r0	@ 0000a1ae 0143
.org 0xa1b0
	strh r1, [r2, #0]	@ 0000a1b0 1180
.org 0xa1b2
	lsls r3, r3, #2	@ 0000a1b2 9b00
.org 0xa1b4
	adds r4, #8	@ 0000a1b4 0834
.org 0xa1b6
	adds r3, r3, r4	@ 0000a1b6 1b19
.org 0xa1b8
	str r6, [r3, #0]	@ 0000a1b8 1e60
.org 0xa1ba
	ldr r0, [pc, #48]	@ 0000a1ba 0c48
.org 0xa1bc
	ldr r0, [r0, #0]	@ 0000a1bc 0068
.org 0xa1be
	ldr r2, [pc, #48]	@ 0000a1be 0c4a
.org 0xa1c0
	adds r0, r0, r2	@ 0000a1c0 8018
.org 0xa1c2
	movs r2, #248	@ 0000a1c2 f822
.org 0xa1c4
	lsls r2, r2, #5	@ 0000a1c4 5201
.org 0xa1c6
	ands r1, r2	@ 0000a1c6 1140
.org 0xa1c8
	lsls r1, r1, #3	@ 0000a1c8 c900
.org 0xa1ca
	movs r2, #128	@ 0000a1ca 8022
.org 0xa1cc
	lsls r2, r2, #4	@ 0000a1cc 1201
.org 0xa1ce
	bl 0x1f1c	@ 0000a1ce f7f7a5fe
.org 0xa1d2
	ldr r1, [pc, #32]	@ 0000a1d2 0849
.org 0xa1d4
	ldr r0, [pc, #32]	@ 0000a1d4 0848
.org 0xa1d6
	strh r0, [r1, #0]	@ 0000a1d6 0880
.org 0xa1d8
	ldr r0, [pc, #32]	@ 0000a1d8 0848
.org 0xa1da
	ldr r4, [pc, #36]	@ 0000a1da 094c
.org 0xa1dc
	adds r0, r0, r4	@ 0000a1dc 0019
.org 0xa1de
	ldrb r0, [r0, #0]	@ 0000a1de 0078
.org 0xa1e0
	cmp r0, #0	@ 0000a1e0 0028
.org 0xa1e2
	bne.n 0xa208	@ 0000a1e2 11d1
.org 0xa1e4
	ldr r0, [pc, #28]	@ 0000a1e4 0748
.org 0xa1e6
	b.n 0xa20c	@ 0000a1e6 11e0
.org 0xa1e8
	.byte 0x04,0x0a,0x00,0x02	@ 0000a1e8 data
.org 0xa1ec
	.byte 0xa4,0xc0,0xb2,0x08	@ 0000a1ec data
.org 0xa1f0
	.byte 0xac,0xc0,0xb2,0x08	@ 0000a1f0 data
.org 0xa1f4
	.byte 0x40,0x0a,0x00,0x02	@ 0000a1f4 data
.org 0xa1f8
	.byte 0x44,0x3b,0x00,0x00	@ 0000a1f8 data
.org 0xa1fc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000a1fc data
.org 0xa200
	.byte 0x24,0xd0,0x02,0x00	@ 0000a200 data
.org 0xa204
	.byte 0x10,0x10,0x00,0x00	@ 0000a204 data
.org 0xa208
	movs r0, #128	@ 0000a208 8020
.org 0xa20a
	lsls r0, r0, #5	@ 0000a20a 4001
.org 0xa20c
	strh r0, [r1, #2]	@ 0000a20c 4880
.org 0xa20e
	movs r0, #0	@ 0000a20e 0020
.org 0xa210
	strh r0, [r5, #16]	@ 0000a210 2882
.org 0xa212
	strh r0, [r5, #18]	@ 0000a212 6882
.org 0xa214
	ldrb r0, [r5, #14]	@ 0000a214 a87b
.org 0xa216
	adds r0, #1	@ 0000a216 0130
.org 0xa218
	strb r0, [r5, #14]	@ 0000a218 a873
.org 0xa21a
	ldr r0, [pc, #76]	@ 0000a21a 1348
.org 0xa21c
	ldr r1, [pc, #76]	@ 0000a21c 1349
.org 0xa21e
	adds r0, r0, r1	@ 0000a21e 4018
.org 0xa220
	ldrb r0, [r0, #0]	@ 0000a220 0078
.org 0xa222
	ldrh r2, [r5, #16]	@ 0000a222 2a8a
.org 0xa224
	cmp r0, #0	@ 0000a224 0028
.org 0xa226
	beq.n 0xa24c	@ 0000a226 11d0
.org 0xa228
	movs r1, #31	@ 0000a228 1f21
.org 0xa22a
	adds r0, r1, #0	@ 0000a22a 081c
.org 0xa22c
	ands r0, r2	@ 0000a22c 1040
.org 0xa22e
	cmp r0, #0	@ 0000a22e 0028
.org 0xa230
	bne.n 0xa24c	@ 0000a230 0cd1
.org 0xa232
	ldr r3, [pc, #60]	@ 0000a232 0f4b
.org 0xa234
	ldrh r0, [r3, #2]	@ 0000a234 5888
.org 0xa236
	ands r1, r0	@ 0000a236 0140
.org 0xa238
	cmp r1, #0	@ 0000a238 0029
.org 0xa23a
	beq.n 0xa24c	@ 0000a23a 07d0
.org 0xa23c
	subs r0, r1, #1	@ 0000a23c 481e
.org 0xa23e
	movs r1, #31	@ 0000a23e 1f21
.org 0xa240
	ands r0, r1	@ 0000a240 0840
.org 0xa242
	movs r4, #128	@ 0000a242 8024
.org 0xa244
	lsls r4, r4, #5	@ 0000a244 6401
.org 0xa246
	adds r1, r4, #0	@ 0000a246 211c
