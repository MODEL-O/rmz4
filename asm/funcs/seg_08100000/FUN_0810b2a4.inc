@ FUN_0810b2a4  entry 0x0810b2a4  size 124
.thumb
.org 0x10b2a4
FUN_0810b2a4:
	push {r4, lr}	@ 0010b2a4 10b5
.org 0x10b2a6
	adds r4, r0, #0	@ 0010b2a6 041c
.org 0x10b2a8
	bl 0x1cc9c	@ 0010b2a8 11f7f8fc
.org 0x10b2ac
	ldrb r1, [r4, #10]	@ 0010b2ac a17a
.org 0x10b2ae
	movs r0, #1	@ 0010b2ae 0120
.org 0x10b2b0
	orrs r0, r1	@ 0010b2b0 0843
.org 0x10b2b2
	movs r1, #2	@ 0010b2b2 0221
.org 0x10b2b4
	orrs r0, r1	@ 0010b2b4 0843
.org 0x10b2b6
	strb r0, [r4, #10]	@ 0010b2b6 a072
.org 0x10b2b8
	ldrb r0, [r4, #17]	@ 0010b2b8 607c
.org 0x10b2ba
	cmp r0, #0	@ 0010b2ba 0028
.org 0x10b2bc
	bne.n 0x10b2d0	@ 0010b2bc 08d1
.org 0x10b2be
	ldr r1, [pc, #12]	@ 0010b2be 0349
.org 0x10b2c0
	adds r0, r4, #0	@ 0010b2c0 201c
.org 0x10b2c2
	bl 0x1cf00	@ 0010b2c2 11f71dfe
.org 0x10b2c6
	movs r0, #128	@ 0010b2c6 8020
.org 0x10b2c8
	lsls r0, r0, #4	@ 0010b2c8 0001
.org 0x10b2ca
	b.n 0x10b2dc	@ 0010b2ca 07e0
.org 0x10b2cc
	.byte 0x05,0x43,0x00,0x00	@ 0010b2cc data
.org 0x10b2d0
	ldr r1, [pc, #80]	@ 0010b2d0 1449
.org 0x10b2d2
	adds r0, r4, #0	@ 0010b2d2 201c
.org 0x10b2d4
	bl 0x1cf00	@ 0010b2d4 11f714fe
.org 0x10b2d8
	movs r0, #240	@ 0010b2d8 f020
.org 0x10b2da
	lsls r0, r0, #7	@ 0010b2da c001
.org 0x10b2dc
	str r0, [r4, #88]	@ 0010b2dc a065
.org 0x10b2de
	adds r0, r4, #0	@ 0010b2de 201c
.org 0x10b2e0
	bl 0x1cff0	@ 0010b2e0 11f786fe
.org 0x10b2e4
	adds r1, r4, #0	@ 0010b2e4 211c
.org 0x10b2e6
	adds r1, #76	@ 0010b2e6 4c31
.org 0x10b2e8
	movs r0, #0	@ 0010b2e8 0020
.org 0x10b2ea
	strb r0, [r1, #0]	@ 0010b2ea 0870
.org 0x10b2ec
	adds r2, r4, #0	@ 0010b2ec 221c
.org 0x10b2ee
	adds r2, #74	@ 0010b2ee 4a32
.org 0x10b2f0
	ldrb r1, [r2, #0]	@ 0010b2f0 1178
.org 0x10b2f2
	subs r0, #17	@ 0010b2f2 1138
.org 0x10b2f4
	ands r0, r1	@ 0010b2f4 0840
.org 0x10b2f6
	strb r0, [r2, #0]	@ 0010b2f6 1070
.org 0x10b2f8
	ldrb r1, [r4, #10]	@ 0010b2f8 a17a
.org 0x10b2fa
	movs r0, #239	@ 0010b2fa ef20
.org 0x10b2fc
	ands r0, r1	@ 0010b2fc 0840
.org 0x10b2fe
	strb r0, [r4, #10]	@ 0010b2fe a072
.org 0x10b300
	movs r0, #166	@ 0010b300 a620
.org 0x10b302
	lsls r0, r0, #9	@ 0010b302 4002
.org 0x10b304
	str r0, [r4, #84]	@ 0010b304 6065
.org 0x10b306
	ldr r1, [pc, #32]	@ 0010b306 0849
.org 0x10b308
	ldrb r0, [r4, #9]	@ 0010b308 607a
.org 0x10b30a
	lsls r0, r0, #2	@ 0010b30a 8000
.org 0x10b30c
	adds r0, r0, r1	@ 0010b30c 4018
.org 0x10b30e
	movs r1, #1	@ 0010b30e 0121
.org 0x10b310
	str r1, [r4, #12]	@ 0010b310 e160
.org 0x10b312
	ldr r0, [r0, #0]	@ 0010b312 0068
.org 0x10b314
	ldr r0, [r0, #4]	@ 0010b314 4068
.org 0x10b316
	str r0, [r4, #20]	@ 0010b316 6061
.org 0x10b318
	adds r0, r4, #0	@ 0010b318 201c
.org 0x10b31a
	bl 0x10b148	@ 0010b31a fff715ff
.org 0x10b31e
	pop {r4}	@ 0010b31e 10bc
