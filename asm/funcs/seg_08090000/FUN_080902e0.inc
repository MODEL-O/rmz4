@ FUN_080902e0  entry 0x080902e0  size 144
.thumb
.org 0x902e0
FUN_080902e0:
	push {r4, r5, r6, lr}	@ 000902e0 70b5
.org 0x902e2
	adds r4, r0, #0	@ 000902e2 041c
.org 0x902e4
	ldr r6, [r4, #40]	@ 000902e4 a66a
.org 0x902e6
	adds r0, #183	@ 000902e6 b730
.org 0x902e8
	ldrb r5, [r0, #0]	@ 000902e8 0578
.org 0x902ea
	ldrb r0, [r4, #15]	@ 000902ea e07b
.org 0x902ec
	cmp r0, #0	@ 000902ec 0028
.org 0x902ee
	bne.n 0x90324	@ 000902ee 19d1
.org 0x902f0
	adds r0, r4, #0	@ 000902f0 201c
.org 0x902f2
	adds r0, #116	@ 000902f2 7430
.org 0x902f4
	ldr r1, [pc, #80]	@ 000902f4 1449
.org 0x902f6
	bl 0x5784	@ 000902f6 75f745fa
.org 0x902fa
	ldr r1, [pc, #80]	@ 000902fa 1449
.org 0x902fc
	adds r0, r5, #0	@ 000902fc 281c
.org 0x902fe
	adds r0, #64	@ 000902fe 4030
.org 0x90300
	lsls r0, r0, #24	@ 00090300 0006
.org 0x90302
	lsrs r0, r0, #23	@ 00090302 c00d
.org 0x90304
	adds r0, r0, r1	@ 00090304 4018
.org 0x90306
	movs r2, #0	@ 00090306 0022
.org 0x90308
	ldrsh r0, [r0, r2]	@ 00090308 805e
.org 0x9030a
	lsls r0, r0, #6	@ 0009030a 8001
.org 0x9030c
	str r0, [r4, #92]	@ 0009030c e065
.org 0x9030e
	lsls r0, r5, #1	@ 0009030e 6800
.org 0x90310
	adds r0, r0, r1	@ 00090310 4018
.org 0x90312
	movs r1, #0	@ 00090312 0021
.org 0x90314
	ldrsh r0, [r0, r1]	@ 00090314 405e
.org 0x90316
	lsls r0, r0, #6	@ 00090316 8001
.org 0x90318
	str r0, [r4, #96]	@ 00090318 2066
.org 0x9031a
	movs r0, #8	@ 0009031a 0820
.org 0x9031c
	strb r0, [r4, #18]	@ 0009031c a074
.org 0x9031e
	ldrb r0, [r4, #15]	@ 0009031e e07b
.org 0x90320
	adds r0, #1	@ 00090320 0130
.org 0x90322
	strb r0, [r4, #15]	@ 00090322 e073
.org 0x90324
	adds r0, r4, #0	@ 00090324 201c
.org 0x90326
	bl 0x1cff0	@ 00090326 8cf763fe
.org 0x9032a
	ldrb r0, [r4, #18]	@ 0009032a a07c
.org 0x9032c
	cmp r0, #0	@ 0009032c 0028
.org 0x9032e
	beq.n 0x90334	@ 0009032e 01d0
.org 0x90330
	subs r0, #1	@ 00090330 0138
.org 0x90332
	strb r0, [r4, #18]	@ 00090332 a074
.org 0x90334
	ldr r3, [r6, #84]	@ 00090334 736d
.org 0x90336
	ldr r2, [r4, #92]	@ 00090336 e26d
.org 0x90338
	ldrb r1, [r6, #10]	@ 00090338 b17a
.org 0x9033a
	movs r0, #16	@ 0009033a 1020
.org 0x9033c
	ands r0, r1	@ 0009033c 0840
.org 0x9033e
	cmp r0, #0	@ 0009033e 0028
.org 0x90340
	beq.n 0x90350	@ 00090340 06d0
.org 0x90342
	movs r1, #128	@ 00090342 8021
.org 0x90344
	lsls r1, r1, #3	@ 00090344 c900
.org 0x90346
	b.n 0x90352	@ 00090346 04e0
.org 0x90348
	.byte 0x8c,0x00,0x86,0x08	@ 00090348 data
.org 0x9034c
	.byte 0x0c,0x93,0x12,0x08	@ 0009034c data
.org 0x90350
	ldr r1, [pc, #36]	@ 00090350 0949
.org 0x90352
	adds r0, r2, r1	@ 00090352 5018
.org 0x90354
	adds r0, r3, r0	@ 00090354 1818
.org 0x90356
	str r0, [r4, #84]	@ 00090356 6065
.org 0x90358
	ldr r0, [r4, #96]	@ 00090358 206e
.org 0x9035a
	ldr r2, [pc, #32]	@ 0009035a 084a
.org 0x9035c
	adds r0, r0, r2	@ 0009035c 8018
.org 0x9035e
	ldr r1, [r6, #88]	@ 0009035e b16d
.org 0x90360
	adds r1, r1, r0	@ 00090360 0918
.org 0x90362
	str r1, [r4, #88]	@ 00090362 a165
.org 0x90364
	ldrb r0, [r4, #18]	@ 00090364 a07c
.org 0x90366
	cmp r0, #0	@ 00090366 0028
.org 0x90368
	bne.n 0x90372	@ 00090368 03d1
.org 0x9036a
	adds r1, r4, #0	@ 0009036a 211c
.org 0x9036c
	adds r1, #181	@ 0009036c b531
.org 0x9036e
	movs r0, #1	@ 0009036e 0120
