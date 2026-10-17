@ FUN_0802476c  entry 0x0802476c  size 618
.thumb
.org 0x2476c
FUN_0802476c:
	push {r4, r5, r6, r7, lr}	@ 0002476c f0b5
.org 0x2476e
	mov r7, r8	@ 0002476e 4746
.org 0x24770
	push {r7}	@ 00024770 80b4
.org 0x24772
	adds r7, r0, #0	@ 00024772 071c
.org 0x24774
	ldr r4, [r7, #32]	@ 00024774 3c6a
.org 0x24776
	movs r0, #190	@ 00024776 be20
.org 0x24778
	lsls r0, r0, #1	@ 00024778 4000
.org 0x2477a
	adds r0, r0, r7	@ 0002477a c019
.org 0x2477c
	mov r8, r0	@ 0002477c 8046
.org 0x2477e
	ldrb r6, [r0, #0]	@ 0002477e 0678
.org 0x24780
	cmp r6, #0	@ 00024780 002e
.org 0x24782
	bne.n 0x24850	@ 00024782 65d1
.org 0x24784
	ldr r5, [pc, #48]	@ 00024784 0c4d
.org 0x24786
	ldrh r1, [r5, #8]	@ 00024786 2989
.org 0x24788
	movs r0, #1	@ 00024788 0120
.org 0x2478a
	orrs r0, r1	@ 0002478a 0843
.org 0x2478c
	strh r0, [r5, #8]	@ 0002478c 2881
.org 0x2478e
	ldr r2, [pc, #44]	@ 0002478e 0b4a
.org 0x24790
	ldrb r1, [r2, #4]	@ 00024790 1179
.org 0x24792
	movs r0, #8	@ 00024792 0820
.org 0x24794
	orrs r0, r1	@ 00024794 0843
.org 0x24796
	strb r0, [r2, #4]	@ 00024796 1071
.org 0x24798
	ldrb r4, [r5, #2]	@ 00024798 ac78
.org 0x2479a
	cmp r4, #0	@ 0002479a 002c
.org 0x2479c
	bne.n 0x247c4	@ 0002479c 12d1
.org 0x2479e
	adds r0, r5, #0	@ 0002479e 281c
.org 0x247a0
	adds r0, #16	@ 000247a0 1030
.org 0x247a2
	ldr r1, [pc, #28]	@ 000247a2 0749
.org 0x247a4
	ldr r1, [r1, #40]	@ 000247a4 896a
.org 0x247a6
	ldr r1, [r1, #56]	@ 000247a6 896b
.org 0x247a8
	bl 0x275f0	@ 000247a8 02f022ff
.org 0x247ac
	movs r0, #2	@ 000247ac 0220
.org 0x247ae
	bl 0x1f63c	@ 000247ae faf745ff
.org 0x247b2
	strh r6, [r5, #10]	@ 000247b2 6e81
.org 0x247b4
	movs r0, #2	@ 000247b4 0220
.org 0x247b6
	b.n 0x24860	@ 000247b6 53e0
.org 0x247b8
	.byte 0x10,0xe9,0x02,0x02	@ 000247b8 data
.org 0x247bc
	.byte 0xb0,0xe8,0x02,0x02	@ 000247bc data
.org 0x247c0
	.byte 0xf8,0x2c,0x84,0x08	@ 000247c0 data
.org 0x247c4
	cmp r4, #2	@ 000247c4 022c
.org 0x247c6
	bne.n 0x247e0	@ 000247c6 0bd1
.org 0x247c8
	adds r0, r5, #0	@ 000247c8 281c
.org 0x247ca
	adds r0, #16	@ 000247ca 1030
.org 0x247cc
	ldr r1, [pc, #12]	@ 000247cc 0349
.org 0x247ce
	ldr r1, [r1, #40]	@ 000247ce 896a
.org 0x247d0
	ldr r1, [r1, #8]	@ 000247d0 8968
.org 0x247d2
	bl 0x275f0	@ 000247d2 02f00dff
.org 0x247d6
	mov r0, r8	@ 000247d6 4046
.org 0x247d8
	strb r4, [r0, #0]	@ 000247d8 0470
.org 0x247da
	b.n 0x24a54	@ 000247da 3be1
.org 0x247dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000247dc data
.org 0x247e0
	cmp r4, #3	@ 000247e0 032c
.org 0x247e2
	bne.n 0x24800	@ 000247e2 0dd1
.org 0x247e4
	adds r0, r5, #0	@ 000247e4 281c
.org 0x247e6
	adds r0, #16	@ 000247e6 1030
.org 0x247e8
	ldr r1, [pc, #16]	@ 000247e8 0449
.org 0x247ea
	ldr r1, [r1, #40]	@ 000247ea 896a
.org 0x247ec
	ldr r1, [r1, #16]	@ 000247ec 0969
.org 0x247ee
	bl 0x275f0	@ 000247ee 02f0fffe
.org 0x247f2
	movs r0, #4	@ 000247f2 0420
.org 0x247f4
	bl 0x1f63c	@ 000247f4 faf722ff
.org 0x247f8
	movs r0, #4	@ 000247f8 0420
.org 0x247fa
	b.n 0x24860	@ 000247fa 31e0
.org 0x247fc
	.byte 0xf8,0x2c,0x84,0x08	@ 000247fc data
.org 0x24800
	cmp r4, #4	@ 00024800 042c
.org 0x24802
	bne.n 0x2481c	@ 00024802 0bd1
.org 0x24804
	adds r0, r5, #0	@ 00024804 281c
.org 0x24806
	adds r0, #16	@ 00024806 1030
.org 0x24808
	ldr r1, [pc, #12]	@ 00024808 0349
.org 0x2480a
	ldr r1, [r1, #40]	@ 0002480a 896a
.org 0x2480c
	ldr r1, [r1, #24]	@ 0002480c 8969
.org 0x2480e
	bl 0x275f0	@ 0002480e 02f0effe
.org 0x24812
	movs r0, #5	@ 00024812 0520
.org 0x24814
	b.n 0x24860	@ 00024814 24e0
.org 0x24816
	.byte 0x00	@ 00024816 data
.org 0x24817
	.byte 0x00	@ 00024817 data
.org 0x24818
	.byte 0xf8,0x2c,0x84,0x08	@ 00024818 data
.org 0x2481c
	cmp r4, #5	@ 0002481c 052c
.org 0x2481e
	beq.n 0x24822	@ 0002481e 00d0
.org 0x24820
	b.n 0x24a54	@ 00024820 18e1
.org 0x24822
	ldrh r0, [r5, #10]	@ 00024822 6889
.org 0x24824
	cmp r0, #0	@ 00024824 0028
.org 0x24826
	beq.n 0x2483c	@ 00024826 09d0
.org 0x24828
	adds r0, r5, #0	@ 00024828 281c
.org 0x2482a
	adds r0, #16	@ 0002482a 1030
.org 0x2482c
	ldr r1, [pc, #8]	@ 0002482c 0249
.org 0x2482e
	ldr r1, [r1, #40]	@ 0002482e 896a
.org 0x24830
	ldr r1, [r1, #32]	@ 00024830 096a
.org 0x24832
	bl 0x275f0	@ 00024832 02f0ddfe
.org 0x24836
	b.n 0x249de	@ 00024836 d2e0
.org 0x24838
	.byte 0xf8,0x2c,0x84,0x08	@ 00024838 data
.org 0x2483c
	adds r0, r5, #0	@ 0002483c 281c
.org 0x2483e
	adds r0, #16	@ 0002483e 1030
.org 0x24840
	ldr r1, [pc, #8]	@ 00024840 0249
.org 0x24842
	ldr r1, [r1, #40]	@ 00024842 896a
.org 0x24844
	ldr r1, [r1, #64]	@ 00024844 096c
.org 0x24846
	bl 0x275f0	@ 00024846 02f0d3fe
.org 0x2484a
	b.n 0x249de	@ 0002484a c8e0
.org 0x2484c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002484c data
.org 0x24850
	cmp r6, #2	@ 00024850 022e
.org 0x24852
	bne.n 0x24866	@ 00024852 08d1
.org 0x24854
	ldr r1, [r4, #84]	@ 00024854 616d
.org 0x24856
	movs r0, #150	@ 00024856 9620
.org 0x24858
	lsls r0, r0, #13	@ 00024858 4003
.org 0x2485a
	cmp r1, r0	@ 0002485a 8142
.org 0x2485c
	ble.n 0x24866	@ 0002485c 03dd
.org 0x2485e
	movs r0, #3	@ 0002485e 0320
.org 0x24860
	mov r1, r8	@ 00024860 4146
.org 0x24862
	strb r0, [r1, #0]	@ 00024862 0870
.org 0x24864
	b.n 0x24a54	@ 00024864 f6e0
.org 0x24866
	movs r0, #190	@ 00024866 be20
.org 0x24868
	lsls r0, r0, #1	@ 00024868 4000
.org 0x2486a
	adds r5, r7, r0	@ 0002486a 3d18
.org 0x2486c
	ldrb r0, [r5, #0]	@ 0002486c 2878
.org 0x2486e
	cmp r0, #3	@ 0002486e 0328
.org 0x24870
	bne.n 0x248ac	@ 00024870 1cd1
.org 0x24872
	ldr r1, [r4, #84]	@ 00024872 616d
.org 0x24874
	ldr r0, [pc, #36]	@ 00024874 0948
.org 0x24876
	cmp r1, r0	@ 00024876 8142
.org 0x24878
	ble.n 0x248ac	@ 00024878 18dd
.org 0x2487a
	ldr r0, [pc, #36]	@ 0002487a 0948
.org 0x2487c
	ldr r1, [pc, #36]	@ 0002487c 0949
.org 0x2487e
	ldr r1, [r1, #40]	@ 0002487e 896a
.org 0x24880
	ldr r1, [r1, #20]	@ 00024880 4969
.org 0x24882
	bl 0x275f0	@ 00024882 02f0b5fe
.org 0x24886
	movs r0, #4	@ 00024886 0420
.org 0x24888
	bl 0x1f63c	@ 00024888 faf7d8fe
.org 0x2488c
	ldr r2, [pc, #24]	@ 0002488c 064a
.org 0x2488e
	ldrb r1, [r2, #4]	@ 0002488e 1179
.org 0x24890
	movs r0, #8	@ 00024890 0820
.org 0x24892
	orrs r0, r1	@ 00024892 0843
.org 0x24894
	strb r0, [r2, #4]	@ 00024894 1071
.org 0x24896
	movs r0, #5	@ 00024896 0520
.org 0x24898
	b.n 0x24a52	@ 00024898 dbe0
.org 0x2489a
	.byte 0x00	@ 0002489a data
.org 0x2489b
	.byte 0x00	@ 0002489b data
.org 0x2489c
	.byte 0x00,0x18,0x15,0x00	@ 0002489c data
.org 0x248a0
	.byte 0x20,0xe9,0x02,0x02	@ 000248a0 data
.org 0x248a4
	.byte 0xf8,0x2c,0x84,0x08	@ 000248a4 data
.org 0x248a8
	.byte 0xb0,0xe8,0x02,0x02	@ 000248a8 data
.org 0x248ac
	movs r1, #190	@ 000248ac be21
.org 0x248ae
	lsls r1, r1, #1	@ 000248ae 4900
.org 0x248b0
	adds r5, r7, r1	@ 000248b0 7d18
.org 0x248b2
	ldrb r0, [r5, #0]	@ 000248b2 2878
.org 0x248b4
	cmp r0, #4	@ 000248b4 0428
.org 0x248b6
	bne.n 0x248f0	@ 000248b6 1bd1
.org 0x248b8
	ldr r1, [r4, #84]	@ 000248b8 616d
.org 0x248ba
	ldr r0, [pc, #36]	@ 000248ba 0948
.org 0x248bc
	cmp r1, r0	@ 000248bc 8142
.org 0x248be
	ble.n 0x248f0	@ 000248be 17dd
.org 0x248c0
	ldr r0, [pc, #32]	@ 000248c0 0848
.org 0x248c2
	ldr r1, [pc, #36]	@ 000248c2 0949
.org 0x248c4
	ldr r1, [r1, #40]	@ 000248c4 896a
.org 0x248c6
	ldr r1, [r1, #20]	@ 000248c6 4969
.org 0x248c8
	bl 0x275f0	@ 000248c8 02f092fe
.org 0x248cc
	movs r0, #4	@ 000248cc 0420
.org 0x248ce
	bl 0x1f63c	@ 000248ce faf7b5fe
.org 0x248d2
	ldr r2, [pc, #24]	@ 000248d2 064a
.org 0x248d4
	ldrb r1, [r2, #4]	@ 000248d4 1179
.org 0x248d6
	movs r0, #8	@ 000248d6 0820
.org 0x248d8
	orrs r0, r1	@ 000248d8 0843
.org 0x248da
	strb r0, [r2, #4]	@ 000248da 1071
.org 0x248dc
	movs r0, #5	@ 000248dc 0520
.org 0x248de
	b.n 0x24a52	@ 000248de b8e0
.org 0x248e0
	.byte 0x00,0x18,0x15,0x00	@ 000248e0 data
.org 0x248e4
	.byte 0x20,0xe9,0x02,0x02	@ 000248e4 data
.org 0x248e8
	.byte 0xf8,0x2c,0x84,0x08	@ 000248e8 data
.org 0x248ec
	.byte 0xb0,0xe8,0x02,0x02	@ 000248ec data
.org 0x248f0
	movs r0, #190	@ 000248f0 be20
.org 0x248f2
	lsls r0, r0, #1	@ 000248f2 4000
.org 0x248f4
	adds r5, r7, r0	@ 000248f4 3d18
.org 0x248f6
	ldrb r0, [r5, #0]	@ 000248f6 2878
.org 0x248f8
	cmp r0, #5	@ 000248f8 0528
.org 0x248fa
	bne.n 0x24906	@ 000248fa 04d1
.org 0x248fc
	movs r0, #3	@ 000248fc 0320
.org 0x248fe
	bl 0x1f63c	@ 000248fe faf79dfe
.org 0x24902
	movs r0, #6	@ 00024902 0620
.org 0x24904
	b.n 0x24a52	@ 00024904 a5e0
.org 0x24906
	cmp r0, #6	@ 00024906 0628
.org 0x24908
	bne.n 0x24978	@ 00024908 36d1
.org 0x2490a
	ldr r0, [pc, #80]	@ 0002490a 1448
.org 0x2490c
	ldr r1, [pc, #80]	@ 0002490c 1449
.org 0x2490e
	adds r0, r0, r1	@ 0002490e 4018
.org 0x24910
	ldrb r0, [r0, #0]	@ 00024910 0078
.org 0x24912
	cmp r0, #40	@ 00024912 2828
.org 0x24914
	bne.n 0x24978	@ 00024914 30d1
.org 0x24916
	ldr r1, [pc, #76]	@ 00024916 1349
.org 0x24918
	ldrb r2, [r1, #0]	@ 00024918 0a78
.org 0x2491a
	movs r0, #128	@ 0002491a 8020
.org 0x2491c
	orrs r0, r2	@ 0002491c 1043
.org 0x2491e
	strb r0, [r1, #0]	@ 0002491e 0870
.org 0x24920
	ldrb r2, [r1, #1]	@ 00024920 4a78
.org 0x24922
	movs r0, #2	@ 00024922 0220
.org 0x24924
	orrs r0, r2	@ 00024924 1043
.org 0x24926
	strb r0, [r1, #1]	@ 00024926 4870
.org 0x24928
	ldr r4, [pc, #60]	@ 00024928 0f4c
.org 0x2492a
	ldr r0, [pc, #64]	@ 0002492a 1048
.org 0x2492c
	ldr r0, [r0, #40]	@ 0002492c 806a
.org 0x2492e
	ldr r1, [r0, #28]	@ 0002492e c169
.org 0x24930
	adds r0, r4, #0	@ 00024930 201c
.org 0x24932
	bl 0x275f0	@ 00024932 02f05dfe
.org 0x24936
	subs r4, #16	@ 00024936 103c
.org 0x24938
	ldrh r0, [r4, #8]	@ 00024938 2089
.org 0x2493a
	ldr r2, [pc, #52]	@ 0002493a 0d4a
.org 0x2493c
	ands r2, r0	@ 0002493c 0240
.org 0x2493e
	ldrb r1, [r4, #18]	@ 0002493e a17c
.org 0x24940
	movs r0, #253	@ 00024940 fd20
.org 0x24942
	ands r0, r1	@ 00024942 0840
.org 0x24944
	strb r0, [r4, #18]	@ 00024944 a074
.org 0x24946
	ldr r3, [pc, #44]	@ 00024946 0b4b
.org 0x24948
	ldrb r1, [r3, #4]	@ 00024948 1979
.org 0x2494a
	movs r0, #247	@ 0002494a f720
.org 0x2494c
	ands r0, r1	@ 0002494c 0840
.org 0x2494e
	strb r0, [r3, #4]	@ 0002494e 1871
.org 0x24950
	movs r0, #1	@ 00024950 0120
.org 0x24952
	orrs r2, r0	@ 00024952 0243
.org 0x24954
	strh r2, [r4, #8]	@ 00024954 2281
.org 0x24956
	movs r0, #7	@ 00024956 0720
.org 0x24958
	b.n 0x24a52	@ 00024958 7be0
.org 0x2495a
	.byte 0x00	@ 0002495a data
.org 0x2495b
	.byte 0x00	@ 0002495b data
.org 0x2495c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002495c data
.org 0x24960
	.byte 0x24,0xd0,0x02,0x00	@ 00024960 data
.org 0x24964
	.byte 0xe0,0x32,0x00,0x03	@ 00024964 data
.org 0x24968
	.byte 0x20,0xe9,0x02,0x02	@ 00024968 data
.org 0x2496c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002496c data
.org 0x24970
	.byte 0xef,0xff,0x00,0x00	@ 00024970 data
.org 0x24974
	.byte 0xb0,0xe8,0x02,0x02	@ 00024974 data
.org 0x24978
	movs r0, #190	@ 00024978 be20
.org 0x2497a
	lsls r0, r0, #1	@ 0002497a 4000
.org 0x2497c
	adds r3, r7, r0	@ 0002497c 3b18
.org 0x2497e
	ldrb r0, [r3, #0]	@ 0002497e 1878
.org 0x24980
	cmp r0, #7	@ 00024980 0728
.org 0x24982
	bne.n 0x2499c	@ 00024982 0bd1
.org 0x24984
	ldr r1, [pc, #16]	@ 00024984 0449
.org 0x24986
	ldrb r2, [r1, #0]	@ 00024986 0a78
.org 0x24988
	movs r0, #127	@ 00024988 7f20
.org 0x2498a
	ands r0, r2	@ 0002498a 1040
.org 0x2498c
	movs r2, #0	@ 0002498c 0022
.org 0x2498e
	strb r0, [r1, #0]	@ 0002498e 0870
.org 0x24990
	strb r2, [r1, #1]	@ 00024990 4a70
.org 0x24992
	movs r0, #8	@ 00024992 0820
.org 0x24994
	strb r0, [r3, #0]	@ 00024994 1870
.org 0x24996
	b.n 0x24a54	@ 00024996 5de0
.org 0x24998
	.byte 0xe0,0x32,0x00,0x03	@ 00024998 data
.org 0x2499c
	cmp r0, #8	@ 0002499c 0828
.org 0x2499e
	bne.n 0x249f0	@ 0002499e 27d1
.org 0x249a0
	ldr r1, [r4, #84]	@ 000249a0 616d
.org 0x249a2
	ldr r0, [pc, #36]	@ 000249a2 0948
.org 0x249a4
	cmp r1, r0	@ 000249a4 8142
.org 0x249a6
	ble.n 0x249f0	@ 000249a6 23dd
.org 0x249a8
	movs r0, #5	@ 000249a8 0520
.org 0x249aa
	bl 0x1f63c	@ 000249aa faf747fe
.org 0x249ae
	ldr r2, [pc, #28]	@ 000249ae 074a
.org 0x249b0
	ldrb r1, [r2, #4]	@ 000249b0 1179
.org 0x249b2
	movs r0, #8	@ 000249b2 0820
.org 0x249b4
	orrs r0, r1	@ 000249b4 0843
.org 0x249b6
	strb r0, [r2, #4]	@ 000249b6 1071
.org 0x249b8
	ldr r1, [r4, #88]	@ 000249b8 a16d
.org 0x249ba
	ldr r0, [pc, #20]	@ 000249ba 0548
.org 0x249bc
	cmp r1, r0	@ 000249bc 8142
.org 0x249be
	bgt.n 0x249d8	@ 000249be 0bdc
.org 0x249c0
	ldr r1, [pc, #16]	@ 000249c0 0449
.org 0x249c2
	movs r0, #1	@ 000249c2 0120
.org 0x249c4
	b.n 0x249dc	@ 000249c4 0ae0
.org 0x249c6
	.byte 0x00	@ 000249c6 data
.org 0x249c7
	.byte 0x00	@ 000249c7 data
.org 0x249c8
	.byte 0xff,0x7f,0x17,0x00	@ 000249c8 data
.org 0x249cc
	.byte 0xb0,0xe8,0x02,0x02	@ 000249cc data
.org 0x249d0
	.byte 0xff,0x5f,0x04,0x00	@ 000249d0 data
.org 0x249d4
	.byte 0x10,0xe9,0x02,0x02	@ 000249d4 data
