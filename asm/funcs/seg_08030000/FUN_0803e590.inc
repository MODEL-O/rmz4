@ FUN_0803e590  entry 0x0803e590  size 186
.thumb
.org 0x3e590
FUN_0803e590:
	push {r4, r5, lr}	@ 0003e590 30b5
.org 0x3e592
	adds r4, r0, #0	@ 0003e592 041c
.org 0x3e594
	adds r0, #180	@ 0003e594 b430
.org 0x3e596
	ldr r5, [r0, #0]	@ 0003e596 0568
.org 0x3e598
	ldrb r0, [r4, #13]	@ 0003e598 607b
.org 0x3e59a
	cmp r0, #1	@ 0003e59a 0128
.org 0x3e59c
	beq.n 0x3e5f0	@ 0003e59c 28d0
.org 0x3e59e
	cmp r0, #1	@ 0003e59e 0128
.org 0x3e5a0
	bgt.n 0x3e5a8	@ 0003e5a0 02dc
.org 0x3e5a2
	cmp r0, #0	@ 0003e5a2 0028
.org 0x3e5a4
	beq.n 0x3e5b2	@ 0003e5a4 05d0
.org 0x3e5a6
	b.n 0x3e648	@ 0003e5a6 4fe0
.org 0x3e5a8
	cmp r0, #2	@ 0003e5a8 0228
.org 0x3e5aa
	beq.n 0x3e610	@ 0003e5aa 31d0
.org 0x3e5ac
	cmp r0, #3	@ 0003e5ac 0328
.org 0x3e5ae
	beq.n 0x3e62c	@ 0003e5ae 3dd0
.org 0x3e5b0
	b.n 0x3e648	@ 0003e5b0 4ae0
.org 0x3e5b2
	ldr r1, [pc, #88]	@ 0003e5b2 1649
.org 0x3e5b4
	adds r0, r4, #0	@ 0003e5b4 201c
.org 0x3e5b6
	bl 0x1cf00	@ 0003e5b6 def7a3fc
.org 0x3e5ba
	adds r2, r5, #0	@ 0003e5ba 2a1c
.org 0x3e5bc
	adds r2, #230	@ 0003e5bc e632
.org 0x3e5be
	ldrb r0, [r2, #0]	@ 0003e5be 1078
.org 0x3e5c0
	adds r1, r0, #0	@ 0003e5c0 011c
.org 0x3e5c2
	cmp r1, #0	@ 0003e5c2 0029
.org 0x3e5c4
	beq.n 0x3e5dc	@ 0003e5c4 0ad0
.org 0x3e5c6
	cmp r1, #255	@ 0003e5c6 ff29
.org 0x3e5c8
	beq.n 0x3e5ce	@ 0003e5c8 01d0
.org 0x3e5ca
	subs r0, #1	@ 0003e5ca 0138
.org 0x3e5cc
	strb r0, [r2, #0]	@ 0003e5cc 1070
.org 0x3e5ce
	adds r0, r5, #0	@ 0003e5ce 281c
.org 0x3e5d0
	adds r1, r4, #0	@ 0003e5d0 211c
.org 0x3e5d2
	bl 0x3ff38	@ 0003e5d2 01f0b1fc
.org 0x3e5d6
	movs r0, #72	@ 0003e5d6 4820
.org 0x3e5d8
	bl 0x2b10	@ 0003e5d8 c4f79afa
.org 0x3e5dc
	movs r0, #170	@ 0003e5dc aa20
.org 0x3e5de
	lsls r0, r0, #1	@ 0003e5de 4000
.org 0x3e5e0
	adds r1, r5, r0	@ 0003e5e0 2918
.org 0x3e5e2
	movs r0, #0	@ 0003e5e2 0020
.org 0x3e5e4
	strb r0, [r1, #0]	@ 0003e5e4 0870
.org 0x3e5e6
	movs r0, #2	@ 0003e5e6 0220
.org 0x3e5e8
	strb r0, [r4, #18]	@ 0003e5e8 a074
.org 0x3e5ea
	ldrb r0, [r4, #13]	@ 0003e5ea 607b
.org 0x3e5ec
	adds r0, #1	@ 0003e5ec 0130
.org 0x3e5ee
	strb r0, [r4, #13]	@ 0003e5ee 6073
.org 0x3e5f0
	ldrb r0, [r4, #18]	@ 0003e5f0 a07c
.org 0x3e5f2
	subs r0, #1	@ 0003e5f2 0138
.org 0x3e5f4
	strb r0, [r4, #18]	@ 0003e5f4 a074
.org 0x3e5f6
	lsls r0, r0, #24	@ 0003e5f6 0006
.org 0x3e5f8
	cmp r0, #0	@ 0003e5f8 0028
.org 0x3e5fa
	bne.n 0x3e648	@ 0003e5fa 25d1
.org 0x3e5fc
	movs r0, #170	@ 0003e5fc aa20
.org 0x3e5fe
	lsls r0, r0, #1	@ 0003e5fe 4000
.org 0x3e600
	adds r1, r5, r0	@ 0003e600 2918
.org 0x3e602
	movs r0, #1	@ 0003e602 0120
.org 0x3e604
	strb r0, [r1, #0]	@ 0003e604 0870
.org 0x3e606
	movs r0, #12	@ 0003e606 0c20
.org 0x3e608
	strb r0, [r4, #18]	@ 0003e608 a074
.org 0x3e60a
	b.n 0x3e642	@ 0003e60a 1ae0
.org 0x3e60c
	.byte 0x06,0x81,0x00,0x00	@ 0003e60c data
.org 0x3e610
	ldrb r0, [r4, #18]	@ 0003e610 a07c
.org 0x3e612
	subs r0, #1	@ 0003e612 0138
.org 0x3e614
	strb r0, [r4, #18]	@ 0003e614 a074
.org 0x3e616
	lsls r0, r0, #24	@ 0003e616 0006
.org 0x3e618
	cmp r0, #0	@ 0003e618 0028
.org 0x3e61a
	bne.n 0x3e648	@ 0003e61a 15d1
.org 0x3e61c
	movs r0, #170	@ 0003e61c aa20
.org 0x3e61e
	lsls r0, r0, #1	@ 0003e61e 4000
.org 0x3e620
	adds r1, r5, r0	@ 0003e620 2918
.org 0x3e622
	movs r0, #3	@ 0003e622 0320
.org 0x3e624
	strb r0, [r1, #0]	@ 0003e624 0870
.org 0x3e626
	movs r0, #16	@ 0003e626 1020
.org 0x3e628
	strb r0, [r4, #18]	@ 0003e628 a074
.org 0x3e62a
	b.n 0x3e642	@ 0003e62a 0ae0
.org 0x3e62c
	ldrb r0, [r4, #18]	@ 0003e62c a07c
.org 0x3e62e
	subs r0, #1	@ 0003e62e 0138
.org 0x3e630
	strb r0, [r4, #18]	@ 0003e630 a074
.org 0x3e632
	lsls r0, r0, #24	@ 0003e632 0006
.org 0x3e634
	cmp r0, #0	@ 0003e634 0028
.org 0x3e636
	bne.n 0x3e648	@ 0003e636 07d1
.org 0x3e638
	movs r0, #170	@ 0003e638 aa20
.org 0x3e63a
	lsls r0, r0, #1	@ 0003e63a 4000
.org 0x3e63c
	adds r1, r5, r0	@ 0003e63c 2918
.org 0x3e63e
	movs r0, #4	@ 0003e63e 0420
.org 0x3e640
	strb r0, [r1, #0]	@ 0003e640 0870
.org 0x3e642
	ldrb r0, [r4, #13]	@ 0003e642 607b
.org 0x3e644
	adds r0, #1	@ 0003e644 0130
.org 0x3e646
	strb r0, [r4, #13]	@ 0003e646 6073
.org 0x3e648
	pop {r4, r5}	@ 0003e648 30bc
