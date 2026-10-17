@ FUN_08006610  entry 0x08006610  size 504
.thumb
.org 0x6610
FUN_08006610:
	push {r4, r5, r6, r7, lr}	@ 00006610 f0b5
.org 0x6612
	mov r7, sl	@ 00006612 5746
.org 0x6614
	mov r6, r9	@ 00006614 4e46
.org 0x6616
	mov r5, r8	@ 00006616 4546
.org 0x6618
	push {r5, r6, r7}	@ 00006618 e0b4
.org 0x661a
	sub sp, #16	@ 0000661a 84b0
.org 0x661c
	mov r8, r0	@ 0000661c 8046
.org 0x661e
	mov r9, r1	@ 0000661e 8946
.org 0x6620
	ldr r7, [r0, #8]	@ 00006620 8768
.org 0x6622
	ldr r0, [r1, #8]	@ 00006622 8868
.org 0x6624
	mov sl, r0	@ 00006624 8246
.org 0x6626
	ldr r0, [r7, #24]	@ 00006626 b869
.org 0x6628
	movs r1, #128	@ 00006628 8021
.org 0x662a
	lsls r1, r1, #1	@ 0000662a 4900
.org 0x662c
	ands r0, r1	@ 0000662c 0840
.org 0x662e
	cmp r0, #0	@ 0000662e 0028
.org 0x6630
	beq.n 0x665c	@ 00006630 14d0
.org 0x6632
	mov r1, r9	@ 00006632 4946
.org 0x6634
	ldrh r5, [r1, #20]	@ 00006634 8d8a
.org 0x6636
	ldr r4, [r1, #12]	@ 00006636 cc68
.org 0x6638
	subs r2, r4, r5	@ 00006638 621b
.org 0x663a
	ldr r1, [r7, #8]	@ 0000663a b968
.org 0x663c
	movs r3, #52	@ 0000663c 3423
.org 0x663e
	ldrsh r0, [r7, r3]	@ 0000663e f85e
.org 0x6640
	lsls r0, r0, #8	@ 00006640 0002
.org 0x6642
	ldr r3, [r1, #0]	@ 00006642 0b68
.org 0x6644
	adds r0, r3, r0	@ 00006644 1818
.org 0x6646
	cmp r2, r0	@ 00006646 8242
.org 0x6648
	ble.n 0x664c	@ 00006648 00dd
.org 0x664a
	b.n 0x67f8	@ 0000664a d5e0
.org 0x664c
	adds r1, r4, r5	@ 0000664c 6119
.org 0x664e
	movs r2, #50	@ 0000664e 3222
.org 0x6650
	ldrsh r0, [r7, r2]	@ 00006650 b85e
.org 0x6652
	lsls r0, r0, #8	@ 00006652 0002
.org 0x6654
	adds r0, r3, r0	@ 00006654 1818
.org 0x6656
	cmp r1, r0	@ 00006656 8142
.org 0x6658
	bge.n 0x665c	@ 00006658 00da
.org 0x665a
	b.n 0x67f8	@ 0000665a cde0
.org 0x665c
	movs r0, #0	@ 0000665c 0020
.org 0x665e
	str r0, [r7, #20]	@ 0000665e 7861
.org 0x6660
	mov r3, sl	@ 00006660 5346
.org 0x6662
	str r0, [r3, #20]	@ 00006662 5861
.org 0x6664
	mov r1, r8	@ 00006664 4146
.org 0x6666
	ldr r0, [r1, #4]	@ 00006666 4868
.org 0x6668
	str r0, [r7, #4]	@ 00006668 7860
.org 0x666a
	mov r2, r9	@ 0000666a 4a46
.org 0x666c
	ldr r0, [r2, #4]	@ 0000666c 5068
.org 0x666e
	str r0, [r3, #4]	@ 0000666e 5860
.org 0x6670
	adds r2, r7, #0	@ 00006670 3a1c
.org 0x6672
	adds r2, #54	@ 00006672 3632
.org 0x6674
	ldrb r1, [r2, #0]	@ 00006674 1178
.org 0x6676
	movs r4, #1	@ 00006676 0124
.org 0x6678
	adds r0, r4, #0	@ 00006678 201c
.org 0x667a
	ands r0, r1	@ 0000667a 0840
.org 0x667c
	cmp r0, #0	@ 0000667c 0028
.org 0x667e
	bne.n 0x668c	@ 0000667e 05d1
.org 0x6680
	mov r3, r8	@ 00006680 4346
.org 0x6682
	ldr r0, [r3, #4]	@ 00006682 5868
.org 0x6684
	ldrb r0, [r0, #3]	@ 00006684 c078
.org 0x6686
	adds r1, r7, #0	@ 00006686 391c
.org 0x6688
	adds r1, #55	@ 00006688 3731
.org 0x668a
	strb r0, [r1, #0]	@ 0000668a 0870
.org 0x668c
	ldrb r1, [r2, #0]	@ 0000668c 1178
.org 0x668e
	movs r5, #2	@ 0000668e 0225
.org 0x6690
	adds r0, r5, #0	@ 00006690 281c
.org 0x6692
	ands r0, r1	@ 00006692 0840
.org 0x6694
	cmp r0, #0	@ 00006694 0028
.org 0x6696
	bne.n 0x66a4	@ 00006696 05d1
.org 0x6698
	mov r1, r8	@ 00006698 4146
.org 0x669a
	ldr r0, [r1, #4]	@ 0000669a 4868
.org 0x669c
	ldrb r1, [r0, #5]	@ 0000669c 4179
.org 0x669e
	adds r0, r7, #0	@ 0000669e 381c
.org 0x66a0
	adds r0, #56	@ 000066a0 3830
.org 0x66a2
	strb r1, [r0, #0]	@ 000066a2 0170
.org 0x66a4
	ldrb r1, [r2, #0]	@ 000066a4 1178
.org 0x66a6
	movs r0, #4	@ 000066a6 0420
.org 0x66a8
	ands r0, r1	@ 000066a8 0840
.org 0x66aa
	cmp r0, #0	@ 000066aa 0028
.org 0x66ac
	bne.n 0x66ba	@ 000066ac 05d1
.org 0x66ae
	mov r3, r8	@ 000066ae 4346
.org 0x66b0
	ldr r0, [r3, #4]	@ 000066b0 5868
.org 0x66b2
	ldrb r0, [r0, #6]	@ 000066b2 8079
.org 0x66b4
	adds r1, r7, #0	@ 000066b4 391c
.org 0x66b6
	adds r1, #57	@ 000066b6 3931
.org 0x66b8
	strb r0, [r1, #0]	@ 000066b8 0870
.org 0x66ba
	ldrb r1, [r2, #0]	@ 000066ba 1178
.org 0x66bc
	movs r0, #8	@ 000066bc 0820
.org 0x66be
	ands r0, r1	@ 000066be 0840
.org 0x66c0
	cmp r0, #0	@ 000066c0 0028
.org 0x66c2
	bne.n 0x66d0	@ 000066c2 05d1
.org 0x66c4
	mov r1, r8	@ 000066c4 4146
.org 0x66c6
	ldr r0, [r1, #4]	@ 000066c6 4868
.org 0x66c8
	ldrb r0, [r0, #7]	@ 000066c8 c079
.org 0x66ca
	adds r1, r7, #0	@ 000066ca 391c
.org 0x66cc
	adds r1, #58	@ 000066cc 3a31
.org 0x66ce
	strb r0, [r1, #0]	@ 000066ce 0870
.org 0x66d0
	ldrb r1, [r2, #0]	@ 000066d0 1178
.org 0x66d2
	movs r0, #6	@ 000066d2 0620
.org 0x66d4
	ands r0, r1	@ 000066d4 0840
.org 0x66d6
	cmp r0, #0	@ 000066d6 0028
.org 0x66d8
	bne.n 0x66e4	@ 000066d8 04d1
.org 0x66da
	mov r2, r8	@ 000066da 4246
.org 0x66dc
	ldr r0, [r2, #4]	@ 000066dc 5068
.org 0x66de
	ldr r0, [r0, #12]	@ 000066de c068
.org 0x66e0
	str r0, [r7, #60]	@ 000066e0 f863
.org 0x66e2
	b.n 0x672a	@ 000066e2 22e0
.org 0x66e4
	mov r3, r8	@ 000066e4 4346
.org 0x66e6
	ldr r1, [r3, #4]	@ 000066e6 5968
.org 0x66e8
	ldrb r0, [r1, #4]	@ 000066e8 0879
.org 0x66ea
	cmp r0, #3	@ 000066ea 0328
.org 0x66ec
	bhi.n 0x6720	@ 000066ec 18d8
.org 0x66ee
	adds r0, r7, #0	@ 000066ee 381c
.org 0x66f0
	adds r0, #57	@ 000066f0 3930
.org 0x66f2
	ldrb r3, [r0, #0]	@ 000066f2 0378
.org 0x66f4
	adds r0, r4, #0	@ 000066f4 201c
.org 0x66f6
	ands r0, r3	@ 000066f6 1840
.org 0x66f8
	cmp r0, #0	@ 000066f8 0028
.org 0x66fa
	bne.n 0x671a	@ 000066fa 0ed1
.org 0x66fc
	ldrb r1, [r1, #4]	@ 000066fc 0979
.org 0x66fe
	lsls r0, r1, #2	@ 000066fe 8800
.org 0x6700
	adds r2, r0, r1	@ 00006700 4218
.org 0x6702
	adds r0, r7, #0	@ 00006702 381c
.org 0x6704
	adds r0, #56	@ 00006704 3830
.org 0x6706
	ldrb r1, [r0, #0]	@ 00006706 0178
.org 0x6708
	adds r0, r5, #0	@ 00006708 281c
.org 0x670a
	ands r0, r3	@ 0000670a 1840
.org 0x670c
	cmp r0, #0	@ 0000670c 0028
.org 0x670e
	beq.n 0x6716	@ 0000670e 02d0
.org 0x6710
	adds r0, r1, #1	@ 00006710 481c
.org 0x6712
	adds r0, r2, r0	@ 00006712 1018
.org 0x6714
	b.n 0x6724	@ 00006714 06e0
.org 0x6716
	adds r0, r2, r1	@ 00006716 5018
.org 0x6718
	b.n 0x6724	@ 00006718 04e0
.org 0x671a
	movs r1, #128	@ 0000671a 8021
.org 0x671c
	lsls r1, r1, #24	@ 0000671c 0906
.org 0x671e
	b.n 0x6728	@ 0000671e 03e0
.org 0x6720
	ldrb r0, [r1, #4]	@ 00006720 0879
.org 0x6722
	adds r0, #16	@ 00006722 1030
.org 0x6724
	adds r1, r4, #0	@ 00006724 211c
.org 0x6726
	lsls r1, r0	@ 00006726 8140
.org 0x6728
	str r1, [r7, #60]	@ 00006728 f963
.org 0x672a
	adds r0, r7, #0	@ 0000672a 381c
.org 0x672c
	mov r1, sl	@ 0000672c 5146
.org 0x672e
	bl 0x5bec	@ 0000672e fff75dfa
.org 0x6732
	ldr r0, [r7, #36]	@ 00006732 786a
.org 0x6734
	cmp r0, #0	@ 00006734 0028
.org 0x6736
	bne.n 0x6740	@ 00006736 03d1
.org 0x6738
	mov r1, sl	@ 00006738 5146
.org 0x673a
	ldr r0, [r1, #36]	@ 0000673a 486a
.org 0x673c
	cmp r0, #0	@ 0000673c 0028
.org 0x673e
	beq.n 0x67f8	@ 0000673e 5bd0
.org 0x6740
	ldr r0, [r7, #20]	@ 00006740 7869
.org 0x6742
	cmp r0, #0	@ 00006742 0028
.org 0x6744
	bne.n 0x674e	@ 00006744 03d1
.org 0x6746
	mov r2, sl	@ 00006746 5246
.org 0x6748
	ldr r0, [r2, #20]	@ 00006748 5069
.org 0x674a
	cmp r0, #0	@ 0000674a 0028
.org 0x674c
	beq.n 0x67f8	@ 0000674c 54d0
.org 0x674e
	mov r3, r8	@ 0000674e 4346
.org 0x6750
	ldr r0, [r3, #12]	@ 00006750 d868
.org 0x6752
	mov r1, r9	@ 00006752 4946
.org 0x6754
	ldr r5, [r1, #12]	@ 00006754 cd68
.org 0x6756
	subs r0, r0, r5	@ 00006756 401b
.org 0x6758
	str r0, [sp, #0]	@ 00006758 0090
.org 0x675a
	ldr r4, [r3, #16]	@ 0000675a 1c69
.org 0x675c
	ldr r6, [r1, #16]	@ 0000675c 0e69
.org 0x675e
	subs r4, r4, r6	@ 0000675e a41b
.org 0x6760
	str r4, [sp, #4]	@ 00006760 0194
.org 0x6762
	ldrh r2, [r1, #20]	@ 00006762 8a8a
.org 0x6764
	muls r0, r2	@ 00006764 5043
.org 0x6766
	ldrh r1, [r3, #20]	@ 00006766 998a
.org 0x6768
	adds r1, r1, r2	@ 00006768 8918
.org 0x676a
	bl 0x128fb8	@ 0000676a 22f125fc
.org 0x676e
	adds r5, r5, r0	@ 0000676e 2d18
.org 0x6770
	str r5, [sp, #8]	@ 00006770 0295
.org 0x6772
	mov r3, r9	@ 00006772 4b46
.org 0x6774
	ldrh r2, [r3, #22]	@ 00006774 da8a
.org 0x6776
	adds r0, r2, #0	@ 00006776 101c
.org 0x6778
	muls r0, r4	@ 00006778 6043
.org 0x677a
	mov r3, r8	@ 0000677a 4346
.org 0x677c
	ldrh r1, [r3, #22]	@ 0000677c d98a
.org 0x677e
	adds r1, r1, r2	@ 0000677e 8918
.org 0x6780
	bl 0x128fb8	@ 00006780 22f11afc
.org 0x6784
	adds r6, r6, r0	@ 00006784 3618
.org 0x6786
	add r5, sp, #8	@ 00006786 02ad
.org 0x6788
	str r6, [r5, #4]	@ 00006788 6e60
.org 0x678a
	ldr r0, [sp, #0]	@ 0000678a 0098
.org 0x678c
	adds r1, r0, #0	@ 0000678c 011c
.org 0x678e
	muls r1, r0	@ 0000678e 4143
.org 0x6790
	adds r0, r1, #0	@ 00006790 081c
.org 0x6792
	ldr r1, [sp, #4]	@ 00006792 0199
.org 0x6794
	adds r2, r1, #0	@ 00006794 0a1c
.org 0x6796
	muls r2, r1	@ 00006796 4a43
.org 0x6798
	adds r1, r2, #0	@ 00006798 111c
.org 0x679a
	adds r0, r0, r1	@ 0000679a 4018
.org 0x679c
	bl 0x128bf4	@ 0000679c 22f12afa
.org 0x67a0
	adds r4, r0, #0	@ 000067a0 041c
.org 0x67a2
	lsls r4, r4, #16	@ 000067a2 2404
.org 0x67a4
	lsrs r4, r4, #16	@ 000067a4 240c
.org 0x67a6
	ldr r0, [sp, #0]	@ 000067a6 0098
.org 0x67a8
	lsls r0, r0, #8	@ 000067a8 0002
.org 0x67aa
	adds r1, r4, #0	@ 000067aa 211c
.org 0x67ac
	bl 0x128fb8	@ 000067ac 22f104fc
.org 0x67b0
	str r0, [sp, #0]	@ 000067b0 0090
.org 0x67b2
	ldr r0, [sp, #4]	@ 000067b2 0198
.org 0x67b4
	lsls r0, r0, #8	@ 000067b4 0002
.org 0x67b6
	adds r1, r4, #0	@ 000067b6 211c
.org 0x67b8
	bl 0x128fb8	@ 000067b8 22f1fefb
.org 0x67bc
	str r0, [sp, #4]	@ 000067bc 0190
.org 0x67be
	ldr r3, [r7, #36]	@ 000067be 7b6a
.org 0x67c0
	cmp r3, #0	@ 000067c0 002b
.org 0x67c2
	beq.n 0x67d4	@ 000067c2 07d0
.org 0x67c4
	ldr r0, [r7, #20]	@ 000067c4 7869
.org 0x67c6
	cmp r0, #0	@ 000067c6 0028
.org 0x67c8
	beq.n 0x67d4	@ 000067c8 04d0
.org 0x67ca
	adds r0, r7, #0	@ 000067ca 381c
.org 0x67cc
	adds r1, r5, #0	@ 000067cc 291c
.org 0x67ce
	mov r2, sp	@ 000067ce 6a46
.org 0x67d0
	bl 0x128f88	@ 000067d0 22f1dafb
.org 0x67d4
	mov r0, sl	@ 000067d4 5046
.org 0x67d6
	ldr r3, [r0, #36]	@ 000067d6 436a
.org 0x67d8
	cmp r3, #0	@ 000067d8 002b
.org 0x67da
	beq.n 0x67f8	@ 000067da 0dd0
.org 0x67dc
	ldr r0, [r0, #20]	@ 000067dc 4069
.org 0x67de
	cmp r0, #0	@ 000067de 0028
.org 0x67e0
	beq.n 0x67f8	@ 000067e0 0ad0
.org 0x67e2
	ldr r0, [sp, #0]	@ 000067e2 0098
.org 0x67e4
	negs r0, r0	@ 000067e4 4042
.org 0x67e6
	str r0, [sp, #0]	@ 000067e6 0090
.org 0x67e8
	ldr r0, [sp, #4]	@ 000067e8 0198
.org 0x67ea
	negs r0, r0	@ 000067ea 4042
.org 0x67ec
	str r0, [sp, #4]	@ 000067ec 0190
.org 0x67ee
	mov r0, sl	@ 000067ee 5046
.org 0x67f0
	adds r1, r5, #0	@ 000067f0 291c
.org 0x67f2
	mov r2, sp	@ 000067f2 6a46
.org 0x67f4
	bl 0x128f88	@ 000067f4 22f1c8fb
.org 0x67f8
	add sp, #16	@ 000067f8 04b0
.org 0x67fa
	pop {r3, r4, r5}	@ 000067fa 38bc
.org 0x67fc
	mov r8, r3	@ 000067fc 9846
.org 0x67fe
	mov r9, r4	@ 000067fe a146
.org 0x6800
	mov sl, r5	@ 00006800 aa46
.org 0x6802
	pop {r4, r5, r6, r7}	@ 00006802 f0bc
.org 0x6804
	pop {r0}	@ 00006804 01bc
.org 0x6806
	bx r0	@ 00006806 0047
