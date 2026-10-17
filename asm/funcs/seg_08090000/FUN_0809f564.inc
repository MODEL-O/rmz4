@ FUN_0809f564  entry 0x0809f564  size 184
.thumb
.org 0x9f564
FUN_0809f564:
	push {r4, r5, r6, lr}	@ 0009f564 70b5
.org 0x9f566
	adds r5, r0, #0	@ 0009f566 051c
.org 0x9f568
	ldr r6, [r5, #40]	@ 0009f568 ae6a
.org 0x9f56a
	bl 0x1ce54	@ 0009f56a 7df773fc
.org 0x9f56e
	ldrb r1, [r5, #10]	@ 0009f56e a97a
.org 0x9f570
	movs r0, #1	@ 0009f570 0120
.org 0x9f572
	movs r4, #0	@ 0009f572 0024
.org 0x9f574
	orrs r0, r1	@ 0009f574 0843
.org 0x9f576
	movs r1, #2	@ 0009f576 0221
.org 0x9f578
	orrs r0, r1	@ 0009f578 0843
.org 0x9f57a
	strb r0, [r5, #10]	@ 0009f57a a872
.org 0x9f57c
	adds r0, r5, #0	@ 0009f57c 281c
.org 0x9f57e
	bl 0x1ceec	@ 0009f57e 7df7b5fc
.org 0x9f582
	ldrb r1, [r5, #17]	@ 0009f582 697c
.org 0x9f584
	lsls r1, r1, #24	@ 0009f584 0906
.org 0x9f586
	movs r0, #171	@ 0009f586 ab20
.org 0x9f588
	lsls r0, r0, #24	@ 0009f588 0006
.org 0x9f58a
	adds r1, r1, r0	@ 0009f58a 0918
.org 0x9f58c
	lsrs r1, r1, #16	@ 0009f58c 090c
.org 0x9f58e
	adds r0, r5, #0	@ 0009f58e 281c
.org 0x9f590
	bl 0x1cf00	@ 0009f590 7df7b6fc
.org 0x9f594
	adds r0, r5, #0	@ 0009f594 281c
.org 0x9f596
	bl 0x1cff0	@ 0009f596 7df72bfd
.org 0x9f59a
	ldrb r0, [r6, #10]	@ 0009f59a b07a
.org 0x9f59c
	lsrs r2, r0, #4	@ 0009f59c 0209
.org 0x9f59e
	movs r0, #1	@ 0009f59e 0120
.org 0x9f5a0
	ands r2, r0	@ 0009f5a0 0240
.org 0x9f5a2
	cmp r2, #0	@ 0009f5a2 002a
.org 0x9f5a4
	beq.n 0x9f5ae	@ 0009f5a4 03d0
.org 0x9f5a6
	ldrb r0, [r5, #10]	@ 0009f5a6 a87a
.org 0x9f5a8
	movs r1, #16	@ 0009f5a8 1021
.org 0x9f5aa
	orrs r0, r1	@ 0009f5aa 0843
.org 0x9f5ac
	b.n 0x9f5b4	@ 0009f5ac 02e0
.org 0x9f5ae
	ldrb r1, [r5, #10]	@ 0009f5ae a97a
.org 0x9f5b0
	movs r0, #239	@ 0009f5b0 ef20
.org 0x9f5b2
	ands r0, r1	@ 0009f5b2 0840
.org 0x9f5b4
	strb r0, [r5, #10]	@ 0009f5b4 a872
.org 0x9f5b6
	adds r1, r2, #0	@ 0009f5b6 111c
.org 0x9f5b8
	adds r0, r5, #0	@ 0009f5b8 281c
.org 0x9f5ba
	adds r0, #76	@ 0009f5ba 4c30
.org 0x9f5bc
	movs r4, #0	@ 0009f5bc 0024
.org 0x9f5be
	strb r1, [r0, #0]	@ 0009f5be 0170
.org 0x9f5c0
	adds r3, r5, #0	@ 0009f5c0 2b1c
.org 0x9f5c2
	adds r3, #74	@ 0009f5c2 4a33
.org 0x9f5c4
	lsls r1, r1, #4	@ 0009f5c4 0901
.org 0x9f5c6
	ldrb r2, [r3, #0]	@ 0009f5c6 1a78
.org 0x9f5c8
	movs r0, #17	@ 0009f5c8 1120
.org 0x9f5ca
	negs r0, r0	@ 0009f5ca 4042
.org 0x9f5cc
	ands r0, r2	@ 0009f5cc 1040
.org 0x9f5ce
	orrs r0, r1	@ 0009f5ce 0843
.org 0x9f5d0
	strb r0, [r3, #0]	@ 0009f5d0 1870
.org 0x9f5d2
	adds r1, r5, #0	@ 0009f5d2 291c
.org 0x9f5d4
	adds r1, #37	@ 0009f5d4 2531
.org 0x9f5d6
	movs r0, #25	@ 0009f5d6 1920
.org 0x9f5d8
	strb r0, [r1, #0]	@ 0009f5d8 0870
.org 0x9f5da
	ldr r0, [r6, #84]	@ 0009f5da 706d
.org 0x9f5dc
	ldr r1, [r6, #88]	@ 0009f5dc b16d
.org 0x9f5de
	str r0, [r5, #84]	@ 0009f5de 6865
.org 0x9f5e0
	str r1, [r5, #88]	@ 0009f5e0 a965
.org 0x9f5e2
	ldr r0, [r5, #84]	@ 0009f5e2 686d
.org 0x9f5e4
	ldr r1, [r5, #88]	@ 0009f5e4 a96d
.org 0x9f5e6
	bl 0x8534	@ 0009f5e6 68f7a5ff
.org 0x9f5ea
	str r0, [r5, #88]	@ 0009f5ea a865
.org 0x9f5ec
	adds r1, r5, #0	@ 0009f5ec 291c
.org 0x9f5ee
	adds r1, #180	@ 0009f5ee b431
.org 0x9f5f0
	ldr r0, [r5, #84]	@ 0009f5f0 686d
.org 0x9f5f2
	str r0, [r1, #0]	@ 0009f5f2 0860
.org 0x9f5f4
	adds r1, #4	@ 0009f5f4 0431
.org 0x9f5f6
	ldr r0, [r5, #88]	@ 0009f5f6 a86d
.org 0x9f5f8
	str r0, [r1, #0]	@ 0009f5f8 0860
.org 0x9f5fa
	adds r0, r5, #0	@ 0009f5fa 281c
.org 0x9f5fc
	adds r0, #188	@ 0009f5fc bc30
.org 0x9f5fe
	movs r1, #0	@ 0009f5fe 0021
.org 0x9f600
	strh r4, [r0, #0]	@ 0009f600 0480
.org 0x9f602
	adds r0, #2	@ 0009f602 0230
.org 0x9f604
	strh r4, [r0, #0]	@ 0009f604 0480
.org 0x9f606
	strb r1, [r5, #18]	@ 0009f606 a974
.org 0x9f608
	ldrb r0, [r5, #17]	@ 0009f608 687c
.org 0x9f60a
	cmp r0, #0	@ 0009f60a 0028
.org 0x9f60c
	beq.n 0x9f616	@ 0009f60c 03d0
.org 0x9f60e
	ldr r0, [r5, #88]	@ 0009f60e a86d
.org 0x9f610
	ldr r1, [pc, #8]	@ 0009f610 0249
.org 0x9f612
	adds r0, r0, r1	@ 0009f612 4018
.org 0x9f614
	str r0, [r5, #88]	@ 0009f614 a865
.org 0x9f616
	pop {r4, r5, r6}	@ 0009f616 70bc
.org 0x9f618
	pop {r0}	@ 0009f618 01bc
.org 0x9f61a
	bx r0	@ 0009f61a 0047
