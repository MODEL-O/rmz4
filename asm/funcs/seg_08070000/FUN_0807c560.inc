@ FUN_0807c560  entry 0x0807c560  size 124
.thumb
.org 0x7c560
FUN_0807c560:
	push {r4, r5, lr}	@ 0007c560 30b5
.org 0x7c562
	adds r4, r0, #0	@ 0007c562 041c
.org 0x7c564
	ldrb r0, [r4, #15]	@ 0007c564 e07b
.org 0x7c566
	cmp r0, #0	@ 0007c566 0028
.org 0x7c568
	bne.n 0x7c57c	@ 0007c568 08d1
.org 0x7c56a
	adds r0, r4, #0	@ 0007c56a 201c
.org 0x7c56c
	movs r1, #1	@ 0007c56c 0121
.org 0x7c56e
	bl 0x7e8c8	@ 0007c56e 02f0abf9
.org 0x7c572
	movs r0, #64	@ 0007c572 4020
.org 0x7c574
	strb r0, [r4, #18]	@ 0007c574 a074
.org 0x7c576
	ldrb r0, [r4, #15]	@ 0007c576 e07b
.org 0x7c578
	adds r0, #1	@ 0007c578 0130
.org 0x7c57a
	strb r0, [r4, #15]	@ 0007c57a e073
.org 0x7c57c
	adds r5, r4, #0	@ 0007c57c 251c
.org 0x7c57e
	adds r5, #188	@ 0007c57e bc35
.org 0x7c580
	ldrb r0, [r5, #0]	@ 0007c580 2878
.org 0x7c582
	cmp r0, #0	@ 0007c582 0028
.org 0x7c584
	beq.n 0x7c58c	@ 0007c584 02d0
.org 0x7c586
	adds r0, r4, #0	@ 0007c586 201c
.org 0x7c588
	bl 0x1cff0	@ 0007c588 a0f732fd
.org 0x7c58c
	adds r0, r4, #0	@ 0007c58c 201c
.org 0x7c58e
	adds r0, #116	@ 0007c58e 7430
.org 0x7c590
	ldr r3, [pc, #72]	@ 0007c590 124b
.org 0x7c592
	ldr r2, [pc, #76]	@ 0007c592 134a
.org 0x7c594
	ldrb r1, [r5, #0]	@ 0007c594 2978
.org 0x7c596
	lsls r1, r1, #1	@ 0007c596 4900
.org 0x7c598
	adds r1, r1, r2	@ 0007c598 8918
.org 0x7c59a
	ldrh r2, [r1, #0]	@ 0007c59a 0a88
.org 0x7c59c
	lsls r2, r2, #2	@ 0007c59c 9200
.org 0x7c59e
	adds r2, r2, r3	@ 0007c59e d218
.org 0x7c5a0
	adds r1, r4, #0	@ 0007c5a0 211c
.org 0x7c5a2
	adds r1, #113	@ 0007c5a2 7131
.org 0x7c5a4
	ldrb r1, [r1, #0]	@ 0007c5a4 0978
.org 0x7c5a6
	lsls r1, r1, #24	@ 0007c5a6 0906
.org 0x7c5a8
	asrs r1, r1, #24	@ 0007c5a8 0916
.org 0x7c5aa
	ldr r2, [r2, #0]	@ 0007c5aa 1268
.org 0x7c5ac
	lsls r1, r1, #2	@ 0007c5ac 8900
.org 0x7c5ae
	adds r1, r1, r2	@ 0007c5ae 8918
.org 0x7c5b0
	ldr r1, [r1, #0]	@ 0007c5b0 0968
.org 0x7c5b2
	bl 0x5784	@ 0007c5b2 89f7e7f8
.org 0x7c5b6
	ldrb r0, [r4, #18]	@ 0007c5b6 a07c
.org 0x7c5b8
	cmp r0, #0	@ 0007c5b8 0028
.org 0x7c5ba
	beq.n 0x7c5c0	@ 0007c5ba 01d0
.org 0x7c5bc
	subs r0, #1	@ 0007c5bc 0138
.org 0x7c5be
	strb r0, [r4, #18]	@ 0007c5be a074
.org 0x7c5c0
	ldrb r0, [r4, #18]	@ 0007c5c0 a07c
.org 0x7c5c2
	subs r0, #1	@ 0007c5c2 0138
.org 0x7c5c4
	strb r0, [r4, #18]	@ 0007c5c4 a074
.org 0x7c5c6
	lsls r0, r0, #24	@ 0007c5c6 0006
.org 0x7c5c8
	lsrs r1, r0, #24	@ 0007c5c8 010e
.org 0x7c5ca
	cmp r1, #0	@ 0007c5ca 0029
.org 0x7c5cc
	bne.n 0x7c5d6	@ 0007c5cc 03d1
.org 0x7c5ce
	ldrb r0, [r4, #14]	@ 0007c5ce a07b
.org 0x7c5d0
	adds r0, #1	@ 0007c5d0 0130
.org 0x7c5d2
	strb r0, [r4, #14]	@ 0007c5d2 a073
.org 0x7c5d4
	strb r1, [r4, #15]	@ 0007c5d4 e173
.org 0x7c5d6
	pop {r4, r5}	@ 0007c5d6 30bc
.org 0x7c5d8
	pop {r0}	@ 0007c5d8 01bc
.org 0x7c5da
	bx r0	@ 0007c5da 0047
