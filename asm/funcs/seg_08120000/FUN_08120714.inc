@ FUN_08120714  entry 0x08120714  size 474
.thumb
.org 0x120714
FUN_08120714:
	push {r4, r5, r6, r7, lr}	@ 00120714 f0b5
.org 0x120716
	sub sp, #4	@ 00120716 81b0
.org 0x120718
	adds r5, r0, #0	@ 00120718 051c
.org 0x12071a
	ldrb r6, [r5, #3]	@ 0012071a ee78
.org 0x12071c
	cmp r6, #0	@ 0012071c 002e
.org 0x12071e
	bne.n 0x120754	@ 0012071e 19d1
.org 0x120720
	ldr r0, [pc, #96]	@ 00120720 1848
.org 0x120722
	adds r4, r5, r0	@ 00120722 2c18
.org 0x120724
	ldr r1, [pc, #96]	@ 00120724 1849
.org 0x120726
	str r6, [sp, #0]	@ 00120726 0096
.org 0x120728
	adds r0, r4, #0	@ 00120728 201c
.org 0x12072a
	movs r2, #131	@ 0012072a 8322
.org 0x12072c
	movs r3, #0	@ 0012072c 0023
.org 0x12072e
	bl 0x27b8	@ 0012072e e2f643f8
.org 0x120732
	ldr r0, [pc, #88]	@ 00120732 1648
.org 0x120734
	ldrh r0, [r0, #0]	@ 00120734 0088
.org 0x120736
	movs r1, #248	@ 00120736 f821
.org 0x120738
	lsls r1, r1, #5	@ 00120738 4901
.org 0x12073a
	ands r1, r0	@ 0012073a 0140
.org 0x12073c
	lsls r1, r1, #3	@ 0012073c c900
.org 0x12073e
	movs r2, #128	@ 0012073e 8022
.org 0x120740
	lsls r2, r2, #5	@ 00120740 5201
.org 0x120742
	adds r0, r4, #0	@ 00120742 201c
.org 0x120744
	bl 0x1f1c	@ 00120744 e1f6eafb
.org 0x120748
	ldr r1, [pc, #68]	@ 00120748 1149
.org 0x12074a
	adds r0, r5, r1	@ 0012074a 6818
.org 0x12074c
	strb r6, [r0, #13]	@ 0012074c 4673
.org 0x12074e
	ldrb r0, [r5, #3]	@ 0012074e e878
.org 0x120750
	adds r0, #1	@ 00120750 0130
.org 0x120752
	strb r0, [r5, #3]	@ 00120752 e870
.org 0x120754
	adds r0, r5, #0	@ 00120754 281c
.org 0x120756
	bl 0x120cb0	@ 00120756 00f0abfa
.org 0x12075a
	ldrb r2, [r5, #3]	@ 0012075a ea78
.org 0x12075c
	cmp r2, #1	@ 0012075c 012a
.org 0x12075e
	bne.n 0x12080c	@ 0012075e 55d1
.org 0x120760
	ldr r3, [pc, #48]	@ 00120760 0c4b
.org 0x120762
	ldrh r1, [r3, #6]	@ 00120762 d988
.org 0x120764
	movs r0, #32	@ 00120764 2020
.org 0x120766
	ands r0, r1	@ 00120766 0840
.org 0x120768
	lsls r0, r0, #16	@ 00120768 0004
.org 0x12076a
	lsrs r6, r0, #16	@ 0012076a 060c
.org 0x12076c
	cmp r6, #0	@ 0012076c 002e
.org 0x12076e
	beq.n 0x120798	@ 0012076e 13d0
.org 0x120770
	movs r0, #1	@ 00120770 0120
.org 0x120772
	bl 0x2b10	@ 00120772 e2f6cdf9
.org 0x120776
	movs r1, #0	@ 00120776 0021
.org 0x120778
	movs r0, #2	@ 00120778 0220
.org 0x12077a
	strb r0, [r5, #2]	@ 0012077a a870
.org 0x12077c
	strb r1, [r5, #3]	@ 0012077c e970
.org 0x12077e
	movs r0, #0	@ 0012077e 0020
.org 0x120780
	b.n 0x120936	@ 00120780 d9e0
.org 0x120782
	.byte 0x00	@ 00120782 data
.org 0x120783
	.byte 0x00	@ 00120783 data
.org 0x120784
	.byte 0xd8,0x0e,0x00,0x00	@ 00120784 data
.org 0x120788
	.byte 0x00,0xc0,0xb2,0x08	@ 00120788 data
.org 0x12078c
	.byte 0x06,0x0a,0x00,0x02	@ 0012078c data
.org 0x120790
	.byte 0xcc,0x0d,0x00,0x00	@ 00120790 data
.org 0x120794
	.byte 0x60,0x07,0x00,0x02	@ 00120794 data
.org 0x120798
	ldrh r1, [r3, #4]	@ 00120798 9988
.org 0x12079a
	ands r2, r1	@ 0012079a 0a40
.org 0x12079c
	cmp r2, #0	@ 0012079c 002a
.org 0x12079e
	bne.n 0x1207a8	@ 0012079e 03d1
.org 0x1207a0
	movs r0, #128	@ 001207a0 8020
.org 0x1207a2
	ands r0, r1	@ 001207a2 0840
.org 0x1207a4
	cmp r0, #0	@ 001207a4 0028
.org 0x1207a6
	beq.n 0x1207f4	@ 001207a6 25d0
.org 0x1207a8
	ldr r0, [pc, #56]	@ 001207a8 0e48
.org 0x1207aa
	adds r7, r5, r0	@ 001207aa 2f18
.org 0x1207ac
	ldrb r0, [r7, #3]	@ 001207ac f878
.org 0x1207ae
	cmp r0, #0	@ 001207ae 0028
.org 0x1207b0
	beq.n 0x120894	@ 001207b0 70d0
.org 0x1207b2
	ldr r1, [pc, #52]	@ 001207b2 0d49
.org 0x1207b4
	adds r4, r5, r1	@ 001207b4 6c18
.org 0x1207b6
	ldr r1, [pc, #52]	@ 001207b6 0d49
.org 0x1207b8
	str r6, [sp, #0]	@ 001207b8 0096
.org 0x1207ba
	adds r0, r4, #0	@ 001207ba 201c
.org 0x1207bc
	movs r2, #177	@ 001207bc b122
.org 0x1207be
	movs r3, #0	@ 001207be 0023
.org 0x1207c0
	bl 0x27b8	@ 001207c0 e1f6faff
.org 0x1207c4
	ldr r0, [pc, #40]	@ 001207c4 0a48
.org 0x1207c6
	ldrh r0, [r0, #0]	@ 001207c6 0088
.org 0x1207c8
	movs r1, #248	@ 001207c8 f821
.org 0x1207ca
	lsls r1, r1, #5	@ 001207ca 4901
.org 0x1207cc
	ands r1, r0	@ 001207cc 0140
.org 0x1207ce
	lsls r1, r1, #3	@ 001207ce c900
.org 0x1207d0
	movs r2, #128	@ 001207d0 8022
.org 0x1207d2
	lsls r2, r2, #5	@ 001207d2 5201
.org 0x1207d4
	adds r0, r4, #0	@ 001207d4 201c
.org 0x1207d6
	bl 0x1f1c	@ 001207d6 e1f6a1fb
.org 0x1207da
	movs r0, #2	@ 001207da 0220
.org 0x1207dc
	bl 0x2b10	@ 001207dc e2f698f9
.org 0x1207e0
	strb r6, [r7, #2]	@ 001207e0 be70
.org 0x1207e2
	b.n 0x120930	@ 001207e2 a5e0
.org 0x1207e4
	.byte 0xcc,0x0d,0x00,0x00	@ 001207e4 data
.org 0x1207e8
	.byte 0xd8,0x0e,0x00,0x00	@ 001207e8 data
.org 0x1207ec
	.byte 0x00,0xc0,0xb2,0x08	@ 001207ec data
.org 0x1207f0
	.byte 0x06,0x0a,0x00,0x02	@ 001207f0 data
.org 0x1207f4
	movs r0, #2	@ 001207f4 0220
.org 0x1207f6
	ands r0, r1	@ 001207f6 0840
.org 0x1207f8
	cmp r0, #0	@ 001207f8 0028
.org 0x1207fa
	bne.n 0x1207fe	@ 001207fa 00d1
.org 0x1207fc
	b.n 0x120934	@ 001207fc 9ae0
.org 0x1207fe
	ldr r0, [pc, #8]	@ 001207fe 0248
.org 0x120800
	adds r1, r5, r0	@ 00120800 2918
.org 0x120802
	movs r0, #1	@ 00120802 0120
.org 0x120804
	strb r0, [r1, #17]	@ 00120804 4874
.org 0x120806
	b.n 0x120934	@ 00120806 95e0
.org 0x120808
	.byte 0xcc,0x0d,0x00,0x00	@ 00120808 data
.org 0x12080c
	cmp r2, #2	@ 0012080c 022a
.org 0x12080e
	beq.n 0x120812	@ 0012080e 00d0
.org 0x120810
	b.n 0x120920	@ 00120810 86e0
.org 0x120812
	ldr r3, [pc, #64]	@ 00120812 104b
.org 0x120814
	ldrh r1, [r3, #4]	@ 00120814 9988
.org 0x120816
	adds r6, r1, #0	@ 00120816 0e1c
.org 0x120818
	ands r6, r2	@ 00120818 1640
.org 0x12081a
	cmp r6, #0	@ 0012081a 002e
.org 0x12081c
	beq.n 0x120864	@ 0012081c 22d0
.org 0x12081e
	ldr r1, [pc, #56]	@ 0012081e 0e49
.org 0x120820
	adds r4, r5, r1	@ 00120820 6c18
.org 0x120822
	ldr r1, [pc, #56]	@ 00120822 0e49
.org 0x120824
	movs r0, #0	@ 00120824 0020
.org 0x120826
	str r0, [sp, #0]	@ 00120826 0090
.org 0x120828
	adds r0, r4, #0	@ 00120828 201c
.org 0x12082a
	movs r2, #131	@ 0012082a 8322
.org 0x12082c
	movs r3, #0	@ 0012082c 0023
.org 0x12082e
	bl 0x27b8	@ 0012082e e1f6c3ff
.org 0x120832
	ldr r0, [pc, #44]	@ 00120832 0b48
.org 0x120834
	ldrh r0, [r0, #0]	@ 00120834 0088
.org 0x120836
	movs r1, #248	@ 00120836 f821
.org 0x120838
	lsls r1, r1, #5	@ 00120838 4901
.org 0x12083a
	ands r1, r0	@ 0012083a 0140
.org 0x12083c
	lsls r1, r1, #3	@ 0012083c c900
.org 0x12083e
	movs r2, #128	@ 0012083e 8022
.org 0x120840
	lsls r2, r2, #5	@ 00120840 5201
.org 0x120842
	adds r0, r4, #0	@ 00120842 201c
.org 0x120844
	bl 0x1f1c	@ 00120844 e1f66afb
.org 0x120848
	movs r0, #3	@ 00120848 0320
.org 0x12084a
	bl 0x2b10	@ 0012084a e2f661f9
.org 0x12084e
	movs r0, #1	@ 0012084e 0120
.org 0x120850
	b.n 0x120932	@ 00120850 6fe0
.org 0x120852
	.byte 0x00	@ 00120852 data
.org 0x120853
	.byte 0x00	@ 00120853 data
.org 0x120854
	.byte 0x60,0x07,0x00,0x02	@ 00120854 data
.org 0x120858
	.byte 0xd8,0x0e,0x00,0x00	@ 00120858 data
.org 0x12085c
	.byte 0x00,0xc0,0xb2,0x08	@ 0012085c data
.org 0x120860
	.byte 0x06,0x0a,0x00,0x02	@ 00120860 data
.org 0x120864
	movs r0, #1	@ 00120864 0120
.org 0x120866
	ands r0, r1	@ 00120866 0840
.org 0x120868
	cmp r0, #0	@ 00120868 0028
.org 0x12086a
	beq.n 0x12089c	@ 0012086a 17d0
.org 0x12086c
	ldr r0, [pc, #28]	@ 0012086c 0748
.org 0x12086e
	adds r4, r5, r0	@ 0012086e 2c18
.org 0x120870
	ldr r1, [pc, #28]	@ 00120870 0749
.org 0x120872
	adds r0, r5, r1	@ 00120872 6818
.org 0x120874
	ldrb r1, [r4, #2]	@ 00120874 a178
.org 0x120876
	adds r0, r0, r1	@ 00120876 4018
.org 0x120878
	ldrb r0, [r0, #0]	@ 00120878 0078
.org 0x12087a
	cmp r0, #255	@ 0012087a ff28
.org 0x12087c
	beq.n 0x120894	@ 0012087c 0ad0
.org 0x12087e
	movs r0, #2	@ 0012087e 0220
.org 0x120880
	bl 0x2b10	@ 00120880 e2f646f9
.org 0x120884
	movs r0, #3	@ 00120884 0320
.org 0x120886
	strb r0, [r5, #3]	@ 00120886 e870
.org 0x120888
	strb r6, [r4, #18]	@ 00120888 a674
.org 0x12088a
	b.n 0x120934	@ 0012088a 53e0
.org 0x12088c
	.byte 0xcc,0x0d,0x00,0x00	@ 0012088c data
.org 0x120890
	.byte 0xd2,0x0d,0x00,0x00	@ 00120890 data
.org 0x120894
	movs r0, #4	@ 00120894 0420
.org 0x120896
	bl 0x2b10	@ 00120896 e2f63bf9
.org 0x12089a
	b.n 0x120934	@ 0012089a 4be0
.org 0x12089c
	ldrh r1, [r3, #6]	@ 0012089c d988
.org 0x12089e
	movs r0, #64	@ 0012089e 4020
.org 0x1208a0
	ands r0, r1	@ 001208a0 0840
.org 0x1208a2
	cmp r0, #0	@ 001208a2 0028
.org 0x1208a4
	beq.n 0x1208e2	@ 001208a4 1dd0
.org 0x1208a6
	ldr r0, [pc, #24]	@ 001208a6 0648
.org 0x1208a8
	adds r4, r5, r0	@ 001208a8 2c18
.org 0x1208aa
	ldrb r0, [r4, #2]	@ 001208aa a078
.org 0x1208ac
	cmp r0, #0	@ 001208ac 0028
.org 0x1208ae
	beq.n 0x1208c4	@ 001208ae 09d0
.org 0x1208b0
	movs r0, #1	@ 001208b0 0120
.org 0x1208b2
	bl 0x2b10	@ 001208b2 e2f62df9
.org 0x1208b6
	ldrb r0, [r4, #2]	@ 001208b6 a078
.org 0x1208b8
	subs r0, #1	@ 001208b8 0138
.org 0x1208ba
	strb r0, [r4, #2]	@ 001208ba a070
.org 0x1208bc
	b.n 0x120934	@ 001208bc 3ae0
.org 0x1208be
	.byte 0x00	@ 001208be data
.org 0x1208bf
	.byte 0x00	@ 001208bf data
.org 0x1208c0
	.byte 0xcc,0x0d,0x00,0x00	@ 001208c0 data
.org 0x1208c4
	ldrb r0, [r4, #14]	@ 001208c4 a07b
.org 0x1208c6
	cmp r0, #0	@ 001208c6 0028
.org 0x1208c8
	beq.n 0x1208d8	@ 001208c8 06d0
.org 0x1208ca
	movs r0, #1	@ 001208ca 0120
.org 0x1208cc
	bl 0x2b10	@ 001208cc e2f620f9
.org 0x1208d0
	ldrb r0, [r4, #13]	@ 001208d0 607b
.org 0x1208d2
	subs r0, #1	@ 001208d2 0138
.org 0x1208d4
	strb r0, [r4, #13]	@ 001208d4 6073
.org 0x1208d6
	b.n 0x120934	@ 001208d6 2de0
.org 0x1208d8
	movs r0, #3	@ 001208d8 0320
.org 0x1208da
	bl 0x2b10	@ 001208da e2f619f9
.org 0x1208de
	movs r0, #1	@ 001208de 0120
.org 0x1208e0
	b.n 0x120932	@ 001208e0 27e0
.org 0x1208e2
	movs r0, #128	@ 001208e2 8020
.org 0x1208e4
	ands r0, r1	@ 001208e4 0840
.org 0x1208e6
	cmp r0, #0	@ 001208e6 0028
.org 0x1208e8
	beq.n 0x120934	@ 001208e8 24d0
.org 0x1208ea
	ldr r1, [pc, #28]	@ 001208ea 0749
.org 0x1208ec
	adds r4, r5, r1	@ 001208ec 6c18
