@ FUN_08124820  entry 0x08124820  size 408
.thumb
.org 0x124820
FUN_08124820:
	push {r4, r5, r6, r7, lr}	@ 00124820 f0b5
.org 0x124822
	adds r6, r0, #0	@ 00124822 061c
.org 0x124824
	ldr r0, [pc, #40]	@ 00124824 0a48
.org 0x124826
	ldr r1, [pc, #44]	@ 00124826 0b49
.org 0x124828
	adds r4, r6, r1	@ 00124828 7418
.org 0x12482a
	ldrb r1, [r4, #24]	@ 0012482a 217e
.org 0x12482c
	lsls r1, r1, #2	@ 0012482c 8900
.org 0x12482e
	adds r1, r1, r0	@ 0012482e 0918
.org 0x124830
	ldr r1, [r1, #0]	@ 00124830 0968
.org 0x124832
	adds r0, r6, #0	@ 00124832 301c
.org 0x124834
	bl 0x128f80	@ 00124834 04f0a4fb
.org 0x124838
	adds r7, r0, #0	@ 00124838 071c
.org 0x12483a
	ldr r1, [r4, #12]	@ 0012483a e168
.org 0x12483c
	ldr r2, [r4, #8]	@ 0012483c a268
.org 0x12483e
	cmp r1, r2	@ 0012483e 9142
.org 0x124840
	bge.n 0x124862	@ 00124840 0fda
.org 0x124842
	subs r0, r2, r1	@ 00124842 501a
.org 0x124844
	cmp r0, #9	@ 00124844 0928
.org 0x124846
	bgt.n 0x124858	@ 00124846 07dc
.org 0x124848
	adds r0, r1, #1	@ 00124848 481c
.org 0x12484a
	str r0, [r4, #12]	@ 0012484a e060
.org 0x12484c
	b.n 0x124862	@ 0012484c 09e0
.org 0x12484e
	.byte 0x00	@ 0012484e data
.org 0x12484f
	.byte 0x00	@ 0012484f data
.org 0x124850
	.byte 0xdc,0x23,0x88,0x08	@ 00124850 data
.org 0x124854
	.byte 0xcc,0x0d,0x00,0x00	@ 00124854 data
.org 0x124858
	adds r0, r1, #2	@ 00124858 881c
.org 0x12485a
	str r0, [r4, #12]	@ 0012485a e060
.org 0x12485c
	cmp r0, r2	@ 0012485c 9042
.org 0x12485e
	ble.n 0x124862	@ 0012485e 00dd
.org 0x124860
	str r2, [r4, #12]	@ 00124860 e260
.org 0x124862
	ldr r0, [pc, #268]	@ 00124862 4348
.org 0x124864
	adds r5, r6, r0	@ 00124864 3518
.org 0x124866
	ldr r0, [r5, #16]	@ 00124866 2869
.org 0x124868
	ldr r1, [r5, #8]	@ 00124868 a968
.org 0x12486a
	cmp r0, r1	@ 0012486a 8842
.org 0x12486c
	bge.n 0x124870	@ 0012486c 00da
.org 0x12486e
	str r1, [r5, #16]	@ 0012486e 2961
.org 0x124870
	ldr r0, [pc, #256]	@ 00124870 4048
.org 0x124872
	movs r1, #1	@ 00124872 0121
.org 0x124874
	movs r2, #0	@ 00124874 0022
.org 0x124876
	bl 0x10da2c	@ 00124876 e9f7d9f8
.org 0x12487a
	ldr r0, [r5, #12]	@ 0012487a e868
.org 0x12487c
	movs r1, #11	@ 0012487c 0b21
.org 0x12487e
	movs r2, #0	@ 0012487e 0022
.org 0x124880
	bl 0x10dae0	@ 00124880 e9f72ef9
.org 0x124884
	ldr r0, [pc, #240]	@ 00124884 3c48
.org 0x124886
	movs r1, #15	@ 00124886 0f21
.org 0x124888
	movs r2, #0	@ 00124888 0022
.org 0x12488a
	bl 0x10da2c	@ 0012488a e9f7cff8
.org 0x12488e
	ldr r0, [r5, #16]	@ 0012488e 2869
.org 0x124890
	movs r1, #28	@ 00124890 1c21
.org 0x124892
	movs r2, #0	@ 00124892 0022
.org 0x124894
	bl 0x10dae0	@ 00124894 e9f724f9
.org 0x124898
	ldr r0, [pc, #224]	@ 00124898 3848
.org 0x12489a
	movs r1, #9	@ 0012489a 0921
.org 0x12489c
	movs r2, #18	@ 0012489c 1222
.org 0x12489e
	bl 0x10da2c	@ 0012489e e9f7c5f8
.org 0x1248a2
	ldr r0, [r5, #20]	@ 001248a2 6869
.org 0x1248a4
	movs r1, #60	@ 001248a4 3c21
.org 0x1248a6
	bl 0x128fb8	@ 001248a6 04f087fb
.org 0x1248aa
	movs r1, #15	@ 001248aa 0f21
.org 0x1248ac
	movs r2, #18	@ 001248ac 1222
.org 0x1248ae
	bl 0x10dae0	@ 001248ae e9f717f9
.org 0x1248b2
	ldr r0, [pc, #204]	@ 001248b2 3348
.org 0x1248b4
	movs r1, #16	@ 001248b4 1021
.org 0x1248b6
	movs r2, #18	@ 001248b6 1222
.org 0x1248b8
	bl 0x10da2c	@ 001248b8 e9f7b8f8
.org 0x1248bc
	ldr r0, [r5, #20]	@ 001248bc 6869
.org 0x1248be
	movs r1, #60	@ 001248be 3c21
.org 0x1248c0
	bl 0x129050	@ 001248c0 04f0c6fb
.org 0x1248c4
	movs r1, #166	@ 001248c4 a621
.org 0x1248c6
	muls r0, r1	@ 001248c6 4843
.org 0x1248c8
	movs r1, #100	@ 001248c8 6421
.org 0x1248ca
	bl 0x128fb8	@ 001248ca 04f075fb
.org 0x1248ce
	adds r4, r0, #0	@ 001248ce 041c
.org 0x1248d0
	lsls r4, r4, #24	@ 001248d0 2406
.org 0x1248d2
	lsrs r4, r4, #24	@ 001248d2 240e
.org 0x1248d4
	adds r0, r4, #0	@ 001248d4 201c
.org 0x1248d6
	movs r1, #18	@ 001248d6 1221
.org 0x1248d8
	movs r2, #18	@ 001248d8 1222
.org 0x1248da
	bl 0x10dae0	@ 001248da e9f701f9
.org 0x1248de
	cmp r4, #9	@ 001248de 092c
.org 0x1248e0
	bhi.n 0x1248ec	@ 001248e0 04d8
.org 0x1248e2
	movs r0, #0	@ 001248e2 0020
.org 0x1248e4
	movs r1, #17	@ 001248e4 1121
.org 0x1248e6
	movs r2, #18	@ 001248e6 1222
.org 0x1248e8
	bl 0x10dae0	@ 001248e8 e9f7faf8
.org 0x1248ec
	ldr r0, [r5, #52]	@ 001248ec 686b
.org 0x1248ee
	cmp r0, #1	@ 001248ee 0128
.org 0x1248f0
	bls.n 0x124910	@ 001248f0 0ed9
.org 0x1248f2
	ldr r0, [r5, #20]	@ 001248f2 6869
.org 0x1248f4
	movs r1, #1	@ 001248f4 0121
.org 0x1248f6
	ands r0, r1	@ 001248f6 0840
.org 0x1248f8
	cmp r0, #0	@ 001248f8 0028
.org 0x1248fa
	beq.n 0x124910	@ 001248fa 09d0
.org 0x1248fc
	ldr r0, [pc, #132]	@ 001248fc 2148
.org 0x1248fe
	movs r1, #12	@ 001248fe 0c21
.org 0x124900
	movs r2, #5	@ 00124900 0522
.org 0x124902
	bl 0x10da2c	@ 00124902 e9f793f8
.org 0x124906
	ldr r0, [r5, #52]	@ 00124906 686b
.org 0x124908
	movs r1, #14	@ 00124908 0e21
.org 0x12490a
	movs r2, #7	@ 0012490a 0722
.org 0x12490c
	bl 0x10dae0	@ 0012490c e9f7e8f8
.org 0x124910
	ldr r0, [pc, #92]	@ 00124910 1748
.org 0x124912
	adds r1, r6, r0	@ 00124912 3118
.org 0x124914
	ldr r0, [r1, #0]	@ 00124914 0868
.org 0x124916
	adds r0, #140	@ 00124916 8c30
.org 0x124918
	ldr r0, [r0, #0]	@ 00124918 0068
.org 0x12491a
	movs r2, #1	@ 0012491a 0122
.org 0x12491c
	ands r0, r2	@ 0012491c 1040
.org 0x12491e
	cmp r0, #0	@ 0012491e 0028
.org 0x124920
	beq.n 0x12493e	@ 00124920 0dd0
.org 0x124922
	ldr r0, [r1, #48]	@ 00124922 086b
.org 0x124924
	cmp r0, #0	@ 00124924 0028
.org 0x124926
	bne.n 0x124930	@ 00124926 03d1
.org 0x124928
	ldr r0, [r1, #20]	@ 00124928 4869
.org 0x12492a
	subs r0, #180	@ 0012492a b438
.org 0x12492c
	str r0, [r1, #20]	@ 0012492c 4861
.org 0x12492e
	str r2, [r1, #48]	@ 0012492e 0a63
.org 0x124930
	ldr r0, [r1, #20]	@ 00124930 4869
.org 0x124932
	cmp r0, #0	@ 00124932 0028
.org 0x124934
	bge.n 0x12493a	@ 00124934 01da
.org 0x124936
	movs r0, #0	@ 00124936 0020
.org 0x124938
	str r0, [r1, #20]	@ 00124938 4861
.org 0x12493a
	movs r0, #0	@ 0012493a 0020
.org 0x12493c
	str r0, [r1, #52]	@ 0012493c 4863
.org 0x12493e
	ldr r1, [pc, #48]	@ 0012493e 0c49
.org 0x124940
	adds r2, r6, r1	@ 00124940 7218
.org 0x124942
	ldr r0, [r2, #44]	@ 00124942 d06a
.org 0x124944
	cmp r0, #1	@ 00124944 0128
.org 0x124946
	bne.n 0x124994	@ 00124946 25d1
.org 0x124948
	ldr r0, [r2, #36]	@ 00124948 506a
.org 0x12494a
	lsrs r1, r0, #8	@ 0012494a 010a
.org 0x12494c
	cmp r1, #0	@ 0012494c 0029
.org 0x12494e
	beq.n 0x124994	@ 0012494e 21d0
.org 0x124950
	cmp r1, #128	@ 00124950 8029
.org 0x124952
	beq.n 0x124990	@ 00124952 1dd0
.org 0x124954
	ldr r3, [r2, #8]	@ 00124954 9368
.org 0x124956
	adds r0, r3, r1	@ 00124956 5818
.org 0x124958
	str r0, [r2, #8]	@ 00124958 9060
.org 0x12495a
	cmp r1, #5	@ 0012495a 0529
.org 0x12495c
	bne.n 0x124990	@ 0012495c 18d1
.org 0x12495e
	ldr r0, [r2, #52]	@ 0012495e 506b
.org 0x124960
	adds r1, r0, #1	@ 00124960 411c
.org 0x124962
	str r1, [r2, #52]	@ 00124962 5163
.org 0x124964
	cmp r1, #5	@ 00124964 0529
.org 0x124966
	bhi.n 0x124988	@ 00124966 0fd8
.org 0x124968
	adds r0, r3, #4	@ 00124968 181d
.org 0x12496a
	adds r0, r0, r1	@ 0012496a 4018
.org 0x12496c
	str r0, [r2, #8]	@ 0012496c 9060
.org 0x12496e
	b.n 0x124994	@ 0012496e 11e0
.org 0x124970
	.byte 0xcc,0x0d,0x00,0x00	@ 00124970 data
.org 0x124974
	.byte 0xfc,0x96,0x13,0x08	@ 00124974 data
.org 0x124978
	.byte 0x04,0x97,0x13,0x08	@ 00124978 data
.org 0x12497c
	.byte 0x10,0x97,0x13,0x08	@ 0012497c data
.org 0x124980
	.byte 0x18,0x97,0x13,0x08	@ 00124980 data
.org 0x124984
	.byte 0x1c,0x97,0x13,0x08	@ 00124984 data
.org 0x124988
	adds r0, r3, #0	@ 00124988 181c
.org 0x12498a
	adds r0, #10	@ 0012498a 0a30
.org 0x12498c
	str r0, [r2, #8]	@ 0012498c 9060
.org 0x12498e
	b.n 0x124994	@ 0012498e 01e0
.org 0x124990
	movs r0, #0	@ 00124990 0020
.org 0x124992
	str r0, [r2, #52]	@ 00124992 5063
.org 0x124994
	ldr r0, [pc, #68]	@ 00124994 1148
.org 0x124996
	adds r2, r6, r0	@ 00124996 3218
.org 0x124998
	ldr r1, [r2, #36]	@ 00124998 516a
.org 0x12499a
	movs r0, #255	@ 0012499a ff20
.org 0x12499c
	ands r1, r0	@ 0012499c 0140
.org 0x12499e
	str r1, [r2, #36]	@ 0012499e 5162
.org 0x1249a0
	cmp r1, #0	@ 001249a0 0029
.org 0x1249a2
	bne.n 0x1249a6	@ 001249a2 00d1
.org 0x1249a4
	str r1, [r2, #48]	@ 001249a4 1163
.org 0x1249a6
	ldr r0, [r2, #0]	@ 001249a6 1068
.org 0x1249a8
	adds r0, #164	@ 001249a8 a430
.org 0x1249aa
	movs r1, #16	@ 001249aa 1021
.org 0x1249ac
	strh r1, [r0, #0]	@ 001249ac 0180
.org 0x1249ae
	ldr r0, [r2, #0]	@ 001249ae 1068
.org 0x1249b0
	ldr r1, [pc, #44]	@ 001249b0 0b49
.org 0x1249b2
	adds r0, r0, r1	@ 001249b2 4018
.org 0x1249b4
	ldrb r0, [r0, #0]	@ 001249b4 0078
.org 0x1249b6
	cmp r0, #1	@ 001249b6 0128
