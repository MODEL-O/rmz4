@ FUN_0803a578  entry 0x0803a578  size 128
.thumb
.org 0x3a578
FUN_0803a578:
	push {r4, r5, r6, r7, lr}	@ 0003a578 f0b5
.org 0x3a57a
	adds r5, r0, #0	@ 0003a57a 051c
.org 0x3a57c
	lsls r1, r1, #24	@ 0003a57c 0906
.org 0x3a57e
	lsrs r4, r1, #24	@ 0003a57e 0c0e
.org 0x3a580
	lsls r2, r2, #24	@ 0003a580 1206
.org 0x3a582
	lsrs r6, r2, #24	@ 0003a582 160e
.org 0x3a584
	adds r7, r5, #0	@ 0003a584 2f1c
.org 0x3a586
	adds r7, #180	@ 0003a586 b437
.org 0x3a588
	adds r1, r5, #0	@ 0003a588 291c
.org 0x3a58a
	adds r1, #250	@ 0003a58a fa31
.org 0x3a58c
	ldrb r0, [r1, #0]	@ 0003a58c 0878
.org 0x3a58e
	cmp r0, #2	@ 0003a58e 0228
.org 0x3a590
	bne.n 0x3a600	@ 0003a590 36d1
.org 0x3a592
	ldr r2, [pc, #92]	@ 0003a592 174a
.org 0x3a594
	adds r0, r5, r2	@ 0003a594 a818
.org 0x3a596
	ldrb r0, [r0, #0]	@ 0003a596 0078
.org 0x3a598
	cmp r0, #255	@ 0003a598 ff28
.org 0x3a59a
	beq.n 0x3a600	@ 0003a59a 31d0
.org 0x3a59c
	strb r4, [r1, #0]	@ 0003a59c 0c70
.org 0x3a59e
	strb r6, [r7, #15]	@ 0003a59e fe73
.org 0x3a5a0
	adds r0, r5, #0	@ 0003a5a0 281c
.org 0x3a5a2
	adds r1, r4, #0	@ 0003a5a2 211c
.org 0x3a5a4
	adds r2, r6, #0	@ 0003a5a4 321c
.org 0x3a5a6
	bl 0x3a608	@ 0003a5a6 00f02ff8
.org 0x3a5aa
	adds r1, r5, #0	@ 0003a5aa 291c
.org 0x3a5ac
	adds r1, #230	@ 0003a5ac e631
.org 0x3a5ae
	strb r0, [r1, #0]	@ 0003a5ae 0870
.org 0x3a5b0
	ldrb r0, [r7, #19]	@ 0003a5b0 f87c
.org 0x3a5b2
	cmp r0, #3	@ 0003a5b2 0328
.org 0x3a5b4
	bhi.n 0x3a5ec	@ 0003a5b4 1ad8
.org 0x3a5b6
	ldr r0, [pc, #60]	@ 0003a5b6 0f48
.org 0x3a5b8
	ldr r1, [pc, #60]	@ 0003a5b8 0f49
.org 0x3a5ba
	lsls r4, r4, #2	@ 0003a5ba a400
.org 0x3a5bc
	adds r4, r4, r1	@ 0003a5bc 6418
.org 0x3a5be
	ldr r1, [r4, #0]	@ 0003a5be 2168
.org 0x3a5c0
	adds r1, r1, r6	@ 0003a5c0 8919
.org 0x3a5c2
	lsrs r3, r1, #3	@ 0003a5c2 cb08
.org 0x3a5c4
	adds r0, #4	@ 0003a5c4 0430
.org 0x3a5c6
	adds r3, r3, r0	@ 0003a5c6 1b18
.org 0x3a5c8
	movs r5, #7	@ 0003a5c8 0725
.org 0x3a5ca
	ands r1, r5	@ 0003a5ca 2940
.org 0x3a5cc
	movs r2, #1	@ 0003a5cc 0122
.org 0x3a5ce
	adds r0, r2, #0	@ 0003a5ce 101c
.org 0x3a5d0
	lsls r0, r1	@ 0003a5d0 8840
.org 0x3a5d2
	ldrb r1, [r3, #0]	@ 0003a5d2 1978
.org 0x3a5d4
	orrs r0, r1	@ 0003a5d4 0843
.org 0x3a5d6
	strb r0, [r3, #0]	@ 0003a5d6 1870
.org 0x3a5d8
	ldr r3, [pc, #32]	@ 0003a5d8 084b
.org 0x3a5da
	ldr r0, [r4, #0]	@ 0003a5da 2068
.org 0x3a5dc
	adds r0, r0, r6	@ 0003a5dc 8019
.org 0x3a5de
	lsrs r1, r0, #3	@ 0003a5de c108
.org 0x3a5e0
	adds r1, r1, r3	@ 0003a5e0 c918
.org 0x3a5e2
	ands r0, r5	@ 0003a5e2 2840
.org 0x3a5e4
	lsls r2, r0	@ 0003a5e4 8240
.org 0x3a5e6
	ldrb r0, [r1, #0]	@ 0003a5e6 0878
.org 0x3a5e8
	orrs r2, r0	@ 0003a5e8 0243
.org 0x3a5ea
	strb r2, [r1, #0]	@ 0003a5ea 0a70
.org 0x3a5ec
	movs r0, #1	@ 0003a5ec 0120
.org 0x3a5ee
	b.n 0x3a602	@ 0003a5ee 08e0
.org 0x3a5f0
	.byte 0x4f,0x01,0x00,0x00	@ 0003a5f0 data
.org 0x3a5f4
	.byte 0xb0,0xe8,0x02,0x02	@ 0003a5f4 data
