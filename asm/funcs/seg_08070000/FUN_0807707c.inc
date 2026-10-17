@ FUN_0807707c  entry 0x0807707c  size 268
.thumb
.org 0x7707c
FUN_0807707c:
	push {r4, r5, lr}	@ 0007707c 30b5
.org 0x7707e
	adds r5, r0, #0	@ 0007707e 051c
.org 0x77080
	movs r3, #0	@ 00077080 0023
.org 0x77082
	ldr r1, [pc, #260]	@ 00077082 4149
.org 0x77084
	ldrb r0, [r5, #9]	@ 00077084 687a
.org 0x77086
	lsls r0, r0, #2	@ 00077086 8000
.org 0x77088
	adds r0, r0, r1	@ 00077088 4018
.org 0x7708a
	movs r1, #1	@ 0007708a 0121
.org 0x7708c
	str r1, [r5, #12]	@ 0007708c e960
.org 0x7708e
	ldr r0, [r0, #0]	@ 0007708e 0068
.org 0x77090
	ldr r0, [r0, #4]	@ 00077090 4068
.org 0x77092
	str r0, [r5, #20]	@ 00077092 6861
.org 0x77094
	movs r2, #1	@ 00077094 0122
.org 0x77096
	strb r1, [r5, #13]	@ 00077096 6973
.org 0x77098
	strb r3, [r5, #14]	@ 00077098 ab73
.org 0x7709a
	strb r3, [r5, #15]	@ 0007709a eb73
.org 0x7709c
	ldrb r0, [r5, #10]	@ 0007709c a87a
.org 0x7709e
	orrs r0, r2	@ 0007709e 1043
.org 0x770a0
	movs r1, #2	@ 000770a0 0221
.org 0x770a2
	orrs r0, r1	@ 000770a2 0843
.org 0x770a4
	strb r0, [r5, #10]	@ 000770a4 a872
.org 0x770a6
	adds r1, r5, #0	@ 000770a6 291c
.org 0x770a8
	adds r1, #196	@ 000770a8 c431
.org 0x770aa
	movs r0, #255	@ 000770aa ff20
.org 0x770ac
	strb r0, [r1, #0]	@ 000770ac 0870
.org 0x770ae
	subs r1, #16	@ 000770ae 1039
.org 0x770b0
	strb r0, [r1, #0]	@ 000770b0 0870
.org 0x770b2
	adds r0, r5, #0	@ 000770b2 281c
.org 0x770b4
	adds r0, #181	@ 000770b4 b530
.org 0x770b6
	strb r3, [r0, #0]	@ 000770b6 0370
.org 0x770b8
	adds r1, #2	@ 000770b8 0231
.org 0x770ba
	movs r0, #255	@ 000770ba ff20
.org 0x770bc
	strb r0, [r1, #0]	@ 000770bc 0870
.org 0x770be
	adds r0, r5, #0	@ 000770be 281c
.org 0x770c0
	adds r0, #183	@ 000770c0 b730
.org 0x770c2
	strb r3, [r0, #0]	@ 000770c2 0370
.org 0x770c4
	adds r0, #15	@ 000770c4 0f30
.org 0x770c6
	strb r3, [r0, #0]	@ 000770c6 0370
.org 0x770c8
	adds r0, #1	@ 000770c8 0130
.org 0x770ca
	strb r3, [r0, #0]	@ 000770ca 0370
.org 0x770cc
	adds r0, #13	@ 000770cc 0d30
.org 0x770ce
	movs r4, #0	@ 000770ce 0024
.org 0x770d0
	strh r3, [r0, #0]	@ 000770d0 0380
.org 0x770d2
	adds r1, #32	@ 000770d2 2031
.org 0x770d4
	movs r0, #255	@ 000770d4 ff20
.org 0x770d6
	strb r0, [r1, #0]	@ 000770d6 0870
.org 0x770d8
	adds r0, r5, #0	@ 000770d8 281c
.org 0x770da
	adds r0, #215	@ 000770da d730
.org 0x770dc
	strb r4, [r0, #0]	@ 000770dc 0470
.org 0x770de
	movs r2, #0	@ 000770de 0022
.org 0x770e0
	subs r0, #31	@ 000770e0 1f38
.org 0x770e2
	ldr r0, [r0, #0]	@ 000770e2 0068
.org 0x770e4
	movs r1, #240	@ 000770e4 f021
.org 0x770e6
	lsls r1, r1, #7	@ 000770e6 c901
.org 0x770e8
	adds r0, r0, r1	@ 000770e8 4018
.org 0x770ea
	ldr r1, [r5, #84]	@ 000770ea 696d
.org 0x770ec
	cmp r1, r0	@ 000770ec 8142
.org 0x770ee
	ble.n 0x770f2	@ 000770ee 00dd
.org 0x770f0
	movs r2, #1	@ 000770f0 0122
.org 0x770f2
	adds r0, r5, #0	@ 000770f2 281c
.org 0x770f4
	adds r0, #197	@ 000770f4 c530
.org 0x770f6
	strb r2, [r0, #0]	@ 000770f6 0270
.org 0x770f8
	adds r0, #11	@ 000770f8 0b30
.org 0x770fa
	str r3, [r0, #0]	@ 000770fa 0360
.org 0x770fc
	str r3, [r5, #44]	@ 000770fc eb62
.org 0x770fe
	adds r0, r5, #0	@ 000770fe 281c
.org 0x77100
	bl 0x1cc9c	@ 00077100 a5f7ccfd
.org 0x77104
	adds r0, r5, #0	@ 00077104 281c
.org 0x77106
	adds r0, #76	@ 00077106 4c30
.org 0x77108
	strb r4, [r0, #0]	@ 00077108 0470
.org 0x7710a
	adds r2, r5, #0	@ 0007710a 2a1c
.org 0x7710c
	adds r2, #74	@ 0007710c 4a32
.org 0x7710e
	ldrb r1, [r2, #0]	@ 0007710e 1178
.org 0x77110
	movs r0, #17	@ 00077110 1120
.org 0x77112
	negs r0, r0	@ 00077112 4042
.org 0x77114
	ands r0, r1	@ 00077114 0840
.org 0x77116
	strb r0, [r2, #0]	@ 00077116 1070
.org 0x77118
	ldrb r1, [r5, #10]	@ 00077118 a97a
.org 0x7711a
	movs r0, #239	@ 0007711a ef20
.org 0x7711c
	ands r0, r1	@ 0007711c 0840
.org 0x7711e
	strb r0, [r5, #10]	@ 0007711e a872
.org 0x77120
	ldr r0, [pc, #104]	@ 00077120 1a48
.org 0x77122
	ldr r0, [r0, #0]	@ 00077122 0068
.org 0x77124
	ldr r1, [r0, #0]	@ 00077124 0168
.org 0x77126
	adds r0, r5, #0	@ 00077126 281c
.org 0x77128
	movs r2, #96	@ 00077128 6022
.org 0x7712a
	bl 0x503cc	@ 0007712a d9f74ff9
.org 0x7712e
	ldr r0, [pc, #96]	@ 0007712e 1848
.org 0x77130
	ldr r1, [pc, #96]	@ 00077130 1849
.org 0x77132
	movs r4, #156	@ 00077132 9c24
.org 0x77134
	lsls r4, r4, #1	@ 00077134 6400
.org 0x77136
	adds r1, r1, r4	@ 00077136 0919
.org 0x77138
	ldrh r1, [r1, #0]	@ 00077138 0988
.org 0x7713a
	ldrh r2, [r0, #6]	@ 0007713a c288
.org 0x7713c
	lsrs r2, r2, #6	@ 0007713c 9209
.org 0x7713e
	subs r1, r1, r2	@ 0007713e 891a
.org 0x77140
	lsls r1, r1, #5	@ 00077140 4901
.org 0x77142
	movs r2, #128	@ 00077142 8022
.org 0x77144
	lsls r2, r2, #9	@ 00077144 5202
.org 0x77146
	adds r1, r1, r2	@ 00077146 8918
.org 0x77148
	bl 0x1d30	@ 00077148 8af7f2fd
.org 0x7714c
	ldr r0, [pc, #72]	@ 0007714c 1248
.org 0x7714e
	ldr r1, [pc, #76]	@ 0007714e 1349
.org 0x77150
	adds r1, r1, r4	@ 00077150 0919
.org 0x77152
	ldrh r1, [r1, #0]	@ 00077152 0988
.org 0x77154
	ldrb r2, [r0, #7]	@ 00077154 c279
.org 0x77156
	subs r1, r1, r2	@ 00077156 891a
.org 0x77158
	lsls r1, r1, #5	@ 00077158 4901
.org 0x7715a
	movs r2, #128	@ 0007715a 8022
.org 0x7715c
	lsls r2, r2, #2	@ 0007715c 9200
.org 0x7715e
	adds r1, r1, r2	@ 0007715e 8918
.org 0x77160
	bl 0x2208	@ 00077160 8bf752f8
.org 0x77164
	adds r0, r5, #0	@ 00077164 281c
.org 0x77166
	bl 0xac648	@ 00077166 35f06ffa
.org 0x7716a
	adds r1, r5, #0	@ 0007716a 291c
.org 0x7716c
	adds r1, #200	@ 0007716c c831
.org 0x7716e
	str r0, [r1, #0]	@ 0007716e 0860
.org 0x77170
	adds r0, r5, #0	@ 00077170 281c
.org 0x77172
	bl 0xacb90	@ 00077172 35f00dfd
.org 0x77176
	adds r1, r5, #0	@ 00077176 291c
.org 0x77178
	adds r1, #204	@ 00077178 cc31
.org 0x7717a
	str r0, [r1, #0]	@ 0007717a 0860
.org 0x7717c
	adds r0, r5, #0	@ 0007717c 281c
.org 0x7717e
	bl 0x771a0	@ 0007717e 00f00ff8
.org 0x77182
	pop {r4, r5}	@ 00077182 30bc
.org 0x77184
	pop {r0}	@ 00077184 01bc
.org 0x77186
	bx r0	@ 00077186 0047
