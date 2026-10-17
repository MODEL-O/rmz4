@ FUN_0804f388  entry 0x0804f388  size 134
.thumb
.org 0x4f388
FUN_0804f388:
	push {r4, r5, lr}	@ 0004f388 30b5
.org 0x4f38a
	adds r4, r0, #0	@ 0004f38a 041c
.org 0x4f38c
	lsls r1, r1, #24	@ 0004f38c 0906
.org 0x4f38e
	lsrs r5, r1, #24	@ 0004f38e 0d0e
.org 0x4f390
	ldr r0, [pc, #64]	@ 0004f390 1048
.org 0x4f392
	ldr r0, [r0, #0]	@ 0004f392 0068
.org 0x4f394
	bl 0x5500	@ 0004f394 b6f7b4f8
.org 0x4f398
	adds r2, r0, #0	@ 0004f398 021c
.org 0x4f39a
	cmp r2, #0	@ 0004f39a 002a
.org 0x4f39c
	beq.n 0x4f418	@ 0004f39c 3cd0
.org 0x4f39e
	adds r0, r4, #0	@ 0004f39e 201c
.org 0x4f3a0
	adds r0, #248	@ 0004f3a0 f830
.org 0x4f3a2
	ldrb r0, [r0, #0]	@ 0004f3a2 0078
.org 0x4f3a4
	cmp r0, #2	@ 0004f3a4 0228
.org 0x4f3a6
	bne.n 0x4f3e4	@ 0004f3a6 1dd1
.org 0x4f3a8
	ldr r0, [pc, #44]	@ 0004f3a8 0b48
.org 0x4f3aa
	movs r1, #56	@ 0004f3aa 3821
.org 0x4f3ac
	strb r1, [r2, #9]	@ 0004f3ac 5172
.org 0x4f3ae
	adds r0, #224	@ 0004f3ae e030
.org 0x4f3b0
	ldr r0, [r0, #0]	@ 0004f3b0 0068
.org 0x4f3b2
	ldr r0, [r0, #0]	@ 0004f3b2 0068
.org 0x4f3b4
	str r0, [r2, #20]	@ 0004f3b4 5061
.org 0x4f3b6
	ldrb r1, [r2, #11]	@ 0004f3b6 d17a
.org 0x4f3b8
	movs r0, #191	@ 0004f3b8 bf20
.org 0x4f3ba
	ands r0, r1	@ 0004f3ba 0840
.org 0x4f3bc
	strb r0, [r2, #11]	@ 0004f3bc d072
.org 0x4f3be
	adds r1, r2, #0	@ 0004f3be 111c
.org 0x4f3c0
	adds r1, #37	@ 0004f3c0 2531
.org 0x4f3c2
	movs r0, #16	@ 0004f3c2 1020
.org 0x4f3c4
	strb r0, [r1, #0]	@ 0004f3c4 0870
.org 0x4f3c6
	ldr r0, [pc, #20]	@ 0004f3c6 0548
.org 0x4f3c8
	ldrh r0, [r0, #0]	@ 0004f3c8 0088
.org 0x4f3ca
	strh r0, [r2, #32]	@ 0004f3ca 1084
.org 0x4f3cc
	ldr r0, [pc, #16]	@ 0004f3cc 0448
.org 0x4f3ce
	ldrb r0, [r0, #0]	@ 0004f3ce 0078
.org 0x4f3d0
	b.n 0x4f40c	@ 0004f3d0 1ce0
.org 0x4f3d2
	.byte 0x00	@ 0004f3d2 data
.org 0x4f3d3
	.byte 0x00	@ 0004f3d3 data
.org 0x4f3d4
	.byte 0x88,0xed,0x02,0x02	@ 0004f3d4 data
.org 0x4f3d8
	.byte 0xf8,0x39,0x85,0x08	@ 0004f3d8 data
.org 0x4f3dc
	.byte 0xfc,0x36,0x85,0x08	@ 0004f3dc data
.org 0x4f3e0
	.byte 0x04,0x37,0x85,0x08	@ 0004f3e0 data
.org 0x4f3e4
	ldr r0, [pc, #56]	@ 0004f3e4 0e48
.org 0x4f3e6
	movs r1, #56	@ 0004f3e6 3821
.org 0x4f3e8
	strb r1, [r2, #9]	@ 0004f3e8 5172
.org 0x4f3ea
	adds r0, #224	@ 0004f3ea e030
.org 0x4f3ec
	ldr r0, [r0, #0]	@ 0004f3ec 0068
.org 0x4f3ee
	ldr r0, [r0, #0]	@ 0004f3ee 0068
.org 0x4f3f0
	str r0, [r2, #20]	@ 0004f3f0 5061
.org 0x4f3f2
	ldrb r1, [r2, #11]	@ 0004f3f2 d17a
.org 0x4f3f4
	movs r0, #191	@ 0004f3f4 bf20
.org 0x4f3f6
	ands r0, r1	@ 0004f3f6 0840
.org 0x4f3f8
	strb r0, [r2, #11]	@ 0004f3f8 d072
.org 0x4f3fa
	adds r1, r2, #0	@ 0004f3fa 111c
.org 0x4f3fc
	adds r1, #37	@ 0004f3fc 2531
.org 0x4f3fe
	movs r0, #16	@ 0004f3fe 1020
.org 0x4f400
	strb r0, [r1, #0]	@ 0004f400 0870
.org 0x4f402
	ldr r0, [pc, #32]	@ 0004f402 0848
.org 0x4f404
	ldrh r0, [r0, #2]	@ 0004f404 4088
.org 0x4f406
	strh r0, [r2, #32]	@ 0004f406 1084
.org 0x4f408
	ldr r0, [pc, #28]	@ 0004f408 0748
.org 0x4f40a
	ldrb r0, [r0, #1]	@ 0004f40a 4078
.org 0x4f40c
	subs r1, #3	@ 0004f40c 0339
