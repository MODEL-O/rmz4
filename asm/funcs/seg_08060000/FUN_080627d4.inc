@ FUN_080627d4  entry 0x080627d4  size 370
.thumb
.org 0x627d4
FUN_080627d4:
	push {r4, r5, r6, r7, lr}	@ 000627d4 f0b5
.org 0x627d6
	mov r7, r9	@ 000627d6 4f46
.org 0x627d8
	mov r6, r8	@ 000627d8 4646
.org 0x627da
	push {r6, r7}	@ 000627da c0b4
.org 0x627dc
	sub sp, #28	@ 000627dc 87b0
.org 0x627de
	adds r6, r0, #0	@ 000627de 061c
.org 0x627e0
	ldrb r0, [r6, #10]	@ 000627e0 b07a
.org 0x627e2
	lsrs r0, r0, #4	@ 000627e2 0009
.org 0x627e4
	mov r8, r0	@ 000627e4 8046
.org 0x627e6
	movs r0, #1	@ 000627e6 0120
.org 0x627e8
	mov r9, r0	@ 000627e8 8146
.org 0x627ea
	mov r1, r8	@ 000627ea 4146
.org 0x627ec
	ands r1, r0	@ 000627ec 0140
.org 0x627ee
	mov r8, r1	@ 000627ee 8846
.org 0x627f0
	ldrb r4, [r6, #15]	@ 000627f0 f47b
.org 0x627f2
	cmp r4, #0	@ 000627f2 002c
.org 0x627f4
	bne.n 0x62812	@ 000627f4 0dd1
.org 0x627f6
	movs r0, #133	@ 000627f6 8520
.org 0x627f8
	lsls r0, r0, #1	@ 000627f8 4000
.org 0x627fa
	bl 0x2b10	@ 000627fa a0f789f9
.org 0x627fe
	adds r0, r6, #0	@ 000627fe 301c
.org 0x62800
	movs r1, #2	@ 00062800 0221
.org 0x62802
	bl 0x65a94	@ 00062802 03f047f9
.org 0x62806
	movs r0, #64	@ 00062806 4020
.org 0x62808
	strb r0, [r6, #18]	@ 00062808 b074
.org 0x6280a
	strb r4, [r6, #19]	@ 0006280a f474
.org 0x6280c
	ldrb r0, [r6, #15]	@ 0006280c f07b
.org 0x6280e
	adds r0, #1	@ 0006280e 0130
.org 0x62810
	strb r0, [r6, #15]	@ 00062810 f073
.org 0x62812
	adds r0, r6, #0	@ 00062812 301c
.org 0x62814
	bl 0x1cff0	@ 00062814 baf7ecfb
.org 0x62818
	adds r0, r6, #0	@ 00062818 301c
.org 0x6281a
	adds r0, #116	@ 0006281a 7430
.org 0x6281c
	ldr r4, [pc, #276]	@ 0006281c 454c
.org 0x6281e
	ldr r3, [pc, #280]	@ 0006281e 464b
.org 0x62820
	adds r1, r6, #0	@ 00062820 311c
.org 0x62822
	adds r1, #180	@ 00062822 b431
.org 0x62824
	ldrb r2, [r1, #0]	@ 00062824 0a78
.org 0x62826
	lsls r1, r2, #1	@ 00062826 5100
.org 0x62828
	adds r1, r1, r3	@ 00062828 c918
.org 0x6282a
	ldrh r1, [r1, #0]	@ 0006282a 0988
.org 0x6282c
	lsls r1, r1, #2	@ 0006282c 8900
.org 0x6282e
	adds r1, r1, r4	@ 0006282e 0919
.org 0x62830
	adds r3, r6, #0	@ 00062830 331c
.org 0x62832
	adds r3, #113	@ 00062832 7133
.org 0x62834
	movs r5, #0	@ 00062834 0025
.org 0x62836
	ldrsb r5, [r3, r5]	@ 00062836 5d57
.org 0x62838
	ldr r1, [r1, #0]	@ 00062838 0968
.org 0x6283a
	lsls r3, r5, #2	@ 0006283a ab00
.org 0x6283c
	adds r3, r3, r1	@ 0006283c 5b18
.org 0x6283e
	ldr r4, [pc, #252]	@ 0006283e 3f4c
.org 0x62840
	adds r1, r6, #0	@ 00062840 311c
.org 0x62842
	adds r1, #181	@ 00062842 b531
.org 0x62844
	ldrb r1, [r1, #0]	@ 00062844 0978
.org 0x62846
	lsls r1, r1, #2	@ 00062846 8900
.org 0x62848
	adds r1, r1, r4	@ 00062848 0919
.org 0x6284a
	ldr r1, [r1, #0]	@ 0006284a 0968
.org 0x6284c
	lsls r2, r2, #2	@ 0006284c 9200
.org 0x6284e
	adds r2, r2, r1	@ 0006284e 5218
.org 0x62850
	ldr r1, [r2, #0]	@ 00062850 1168
.org 0x62852
	adds r1, r1, r5	@ 00062852 4919
.org 0x62854
	ldrb r1, [r1, #0]	@ 00062854 0978
.org 0x62856
	lsls r2, r1, #1	@ 00062856 4a00
.org 0x62858
	adds r2, r2, r1	@ 00062858 5218
.org 0x6285a
	lsls r2, r2, #3	@ 0006285a d200
.org 0x6285c
	ldr r1, [r3, #0]	@ 0006285c 1968
.org 0x6285e
	adds r1, r1, r2	@ 0006285e 8918
.org 0x62860
	bl 0x5784	@ 00062860 a2f790ff
.org 0x62864
	ldrb r0, [r6, #18]	@ 00062864 b07c
.org 0x62866
	cmp r0, #0	@ 00062866 0028
.org 0x62868
	beq.n 0x6286e	@ 00062868 01d0
.org 0x6286a
	subs r0, #1	@ 0006286a 0138
.org 0x6286c
	strb r0, [r6, #18]	@ 0006286c b074
.org 0x6286e
	ldrb r0, [r6, #19]	@ 0006286e f07c
.org 0x62870
	adds r7, r6, #0	@ 00062870 371c
.org 0x62872
	adds r7, #188	@ 00062872 bc37
.org 0x62874
	cmp r0, #0	@ 00062874 0028
.org 0x62876
	bne.n 0x62904	@ 00062876 45d1
.org 0x62878
	adds r0, r6, #0	@ 00062878 301c
.org 0x6287a
	adds r0, #115	@ 0006287a 7330
.org 0x6287c
	ldrb r0, [r0, #0]	@ 0006287c 0078
.org 0x6287e
	cmp r0, #4	@ 0006287e 0428
.org 0x62880
	bne.n 0x62904	@ 00062880 40d1
.org 0x62882
	ldr r1, [pc, #188]	@ 00062882 2f49
.org 0x62884
	mov r0, sp	@ 00062884 6846
.org 0x62886
	movs r2, #2	@ 00062886 0222
.org 0x62888
	bl 0x129258	@ 00062888 c6f0e6fc
.org 0x6288c
	add r5, sp, #4	@ 0006288c 01ad
.org 0x6288e
	ldr r1, [pc, #180]	@ 0006288e 2d49
.org 0x62890
	adds r0, r5, #0	@ 00062890 281c
.org 0x62892
	movs r2, #2	@ 00062892 0222
.org 0x62894
	bl 0x129258	@ 00062894 c6f0e0fc
.org 0x62898
	add r4, sp, #8	@ 00062898 02ac
.org 0x6289a
	ldr r1, [pc, #172]	@ 0006289a 2b49
.org 0x6289c
	adds r0, r4, #0	@ 0006289c 201c
.org 0x6289e
	movs r2, #2	@ 0006289e 0222
.org 0x628a0
	bl 0x129258	@ 000628a0 c6f0dafc
.org 0x628a4
	str r5, [sp, #12]	@ 000628a4 0395
.org 0x628a6
	add r2, sp, #12	@ 000628a6 03aa
.org 0x628a8
	str r4, [r2, #4]	@ 000628a8 5460
.org 0x628aa
	movs r3, #0	@ 000628aa 0023
.org 0x628ac
	ldr r0, [pc, #156]	@ 000628ac 2748
.org 0x628ae
	ldr r0, [r0, #0]	@ 000628ae 0068
.org 0x628b0
	ldr r0, [r0, #84]	@ 000628b0 406d
.org 0x628b2
	ldr r1, [r6, #84]	@ 000628b2 716d
.org 0x628b4
	subs r0, r0, r1	@ 000628b4 401a
.org 0x628b6
	ldr r1, [pc, #152]	@ 000628b6 2649
.org 0x628b8
	adds r0, r0, r1	@ 000628b8 4018
.org 0x628ba
	ldr r1, [pc, #152]	@ 000628ba 2649
.org 0x628bc
	cmp r0, r1	@ 000628bc 8842
.org 0x628be
	bls.n 0x628c2	@ 000628be 00d9
.org 0x628c0
	movs r3, #1	@ 000628c0 0123
.org 0x628c2
	lsls r0, r3, #2	@ 000628c2 9800
.org 0x628c4
	adds r0, r0, r2	@ 000628c4 8018
.org 0x628c6
	ldr r0, [r0, #0]	@ 000628c6 0068
.org 0x628c8
	movs r1, #2	@ 000628c8 0221
.org 0x628ca
	bl 0x6635c	@ 000628ca 03f047fd
.org 0x628ce
	lsls r0, r0, #24	@ 000628ce 0006
.org 0x628d0
	lsrs r0, r0, #24	@ 000628d0 000e
.org 0x628d2
	mov r1, r8	@ 000628d2 4146
.org 0x628d4
	lsls r2, r1, #1	@ 000628d4 4a00
.org 0x628d6
	subs r2, #1	@ 000628d6 013a
.org 0x628d8
	lsls r1, r2, #1	@ 000628d8 5100
.org 0x628da
	adds r1, r1, r2	@ 000628da 8918
.org 0x628dc
	lsls r1, r1, #3	@ 000628dc c900
.org 0x628de
	adds r1, r1, r2	@ 000628de 8918
.org 0x628e0
	lsls r1, r1, #9	@ 000628e0 4902
.org 0x628e2
	ldr r2, [r6, #84]	@ 000628e2 726d
.org 0x628e4
	adds r2, r2, r1	@ 000628e4 5218
.org 0x628e6
	str r2, [sp, #20]	@ 000628e6 0592
.org 0x628e8
	ldr r2, [r6, #88]	@ 000628e8 b26d
.org 0x628ea
	ldr r1, [pc, #108]	@ 000628ea 1b49
.org 0x628ec
	adds r2, r2, r1	@ 000628ec 5218
.org 0x628ee
	add r1, sp, #20	@ 000628ee 05a9
.org 0x628f0
	str r2, [r1, #4]	@ 000628f0 4a60
.org 0x628f2
	add r0, sp	@ 000628f2 6844
.org 0x628f4
	ldrb r2, [r0, #0]	@ 000628f4 0278
.org 0x628f6
	adds r0, r6, #0	@ 000628f6 301c
.org 0x628f8
	mov r3, r8	@ 000628f8 4346
.org 0x628fa
	bl 0x9af24	@ 000628fa 38f013fb
.org 0x628fe
	str r0, [r7, #0]	@ 000628fe 3860
.org 0x62900
	mov r0, r9	@ 00062900 4846
.org 0x62902
	strb r0, [r6, #19]	@ 00062902 f074
.org 0x62904
	ldr r0, [r7, #0]	@ 00062904 3868
.org 0x62906
	cmp r0, #0	@ 00062906 0028
.org 0x62908
	beq.n 0x6291c	@ 00062908 08d0
.org 0x6290a
	adds r0, #140	@ 0006290a 8c30
.org 0x6290c
	ldr r0, [r0, #0]	@ 0006290c 0068
.org 0x6290e
	movs r1, #128	@ 0006290e 8021
.org 0x62910
	lsls r1, r1, #4	@ 00062910 0901
.org 0x62912
	ands r0, r1	@ 00062912 0840
.org 0x62914
	cmp r0, #0	@ 00062914 0028
.org 0x62916
	beq.n 0x6291c	@ 00062916 01d0
.org 0x62918
	movs r0, #0	@ 00062918 0020
.org 0x6291a
	str r0, [r7, #0]	@ 0006291a 3860
.org 0x6291c
	ldrb r1, [r6, #18]	@ 0006291c b17c
.org 0x6291e
	cmp r1, #0	@ 0006291e 0029
.org 0x62920
	bne.n 0x62962	@ 00062920 1fd1
.org 0x62922
	ldrb r0, [r6, #19]	@ 00062922 f07c
.org 0x62924
	cmp r0, #0	@ 00062924 0028
.org 0x62926
	beq.n 0x62962	@ 00062926 1cd0
.org 0x62928
	ldr r0, [r7, #0]	@ 00062928 3868
.org 0x6292a
	cmp r0, #0	@ 0006292a 0028
.org 0x6292c
	bne.n 0x6295c	@ 0006292c 16d1
.org 0x6292e
	movs r0, #2	@ 0006292e 0220
.org 0x62930
	b.n 0x6295e	@ 00062930 15e0
.org 0x62932
	.byte 0x00	@ 00062932 data
.org 0x62933
	.byte 0x00	@ 00062933 data
.org 0x62934
	.byte 0x80,0xaf,0x85,0x08	@ 00062934 data
.org 0x62938
	.byte 0xa0,0xb0,0x85,0x08	@ 00062938 data
.org 0x6293c
	.byte 0x98,0xb0,0x85,0x08	@ 0006293c data
.org 0x62940
	.byte 0x00,0x98,0x12,0x08	@ 00062940 data
.org 0x62944
	.byte 0x02,0x98,0x12,0x08	@ 00062944 data
