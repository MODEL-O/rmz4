@ FUN_0807d560  entry 0x0807d560  size 128
.thumb
.org 0x7d560
FUN_0807d560:
	push {r4, r5, lr}	@ 0007d560 30b5
.org 0x7d562
	adds r4, r0, #0	@ 0007d562 041c
.org 0x7d564
	ldrb r0, [r4, #15]	@ 0007d564 e07b
.org 0x7d566
	cmp r0, #0	@ 0007d566 0028
.org 0x7d568
	bne.n 0x7d57c	@ 0007d568 08d1
.org 0x7d56a
	adds r0, r4, #0	@ 0007d56a 201c
.org 0x7d56c
	movs r1, #1	@ 0007d56c 0121
.org 0x7d56e
	bl 0x7e8c8	@ 0007d56e 01f0abf9
.org 0x7d572
	movs r0, #1	@ 0007d572 0120
.org 0x7d574
	strb r0, [r4, #18]	@ 0007d574 a074
.org 0x7d576
	ldrb r0, [r4, #15]	@ 0007d576 e07b
.org 0x7d578
	adds r0, #1	@ 0007d578 0130
.org 0x7d57a
	strb r0, [r4, #15]	@ 0007d57a e073
.org 0x7d57c
	adds r5, r4, #0	@ 0007d57c 251c
.org 0x7d57e
	adds r5, #188	@ 0007d57e bc35
.org 0x7d580
	ldrb r0, [r5, #0]	@ 0007d580 2878
.org 0x7d582
	cmp r0, #0	@ 0007d582 0028
.org 0x7d584
	beq.n 0x7d58c	@ 0007d584 02d0
.org 0x7d586
	adds r0, r4, #0	@ 0007d586 201c
.org 0x7d588
	bl 0x1cff0	@ 0007d588 9ff732fd
.org 0x7d58c
	adds r0, r4, #0	@ 0007d58c 201c
.org 0x7d58e
	adds r0, #116	@ 0007d58e 7430
.org 0x7d590
	ldr r3, [pc, #76]	@ 0007d590 134b
.org 0x7d592
	ldr r2, [pc, #80]	@ 0007d592 144a
.org 0x7d594
	ldrb r1, [r5, #0]	@ 0007d594 2978
.org 0x7d596
	lsls r1, r1, #1	@ 0007d596 4900
.org 0x7d598
	adds r1, r1, r2	@ 0007d598 8918
.org 0x7d59a
	ldrh r2, [r1, #0]	@ 0007d59a 0a88
.org 0x7d59c
	lsls r2, r2, #2	@ 0007d59c 9200
.org 0x7d59e
	adds r2, r2, r3	@ 0007d59e d218
.org 0x7d5a0
	adds r1, r4, #0	@ 0007d5a0 211c
.org 0x7d5a2
	adds r1, #113	@ 0007d5a2 7131
.org 0x7d5a4
	ldrb r1, [r1, #0]	@ 0007d5a4 0978
.org 0x7d5a6
	lsls r1, r1, #24	@ 0007d5a6 0906
.org 0x7d5a8
	asrs r1, r1, #24	@ 0007d5a8 0916
.org 0x7d5aa
	ldr r2, [r2, #0]	@ 0007d5aa 1268
.org 0x7d5ac
	lsls r1, r1, #2	@ 0007d5ac 8900
.org 0x7d5ae
	adds r1, r1, r2	@ 0007d5ae 8918
.org 0x7d5b0
	ldr r1, [r1, #0]	@ 0007d5b0 0968
.org 0x7d5b2
	bl 0x5784	@ 0007d5b2 88f7e7f8
.org 0x7d5b6
	ldrb r0, [r4, #18]	@ 0007d5b6 a07c
.org 0x7d5b8
	cmp r0, #0	@ 0007d5b8 0028
.org 0x7d5ba
	beq.n 0x7d5c6	@ 0007d5ba 04d0
.org 0x7d5bc
	subs r0, #1	@ 0007d5bc 0138
.org 0x7d5be
	strb r0, [r4, #18]	@ 0007d5be a074
.org 0x7d5c0
	lsls r0, r0, #24	@ 0007d5c0 0006
.org 0x7d5c2
	cmp r0, #0	@ 0007d5c2 0028
.org 0x7d5c4
	bne.n 0x7d5da	@ 0007d5c4 09d1
.org 0x7d5c6
	adds r0, r4, #0	@ 0007d5c6 201c
.org 0x7d5c8
	adds r0, #204	@ 0007d5c8 cc30
.org 0x7d5ca
	movs r2, #0	@ 0007d5ca 0022
.org 0x7d5cc
	ldrsh r1, [r0, r2]	@ 0007d5cc 815e
.org 0x7d5ce
	cmp r1, #0	@ 0007d5ce 0029
.org 0x7d5d0
	bne.n 0x7d5da	@ 0007d5d0 03d1
.org 0x7d5d2
	ldrb r0, [r4, #14]	@ 0007d5d2 a07b
.org 0x7d5d4
	adds r0, #1	@ 0007d5d4 0130
.org 0x7d5d6
	strb r0, [r4, #14]	@ 0007d5d6 a073
.org 0x7d5d8
	strb r1, [r4, #15]	@ 0007d5d8 e173
.org 0x7d5da
	pop {r4, r5}	@ 0007d5da 30bc
.org 0x7d5dc
	pop {r0}	@ 0007d5dc 01bc
.org 0x7d5de
	bx r0	@ 0007d5de 0047
