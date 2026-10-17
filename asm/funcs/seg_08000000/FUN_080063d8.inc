@ FUN_080063d8  entry 0x080063d8  size 562
.thumb
.org 0x63d8
FUN_080063d8:
	push {r4, r5, r6, r7, lr}	@ 000063d8 f0b5
.org 0x63da
	mov r7, sl	@ 000063da 5746
.org 0x63dc
	mov r6, r9	@ 000063dc 4e46
.org 0x63de
	mov r5, r8	@ 000063de 4546
.org 0x63e0
	push {r5, r6, r7}	@ 000063e0 e0b4
.org 0x63e2
	sub sp, #16	@ 000063e2 84b0
.org 0x63e4
	mov sl, r0	@ 000063e4 8246
.org 0x63e6
	mov r9, r1	@ 000063e6 8946
.org 0x63e8
	ldr r7, [r0, #8]	@ 000063e8 8768
.org 0x63ea
	ldr r0, [r1, #8]	@ 000063ea 8868
.org 0x63ec
	mov r8, r0	@ 000063ec 8046
.org 0x63ee
	ldr r2, [pc, #160]	@ 000063ee 284a
.org 0x63f0
	ldrb r1, [r2, #0]	@ 000063f0 1178
.org 0x63f2
	movs r3, #128	@ 000063f2 8023
.org 0x63f4
	mov ip, r3	@ 000063f4 9c46
.org 0x63f6
	mov r0, ip	@ 000063f6 6046
.org 0x63f8
	ands r0, r1	@ 000063f8 0840
.org 0x63fa
	cmp r0, #0	@ 000063fa 0028
.org 0x63fc
	beq.n 0x6400	@ 000063fc 00d0
.org 0x63fe
	b.n 0x6600	@ 000063fe ffe0
.org 0x6400
	mov r0, sl	@ 00006400 5046
.org 0x6402
	ldr r4, [r0, #4]	@ 00006402 4468
.org 0x6404
	ldrb r0, [r4, #2]	@ 00006404 a078
.org 0x6406
	cmp r0, #4	@ 00006406 0428
.org 0x6408
	bne.n 0x640c	@ 00006408 00d1
.org 0x640a
	b.n 0x6600	@ 0000640a f9e0
.org 0x640c
	adds r5, r7, #0	@ 0000640c 3d1c
.org 0x640e
	adds r5, #54	@ 0000640e 3635
.org 0x6410
	ldrb r1, [r5, #0]	@ 00006410 2978
.org 0x6412
	movs r6, #4	@ 00006412 0426
.org 0x6414
	adds r0, r6, #0	@ 00006414 301c
.org 0x6416
	ands r0, r1	@ 00006416 0840
.org 0x6418
	adds r3, r7, #0	@ 00006418 3b1c
.org 0x641a
	adds r3, #57	@ 0000641a 3933
.org 0x641c
	cmp r0, #0	@ 0000641c 0028
.org 0x641e
	bne.n 0x6424	@ 0000641e 01d1
.org 0x6420
	ldrb r0, [r4, #6]	@ 00006420 a079
.org 0x6422
	strb r0, [r3, #0]	@ 00006422 1870
.org 0x6424
	ldrb r1, [r3, #0]	@ 00006424 1978
.org 0x6426
	mov r0, ip	@ 00006426 6046
.org 0x6428
	ands r0, r1	@ 00006428 0840
.org 0x642a
	lsls r0, r0, #24	@ 0000642a 0006
.org 0x642c
	lsrs r0, r0, #24	@ 0000642c 000e
.org 0x642e
	cmp r0, #0	@ 0000642e 0028
.org 0x6430
	beq.n 0x6434	@ 00006430 00d0
.org 0x6432
	b.n 0x6600	@ 00006432 e5e0
.org 0x6434
	str r0, [r7, #20]	@ 00006434 7861
.org 0x6436
	mov r1, r8	@ 00006436 4146
.org 0x6438
	str r0, [r1, #20]	@ 00006438 4861
.org 0x643a
	mov r4, sl	@ 0000643a 5446
.org 0x643c
	ldr r0, [r4, #4]	@ 0000643c 6068
.org 0x643e
	str r0, [r7, #4]	@ 0000643e 7860
.org 0x6440
	mov r1, r9	@ 00006440 4946
.org 0x6442
	ldr r0, [r1, #4]	@ 00006442 4868
.org 0x6444
	mov r4, r8	@ 00006444 4446
.org 0x6446
	str r0, [r4, #4]	@ 00006446 6060
.org 0x6448
	ldrb r1, [r5, #0]	@ 00006448 2978
.org 0x644a
	adds r0, r6, #0	@ 0000644a 301c
.org 0x644c
	ands r0, r1	@ 0000644c 0840
.org 0x644e
	cmp r0, #0	@ 0000644e 0028
.org 0x6450
	bne.n 0x645a	@ 00006450 03d1
.org 0x6452
	mov r1, sl	@ 00006452 5146
.org 0x6454
	ldr r0, [r1, #4]	@ 00006454 4868
.org 0x6456
	ldrb r0, [r0, #6]	@ 00006456 8079
.org 0x6458
	strb r0, [r3, #0]	@ 00006458 1870
.org 0x645a
	ldr r0, [r7, #24]	@ 0000645a b869
.org 0x645c
	movs r1, #128	@ 0000645c 8021
.org 0x645e
	lsls r1, r1, #1	@ 0000645e 4900
.org 0x6460
	ands r0, r1	@ 00006460 0840
.org 0x6462
	cmp r0, #0	@ 00006462 0028
.org 0x6464
	bne.n 0x6470	@ 00006464 04d1
.org 0x6466
	movs r0, #128	@ 00006466 8020
.org 0x6468
	lsls r0, r0, #8	@ 00006468 0002
.org 0x646a
	strh r0, [r7, #50]	@ 0000646a 7886
.org 0x646c
	subs r0, #1	@ 0000646c 0138
.org 0x646e
	strh r0, [r7, #52]	@ 0000646e b886
.org 0x6470
	ldr r0, [r7, #8]	@ 00006470 b868
.org 0x6472
	mov r3, r8	@ 00006472 4346
.org 0x6474
	ldr r1, [r3, #8]	@ 00006474 9968
.org 0x6476
	ldr r3, [r0, #0]	@ 00006476 0368
.org 0x6478
	ldr r0, [r1, #0]	@ 00006478 0868
.org 0x647a
	cmp r3, r0	@ 0000647a 8342
.org 0x647c
	bge.n 0x6494	@ 0000647c 0ada
.org 0x647e
	mov r4, r9	@ 0000647e 4c46
.org 0x6480
	ldrh r1, [r4, #20]	@ 00006480 a18a
.org 0x6482
	ldr r0, [r4, #12]	@ 00006482 e068
.org 0x6484
	subs r0, r0, r1	@ 00006484 401a
.org 0x6486
	subs r0, r0, r3	@ 00006486 c01a
.org 0x6488
	asrs r0, r0, #8	@ 00006488 0012
.org 0x648a
	strh r0, [r7, #52]	@ 0000648a b886
.org 0x648c
	b.n 0x64a2	@ 0000648c 09e0
.org 0x648e
	.byte 0x00	@ 0000648e data
.org 0x648f
	.byte 0x00	@ 0000648f data
.org 0x6490
	.byte 0xe0,0x32,0x00,0x03	@ 00006490 data
.org 0x6494
	mov r0, r9	@ 00006494 4846
.org 0x6496
	ldrh r1, [r0, #20]	@ 00006496 818a
.org 0x6498
	ldr r0, [r0, #12]	@ 00006498 c068
.org 0x649a
	adds r0, r0, r1	@ 0000649a 4018
.org 0x649c
	subs r0, r0, r3	@ 0000649c c01a
.org 0x649e
	asrs r0, r0, #8	@ 0000649e 0012
.org 0x64a0
	strh r0, [r7, #50]	@ 000064a0 7886
.org 0x64a2
	ldr r0, [r7, #4]	@ 000064a2 7868
.org 0x64a4
	ldrb r1, [r0, #2]	@ 000064a4 8178
.org 0x64a6
	adds r3, r0, #0	@ 000064a6 031c
.org 0x64a8
	cmp r1, #1	@ 000064a8 0129
.org 0x64aa
	bne.n 0x64cc	@ 000064aa 0fd1
.org 0x64ac
	ldrb r0, [r3, #4]	@ 000064ac 1879
.org 0x64ae
	cmp r0, #0	@ 000064ae 0028
.org 0x64b0
	beq.n 0x64cc	@ 000064b0 0cd0
.org 0x64b2
	mov r1, r8	@ 000064b2 4146
.org 0x64b4
	ldr r0, [r1, #28]	@ 000064b4 c869
.org 0x64b6
	movs r1, #192	@ 000064b6 c021
.org 0x64b8
	ands r0, r1	@ 000064b8 0840
.org 0x64ba
	cmp r0, #0	@ 000064ba 0028
.org 0x64bc
	beq.n 0x64cc	@ 000064bc 06d0
.org 0x64be
	mov r2, r8	@ 000064be 4246
.org 0x64c0
	str r7, [r2, #12]	@ 000064c0 d760
.org 0x64c2
	ldr r0, [r2, #24]	@ 000064c2 9069
.org 0x64c4
	movs r1, #128	@ 000064c4 8021
.org 0x64c6
	orrs r0, r1	@ 000064c6 0843
.org 0x64c8
	str r0, [r2, #24]	@ 000064c8 9061
.org 0x64ca
	b.n 0x6520	@ 000064ca 29e0
.org 0x64cc
	mov r4, r8	@ 000064cc 4446
.org 0x64ce
	ldr r0, [r4, #4]	@ 000064ce 6068
.org 0x64d0
	ldrb r1, [r0, #9]	@ 000064d0 417a
.org 0x64d2
	movs r4, #1	@ 000064d2 0124
.org 0x64d4
	adds r0, r4, #0	@ 000064d4 201c
.org 0x64d6
	ands r0, r1	@ 000064d6 0840
.org 0x64d8
	cmp r0, #0	@ 000064d8 0028
.org 0x64da
	beq.n 0x64ea	@ 000064da 06d0
.org 0x64dc
	mov r1, r8	@ 000064dc 4146
.org 0x64de
	ldr r0, [r1, #20]	@ 000064de 4869
.org 0x64e0
	movs r1, #128	@ 000064e0 8021
.org 0x64e2
	lsls r1, r1, #6	@ 000064e2 8901
.org 0x64e4
	orrs r0, r1	@ 000064e4 0843
.org 0x64e6
	mov r1, r8	@ 000064e6 4146
.org 0x64e8
	str r0, [r1, #20]	@ 000064e8 4861
.org 0x64ea
	mov r0, r8	@ 000064ea 4046
.org 0x64ec
	str r7, [r0, #12]	@ 000064ec c760
.org 0x64ee
	ldr r0, [r0, #20]	@ 000064ee 4069
.org 0x64f0
	movs r1, #64	@ 000064f0 4021
.org 0x64f2
	orrs r0, r1	@ 000064f2 0843
.org 0x64f4
	mov r1, r8	@ 000064f4 4146
.org 0x64f6
	str r0, [r1, #20]	@ 000064f6 4861
.org 0x64f8
	ldrb r0, [r3, #4]	@ 000064f8 1879
.org 0x64fa
	subs r0, #1	@ 000064fa 0138
.org 0x64fc
	lsls r0, r0, #24	@ 000064fc 0006
.org 0x64fe
	lsrs r0, r0, #24	@ 000064fe 000e
.org 0x6500
	cmp r0, #1	@ 00006500 0128
.org 0x6502
	bhi.n 0x6508	@ 00006502 01d8
.org 0x6504
	movs r0, #4	@ 00006504 0420
.org 0x6506
	strb r0, [r2, #2]	@ 00006506 9070
.org 0x6508
	mov r2, r8	@ 00006508 4246
.org 0x650a
	ldr r0, [r2, #4]	@ 0000650a 5068
.org 0x650c
	ldrb r1, [r0, #9]	@ 0000650c 417a
.org 0x650e
	adds r0, r4, #0	@ 0000650e 201c
.org 0x6510
	ands r0, r1	@ 00006510 0840
.org 0x6512
	cmp r0, #0	@ 00006512 0028
.org 0x6514
	beq.n 0x6520	@ 00006514 04d0
.org 0x6516
	ldr r0, [r7, #20]	@ 00006516 7869
.org 0x6518
	movs r1, #128	@ 00006518 8021
.org 0x651a
	lsls r1, r1, #5	@ 0000651a 4901
.org 0x651c
	orrs r0, r1	@ 0000651c 0843
.org 0x651e
	str r0, [r7, #20]	@ 0000651e 7861
.org 0x6520
	mov r3, r8	@ 00006520 4346
.org 0x6522
	str r3, [r7, #12]	@ 00006522 fb60
.org 0x6524
	ldr r1, [r7, #20]	@ 00006524 7969
.org 0x6526
	movs r0, #32	@ 00006526 2020
.org 0x6528
	orrs r1, r0	@ 00006528 0143
.org 0x652a
	adds r0, #224	@ 0000652a e030
.org 0x652c
	orrs r1, r0	@ 0000652c 0143
.org 0x652e
	str r1, [r7, #20]	@ 0000652e 7961
.org 0x6530
	ldr r0, [r7, #24]	@ 00006530 b869
.org 0x6532
	orrs r0, r1	@ 00006532 0843
.org 0x6534
	str r0, [r7, #24]	@ 00006534 b861
.org 0x6536
	ldr r0, [r3, #24]	@ 00006536 9869
.org 0x6538
	ldr r1, [r3, #20]	@ 00006538 5969
.org 0x653a
	orrs r0, r1	@ 0000653a 0843
.org 0x653c
	str r0, [r3, #24]	@ 0000653c 9861
.org 0x653e
	ldr r0, [r7, #36]	@ 0000653e 786a
.org 0x6540
	cmp r0, #0	@ 00006540 0028
.org 0x6542
	bne.n 0x654a	@ 00006542 02d1
.org 0x6544
	ldr r0, [r3, #36]	@ 00006544 586a
.org 0x6546
	cmp r0, #0	@ 00006546 0028
.org 0x6548
	beq.n 0x6600	@ 00006548 5ad0
.org 0x654a
	ldr r0, [r7, #20]	@ 0000654a 7869
.org 0x654c
	cmp r0, #0	@ 0000654c 0028
.org 0x654e
	bne.n 0x6554	@ 0000654e 01d1
.org 0x6550
	cmp r1, #0	@ 00006550 0029
.org 0x6552
	beq.n 0x6600	@ 00006552 55d0
.org 0x6554
	mov r4, sl	@ 00006554 5446
.org 0x6556
	ldr r0, [r4, #12]	@ 00006556 e068
.org 0x6558
	mov r1, r9	@ 00006558 4946
.org 0x655a
	ldr r5, [r1, #12]	@ 0000655a cd68
.org 0x655c
	subs r0, r0, r5	@ 0000655c 401b
.org 0x655e
	str r0, [sp, #0]	@ 0000655e 0090
.org 0x6560
	ldr r4, [r4, #16]	@ 00006560 2469
.org 0x6562
	ldr r6, [r1, #16]	@ 00006562 0e69
.org 0x6564
	subs r4, r4, r6	@ 00006564 a41b
.org 0x6566
	str r4, [sp, #4]	@ 00006566 0194
.org 0x6568
	ldrh r2, [r1, #20]	@ 00006568 8a8a
.org 0x656a
	muls r0, r2	@ 0000656a 5043
.org 0x656c
	mov r3, sl	@ 0000656c 5346
.org 0x656e
	ldrh r1, [r3, #20]	@ 0000656e 998a
.org 0x6570
	adds r1, r1, r2	@ 00006570 8918
.org 0x6572
	bl 0x128fb8	@ 00006572 22f121fd
.org 0x6576
	adds r5, r5, r0	@ 00006576 2d18
.org 0x6578
	str r5, [sp, #8]	@ 00006578 0295
.org 0x657a
	mov r0, r9	@ 0000657a 4846
.org 0x657c
	ldrh r2, [r0, #22]	@ 0000657c c28a
.org 0x657e
	adds r0, r2, #0	@ 0000657e 101c
.org 0x6580
	muls r0, r4	@ 00006580 6043
.org 0x6582
	mov r3, sl	@ 00006582 5346
.org 0x6584
	ldrh r1, [r3, #22]	@ 00006584 d98a
.org 0x6586
	adds r1, r1, r2	@ 00006586 8918
.org 0x6588
	bl 0x128fb8	@ 00006588 22f116fd
.org 0x658c
	adds r6, r6, r0	@ 0000658c 3618
.org 0x658e
	add r5, sp, #8	@ 0000658e 02ad
.org 0x6590
	str r6, [r5, #4]	@ 00006590 6e60
.org 0x6592
	ldr r0, [sp, #0]	@ 00006592 0098
.org 0x6594
	adds r4, r0, #0	@ 00006594 041c
.org 0x6596
	muls r4, r0	@ 00006596 4443
.org 0x6598
	adds r0, r4, #0	@ 00006598 201c
.org 0x659a
	ldr r1, [sp, #4]	@ 0000659a 0199
.org 0x659c
	adds r2, r1, #0	@ 0000659c 0a1c
.org 0x659e
	muls r2, r1	@ 0000659e 4a43
.org 0x65a0
	adds r1, r2, #0	@ 000065a0 111c
.org 0x65a2
	adds r0, r0, r1	@ 000065a2 4018
.org 0x65a4
	bl 0x128bf4	@ 000065a4 22f126fb
.org 0x65a8
	adds r4, r0, #0	@ 000065a8 041c
.org 0x65aa
	lsls r4, r4, #16	@ 000065aa 2404
.org 0x65ac
	lsrs r4, r4, #16	@ 000065ac 240c
.org 0x65ae
	ldr r0, [sp, #0]	@ 000065ae 0098
.org 0x65b0
	lsls r0, r0, #8	@ 000065b0 0002
.org 0x65b2
	adds r1, r4, #0	@ 000065b2 211c
.org 0x65b4
	bl 0x128fb8	@ 000065b4 22f100fd
.org 0x65b8
	str r0, [sp, #0]	@ 000065b8 0090
.org 0x65ba
	ldr r0, [sp, #4]	@ 000065ba 0198
.org 0x65bc
	lsls r0, r0, #8	@ 000065bc 0002
.org 0x65be
	adds r1, r4, #0	@ 000065be 211c
.org 0x65c0
	bl 0x128fb8	@ 000065c0 22f1fafc
.org 0x65c4
	str r0, [sp, #4]	@ 000065c4 0190
.org 0x65c6
	ldr r3, [r7, #36]	@ 000065c6 7b6a
.org 0x65c8
	cmp r3, #0	@ 000065c8 002b
.org 0x65ca
	beq.n 0x65dc	@ 000065ca 07d0
.org 0x65cc
	ldr r0, [r7, #20]	@ 000065cc 7869
.org 0x65ce
	cmp r0, #0	@ 000065ce 0028
.org 0x65d0
	beq.n 0x65dc	@ 000065d0 04d0
.org 0x65d2
	adds r0, r7, #0	@ 000065d2 381c
.org 0x65d4
	adds r1, r5, #0	@ 000065d4 291c
.org 0x65d6
	mov r2, sp	@ 000065d6 6a46
.org 0x65d8
	bl 0x128f88	@ 000065d8 22f1d6fc
.org 0x65dc
	mov r4, r8	@ 000065dc 4446
.org 0x65de
	ldr r3, [r4, #36]	@ 000065de 636a
.org 0x65e0
	cmp r3, #0	@ 000065e0 002b
.org 0x65e2
	beq.n 0x6600	@ 000065e2 0dd0
.org 0x65e4
	ldr r0, [r4, #20]	@ 000065e4 6069
.org 0x65e6
	cmp r0, #0	@ 000065e6 0028
.org 0x65e8
	beq.n 0x6600	@ 000065e8 0ad0
.org 0x65ea
	ldr r0, [sp, #0]	@ 000065ea 0098
.org 0x65ec
	negs r0, r0	@ 000065ec 4042
.org 0x65ee
	str r0, [sp, #0]	@ 000065ee 0090
.org 0x65f0
	ldr r0, [sp, #4]	@ 000065f0 0198
.org 0x65f2
	negs r0, r0	@ 000065f2 4042
.org 0x65f4
	str r0, [sp, #4]	@ 000065f4 0190
.org 0x65f6
	mov r0, r8	@ 000065f6 4046
.org 0x65f8
	adds r1, r5, #0	@ 000065f8 291c
.org 0x65fa
	mov r2, sp	@ 000065fa 6a46
.org 0x65fc
	bl 0x128f88	@ 000065fc 22f1c4fc
.org 0x6600
	add sp, #16	@ 00006600 04b0
.org 0x6602
	pop {r3, r4, r5}	@ 00006602 38bc
.org 0x6604
	mov r8, r3	@ 00006604 9846
.org 0x6606
	mov r9, r4	@ 00006606 a146
.org 0x6608
	mov sl, r5	@ 00006608 aa46
