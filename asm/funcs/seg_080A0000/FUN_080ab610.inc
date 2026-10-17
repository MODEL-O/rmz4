@ FUN_080ab610  entry 0x080ab610  size 144
.thumb
.org 0xab610
FUN_080ab610:
	push {r4, r5, lr}	@ 000ab610 30b5
.org 0xab612
	sub sp, #8	@ 000ab612 82b0
.org 0xab614
	adds r5, r0, #0	@ 000ab614 051c
.org 0xab616
	ldr r1, [pc, #52]	@ 000ab616 0d49
.org 0xab618
	mov r0, sp	@ 000ab618 6846
.org 0xab61a
	movs r2, #2	@ 000ab61a 0222
.org 0xab61c
	bl 0x129258	@ 000ab61c 7df01cfe
.org 0xab620
	add r4, sp, #4	@ 000ab620 01ac
.org 0xab622
	ldr r1, [pc, #44]	@ 000ab622 0b49
.org 0xab624
	adds r0, r4, #0	@ 000ab624 201c
.org 0xab626
	movs r2, #2	@ 000ab626 0222
.org 0xab628
	bl 0x129258	@ 000ab628 7df016fe
.org 0xab62c
	adds r0, r5, #0	@ 000ab62c 281c
.org 0xab62e
	adds r0, #187	@ 000ab62e bb30
.org 0xab630
	ldrb r0, [r0, #0]	@ 000ab630 0078
.org 0xab632
	cmp r0, #2	@ 000ab632 0228
.org 0xab634
	bls.n 0xab66a	@ 000ab634 19d9
.org 0xab636
	adds r0, r5, #0	@ 000ab636 281c
.org 0xab638
	adds r0, #186	@ 000ab638 ba30
.org 0xab63a
	ldrb r2, [r0, #0]	@ 000ab63a 0278
.org 0xab63c
	movs r1, #0	@ 000ab63c 0021
.org 0xab63e
	mov r0, sp	@ 000ab63e 6846
.org 0xab640
	ldrb r0, [r0, #0]	@ 000ab640 0078
.org 0xab642
	cmp r0, r2	@ 000ab642 9042
.org 0xab644
	bne.n 0xab654	@ 000ab644 06d1
.org 0xab646
	strb r1, [r4, #0]	@ 000ab646 2170
.org 0xab648
	b.n 0xab66a	@ 000ab648 0fe0
.org 0xab64a
	.byte 0x00	@ 000ab64a data
.org 0xab64b
	.byte 0x00	@ 000ab64b data
.org 0xab64c
	.byte 0x96,0x9d,0x12,0x08	@ 000ab64c data
.org 0xab650
	.byte 0x98,0x9d,0x12,0x08	@ 000ab650 data
.org 0xab654
	adds r1, #1	@ 000ab654 0131
.org 0xab656
	cmp r1, #1	@ 000ab656 0129
.org 0xab658
	bgt.n 0xab66a	@ 000ab658 07dc
.org 0xab65a
	mov r3, sp	@ 000ab65a 6b46
.org 0xab65c
	adds r0, r3, r1	@ 000ab65c 5818
.org 0xab65e
	ldrb r0, [r0, #0]	@ 000ab65e 0078
.org 0xab660
	cmp r0, r2	@ 000ab660 9042
.org 0xab662
	bne.n 0xab654	@ 000ab662 f7d1
.org 0xab664
	adds r1, r4, r1	@ 000ab664 6118
.org 0xab666
	movs r0, #0	@ 000ab666 0020
.org 0xab668
	strb r0, [r1, #0]	@ 000ab668 0870
.org 0xab66a
	adds r0, r4, #0	@ 000ab66a 201c
.org 0xab66c
	movs r1, #2	@ 000ab66c 0221
.org 0xab66e
	bl 0x73e30	@ 000ab66e c8f7dffb
.org 0xab672
	add r0, sp	@ 000ab672 6844
.org 0xab674
	ldrb r2, [r0, #0]	@ 000ab674 0278
.org 0xab676
	ldr r0, [pc, #32]	@ 000ab676 0848
.org 0xab678
	adds r0, r2, r0	@ 000ab678 1018
.org 0xab67a
	ldrb r0, [r0, #0]	@ 000ab67a 0078
.org 0xab67c
	movs r1, #0	@ 000ab67c 0021
.org 0xab67e
	strb r0, [r5, #13]	@ 000ab67e 6873
.org 0xab680
	strb r1, [r5, #14]	@ 000ab680 a973
.org 0xab682
	strb r1, [r5, #15]	@ 000ab682 e973
.org 0xab684
	adds r0, r5, #0	@ 000ab684 281c
.org 0xab686
	adds r0, #186	@ 000ab686 ba30
.org 0xab688
	ldrb r1, [r0, #0]	@ 000ab688 0178
.org 0xab68a
	cmp r2, r1	@ 000ab68a 8a42
.org 0xab68c
	bne.n 0xab69c	@ 000ab68c 06d1
.org 0xab68e
	adds r1, r5, #0	@ 000ab68e 291c
.org 0xab690
	adds r1, #187	@ 000ab690 bb31
.org 0xab692
	ldrb r0, [r1, #0]	@ 000ab692 0878
.org 0xab694
	adds r0, #1	@ 000ab694 0130
.org 0xab696
	b.n 0xab6a4	@ 000ab696 05e0
.org 0xab698
	.byte 0x14,0x2c,0x86,0x08	@ 000ab698 data
.org 0xab69c
	strb r2, [r0, #0]	@ 000ab69c 0270
.org 0xab69e
	adds r1, r5, #0	@ 000ab69e 291c
