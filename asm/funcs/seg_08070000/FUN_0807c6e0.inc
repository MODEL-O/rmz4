@ FUN_0807c6e0  entry 0x0807c6e0  size 454
.thumb
.org 0x7c6e0
FUN_0807c6e0:
	push {r4, r5, r6, r7, lr}	@ 0007c6e0 f0b5
.org 0x7c6e2
	mov r7, r9	@ 0007c6e2 4f46
.org 0x7c6e4
	mov r6, r8	@ 0007c6e4 4646
.org 0x7c6e6
	push {r6, r7}	@ 0007c6e6 c0b4
.org 0x7c6e8
	sub sp, #20	@ 0007c6e8 85b0
.org 0x7c6ea
	adds r4, r0, #0	@ 0007c6ea 041c
.org 0x7c6ec
	mov r0, sp	@ 0007c6ec 6846
.org 0x7c6ee
	movs r1, #0	@ 0007c6ee 0021
.org 0x7c6f0
	movs r2, #4	@ 0007c6f0 0422
.org 0x7c6f2
	bl 0x1292b8	@ 0007c6f2 acf0e1fd
.org 0x7c6f6
	ldrb r0, [r4, #15]	@ 0007c6f6 e07b
.org 0x7c6f8
	cmp r0, #0	@ 0007c6f8 0028
.org 0x7c6fa
	beq.n 0x7c6fe	@ 0007c6fa 00d0
.org 0x7c6fc
	b.n 0x7c840	@ 0007c6fc a0e0
.org 0x7c6fe
	movs r5, #0	@ 0007c6fe 0025
.org 0x7c700
	adds r1, r4, #0	@ 0007c700 211c
.org 0x7c702
	adds r1, #180	@ 0007c702 b431
.org 0x7c704
	ldr r3, [r1, #0]	@ 0007c704 0b68
.org 0x7c706
	movs r7, #240	@ 0007c706 f027
.org 0x7c708
	lsls r7, r7, #7	@ 0007c708 ff01
.org 0x7c70a
	adds r2, r3, r7	@ 0007c70a da19
.org 0x7c70c
	ldr r0, [pc, #52]	@ 0007c70c 0d48
.org 0x7c70e
	ldr r0, [r0, #0]	@ 0007c70e 0068
.org 0x7c710
	ldr r0, [r0, #84]	@ 0007c710 406d
.org 0x7c712
	mov r9, r1	@ 0007c712 8946
.org 0x7c714
	cmp r2, r0	@ 0007c714 8242
.org 0x7c716
	bge.n 0x7c71a	@ 0007c716 00da
.org 0x7c718
	movs r5, #1	@ 0007c718 0125
.org 0x7c71a
	adds r6, r5, #0	@ 0007c71a 2e1c
.org 0x7c71c
	lsls r1, r6, #1	@ 0007c71c 7100
.org 0x7c71e
	subs r1, #1	@ 0007c71e 0139
.org 0x7c720
	lsls r0, r1, #2	@ 0007c720 8800
.org 0x7c722
	adds r0, r0, r1	@ 0007c722 4018
.org 0x7c724
	lsls r0, r0, #2	@ 0007c724 8000
.org 0x7c726
	adds r0, r0, r1	@ 0007c726 4018
.org 0x7c728
	lsls r0, r0, #11	@ 0007c728 c002
.org 0x7c72a
	subs r0, r7, r0	@ 0007c72a 381a
.org 0x7c72c
	adds r0, r3, r0	@ 0007c72c 1818
.org 0x7c72e
	str r0, [sp, #4]	@ 0007c72e 0190
.org 0x7c730
	ldr r2, [r4, #88]	@ 0007c730 a26d
.org 0x7c732
	add r1, sp, #4	@ 0007c732 01a9
.org 0x7c734
	str r2, [r1, #4]	@ 0007c734 4a60
.org 0x7c736
	add r0, sp, #12	@ 0007c736 03a8
.org 0x7c738
	str r2, [r0, #4]	@ 0007c738 4260
.org 0x7c73a
	movs r5, #0	@ 0007c73a 0025
.org 0x7c73c
	mov r8, r1	@ 0007c73c 8846
.org 0x7c73e
	adds r7, r0, #0	@ 0007c73e 071c
.org 0x7c740
	b.n 0x7c752	@ 0007c740 07e0
.org 0x7c742
	.byte 0x00	@ 0007c742 data
.org 0x7c743
	.byte 0x00	@ 0007c743 data
.org 0x7c744
	.byte 0xf0,0xdb,0x02,0x02	@ 0007c744 data
.org 0x7c748
	mov r0, sp	@ 0007c748 6846
.org 0x7c74a
	adds r1, r0, r5	@ 0007c74a 4119
.org 0x7c74c
	movs r0, #1	@ 0007c74c 0120
.org 0x7c74e
	strb r0, [r1, #0]	@ 0007c74e 0870
.org 0x7c750
	adds r5, #1	@ 0007c750 0135
.org 0x7c752
	cmp r5, #3	@ 0007c752 032d
.org 0x7c754
	bgt.n 0x7c77e	@ 0007c754 13dc
.org 0x7c756
	ldr r1, [pc, #116]	@ 0007c756 1d49
.org 0x7c758
	lsls r0, r5, #2	@ 0007c758 a800
.org 0x7c75a
	adds r0, r0, r1	@ 0007c75a 4018
.org 0x7c75c
	ldr r1, [r0, #0]	@ 0007c75c 0168
.org 0x7c75e
	movs r2, #240	@ 0007c75e f022
.org 0x7c760
	lsls r2, r2, #7	@ 0007c760 d201
.org 0x7c762
	adds r1, r1, r2	@ 0007c762 8918
.org 0x7c764
	mov r3, r9	@ 0007c764 4b46
.org 0x7c766
	ldr r0, [r3, #0]	@ 0007c766 1868
.org 0x7c768
	adds r0, r0, r1	@ 0007c768 4018
.org 0x7c76a
	str r0, [sp, #12]	@ 0007c76a 0390
.org 0x7c76c
	lsls r3, r5, #24	@ 0007c76c 2b06
.org 0x7c76e
	lsrs r3, r3, #24	@ 0007c76e 1b0e
.org 0x7c770
	adds r0, r4, #0	@ 0007c770 201c
.org 0x7c772
	mov r1, r8	@ 0007c772 4146
.org 0x7c774
	adds r2, r7, #0	@ 0007c774 3a1c
.org 0x7c776
	bl 0xb0d5c	@ 0007c776 34f0f1fa
.org 0x7c77a
	cmp r0, #0	@ 0007c77a 0028
.org 0x7c77c
	bne.n 0x7c748	@ 0007c77c e4d1
.org 0x7c77e
	cmp r5, #4	@ 0007c77e 042d
.org 0x7c780
	beq.n 0x7c7dc	@ 0007c780 2cd0
.org 0x7c782
	adds r1, r4, #0	@ 0007c782 211c
.org 0x7c784
	adds r1, #212	@ 0007c784 d431
.org 0x7c786
	movs r3, #0	@ 0007c786 0023
.org 0x7c788
	movs r0, #15	@ 0007c788 0f20
.org 0x7c78a
	strb r0, [r1, #0]	@ 0007c78a 0870
.org 0x7c78c
	adds r2, r4, #0	@ 0007c78c 221c
.org 0x7c78e
	adds r2, #200	@ 0007c78e c832
.org 0x7c790
	ldr r0, [pc, #60]	@ 0007c790 0f48
.org 0x7c792
	ldr r0, [r0, #8]	@ 0007c792 8068
.org 0x7c794
	movs r5, #240	@ 0007c794 f025
.org 0x7c796
	lsls r5, r5, #7	@ 0007c796 ed01
.org 0x7c798
	adds r0, r0, r5	@ 0007c798 4019
.org 0x7c79a
	mov r5, r9	@ 0007c79a 4d46
.org 0x7c79c
	ldr r1, [r5, #0]	@ 0007c79c 2968
.org 0x7c79e
	adds r1, r1, r0	@ 0007c79e 0918
.org 0x7c7a0
	str r1, [r2, #0]	@ 0007c7a0 1160
.org 0x7c7a2
	movs r2, #0	@ 0007c7a2 0022
.org 0x7c7a4
	ldr r0, [pc, #44]	@ 0007c7a4 0b48
.org 0x7c7a6
	ldr r0, [r0, #0]	@ 0007c7a6 0068
.org 0x7c7a8
	ldr r0, [r0, #84]	@ 0007c7a8 406d
.org 0x7c7aa
	cmp r1, r0	@ 0007c7aa 8142
.org 0x7c7ac
	bge.n 0x7c7b0	@ 0007c7ac 00da
.org 0x7c7ae
	movs r2, #1	@ 0007c7ae 0122
.org 0x7c7b0
	adds r0, r4, #0	@ 0007c7b0 201c
.org 0x7c7b2
	adds r0, #190	@ 0007c7b2 be30
.org 0x7c7b4
	strb r2, [r0, #0]	@ 0007c7b4 0270
.org 0x7c7b6
	movs r0, #12	@ 0007c7b6 0c20
.org 0x7c7b8
	strb r0, [r4, #13]	@ 0007c7b8 6073
.org 0x7c7ba
	strb r3, [r4, #14]	@ 0007c7ba a373
.org 0x7c7bc
	strb r3, [r4, #15]	@ 0007c7bc e373
.org 0x7c7be
	ldr r0, [pc, #24]	@ 0007c7be 0648
.org 0x7c7c0
	ldr r1, [r0, #48]	@ 0007c7c0 016b
.org 0x7c7c2
	adds r0, r4, #0	@ 0007c7c2 201c
.org 0x7c7c4
	bl 0x128f80	@ 0007c7c4 acf0dcfb
.org 0x7c7c8
	b.n 0x7c8ba	@ 0007c7c8 77e0
.org 0x7c7ca
	.byte 0x00	@ 0007c7ca data
.org 0x7c7cb
	.byte 0x00	@ 0007c7cb data
.org 0x7c7cc
	.byte 0x64,0xd8,0x85,0x08	@ 0007c7cc data
.org 0x7c7d0
	.byte 0x50,0xd8,0x85,0x08	@ 0007c7d0 data
.org 0x7c7d4
	.byte 0xf0,0xdb,0x02,0x02	@ 0007c7d4 data
.org 0x7c7d8
	.byte 0xa4,0xd4,0x85,0x08	@ 0007c7d8 data
.org 0x7c7dc
	ldr r1, [pc, #56]	@ 0007c7dc 0e49
.org 0x7c7de
	ldr r0, [pc, #60]	@ 0007c7de 0f48
.org 0x7c7e0
	strh r0, [r1, #0]	@ 0007c7e0 0880
.org 0x7c7e2
	adds r0, r4, #0	@ 0007c7e2 201c
.org 0x7c7e4
	movs r1, #20	@ 0007c7e4 1421
.org 0x7c7e6
	bl 0x7e8c8	@ 0007c7e6 02f06ff8
.org 0x7c7ea
	movs r3, #1	@ 0007c7ea 0123
.org 0x7c7ec
	adds r1, r6, #0	@ 0007c7ec 311c
.org 0x7c7ee
	ands r1, r3	@ 0007c7ee 1940
.org 0x7c7f0
	adds r0, r4, #0	@ 0007c7f0 201c
.org 0x7c7f2
	adds r0, #76	@ 0007c7f2 4c30
.org 0x7c7f4
	strb r1, [r0, #0]	@ 0007c7f4 0170
.org 0x7c7f6
	adds r5, r4, #0	@ 0007c7f6 251c
.org 0x7c7f8
	adds r5, #74	@ 0007c7f8 4a35
.org 0x7c7fa
	lsls r1, r1, #4	@ 0007c7fa 0901
.org 0x7c7fc
	ldrb r2, [r5, #0]	@ 0007c7fc 2a78
.org 0x7c7fe
	movs r0, #17	@ 0007c7fe 1120
.org 0x7c800
	negs r0, r0	@ 0007c800 4042
.org 0x7c802
	ands r0, r2	@ 0007c802 1040
.org 0x7c804
	orrs r0, r1	@ 0007c804 0843
.org 0x7c806
	strb r0, [r5, #0]	@ 0007c806 2870
.org 0x7c808
	ands r6, r3	@ 0007c808 1e40
.org 0x7c80a
	cmp r6, #0	@ 0007c80a 002e
.org 0x7c80c
	beq.n 0x7c820	@ 0007c80c 08d0
.org 0x7c80e
	ldrb r0, [r4, #10]	@ 0007c80e a07a
.org 0x7c810
	movs r1, #16	@ 0007c810 1021
.org 0x7c812
	orrs r0, r1	@ 0007c812 0843
.org 0x7c814
	b.n 0x7c826	@ 0007c814 07e0
.org 0x7c816
	.byte 0x00	@ 0007c816 data
.org 0x7c817
	.byte 0x00	@ 0007c817 data
.org 0x7c818
	.byte 0x40,0x0a,0x00,0x02	@ 0007c818 data
.org 0x7c81c
	.byte 0x10,0x3f,0x00,0x00	@ 0007c81c data
.org 0x7c820
	ldrb r1, [r4, #10]	@ 0007c820 a17a
.org 0x7c822
	movs r0, #239	@ 0007c822 ef20
.org 0x7c824
	ands r0, r1	@ 0007c824 0840
.org 0x7c826
	strb r0, [r4, #10]	@ 0007c826 a072
.org 0x7c828
	mov r0, sp	@ 0007c828 6846
.org 0x7c82a
	movs r1, #4	@ 0007c82a 0421
.org 0x7c82c
	bl 0x7eb38	@ 0007c82c 02f084f9
.org 0x7c830
	adds r1, r4, #0	@ 0007c830 211c
.org 0x7c832
	adds r1, #213	@ 0007c832 d531
.org 0x7c834
	strb r0, [r1, #0]	@ 0007c834 0870
.org 0x7c836
	movs r0, #96	@ 0007c836 6020
.org 0x7c838
	strb r0, [r4, #18]	@ 0007c838 a074
.org 0x7c83a
	ldrb r0, [r4, #15]	@ 0007c83a e07b
.org 0x7c83c
	adds r0, #1	@ 0007c83c 0130
.org 0x7c83e
	strb r0, [r4, #15]	@ 0007c83e e073
.org 0x7c840
	adds r5, r4, #0	@ 0007c840 251c
.org 0x7c842
	adds r5, #188	@ 0007c842 bc35
.org 0x7c844
	ldrb r0, [r5, #0]	@ 0007c844 2878
.org 0x7c846
	cmp r0, #0	@ 0007c846 0028
.org 0x7c848
	beq.n 0x7c850	@ 0007c848 02d0
.org 0x7c84a
	adds r0, r4, #0	@ 0007c84a 201c
.org 0x7c84c
	bl 0x1cff0	@ 0007c84c a0f7d0fb
.org 0x7c850
	adds r0, r4, #0	@ 0007c850 201c
.org 0x7c852
	adds r0, #116	@ 0007c852 7430
.org 0x7c854
	ldr r3, [pc, #112]	@ 0007c854 1c4b
.org 0x7c856
	ldr r2, [pc, #116]	@ 0007c856 1d4a
.org 0x7c858
	ldrb r1, [r5, #0]	@ 0007c858 2978
.org 0x7c85a
	lsls r1, r1, #1	@ 0007c85a 4900
.org 0x7c85c
	adds r1, r1, r2	@ 0007c85c 8918
.org 0x7c85e
	ldrh r2, [r1, #0]	@ 0007c85e 0a88
.org 0x7c860
	lsls r2, r2, #2	@ 0007c860 9200
.org 0x7c862
	adds r2, r2, r3	@ 0007c862 d218
.org 0x7c864
	adds r1, r4, #0	@ 0007c864 211c
.org 0x7c866
	adds r1, #113	@ 0007c866 7131
.org 0x7c868
	ldrb r1, [r1, #0]	@ 0007c868 0978
.org 0x7c86a
	lsls r1, r1, #24	@ 0007c86a 0906
.org 0x7c86c
	asrs r1, r1, #24	@ 0007c86c 0916
.org 0x7c86e
	ldr r2, [r2, #0]	@ 0007c86e 1268
.org 0x7c870
	lsls r1, r1, #2	@ 0007c870 8900
.org 0x7c872
	adds r1, r1, r2	@ 0007c872 8918
.org 0x7c874
	ldr r1, [r1, #0]	@ 0007c874 0968
.org 0x7c876
	bl 0x5784	@ 0007c876 88f785ff
.org 0x7c87a
	ldrb r0, [r4, #18]	@ 0007c87a a07c
.org 0x7c87c
	lsls r2, r0, #27	@ 0007c87c c206
.org 0x7c87e
	ldr r1, [pc, #80]	@ 0007c87e 1449
.org 0x7c880
	movs r3, #192	@ 0007c880 c023
.org 0x7c882
	lsls r3, r3, #24	@ 0007c882 1b06
.org 0x7c884
	adds r0, r2, r3	@ 0007c884 d018
.org 0x7c886
	lsrs r0, r0, #23	@ 0007c886 c00d
.org 0x7c888
	adds r0, r0, r1	@ 0007c888 4018
.org 0x7c88a
	movs r5, #0	@ 0007c88a 0025
.org 0x7c88c
	ldrsh r0, [r0, r5]	@ 0007c88c 405f
.org 0x7c88e
	asrs r0, r0, #5	@ 0007c88e 4011
.org 0x7c890
	movs r1, #8	@ 0007c890 0821
.org 0x7c892
	subs r2, r1, r0	@ 0007c892 0a1a
.org 0x7c894
	ldr r1, [pc, #60]	@ 0007c894 0f49
.org 0x7c896
	movs r0, #31	@ 0007c896 1f20
.org 0x7c898
	ands r2, r0	@ 0007c898 0240
.org 0x7c89a
	movs r3, #128	@ 0007c89a 8023
.org 0x7c89c
	lsls r3, r3, #5	@ 0007c89c 5b01
.org 0x7c89e
	adds r0, r3, #0	@ 0007c89e 181c
.org 0x7c8a0
	movs r3, #0	@ 0007c8a0 0023
.org 0x7c8a2
	orrs r2, r0	@ 0007c8a2 0243
.org 0x7c8a4
	strh r2, [r1, #2]	@ 0007c8a4 4a80
