@ FUN_08046274  entry 0x08046274  size 132
.thumb
.org 0x46274
FUN_08046274:
	push {r4, r5, r6, lr}	@ 00046274 70b5
.org 0x46276
	adds r4, r0, #0	@ 00046276 041c
.org 0x46278
	adds r5, r1, #0	@ 00046278 0d1c
.org 0x4627a
	lsls r2, r2, #24	@ 0004627a 1206
.org 0x4627c
	lsrs r6, r2, #24	@ 0004627c 160e
.org 0x4627e
	ldr r0, [pc, #64]	@ 0004627e 1048
.org 0x46280
	ldr r0, [r0, #0]	@ 00046280 0068
.org 0x46282
	bl 0x5500	@ 00046282 bff73df9
.org 0x46286
	adds r2, r0, #0	@ 00046286 021c
.org 0x46288
	cmp r2, #0	@ 00046288 002a
.org 0x4628a
	beq.n 0x46304	@ 0004628a 3bd0
.org 0x4628c
	adds r0, r4, #0	@ 0004628c 201c
.org 0x4628e
	adds r0, #248	@ 0004628e f830
.org 0x46290
	ldrb r0, [r0, #0]	@ 00046290 0078
.org 0x46292
	cmp r0, #2	@ 00046292 0228
.org 0x46294
	bne.n 0x462d0	@ 00046294 1cd1
.org 0x46296
	ldr r1, [pc, #44]	@ 00046296 0b49
.org 0x46298
	movs r0, #24	@ 00046298 1820
.org 0x4629a
	strb r0, [r2, #9]	@ 0004629a 5072
.org 0x4629c
	ldr r0, [r1, #96]	@ 0004629c 086e
.org 0x4629e
	ldr r0, [r0, #0]	@ 0004629e 0068
.org 0x462a0
	str r0, [r2, #20]	@ 000462a0 5061
.org 0x462a2
	ldrb r1, [r2, #11]	@ 000462a2 d17a
.org 0x462a4
	movs r0, #191	@ 000462a4 bf20
.org 0x462a6
	ands r0, r1	@ 000462a6 0840
.org 0x462a8
	strb r0, [r2, #11]	@ 000462a8 d072
.org 0x462aa
	adds r1, r2, #0	@ 000462aa 111c
.org 0x462ac
	adds r1, #37	@ 000462ac 2531
.org 0x462ae
	movs r0, #16	@ 000462ae 1020
.org 0x462b0
	strb r0, [r1, #0]	@ 000462b0 0870
.org 0x462b2
	ldr r0, [pc, #20]	@ 000462b2 0548
.org 0x462b4
	ldrh r0, [r0, #0]	@ 000462b4 0088
.org 0x462b6
	strh r0, [r2, #32]	@ 000462b6 1084
.org 0x462b8
	ldr r0, [pc, #16]	@ 000462b8 0448
.org 0x462ba
	ldrb r0, [r0, #0]	@ 000462ba 0078
.org 0x462bc
	b.n 0x462f6	@ 000462bc 1be0
.org 0x462be
	.byte 0x00	@ 000462be data
.org 0x462bf
	.byte 0x00	@ 000462bf data
.org 0x462c0
	.byte 0x88,0xed,0x02,0x02	@ 000462c0 data
.org 0x462c4
	.byte 0xf8,0x39,0x85,0x08	@ 000462c4 data
.org 0x462c8
	.byte 0xfc,0x36,0x85,0x08	@ 000462c8 data
.org 0x462cc
	.byte 0x04,0x37,0x85,0x08	@ 000462cc data
.org 0x462d0
	ldr r1, [pc, #56]	@ 000462d0 0e49
.org 0x462d2
	movs r0, #24	@ 000462d2 1820
.org 0x462d4
	strb r0, [r2, #9]	@ 000462d4 5072
.org 0x462d6
	ldr r0, [r1, #96]	@ 000462d6 086e
.org 0x462d8
	ldr r0, [r0, #0]	@ 000462d8 0068
.org 0x462da
	str r0, [r2, #20]	@ 000462da 5061
.org 0x462dc
	ldrb r1, [r2, #11]	@ 000462dc d17a
.org 0x462de
	movs r0, #191	@ 000462de bf20
.org 0x462e0
	ands r0, r1	@ 000462e0 0840
.org 0x462e2
	strb r0, [r2, #11]	@ 000462e2 d072
.org 0x462e4
	adds r1, r2, #0	@ 000462e4 111c
.org 0x462e6
	adds r1, #37	@ 000462e6 2531
.org 0x462e8
	movs r0, #16	@ 000462e8 1020
.org 0x462ea
	strb r0, [r1, #0]	@ 000462ea 0870
.org 0x462ec
	ldr r0, [pc, #32]	@ 000462ec 0848
.org 0x462ee
	ldrh r0, [r0, #2]	@ 000462ee 4088
.org 0x462f0
	strh r0, [r2, #32]	@ 000462f0 1084
.org 0x462f2
	ldr r0, [pc, #32]	@ 000462f2 0848
.org 0x462f4
	ldrb r0, [r0, #1]	@ 000462f4 4078
.org 0x462f6
	subs r1, #3	@ 000462f6 0339
