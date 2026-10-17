@ FUN_0804b650  entry 0x0804b650  size 666
.thumb
.org 0x4b650
FUN_0804b650:
	push {r4, r5, lr}	@ 0004b650 30b5
.org 0x4b652
	adds r4, r0, #0	@ 0004b652 041c
.org 0x4b654
	ldr r0, [pc, #128]	@ 0004b654 2048
.org 0x4b656
	movs r1, #232	@ 0004b656 e821
.org 0x4b658
	lsls r1, r1, #1	@ 0004b658 4900
.org 0x4b65a
	adds r0, r0, r1	@ 0004b65a 4018
.org 0x4b65c
	ldrh r1, [r0, #0]	@ 0004b65c 0188
.org 0x4b65e
	movs r0, #127	@ 0004b65e 7f20
.org 0x4b660
	ands r0, r1	@ 0004b660 0840
.org 0x4b662
	cmp r0, #2	@ 0004b662 0228
.org 0x4b664
	beq.n 0x4b6e0	@ 0004b664 3cd0
.org 0x4b666
	ldr r0, [r4, #84]	@ 0004b666 606d
.org 0x4b668
	movs r5, #128	@ 0004b668 8025
.org 0x4b66a
	lsls r5, r5, #3	@ 0004b66a ed00
.org 0x4b66c
	adds r0, r0, r5	@ 0004b66c 4019
.org 0x4b66e
	ldr r1, [r4, #88]	@ 0004b66e a16d
.org 0x4b670
	adds r1, r1, r5	@ 0004b670 4919
.org 0x4b672
	bl 0x4b980	@ 0004b672 00f085f9
.org 0x4b676
	lsls r0, r0, #16	@ 0004b676 0004
.org 0x4b678
	cmp r0, #0	@ 0004b678 0028
.org 0x4b67a
	bne.n 0x4b6e0	@ 0004b67a 31d1
.org 0x4b67c
	ldr r0, [r4, #84]	@ 0004b67c 606d
.org 0x4b67e
	adds r0, r0, r5	@ 0004b67e 4019
.org 0x4b680
	ldr r1, [r4, #88]	@ 0004b680 a16d
.org 0x4b682
	ldr r2, [pc, #88]	@ 0004b682 164a
.org 0x4b684
	adds r1, r1, r2	@ 0004b684 8918
.org 0x4b686
	bl 0x4b980	@ 0004b686 00f07bf9
.org 0x4b68a
	lsls r0, r0, #16	@ 0004b68a 0004
.org 0x4b68c
	cmp r0, #0	@ 0004b68c 0028
.org 0x4b68e
	bne.n 0x4b6e0	@ 0004b68e 27d1
.org 0x4b690
	ldr r0, [r4, #84]	@ 0004b690 606d
.org 0x4b692
	ldr r1, [pc, #72]	@ 0004b692 1249
.org 0x4b694
	adds r0, r0, r1	@ 0004b694 4018
.org 0x4b696
	ldr r1, [r4, #88]	@ 0004b696 a16d
.org 0x4b698
	adds r1, r1, r5	@ 0004b698 4919
.org 0x4b69a
	bl 0x4b980	@ 0004b69a 00f071f9
.org 0x4b69e
	lsls r0, r0, #16	@ 0004b69e 0004
.org 0x4b6a0
	cmp r0, #0	@ 0004b6a0 0028
.org 0x4b6a2
	bne.n 0x4b6e0	@ 0004b6a2 1dd1
.org 0x4b6a4
	ldr r0, [r4, #84]	@ 0004b6a4 606d
.org 0x4b6a6
	ldr r2, [pc, #52]	@ 0004b6a6 0d4a
.org 0x4b6a8
	adds r0, r0, r2	@ 0004b6a8 8018
.org 0x4b6aa
	ldr r1, [r4, #88]	@ 0004b6aa a16d
.org 0x4b6ac
	adds r1, r1, r2	@ 0004b6ac 8918
.org 0x4b6ae
	bl 0x4b980	@ 0004b6ae 00f067f9
.org 0x4b6b2
	lsls r0, r0, #16	@ 0004b6b2 0004
.org 0x4b6b4
	lsrs r2, r0, #16	@ 0004b6b4 020c
.org 0x4b6b6
	cmp r2, #0	@ 0004b6b6 002a
.org 0x4b6b8
	bne.n 0x4b6e0	@ 0004b6b8 12d1
.org 0x4b6ba
	ldrb r1, [r4, #10]	@ 0004b6ba a17a
.org 0x4b6bc
	movs r0, #254	@ 0004b6bc fe20
.org 0x4b6be
	ands r0, r1	@ 0004b6be 0840
.org 0x4b6c0
	movs r1, #253	@ 0004b6c0 fd21
.org 0x4b6c2
	ands r0, r1	@ 0004b6c2 0840
.org 0x4b6c4
	strb r0, [r4, #10]	@ 0004b6c4 a072
.org 0x4b6c6
	adds r0, r4, #0	@ 0004b6c6 201c
.org 0x4b6c8
	adds r0, #140	@ 0004b6c8 8c30
.org 0x4b6ca
	str r2, [r0, #0]	@ 0004b6ca 0260
.org 0x4b6cc
	adds r0, #4	@ 0004b6cc 0430
.org 0x4b6ce
	str r2, [r0, #0]	@ 0004b6ce 0260
.org 0x4b6d0
	adds r0, #4	@ 0004b6d0 0430
.org 0x4b6d2
	strb r2, [r0, #0]	@ 0004b6d2 0270
.org 0x4b6d4
	b.n 0x4b8fc	@ 0004b6d4 12e1
.org 0x4b6d6
	.byte 0x00	@ 0004b6d6 data
.org 0x4b6d7
	.byte 0x00	@ 0004b6d7 data
.org 0x4b6d8
	.byte 0xb0,0x0a,0x00,0x02	@ 0004b6d8 data
.org 0x4b6dc
	.byte 0x00,0xfc,0xff,0xff	@ 0004b6dc data
.org 0x4b6e0
	adds r0, r4, #0	@ 0004b6e0 201c
.org 0x4b6e2
	bl 0x1cff0	@ 0004b6e2 d1f785fc
.org 0x4b6e6
	ldr r1, [r4, #92]	@ 0004b6e6 e16d
.org 0x4b6e8
	cmp r1, #0	@ 0004b6e8 0029
.org 0x4b6ea
	bne.n 0x4b7de	@ 0004b6ea 78d1
.org 0x4b6ec
	ldr r0, [r4, #88]	@ 0004b6ec a06d
.org 0x4b6ee
	ldr r1, [r4, #96]	@ 0004b6ee 216e
.org 0x4b6f0
	adds r1, r0, r1	@ 0004b6f0 4118
.org 0x4b6f2
	str r1, [r4, #88]	@ 0004b6f2 a165
.org 0x4b6f4
	ldr r0, [r4, #100]	@ 0004b6f4 606e
.org 0x4b6f6
	cmp r0, #0	@ 0004b6f6 0028
.org 0x4b6f8
	ble.n 0x4b740	@ 0004b6f8 22dd
.org 0x4b6fa
	ldr r0, [r4, #84]	@ 0004b6fa 606d
.org 0x4b6fc
	bl 0x8868	@ 0004b6fc bdf7b4f8
.org 0x4b700
	ldr r2, [r4, #84]	@ 0004b700 626d
.org 0x4b702
	subs r0, r2, r0	@ 0004b702 101a
.org 0x4b704
	cmp r0, #0	@ 0004b704 0028
.org 0x4b706
	blt.n 0x4b720	@ 0004b706 0bdb
.org 0x4b708
	ldr r1, [r4, #88]	@ 0004b708 a16d
.org 0x4b70a
	adds r0, r2, #0	@ 0004b70a 101c
.org 0x4b70c
	bl 0x8868	@ 0004b70c bdf7acf8
.org 0x4b710
	ldr r1, [r4, #84]	@ 0004b710 616d
.org 0x4b712
	subs r1, r1, r0	@ 0004b712 091a
.org 0x4b714
	ldr r0, [pc, #4]	@ 0004b714 0148
.org 0x4b716
	cmp r1, r0	@ 0004b716 8142
.org 0x4b718
	ble.n 0x4b732	@ 0004b718 0bdd
.org 0x4b71a
	b.n 0x4b784	@ 0004b71a 33e0
.org 0x4b71c
	.byte 0xff,0x03,0x00,0x00	@ 0004b71c data
.org 0x4b720
	ldr r1, [r4, #88]	@ 0004b720 a16d
.org 0x4b722
	adds r0, r2, #0	@ 0004b722 101c
.org 0x4b724
	bl 0x8868	@ 0004b724 bdf7a0f8
.org 0x4b728
	ldr r1, [r4, #84]	@ 0004b728 616d
.org 0x4b72a
	subs r0, r0, r1	@ 0004b72a 401a
.org 0x4b72c
	ldr r1, [pc, #12]	@ 0004b72c 0349
.org 0x4b72e
	cmp r0, r1	@ 0004b72e 8842
.org 0x4b730
	bgt.n 0x4b784	@ 0004b730 28dc
.org 0x4b732
	ldr r0, [r4, #84]	@ 0004b732 606d
.org 0x4b734
	ldr r1, [r4, #88]	@ 0004b734 a16d
.org 0x4b736
	bl 0x8868	@ 0004b736 bdf797f8
.org 0x4b73a
	b.n 0x4b782	@ 0004b73a 22e0
.org 0x4b73c
	.byte 0xff,0x03,0x00,0x00	@ 0004b73c data
.org 0x4b740
	ldr r0, [r4, #84]	@ 0004b740 606d
.org 0x4b742
	bl 0x8988	@ 0004b742 bdf721f9
.org 0x4b746
	ldr r2, [r4, #84]	@ 0004b746 626d
.org 0x4b748
	subs r0, r2, r0	@ 0004b748 101a
.org 0x4b74a
	cmp r0, #0	@ 0004b74a 0028
.org 0x4b74c
	blt.n 0x4b768	@ 0004b74c 0cdb
.org 0x4b74e
	ldr r1, [r4, #88]	@ 0004b74e a16d
.org 0x4b750
	adds r0, r2, #0	@ 0004b750 101c
.org 0x4b752
	bl 0x8988	@ 0004b752 bdf719f9
.org 0x4b756
	ldr r1, [r4, #84]	@ 0004b756 616d
.org 0x4b758
	subs r1, r1, r0	@ 0004b758 091a
.org 0x4b75a
	ldr r0, [pc, #8]	@ 0004b75a 0248
.org 0x4b75c
	cmp r1, r0	@ 0004b75c 8142
.org 0x4b75e
	ble.n 0x4b77a	@ 0004b75e 0cdd
.org 0x4b760
	b.n 0x4b784	@ 0004b760 10e0
.org 0x4b762
	.byte 0x00	@ 0004b762 data
.org 0x4b763
	.byte 0x00	@ 0004b763 data
.org 0x4b764
	.byte 0xff,0x03,0x00,0x00	@ 0004b764 data
.org 0x4b768
	ldr r1, [r4, #88]	@ 0004b768 a16d
.org 0x4b76a
	adds r0, r2, #0	@ 0004b76a 101c
.org 0x4b76c
	bl 0x8988	@ 0004b76c bdf70cf9
.org 0x4b770
	ldr r1, [r4, #84]	@ 0004b770 616d
.org 0x4b772
	subs r0, r0, r1	@ 0004b772 401a
.org 0x4b774
	ldr r1, [pc, #48]	@ 0004b774 0c49
.org 0x4b776
	cmp r0, r1	@ 0004b776 8842
.org 0x4b778
	bgt.n 0x4b784	@ 0004b778 04dc
.org 0x4b77a
	ldr r0, [r4, #84]	@ 0004b77a 606d
.org 0x4b77c
	ldr r1, [r4, #88]	@ 0004b77c a16d
.org 0x4b77e
	bl 0x8988	@ 0004b77e bdf703f9
.org 0x4b782
	str r0, [r4, #84]	@ 0004b782 6065
.org 0x4b784
	ldr r0, [r4, #84]	@ 0004b784 606d
.org 0x4b786
	ldr r1, [r4, #88]	@ 0004b786 a16d
.org 0x4b788
	bl 0x4b980	@ 0004b788 00f0faf8
.org 0x4b78c
	lsls r0, r0, #16	@ 0004b78c 0004
.org 0x4b78e
	cmp r0, #0	@ 0004b78e 0028
.org 0x4b790
	beq.n 0x4b7ac	@ 0004b790 0cd0
.org 0x4b792
	ldr r0, [r4, #100]	@ 0004b792 606e
.org 0x4b794
	lsls r0, r0, #10	@ 0004b794 8002
.org 0x4b796
	negs r0, r0	@ 0004b796 4042
.org 0x4b798
	str r0, [r4, #92]	@ 0004b798 e065
.org 0x4b79a
	ldr r0, [r4, #96]	@ 0004b79a 206e
.org 0x4b79c
	cmp r0, #0	@ 0004b79c 0028
.org 0x4b79e
	bgt.n 0x4b7d4	@ 0004b79e 19dc
.org 0x4b7a0
	movs r0, #1	@ 0004b7a0 0120
.org 0x4b7a2
	negs r0, r0	@ 0004b7a2 4042
.org 0x4b7a4
	b.n 0x4b7d6	@ 0004b7a4 17e0
.org 0x4b7a6
	.byte 0x00	@ 0004b7a6 data
.org 0x4b7a7
	.byte 0x00	@ 0004b7a7 data
.org 0x4b7a8
	.byte 0xff,0x03,0x00,0x00	@ 0004b7a8 data
.org 0x4b7ac
	ldr r1, [r4, #100]	@ 0004b7ac 616e
.org 0x4b7ae
	lsls r1, r1, #8	@ 0004b7ae 0902
.org 0x4b7b0
	ldr r0, [r4, #84]	@ 0004b7b0 606d
.org 0x4b7b2
	adds r0, r0, r1	@ 0004b7b2 4018
.org 0x4b7b4
	ldr r1, [r4, #88]	@ 0004b7b4 a16d
.org 0x4b7b6
	bl 0x4b980	@ 0004b7b6 00f0e3f8
.org 0x4b7ba
	lsls r0, r0, #16	@ 0004b7ba 0004
.org 0x4b7bc
	cmp r0, #0	@ 0004b7bc 0028
.org 0x4b7be
	beq.n 0x4b7c2	@ 0004b7be 00d0
.org 0x4b7c0
	b.n 0x4b8c6	@ 0004b7c0 81e0
.org 0x4b7c2
	ldr r0, [r4, #100]	@ 0004b7c2 606e
.org 0x4b7c4
	lsls r0, r0, #10	@ 0004b7c4 8002
.org 0x4b7c6
	str r0, [r4, #92]	@ 0004b7c6 e065
.org 0x4b7c8
	ldr r0, [r4, #96]	@ 0004b7c8 206e
.org 0x4b7ca
	cmp r0, #0	@ 0004b7ca 0028
.org 0x4b7cc
	ble.n 0x4b7d4	@ 0004b7cc 02dd
.org 0x4b7ce
	movs r0, #1	@ 0004b7ce 0120
.org 0x4b7d0
	negs r0, r0	@ 0004b7d0 4042
.org 0x4b7d2
	b.n 0x4b7d6	@ 0004b7d2 00e0
.org 0x4b7d4
	movs r0, #1	@ 0004b7d4 0120
.org 0x4b7d6
	str r0, [r4, #104]	@ 0004b7d6 a066
.org 0x4b7d8
	movs r0, #0	@ 0004b7d8 0020
.org 0x4b7da
	str r0, [r4, #96]	@ 0004b7da 2066
.org 0x4b7dc
	b.n 0x4b8c6	@ 0004b7dc 73e0
.org 0x4b7de
	ldr r0, [r4, #84]	@ 0004b7de 606d
.org 0x4b7e0
	adds r2, r0, r1	@ 0004b7e0 4218
.org 0x4b7e2
	str r2, [r4, #84]	@ 0004b7e2 6265
.org 0x4b7e4
	ldr r0, [r4, #104]	@ 0004b7e4 a06e
.org 0x4b7e6
	cmp r0, #0	@ 0004b7e6 0028
.org 0x4b7e8
	ble.n 0x4b830	@ 0004b7e8 22dd
.org 0x4b7ea
	ldr r1, [r4, #88]	@ 0004b7ea a16d
.org 0x4b7ec
	adds r0, r2, #0	@ 0004b7ec 101c
.org 0x4b7ee
	bl 0x8534	@ 0004b7ee bcf7a1fe
.org 0x4b7f2
	ldr r1, [r4, #88]	@ 0004b7f2 a16d
.org 0x4b7f4
	subs r0, r1, r0	@ 0004b7f4 081a
.org 0x4b7f6
	cmp r0, #0	@ 0004b7f6 0028
.org 0x4b7f8
	blt.n 0x4b810	@ 0004b7f8 0adb
.org 0x4b7fa
	ldr r0, [r4, #84]	@ 0004b7fa 606d
.org 0x4b7fc
	bl 0x8534	@ 0004b7fc bcf79afe
.org 0x4b800
	ldr r1, [r4, #88]	@ 0004b800 a16d
.org 0x4b802
	subs r1, r1, r0	@ 0004b802 091a
.org 0x4b804
	ldr r0, [pc, #4]	@ 0004b804 0148
.org 0x4b806
	cmp r1, r0	@ 0004b806 8142
.org 0x4b808
	ble.n 0x4b820	@ 0004b808 0add
.org 0x4b80a
	b.n 0x4b872	@ 0004b80a 32e0
.org 0x4b80c
	.byte 0xff,0x03,0x00,0x00	@ 0004b80c data
.org 0x4b810
	ldr r0, [r4, #84]	@ 0004b810 606d
.org 0x4b812
	bl 0x8534	@ 0004b812 bcf78ffe
.org 0x4b816
	ldr r1, [r4, #88]	@ 0004b816 a16d
.org 0x4b818
	subs r0, r0, r1	@ 0004b818 401a
.org 0x4b81a
	ldr r1, [pc, #16]	@ 0004b81a 0449
.org 0x4b81c
	cmp r0, r1	@ 0004b81c 8842
.org 0x4b81e
	bgt.n 0x4b872	@ 0004b81e 28dc
.org 0x4b820
	ldr r0, [r4, #84]	@ 0004b820 606d
.org 0x4b822
	ldr r1, [r4, #88]	@ 0004b822 a16d
.org 0x4b824
	bl 0x8534	@ 0004b824 bcf786fe
.org 0x4b828
	b.n 0x4b870	@ 0004b828 22e0
.org 0x4b82a
	.byte 0x00	@ 0004b82a data
.org 0x4b82b
	.byte 0x00	@ 0004b82b data
.org 0x4b82c
	.byte 0xff,0x03,0x00,0x00	@ 0004b82c data
.org 0x4b830
	ldr r1, [r4, #88]	@ 0004b830 a16d
.org 0x4b832
	adds r0, r2, #0	@ 0004b832 101c
.org 0x4b834
	bl 0x8748	@ 0004b834 bcf788ff
.org 0x4b838
	ldr r1, [r4, #88]	@ 0004b838 a16d
.org 0x4b83a
	subs r0, r1, r0	@ 0004b83a 081a
.org 0x4b83c
	cmp r0, #0	@ 0004b83c 0028
.org 0x4b83e
	blt.n 0x4b858	@ 0004b83e 0bdb
.org 0x4b840
	ldr r0, [r4, #84]	@ 0004b840 606d
.org 0x4b842
	bl 0x8748	@ 0004b842 bcf781ff
.org 0x4b846
	ldr r1, [r4, #88]	@ 0004b846 a16d
.org 0x4b848
	subs r1, r1, r0	@ 0004b848 091a
.org 0x4b84a
	ldr r0, [pc, #8]	@ 0004b84a 0248
.org 0x4b84c
	cmp r1, r0	@ 0004b84c 8142
.org 0x4b84e
	ble.n 0x4b868	@ 0004b84e 0bdd
.org 0x4b850
	b.n 0x4b872	@ 0004b850 0fe0
.org 0x4b852
	.byte 0x00	@ 0004b852 data
.org 0x4b853
	.byte 0x00	@ 0004b853 data
.org 0x4b854
	.byte 0xff,0x03,0x00,0x00	@ 0004b854 data
.org 0x4b858
	ldr r0, [r4, #84]	@ 0004b858 606d
.org 0x4b85a
	bl 0x8748	@ 0004b85a bcf775ff
.org 0x4b85e
	ldr r1, [r4, #88]	@ 0004b85e a16d
.org 0x4b860
	subs r0, r0, r1	@ 0004b860 401a
.org 0x4b862
	ldr r1, [pc, #48]	@ 0004b862 0c49
.org 0x4b864
	cmp r0, r1	@ 0004b864 8842
.org 0x4b866
	bgt.n 0x4b872	@ 0004b866 04dc
.org 0x4b868
	ldr r0, [r4, #84]	@ 0004b868 606d
.org 0x4b86a
	ldr r1, [r4, #88]	@ 0004b86a a16d
.org 0x4b86c
	bl 0x8748	@ 0004b86c bcf76cff
.org 0x4b870
	str r0, [r4, #88]	@ 0004b870 a065
.org 0x4b872
	ldr r0, [r4, #84]	@ 0004b872 606d
.org 0x4b874
	ldr r1, [r4, #88]	@ 0004b874 a16d
.org 0x4b876
	bl 0x4b980	@ 0004b876 00f083f8
.org 0x4b87a
	lsls r0, r0, #16	@ 0004b87a 0004
.org 0x4b87c
	cmp r0, #0	@ 0004b87c 0028
.org 0x4b87e
	beq.n 0x4b898	@ 0004b87e 0bd0
.org 0x4b880
	ldr r0, [r4, #104]	@ 0004b880 a06e
.org 0x4b882
	lsls r0, r0, #10	@ 0004b882 8002
.org 0x4b884
	negs r0, r0	@ 0004b884 4042
.org 0x4b886
	str r0, [r4, #96]	@ 0004b886 2066
.org 0x4b888
	ldr r0, [r4, #92]	@ 0004b888 e06d
.org 0x4b88a
	cmp r0, #0	@ 0004b88a 0028
.org 0x4b88c
	bgt.n 0x4b8be	@ 0004b88c 17dc
.org 0x4b88e
	movs r0, #1	@ 0004b88e 0120
.org 0x4b890
	negs r0, r0	@ 0004b890 4042
.org 0x4b892
	b.n 0x4b8c0	@ 0004b892 15e0
.org 0x4b894
	.byte 0xff,0x03,0x00,0x00	@ 0004b894 data
.org 0x4b898
	ldr r0, [r4, #84]	@ 0004b898 606d
.org 0x4b89a
	ldr r2, [r4, #104]	@ 0004b89a a26e
.org 0x4b89c
	lsls r2, r2, #8	@ 0004b89c 1202
.org 0x4b89e
	ldr r1, [r4, #88]	@ 0004b89e a16d
.org 0x4b8a0
	adds r1, r1, r2	@ 0004b8a0 8918
.org 0x4b8a2
	bl 0x4b980	@ 0004b8a2 00f06df8
.org 0x4b8a6
	lsls r0, r0, #16	@ 0004b8a6 0004
.org 0x4b8a8
	cmp r0, #0	@ 0004b8a8 0028
.org 0x4b8aa
	bne.n 0x4b8c6	@ 0004b8aa 0cd1
.org 0x4b8ac
	ldr r0, [r4, #104]	@ 0004b8ac a06e
.org 0x4b8ae
	lsls r0, r0, #10	@ 0004b8ae 8002
.org 0x4b8b0
	str r0, [r4, #96]	@ 0004b8b0 2066
.org 0x4b8b2
	ldr r0, [r4, #92]	@ 0004b8b2 e06d
.org 0x4b8b4
	cmp r0, #0	@ 0004b8b4 0028
.org 0x4b8b6
	ble.n 0x4b8be	@ 0004b8b6 02dd
.org 0x4b8b8
	movs r0, #1	@ 0004b8b8 0120
.org 0x4b8ba
	negs r0, r0	@ 0004b8ba 4042
.org 0x4b8bc
	b.n 0x4b8c0	@ 0004b8bc 00e0
.org 0x4b8be
	movs r0, #1	@ 0004b8be 0120
.org 0x4b8c0
	str r0, [r4, #100]	@ 0004b8c0 6066
.org 0x4b8c2
	movs r0, #0	@ 0004b8c2 0020
.org 0x4b8c4
	str r0, [r4, #92]	@ 0004b8c4 e065
.org 0x4b8c6
	ldrb r0, [r4, #18]	@ 0004b8c6 a07c
.org 0x4b8c8
	subs r0, #1	@ 0004b8c8 0138
.org 0x4b8ca
	movs r3, #0	@ 0004b8ca 0023
.org 0x4b8cc
	strb r0, [r4, #18]	@ 0004b8cc a074
.org 0x4b8ce
	lsls r0, r0, #24	@ 0004b8ce 0006
.org 0x4b8d0
	lsrs r0, r0, #24	@ 0004b8d0 000e
.org 0x4b8d2
	adds r2, r4, #0	@ 0004b8d2 221c
.org 0x4b8d4
	adds r2, #140	@ 0004b8d4 8c32
.org 0x4b8d6
	cmp r0, #255	@ 0004b8d6 ff28
.org 0x4b8d8
	beq.n 0x4b8e4	@ 0004b8d8 04d0
.org 0x4b8da
	ldr r0, [r2, #0]	@ 0004b8da 1068
.org 0x4b8dc
	movs r1, #4	@ 0004b8dc 0421
.org 0x4b8de
	ands r0, r1	@ 0004b8de 0840
.org 0x4b8e0
	cmp r0, #0	@ 0004b8e0 0028
.org 0x4b8e2
	beq.n 0x4b916	@ 0004b8e2 18d0
.org 0x4b8e4
	ldrb r1, [r4, #10]	@ 0004b8e4 a17a
.org 0x4b8e6
	movs r0, #254	@ 0004b8e6 fe20
.org 0x4b8e8
	ands r0, r1	@ 0004b8e8 0840
