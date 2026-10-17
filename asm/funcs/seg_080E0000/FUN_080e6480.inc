@ FUN_080e6480  entry 0x080e6480  size 316
.thumb
.org 0xe6480
FUN_080e6480:
	push {r4, r5, r6, r7, lr}	@ 000e6480 f0b5
.org 0xe6482
	mov r7, r9	@ 000e6482 4f46
.org 0xe6484
	mov r6, r8	@ 000e6484 4646
.org 0xe6486
	push {r6, r7}	@ 000e6486 c0b4
.org 0xe6488
	sub sp, #8	@ 000e6488 82b0
.org 0xe648a
	adds r6, r0, #0	@ 000e648a 061c
.org 0xe648c
	ldrb r0, [r6, #17]	@ 000e648c 707c
.org 0xe648e
	cmp r0, #0	@ 000e648e 0028
.org 0xe6490
	bne.n 0xe64e2	@ 000e6490 27d1
.org 0xe6492
	ldr r0, [r6, #84]	@ 000e6492 706d
.org 0xe6494
	str r0, [sp, #0]	@ 000e6494 0090
.org 0xe6496
	ldr r0, [r6, #88]	@ 000e6496 b06d
.org 0xe6498
	ldr r1, [pc, #216]	@ 000e6498 3649
.org 0xe649a
	adds r0, r0, r1	@ 000e649a 4018
.org 0xe649c
	str r0, [sp, #4]	@ 000e649c 0190
.org 0xe649e
	movs r0, #1	@ 000e649e 0120
.org 0xe64a0
	mov r1, sp	@ 000e64a0 6946
.org 0xe64a2
	bl 0xd0c88	@ 000e64a2 eaf7f1fb
.org 0xe64a6
	movs r0, #42	@ 000e64a6 2a20
.org 0xe64a8
	bl 0x2b10	@ 000e64a8 1cf732fb
.org 0xe64ac
	ldr r0, [r6, #88]	@ 000e64ac b06d
.org 0xe64ae
	ldr r1, [pc, #200]	@ 000e64ae 3249
.org 0xe64b0
	adds r0, r0, r1	@ 000e64b0 4018
.org 0xe64b2
	str r0, [sp, #4]	@ 000e64b2 0190
.org 0xe64b4
	movs r4, #1	@ 000e64b4 0124
.org 0xe64b6
	strb r4, [r6, #17]	@ 000e64b6 7474
.org 0xe64b8
	adds r5, r6, #0	@ 000e64b8 351c
.org 0xe64ba
	adds r5, #84	@ 000e64ba 5435
.org 0xe64bc
	movs r1, #129	@ 000e64bc 8121
.org 0xe64be
	lsls r1, r1, #1	@ 000e64be 4900
.org 0xe64c0
	ldrb r2, [r6, #10]	@ 000e64c0 b27a
.org 0xe64c2
	lsrs r2, r2, #4	@ 000e64c2 1209
.org 0xe64c4
	ands r2, r4	@ 000e64c4 2240
.org 0xe64c6
	adds r0, r5, #0	@ 000e64c6 281c
.org 0xe64c8
	bl 0xe6270	@ 000e64c8 fff7d2fe
.org 0xe64cc
	ldr r1, [pc, #172]	@ 000e64cc 2b49
.org 0xe64ce
	ldrb r2, [r6, #10]	@ 000e64ce b27a
.org 0xe64d0
	lsrs r2, r2, #4	@ 000e64d0 1209
.org 0xe64d2
	ands r2, r4	@ 000e64d2 2240
.org 0xe64d4
	adds r0, r5, #0	@ 000e64d4 281c
.org 0xe64d6
	bl 0xe6270	@ 000e64d6 fff7cbfe
.org 0xe64da
	movs r0, #2	@ 000e64da 0220
.org 0xe64dc
	mov r1, sp	@ 000e64dc 6946
.org 0xe64de
	bl 0xd0c88	@ 000e64de eaf7d3fb
.org 0xe64e2
	ldr r0, [pc, #156]	@ 000e64e2 2748
.org 0xe64e4
	ldrb r2, [r6, #17]	@ 000e64e4 727c
.org 0xe64e6
	subs r2, #1	@ 000e64e6 013a
.org 0xe64e8
	lsls r2, r2, #2	@ 000e64e8 9200
.org 0xe64ea
	adds r2, r2, r0	@ 000e64ea 1218
.org 0xe64ec
	ldr r4, [pc, #148]	@ 000e64ec 254c
.org 0xe64ee
	ldr r0, [r4, #0]	@ 000e64ee 2068
.org 0xe64f0
	ldr r1, [pc, #148]	@ 000e64f0 2549
.org 0xe64f2
	mov r9, r1	@ 000e64f2 8946
.org 0xe64f4
	mov r1, r9	@ 000e64f4 4946
.org 0xe64f6
	muls r1, r0	@ 000e64f6 4143
.org 0xe64f8
	adds r0, r1, #0	@ 000e64f8 081c
.org 0xe64fa
	ldr r1, [pc, #144]	@ 000e64fa 2449
.org 0xe64fc
	mov r8, r1	@ 000e64fc 8846
.org 0xe64fe
	add r0, r8	@ 000e64fe 4044
.org 0xe6500
	lsls r0, r0, #1	@ 000e6500 4000
.org 0xe6502
	lsrs r3, r0, #1	@ 000e6502 4308
.org 0xe6504
	str r3, [r4, #0]	@ 000e6504 2360
.org 0xe6506
	lsrs r0, r0, #17	@ 000e6506 400c
.org 0xe6508
	movs r1, #255	@ 000e6508 ff21
.org 0xe650a
	mov ip, r1	@ 000e650a 8c46
.org 0xe650c
	ands r0, r1	@ 000e650c 0840
.org 0xe650e
	adds r1, #1	@ 000e650e 0131
.org 0xe6510
	adds r0, r0, r1	@ 000e6510 4018
.org 0xe6512
	ldr r1, [r2, #0]	@ 000e6512 1168
.org 0xe6514
	muls r0, r1	@ 000e6514 4843
.org 0xe6516
	ldrb r5, [r6, #17]	@ 000e6516 757c
.org 0xe6518
	cmp r0, #0	@ 000e6518 0028
.org 0xe651a
	bge.n 0xe651e	@ 000e651a 00da
.org 0xe651c
	adds r0, #255	@ 000e651c ff30
.org 0xe651e
	asrs r7, r0, #8	@ 000e651e 0712
.org 0xe6520
	str r7, [r6, #92]	@ 000e6520 f765
.org 0xe6522
	mov r0, r9	@ 000e6522 4846
.org 0xe6524
	muls r0, r3	@ 000e6524 5843
.org 0xe6526
	add r0, r8	@ 000e6526 4044
.org 0xe6528
	lsls r0, r0, #1	@ 000e6528 4000
.org 0xe652a
	lsrs r1, r0, #1	@ 000e652a 4108
.org 0xe652c
	str r1, [r4, #0]	@ 000e652c 2160
.org 0xe652e
	lsrs r0, r0, #17	@ 000e652e 400c
.org 0xe6530
	mov r1, ip	@ 000e6530 6146
.org 0xe6532
	ands r0, r1	@ 000e6532 0840
.org 0xe6534
	movs r1, #192	@ 000e6534 c021
.org 0xe6536
	lsls r1, r1, #1	@ 000e6536 4900
.org 0xe6538
	adds r0, r0, r1	@ 000e6538 4018
.org 0xe653a
	lsls r0, r0, #8	@ 000e653a 0002
.org 0xe653c
	negs r0, r0	@ 000e653c 4042
.org 0xe653e
	cmp r0, #0	@ 000e653e 0028
.org 0xe6540
	bge.n 0xe6544	@ 000e6540 00da
.org 0xe6542
	adds r0, #255	@ 000e6542 ff30
.org 0xe6544
	asrs r0, r0, #8	@ 000e6544 0012
.org 0xe6546
	str r0, [r6, #96]	@ 000e6546 3066
.org 0xe6548
	ldrb r1, [r6, #10]	@ 000e6548 b17a
.org 0xe654a
	movs r0, #16	@ 000e654a 1020
.org 0xe654c
	ands r0, r1	@ 000e654c 0840
.org 0xe654e
	cmp r0, #0	@ 000e654e 0028
.org 0xe6550
	beq.n 0xe6594	@ 000e6550 20d0
.org 0xe6552
	ldr r2, [pc, #60]	@ 000e6552 0f4a
.org 0xe6554
	subs r0, r5, #1	@ 000e6554 681e
.org 0xe6556
	lsls r0, r0, #3	@ 000e6556 c000
.org 0xe6558
	adds r0, r0, r2	@ 000e6558 8018
.org 0xe655a
	ldr r1, [r0, #0]	@ 000e655a 0168
.org 0xe655c
	lsls r1, r1, #8	@ 000e655c 0902
.org 0xe655e
	ldr r0, [r6, #84]	@ 000e655e 706d
.org 0xe6560
	subs r0, r0, r1	@ 000e6560 401a
.org 0xe6562
	str r0, [r6, #84]	@ 000e6562 7065
.org 0xe6564
	lsls r0, r7, #8	@ 000e6564 3802
.org 0xe6566
	negs r0, r0	@ 000e6566 4042
.org 0xe6568
	cmp r0, #0	@ 000e6568 0028
.org 0xe656a
	bge.n 0xe656e	@ 000e656a 00da
.org 0xe656c
	adds r0, #255	@ 000e656c ff30
.org 0xe656e
	asrs r0, r0, #8	@ 000e656e 0012
.org 0xe6570
	str r0, [r6, #92]	@ 000e6570 f065
.org 0xe6572
	b.n 0xe65a6	@ 000e6572 18e0
.org 0xe6574
	.byte 0x00,0xf4,0xff,0xff	@ 000e6574 data
.org 0xe6578
	.byte 0x00,0xe3,0xff,0xff	@ 000e6578 data
.org 0xe657c
	.byte 0x03,0x01,0x00,0x00	@ 000e657c data
.org 0xe6580
	.byte 0x84,0x8f,0x86,0x08	@ 000e6580 data
.org 0xe6584
	.byte 0x38,0xdc,0x02,0x02	@ 000e6584 data
.org 0xe6588
	.byte 0xfd,0x43,0x03,0x00	@ 000e6588 data
.org 0xe658c
	.byte 0xc3,0x9e,0x26,0x00	@ 000e658c data
.org 0xe6590
	.byte 0x6c,0x8f,0x86,0x08	@ 000e6590 data
.org 0xe6594
	ldr r2, [pc, #68]	@ 000e6594 114a
.org 0xe6596
	subs r0, r5, #1	@ 000e6596 681e
.org 0xe6598
	lsls r0, r0, #3	@ 000e6598 c000
.org 0xe659a
	adds r0, r0, r2	@ 000e659a 8018
.org 0xe659c
	ldr r1, [r0, #0]	@ 000e659c 0168
.org 0xe659e
	lsls r1, r1, #8	@ 000e659e 0902
.org 0xe65a0
	ldr r0, [r6, #84]	@ 000e65a0 706d
.org 0xe65a2
	adds r0, r0, r1	@ 000e65a2 4018
.org 0xe65a4
	str r0, [r6, #84]	@ 000e65a4 7065
.org 0xe65a6
	subs r0, r5, #1	@ 000e65a6 681e
.org 0xe65a8
	lsls r0, r0, #3	@ 000e65a8 c000
.org 0xe65aa
	adds r1, r2, #4	@ 000e65aa 111d
.org 0xe65ac
	adds r0, r0, r1	@ 000e65ac 4018
.org 0xe65ae
	ldr r1, [r0, #0]	@ 000e65ae 0168
.org 0xe65b0
	lsls r1, r1, #8	@ 000e65b0 0902
.org 0xe65b2
	ldr r0, [r6, #88]	@ 000e65b2 b06d
.org 0xe65b4
	adds r0, r0, r1	@ 000e65b4 4018
.org 0xe65b6
	str r0, [r6, #88]	@ 000e65b6 b065
.org 0xe65b8
	ldr r1, [pc, #36]	@ 000e65b8 0949
.org 0xe65ba
	ldrb r0, [r6, #17]	@ 000e65ba 707c
