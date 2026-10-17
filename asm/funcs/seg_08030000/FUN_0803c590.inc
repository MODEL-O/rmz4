@ FUN_0803c590  entry 0x0803c590  size 410
.thumb
.org 0x3c590
FUN_0803c590:
	push {r4, r5, r6, r7, lr}	@ 0003c590 f0b5
.org 0x3c592
	mov r7, r8	@ 0003c592 4746
.org 0x3c594
	push {r7}	@ 0003c594 80b4
.org 0x3c596
	sub sp, #8	@ 0003c596 82b0
.org 0x3c598
	adds r6, r0, #0	@ 0003c598 061c
.org 0x3c59a
	adds r0, #180	@ 0003c59a b430
.org 0x3c59c
	ldr r0, [r0, #0]	@ 0003c59c 0068
.org 0x3c59e
	mov r8, r0	@ 0003c59e 8046
.org 0x3c5a0
	ldr r1, [pc, #136]	@ 0003c5a0 2249
.org 0x3c5a2
	ldrb r0, [r6, #9]	@ 0003c5a2 707a
.org 0x3c5a4
	lsls r0, r0, #2	@ 0003c5a4 8000
.org 0x3c5a6
	adds r0, r0, r1	@ 0003c5a6 4018
.org 0x3c5a8
	movs r1, #1	@ 0003c5a8 0121
.org 0x3c5aa
	str r1, [r6, #12]	@ 0003c5aa f160
.org 0x3c5ac
	ldr r0, [r0, #0]	@ 0003c5ac 0068
.org 0x3c5ae
	ldr r0, [r0, #4]	@ 0003c5ae 4068
.org 0x3c5b0
	str r0, [r6, #20]	@ 0003c5b0 7061
.org 0x3c5b2
	adds r0, r6, #0	@ 0003c5b2 301c
.org 0x3c5b4
	bl 0x1cc9c	@ 0003c5b4 e0f772fb
.org 0x3c5b8
	adds r0, r6, #0	@ 0003c5b8 301c
.org 0x3c5ba
	bl 0x1ceec	@ 0003c5ba e0f797fc
.org 0x3c5be
	ldrb r1, [r6, #10]	@ 0003c5be b17a
.org 0x3c5c0
	movs r0, #1	@ 0003c5c0 0120
.org 0x3c5c2
	movs r5, #0	@ 0003c5c2 0025
.org 0x3c5c4
	orrs r0, r1	@ 0003c5c4 0843
.org 0x3c5c6
	movs r1, #2	@ 0003c5c6 0221
.org 0x3c5c8
	orrs r0, r1	@ 0003c5c8 0843
.org 0x3c5ca
	strb r0, [r6, #10]	@ 0003c5ca b072
.org 0x3c5cc
	ldr r1, [pc, #96]	@ 0003c5cc 1849
.org 0x3c5ce
	ldrb r0, [r6, #16]	@ 0003c5ce 307c
.org 0x3c5d0
	lsls r0, r0, #1	@ 0003c5d0 4000
.org 0x3c5d2
	adds r0, r0, r1	@ 0003c5d2 4018
.org 0x3c5d4
	ldrh r1, [r0, #0]	@ 0003c5d4 0188
.org 0x3c5d6
	adds r0, r6, #0	@ 0003c5d6 301c
.org 0x3c5d8
	bl 0x1cf00	@ 0003c5d8 e0f792fc
.org 0x3c5dc
	ldr r1, [pc, #84]	@ 0003c5dc 1549
.org 0x3c5de
	ldrb r0, [r6, #16]	@ 0003c5de 307c
.org 0x3c5e0
	lsls r0, r0, #2	@ 0003c5e0 8000
.org 0x3c5e2
	adds r0, r0, r1	@ 0003c5e2 4018
.org 0x3c5e4
	ldr r0, [r0, #0]	@ 0003c5e4 0068
.org 0x3c5e6
	ldr r7, [r0, #0]	@ 0003c5e6 0768
.org 0x3c5e8
	ldrb r1, [r6, #10]	@ 0003c5e8 b17a
.org 0x3c5ea
	movs r0, #4	@ 0003c5ea 0420
.org 0x3c5ec
	orrs r0, r1	@ 0003c5ec 0843
.org 0x3c5ee
	strb r0, [r6, #10]	@ 0003c5ee b072
.org 0x3c5f0
	adds r4, r6, #0	@ 0003c5f0 341c
.org 0x3c5f2
	adds r4, #116	@ 0003c5f2 7434
.org 0x3c5f4
	adds r2, r6, #0	@ 0003c5f4 321c
.org 0x3c5f6
	adds r2, #84	@ 0003c5f6 5432
.org 0x3c5f8
	adds r0, r4, #0	@ 0003c5f8 201c
.org 0x3c5fa
	adds r1, r7, #0	@ 0003c5fa 391c
.org 0x3c5fc
	movs r3, #1	@ 0003c5fc 0123
.org 0x3c5fe
	bl 0x5760	@ 0003c5fe c9f7aff8
.org 0x3c602
	str r6, [r4, #44]	@ 0003c602 e662
.org 0x3c604
	str r5, [r4, #36]	@ 0003c604 6562
.org 0x3c606
	ldr r1, [pc, #48]	@ 0003c606 0c49
.org 0x3c608
	ldrb r2, [r6, #16]	@ 0003c608 327c
.org 0x3c60a
	lsls r0, r2, #1	@ 0003c60a 5000
.org 0x3c60c
	adds r1, r0, r1	@ 0003c60c 4118
.org 0x3c60e
	ldrh r0, [r1, #0]	@ 0003c60e 0888
.org 0x3c610
	cmp r0, #0	@ 0003c610 0028
.org 0x3c612
	beq.n 0x3c64a	@ 0003c612 1ad0
.org 0x3c614
	cmp r2, #13	@ 0003c614 0d2a
.org 0x3c616
	bne.n 0x3c644	@ 0003c616 15d1
.org 0x3c618
	movs r0, #163	@ 0003c618 a320
.org 0x3c61a
	lsls r0, r0, #1	@ 0003c61a 4000
.org 0x3c61c
	add r0, r8	@ 0003c61c 4044
.org 0x3c61e
	ldrb r0, [r0, #0]	@ 0003c61e 0078
.org 0x3c620
	cmp r0, #0	@ 0003c620 0028
.org 0x3c622
	beq.n 0x3c63c	@ 0003c622 0bd0
.org 0x3c624
	movs r0, #17	@ 0003c624 1120
.org 0x3c626
	bl 0x2b10	@ 0003c626 c6f773fa
.org 0x3c62a
	b.n 0x3c64a	@ 0003c62a 0ee0
.org 0x3c62c
	.byte 0xf8,0x39,0x85,0x08	@ 0003c62c data
.org 0x3c630
	.byte 0x38,0x3e,0x85,0x08	@ 0003c630 data
.org 0x3c634
	.byte 0x10,0x50,0x85,0x08	@ 0003c634 data
.org 0x3c638
	.byte 0x68,0x3e,0x85,0x08	@ 0003c638 data
.org 0x3c63c
	ldrh r0, [r1, #0]	@ 0003c63c 0888
.org 0x3c63e
	bl 0x2b10	@ 0003c63e c6f767fa
.org 0x3c642
	b.n 0x3c64a	@ 0003c642 02e0
.org 0x3c644
	ldrh r0, [r1, #0]	@ 0003c644 0888
.org 0x3c646
	bl 0x2b10	@ 0003c646 c6f763fa
.org 0x3c64a
	ldrb r0, [r6, #16]	@ 0003c64a 307c
.org 0x3c64c
	adds r5, r6, #0	@ 0003c64c 351c
.org 0x3c64e
	adds r5, #180	@ 0003c64e b435
.org 0x3c650
	cmp r0, #13	@ 0003c650 0d28
.org 0x3c652
	bne.n 0x3c67a	@ 0003c652 12d1
.org 0x3c654
	ldr r1, [r5, #0]	@ 0003c654 2968
.org 0x3c656
	movs r2, #163	@ 0003c656 a322
.org 0x3c658
	lsls r2, r2, #1	@ 0003c658 5200
.org 0x3c65a
	adds r0, r1, r2	@ 0003c65a 8818
.org 0x3c65c
	ldrb r0, [r0, #0]	@ 0003c65c 0078
.org 0x3c65e
	cmp r0, #0	@ 0003c65e 0028
.org 0x3c660
	beq.n 0x3c66e	@ 0003c660 05d0
.org 0x3c662
	adds r0, r1, #0	@ 0003c662 081c
.org 0x3c664
	adds r1, r6, #0	@ 0003c664 311c
.org 0x3c666
	movs r2, #0	@ 0003c666 0022
.org 0x3c668
	bl 0x4adb4	@ 0003c668 0ef0a4fb
.org 0x3c66c
	b.n 0x3c67a	@ 0003c66c 05e0
.org 0x3c66e
	adds r0, r1, #0	@ 0003c66e 081c
.org 0x3c670
	adds r1, r6, #0	@ 0003c670 311c
.org 0x3c672
	movs r2, #0	@ 0003c672 0022
.org 0x3c674
	movs r3, #0	@ 0003c674 0023
.org 0x3c676
	bl 0x4b9a4	@ 0003c676 0ff095f9
.org 0x3c67a
	ldrb r0, [r6, #16]	@ 0003c67a 307c
.org 0x3c67c
	cmp r0, #19	@ 0003c67c 1328
.org 0x3c67e
	bne.n 0x3c684	@ 0003c67e 01d1
.org 0x3c680
	movs r0, #1	@ 0003c680 0120
.org 0x3c682
	b.n 0x3c692	@ 0003c682 06e0
.org 0x3c684
	cmp r0, #17	@ 0003c684 1128
.org 0x3c686
	beq.n 0x3c68c	@ 0003c686 01d0
.org 0x3c688
	cmp r0, #15	@ 0003c688 0f28
.org 0x3c68a
	bne.n 0x3c690	@ 0003c68a 01d1
.org 0x3c68c
	movs r0, #2	@ 0003c68c 0220
.org 0x3c68e
	b.n 0x3c692	@ 0003c68e 00e0
.org 0x3c690
	movs r0, #0	@ 0003c690 0020
.org 0x3c692
	strb r0, [r5, #12]	@ 0003c692 2873
.org 0x3c694
	ldr r1, [pc, #96]	@ 0003c694 1849
.org 0x3c696
	ldrb r0, [r6, #16]	@ 0003c696 307c
.org 0x3c698
	adds r0, r0, r1	@ 0003c698 4018
.org 0x3c69a
	ldrb r0, [r0, #0]	@ 0003c69a 0078
.org 0x3c69c
	strb r0, [r5, #13]	@ 0003c69c 6873
.org 0x3c69e
	mov r0, r8	@ 0003c69e 4046
.org 0x3c6a0
	bl 0x38a78	@ 0003c6a0 fcf7eaf9
.org 0x3c6a4
	lsls r0, r0, #24	@ 0003c6a4 0006
.org 0x3c6a6
	cmp r0, #0	@ 0003c6a6 0028
.org 0x3c6a8
	beq.n 0x3c6b0	@ 0003c6a8 02d0
.org 0x3c6aa
	ldrb r0, [r5, #13]	@ 0003c6aa 687b
.org 0x3c6ac
	lsls r0, r0, #1	@ 0003c6ac 4000
.org 0x3c6ae
	strb r0, [r5, #13]	@ 0003c6ae 6873
.org 0x3c6b0
	mov r0, r8	@ 0003c6b0 4046
.org 0x3c6b2
	bl 0x3a4e8	@ 0003c6b2 fdf719ff
.org 0x3c6b6
	ldrb r2, [r5, #13]	@ 0003c6b6 6a7b
.org 0x3c6b8
	adds r1, r0, r2	@ 0003c6b8 8118
.org 0x3c6ba
	strb r1, [r5, #13]	@ 0003c6ba 6973
.org 0x3c6bc
	ldrb r0, [r6, #16]	@ 0003c6bc 307c
.org 0x3c6be
	cmp r0, #12	@ 0003c6be 0c28
.org 0x3c6c0
	bne.n 0x3c6d0	@ 0003c6c0 06d1
.org 0x3c6c2
	mov r0, r8	@ 0003c6c2 4046
.org 0x3c6c4
	adds r0, #245	@ 0003c6c4 f530
.org 0x3c6c6
	ldrb r0, [r0, #0]	@ 0003c6c6 0078
.org 0x3c6c8
	cmp r0, #4	@ 0003c6c8 0428
.org 0x3c6ca
	bne.n 0x3c6d0	@ 0003c6ca 01d1
.org 0x3c6cc
	adds r0, r1, #3	@ 0003c6cc c81c
.org 0x3c6ce
	strb r0, [r5, #13]	@ 0003c6ce 6873
.org 0x3c6d0
	mov r0, r8	@ 0003c6d0 4046
.org 0x3c6d2
	adds r0, #180	@ 0003c6d2 b430
.org 0x3c6d4
	ldrb r2, [r0, #17]	@ 0003c6d4 427c
.org 0x3c6d6
	cmp r2, #12	@ 0003c6d6 0c2a
.org 0x3c6d8
	beq.n 0x3c6de	@ 0003c6d8 01d0
.org 0x3c6da
	cmp r2, #16	@ 0003c6da 102a
.org 0x3c6dc
	bne.n 0x3c708	@ 0003c6dc 14d1
.org 0x3c6de
	ldr r0, [pc, #28]	@ 0003c6de 0748
.org 0x3c6e0
	ldrb r1, [r6, #16]	@ 0003c6e0 317c
.org 0x3c6e2
	adds r1, r1, r0	@ 0003c6e2 0918
.org 0x3c6e4
	ldrb r0, [r1, #0]	@ 0003c6e4 0878
.org 0x3c6e6
	cmp r0, #0	@ 0003c6e6 0028
.org 0x3c6e8
	beq.n 0x3c708	@ 0003c6e8 0ed0
.org 0x3c6ea
	cmp r2, #12	@ 0003c6ea 0c2a
.org 0x3c6ec
	bne.n 0x3c700	@ 0003c6ec 08d1
.org 0x3c6ee
	ldrb r1, [r7, #6]	@ 0003c6ee b979
.org 0x3c6f0
	movs r0, #64	@ 0003c6f0 4020
.org 0x3c6f2
	orrs r0, r1	@ 0003c6f2 0843
.org 0x3c6f4
	b.n 0x3c70a	@ 0003c6f4 09e0
.org 0x3c6f6
	.byte 0x00	@ 0003c6f6 data
.org 0x3c6f7
	.byte 0x00	@ 0003c6f7 data
.org 0x3c6f8
	.byte 0x98,0x3e,0x85,0x08	@ 0003c6f8 data
.org 0x3c6fc
	.byte 0x74,0x50,0x85,0x08	@ 0003c6fc data
.org 0x3c700
	ldrb r1, [r7, #6]	@ 0003c700 b979
.org 0x3c702
	movs r0, #4	@ 0003c702 0420
.org 0x3c704
	orrs r0, r1	@ 0003c704 0843
.org 0x3c706
	b.n 0x3c70a	@ 0003c706 00e0
.org 0x3c708
	ldrb r0, [r7, #6]	@ 0003c708 b879
.org 0x3c70a
	strb r0, [r5, #14]	@ 0003c70a a873
.org 0x3c70c
	adds r4, r6, #0	@ 0003c70c 341c
.org 0x3c70e
	adds r4, #116	@ 0003c70e 7434
.org 0x3c710
	ldrb r2, [r5, #13]	@ 0003c710 6a7b
.org 0x3c712
	ldrb r3, [r5, #12]	@ 0003c712 2b7b
.org 0x3c714
	ldrb r0, [r5, #14]	@ 0003c714 a87b
.org 0x3c716
	str r0, [sp, #0]	@ 0003c716 0090
.org 0x3c718
	movs r0, #1	@ 0003c718 0120
.org 0x3c71a
	negs r0, r0	@ 0003c71a 4042
.org 0x3c71c
	str r0, [sp, #4]	@ 0003c71c 0190
.org 0x3c71e
	adds r0, r4, #0	@ 0003c71e 201c
.org 0x3c720
	adds r1, r7, #0	@ 0003c720 391c
.org 0x3c722
	bl 0x5794	@ 0003c722 c9f737f8
.org 0x3c726
	movs r0, #0	@ 0003c726 0020
.org 0x3c728
	strb r0, [r6, #18]	@ 0003c728 b074
