@ FUN_08052708  entry 0x08052708  size 554
.thumb
.org 0x52708
FUN_08052708:
	push {r4, r5, r6, r7, lr}	@ 00052708 f0b5
.org 0x5270a
	sub sp, #8	@ 0005270a 82b0
.org 0x5270c
	adds r4, r0, #0	@ 0005270c 041c
.org 0x5270e
	ldrb r5, [r4, #14]	@ 0005270e a57b
.org 0x52710
	cmp r5, #0	@ 00052710 002d
.org 0x52712
	bne.n 0x527ec	@ 00052712 6bd1
.org 0x52714
	ldr r1, [pc, #80]	@ 00052714 1449
.org 0x52716
	bl 0x1cf00	@ 00052716 caf7f3fb
.org 0x5271a
	movs r0, #235	@ 0005271a eb20
.org 0x5271c
	bl 0x2b10	@ 0005271c b0f7f8f9
.org 0x52720
	adds r0, r4, #0	@ 00052720 201c
.org 0x52722
	adds r0, #116	@ 00052722 7430
.org 0x52724
	ldr r1, [pc, #68]	@ 00052724 1149
.org 0x52726
	bl 0x5784	@ 00052726 b3f72df8
.org 0x5272a
	adds r0, r4, #0	@ 0005272a 201c
.org 0x5272c
	adds r0, #77	@ 0005272c 4d30
.org 0x5272e
	strb r5, [r0, #0]	@ 0005272e 0570
.org 0x52730
	adds r2, r4, #0	@ 00052730 221c
.org 0x52732
	adds r2, #74	@ 00052732 4a32
.org 0x52734
	ldrb r1, [r2, #0]	@ 00052734 1178
.org 0x52736
	movs r0, #33	@ 00052736 2120
.org 0x52738
	negs r0, r0	@ 00052738 4042
.org 0x5273a
	ands r0, r1	@ 0005273a 0840
.org 0x5273c
	strb r0, [r2, #0]	@ 0005273c 1070
.org 0x5273e
	ldrb r1, [r4, #10]	@ 0005273e a17a
.org 0x52740
	movs r0, #223	@ 00052740 df20
.org 0x52742
	ands r0, r1	@ 00052742 0840
.org 0x52744
	strb r0, [r4, #10]	@ 00052744 a072
.org 0x52746
	adds r1, r4, #0	@ 00052746 211c
.org 0x52748
	adds r1, #180	@ 00052748 b431
.org 0x5274a
	ldr r0, [pc, #36]	@ 0005274a 0948
.org 0x5274c
	ldr r0, [r0, #0]	@ 0005274c 0068
.org 0x5274e
	ldr r3, [r1, #16]	@ 0005274e 0b69
.org 0x52750
	ldr r0, [r0, #84]	@ 00052750 406d
.org 0x52752
	adds r6, r2, #0	@ 00052752 161c
.org 0x52754
	adds r5, r1, #0	@ 00052754 0d1c
.org 0x52756
	cmp r3, r0	@ 00052756 8342
.org 0x52758
	ble.n 0x52778	@ 00052758 0edd
.org 0x5275a
	ldr r0, [r5, #0]	@ 0005275a 2868
.org 0x5275c
	ldr r1, [r5, #4]	@ 0005275c 6968
.org 0x5275e
	bl 0x8868	@ 0005275e b6f783f8
.org 0x52762
	ldr r1, [pc, #16]	@ 00052762 0449
.org 0x52764
	adds r0, r0, r1	@ 00052764 4018
.org 0x52766
	b.n 0x52786	@ 00052766 0ee0
.org 0x52768
	.byte 0x17,0xa1,0x00,0x00	@ 00052768 data
.org 0x5276c
	.byte 0x54,0x7e,0x85,0x08	@ 0005276c data
.org 0x52770
	.byte 0xf0,0xdb,0x02,0x02	@ 00052770 data
.org 0x52774
	.byte 0x00,0xe0,0xff,0xff	@ 00052774 data
.org 0x52778
	ldr r0, [r5, #0]	@ 00052778 2868
.org 0x5277a
	ldr r1, [r5, #4]	@ 0005277a 6968
.org 0x5277c
	bl 0x8988	@ 0005277c b6f704f9
.org 0x52780
	movs r2, #128	@ 00052780 8022
.org 0x52782
	lsls r2, r2, #6	@ 00052782 9201
.org 0x52784
	adds r0, r0, r2	@ 00052784 8018
.org 0x52786
	str r0, [r4, #84]	@ 00052786 6065
.org 0x52788
	ldr r0, [r5, #0]	@ 00052788 2868
.org 0x5278a
	ldr r1, [r5, #4]	@ 0005278a 6968
.org 0x5278c
	bl 0x8748	@ 0005278c b5f7dcff
.org 0x52790
	str r0, [r4, #88]	@ 00052790 a065
.org 0x52792
	movs r3, #0	@ 00052792 0023
.org 0x52794
	ldr r0, [pc, #56]	@ 00052794 0e48
.org 0x52796
	ldr r2, [r0, #0]	@ 00052796 0268
.org 0x52798
	ldr r1, [r4, #84]	@ 00052798 616d
.org 0x5279a
	ldr r0, [r2, #84]	@ 0005279a 506d
.org 0x5279c
	cmp r1, r0	@ 0005279c 8142
.org 0x5279e
	bge.n 0x527a2	@ 0005279e 00da
.org 0x527a0
	movs r3, #1	@ 000527a0 0123
.org 0x527a2
	adds r0, r4, #0	@ 000527a2 201c
.org 0x527a4
	adds r0, #76	@ 000527a4 4c30
.org 0x527a6
	strb r3, [r0, #0]	@ 000527a6 0370
.org 0x527a8
	movs r3, #0	@ 000527a8 0023
.org 0x527aa
	ldr r1, [r4, #84]	@ 000527aa 616d
.org 0x527ac
	ldr r0, [r2, #84]	@ 000527ac 506d
.org 0x527ae
	cmp r1, r0	@ 000527ae 8142
.org 0x527b0
	bge.n 0x527b4	@ 000527b0 00da
.org 0x527b2
	movs r3, #1	@ 000527b2 0123
.org 0x527b4
	lsls r2, r3, #4	@ 000527b4 1a01
.org 0x527b6
	ldrb r1, [r6, #0]	@ 000527b6 3178
.org 0x527b8
	movs r0, #17	@ 000527b8 1120
.org 0x527ba
	negs r0, r0	@ 000527ba 4042
.org 0x527bc
	ands r0, r1	@ 000527bc 0840
.org 0x527be
	orrs r0, r2	@ 000527be 1043
.org 0x527c0
	strb r0, [r6, #0]	@ 000527c0 3070
.org 0x527c2
	cmp r3, #0	@ 000527c2 002b
.org 0x527c4
	beq.n 0x527d4	@ 000527c4 06d0
.org 0x527c6
	ldrb r0, [r4, #10]	@ 000527c6 a07a
.org 0x527c8
	movs r1, #16	@ 000527c8 1021
.org 0x527ca
	orrs r0, r1	@ 000527ca 0843
.org 0x527cc
	b.n 0x527da	@ 000527cc 05e0
.org 0x527ce
	.byte 0x00	@ 000527ce data
.org 0x527cf
	.byte 0x00	@ 000527cf data
.org 0x527d0
	.byte 0xf0,0xdb,0x02,0x02	@ 000527d0 data
.org 0x527d4
	ldrb r1, [r4, #10]	@ 000527d4 a17a
.org 0x527d6
	movs r0, #239	@ 000527d6 ef20
.org 0x527d8
	ands r0, r1	@ 000527d8 0840
.org 0x527da
	strb r0, [r4, #10]	@ 000527da a072
.org 0x527dc
	movs r0, #128	@ 000527dc 8020
.org 0x527de
	str r0, [r4, #96]	@ 000527de 2066
.org 0x527e0
	movs r1, #0	@ 000527e0 0021
.org 0x527e2
	strb r1, [r4, #18]	@ 000527e2 a174
.org 0x527e4
	ldrb r0, [r4, #14]	@ 000527e4 a07b
.org 0x527e6
	adds r0, #1	@ 000527e6 0130
.org 0x527e8
	strb r0, [r4, #14]	@ 000527e8 a073
.org 0x527ea
	strb r1, [r4, #15]	@ 000527ea e173
.org 0x527ec
	ldrb r0, [r4, #15]	@ 000527ec e07b
.org 0x527ee
	cmp r0, #1	@ 000527ee 0128
.org 0x527f0
	bne.n 0x527f4	@ 000527f0 00d1
.org 0x527f2
	b.n 0x52904	@ 000527f2 87e0
.org 0x527f4
	cmp r0, #1	@ 000527f4 0128
.org 0x527f6
	bgt.n 0x527fe	@ 000527f6 02dc
.org 0x527f8
	cmp r0, #0	@ 000527f8 0028
.org 0x527fa
	beq.n 0x5280c	@ 000527fa 07d0
.org 0x527fc
	b.n 0x52966	@ 000527fc b3e0
.org 0x527fe
	cmp r0, #2	@ 000527fe 0228
.org 0x52800
	bne.n 0x52804	@ 00052800 00d1
.org 0x52802
	b.n 0x52914	@ 00052802 87e0
.org 0x52804
	cmp r0, #3	@ 00052804 0328
.org 0x52806
	bne.n 0x5280a	@ 00052806 00d1
.org 0x52808
	b.n 0x52954	@ 00052808 a4e0
.org 0x5280a
	b.n 0x52966	@ 0005280a ace0
.org 0x5280c
	ldrb r1, [r4, #18]	@ 0005280c a17c
.org 0x5280e
	adds r0, r1, #1	@ 0005280e 481c
.org 0x52810
	strb r0, [r4, #18]	@ 00052810 a074
.org 0x52812
	movs r0, #3	@ 00052812 0320
.org 0x52814
	ands r0, r1	@ 00052814 0840
.org 0x52816
	cmp r0, #1	@ 00052816 0128
.org 0x52818
	bhi.n 0x52824	@ 00052818 04d8
.org 0x5281a
	ldr r0, [r4, #84]	@ 0005281a 606d
.org 0x5281c
	movs r1, #128	@ 0005281c 8021
.org 0x5281e
	lsls r1, r1, #1	@ 0005281e 4900
.org 0x52820
	adds r0, r0, r1	@ 00052820 4018
.org 0x52822
	b.n 0x5282a	@ 00052822 02e0
.org 0x52824
	ldr r0, [r4, #84]	@ 00052824 606d
.org 0x52826
	ldr r2, [pc, #116]	@ 00052826 1d4a
.org 0x52828
	adds r0, r0, r2	@ 00052828 8018
.org 0x5282a
	str r0, [r4, #84]	@ 0005282a 6065
.org 0x5282c
	ldr r1, [r4, #88]	@ 0005282c a16d
.org 0x5282e
	ldr r0, [r4, #96]	@ 0005282e 206e
.org 0x52830
	adds r2, r1, r0	@ 00052830 0a18
.org 0x52832
	str r2, [r4, #88]	@ 00052832 a265
.org 0x52834
	ldrb r1, [r4, #18]	@ 00052834 a17c
.org 0x52836
	movs r7, #1	@ 00052836 0127
.org 0x52838
	movs r0, #1	@ 00052838 0120
.org 0x5283a
	ands r0, r1	@ 0005283a 0840
.org 0x5283c
	cmp r0, #0	@ 0005283c 0028
.org 0x5283e
	beq.n 0x528cc	@ 0005283e 45d0
.org 0x52840
	ldr r0, [r4, #84]	@ 00052840 606d
.org 0x52842
	str r0, [sp, #0]	@ 00052842 0090
.org 0x52844
	adds r1, r2, #0	@ 00052844 111c
.org 0x52846
	bl 0x8748	@ 00052846 b5f77fff
.org 0x5284a
	str r0, [sp, #4]	@ 0005284a 0190
.org 0x5284c
	ldr r2, [sp, #0]	@ 0005284c 009a
.org 0x5284e
	movs r0, #128	@ 0005284e 8020
.org 0x52850
	lsls r0, r0, #5	@ 00052850 4001
.org 0x52852
	adds r2, r2, r0	@ 00052852 1218
.org 0x52854
	ldr r6, [pc, #72]	@ 00052854 124e
.org 0x52856
	ldr r0, [r6, #0]	@ 00052856 3068
.org 0x52858
	ldr r5, [pc, #72]	@ 00052858 124d
.org 0x5285a
	muls r0, r5	@ 0005285a 6843
.org 0x5285c
	ldr r1, [pc, #72]	@ 0005285c 1249
.org 0x5285e
	adds r0, r0, r1	@ 0005285e 4018
.org 0x52860
	lsls r0, r0, #1	@ 00052860 4000
.org 0x52862
	lsrs r3, r0, #1	@ 00052862 4308
.org 0x52864
	str r3, [r6, #0]	@ 00052864 3360
.org 0x52866
	lsrs r0, r0, #17	@ 00052866 400c
.org 0x52868
	movs r1, #31	@ 00052868 1f21
.org 0x5286a
	ands r0, r1	@ 0005286a 0840
.org 0x5286c
	lsls r0, r0, #8	@ 0005286c 0002
.org 0x5286e
	subs r2, r2, r0	@ 0005286e 121a
.org 0x52870
	str r2, [sp, #0]	@ 00052870 0092
.org 0x52872
	ldrb r1, [r4, #18]	@ 00052872 a17c
.org 0x52874
	movs r0, #3	@ 00052874 0320
.org 0x52876
	ands r0, r1	@ 00052876 0840
.org 0x52878
	cmp r0, #1	@ 00052878 0128
.org 0x5287a
	bne.n 0x528b0	@ 0005287a 19d1
.org 0x5287c
	ldr r1, [pc, #44]	@ 0005287c 0b49
.org 0x5287e
	muls r3, r5	@ 0005287e 6b43
.org 0x52880
	ldr r2, [pc, #36]	@ 00052880 094a
.org 0x52882
	adds r3, r3, r2	@ 00052882 9b18
.org 0x52884
	lsls r3, r3, #1	@ 00052884 5b00
.org 0x52886
	lsrs r0, r3, #1	@ 00052886 5808
.org 0x52888
	str r0, [r6, #0]	@ 00052888 3060
.org 0x5288a
	lsrs r3, r3, #17	@ 0005288a 5b0c
.org 0x5288c
	ands r3, r7	@ 0005288c 3b40
.org 0x5288e
	lsls r3, r3, #4	@ 0005288e 1b01
.org 0x52890
	mov r0, sp	@ 00052890 6846
.org 0x52892
	movs r2, #0	@ 00052892 0022
.org 0x52894
	bl 0xd4c8c	@ 00052894 82f0faf9
.org 0x52898
	b.n 0x528cc	@ 00052898 18e0
.org 0x5289a
	.byte 0x00	@ 0005289a data
.org 0x5289b
	.byte 0x00	@ 0005289b data
.org 0x5289c
	.byte 0x00,0xff,0xff,0xff	@ 0005289c data
.org 0x528a0
	.byte 0x38,0xdc,0x02,0x02	@ 000528a0 data
.org 0x528a4
	.byte 0xfd,0x43,0x03,0x00	@ 000528a4 data
.org 0x528a8
	.byte 0xc3,0x9e,0x26,0x00	@ 000528a8 data
.org 0x528ac
	.byte 0xb8,0x81,0x85,0x08	@ 000528ac data
.org 0x528b0
	ldr r1, [pc, #64]	@ 000528b0 1049
.org 0x528b2
	muls r3, r5	@ 000528b2 6b43
.org 0x528b4
	ldr r0, [pc, #64]	@ 000528b4 1048
.org 0x528b6
	adds r3, r3, r0	@ 000528b6 1b18
.org 0x528b8
	lsls r3, r3, #1	@ 000528b8 5b00
.org 0x528ba
	lsrs r0, r3, #1	@ 000528ba 5808
.org 0x528bc
	str r0, [r6, #0]	@ 000528bc 3060
.org 0x528be
	lsrs r3, r3, #17	@ 000528be 5b0c
.org 0x528c0
	ands r3, r7	@ 000528c0 3b40
.org 0x528c2
	lsls r3, r3, #4	@ 000528c2 1b01
.org 0x528c4
	mov r0, sp	@ 000528c4 6846
.org 0x528c6
	movs r2, #0	@ 000528c6 0022
.org 0x528c8
	bl 0xd4c8c	@ 000528c8 82f0e0f9
.org 0x528cc
	ldr r0, [r4, #84]	@ 000528cc 606d
.org 0x528ce
	ldr r1, [r4, #88]	@ 000528ce a16d
.org 0x528d0
	ldr r2, [pc, #40]	@ 000528d0 0a4a
.org 0x528d2
	adds r1, r1, r2	@ 000528d2 8918
.org 0x528d4
	bl 0x7c7c	@ 000528d4 b5f7d2f9
.org 0x528d8
	lsls r0, r0, #16	@ 000528d8 0004
.org 0x528da
	lsrs r5, r0, #16	@ 000528da 050c
.org 0x528dc
	cmp r5, #0	@ 000528dc 002d
.org 0x528de
	bne.n 0x52966	@ 000528de 42d1
.org 0x528e0
	ldr r1, [pc, #28]	@ 000528e0 0749
.org 0x528e2
	adds r0, r4, #0	@ 000528e2 201c
.org 0x528e4
	bl 0x1cf00	@ 000528e4 caf70cfb
.org 0x528e8
	movs r0, #234	@ 000528e8 ea20
.org 0x528ea
	bl 0x2b10	@ 000528ea b0f711f9
.org 0x528ee
	str r5, [r4, #96]	@ 000528ee 2566
.org 0x528f0
	movs r0, #8	@ 000528f0 0820
.org 0x528f2
	b.n 0x52944	@ 000528f2 27e0
.org 0x528f4
	.byte 0x9c,0x81,0x85,0x08	@ 000528f4 data
.org 0x528f8
	.byte 0xc3,0x9e,0x26,0x00	@ 000528f8 data
.org 0x528fc
	.byte 0x00,0xe9,0xff,0xff	@ 000528fc data
.org 0x52900
	.byte 0x13,0xa1,0x00,0x00	@ 00052900 data
.org 0x52904
	ldrb r0, [r4, #18]	@ 00052904 a07c
.org 0x52906
	subs r0, #1	@ 00052906 0138
.org 0x52908
	strb r0, [r4, #18]	@ 00052908 a074
.org 0x5290a
	lsls r0, r0, #24	@ 0005290a 0006
.org 0x5290c
	lsrs r0, r0, #24	@ 0005290c 000e
.org 0x5290e
	cmp r0, #255	@ 0005290e ff28
.org 0x52910
	bne.n 0x52966	@ 00052910 29d1
.org 0x52912
	b.n 0x52946	@ 00052912 18e0
.org 0x52914
	ldr r0, [r4, #96]	@ 00052914 206e
.org 0x52916
	adds r0, #32	@ 00052916 2030
.org 0x52918
	str r0, [r4, #96]	@ 00052918 2066
.org 0x5291a
	ldr r1, [r4, #88]	@ 0005291a a16d
.org 0x5291c
	adds r1, r1, r0	@ 0005291c 0918
.org 0x5291e
	str r1, [r4, #88]	@ 0005291e a165
.org 0x52920
	ldr r0, [r4, #84]	@ 00052920 606d
.org 0x52922
	bl 0x7c7c	@ 00052922 b5f7abf9
.org 0x52926
	lsls r0, r0, #16	@ 00052926 0004
.org 0x52928
	cmp r0, #0	@ 00052928 0028
.org 0x5292a
	beq.n 0x52966	@ 0005292a 1cd0
.org 0x5292c
	ldr r1, [pc, #32]	@ 0005292c 0849
.org 0x5292e
	adds r0, r4, #0	@ 0005292e 201c
.org 0x52930
	movs r2, #1	@ 00052930 0122
