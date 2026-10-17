@ FUN_0808f52c  entry 0x0808f52c  size 182
.thumb
.org 0x8f52c
FUN_0808f52c:
	push {r4, r5, lr}	@ 0008f52c 30b5
.org 0x8f52e
	adds r4, r0, #0	@ 0008f52e 041c
.org 0x8f530
	ldrb r3, [r4, #15]	@ 0008f530 e37b
.org 0x8f532
	cmp r3, #0	@ 0008f532 002b
.org 0x8f534
	bne.n 0x8f54e	@ 0008f534 0bd1
.org 0x8f536
	adds r2, r4, #0	@ 0008f536 221c
.org 0x8f538
	adds r2, #192	@ 0008f538 c032
.org 0x8f53a
	ldr r0, [r2, #0]	@ 0008f53a 1068
.org 0x8f53c
	adds r0, #180	@ 0008f53c b430
.org 0x8f53e
	movs r1, #2	@ 0008f53e 0221
.org 0x8f540
	strb r1, [r0, #0]	@ 0008f540 0170
.org 0x8f542
	ldr r0, [r2, #0]	@ 0008f542 1068
.org 0x8f544
	adds r0, #182	@ 0008f544 b630
.org 0x8f546
	strb r3, [r0, #0]	@ 0008f546 0370
.org 0x8f548
	ldrb r0, [r4, #15]	@ 0008f548 e07b
.org 0x8f54a
	adds r0, #1	@ 0008f54a 0130
.org 0x8f54c
	strb r0, [r4, #15]	@ 0008f54c e073
.org 0x8f54e
	adds r0, r4, #0	@ 0008f54e 201c
.org 0x8f550
	bl 0x1cff0	@ 0008f550 8df74efd
.org 0x8f554
	adds r0, r4, #0	@ 0008f554 201c
.org 0x8f556
	adds r0, #116	@ 0008f556 7430
.org 0x8f558
	ldr r3, [pc, #136]	@ 0008f558 224b
.org 0x8f55a
	ldrb r1, [r4, #30]	@ 0008f55a a17f
.org 0x8f55c
	lsls r1, r1, #8	@ 0008f55c 0902
.org 0x8f55e
	adds r2, r4, #0	@ 0008f55e 221c
.org 0x8f560
	adds r2, #112	@ 0008f560 7032
.org 0x8f562
	ldrb r2, [r2, #0]	@ 0008f562 1278
.org 0x8f564
	orrs r1, r2	@ 0008f564 1143
.org 0x8f566
	ldr r2, [pc, #128]	@ 0008f566 204a
.org 0x8f568
	adds r1, r1, r2	@ 0008f568 8918
.org 0x8f56a
	lsls r1, r1, #2	@ 0008f56a 8900
.org 0x8f56c
	adds r1, r1, r3	@ 0008f56c c918
.org 0x8f56e
	adds r2, r4, #0	@ 0008f56e 221c
.org 0x8f570
	adds r2, #113	@ 0008f570 7132
.org 0x8f572
	ldrb r2, [r2, #0]	@ 0008f572 1278
.org 0x8f574
	lsls r2, r2, #24	@ 0008f574 1206
.org 0x8f576
	asrs r2, r2, #24	@ 0008f576 1216
.org 0x8f578
	ldr r1, [r1, #0]	@ 0008f578 0968
.org 0x8f57a
	lsls r2, r2, #2	@ 0008f57a 9200
.org 0x8f57c
	adds r2, r2, r1	@ 0008f57c 5218
.org 0x8f57e
	ldr r1, [r2, #0]	@ 0008f57e 1168
.org 0x8f580
	ldrb r2, [r1, #0]	@ 0008f580 0a78
.org 0x8f582
	lsls r1, r2, #1	@ 0008f582 5100
.org 0x8f584
	adds r1, r1, r2	@ 0008f584 8918
.org 0x8f586
	lsls r1, r1, #3	@ 0008f586 c900
.org 0x8f588
	ldr r2, [pc, #96]	@ 0008f588 184a
.org 0x8f58a
	adds r1, r1, r2	@ 0008f58a 8918
.org 0x8f58c
	bl 0x5784	@ 0008f58c 76f7faf8
.org 0x8f590
	adds r5, r4, #0	@ 0008f590 251c
.org 0x8f592
	adds r5, #192	@ 0008f592 c035
.org 0x8f594
	ldr r3, [r5, #0]	@ 0008f594 2b68
.org 0x8f596
	adds r0, r3, #0	@ 0008f596 181c
.org 0x8f598
	adds r0, #182	@ 0008f598 b630
.org 0x8f59a
	ldrb r0, [r0, #0]	@ 0008f59a 0078
.org 0x8f59c
	cmp r0, #0	@ 0008f59c 0028
.org 0x8f59e
	beq.n 0x8f5dc	@ 0008f59e 1dd0
.org 0x8f5a0
	ldrb r1, [r3, #10]	@ 0008f5a0 997a
.org 0x8f5a2
	movs r0, #254	@ 0008f5a2 fe20
.org 0x8f5a4
	ands r0, r1	@ 0008f5a4 0840
.org 0x8f5a6
	movs r2, #0	@ 0008f5a6 0022
.org 0x8f5a8
	movs r1, #253	@ 0008f5a8 fd21
.org 0x8f5aa
	ands r0, r1	@ 0008f5aa 0840
.org 0x8f5ac
	strb r0, [r3, #10]	@ 0008f5ac 9872
.org 0x8f5ae
	adds r0, r3, #0	@ 0008f5ae 181c
.org 0x8f5b0
	adds r0, #140	@ 0008f5b0 8c30
.org 0x8f5b2
	str r2, [r0, #0]	@ 0008f5b2 0260
.org 0x8f5b4
	adds r0, #4	@ 0008f5b4 0430
.org 0x8f5b6
	str r2, [r0, #0]	@ 0008f5b6 0260
.org 0x8f5b8
	adds r0, #4	@ 0008f5b8 0430
.org 0x8f5ba
	strb r2, [r0, #0]	@ 0008f5ba 0270
.org 0x8f5bc
	ldrb r1, [r3, #10]	@ 0008f5bc 997a
.org 0x8f5be
	movs r0, #251	@ 0008f5be fb20
.org 0x8f5c0
	ands r0, r1	@ 0008f5c0 0840
.org 0x8f5c2
	strb r0, [r3, #10]	@ 0008f5c2 9872
.org 0x8f5c4
	ldr r1, [pc, #40]	@ 0008f5c4 0a49
.org 0x8f5c6
	ldrb r0, [r3, #9]	@ 0008f5c6 587a
.org 0x8f5c8
	lsls r0, r0, #2	@ 0008f5c8 8000
.org 0x8f5ca
	adds r0, r0, r1	@ 0008f5ca 4018
.org 0x8f5cc
	movs r1, #3	@ 0008f5cc 0321
.org 0x8f5ce
	str r1, [r3, #12]	@ 0008f5ce d960
.org 0x8f5d0
	ldr r0, [r0, #0]	@ 0008f5d0 0068
.org 0x8f5d2
	ldr r0, [r0, #12]	@ 0008f5d2 c068
.org 0x8f5d4
	str r0, [r3, #20]	@ 0008f5d4 5861
.org 0x8f5d6
	str r2, [r5, #0]	@ 0008f5d6 2a60
.org 0x8f5d8
	strb r1, [r4, #14]	@ 0008f5d8 a173
.org 0x8f5da
	strb r2, [r4, #15]	@ 0008f5da e273
.org 0x8f5dc
	pop {r4, r5}	@ 0008f5dc 30bc
.org 0x8f5de
	pop {r0}	@ 0008f5de 01bc
.org 0x8f5e0
	bx r0	@ 0008f5e0 0047
