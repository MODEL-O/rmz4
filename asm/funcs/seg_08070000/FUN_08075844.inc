@ FUN_08075844  entry 0x08075844  size 352
.thumb
.org 0x75844
FUN_08075844:
	push {r4, lr}	@ 00075844 10b5
.org 0x75846
	adds r4, r0, #0	@ 00075846 041c
.org 0x75848
	ldrb r0, [r4, #14]	@ 00075848 a07b
.org 0x7584a
	cmp r0, #0	@ 0007584a 0028
.org 0x7584c
	bne.n 0x758d0	@ 0007584c 40d1
.org 0x7584e
	ldr r1, [pc, #80]	@ 0007584e 1449
.org 0x75850
	adds r0, r4, #0	@ 00075850 201c
.org 0x75852
	bl 0x1cf00	@ 00075852 a7f755fb
.org 0x75856
	movs r0, #214	@ 00075856 d620
.org 0x75858
	bl 0x2b10	@ 00075858 8df75af9
.org 0x7585c
	movs r3, #0	@ 0007585c 0023
.org 0x7585e
	ldr r0, [pc, #68]	@ 0007585e 1148
.org 0x75860
	ldr r2, [r0, #0]	@ 00075860 0268
.org 0x75862
	ldr r1, [r4, #84]	@ 00075862 616d
.org 0x75864
	ldr r0, [r2, #84]	@ 00075864 506d
.org 0x75866
	cmp r1, r0	@ 00075866 8142
.org 0x75868
	bge.n 0x7586c	@ 00075868 00da
.org 0x7586a
	movs r3, #1	@ 0007586a 0123
.org 0x7586c
	adds r0, r4, #0	@ 0007586c 201c
.org 0x7586e
	adds r0, #76	@ 0007586e 4c30
.org 0x75870
	strb r3, [r0, #0]	@ 00075870 0370
.org 0x75872
	movs r3, #0	@ 00075872 0023
.org 0x75874
	ldr r1, [r4, #84]	@ 00075874 616d
.org 0x75876
	ldr r0, [r2, #84]	@ 00075876 506d
.org 0x75878
	cmp r1, r0	@ 00075878 8142
.org 0x7587a
	bge.n 0x7587e	@ 0007587a 00da
.org 0x7587c
	movs r3, #1	@ 0007587c 0123
.org 0x7587e
	movs r0, #74	@ 0007587e 4a20
.org 0x75880
	adds r0, r0, r4	@ 00075880 0019
.org 0x75882
	mov ip, r0	@ 00075882 8446
.org 0x75884
	lsls r2, r3, #4	@ 00075884 1a01
.org 0x75886
	ldrb r1, [r0, #0]	@ 00075886 0178
.org 0x75888
	movs r0, #17	@ 00075888 1120
.org 0x7588a
	negs r0, r0	@ 0007588a 4042
.org 0x7588c
	ands r0, r1	@ 0007588c 0840
.org 0x7588e
	orrs r0, r2	@ 0007588e 1043
.org 0x75890
	mov r1, ip	@ 00075890 6146
.org 0x75892
	strb r0, [r1, #0]	@ 00075892 0870
.org 0x75894
	cmp r3, #0	@ 00075894 002b
.org 0x75896
	beq.n 0x758a8	@ 00075896 07d0
.org 0x75898
	ldrb r0, [r4, #10]	@ 00075898 a07a
.org 0x7589a
	movs r1, #16	@ 0007589a 1021
.org 0x7589c
	orrs r0, r1	@ 0007589c 0843
.org 0x7589e
	b.n 0x758ae	@ 0007589e 06e0
.org 0x758a0
	.byte 0x03,0xaf,0x00,0x00	@ 000758a0 data
.org 0x758a4
	.byte 0xf0,0xdb,0x02,0x02	@ 000758a4 data
.org 0x758a8
	ldrb r1, [r4, #10]	@ 000758a8 a17a
.org 0x758aa
	movs r0, #239	@ 000758aa ef20
.org 0x758ac
	ands r0, r1	@ 000758ac 0840
.org 0x758ae
	strb r0, [r4, #10]	@ 000758ae a072
.org 0x758b0
	adds r0, r4, #0	@ 000758b0 201c
.org 0x758b2
	adds r0, #116	@ 000758b2 7430
.org 0x758b4
	ldr r1, [pc, #20]	@ 000758b4 0549
.org 0x758b6
	bl 0x5784	@ 000758b6 8ff765ff
.org 0x758ba
	movs r1, #0	@ 000758ba 0021
.org 0x758bc
	movs r0, #64	@ 000758bc 4020
.org 0x758be
	strb r0, [r4, #18]	@ 000758be a074
.org 0x758c0
	strb r1, [r4, #19]	@ 000758c0 e174
.org 0x758c2
	strb r1, [r4, #15]	@ 000758c2 e173
.org 0x758c4
	ldrb r0, [r4, #14]	@ 000758c4 a07b
.org 0x758c6
	adds r0, #1	@ 000758c6 0130
.org 0x758c8
	strb r0, [r4, #14]	@ 000758c8 a073
.org 0x758ca
	b.n 0x7591c	@ 000758ca 27e0
.org 0x758cc
	.byte 0x64,0xce,0x85,0x08	@ 000758cc data
.org 0x758d0
	adds r0, r4, #0	@ 000758d0 201c
.org 0x758d2
	adds r0, #114	@ 000758d2 7230
.org 0x758d4
	ldrb r0, [r0, #0]	@ 000758d4 0078
.org 0x758d6
	lsls r0, r0, #24	@ 000758d6 0006
.org 0x758d8
	asrs r0, r0, #24	@ 000758d8 0016
.org 0x758da
	cmp r0, #1	@ 000758da 0128
.org 0x758dc
	bgt.n 0x7591c	@ 000758dc 1edc
.org 0x758de
	ldrb r1, [r4, #10]	@ 000758de a17a
.org 0x758e0
	movs r0, #16	@ 000758e0 1020
.org 0x758e2
	ands r0, r1	@ 000758e2 0840
.org 0x758e4
	cmp r0, #0	@ 000758e4 0028
.org 0x758e6
	beq.n 0x75904	@ 000758e6 0dd0
.org 0x758e8
	ldr r1, [pc, #20]	@ 000758e8 0549
.org 0x758ea
	adds r0, r4, #0	@ 000758ea 201c
.org 0x758ec
	adds r0, #113	@ 000758ec 7130
.org 0x758ee
	ldrb r0, [r0, #0]	@ 000758ee 0078
.org 0x758f0
	lsls r0, r0, #24	@ 000758f0 0006
.org 0x758f2
	asrs r0, r0, #24	@ 000758f2 0016
.org 0x758f4
	lsls r0, r0, #2	@ 000758f4 8000
.org 0x758f6
	adds r0, r0, r1	@ 000758f6 4018
.org 0x758f8
	ldr r1, [r4, #84]	@ 000758f8 616d
.org 0x758fa
	ldr r0, [r0, #0]	@ 000758fa 0068
.org 0x758fc
	subs r1, r1, r0	@ 000758fc 091a
.org 0x758fe
	b.n 0x7591a	@ 000758fe 0ce0
.org 0x75900
	.byte 0xec,0xd0,0x85,0x08	@ 00075900 data
.org 0x75904
	ldr r1, [pc, #52]	@ 00075904 0d49
.org 0x75906
	adds r0, r4, #0	@ 00075906 201c
.org 0x75908
	adds r0, #113	@ 00075908 7130
.org 0x7590a
	ldrb r0, [r0, #0]	@ 0007590a 0078
.org 0x7590c
	lsls r0, r0, #24	@ 0007590c 0006
.org 0x7590e
	asrs r0, r0, #24	@ 0007590e 0016
.org 0x75910
	lsls r0, r0, #2	@ 00075910 8000
.org 0x75912
	adds r0, r0, r1	@ 00075912 4018
.org 0x75914
	ldr r1, [r4, #84]	@ 00075914 616d
.org 0x75916
	ldr r0, [r0, #0]	@ 00075916 0068
.org 0x75918
	adds r1, r1, r0	@ 00075918 0918
.org 0x7591a
	str r1, [r4, #84]	@ 0007591a 6165
.org 0x7591c
	adds r0, r4, #0	@ 0007591c 201c
.org 0x7591e
	bl 0x1cff0	@ 0007591e a7f767fb
.org 0x75922
	adds r0, r4, #0	@ 00075922 201c
.org 0x75924
	adds r0, #115	@ 00075924 7330
.org 0x75926
	ldrb r0, [r0, #0]	@ 00075926 0078
.org 0x75928
	cmp r0, #3	@ 00075928 0328
.org 0x7592a
	bne.n 0x75940	@ 0007592a 09d1
.org 0x7592c
	ldrb r0, [r4, #15]	@ 0007592c e07b
.org 0x7592e
	cmp r0, #0	@ 0007592e 0028
.org 0x75930
	beq.n 0x75940	@ 00075930 06d0
.org 0x75932
	movs r1, #0	@ 00075932 0021
.org 0x75934
	movs r0, #8	@ 00075934 0820
.org 0x75936
	strb r0, [r4, #13]	@ 00075936 6073
.org 0x75938
	strb r1, [r4, #14]	@ 00075938 a173
.org 0x7593a
	b.n 0x759c6	@ 0007593a 44e0
.org 0x7593c
	.byte 0xec,0xd0,0x85,0x08	@ 0007593c data
.org 0x75940
	adds r0, r4, #0	@ 00075940 201c
.org 0x75942
	adds r0, #140	@ 00075942 8c30
.org 0x75944
	ldr r0, [r0, #0]	@ 00075944 0068
.org 0x75946
	movs r1, #8	@ 00075946 0821
.org 0x75948
	ands r0, r1	@ 00075948 0840
.org 0x7594a
	cmp r0, #0	@ 0007594a 0028
.org 0x7594c
	beq.n 0x759b0	@ 0007594c 30d0
.org 0x7594e
	ldrb r1, [r4, #10]	@ 0007594e a17a
.org 0x75950
	movs r0, #16	@ 00075950 1020
.org 0x75952
	ands r0, r1	@ 00075952 0840
.org 0x75954
	cmp r0, #0	@ 00075954 0028
.org 0x75956
	beq.n 0x75964	@ 00075956 05d0
.org 0x75958
	ldr r0, [r4, #84]	@ 00075958 606d
.org 0x7595a
	ldr r1, [pc, #4]	@ 0007595a 0149
.org 0x7595c
	b.n 0x7596a	@ 0007595c 05e0
.org 0x7595e
	.byte 0x00	@ 0007595e data
.org 0x7595f
	.byte 0x00	@ 0007595f data
.org 0x75960
	.byte 0x00,0xff,0xff,0xff	@ 00075960 data
.org 0x75964
	ldr r0, [r4, #84]	@ 00075964 606d
.org 0x75966
	movs r1, #128	@ 00075966 8021
.org 0x75968
	lsls r1, r1, #1	@ 00075968 4900
.org 0x7596a
	adds r0, r0, r1	@ 0007596a 4018
.org 0x7596c
	str r0, [r4, #84]	@ 0007596c 6065
.org 0x7596e
	ldrb r0, [r4, #19]	@ 0007596e e07c
.org 0x75970
	adds r3, r0, #0	@ 00075970 031c
.org 0x75972
	cmp r3, #0	@ 00075972 002b
.org 0x75974
	bne.n 0x759a4	@ 00075974 16d1
.org 0x75976
	ldr r2, [pc, #32]	@ 00075976 084a
.org 0x75978
	ldr r1, [r2, #0]	@ 00075978 1168
.org 0x7597a
	ldr r0, [pc, #32]	@ 0007597a 0848
.org 0x7597c
	muls r0, r1	@ 0007597c 4843
.org 0x7597e
	ldr r1, [pc, #32]	@ 0007597e 0849
.org 0x75980
	adds r0, r0, r1	@ 00075980 4018
.org 0x75982
	lsls r0, r0, #1	@ 00075982 4000
.org 0x75984
	lsrs r1, r0, #1	@ 00075984 4108
.org 0x75986
	str r1, [r2, #0]	@ 00075986 1160
.org 0x75988
	lsrs r0, r0, #17	@ 00075988 400c
.org 0x7598a
	movs r1, #1	@ 0007598a 0121
.org 0x7598c
	ands r0, r1	@ 0007598c 0840
.org 0x7598e
	cmp r0, #0	@ 0007598e 0028
.org 0x75990
	beq.n 0x759a8	@ 00075990 0ad0
.org 0x75992
	strb r1, [r4, #15]	@ 00075992 e173
.org 0x75994
	b.n 0x759a8	@ 00075994 08e0
.org 0x75996
	.byte 0x00	@ 00075996 data
.org 0x75997
	.byte 0x00	@ 00075997 data
.org 0x75998
	.byte 0x38,0xdc,0x02,0x02	@ 00075998 data
.org 0x7599c
	.byte 0xfd,0x43,0x03,0x00	@ 0007599c data
.org 0x759a0
	.byte 0xc3,0x9e,0x26,0x00	@ 000759a0 data
