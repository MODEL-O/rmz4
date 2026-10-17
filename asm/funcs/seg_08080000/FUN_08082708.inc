@ FUN_08082708  entry 0x08082708  size 458
.thumb
.org 0x82708
FUN_08082708:
	push {r4, r5, r6, r7, lr}	@ 00082708 f0b5
.org 0x8270a
	mov r7, r9	@ 0008270a 4f46
.org 0x8270c
	mov r6, r8	@ 0008270c 4646
.org 0x8270e
	push {r6, r7}	@ 0008270e c0b4
.org 0x82710
	adds r6, r0, #0	@ 00082710 061c
.org 0x82712
	ldrb r4, [r6, #14]	@ 00082712 b47b
.org 0x82714
	cmp r4, #0	@ 00082714 002c
.org 0x82716
	beq.n 0x8271e	@ 00082716 02d0
.org 0x82718
	cmp r4, #1	@ 00082718 012c
.org 0x8271a
	beq.n 0x82736	@ 0008271a 0cd0
.org 0x8271c
	b.n 0x828e8	@ 0008271c e4e0
.org 0x8271e
	adds r0, r6, #0	@ 0008271e 301c
.org 0x82720
	adds r0, #190	@ 00082720 be30
.org 0x82722
	strb r4, [r0, #0]	@ 00082722 0470
.org 0x82724
	ldr r1, [pc, #48]	@ 00082724 0c49
.org 0x82726
	adds r0, r6, #0	@ 00082726 301c
.org 0x82728
	bl 0x1cf00	@ 00082728 9af7eafb
.org 0x8272c
	strb r4, [r6, #18]	@ 0008272c b474
.org 0x8272e
	strb r4, [r6, #19]	@ 0008272e f474
.org 0x82730
	ldrb r0, [r6, #14]	@ 00082730 b07b
.org 0x82732
	adds r0, #1	@ 00082732 0130
.org 0x82734
	strb r0, [r6, #14]	@ 00082734 b073
.org 0x82736
	ldrb r0, [r6, #19]	@ 00082736 f07c
.org 0x82738
	cmp r0, #8	@ 00082738 0828
.org 0x8273a
	bls.n 0x82760	@ 0008273a 11d9
.org 0x8273c
	adds r4, r6, #0	@ 0008273c 341c
.org 0x8273e
	adds r4, #116	@ 0008273e 7434
.org 0x82740
	ldr r1, [pc, #24]	@ 00082740 0649
.org 0x82742
	adds r0, r4, #0	@ 00082742 201c
.org 0x82744
	bl 0x5784	@ 00082744 83f71ef8
.org 0x82748
	adds r1, r6, #0	@ 00082748 311c
.org 0x8274a
	adds r1, #190	@ 0008274a be31
.org 0x8274c
	movs r0, #4	@ 0008274c 0420
.org 0x8274e
	strb r0, [r1, #0]	@ 0008274e 0870
.org 0x82750
	mov r9, r1	@ 00082750 8946
.org 0x82752
	mov r8, r4	@ 00082752 a046
.org 0x82754
	b.n 0x8278c	@ 00082754 1ae0
.org 0x82756
	.byte 0x00	@ 00082756 data
.org 0x82757
	.byte 0x00	@ 00082757 data
.org 0x82758
	.byte 0x02,0x16,0x00,0x00	@ 00082758 data
.org 0x8275c
	.byte 0x48,0xe8,0x85,0x08	@ 0008275c data
.org 0x82760
	adds r5, r6, #0	@ 00082760 351c
.org 0x82762
	adds r5, #116	@ 00082762 7435
.org 0x82764
	ldr r4, [pc, #108]	@ 00082764 1b4c
.org 0x82766
	ldrb r0, [r6, #19]	@ 00082766 f07c
.org 0x82768
	adds r0, r0, r4	@ 00082768 0019
.org 0x8276a
	ldrb r0, [r0, #0]	@ 0008276a 0078
.org 0x8276c
	lsls r1, r0, #1	@ 0008276c 4100
.org 0x8276e
	adds r1, r1, r0	@ 0008276e 0918
.org 0x82770
	lsls r1, r1, #3	@ 00082770 c900
.org 0x82772
	ldr r0, [pc, #100]	@ 00082772 1948
.org 0x82774
	adds r1, r1, r0	@ 00082774 0918
.org 0x82776
	adds r0, r5, #0	@ 00082776 281c
.org 0x82778
	bl 0x5784	@ 00082778 83f704f8
.org 0x8277c
	ldrb r0, [r6, #19]	@ 0008277c f07c
.org 0x8277e
	adds r0, r0, r4	@ 0008277e 0019
.org 0x82780
	ldrb r1, [r0, #0]	@ 00082780 0178
.org 0x82782
	adds r0, r6, #0	@ 00082782 301c
.org 0x82784
	adds r0, #190	@ 00082784 be30
.org 0x82786
	strb r1, [r0, #0]	@ 00082786 0170
.org 0x82788
	mov r9, r0	@ 00082788 8146
.org 0x8278a
	mov r8, r5	@ 0008278a a846
.org 0x8278c
	ldrb r0, [r6, #19]	@ 0008278c f07c
.org 0x8278e
	adds r0, #1	@ 0008278e 0130
.org 0x82790
	movs r7, #0	@ 00082790 0027
.org 0x82792
	strb r0, [r6, #19]	@ 00082792 f074
.org 0x82794
	ldr r1, [r6, #92]	@ 00082794 f16d
.org 0x82796
	ldr r2, [r6, #96]	@ 00082796 326e
.org 0x82798
	adds r0, r6, #0	@ 00082798 301c
.org 0x8279a
	bl 0x8368c	@ 0008279a 00f077ff
.org 0x8279e
	lsls r0, r0, #24	@ 0008279e 0006
.org 0x827a0
	lsrs r0, r0, #24	@ 000827a0 000e
.org 0x827a2
	adds r4, r0, #0	@ 000827a2 041c
.org 0x827a4
	movs r5, #1	@ 000827a4 0125
.org 0x827a6
	ands r0, r5	@ 000827a6 2840
.org 0x827a8
	cmp r0, #0	@ 000827a8 0028
.org 0x827aa
	beq.n 0x827b8	@ 000827aa 05d0
.org 0x827ac
	ldr r0, [pc, #44]	@ 000827ac 0b48
.org 0x827ae
	bl 0x2b10	@ 000827ae 80f7aff9
.org 0x827b2
	str r7, [r6, #92]	@ 000827b2 f765
.org 0x827b4
	str r7, [r6, #96]	@ 000827b4 3766
.org 0x827b6
	strb r5, [r6, #18]	@ 000827b6 b574
.org 0x827b8
	movs r0, #2	@ 000827b8 0220
.org 0x827ba
	ands r0, r4	@ 000827ba 2040
.org 0x827bc
	cmp r0, #0	@ 000827bc 0028
.org 0x827be
	beq.n 0x82804	@ 000827be 21d0
.org 0x827c0
	ldrb r2, [r6, #10]	@ 000827c0 b27a
.org 0x827c2
	lsrs r0, r2, #4	@ 000827c2 1009
.org 0x827c4
	adds r1, r5, #0	@ 000827c4 291c
.org 0x827c6
	bics r1, r0	@ 000827c6 8143
.org 0x827c8
	cmp r1, #0	@ 000827c8 0029
.org 0x827ca
	beq.n 0x827e0	@ 000827ca 09d0
.org 0x827cc
	movs r0, #16	@ 000827cc 1020
.org 0x827ce
	orrs r0, r2	@ 000827ce 1043
.org 0x827d0
	b.n 0x827e4	@ 000827d0 08e0
.org 0x827d2
	.byte 0x00	@ 000827d2 data
.org 0x827d3
	.byte 0x00	@ 000827d3 data
.org 0x827d4
	.byte 0x1c,0xe9,0x85,0x08	@ 000827d4 data
.org 0x827d8
	.byte 0x88,0xe7,0x85,0x08	@ 000827d8 data
.org 0x827dc
	.byte 0x37,0x01,0x00,0x00	@ 000827dc data
.org 0x827e0
	movs r0, #239	@ 000827e0 ef20
.org 0x827e2
	ands r0, r2	@ 000827e2 1040
.org 0x827e4
	strb r0, [r6, #10]	@ 000827e4 b072
.org 0x827e6
	adds r0, r6, #0	@ 000827e6 301c
.org 0x827e8
	adds r0, #76	@ 000827e8 4c30
.org 0x827ea
	strb r1, [r0, #0]	@ 000827ea 0170
.org 0x827ec
	adds r3, r6, #0	@ 000827ec 331c
.org 0x827ee
	adds r3, #74	@ 000827ee 4a33
.org 0x827f0
	lsls r1, r1, #4	@ 000827f0 0901
.org 0x827f2
	ldrb r2, [r3, #0]	@ 000827f2 1a78
.org 0x827f4
	movs r0, #17	@ 000827f4 1120
.org 0x827f6
	negs r0, r0	@ 000827f6 4042
.org 0x827f8
	ands r0, r2	@ 000827f8 1040
.org 0x827fa
	orrs r0, r1	@ 000827fa 0843
.org 0x827fc
	strb r0, [r3, #0]	@ 000827fc 1870
.org 0x827fe
	ldr r0, [r6, #92]	@ 000827fe f06d
.org 0x82800
	negs r0, r0	@ 00082800 4042
.org 0x82802
	str r0, [r6, #92]	@ 00082802 f065
.org 0x82804
	ldrb r0, [r6, #18]	@ 00082804 b07c
.org 0x82806
	cmp r0, #0	@ 00082806 0028
.org 0x82808
	beq.n 0x82890	@ 00082808 42d0
.org 0x8280a
	adds r0, r6, #0	@ 0008280a 301c
.org 0x8280c
	adds r0, #115	@ 0008280c 7330
.org 0x8280e
	ldrb r0, [r0, #0]	@ 0008280e 0078
.org 0x82810
	cmp r0, #3	@ 00082810 0328
.org 0x82812
	bne.n 0x82890	@ 00082812 3dd1
.org 0x82814
	movs r0, #0	@ 00082814 0020
.org 0x82816
	strb r0, [r6, #13]	@ 00082816 7073
.org 0x82818
	strb r0, [r6, #14]	@ 00082818 b073
.org 0x8281a
	ldrb r1, [r6, #10]	@ 0008281a b17a
.org 0x8281c
	movs r0, #32	@ 0008281c 2020
.org 0x8281e
	ands r0, r1	@ 0008281e 0840
.org 0x82820
	adds r2, r1, #0	@ 00082820 0a1c
.org 0x82822
	cmp r0, #0	@ 00082822 0028
.org 0x82824
	beq.n 0x8282e	@ 00082824 03d0
.org 0x82826
	ldr r0, [r6, #88]	@ 00082826 b06d
.org 0x82828
	movs r1, #188	@ 00082828 bc21
.org 0x8282a
	lsls r1, r1, #6	@ 0008282a 8901
.org 0x8282c
	b.n 0x82832	@ 0008282c 01e0
.org 0x8282e
	ldr r0, [r6, #88]	@ 0008282e b06d
.org 0x82830
	ldr r1, [pc, #20]	@ 00082830 0549
.org 0x82832
	adds r0, r0, r1	@ 00082832 4018
.org 0x82834
	str r0, [r6, #88]	@ 00082834 b065
.org 0x82836
	lsls r0, r2, #24	@ 00082836 1006
.org 0x82838
	lsrs r0, r0, #29	@ 00082838 400f
.org 0x8283a
	movs r1, #1	@ 0008283a 0121
.org 0x8283c
	bics r1, r0	@ 0008283c 8143
.org 0x8283e
	cmp r1, #0	@ 0008283e 0029
.org 0x82840
	beq.n 0x8284c	@ 00082840 04d0
.org 0x82842
	movs r0, #32	@ 00082842 2020
.org 0x82844
	orrs r0, r2	@ 00082844 1043
.org 0x82846
	b.n 0x82850	@ 00082846 03e0
.org 0x82848
	.byte 0x00,0xd1,0xff,0xff	@ 00082848 data
.org 0x8284c
	movs r0, #223	@ 0008284c df20
.org 0x8284e
	ands r0, r2	@ 0008284e 1040
.org 0x82850
	strb r0, [r6, #10]	@ 00082850 b072
.org 0x82852
	adds r0, r6, #0	@ 00082852 301c
.org 0x82854
	adds r0, #77	@ 00082854 4d30
.org 0x82856
	movs r4, #0	@ 00082856 0024
.org 0x82858
	strb r1, [r0, #0]	@ 00082858 0170
.org 0x8285a
	adds r3, r6, #0	@ 0008285a 331c
.org 0x8285c
	adds r3, #74	@ 0008285c 4a33
.org 0x8285e
	lsls r1, r1, #5	@ 0008285e 4901
.org 0x82860
	ldrb r2, [r3, #0]	@ 00082860 1a78
.org 0x82862
	movs r0, #33	@ 00082862 2120
.org 0x82864
	negs r0, r0	@ 00082864 4042
.org 0x82866
	ands r0, r2	@ 00082866 1040
.org 0x82868
	orrs r0, r1	@ 00082868 0843
.org 0x8286a
	strb r0, [r3, #0]	@ 0008286a 1870
.org 0x8286c
	ldr r1, [pc, #28]	@ 0008286c 0749
.org 0x8286e
	mov r0, r8	@ 0008286e 4046
.org 0x82870
	bl 0x5784	@ 00082870 82f788ff
.org 0x82874
	movs r1, #176	@ 00082874 b021
.org 0x82876
	lsls r1, r1, #5	@ 00082876 4901
.org 0x82878
	adds r0, r6, #0	@ 00082878 301c
.org 0x8287a
	bl 0x1cf00	@ 0008287a 9af741fb
.org 0x8287e
	mov r0, r9	@ 0008287e 4846
.org 0x82880
	strb r4, [r0, #0]	@ 00082880 0470
.org 0x82882
	adds r0, r6, #0	@ 00082882 301c
.org 0x82884
	bl 0x1cff0	@ 00082884 9af7b4fb
.org 0x82888
	b.n 0x828e8	@ 00082888 2ee0
.org 0x8288a
	.byte 0x00	@ 0008288a data
.org 0x8288b
	.byte 0x00	@ 0008288b data
.org 0x8288c
	.byte 0x88,0xe7,0x85,0x08	@ 0008288c data
.org 0x82890
	ldrb r1, [r6, #10]	@ 00082890 b17a
.org 0x82892
	movs r0, #32	@ 00082892 2020
.org 0x82894
	ands r0, r1	@ 00082894 0840
.org 0x82896
	cmp r0, #0	@ 00082896 0028
.org 0x82898
	beq.n 0x828aa	@ 00082898 07d0
.org 0x8289a
	ldr r0, [r6, #84]	@ 0008289a 706d
.org 0x8289c
	ldr r1, [r6, #88]	@ 0008289c b16d
.org 0x8289e
	bl 0x8534	@ 0008289e 85f749fe
.org 0x828a2
	adds r1, r0, #0	@ 000828a2 011c
.org 0x828a4
	ldr r0, [r6, #88]	@ 000828a4 b06d
.org 0x828a6
	subs r1, r1, r0	@ 000828a6 091a
.org 0x828a8
	b.n 0x828b8	@ 000828a8 06e0
.org 0x828aa
	ldr r0, [r6, #84]	@ 000828aa 706d
.org 0x828ac
	ldr r1, [r6, #88]	@ 000828ac b16d
.org 0x828ae
	bl 0x8748	@ 000828ae 85f74bff
.org 0x828b2
	adds r1, r0, #0	@ 000828b2 011c
.org 0x828b4
	ldr r0, [r6, #88]	@ 000828b4 b06d
.org 0x828b6
	subs r1, r0, r1	@ 000828b6 411a
.org 0x828b8
	ldr r0, [pc, #56]	@ 000828b8 0e48
.org 0x828ba
	cmp r1, r0	@ 000828ba 8142
.org 0x828bc
	bgt.n 0x828e2	@ 000828bc 11dc
.org 0x828be
	ldr r1, [r6, #92]	@ 000828be f16d
.org 0x828c0
	lsls r0, r1, #4	@ 000828c0 0801
.org 0x828c2
	subs r0, r0, r1	@ 000828c2 401a
.org 0x828c4
	lsls r0, r0, #4	@ 000828c4 0001
.org 0x828c6
	cmp r0, #0	@ 000828c6 0028
.org 0x828c8
	bge.n 0x828cc	@ 000828c8 00da
.org 0x828ca
	adds r0, #255	@ 000828ca ff30
.org 0x828cc
	asrs r0, r0, #8	@ 000828cc 0012
.org 0x828ce
	str r0, [r6, #92]	@ 000828ce f065
.org 0x828d0
	ldr r1, [r6, #96]	@ 000828d0 316e
