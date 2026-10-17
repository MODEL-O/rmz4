@ FUN_0810d2b0  entry 0x0810d2b0  size 116
.thumb
.org 0x10d2b0
FUN_0810d2b0:
	push {r4, lr}	@ 0010d2b0 10b5
.org 0x10d2b2
	adds r4, r0, #0	@ 0010d2b2 041c
.org 0x10d2b4
	ldrb r0, [r4, #17]	@ 0010d2b4 607c
.org 0x10d2b6
	cmp r0, #0	@ 0010d2b6 0028
.org 0x10d2b8
	beq.n 0x10d2dc	@ 0010d2b8 10d0
.org 0x10d2ba
	adds r0, r4, #0	@ 0010d2ba 201c
.org 0x10d2bc
	adds r0, #120	@ 0010d2bc 7830
.org 0x10d2be
	ldrh r0, [r0, #0]	@ 0010d2be 0088
.org 0x10d2c0
	ldr r2, [pc, #16]	@ 0010d2c0 044a
.org 0x10d2c2
	lsrs r0, r0, #8	@ 0010d2c2 000a
.org 0x10d2c4
	lsls r0, r0, #1	@ 0010d2c4 4000
.org 0x10d2c6
	adds r2, r0, r2	@ 0010d2c6 8218
.org 0x10d2c8
	adds r1, r4, #0	@ 0010d2c8 211c
.org 0x10d2ca
	adds r1, #122	@ 0010d2ca 7a31
.org 0x10d2cc
	ldrh r1, [r1, #0]	@ 0010d2cc 0988
.org 0x10d2ce
	strh r1, [r2, #0]	@ 0010d2ce 1180
.org 0x10d2d0
	ldr r1, [pc, #4]	@ 0010d2d0 0149
.org 0x10d2d2
	b.n 0x10d2f4	@ 0010d2d2 0fe0
.org 0x10d2d4
	.byte 0x40,0xe2,0x02,0x02	@ 0010d2d4 data
.org 0x10d2d8
	.byte 0x40,0xdc,0x02,0x02	@ 0010d2d8 data
.org 0x10d2dc
	adds r0, r4, #0	@ 0010d2dc 201c
.org 0x10d2de
	adds r0, #120	@ 0010d2de 7830
.org 0x10d2e0
	ldrh r0, [r0, #0]	@ 0010d2e0 0088
.org 0x10d2e2
	ldr r2, [pc, #72]	@ 0010d2e2 124a
.org 0x10d2e4
	lsrs r0, r0, #8	@ 0010d2e4 000a
.org 0x10d2e6
	lsls r0, r0, #1	@ 0010d2e6 4000
.org 0x10d2e8
	adds r2, r0, r2	@ 0010d2e8 8218
.org 0x10d2ea
	adds r1, r4, #0	@ 0010d2ea 211c
.org 0x10d2ec
	adds r1, #122	@ 0010d2ec 7a31
.org 0x10d2ee
	ldrh r1, [r1, #0]	@ 0010d2ee 0988
.org 0x10d2f0
	strh r1, [r2, #0]	@ 0010d2f0 1180
.org 0x10d2f2
	ldr r1, [pc, #60]	@ 0010d2f2 0f49
.org 0x10d2f4
	adds r0, r0, r1	@ 0010d2f4 4018
.org 0x10d2f6
	adds r1, r4, #0	@ 0010d2f6 211c
.org 0x10d2f8
	adds r1, #126	@ 0010d2f8 7e31
.org 0x10d2fa
	ldrb r1, [r1, #0]	@ 0010d2fa 0978
.org 0x10d2fc
	strh r1, [r0, #0]	@ 0010d2fc 0180
.org 0x10d2fe
	adds r1, r4, #0	@ 0010d2fe 211c
.org 0x10d300
	adds r1, #128	@ 0010d300 8031
.org 0x10d302
	ldrb r0, [r1, #0]	@ 0010d302 0878
.org 0x10d304
	cmp r0, #0	@ 0010d304 0028
.org 0x10d306
	beq.n 0x10d30c	@ 0010d306 01d0
.org 0x10d308
	bl 0x2624	@ 0010d308 f5f68cf9
.org 0x10d30c
	ldrb r1, [r4, #10]	@ 0010d30c a17a
.org 0x10d30e
	movs r0, #254	@ 0010d30e fe20
.org 0x10d310
	ands r0, r1	@ 0010d310 0840
.org 0x10d312
	strb r0, [r4, #10]	@ 0010d312 a072
.org 0x10d314
	ldr r1, [pc, #28]	@ 0010d314 0749
.org 0x10d316
	ldrb r0, [r4, #9]	@ 0010d316 607a
.org 0x10d318
	lsls r0, r0, #2	@ 0010d318 8000
.org 0x10d31a
	adds r0, r0, r1	@ 0010d31a 4018
.org 0x10d31c
	movs r1, #4	@ 0010d31c 0421
.org 0x10d31e
	str r1, [r4, #12]	@ 0010d31e e160
.org 0x10d320
	ldr r0, [r0, #0]	@ 0010d320 0068
.org 0x10d322
	ldr r0, [r0, #16]	@ 0010d322 0069
