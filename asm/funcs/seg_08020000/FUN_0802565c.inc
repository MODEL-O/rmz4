@ FUN_0802565c  entry 0x0802565c  size 650
.thumb
.org 0x2565c
FUN_0802565c:
	push {r4, r5, r6, r7, lr}	@ 0002565c f0b5
.org 0x2565e
	mov r7, sl	@ 0002565e 5746
.org 0x25660
	mov r6, r9	@ 00025660 4e46
.org 0x25662
	mov r5, r8	@ 00025662 4546
.org 0x25664
	push {r5, r6, r7}	@ 00025664 e0b4
.org 0x25666
	sub sp, #44	@ 00025666 8bb0
.org 0x25668
	str r0, [sp, #32]	@ 00025668 0890
.org 0x2566a
	ldr r3, [r0, #32]	@ 0002566a 036a
.org 0x2566c
	movs r1, #190	@ 0002566c be21
.org 0x2566e
	lsls r1, r1, #1	@ 0002566e 4900
.org 0x25670
	adds r7, r0, r1	@ 00025670 4718
.org 0x25672
	ldrb r5, [r7, #0]	@ 00025672 3d78
.org 0x25674
	cmp r5, #0	@ 00025674 002d
.org 0x25676
	beq.n 0x2567a	@ 00025676 00d0
.org 0x25678
	b.n 0x257b8	@ 00025678 9ee0
.org 0x2567a
	ldr r3, [pc, #84]	@ 0002567a 154b
.org 0x2567c
	ldrh r0, [r3, #8]	@ 0002567c 1889
.org 0x2567e
	movs r2, #1	@ 0002567e 0122
.org 0x25680
	mov sl, r2	@ 00025680 9246
.org 0x25682
	movs r4, #0	@ 00025682 0024
.org 0x25684
	mov r9, r4	@ 00025684 a146
.org 0x25686
	mov r1, sl	@ 00025686 5146
.org 0x25688
	orrs r1, r0	@ 00025688 0143
.org 0x2568a
	strh r1, [r3, #8]	@ 0002568a 1981
.org 0x2568c
	ldr r6, [pc, #68]	@ 0002568c 114e
.org 0x2568e
	ldrb r0, [r6, #4]	@ 0002568e 3079
.org 0x25690
	movs r2, #247	@ 00025690 f722
.org 0x25692
	mov r8, r2	@ 00025692 9046
.org 0x25694
	ands r2, r0	@ 00025694 0240
.org 0x25696
	strb r2, [r6, #4]	@ 00025696 3271
.org 0x25698
	ldrb r4, [r3, #2]	@ 00025698 9c78
.org 0x2569a
	cmp r4, #0	@ 0002569a 002c
.org 0x2569c
	bne.n 0x256dc	@ 0002569c 1ed1
.org 0x2569e
	ldrb r1, [r6, #13]	@ 0002569e 717b
.org 0x256a0
	movs r0, #251	@ 000256a0 fb20
.org 0x256a2
	ands r0, r1	@ 000256a2 0840
.org 0x256a4
	mov r4, r8	@ 000256a4 4446
.org 0x256a6
	ands r0, r4	@ 000256a6 2040
.org 0x256a8
	movs r1, #239	@ 000256a8 ef21
.org 0x256aa
	ands r0, r1	@ 000256aa 0840
.org 0x256ac
	movs r1, #223	@ 000256ac df21
.org 0x256ae
	ands r0, r1	@ 000256ae 0840
.org 0x256b0
	strb r0, [r6, #13]	@ 000256b0 7073
.org 0x256b2
	strh r5, [r3, #10]	@ 000256b2 5d81
.org 0x256b4
	adds r0, r3, #0	@ 000256b4 181c
.org 0x256b6
	adds r0, #16	@ 000256b6 1030
.org 0x256b8
	ldr r1, [pc, #28]	@ 000256b8 0749
.org 0x256ba
	ldr r1, [r1, #56]	@ 000256ba 896b
.org 0x256bc
	ldr r1, [r1, #0]	@ 000256bc 0968
.org 0x256be
	bl 0x275f0	@ 000256be 01f097ff
.org 0x256c2
	movs r0, #1	@ 000256c2 0120
.org 0x256c4
	bl 0x1f63c	@ 000256c4 f9f7baff
.org 0x256c8
	mov r5, sl	@ 000256c8 5546
.org 0x256ca
	strb r5, [r7, #0]	@ 000256ca 3d70
.org 0x256cc
	b.n 0x25cee	@ 000256cc 0fe3
.org 0x256ce
	.byte 0x00	@ 000256ce data
.org 0x256cf
	.byte 0x00	@ 000256cf data
.org 0x256d0
	.byte 0x10,0xe9,0x02,0x02	@ 000256d0 data
.org 0x256d4
	.byte 0xb0,0xe8,0x02,0x02	@ 000256d4 data
.org 0x256d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000256d8 data
.org 0x256dc
	cmp r4, #1	@ 000256dc 012c
.org 0x256de
	bne.n 0x256fc	@ 000256de 0dd1
.org 0x256e0
	adds r0, r3, #0	@ 000256e0 181c
.org 0x256e2
	adds r0, #16	@ 000256e2 1030
.org 0x256e4
	ldr r1, [pc, #16]	@ 000256e4 0449
.org 0x256e6
	ldr r1, [r1, #56]	@ 000256e6 896b
.org 0x256e8
	ldr r1, [r1, #4]	@ 000256e8 4968
.org 0x256ea
	bl 0x275f0	@ 000256ea 01f081ff
.org 0x256ee
	movs r0, #2	@ 000256ee 0220
.org 0x256f0
	bl 0x1f63c	@ 000256f0 f9f7a4ff
.org 0x256f4
	b.n 0x257ce	@ 000256f4 6be0
.org 0x256f6
	.byte 0x00	@ 000256f6 data
.org 0x256f7
	.byte 0x00	@ 000256f7 data
.org 0x256f8
	.byte 0xf8,0x2c,0x84,0x08	@ 000256f8 data
.org 0x256fc
	cmp r4, #2	@ 000256fc 022c
.org 0x256fe
	bne.n 0x2574c	@ 000256fe 25d1
.org 0x25700
	movs r1, #196	@ 00025700 c421
.org 0x25702
	lsls r1, r1, #1	@ 00025702 4900
.org 0x25704
	adds r0, r3, r1	@ 00025704 5818
.org 0x25706
	ldrb r5, [r0, #0]	@ 00025706 0578
.org 0x25708
	adds r2, r5, #0	@ 00025708 2a1c
.org 0x2570a
	adds r2, #74	@ 0002570a 4a32
.org 0x2570c
	asrs r0, r2, #3	@ 0002570c d010
.org 0x2570e
	adds r1, r6, #4	@ 0002570e 311d
.org 0x25710
	adds r0, r0, r1	@ 00025710 4018
.org 0x25712
	ldrb r0, [r0, #0]	@ 00025712 0078
.org 0x25714
	movs r1, #7	@ 00025714 0721
.org 0x25716
	ands r2, r1	@ 00025716 0a40
.org 0x25718
	asrs r0, r2	@ 00025718 1041
.org 0x2571a
	movs r1, #1	@ 0002571a 0121
.org 0x2571c
	ands r0, r1	@ 0002571c 0840
.org 0x2571e
	cmp r0, #0	@ 0002571e 0028
.org 0x25720
	beq.n 0x25726	@ 00025720 01d0
.org 0x25722
	adds r0, r5, #1	@ 00025722 681c
.org 0x25724
	strh r0, [r3, #10]	@ 00025724 5881
.org 0x25726
	adds r0, r3, #0	@ 00025726 181c
.org 0x25728
	adds r0, #16	@ 00025728 1030
.org 0x2572a
	ldr r2, [pc, #28]	@ 0002572a 074a
.org 0x2572c
	ldrh r1, [r3, #10]	@ 0002572c 5989
.org 0x2572e
	ldr r2, [r2, #56]	@ 0002572e 926b
.org 0x25730
	lsls r1, r1, #2	@ 00025730 8900
.org 0x25732
	adds r1, r1, r2	@ 00025732 8918
.org 0x25734
	ldr r1, [r1, #8]	@ 00025734 8968
.org 0x25736
	bl 0x275f0	@ 00025736 01f05bff
.org 0x2573a
	ldrb r1, [r6, #4]	@ 0002573a 3179
.org 0x2573c
	mov r0, r8	@ 0002573c 4046
.org 0x2573e
	ands r0, r1	@ 0002573e 0840
.org 0x25740
	strb r0, [r6, #4]	@ 00025740 3071
.org 0x25742
	strb r4, [r7, #0]	@ 00025742 3c70
.org 0x25744
	b.n 0x25cee	@ 00025744 d3e2
.org 0x25746
	.byte 0x00	@ 00025746 data
.org 0x25747
	.byte 0x00	@ 00025747 data
.org 0x25748
	.byte 0xf8,0x2c,0x84,0x08	@ 00025748 data
.org 0x2574c
	cmp r4, #3	@ 0002574c 032c
.org 0x2574e
	bne.n 0x25778	@ 0002574e 13d1
.org 0x25750
	adds r0, r3, #0	@ 00025750 181c
.org 0x25752
	adds r0, #16	@ 00025752 1030
.org 0x25754
	ldr r2, [pc, #28]	@ 00025754 074a
.org 0x25756
	ldrh r1, [r3, #10]	@ 00025756 5989
.org 0x25758
	ldr r2, [r2, #56]	@ 00025758 926b
.org 0x2575a
	lsls r1, r1, #2	@ 0002575a 8900
.org 0x2575c
	adds r1, r1, r2	@ 0002575c 8918
.org 0x2575e
	ldr r1, [r1, #8]	@ 0002575e 8968
.org 0x25760
	bl 0x275f0	@ 00025760 01f046ff
.org 0x25764
	ldrb r1, [r6, #4]	@ 00025764 3179
.org 0x25766
	mov r0, r8	@ 00025766 4046
.org 0x25768
	ands r0, r1	@ 00025768 0840
.org 0x2576a
	strb r0, [r6, #4]	@ 0002576a 3071
.org 0x2576c
	movs r0, #5	@ 0002576c 0520
.org 0x2576e
	strb r0, [r7, #0]	@ 0002576e 3870
.org 0x25770
	b.n 0x25cee	@ 00025770 bde2
.org 0x25772
	.byte 0x00	@ 00025772 data
.org 0x25773
	.byte 0x00	@ 00025773 data
.org 0x25774
	.byte 0xf8,0x2c,0x84,0x08	@ 00025774 data
.org 0x25778
	cmp r4, #4	@ 00025778 042c
.org 0x2577a
	bne.n 0x25798	@ 0002577a 0dd1
.org 0x2577c
	movs r1, #8	@ 0002577c 0821
.org 0x2577e
	adds r0, r2, #0	@ 0002577e 101c
.org 0x25780
	orrs r0, r1	@ 00025780 0843
.org 0x25782
	strb r0, [r6, #4]	@ 00025782 3071
.org 0x25784
	adds r0, r3, #0	@ 00025784 181c
.org 0x25786
	adds r0, #16	@ 00025786 1030
.org 0x25788
	ldr r1, [pc, #8]	@ 00025788 0249
.org 0x2578a
	ldr r1, [r1, #56]	@ 0002578a 896b
.org 0x2578c
	ldr r1, [r1, #36]	@ 0002578c 496a
.org 0x2578e
	bl 0x275f0	@ 0002578e 01f02fff
.org 0x25792
	b.n 0x25c08	@ 00025792 39e2
.org 0x25794
	.byte 0xf8,0x2c,0x84,0x08	@ 00025794 data
.org 0x25798
	cmp r4, #5	@ 00025798 052c
.org 0x2579a
	beq.n 0x2579e	@ 0002579a 00d0
.org 0x2579c
	b.n 0x25cee	@ 0002579c a7e2
.org 0x2579e
	movs r0, #4	@ 0002579e 0420
.org 0x257a0
	orrs r1, r0	@ 000257a0 0143
.org 0x257a2
	mov r2, r9	@ 000257a2 4a46
.org 0x257a4
	orrs r1, r2	@ 000257a4 1143
.org 0x257a6
	ldr r0, [pc, #12]	@ 000257a6 0348
.org 0x257a8
	ands r1, r0	@ 000257a8 0140
.org 0x257aa
	strh r1, [r3, #8]	@ 000257aa 1981
.org 0x257ac
	movs r0, #8	@ 000257ac 0820
.org 0x257ae
	strb r0, [r7, #0]	@ 000257ae 3870
.org 0x257b0
	b.n 0x25cee	@ 000257b0 9de2
.org 0x257b2
	.byte 0x00	@ 000257b2 data
.org 0x257b3
	.byte 0x00	@ 000257b3 data
.org 0x257b4
	.byte 0xfe,0xff,0x00,0x00	@ 000257b4 data
.org 0x257b8
	cmp r5, #1	@ 000257b8 012d
.org 0x257ba
	bne.n 0x257d8	@ 000257ba 0dd1
.org 0x257bc
	movs r0, #2	@ 000257bc 0220
.org 0x257be
	bl 0x1f63c	@ 000257be f9f73dff
.org 0x257c2
	ldr r0, [pc, #16]	@ 000257c2 0448
.org 0x257c4
	movs r3, #196	@ 000257c4 c423
.org 0x257c6
	lsls r3, r3, #1	@ 000257c6 5b00
.org 0x257c8
	adds r0, r0, r3	@ 000257c8 c018
.org 0x257ca
	movs r1, #0	@ 000257ca 0021
.org 0x257cc
	strb r1, [r0, #0]	@ 000257cc 0170
.org 0x257ce
	movs r0, #2	@ 000257ce 0220
.org 0x257d0
	strb r0, [r7, #0]	@ 000257d0 3870
.org 0x257d2
	b.n 0x25cee	@ 000257d2 8ce2
.org 0x257d4
	.byte 0x10,0xe9,0x02,0x02	@ 000257d4 data
.org 0x257d8
	cmp r5, #2	@ 000257d8 022d
.org 0x257da
	beq.n 0x257de	@ 000257da 00d0
.org 0x257dc
	b.n 0x25bb8	@ 000257dc ece1
.org 0x257de
	ldr r4, [sp, #32]	@ 000257de 089c
.org 0x257e0
	ldr r5, [pc, #20]	@ 000257e0 054d
.org 0x257e2
	adds r0, r4, r5	@ 000257e2 6019
.org 0x257e4
	ldrb r0, [r0, #0]	@ 000257e4 0078
.org 0x257e6
	cmp r0, #4	@ 000257e6 0428
.org 0x257e8
	bls.n 0x257ec	@ 000257e8 00d9
.org 0x257ea
	b.n 0x25cee	@ 000257ea 80e2
.org 0x257ec
	lsls r0, r0, #2	@ 000257ec 8000
.org 0x257ee
	ldr r1, [pc, #12]	@ 000257ee 0349
.org 0x257f0
	adds r0, r0, r1	@ 000257f0 4018
.org 0x257f2
	ldr r0, [r0, #0]	@ 000257f2 0068
.org 0x257f4
	mov pc, r0	@ 000257f4 8746
.org 0x257f6
	.byte 0x00	@ 000257f6 data
.org 0x257f7
	.byte 0x00	@ 000257f7 data
.org 0x257f8
	.byte 0x7d,0x01,0x00,0x00	@ 000257f8 data
.org 0x257fc
	.byte 0x00,0x58,0x02,0x08	@ 000257fc data
.org 0x25800
	.byte 0x14,0x58,0x02,0x08	@ 00025800 data
.org 0x25804
	.byte 0xf8,0x58,0x02,0x08	@ 00025804 data
.org 0x25808
	.byte 0x68,0x59,0x02,0x08	@ 00025808 data
.org 0x2580c
	.byte 0xec,0x5a,0x02,0x08	@ 0002580c data
.org 0x25810
	.byte 0x1c,0x5b,0x02,0x08	@ 00025810 data
.org 0x25814
	.byte 0x09	@ 00025814 data
.org 0x25815
	.byte 0x4a	@ 00025815 data
.org 0x25816
	.byte 0x51	@ 00025816 data
.org 0x25817
	.byte 0x7b	@ 00025817 data
.org 0x25818
	.byte 0x04	@ 00025818 data
.org 0x25819
	.byte 0x20	@ 00025819 data
.org 0x2581a
	.byte 0x08	@ 0002581a data
.org 0x2581b
	.byte 0x40	@ 0002581b data
.org 0x2581c
	.byte 0x00	@ 0002581c data
.org 0x2581d
	.byte 0x06	@ 0002581d data
.org 0x2581e
	.byte 0x04	@ 0002581e data
.org 0x2581f
	.byte 0x0e	@ 0002581f data
.org 0x25820
	.byte 0x16	@ 00025820 data
.org 0x25821
	.byte 0x1c	@ 00025821 data
.org 0x25822
	.byte 0x00	@ 00025822 data
.org 0x25823
	.byte 0x2c	@ 00025823 data
.org 0x25824
	.byte 0x10	@ 00025824 data
.org 0x25825
	.byte 0xd1	@ 00025825 data
.org 0x25826
	.byte 0x99	@ 00025826 data
.org 0x25827
	.byte 0x6d	@ 00025827 data
.org 0x25828
	.byte 0x05	@ 00025828 data
.org 0x25829
	.byte 0x48	@ 00025829 data
.org 0x2582a
	.byte 0x81	@ 0002582a data
.org 0x2582b
	.byte 0x42	@ 0002582b data
.org 0x2582c
	.byte 0x0c	@ 0002582c data
.org 0x2582d
	.byte 0xdc	@ 0002582d data
.org 0x2582e
	.byte 0x05	@ 0002582e data
.org 0x2582f
	.byte 0x48	@ 0002582f data
.org 0x25830
	.byte 0xc4	@ 00025830 data
.org 0x25831
	.byte 0x21	@ 00025831 data
.org 0x25832
	.byte 0x49	@ 00025832 data
.org 0x25833
	.byte 0x00	@ 00025833 data
.org 0x25834
	.byte 0x40	@ 00025834 data
.org 0x25835
	.byte 0x18	@ 00025835 data
.org 0x25836
	.byte 0x04	@ 00025836 data
.org 0x25837
	.byte 0x70	@ 00025837 data
.org 0x25838
	.byte 0x58	@ 00025838 data
.org 0x25839
	.byte 0xe0	@ 00025839 data
.org 0x2583a
	.byte 0x00	@ 0002583a data
.org 0x2583b
	.byte 0x00	@ 0002583b data
.org 0x2583c
	.byte 0xb0	@ 0002583c data
.org 0x2583d
	.byte 0xe8	@ 0002583d data
.org 0x2583e
	.byte 0x02	@ 0002583e data
.org 0x2583f
	.byte 0x02	@ 0002583f data
.org 0x25840
	.byte 0xff	@ 00025840 data
.org 0x25841
	.byte 0x9f	@ 00025841 data
.org 0x25842
	.byte 0x00	@ 00025842 data
.org 0x25843
	.byte 0x00	@ 00025843 data
.org 0x25844
	.byte 0x10	@ 00025844 data
.org 0x25845
	.byte 0xe9	@ 00025845 data
.org 0x25846
	.byte 0x02	@ 00025846 data
.org 0x25847
	.byte 0x02	@ 00025847 data
.org 0x25848
	.byte 0x71	@ 00025848 data
.org 0x25849
	.byte 0x7b	@ 00025849 data
.org 0x2584a
	.byte 0x08	@ 0002584a data
.org 0x2584b
	.byte 0x20	@ 0002584b data
.org 0x2584c
	.byte 0x08	@ 0002584c data
.org 0x2584d
	.byte 0x40	@ 0002584d data
.org 0x2584e
	.byte 0x00	@ 0002584e data
.org 0x2584f
	.byte 0x28	@ 0002584f data
.org 0x25850
	.byte 0x0e	@ 00025850 data
.org 0x25851
	.byte 0xd1	@ 00025851 data
.org 0x25852
	.byte 0x99	@ 00025852 data
.org 0x25853
	.byte 0x6d	@ 00025853 data
.org 0x25854
	.byte 0xb4	@ 00025854 data
.org 0x25855
	.byte 0x20	@ 00025855 data
.org 0x25856
	.byte 0x00	@ 00025856 data
.org 0x25857
	.byte 0x03	@ 00025857 data
.org 0x25858
	.byte 0x81	@ 00025858 data
.org 0x25859
	.byte 0x42	@ 00025859 data
.org 0x2585a
	.byte 0x09	@ 0002585a data
.org 0x2585b
	.byte 0xdd	@ 0002585b data
.org 0x2585c
	.byte 0x03	@ 0002585c data
.org 0x2585d
	.byte 0x48	@ 0002585d data
.org 0x2585e
	.byte 0xc4	@ 0002585e data
.org 0x2585f
	.byte 0x22	@ 0002585f data
.org 0x25860
	.byte 0x52	@ 00025860 data
.org 0x25861
	.byte 0x00	@ 00025861 data
.org 0x25862
	.byte 0x80	@ 00025862 data
.org 0x25863
	.byte 0x18	@ 00025863 data
.org 0x25864
	.byte 0x01	@ 00025864 data
.org 0x25865
	.byte 0x21	@ 00025865 data
.org 0x25866
	.byte 0x01	@ 00025866 data
.org 0x25867
	.byte 0x70	@ 00025867 data
.org 0x25868
	.byte 0x40	@ 00025868 data
.org 0x25869
	.byte 0xe0	@ 00025869 data
.org 0x2586a
	.byte 0x00	@ 0002586a data
.org 0x2586b
	.byte 0x00	@ 0002586b data
.org 0x2586c
	.byte 0x10	@ 0002586c data
.org 0x2586d
	.byte 0xe9	@ 0002586d data
.org 0x2586e
	.byte 0x02	@ 0002586e data
.org 0x2586f
	.byte 0x02	@ 0002586f data
.org 0x25870
	.byte 0x71	@ 00025870 data
.org 0x25871
	.byte 0x7b	@ 00025871 data
.org 0x25872
	.byte 0x10	@ 00025872 data
.org 0x25873
	.byte 0x20	@ 00025873 data
.org 0x25874
	.byte 0x08	@ 00025874 data
.org 0x25875
	.byte 0x40	@ 00025875 data
.org 0x25876
	.byte 0x00	@ 00025876 data
.org 0x25877
	.byte 0x28	@ 00025877 data
.org 0x25878
	.byte 0x0e	@ 00025878 data
.org 0x25879
	.byte 0xd1	@ 00025879 data
.org 0x2587a
	.byte 0x59	@ 0002587a data
.org 0x2587b
	.byte 0x6d	@ 0002587b data
.org 0x2587c
	.byte 0x04	@ 0002587c data
.org 0x2587d
	.byte 0x48	@ 0002587d data
.org 0x2587e
	.byte 0x81	@ 0002587e data
.org 0x2587f
	.byte 0x42	@ 0002587f data
.org 0x25880
	.byte 0x0a	@ 00025880 data
.org 0x25881
	.byte 0xdc	@ 00025881 data
.org 0x25882
	.byte 0x04	@ 00025882 data
.org 0x25883
	.byte 0x48	@ 00025883 data
.org 0x25884
	.byte 0xc4	@ 00025884 data
.org 0x25885
	.byte 0x23	@ 00025885 data
.org 0x25886
	.byte 0x5b	@ 00025886 data
.org 0x25887
	.byte 0x00	@ 00025887 data
.org 0x25888
	.byte 0xc0	@ 00025888 data
.org 0x25889
	.byte 0x18	@ 00025889 data
.org 0x2588a
	.byte 0x02	@ 0002588a data
.org 0x2588b
	.byte 0x21	@ 0002588b data
.org 0x2588c
	.byte 0x01	@ 0002588c data
.org 0x2588d
	.byte 0x70	@ 0002588d data
.org 0x2588e
	.byte 0x2d	@ 0002588e data
.org 0x2588f
	.byte 0xe0	@ 0002588f data
.org 0x25890
	.byte 0xff	@ 00025890 data
.org 0x25891
	.byte 0xdf	@ 00025891 data
.org 0x25892
	.byte 0x01	@ 00025892 data
.org 0x25893
	.byte 0x00	@ 00025893 data
.org 0x25894
	.byte 0x10	@ 00025894 data
.org 0x25895
	.byte 0xe9	@ 00025895 data
.org 0x25896
	.byte 0x02	@ 00025896 data
.org 0x25897
	.byte 0x02	@ 00025897 data
.org 0x25898
	.byte 0x71	@ 00025898 data
.org 0x25899
	.byte 0x7b	@ 00025899 data
.org 0x2589a
	.byte 0x20	@ 0002589a data
.org 0x2589b
	.byte 0x20	@ 0002589b data
.org 0x2589c
	.byte 0x08	@ 0002589c data
.org 0x2589d
	.byte 0x40	@ 0002589d data
.org 0x2589e
	.byte 0x00	@ 0002589e data
.org 0x2589f
	.byte 0x28	@ 0002589f data
.org 0x258a0
	.byte 0x0e	@ 000258a0 data
.org 0x258a1
	.byte 0xd1	@ 000258a1 data
.org 0x258a2
	.byte 0x59	@ 000258a2 data
.org 0x258a3
	.byte 0x6d	@ 000258a3 data
.org 0x258a4
	.byte 0x04	@ 000258a4 data
.org 0x258a5
	.byte 0x48	@ 000258a5 data
.org 0x258a6
	.byte 0x81	@ 000258a6 data
.org 0x258a7
	.byte 0x42	@ 000258a7 data
.org 0x258a8
	.byte 0x0a	@ 000258a8 data
.org 0x258a9
	.byte 0xdd	@ 000258a9 data
.org 0x258aa
	.byte 0x04	@ 000258aa data
.org 0x258ab
	.byte 0x48	@ 000258ab data
.org 0x258ac
	.byte 0xc4	@ 000258ac data
.org 0x258ad
	.byte 0x24	@ 000258ad data
.org 0x258ae
	.byte 0x64	@ 000258ae data
.org 0x258af
	.byte 0x00	@ 000258af data
.org 0x258b0
	.byte 0x00	@ 000258b0 data
.org 0x258b1
	.byte 0x19	@ 000258b1 data
.org 0x258b2
	.byte 0x03	@ 000258b2 data
.org 0x258b3
	.byte 0x21	@ 000258b3 data
.org 0x258b4
	.byte 0x01	@ 000258b4 data
.org 0x258b5
	.byte 0x70	@ 000258b5 data
.org 0x258b6
	.byte 0x19	@ 000258b6 data
.org 0x258b7
	.byte 0xe0	@ 000258b7 data
.org 0x258b8
	.byte 0x00	@ 000258b8 data
.org 0x258b9
	.byte 0x50	@ 000258b9 data
.org 0x258ba
	.byte 0x19	@ 000258ba data
.org 0x258bb
	.byte 0x00	@ 000258bb data
.org 0x258bc
	.byte 0x10	@ 000258bc data
.org 0x258bd
	.byte 0xe9	@ 000258bd data
.org 0x258be
	.byte 0x02	@ 000258be data
.org 0x258bf
	.byte 0x02	@ 000258bf data
.org 0x258c0
	.byte 0x71	@ 000258c0 data
.org 0x258c1
	.byte 0x7b	@ 000258c1 data
.org 0x258c2
	.byte 0x3c	@ 000258c2 data
.org 0x258c3
	.byte 0x20	@ 000258c3 data
.org 0x258c4
	.byte 0x08	@ 000258c4 data
.org 0x258c5
	.byte 0x40	@ 000258c5 data
.org 0x258c6
	.byte 0x3c	@ 000258c6 data
.org 0x258c7
	.byte 0x28	@ 000258c7 data
.org 0x258c8
	.byte 0x00	@ 000258c8 data
.org 0x258c9
	.byte 0xd0	@ 000258c9 data
.org 0x258ca
	.byte 0x10	@ 000258ca data
.org 0x258cb
	.byte 0xe2	@ 000258cb data
.org 0x258cc
	.byte 0x08	@ 000258cc data
.org 0x258cd
	.byte 0x9d	@ 000258cd data
.org 0x258ce
	.byte 0x05	@ 000258ce data
.org 0x258cf
	.byte 0x48	@ 000258cf data
.org 0x258d0
	.byte 0x29	@ 000258d0 data
.org 0x258d1
	.byte 0x18	@ 000258d1 data
.org 0x258d2
	.byte 0x03	@ 000258d2 data
.org 0x258d3
	.byte 0x20	@ 000258d3 data
.org 0x258d4
	.byte 0x08	@ 000258d4 data
.org 0x258d5
	.byte 0x70	@ 000258d5 data
.org 0x258d6
	.byte 0x04	@ 000258d6 data
.org 0x258d7
	.byte 0x48	@ 000258d7 data
.org 0x258d8
	.byte 0xc5	@ 000258d8 data
.org 0x258d9
	.byte 0x22	@ 000258d9 data
.org 0x258da
	.byte 0x52	@ 000258da data
.org 0x258db
	.byte 0x00	@ 000258db data
.org 0x258dc
	.byte 0x81	@ 000258dc data
.org 0x258dd
	.byte 0x18	@ 000258dd data
.org 0x258de
	.byte 0x1e	@ 000258de data
.org 0x258df
	.byte 0x20	@ 000258df data
.org 0x258e0
	.byte 0x08	@ 000258e0 data
.org 0x258e1
	.byte 0x80	@ 000258e1 data
.org 0x258e2
	.byte 0x04	@ 000258e2 data
.org 0x258e3
	.byte 0xe2	@ 000258e3 data
.org 0x258e4
	.byte 0x7d	@ 000258e4 data
.org 0x258e5
	.byte 0x01	@ 000258e5 data
