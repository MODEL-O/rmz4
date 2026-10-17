@ FUN_08037364  entry 0x08037364  size 156
.thumb
.org 0x37364
FUN_08037364:
	push {r4, r5, r6, r7, lr}	@ 00037364 f0b5
.org 0x37366
	mov r7, r8	@ 00037366 4746
.org 0x37368
	push {r7}	@ 00037368 80b4
.org 0x3736a
	adds r5, r0, #0	@ 0003736a 051c
.org 0x3736c
	adds r6, r5, #0	@ 0003736c 2e1c
.org 0x3736e
	adds r6, #180	@ 0003736e b436
.org 0x37370
	movs r1, #171	@ 00037370 ab21
.org 0x37372
	lsls r1, r1, #1	@ 00037372 4900
.org 0x37374
	adds r0, r5, r1	@ 00037374 6818
.org 0x37376
	movs r2, #0	@ 00037376 0022
.org 0x37378
	mov r8, r2	@ 00037378 9046
.org 0x3737a
	mov r1, r8	@ 0003737a 4146
.org 0x3737c
	strb r1, [r0, #0]	@ 0003737c 0170
.org 0x3737e
	ldr r2, [pc, #52]	@ 0003737e 0d4a
.org 0x37380
	adds r7, r5, r2	@ 00037380 af18
.org 0x37382
	movs r0, #8	@ 00037382 0820
.org 0x37384
	strb r0, [r7, #0]	@ 00037384 3870
.org 0x37386
	movs r4, #164	@ 00037386 a424
.org 0x37388
	lsls r4, r4, #6	@ 00037388 a401
.org 0x3738a
	adds r0, r5, #0	@ 0003738a 281c
.org 0x3738c
	adds r1, r4, #0	@ 0003738c 211c
.org 0x3738e
	bl 0x3a3b0	@ 0003738e 03f00ff8
.org 0x37392
	adds r0, r5, #0	@ 00037392 281c
.org 0x37394
	adds r1, r4, #0	@ 00037394 211c
.org 0x37396
	bl 0x3a3f0	@ 00037396 03f02bf8
.org 0x3739a
	adds r0, r5, #0	@ 0003739a 281c
.org 0x3739c
	adds r0, #250	@ 0003739c fa30
.org 0x3739e
	ldrb r1, [r0, #0]	@ 0003739e 0178
.org 0x373a0
	adds r0, r1, #0	@ 000373a0 081c
.org 0x373a2
	cmp r0, #2	@ 000373a2 0228
.org 0x373a4
	beq.n 0x373d4	@ 000373a4 16d0
.org 0x373a6
	cmp r0, #8	@ 000373a6 0828
.org 0x373a8
	beq.n 0x373ba	@ 000373a8 07d0
.org 0x373aa
	ldrb r0, [r6, #12]	@ 000373aa 307b
.org 0x373ac
	cmp r0, #2	@ 000373ac 0228
.org 0x373ae
	bne.n 0x373b8	@ 000373ae 03d1
.org 0x373b0
	strb r1, [r6, #12]	@ 000373b0 3173
.org 0x373b2
	b.n 0x373ba	@ 000373b2 02e0
.org 0x373b4
	.byte 0x4f,0x01,0x00,0x00	@ 000373b4 data
.org 0x373b8
	strb r1, [r6, #13]	@ 000373b8 7173
.org 0x373ba
	ldr r0, [pc, #20]	@ 000373ba 0548
.org 0x373bc
	adds r2, r5, r0	@ 000373bc 2a18
.org 0x373be
	movs r1, #0	@ 000373be 0021
.org 0x373c0
	movs r0, #2	@ 000373c0 0220
.org 0x373c2
	strb r0, [r2, #0]	@ 000373c2 1070
.org 0x373c4
	movs r2, #129	@ 000373c4 8122
.org 0x373c6
	lsls r2, r2, #1	@ 000373c6 5200
.org 0x373c8
	adds r0, r5, r2	@ 000373c8 a818
.org 0x373ca
	strb r1, [r0, #0]	@ 000373ca 0170
.org 0x373cc
	b.n 0x37400	@ 000373cc 18e0
.org 0x373ce
	.byte 0x00	@ 000373ce data
.org 0x373cf
	.byte 0x00	@ 000373cf data
.org 0x373d0
	.byte 0x01,0x01,0x00,0x00	@ 000373d0 data
.org 0x373d4
	ldr r0, [pc, #52]	@ 000373d4 0d48
.org 0x373d6
	adds r1, r5, r0	@ 000373d6 2918
.org 0x373d8
	ldrb r0, [r1, #0]	@ 000373d8 0878
.org 0x373da
	subs r0, #1	@ 000373da 0138
.org 0x373dc
	strb r0, [r1, #0]	@ 000373dc 0870
.org 0x373de
	movs r1, #255	@ 000373de ff21
.org 0x373e0
	lsls r0, r0, #24	@ 000373e0 0006
.org 0x373e2
	lsrs r0, r0, #24	@ 000373e2 000e
.org 0x373e4
	cmp r0, #255	@ 000373e4 ff28
.org 0x373e6
	bne.n 0x37400	@ 000373e6 0bd1
.org 0x373e8
	ldrb r0, [r7, #0]	@ 000373e8 3878
.org 0x373ea
	orrs r0, r1	@ 000373ea 0843
.org 0x373ec
	strb r0, [r7, #0]	@ 000373ec 3870
.org 0x373ee
	ldr r2, [pc, #32]	@ 000373ee 084a
.org 0x373f0
	adds r1, r5, r2	@ 000373f0 a918
.org 0x373f2
	movs r0, #4	@ 000373f2 0420
.org 0x373f4
	strb r0, [r1, #0]	@ 000373f4 0870
.org 0x373f6
	movs r1, #129	@ 000373f6 8121
.org 0x373f8
	lsls r1, r1, #1	@ 000373f8 4900
.org 0x373fa
	adds r0, r5, r1	@ 000373fa 6818
.org 0x373fc
	mov r2, r8	@ 000373fc 4246
.org 0x373fe
	strb r2, [r0, #0]	@ 000373fe 0270
