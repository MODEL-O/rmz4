@ FUN_080775f0  entry 0x080775f0  size 170
.thumb
.org 0x775f0
FUN_080775f0:
	push {r4, r5, lr}	@ 000775f0 30b5
.org 0x775f2
	adds r4, r0, #0	@ 000775f2 041c
.org 0x775f4
	ldrb r5, [r4, #15]	@ 000775f4 e57b
.org 0x775f6
	cmp r5, #0	@ 000775f6 002d
.org 0x775f8
	bne.n 0x77624	@ 000775f8 14d1
.org 0x775fa
	ldr r0, [pc, #160]	@ 000775fa 2848
.org 0x775fc
	ldr r1, [pc, #160]	@ 000775fc 2849
.org 0x775fe
	adds r0, r0, r1	@ 000775fe 4018
.org 0x77600
	movs r3, #1	@ 00077600 0123
.org 0x77602
	strb r3, [r0, #0]	@ 00077602 0370
.org 0x77604
	adds r2, r4, #0	@ 00077604 221c
.org 0x77606
	adds r2, #200	@ 00077606 c832
.org 0x77608
	ldr r0, [r2, #0]	@ 00077608 1068
.org 0x7760a
	adds r0, #181	@ 0007760a b530
.org 0x7760c
	movs r1, #3	@ 0007760c 0321
.org 0x7760e
	strb r1, [r0, #0]	@ 0007760e 0170
.org 0x77610
	ldr r0, [r2, #0]	@ 00077610 1068
.org 0x77612
	adds r0, #182	@ 00077612 b630
.org 0x77614
	strb r3, [r0, #0]	@ 00077614 0370
.org 0x77616
	adds r0, r4, #0	@ 00077616 201c
.org 0x77618
	bl 0x78fdc	@ 00077618 01f0e0fc
.org 0x7761c
	strb r5, [r4, #18]	@ 0007761c a574
.org 0x7761e
	ldrb r0, [r4, #15]	@ 0007761e e07b
.org 0x77620
	adds r0, #1	@ 00077620 0130
.org 0x77622
	strb r0, [r4, #15]	@ 00077622 e073
.org 0x77624
	adds r0, r4, #0	@ 00077624 201c
.org 0x77626
	bl 0x1cff0	@ 00077626 a5f7e3fc
.org 0x7762a
	adds r0, r4, #0	@ 0007762a 201c
.org 0x7762c
	adds r0, #116	@ 0007762c 7430
.org 0x7762e
	ldr r3, [pc, #116]	@ 0007762e 1d4b
.org 0x77630
	ldr r2, [pc, #116]	@ 00077630 1d4a
.org 0x77632
	adds r1, r4, #0	@ 00077632 211c
.org 0x77634
	adds r1, #196	@ 00077634 c431
.org 0x77636
	ldrb r1, [r1, #0]	@ 00077636 0978
.org 0x77638
	lsls r1, r1, #1	@ 00077638 4900
.org 0x7763a
	adds r1, r1, r2	@ 0007763a 8918
.org 0x7763c
	ldrh r2, [r1, #0]	@ 0007763c 0a88
.org 0x7763e
	lsls r2, r2, #2	@ 0007763e 9200
.org 0x77640
	adds r2, r2, r3	@ 00077640 d218
.org 0x77642
	adds r1, r4, #0	@ 00077642 211c
.org 0x77644
	adds r1, #113	@ 00077644 7131
.org 0x77646
	ldrb r1, [r1, #0]	@ 00077646 0978
.org 0x77648
	lsls r1, r1, #24	@ 00077648 0906
.org 0x7764a
	asrs r1, r1, #24	@ 0007764a 0916
.org 0x7764c
	ldr r2, [r2, #0]	@ 0007764c 1268
.org 0x7764e
	lsls r1, r1, #2	@ 0007764e 8900
.org 0x77650
	adds r1, r1, r2	@ 00077650 8918
.org 0x77652
	ldr r1, [r1, #0]	@ 00077652 0968
.org 0x77654
	bl 0x5784	@ 00077654 8ef796f8
.org 0x77658
	adds r0, r4, #0	@ 00077658 201c
.org 0x7765a
	bl 0x78f28	@ 0007765a 01f065fc
.org 0x7765e
	adds r0, r4, #0	@ 0007765e 201c
.org 0x77660
	adds r0, #115	@ 00077660 7330
.org 0x77662
	ldrb r0, [r0, #0]	@ 00077662 0078
.org 0x77664
	cmp r0, #4	@ 00077664 0428
.org 0x77666
	bne.n 0x7766c	@ 00077666 01d1
.org 0x77668
	movs r0, #1	@ 00077668 0120
.org 0x7766a
	strb r0, [r4, #18]	@ 0007766a a074
.org 0x7766c
	adds r0, r4, #0	@ 0007766c 201c
.org 0x7766e
	adds r0, #200	@ 0007766e c830
.org 0x77670
	ldr r1, [r0, #0]	@ 00077670 0168
.org 0x77672
	adds r0, r1, #0	@ 00077672 081c
.org 0x77674
	adds r0, #180	@ 00077674 b430
.org 0x77676
	ldrb r0, [r0, #0]	@ 00077676 0078
.org 0x77678
	cmp r0, #0	@ 00077678 0028
.org 0x7767a
	beq.n 0x77694	@ 0007767a 0bd0
.org 0x7767c
	adds r0, r1, #0	@ 0007767c 081c
.org 0x7767e
	adds r0, #182	@ 0007767e b630
.org 0x77680
	ldrb r1, [r0, #0]	@ 00077680 0178
.org 0x77682
	cmp r1, #0	@ 00077682 0029
.org 0x77684
	bne.n 0x77694	@ 00077684 06d1
.org 0x77686
	ldrb r0, [r4, #18]	@ 00077686 a07c
.org 0x77688
	cmp r0, #0	@ 00077688 0028
.org 0x7768a
	beq.n 0x77694	@ 0007768a 03d0
.org 0x7768c
	ldrb r0, [r4, #14]	@ 0007768c a07b
.org 0x7768e
	adds r0, #1	@ 0007768e 0130
.org 0x77690
	strb r0, [r4, #14]	@ 00077690 a073
.org 0x77692
	strb r1, [r4, #15]	@ 00077692 e173
.org 0x77694
	pop {r4, r5}	@ 00077694 30bc
.org 0x77696
	pop {r0}	@ 00077696 01bc
.org 0x77698
	bx r0	@ 00077698 0047
