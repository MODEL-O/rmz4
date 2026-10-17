@ FUN_080eb868  entry 0x080eb868  size 342
.thumb
.org 0xeb868
FUN_080eb868:
	push {r4, r5, r6, r7, lr}	@ 000eb868 f0b5
.org 0xeb86a
	mov r7, r9	@ 000eb86a 4f46
.org 0xeb86c
	mov r6, r8	@ 000eb86c 4646
.org 0xeb86e
	push {r6, r7}	@ 000eb86e c0b4
.org 0xeb870
	mov r8, r0	@ 000eb870 8046
.org 0xeb872
	ldrb r2, [r0, #14]	@ 000eb872 827b
.org 0xeb874
	cmp r2, #0	@ 000eb874 002a
.org 0xeb876
	beq.n 0xeb87e	@ 000eb876 02d0
.org 0xeb878
	cmp r2, #1	@ 000eb878 012a
.org 0xeb87a
	beq.n 0xeb940	@ 000eb87a 61d0
.org 0xeb87c
	b.n 0xeb9cc	@ 000eb87c a6e0
.org 0xeb87e
	mov r5, r8	@ 000eb87e 4546
.org 0xeb880
	adds r5, #180	@ 000eb880 b435
.org 0xeb882
	ldr r4, [r5, #0]	@ 000eb882 2c68
.org 0xeb884
	cmp r4, #0	@ 000eb884 002c
.org 0xeb886
	bne.n 0xeb88a	@ 000eb886 00d1
.org 0xeb888
	b.n 0xeb9cc	@ 000eb888 a0e0
.org 0xeb88a
	ldr r3, [pc, #40]	@ 000eb88a 0a4b
.org 0xeb88c
	ldrb r1, [r3, #18]	@ 000eb88c 997c
.org 0xeb88e
	movs r7, #1	@ 000eb88e 0127
.org 0xeb890
	adds r0, r7, #0	@ 000eb890 381c
.org 0xeb892
	ands r0, r1	@ 000eb892 0840
.org 0xeb894
	cmp r0, #0	@ 000eb894 0028
.org 0xeb896
	bne.n 0xeb8a0	@ 000eb896 03d1
.org 0xeb898
	ldr r0, [pc, #28]	@ 000eb898 0748
.org 0xeb89a
	ldrb r6, [r0, #0]	@ 000eb89a 0678
.org 0xeb89c
	cmp r6, #0	@ 000eb89c 002e
.org 0xeb89e
	beq.n 0xeb8c4	@ 000eb89e 11d0
.org 0xeb8a0
	ldrh r0, [r3, #20]	@ 000eb8a0 988a
.org 0xeb8a2
	ldr r1, [pc, #24]	@ 000eb8a2 0649
.org 0xeb8a4
	ands r1, r0	@ 000eb8a4 0140
.org 0xeb8a6
	movs r0, #0	@ 000eb8a6 0020
.org 0xeb8a8
	strh r1, [r3, #20]	@ 000eb8a8 9982
.org 0xeb8aa
	ldr r3, [pc, #20]	@ 000eb8aa 054b
.org 0xeb8ac
	adds r1, r4, r3	@ 000eb8ac e118
.org 0xeb8ae
	strb r0, [r1, #0]	@ 000eb8ae 0870
.org 0xeb8b0
	str r2, [r5, #0]	@ 000eb8b0 2a60
.org 0xeb8b2
	b.n 0xeb9cc	@ 000eb8b2 8be0
.org 0xeb8b4
	.byte 0x10,0xe9,0x02,0x02	@ 000eb8b4 data
.org 0xeb8b8
	.byte 0xf8,0xdb,0x02,0x02	@ 000eb8b8 data
.org 0xeb8bc
	.byte 0xfe,0xff,0x00,0x00	@ 000eb8bc data
.org 0xeb8c0
	.byte 0x43,0x01,0x00,0x00	@ 000eb8c0 data
.org 0xeb8c4
	ldrh r0, [r3, #0]	@ 000eb8c4 1888
.org 0xeb8c6
	cmp r0, #11	@ 000eb8c6 0b28
.org 0xeb8c8
	bne.n 0xeb92c	@ 000eb8c8 30d1
.org 0xeb8ca
	movs r4, #144	@ 000eb8ca 9024
.org 0xeb8cc
	lsls r4, r4, #1	@ 000eb8cc 6400
.org 0xeb8ce
	adds r0, r3, r4	@ 000eb8ce 1819
.org 0xeb8d0
	ldr r3, [pc, #48]	@ 000eb8d0 0c4b
.org 0xeb8d2
	ldr r2, [r3, #0]	@ 000eb8d2 1a68
.org 0xeb8d4
	ldr r1, [r0, #0]	@ 000eb8d4 0168
.org 0xeb8d6
	ldr r0, [r2, #84]	@ 000eb8d6 506d
.org 0xeb8d8
	cmp r1, r0	@ 000eb8d8 8142
.org 0xeb8da
	ble.n 0xeb908	@ 000eb8da 15dd
.org 0xeb8dc
	ldrb r1, [r2, #10]	@ 000eb8dc 917a
.org 0xeb8de
	movs r0, #239	@ 000eb8de ef20
.org 0xeb8e0
	ands r0, r1	@ 000eb8e0 0840
.org 0xeb8e2
	strb r0, [r2, #10]	@ 000eb8e2 9072
.org 0xeb8e4
	ldr r2, [r3, #0]	@ 000eb8e4 1a68
.org 0xeb8e6
	ldrb r1, [r2, #10]	@ 000eb8e6 917a
.org 0xeb8e8
	movs r0, #8	@ 000eb8e8 0820
.org 0xeb8ea
	ands r0, r1	@ 000eb8ea 0840
.org 0xeb8ec
	cmp r0, #0	@ 000eb8ec 0028
.org 0xeb8ee
	beq.n 0xeb92c	@ 000eb8ee 1dd0
.org 0xeb8f0
	adds r0, r2, #0	@ 000eb8f0 101c
.org 0xeb8f2
	adds r0, #76	@ 000eb8f2 4c30
.org 0xeb8f4
	strb r6, [r0, #0]	@ 000eb8f4 0670
.org 0xeb8f6
	ldr r1, [r3, #0]	@ 000eb8f6 1968
.org 0xeb8f8
	adds r1, #74	@ 000eb8f8 4a31
.org 0xeb8fa
	ldrb r2, [r1, #0]	@ 000eb8fa 0a78
.org 0xeb8fc
	movs r0, #17	@ 000eb8fc 1120
.org 0xeb8fe
	negs r0, r0	@ 000eb8fe 4042
.org 0xeb900
	ands r0, r2	@ 000eb900 1040
.org 0xeb902
	b.n 0xeb92a	@ 000eb902 12e0
.org 0xeb904
	.byte 0xf0,0xdb,0x02,0x02	@ 000eb904 data
.org 0xeb908
	ldrb r0, [r2, #10]	@ 000eb908 907a
.org 0xeb90a
	movs r4, #16	@ 000eb90a 1024
.org 0xeb90c
	orrs r0, r4	@ 000eb90c 2043
.org 0xeb90e
	strb r0, [r2, #10]	@ 000eb90e 9072
.org 0xeb910
	ldr r2, [r3, #0]	@ 000eb910 1a68
.org 0xeb912
	ldrb r1, [r2, #10]	@ 000eb912 917a
.org 0xeb914
	movs r0, #8	@ 000eb914 0820
.org 0xeb916
	ands r0, r1	@ 000eb916 0840
.org 0xeb918
	cmp r0, #0	@ 000eb918 0028
.org 0xeb91a
	beq.n 0xeb92c	@ 000eb91a 07d0
.org 0xeb91c
	adds r0, r2, #0	@ 000eb91c 101c
.org 0xeb91e
	adds r0, #76	@ 000eb91e 4c30
.org 0xeb920
	strb r7, [r0, #0]	@ 000eb920 0770
.org 0xeb922
	ldr r1, [r3, #0]	@ 000eb922 1968
.org 0xeb924
	adds r1, #74	@ 000eb924 4a31
.org 0xeb926
	ldrb r0, [r1, #0]	@ 000eb926 0878
.org 0xeb928
	orrs r0, r4	@ 000eb928 2043
.org 0xeb92a
	strb r0, [r1, #0]	@ 000eb92a 0870
.org 0xeb92c
	ldr r0, [pc, #68]	@ 000eb92c 1148
.org 0xeb92e
	movs r1, #170	@ 000eb92e aa21
.org 0xeb930
	lsls r1, r1, #1	@ 000eb930 4900
.org 0xeb932
	adds r0, r0, r1	@ 000eb932 4018
.org 0xeb934
	movs r1, #2	@ 000eb934 0221
.org 0xeb936
	str r1, [r0, #0]	@ 000eb936 0160
.org 0xeb938
	mov r2, r8	@ 000eb938 4246
.org 0xeb93a
	ldrb r0, [r2, #14]	@ 000eb93a 907b
.org 0xeb93c
	adds r0, #1	@ 000eb93c 0130
.org 0xeb93e
	strb r0, [r2, #14]	@ 000eb93e 9073
.org 0xeb940
	ldr r0, [pc, #48]	@ 000eb940 0c48
.org 0xeb942
	movs r4, #170	@ 000eb942 aa24
.org 0xeb944
	lsls r4, r4, #1	@ 000eb944 6400
.org 0xeb946
	adds r3, r0, r4	@ 000eb946 0319
.org 0xeb948
	ldr r2, [r3, #0]	@ 000eb948 1a68
.org 0xeb94a
	cmp r2, #0	@ 000eb94a 002a
.org 0xeb94c
	bne.n 0xeb9cc	@ 000eb94c 3ed1
.org 0xeb94e
	mov r1, r8	@ 000eb94e 4146
.org 0xeb950
	adds r1, #180	@ 000eb950 b431
.org 0xeb952
	ldr r0, [r1, #0]	@ 000eb952 0868
.org 0xeb954
	subs r4, #17	@ 000eb954 113c
.org 0xeb956
	adds r0, r0, r4	@ 000eb956 0019
.org 0xeb958
	strb r2, [r0, #0]	@ 000eb958 0270
.org 0xeb95a
	movs r0, #1	@ 000eb95a 0120
.org 0xeb95c
	str r0, [r3, #0]	@ 000eb95c 1860
.org 0xeb95e
	mov r2, r8	@ 000eb95e 4246
.org 0xeb960
	ldrb r0, [r2, #17]	@ 000eb960 507c
.org 0xeb962
	mov r9, r1	@ 000eb962 8946
.org 0xeb964
	cmp r0, #1	@ 000eb964 0128
.org 0xeb966
	beq.n 0xeb978	@ 000eb966 07d0
.org 0xeb968
	mov r0, r8	@ 000eb968 4046
.org 0xeb96a
	adds r0, #84	@ 000eb96a 5430
.org 0xeb96c
	bl 0x1ef14	@ 000eb96c 33f7d2fa
.org 0xeb970
	b.n 0xeb980	@ 000eb970 06e0
.org 0xeb972
	.byte 0x00	@ 000eb972 data
.org 0xeb973
	.byte 0x00	@ 000eb973 data
.org 0xeb974
	.byte 0x10,0xe9,0x02,0x02	@ 000eb974 data
.org 0xeb978
	mov r0, r8	@ 000eb978 4046
.org 0xeb97a
	adds r0, #84	@ 000eb97a 5430
.org 0xeb97c
	bl 0x1f018	@ 000eb97c 33f74cfb
.org 0xeb980
	mov r1, r8	@ 000eb980 4146
.org 0xeb982
	adds r1, #184	@ 000eb982 b831
.org 0xeb984
	str r0, [r1, #0]	@ 000eb984 0860
.org 0xeb986
	adds r7, r1, #0	@ 000eb986 0f1c
.org 0xeb988
	ldr r1, [r7, #0]	@ 000eb988 3968
.org 0xeb98a
	cmp r1, #0	@ 000eb98a 0029
.org 0xeb98c
	beq.n 0xeb9cc	@ 000eb98c 1ed0
.org 0xeb98e
	ldr r4, [pc, #72]	@ 000eb98e 124c
.org 0xeb990
	movs r6, #0	@ 000eb990 0026
.org 0xeb992
	movs r5, #0	@ 000eb992 0025
.org 0xeb994
	movs r0, #128	@ 000eb994 8020
.org 0xeb996
	lsls r0, r0, #8	@ 000eb996 0002
.org 0xeb998
	strh r0, [r4, #4]	@ 000eb998 a080
.org 0xeb99a
	ldr r0, [r1, #0]	@ 000eb99a 0868
.org 0xeb99c
	ldr r1, [r1, #4]	@ 000eb99c 4968
.org 0xeb99e
	bl 0x8534	@ 000eb99e 1cf7c9fd
.org 0xeb9a2
	adds r1, r0, #0	@ 000eb9a2 011c
.org 0xeb9a4
	ldr r0, [pc, #52]	@ 000eb9a4 0d48
.org 0xeb9a6
	ldr r0, [r0, #0]	@ 000eb9a6 0068
.org 0xeb9a8
	str r1, [r0, #88]	@ 000eb9a8 8165
.org 0xeb9aa
	ldr r1, [r7, #0]	@ 000eb9aa 3968
.org 0xeb9ac
	ldr r1, [r1, #0]	@ 000eb9ac 0968
.org 0xeb9ae
	str r1, [r0, #84]	@ 000eb9ae 4165
.org 0xeb9b0
	bl 0x2b7cc	@ 000eb9b0 3ff70cff
.org 0xeb9b4
	ldrh r1, [r4, #20]	@ 000eb9b4 a18a
.org 0xeb9b6
	ldr r0, [pc, #40]	@ 000eb9b6 0a48
.org 0xeb9b8
	ands r0, r1	@ 000eb9b8 0840
.org 0xeb9ba
	strh r0, [r4, #20]	@ 000eb9ba a082
.org 0xeb9bc
	adds r4, #232	@ 000eb9bc e834
