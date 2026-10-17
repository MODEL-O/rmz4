@ FUN_080144e0  entry 0x080144e0  size 208
.thumb
.org 0x144e0
FUN_080144e0:
	push {r4, r5, r6, r7, lr}	@ 000144e0 f0b5
.org 0x144e2
	sub sp, #8	@ 000144e2 82b0
.org 0x144e4
	adds r4, r0, #0	@ 000144e4 041c
.org 0x144e6
	adds r2, r1, #0	@ 000144e6 0a1c
.org 0x144e8
	ldr r7, [pc, #24]	@ 000144e8 064f
.org 0x144ea
	ldr r1, [pc, #28]	@ 000144ea 0749
.org 0x144ec
	adds r0, r7, r1	@ 000144ec 7818
.org 0x144ee
	ldrb r1, [r0, #0]	@ 000144ee 0178
.org 0x144f0
	movs r0, #15	@ 000144f0 0f20
.org 0x144f2
	ands r0, r1	@ 000144f2 0840
.org 0x144f4
	cmp r0, #3	@ 000144f4 0328
.org 0x144f6
	bne.n 0x1450c	@ 000144f6 09d1
.org 0x144f8
	adds r0, r4, #0	@ 000144f8 201c
.org 0x144fa
	adds r1, r2, #0	@ 000144fa 111c
.org 0x144fc
	bl 0x7638	@ 000144fc f3f79cf8
.org 0x14500
	b.n 0x145be	@ 00014500 5de0
.org 0x14502
	.byte 0x00	@ 00014502 data
.org 0x14503
	.byte 0x00	@ 00014503 data
.org 0x14504
	.byte 0xb0,0x0a,0x00,0x02	@ 00014504 data
.org 0x14508
	.byte 0x10,0xc0,0x02,0x00	@ 00014508 data
.org 0x1450c
	adds r6, r4, #0	@ 0001450c 261c
.org 0x1450e
	adds r6, #20	@ 0001450e 1436
.org 0x14510
	ldr r3, [r4, #52]	@ 00014510 636b
.org 0x14512
	ldr r2, [r4, #56]	@ 00014512 a26b
.org 0x14514
	ldr r1, [r4, #60]	@ 00014514 e16b
.org 0x14516
	subs r1, r3, r1	@ 00014516 591a
.org 0x14518
	adds r1, #15	@ 00014518 0f31
.org 0x1451a
	ldr r0, [r4, #64]	@ 0001451a 206c
.org 0x1451c
	subs r0, r2, r0	@ 0001451c 101a
.org 0x1451e
	adds r5, r0, #0	@ 0001451e 051c
.org 0x14520
	adds r5, #15	@ 00014520 0f35
.org 0x14522
	movs r0, #200	@ 00014522 c820
.org 0x14524
	lsls r0, r0, #3	@ 00014524 c000
.org 0x14526
	adds r2, r2, r0	@ 00014526 1218
.org 0x14528
	ldr r0, [r4, #44]	@ 00014528 e06a
.org 0x1452a
	asrs r0, r0, #8	@ 0001452a 0012
.org 0x1452c
	adds r0, r0, r3	@ 0001452c c018
.org 0x1452e
	str r0, [sp, #0]	@ 0001452e 0090
.org 0x14530
	ldr r0, [r4, #48]	@ 00014530 206b
.org 0x14532
	asrs r0, r0, #8	@ 00014532 0012
.org 0x14534
	adds r0, r0, r2	@ 00014534 8018
.org 0x14536
	str r0, [sp, #4]	@ 00014536 0190
.org 0x14538
	cmp r1, #30	@ 00014538 1e29
.org 0x1453a
	bhi.n 0x1454a	@ 0001453a 06d8
.org 0x1453c
	cmp r5, #30	@ 0001453c 1e2d
.org 0x1453e
	bhi.n 0x1454a	@ 0001453e 04d8
.org 0x14540
	ldr r1, [pc, #44]	@ 00014540 0b49
.org 0x14542
	adds r0, r7, r1	@ 00014542 7818
.org 0x14544
	ldrb r0, [r0, #0]	@ 00014544 0078
.org 0x14546
	cmp r0, #0	@ 00014546 0028
.org 0x14548
	beq.n 0x1457c	@ 00014548 18d0
.org 0x1454a
	ldr r0, [r4, #92]	@ 0001454a e06d
.org 0x1454c
	lsrs r0, r0, #4	@ 0001454c 0009
.org 0x1454e
	lsls r0, r0, #1	@ 0001454e 4000
.org 0x14550
	ldr r1, [pc, #32]	@ 00014550 0849
.org 0x14552
	adds r0, r0, r1	@ 00014552 4018
.org 0x14554
	ldrh r0, [r0, #0]	@ 00014554 0088
.org 0x14556
	movs r2, #248	@ 00014556 f822
.org 0x14558
	lsls r2, r2, #5	@ 00014558 5201
.org 0x1455a
	ands r2, r0	@ 0001455a 0240
.org 0x1455c
	lsls r2, r2, #3	@ 0001455c d200
.org 0x1455e
	movs r0, #192	@ 0001455e c020
.org 0x14560
	lsls r0, r0, #19	@ 00014560 c004
.org 0x14562
	adds r2, r2, r0	@ 00014562 1218
.org 0x14564
	ldr r3, [pc, #16]	@ 00014564 044b
.org 0x14566
	adds r0, r6, #0	@ 00014566 301c
.org 0x14568
	mov r1, sp	@ 00014568 6946
.org 0x1456a
	bl 0x5050	@ 0001456a f0f771fd
.org 0x1456e
	b.n 0x145a4	@ 0001456e 19e0
.org 0x14570
	.byte 0x29,0xd0,0x02,0x00	@ 00014570 data
.org 0x14574
	.byte 0x04,0x0a,0x00,0x02	@ 00014574 data
.org 0x14578
	.byte 0x90,0x12,0x00,0x02	@ 00014578 data
.org 0x1457c
	ldr r0, [r4, #92]	@ 0001457c e06d
.org 0x1457e
	lsrs r0, r0, #4	@ 0001457e 0009
.org 0x14580
	lsls r0, r0, #1	@ 00014580 4000
.org 0x14582
	ldr r1, [pc, #68]	@ 00014582 1149
.org 0x14584
	adds r0, r0, r1	@ 00014584 4018
.org 0x14586
	ldrh r0, [r0, #0]	@ 00014586 0088
.org 0x14588
	movs r2, #248	@ 00014588 f822
.org 0x1458a
	lsls r2, r2, #5	@ 0001458a 5201
.org 0x1458c
	ands r2, r0	@ 0001458c 0240
.org 0x1458e
	lsls r2, r2, #3	@ 0001458e d200
.org 0x14590
	movs r0, #192	@ 00014590 c020
.org 0x14592
	lsls r0, r0, #19	@ 00014592 c004
.org 0x14594
	adds r2, r2, r0	@ 00014594 1218
.org 0x14596
	movs r0, #252	@ 00014596 fc20
.org 0x14598
	lsls r0, r0, #3	@ 00014598 c000
.org 0x1459a
	adds r3, r7, r0	@ 0001459a 3b18
.org 0x1459c
	adds r0, r6, #0	@ 0001459c 301c
.org 0x1459e
	mov r1, sp	@ 0001459e 6946
.org 0x145a0
	bl 0x5124	@ 000145a0 f0f7c0fd
.org 0x145a4
	ldr r0, [pc, #36]	@ 000145a4 0948
.org 0x145a6
	ldr r1, [pc, #40]	@ 000145a6 0a49
.org 0x145a8
	adds r0, r0, r1	@ 000145a8 4018
.org 0x145aa
	movs r1, #0	@ 000145aa 0021
.org 0x145ac
	strb r1, [r0, #0]	@ 000145ac 0170
.org 0x145ae
	ldr r1, [r4, #92]	@ 000145ae e16d
