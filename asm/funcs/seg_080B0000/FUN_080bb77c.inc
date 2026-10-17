@ FUN_080bb77c  entry 0x080bb77c  size 272
.thumb
.org 0xbb77c
FUN_080bb77c:
	push {r4, r5, r6, r7, lr}	@ 000bb77c f0b5
.org 0xbb77e
	mov r7, sl	@ 000bb77e 5746
.org 0xbb780
	mov r6, r9	@ 000bb780 4e46
.org 0xbb782
	mov r5, r8	@ 000bb782 4546
.org 0xbb784
	push {r5, r6, r7}	@ 000bb784 e0b4
.org 0xbb786
	adds r7, r0, #0	@ 000bb786 071c
.org 0xbb788
	ldr r1, [pc, #256]	@ 000bb788 4049
.org 0xbb78a
	ldrb r0, [r7, #9]	@ 000bb78a 787a
.org 0xbb78c
	lsls r0, r0, #2	@ 000bb78c 8000
.org 0xbb78e
	adds r0, r0, r1	@ 000bb78e 4018
.org 0xbb790
	movs r1, #1	@ 000bb790 0121
.org 0xbb792
	str r1, [r7, #12]	@ 000bb792 f960
.org 0xbb794
	ldr r0, [r0, #0]	@ 000bb794 0068
.org 0xbb796
	ldr r0, [r0, #4]	@ 000bb796 4068
.org 0xbb798
	str r0, [r7, #20]	@ 000bb798 7861
.org 0xbb79a
	movs r2, #0	@ 000bb79a 0022
.org 0xbb79c
	strb r2, [r7, #13]	@ 000bb79c 7a73
.org 0xbb79e
	strb r2, [r7, #14]	@ 000bb79e ba73
.org 0xbb7a0
	strb r2, [r7, #15]	@ 000bb7a0 fa73
.org 0xbb7a2
	ldrb r0, [r7, #10]	@ 000bb7a2 b87a
.org 0xbb7a4
	orrs r0, r1	@ 000bb7a4 0843
.org 0xbb7a6
	movs r1, #2	@ 000bb7a6 0221
.org 0xbb7a8
	orrs r0, r1	@ 000bb7a8 0843
.org 0xbb7aa
	strb r0, [r7, #10]	@ 000bb7aa b872
.org 0xbb7ac
	ldr r5, [pc, #224]	@ 000bb7ac 384d
.org 0xbb7ae
	ldr r0, [pc, #228]	@ 000bb7ae 3948
.org 0xbb7b0
	mov r9, r0	@ 000bb7b0 8146
.org 0xbb7b2
	adds r0, r5, r0	@ 000bb7b2 2818
.org 0xbb7b4
	ldr r1, [pc, #224]	@ 000bb7b4 3849
.org 0xbb7b6
	mov r8, r1	@ 000bb7b6 8846
.org 0xbb7b8
	movs r4, #182	@ 000bb7b8 b624
.org 0xbb7ba
	lsls r4, r4, #1	@ 000bb7ba 6400
.org 0xbb7bc
	adds r1, r1, r4	@ 000bb7bc 0919
.org 0xbb7be
	ldrh r1, [r1, #0]	@ 000bb7be 0988
.org 0xbb7c0
	ldrh r2, [r0, #6]	@ 000bb7c0 c288
.org 0xbb7c2
	lsrs r2, r2, #6	@ 000bb7c2 9209
.org 0xbb7c4
	subs r1, r1, r2	@ 000bb7c4 891a
.org 0xbb7c6
	lsls r1, r1, #5	@ 000bb7c6 4901
.org 0xbb7c8
	movs r2, #128	@ 000bb7c8 8022
.org 0xbb7ca
	lsls r2, r2, #9	@ 000bb7ca 5202
.org 0xbb7cc
	adds r1, r1, r2	@ 000bb7cc 8918
.org 0xbb7ce
	bl 0x1d30	@ 000bb7ce 46f7affa
.org 0xbb7d2
	ldr r0, [pc, #200]	@ 000bb7d2 3248
.org 0xbb7d4
	adds r5, r5, r0	@ 000bb7d4 2d18
.org 0xbb7d6
	ldr r6, [pc, #200]	@ 000bb7d6 324e
.org 0xbb7d8
	adds r4, r6, r4	@ 000bb7d8 3419
.org 0xbb7da
	ldrh r1, [r4, #0]	@ 000bb7da 2188
.org 0xbb7dc
	ldrb r0, [r5, #7]	@ 000bb7dc e879
.org 0xbb7de
	subs r1, r1, r0	@ 000bb7de 091a
.org 0xbb7e0
	lsls r1, r1, #5	@ 000bb7e0 4901
.org 0xbb7e2
	movs r2, #128	@ 000bb7e2 8022
.org 0xbb7e4
	lsls r2, r2, #2	@ 000bb7e4 9200
.org 0xbb7e6
	mov sl, r2	@ 000bb7e6 9246
.org 0xbb7e8
	add r1, sl	@ 000bb7e8 5144
.org 0xbb7ea
	adds r0, r5, #0	@ 000bb7ea 281c
.org 0xbb7ec
	bl 0x2208	@ 000bb7ec 46f70cfd
.org 0xbb7f0
	ldr r4, [pc, #176]	@ 000bb7f0 2c4c
.org 0xbb7f2
	add r9, r4	@ 000bb7f2 a144
.org 0xbb7f4
	movs r5, #230	@ 000bb7f4 e625
.org 0xbb7f6
	lsls r5, r5, #1	@ 000bb7f6 6d00
.org 0xbb7f8
	add r8, r5	@ 000bb7f8 a844
.org 0xbb7fa
	mov r0, r8	@ 000bb7fa 4046
.org 0xbb7fc
	ldrh r1, [r0, #0]	@ 000bb7fc 0188
.org 0xbb7fe
	mov r2, r9	@ 000bb7fe 4a46
.org 0xbb800
	ldrh r0, [r2, #6]	@ 000bb800 d088
.org 0xbb802
	lsrs r0, r0, #6	@ 000bb802 8009
.org 0xbb804
	subs r1, r1, r0	@ 000bb804 091a
.org 0xbb806
	lsls r1, r1, #5	@ 000bb806 4901
.org 0xbb808
	movs r0, #128	@ 000bb808 8020
.org 0xbb80a
	lsls r0, r0, #9	@ 000bb80a 4002
.org 0xbb80c
	adds r1, r1, r0	@ 000bb80c 0918
.org 0xbb80e
	mov r0, r9	@ 000bb80e 4846
.org 0xbb810
	bl 0x1d30	@ 000bb810 46f78efa
.org 0xbb814
	ldr r1, [pc, #132]	@ 000bb814 2149
.org 0xbb816
	adds r4, r4, r1	@ 000bb816 6418
.org 0xbb818
	adds r6, r6, r5	@ 000bb818 7619
.org 0xbb81a
	ldrh r1, [r6, #0]	@ 000bb81a 3188
.org 0xbb81c
	ldrb r0, [r4, #7]	@ 000bb81c e079
.org 0xbb81e
	subs r1, r1, r0	@ 000bb81e 091a
.org 0xbb820
	lsls r1, r1, #5	@ 000bb820 4901
.org 0xbb822
	add r1, sl	@ 000bb822 5144
.org 0xbb824
	adds r0, r4, #0	@ 000bb824 201c
.org 0xbb826
	bl 0x2208	@ 000bb826 46f7effc
.org 0xbb82a
	adds r0, r7, #0	@ 000bb82a 381c
.org 0xbb82c
	bl 0x1cc9c	@ 000bb82c 61f736fa
.org 0xbb830
	adds r0, r7, #0	@ 000bb830 381c
.org 0xbb832
	adds r0, #34	@ 000bb832 2230
.org 0xbb834
	movs r2, #1	@ 000bb834 0122
.org 0xbb836
	strb r2, [r0, #0]	@ 000bb836 0270
.org 0xbb838
	adds r0, #3	@ 000bb838 0330
.org 0xbb83a
	strb r2, [r0, #0]	@ 000bb83a 0270
.org 0xbb83c
	ldrb r1, [r7, #10]	@ 000bb83c b97a
.org 0xbb83e
	movs r0, #239	@ 000bb83e ef20
.org 0xbb840
	ands r0, r1	@ 000bb840 0840
.org 0xbb842
	strb r0, [r7, #10]	@ 000bb842 b872
.org 0xbb844
	adds r0, r7, #0	@ 000bb844 381c
.org 0xbb846
	adds r0, #76	@ 000bb846 4c30
.org 0xbb848
	movs r1, #0	@ 000bb848 0021
.org 0xbb84a
	strb r1, [r0, #0]	@ 000bb84a 0170
.org 0xbb84c
	adds r2, r7, #0	@ 000bb84c 3a1c
.org 0xbb84e
	adds r2, #74	@ 000bb84e 4a32
.org 0xbb850
	ldrb r1, [r2, #0]	@ 000bb850 1178
.org 0xbb852
	movs r0, #17	@ 000bb852 1120
.org 0xbb854
	negs r0, r0	@ 000bb854 4042
.org 0xbb856
	ands r0, r1	@ 000bb856 0840
.org 0xbb858
	strb r0, [r2, #0]	@ 000bb858 1070
.org 0xbb85a
	ldrb r1, [r7, #10]	@ 000bb85a b97a
.org 0xbb85c
	movs r0, #4	@ 000bb85c 0420
.org 0xbb85e
	orrs r0, r1	@ 000bb85e 0843
.org 0xbb860
	strb r0, [r7, #10]	@ 000bb860 b872
.org 0xbb862
	adds r4, r7, #0	@ 000bb862 3c1c
.org 0xbb864
	adds r4, #116	@ 000bb864 7434
.org 0xbb866
	ldr r1, [pc, #64]	@ 000bb866 1049
.org 0xbb868
	adds r2, #10	@ 000bb868 0a32
.org 0xbb86a
	adds r0, r4, #0	@ 000bb86a 201c
.org 0xbb86c
	movs r3, #64	@ 000bb86c 4023
.org 0xbb86e
	bl 0x5760	@ 000bb86e 49f777ff
.org 0xbb872
	str r7, [r4, #44]	@ 000bb872 e762
.org 0xbb874
	movs r2, #0	@ 000bb874 0022
.org 0xbb876
	str r2, [r4, #36]	@ 000bb876 6262
.org 0xbb878
	adds r0, r7, #0	@ 000bb878 381c
.org 0xbb87a
	bl 0xbb8ac	@ 000bb87a 00f017f8
.org 0xbb87e
	pop {r3, r4, r5}	@ 000bb87e 38bc
.org 0xbb880
	mov r8, r3	@ 000bb880 9846
.org 0xbb882
	mov r9, r4	@ 000bb882 a146
.org 0xbb884
	mov sl, r5	@ 000bb884 aa46
.org 0xbb886
	pop {r4, r5, r6, r7}	@ 000bb886 f0bc
.org 0xbb888
	pop {r0}	@ 000bb888 01bc
.org 0xbb88a
	bx r0	@ 000bb88a 0047
