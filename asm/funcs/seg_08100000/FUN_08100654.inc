@ FUN_08100654  entry 0x08100654  size 476
.thumb
.org 0x100654
FUN_08100654:
	push {r4, r5, r6, r7, lr}	@ 00100654 f0b5
.org 0x100656
	adds r4, r0, #0	@ 00100656 041c
.org 0x100658
	adds r2, r4, #0	@ 00100658 221c
.org 0x10065a
	adds r2, #180	@ 0010065a b432
.org 0x10065c
	movs r3, #0	@ 0010065c 0023
.org 0x10065e
	strb r3, [r2, #0]	@ 0010065e 1370
.org 0x100660
	adds r1, r4, #0	@ 00100660 211c
.org 0x100662
	adds r1, #181	@ 00100662 b531
.org 0x100664
	ldrb r0, [r1, #0]	@ 00100664 0878
.org 0x100666
	cmp r0, #95	@ 00100666 5f28
.org 0x100668
	bls.n 0x100674	@ 00100668 04d9
.org 0x10066a
	movs r0, #1	@ 0010066a 0120
.org 0x10066c
	strb r0, [r2, #0]	@ 0010066c 1070
.org 0x10066e
	ldrb r0, [r1, #0]	@ 0010066e 0878
.org 0x100670
	subs r0, #96	@ 00100670 6038
.org 0x100672
	strb r0, [r1, #0]	@ 00100672 0870
.org 0x100674
	adds r0, r4, #0	@ 00100674 201c
.org 0x100676
	adds r0, #181	@ 00100676 b530
.org 0x100678
	ldrb r1, [r0, #0]	@ 00100678 0178
.org 0x10067a
	movs r3, #0	@ 0010067a 0023
.org 0x10067c
	strb r1, [r4, #19]	@ 0010067c e174
.org 0x10067e
	ldrb r1, [r0, #0]	@ 0010067e 0178
.org 0x100680
	adds r5, r0, #0	@ 00100680 051c
.org 0x100682
	cmp r1, #31	@ 00100682 1f29
.org 0x100684
	bhi.n 0x1006e6	@ 00100684 2fd8
.org 0x100686
	movs r0, #33	@ 00100686 2120
.org 0x100688
	subs r0, r0, r1	@ 00100688 401a
.org 0x10068a
	strb r0, [r4, #18]	@ 0010068a a074
.org 0x10068c
	strb r3, [r4, #13]	@ 0010068c 6373
.org 0x10068e
	movs r3, #1	@ 0010068e 0123
.org 0x100690
	strb r3, [r4, #14]	@ 00100690 a373
.org 0x100692
	ldrb r0, [r5, #0]	@ 00100692 2878
.org 0x100694
	adds r1, r0, #0	@ 00100694 011c
.org 0x100696
	cmp r1, #15	@ 00100696 0f29
.org 0x100698
	bls.n 0x1006b2	@ 00100698 0bd9
.org 0x10069a
	cmp r1, #25	@ 0010069a 1929
.org 0x10069c
	bhi.n 0x1006ae	@ 0010069c 07d8
.org 0x10069e
	subs r0, #16	@ 0010069e 1038
.org 0x1006a0
	strb r0, [r5, #0]	@ 001006a0 2870
.org 0x1006a2
	adds r2, r4, #0	@ 001006a2 221c
.org 0x1006a4
	adds r2, #182	@ 001006a4 b632
.org 0x1006a6
	movs r0, #8	@ 001006a6 0820
.org 0x1006a8
	strb r0, [r2, #0]	@ 001006a8 1070
.org 0x1006aa
	ldrb r0, [r5, #0]	@ 001006aa 2878
.org 0x1006ac
	b.n 0x1006c2	@ 001006ac 09e0
.org 0x1006ae
	subs r0, #26	@ 001006ae 1a38
.org 0x1006b0
	strb r0, [r5, #0]	@ 001006b0 2870
.org 0x1006b2
	ldrb r0, [r5, #0]	@ 001006b2 2878
.org 0x1006b4
	lsrs r0, r0, #1	@ 001006b4 4008
.org 0x1006b6
	adds r2, r4, #0	@ 001006b6 221c
.org 0x1006b8
	adds r2, #182	@ 001006b8 b632
.org 0x1006ba
	strb r0, [r2, #0]	@ 001006ba 1070
.org 0x1006bc
	ldrb r1, [r5, #0]	@ 001006bc 2978
.org 0x1006be
	adds r0, r3, #0	@ 001006be 181c
.org 0x1006c0
	ands r0, r1	@ 001006c0 0840
.org 0x1006c2
	adds r0, #1	@ 001006c2 0130
.org 0x1006c4
	adds r1, r4, #0	@ 001006c4 211c
.org 0x1006c6
	adds r1, #183	@ 001006c6 b731
.org 0x1006c8
	strb r0, [r1, #0]	@ 001006c8 0870
.org 0x1006ca
	adds r3, r1, #0	@ 001006ca 0b1c
.org 0x1006cc
	adds r0, r4, #0	@ 001006cc 201c
.org 0x1006ce
	adds r0, #180	@ 001006ce b430
.org 0x1006d0
	ldrb r1, [r0, #0]	@ 001006d0 0178
.org 0x1006d2
	movs r6, #190	@ 001006d2 be26
.org 0x1006d4
	lsls r6, r6, #8	@ 001006d4 3602
.org 0x1006d6
	adds r0, r6, #0	@ 001006d6 301c
.org 0x1006d8
	orrs r1, r0	@ 001006d8 0143
.org 0x1006da
	ldrb r2, [r2, #0]	@ 001006da 1278
.org 0x1006dc
	ldrb r3, [r3, #0]	@ 001006dc 1b78
.org 0x1006de
	adds r0, r4, #0	@ 001006de 201c
.org 0x1006e0
	bl 0x1cfc8	@ 001006e0 1cf772fc
.org 0x1006e4
	b.n 0x100834	@ 001006e4 a6e0
.org 0x1006e6
	movs r6, #1	@ 001006e6 0126
.org 0x1006e8
	strb r6, [r4, #13]	@ 001006e8 6673
.org 0x1006ea
	ldrb r1, [r5, #0]	@ 001006ea 2978
.org 0x1006ec
	adds r0, r1, #0	@ 001006ec 081c
.org 0x1006ee
	subs r0, #32	@ 001006ee 2038
.org 0x1006f0
	strb r0, [r5, #0]	@ 001006f0 2870
.org 0x1006f2
	lsls r0, r0, #24	@ 001006f2 0006
.org 0x1006f4
	lsrs r0, r0, #24	@ 001006f4 000e
.org 0x1006f6
	cmp r0, #1	@ 001006f6 0128
.org 0x1006f8
	bhi.n 0x100734	@ 001006f8 1cd8
.org 0x1006fa
	adds r2, r4, #0	@ 001006fa 221c
.org 0x1006fc
	adds r2, #182	@ 001006fc b632
.org 0x1006fe
	strb r3, [r2, #0]	@ 001006fe 1370
.org 0x100700
	ldrb r0, [r5, #0]	@ 00100700 2878
.org 0x100702
	adds r0, #1	@ 00100702 0130
.org 0x100704
	adds r3, r4, #0	@ 00100704 231c
.org 0x100706
	adds r3, #183	@ 00100706 b733
.org 0x100708
	strb r0, [r3, #0]	@ 00100708 1870
.org 0x10070a
	ldrb r1, [r5, #0]	@ 0010070a 2978
.org 0x10070c
	movs r0, #52	@ 0010070c 3420
.org 0x10070e
	subs r0, r0, r1	@ 0010070e 401a
.org 0x100710
	strb r0, [r4, #18]	@ 00100710 a074
.org 0x100712
	adds r0, r4, #0	@ 00100712 201c
.org 0x100714
	adds r0, #180	@ 00100714 b430
.org 0x100716
	ldr r7, [pc, #24]	@ 00100716 064f
.org 0x100718
	adds r1, r7, #0	@ 00100718 391c
.org 0x10071a
	ldrb r0, [r0, #0]	@ 0010071a 0078
.org 0x10071c
	adds r1, r1, r0	@ 0010071c 0918
.org 0x10071e
	lsls r1, r1, #16	@ 0010071e 0904
.org 0x100720
	lsrs r1, r1, #16	@ 00100720 090c
.org 0x100722
	ldrb r2, [r2, #0]	@ 00100722 1278
.org 0x100724
	ldrb r3, [r3, #0]	@ 00100724 1b78
.org 0x100726
	adds r0, r4, #0	@ 00100726 201c
.org 0x100728
	bl 0x1cfc8	@ 00100728 1cf74efc
.org 0x10072c
	strb r6, [r4, #14]	@ 0010072c a673
.org 0x10072e
	b.n 0x100834	@ 0010072e 81e0
.org 0x100730
	.byte 0x04,0xbe,0x00,0x00	@ 00100730 data
.org 0x100734
	cmp r0, #53	@ 00100734 3528
.org 0x100736
	bhi.n 0x100788	@ 00100736 27d8
.org 0x100738
	adds r0, r1, #0	@ 00100738 081c
.org 0x10073a
	subs r0, #34	@ 0010073a 2238
.org 0x10073c
	strb r0, [r5, #0]	@ 0010073c 2870
.org 0x10073e
	ldrb r0, [r5, #0]	@ 0010073e 2878
.org 0x100740
	lsrs r0, r0, #1	@ 00100740 4008
.org 0x100742
	movs r1, #3	@ 00100742 0321
.org 0x100744
	ands r0, r1	@ 00100744 0840
.org 0x100746
	adds r0, #1	@ 00100746 0130
.org 0x100748
	adds r2, r4, #0	@ 00100748 221c
.org 0x10074a
	adds r2, #182	@ 0010074a b632
.org 0x10074c
	strb r0, [r2, #0]	@ 0010074c 1070
.org 0x10074e
	ldrb r1, [r5, #0]	@ 0010074e 2978
.org 0x100750
	adds r0, r6, #0	@ 00100750 301c
.org 0x100752
	ands r0, r1	@ 00100752 0840
.org 0x100754
	adds r0, #1	@ 00100754 0130
.org 0x100756
	adds r3, r4, #0	@ 00100756 231c
.org 0x100758
	adds r3, #183	@ 00100758 b733
.org 0x10075a
	strb r0, [r3, #0]	@ 0010075a 1870
.org 0x10075c
	adds r0, r4, #0	@ 0010075c 201c
.org 0x10075e
	adds r0, #180	@ 0010075e b430
.org 0x100760
	ldr r7, [pc, #32]	@ 00100760 084f
.org 0x100762
	adds r1, r7, #0	@ 00100762 391c
.org 0x100764
	ldrb r0, [r0, #0]	@ 00100764 0078
.org 0x100766
	adds r1, r1, r0	@ 00100766 0918
.org 0x100768
	lsls r1, r1, #16	@ 00100768 0904
.org 0x10076a
	lsrs r1, r1, #16	@ 0010076a 090c
.org 0x10076c
	ldrb r2, [r2, #0]	@ 0010076c 1278
.org 0x10076e
	ldrb r3, [r3, #0]	@ 0010076e 1b78
.org 0x100770
	adds r0, r4, #0	@ 00100770 201c
.org 0x100772
	bl 0x1cfc8	@ 00100772 1cf729fc
.org 0x100776
	ldrb r1, [r5, #0]	@ 00100776 2978
.org 0x100778
	movs r0, #52	@ 00100778 3420
.org 0x10077a
	subs r0, r0, r1	@ 0010077a 401a
.org 0x10077c
	strb r0, [r4, #18]	@ 0010077c a074
.org 0x10077e
	strb r6, [r4, #14]	@ 0010077e a673
.org 0x100780
	b.n 0x100834	@ 00100780 58e0
.org 0x100782
	.byte 0x00	@ 00100782 data
.org 0x100783
	.byte 0x00	@ 00100783 data
.org 0x100784
	.byte 0x04,0xbe,0x00,0x00	@ 00100784 data
.org 0x100788
	cmp r0, #58	@ 00100788 3a28
.org 0x10078a
	bhi.n 0x1007d0	@ 0010078a 21d8
.org 0x10078c
	adds r0, r1, #0	@ 0010078c 081c
.org 0x10078e
	subs r0, #86	@ 0010078e 5638
.org 0x100790
	strb r0, [r5, #0]	@ 00100790 2870
.org 0x100792
	ldrb r0, [r5, #0]	@ 00100792 2878
.org 0x100794
	lsrs r0, r0, #1	@ 00100794 4008
.org 0x100796
	adds r2, r4, #0	@ 00100796 221c
.org 0x100798
	adds r2, #182	@ 00100798 b632
.org 0x10079a
	strb r0, [r2, #0]	@ 0010079a 1070
.org 0x10079c
	ldrb r1, [r5, #0]	@ 0010079c 2978
.org 0x10079e
	adds r0, r6, #0	@ 0010079e 301c
.org 0x1007a0
	ands r0, r1	@ 001007a0 0840
.org 0x1007a2
	adds r0, #1	@ 001007a2 0130
.org 0x1007a4
	adds r3, r4, #0	@ 001007a4 231c
.org 0x1007a6
	adds r3, #183	@ 001007a6 b733
.org 0x1007a8
	strb r0, [r3, #0]	@ 001007a8 1870
.org 0x1007aa
	movs r0, #255	@ 001007aa ff20
.org 0x1007ac
	strb r0, [r4, #18]	@ 001007ac a074
.org 0x1007ae
	adds r0, r4, #0	@ 001007ae 201c
.org 0x1007b0
	adds r0, #180	@ 001007b0 b430
.org 0x1007b2
	ldr r6, [pc, #24]	@ 001007b2 064e
.org 0x1007b4
	adds r1, r6, #0	@ 001007b4 311c
.org 0x1007b6
	ldrb r0, [r0, #0]	@ 001007b6 0078
.org 0x1007b8
	adds r1, r1, r0	@ 001007b8 0918
.org 0x1007ba
	lsls r1, r1, #16	@ 001007ba 0904
.org 0x1007bc
	lsrs r1, r1, #16	@ 001007bc 090c
.org 0x1007be
	ldrb r2, [r2, #0]	@ 001007be 1278
.org 0x1007c0
	ldrb r3, [r3, #0]	@ 001007c0 1b78
.org 0x1007c2
	adds r0, r4, #0	@ 001007c2 201c
.org 0x1007c4
	bl 0x1cfc8	@ 001007c4 1cf700fc
.org 0x1007c8
	movs r0, #2	@ 001007c8 0220
.org 0x1007ca
	b.n 0x100832	@ 001007ca 32e0
.org 0x1007cc
	.byte 0x06,0xbe,0x00,0x00	@ 001007cc data
.org 0x1007d0
	adds r0, r1, #0	@ 001007d0 081c
.org 0x1007d2
	subs r0, #91	@ 001007d2 5b38
.org 0x1007d4
	strb r0, [r5, #0]	@ 001007d4 2870
.org 0x1007d6
	adds r2, r4, #0	@ 001007d6 221c
.org 0x1007d8
	adds r2, #180	@ 001007d8 b432
.org 0x1007da
	ldrb r0, [r2, #0]	@ 001007da 1078
.org 0x1007dc
	adds r0, #1	@ 001007dc 0130
.org 0x1007de
	movs r1, #1	@ 001007de 0121
.org 0x1007e0
	ands r0, r1	@ 001007e0 0840
.org 0x1007e2
	strb r0, [r2, #0]	@ 001007e2 1070
.org 0x1007e4
	ldrb r3, [r5, #0]	@ 001007e4 2b78
.org 0x1007e6
	adds r0, r3, #0	@ 001007e6 181c
.org 0x1007e8
	adds r7, r2, #0	@ 001007e8 171c
.org 0x1007ea
	cmp r0, #0	@ 001007ea 0028
.org 0x1007ec
	beq.n 0x1007f2	@ 001007ec 01d0
.org 0x1007ee
	cmp r0, #4	@ 001007ee 0428
.org 0x1007f0
	bne.n 0x100806	@ 001007f0 09d1
.org 0x1007f2
	adds r0, r4, #0	@ 001007f2 201c
.org 0x1007f4
	adds r0, #183	@ 001007f4 b730
.org 0x1007f6
	strb r6, [r0, #0]	@ 001007f6 0670
.org 0x1007f8
	ldrb r1, [r5, #0]	@ 001007f8 2978
.org 0x1007fa
	lsrs r1, r1, #1	@ 001007fa 4908
.org 0x1007fc
	adds r2, r4, #0	@ 001007fc 221c
.org 0x1007fe
	adds r2, #182	@ 001007fe b632
.org 0x100800
	strb r1, [r2, #0]	@ 00100800 1170
.org 0x100802
	adds r3, r0, #0	@ 00100802 031c
.org 0x100804
	b.n 0x100816	@ 00100804 07e0
.org 0x100806
	adds r1, r4, #0	@ 00100806 211c
.org 0x100808
	adds r1, #183	@ 00100808 b731
.org 0x10080a
	strb r3, [r1, #0]	@ 0010080a 0b70
.org 0x10080c
	adds r0, r4, #0	@ 0010080c 201c
.org 0x10080e
	adds r0, #182	@ 0010080e b630
.org 0x100810
	strb r6, [r0, #0]	@ 00100810 0670
.org 0x100812
	adds r2, r0, #0	@ 00100812 021c
.org 0x100814
	adds r3, r1, #0	@ 00100814 0b1c
.org 0x100816
	ldr r0, [pc, #40]	@ 00100816 0a48
.org 0x100818
	adds r1, r0, #0	@ 00100818 011c
.org 0x10081a
	ldrb r7, [r7, #0]	@ 0010081a 3f78
.org 0x10081c
	adds r1, r1, r7	@ 0010081c c919
.org 0x10081e
	lsls r1, r1, #16	@ 0010081e 0904
.org 0x100820
	lsrs r1, r1, #16	@ 00100820 090c
.org 0x100822
	ldrb r2, [r2, #0]	@ 00100822 1278
.org 0x100824
	ldrb r3, [r3, #0]	@ 00100824 1b78
.org 0x100826
	adds r0, r4, #0	@ 00100826 201c
.org 0x100828
	bl 0x1cfc8	@ 00100828 1cf7cefb
.org 0x10082c
	movs r0, #255	@ 0010082c ff20
.org 0x10082e
	strb r0, [r4, #18]	@ 0010082e a074
