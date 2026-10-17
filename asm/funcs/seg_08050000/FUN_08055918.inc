@ FUN_08055918  entry 0x08055918  size 120
.thumb
.org 0x55918
FUN_08055918:
	push {r4, lr}	@ 00055918 10b5
.org 0x5591a
	adds r4, r0, #0	@ 0005591a 041c
.org 0x5591c
	ldrb r0, [r4, #15]	@ 0005591c e07b
.org 0x5591e
	cmp r0, #0	@ 0005591e 0028
.org 0x55920
	bne.n 0x55934	@ 00055920 08d1
.org 0x55922
	ldr r1, [pc, #108]	@ 00055922 1b49
.org 0x55924
	adds r0, r4, #0	@ 00055924 201c
.org 0x55926
	bl 0x1cf00	@ 00055926 c7f7ebfa
.org 0x5592a
	movs r0, #16	@ 0005592a 1020
.org 0x5592c
	strb r0, [r4, #18]	@ 0005592c a074
.org 0x5592e
	ldrb r0, [r4, #15]	@ 0005592e e07b
.org 0x55930
	adds r0, #1	@ 00055930 0130
.org 0x55932
	strb r0, [r4, #15]	@ 00055932 e073
.org 0x55934
	adds r0, r4, #0	@ 00055934 201c
.org 0x55936
	bl 0x1cff0	@ 00055936 c7f75bfb
.org 0x5593a
	adds r0, r4, #0	@ 0005593a 201c
.org 0x5593c
	adds r0, #116	@ 0005593c 7430
.org 0x5593e
	ldr r3, [pc, #84]	@ 0005593e 154b
.org 0x55940
	ldrb r1, [r4, #30]	@ 00055940 a17f
.org 0x55942
	lsls r1, r1, #8	@ 00055942 0902
.org 0x55944
	adds r2, r4, #0	@ 00055944 221c
.org 0x55946
	adds r2, #112	@ 00055946 7032
.org 0x55948
	ldrb r2, [r2, #0]	@ 00055948 1278
.org 0x5594a
	orrs r1, r2	@ 0005594a 1143
.org 0x5594c
	ldr r2, [pc, #72]	@ 0005594c 124a
.org 0x5594e
	adds r1, r1, r2	@ 0005594e 8918
.org 0x55950
	lsls r1, r1, #2	@ 00055950 8900
.org 0x55952
	adds r1, r1, r3	@ 00055952 c918
.org 0x55954
	adds r2, r4, #0	@ 00055954 221c
.org 0x55956
	adds r2, #113	@ 00055956 7132
.org 0x55958
	ldrb r2, [r2, #0]	@ 00055958 1278
.org 0x5595a
	lsls r2, r2, #24	@ 0005595a 1206
.org 0x5595c
	asrs r2, r2, #24	@ 0005595c 1216
.org 0x5595e
	ldr r1, [r1, #0]	@ 0005595e 0968
.org 0x55960
	lsls r2, r2, #2	@ 00055960 9200
.org 0x55962
	adds r2, r2, r1	@ 00055962 5218
.org 0x55964
	ldr r1, [r2, #0]	@ 00055964 1168
.org 0x55966
	ldrb r2, [r1, #0]	@ 00055966 0a78
.org 0x55968
	lsls r1, r2, #1	@ 00055968 5100
.org 0x5596a
	adds r1, r1, r2	@ 0005596a 8918
.org 0x5596c
	lsls r1, r1, #3	@ 0005596c c900
.org 0x5596e
	ldr r2, [pc, #44]	@ 0005596e 0b4a
.org 0x55970
	adds r1, r1, r2	@ 00055970 8918
.org 0x55972
	bl 0x5784	@ 00055972 aff707ff
.org 0x55976
	ldrb r0, [r4, #18]	@ 00055976 a07c
.org 0x55978
	subs r0, #1	@ 00055978 0138
.org 0x5597a
	strb r0, [r4, #18]	@ 0005597a a074
.org 0x5597c
	lsls r0, r0, #24	@ 0005597c 0006
.org 0x5597e
	lsrs r1, r0, #24	@ 0005597e 010e
.org 0x55980
	cmp r1, #0	@ 00055980 0029
.org 0x55982
	bne.n 0x5598a	@ 00055982 02d1
.org 0x55984
	movs r0, #6	@ 00055984 0620
.org 0x55986
	strb r0, [r4, #14]	@ 00055986 a073
.org 0x55988
	strb r1, [r4, #15]	@ 00055988 e173
.org 0x5598a
	pop {r4}	@ 0005598a 10bc
.org 0x5598c
	pop {r0}	@ 0005598c 01bc
.org 0x5598e
	bx r0	@ 0005598e 0047
