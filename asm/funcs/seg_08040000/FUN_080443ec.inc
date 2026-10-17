@ FUN_080443ec  entry 0x080443ec  size 222
.thumb
.org 0x443ec
FUN_080443ec:
	push {r4, r5, r6, lr}	@ 000443ec 70b5
.org 0x443ee
	adds r5, r0, #0	@ 000443ee 051c
.org 0x443f0
	adds r4, r1, #0	@ 000443f0 0c1c
.org 0x443f2
	lsls r2, r2, #24	@ 000443f2 1206
.org 0x443f4
	lsrs r6, r2, #24	@ 000443f4 160e
.org 0x443f6
	ldr r0, [pc, #64]	@ 000443f6 1048
.org 0x443f8
	ldr r0, [r0, #0]	@ 000443f8 0068
.org 0x443fa
	bl 0x5500	@ 000443fa c1f781f8
.org 0x443fe
	adds r3, r0, #0	@ 000443fe 031c
.org 0x44400
	cmp r3, #0	@ 00044400 002b
.org 0x44402
	beq.n 0x444e4	@ 00044402 6fd0
.org 0x44404
	adds r0, r5, #0	@ 00044404 281c
.org 0x44406
	adds r0, #248	@ 00044406 f830
.org 0x44408
	ldrb r0, [r0, #0]	@ 00044408 0078
.org 0x4440a
	cmp r0, #2	@ 0004440a 0228
.org 0x4440c
	bne.n 0x44448	@ 0004440c 1cd1
.org 0x4440e
	ldr r1, [pc, #44]	@ 0004440e 0b49
.org 0x44410
	movs r0, #20	@ 00044410 1420
.org 0x44412
	strb r0, [r3, #9]	@ 00044412 5872
.org 0x44414
	ldr r0, [r1, #80]	@ 00044414 086d
.org 0x44416
	ldr r0, [r0, #0]	@ 00044416 0068
.org 0x44418
	str r0, [r3, #20]	@ 00044418 5861
.org 0x4441a
	ldrb r1, [r3, #11]	@ 0004441a d97a
.org 0x4441c
	movs r0, #191	@ 0004441c bf20
.org 0x4441e
	ands r0, r1	@ 0004441e 0840
.org 0x44420
	strb r0, [r3, #11]	@ 00044420 d872
.org 0x44422
	adds r1, r3, #0	@ 00044422 191c
.org 0x44424
	adds r1, #37	@ 00044424 2531
.org 0x44426
	movs r0, #16	@ 00044426 1020
.org 0x44428
	strb r0, [r1, #0]	@ 00044428 0870
.org 0x4442a
	ldr r0, [pc, #20]	@ 0004442a 0548
.org 0x4442c
	ldrh r0, [r0, #0]	@ 0004442c 0088
.org 0x4442e
	strh r0, [r3, #32]	@ 0004442e 1884
.org 0x44430
	ldr r0, [pc, #16]	@ 00044430 0448
.org 0x44432
	ldrb r0, [r0, #0]	@ 00044432 0078
.org 0x44434
	b.n 0x4446e	@ 00044434 1be0
.org 0x44436
	.byte 0x00	@ 00044436 data
.org 0x44437
	.byte 0x00	@ 00044437 data
.org 0x44438
	.byte 0x88,0xed,0x02,0x02	@ 00044438 data
.org 0x4443c
	.byte 0xf8,0x39,0x85,0x08	@ 0004443c data
.org 0x44440
	.byte 0xfc,0x36,0x85,0x08	@ 00044440 data
.org 0x44444
	.byte 0x04,0x37,0x85,0x08	@ 00044444 data
.org 0x44448
	ldr r1, [pc, #68]	@ 00044448 1149
.org 0x4444a
	movs r0, #20	@ 0004444a 1420
.org 0x4444c
	strb r0, [r3, #9]	@ 0004444c 5872
.org 0x4444e
	ldr r0, [r1, #80]	@ 0004444e 086d
.org 0x44450
	ldr r0, [r0, #0]	@ 00044450 0068
.org 0x44452
	str r0, [r3, #20]	@ 00044452 5861
.org 0x44454
	ldrb r1, [r3, #11]	@ 00044454 d97a
.org 0x44456
	movs r0, #191	@ 00044456 bf20
.org 0x44458
	ands r0, r1	@ 00044458 0840
.org 0x4445a
	strb r0, [r3, #11]	@ 0004445a d872
.org 0x4445c
	adds r1, r3, #0	@ 0004445c 191c
.org 0x4445e
	adds r1, #37	@ 0004445e 2531
.org 0x44460
	movs r0, #16	@ 00044460 1020
.org 0x44462
	strb r0, [r1, #0]	@ 00044462 0870
.org 0x44464
	ldr r0, [pc, #44]	@ 00044464 0b48
.org 0x44466
	ldrh r0, [r0, #2]	@ 00044466 4088
.org 0x44468
	strh r0, [r3, #32]	@ 00044468 1884
.org 0x4446a
	ldr r0, [pc, #44]	@ 0004446a 0b48
.org 0x4446c
	ldrb r0, [r0, #1]	@ 0004446c 4078
.org 0x4446e
	subs r1, #3	@ 0004446e 0339
.org 0x44470
	strb r0, [r1, #0]	@ 00044470 0870
.org 0x44472
	movs r0, #0	@ 00044472 0020
.org 0x44474
	strb r0, [r3, #16]	@ 00044474 1874
.org 0x44476
	strb r6, [r3, #17]	@ 00044476 5e74
.org 0x44478
	str r5, [r3, #40]	@ 00044478 9d62
.org 0x4447a
	ldrb r0, [r4, #10]	@ 0004447a a07a
.org 0x4447c
	lsrs r2, r0, #4	@ 0004447c 0209
.org 0x4447e
	movs r0, #1	@ 0004447e 0120
.org 0x44480
	ands r2, r0	@ 00044480 0240
.org 0x44482
	cmp r2, #0	@ 00044482 002a
.org 0x44484
	beq.n 0x4449c	@ 00044484 0ad0
.org 0x44486
	ldrb r0, [r3, #10]	@ 00044486 987a
.org 0x44488
	movs r1, #16	@ 00044488 1021
.org 0x4448a
	orrs r0, r1	@ 0004448a 0843
.org 0x4448c
	b.n 0x444a2	@ 0004448c 09e0
.org 0x4448e
	.byte 0x00	@ 0004448e data
.org 0x4448f
	.byte 0x00	@ 0004448f data
.org 0x44490
	.byte 0xf8,0x39,0x85,0x08	@ 00044490 data
.org 0x44494
	.byte 0xfc,0x36,0x85,0x08	@ 00044494 data
.org 0x44498
	.byte 0x04,0x37,0x85,0x08	@ 00044498 data
.org 0x4449c
	ldrb r1, [r3, #10]	@ 0004449c 997a
.org 0x4449e
	movs r0, #239	@ 0004449e ef20
.org 0x444a0
	ands r0, r1	@ 000444a0 0840
.org 0x444a2
	strb r0, [r3, #10]	@ 000444a2 9872
.org 0x444a4
	adds r1, r2, #0	@ 000444a4 111c
.org 0x444a6
	adds r0, r3, #0	@ 000444a6 181c
.org 0x444a8
	adds r0, #76	@ 000444a8 4c30
.org 0x444aa
	strb r1, [r0, #0]	@ 000444aa 0170
.org 0x444ac
	movs r0, #74	@ 000444ac 4a20
.org 0x444ae
	adds r0, r0, r3	@ 000444ae c018
.org 0x444b0
	mov ip, r0	@ 000444b0 8446
.org 0x444b2
	lsls r1, r1, #4	@ 000444b2 0901
.org 0x444b4
	ldrb r2, [r0, #0]	@ 000444b4 0278
.org 0x444b6
	movs r0, #17	@ 000444b6 1120
.org 0x444b8
	negs r0, r0	@ 000444b8 4042
.org 0x444ba
	ands r0, r2	@ 000444ba 1040
.org 0x444bc
	orrs r0, r1	@ 000444bc 0843
.org 0x444be
	mov r1, ip	@ 000444be 6146
.org 0x444c0
	strb r0, [r1, #0]	@ 000444c0 0870
.org 0x444c2
	ldrb r1, [r3, #10]	@ 000444c2 997a
.org 0x444c4
	movs r0, #16	@ 000444c4 1020
.org 0x444c6
	ands r0, r1	@ 000444c6 0840
.org 0x444c8
	cmp r0, #0	@ 000444c8 0028
