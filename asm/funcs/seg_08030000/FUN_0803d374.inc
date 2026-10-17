@ FUN_0803d374  entry 0x0803d374  size 138
.thumb
.org 0x3d374
FUN_0803d374:
	push {r4, r5, lr}	@ 0003d374 30b5
.org 0x3d376
	adds r4, r0, #0	@ 0003d376 041c
.org 0x3d378
	lsls r1, r1, #24	@ 0003d378 0906
.org 0x3d37a
	lsrs r5, r1, #24	@ 0003d37a 0d0e
.org 0x3d37c
	ldr r0, [pc, #64]	@ 0003d37c 1048
.org 0x3d37e
	bl 0x3a964	@ 0003d37e fdf7f1fa
.org 0x3d382
	ldr r0, [pc, #64]	@ 0003d382 1048
.org 0x3d384
	ldr r0, [r0, #0]	@ 0003d384 0068
.org 0x3d386
	bl 0x5500	@ 0003d386 c8f7bbf8
.org 0x3d38a
	adds r2, r0, #0	@ 0003d38a 021c
.org 0x3d38c
	cmp r2, #0	@ 0003d38c 002a
.org 0x3d38e
	beq.n 0x3d40a	@ 0003d38e 3cd0
.org 0x3d390
	adds r0, r4, #0	@ 0003d390 201c
.org 0x3d392
	adds r0, #248	@ 0003d392 f830
.org 0x3d394
	ldrb r1, [r0, #0]	@ 0003d394 0178
.org 0x3d396
	cmp r1, #2	@ 0003d396 0229
.org 0x3d398
	bne.n 0x3d3d4	@ 0003d398 1cd1
.org 0x3d39a
	ldr r0, [pc, #44]	@ 0003d39a 0b48
.org 0x3d39c
	strb r1, [r2, #9]	@ 0003d39c 5172
.org 0x3d39e
	ldr r0, [r0, #8]	@ 0003d39e 8068
.org 0x3d3a0
	ldr r0, [r0, #0]	@ 0003d3a0 0068
.org 0x3d3a2
	str r0, [r2, #20]	@ 0003d3a2 5061
.org 0x3d3a4
	ldrb r1, [r2, #11]	@ 0003d3a4 d17a
.org 0x3d3a6
	movs r0, #191	@ 0003d3a6 bf20
.org 0x3d3a8
	ands r0, r1	@ 0003d3a8 0840
.org 0x3d3aa
	strb r0, [r2, #11]	@ 0003d3aa d072
.org 0x3d3ac
	adds r1, r2, #0	@ 0003d3ac 111c
.org 0x3d3ae
	adds r1, #37	@ 0003d3ae 2531
.org 0x3d3b0
	movs r0, #16	@ 0003d3b0 1020
.org 0x3d3b2
	strb r0, [r1, #0]	@ 0003d3b2 0870
.org 0x3d3b4
	ldr r0, [pc, #20]	@ 0003d3b4 0548
.org 0x3d3b6
	ldrh r0, [r0, #0]	@ 0003d3b6 0088
.org 0x3d3b8
	strh r0, [r2, #32]	@ 0003d3b8 1084
.org 0x3d3ba
	ldr r0, [pc, #20]	@ 0003d3ba 0548
.org 0x3d3bc
	ldrb r0, [r0, #0]	@ 0003d3bc 0078
.org 0x3d3be
	b.n 0x3d3fa	@ 0003d3be 1ce0
.org 0x3d3c0
	.byte 0x1d,0xc4,0x03,0x08	@ 0003d3c0 data
.org 0x3d3c4
	.byte 0x88,0xed,0x02,0x02	@ 0003d3c4 data
.org 0x3d3c8
	.byte 0xf8,0x39,0x85,0x08	@ 0003d3c8 data
.org 0x3d3cc
	.byte 0xfc,0x36,0x85,0x08	@ 0003d3cc data
.org 0x3d3d0
	.byte 0x04,0x37,0x85,0x08	@ 0003d3d0 data
.org 0x3d3d4
	ldr r1, [pc, #60]	@ 0003d3d4 0f49
.org 0x3d3d6
	movs r0, #2	@ 0003d3d6 0220
.org 0x3d3d8
	strb r0, [r2, #9]	@ 0003d3d8 5072
.org 0x3d3da
	ldr r0, [r1, #8]	@ 0003d3da 8868
.org 0x3d3dc
	ldr r0, [r0, #0]	@ 0003d3dc 0068
.org 0x3d3de
	str r0, [r2, #20]	@ 0003d3de 5061
.org 0x3d3e0
	ldrb r1, [r2, #11]	@ 0003d3e0 d17a
.org 0x3d3e2
	movs r0, #191	@ 0003d3e2 bf20
.org 0x3d3e4
	ands r0, r1	@ 0003d3e4 0840
.org 0x3d3e6
	strb r0, [r2, #11]	@ 0003d3e6 d072
.org 0x3d3e8
	adds r1, r2, #0	@ 0003d3e8 111c
.org 0x3d3ea
	adds r1, #37	@ 0003d3ea 2531
.org 0x3d3ec
	movs r0, #16	@ 0003d3ec 1020
.org 0x3d3ee
	strb r0, [r1, #0]	@ 0003d3ee 0870
.org 0x3d3f0
	ldr r0, [pc, #36]	@ 0003d3f0 0948
.org 0x3d3f2
	ldrh r0, [r0, #2]	@ 0003d3f2 4088
.org 0x3d3f4
	strh r0, [r2, #32]	@ 0003d3f4 1084
.org 0x3d3f6
	ldr r0, [pc, #36]	@ 0003d3f6 0948
.org 0x3d3f8
	ldrb r0, [r0, #1]	@ 0003d3f8 4078
.org 0x3d3fa
	subs r1, #3	@ 0003d3fa 0339
.org 0x3d3fc
	strb r0, [r1, #0]	@ 0003d3fc 0870
