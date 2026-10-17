@ FUN_08061f70  entry 0x08061f70  size 362
.thumb
.org 0x61f70
FUN_08061f70:
	push {r4, r5, r6, r7, lr}	@ 00061f70 f0b5
.org 0x61f72
	mov r7, sl	@ 00061f72 5746
.org 0x61f74
	mov r6, r9	@ 00061f74 4e46
.org 0x61f76
	mov r5, r8	@ 00061f76 4546
.org 0x61f78
	push {r5, r6, r7}	@ 00061f78 e0b4
.org 0x61f7a
	adds r7, r0, #0	@ 00061f7a 071c
.org 0x61f7c
	movs r5, #0	@ 00061f7c 0025
.org 0x61f7e
	ldr r0, [pc, #176]	@ 00061f7e 2c48
.org 0x61f80
	ldr r0, [r0, #0]	@ 00061f80 0068
.org 0x61f82
	ldr r1, [r7, #84]	@ 00061f82 796d
.org 0x61f84
	ldr r0, [r0, #84]	@ 00061f84 406d
.org 0x61f86
	cmp r1, r0	@ 00061f86 8142
.org 0x61f88
	bge.n 0x61f8c	@ 00061f88 00da
.org 0x61f8a
	movs r5, #1	@ 00061f8a 0125
.org 0x61f8c
	ldr r1, [pc, #164]	@ 00061f8c 2949
.org 0x61f8e
	ldrb r0, [r7, #9]	@ 00061f8e 787a
.org 0x61f90
	lsls r0, r0, #2	@ 00061f90 8000
.org 0x61f92
	adds r0, r0, r1	@ 00061f92 4018
.org 0x61f94
	movs r4, #1	@ 00061f94 0124
.org 0x61f96
	str r4, [r7, #12]	@ 00061f96 fc60
.org 0x61f98
	ldr r0, [r0, #0]	@ 00061f98 0068
.org 0x61f9a
	ldr r0, [r0, #4]	@ 00061f9a 4068
.org 0x61f9c
	str r0, [r7, #20]	@ 00061f9c 7861
.org 0x61f9e
	movs r2, #0	@ 00061f9e 0022
.org 0x61fa0
	movs r1, #1	@ 00061fa0 0121
.org 0x61fa2
	strb r4, [r7, #13]	@ 00061fa2 7c73
.org 0x61fa4
	strb r2, [r7, #14]	@ 00061fa4 ba73
.org 0x61fa6
	strb r2, [r7, #15]	@ 00061fa6 fa73
.org 0x61fa8
	ldrb r0, [r7, #10]	@ 00061fa8 b87a
.org 0x61faa
	movs r6, #0	@ 00061faa 0026
.org 0x61fac
	orrs r0, r1	@ 00061fac 0843
.org 0x61fae
	movs r1, #2	@ 00061fae 0221
.org 0x61fb0
	orrs r0, r1	@ 00061fb0 0843
.org 0x61fb2
	strb r0, [r7, #10]	@ 00061fb2 b872
.org 0x61fb4
	adds r1, r7, #0	@ 00061fb4 391c
.org 0x61fb6
	adds r1, #180	@ 00061fb6 b431
.org 0x61fb8
	movs r0, #255	@ 00061fb8 ff20
.org 0x61fba
	strb r0, [r1, #0]	@ 00061fba 0870
.org 0x61fbc
	adds r1, #24	@ 00061fbc 1831
.org 0x61fbe
	strb r0, [r1, #0]	@ 00061fbe 0870
.org 0x61fc0
	adds r0, r7, #0	@ 00061fc0 381c
.org 0x61fc2
	adds r0, #205	@ 00061fc2 cd30
.org 0x61fc4
	strb r2, [r0, #0]	@ 00061fc4 0270
.org 0x61fc6
	subs r0, #23	@ 00061fc6 1738
.org 0x61fc8
	strb r2, [r0, #0]	@ 00061fc8 0270
.org 0x61fca
	adds r0, #1	@ 00061fca 0130
.org 0x61fcc
	strb r2, [r0, #0]	@ 00061fcc 0270
.org 0x61fce
	adds r0, #5	@ 00061fce 0530
.org 0x61fd0
	str r2, [r0, #0]	@ 00061fd0 0260
.org 0x61fd2
	adds r0, #4	@ 00061fd2 0430
.org 0x61fd4
	str r2, [r0, #0]	@ 00061fd4 0260
.org 0x61fd6
	adds r0, #4	@ 00061fd6 0430
.org 0x61fd8
	str r2, [r0, #0]	@ 00061fd8 0260
.org 0x61fda
	adds r0, #4	@ 00061fda 0430
.org 0x61fdc
	str r2, [r0, #0]	@ 00061fdc 0260
.org 0x61fde
	adds r0, #16	@ 00061fde 1030
.org 0x61fe0
	str r2, [r0, #0]	@ 00061fe0 0260
.org 0x61fe2
	subs r0, #10	@ 00061fe2 0a38
.org 0x61fe4
	strb r2, [r0, #0]	@ 00061fe4 0270
.org 0x61fe6
	adds r0, #18	@ 00061fe6 1230
.org 0x61fe8
	strb r2, [r0, #0]	@ 00061fe8 0270
.org 0x61fea
	subs r0, #17	@ 00061fea 1138
.org 0x61fec
	strb r2, [r0, #0]	@ 00061fec 0270
.org 0x61fee
	str r2, [r7, #44]	@ 00061fee fa62
.org 0x61ff0
	adds r0, r7, #0	@ 00061ff0 381c
.org 0x61ff2
	bl 0x1cc9c	@ 00061ff2 baf753fe
.org 0x61ff6
	adds r0, r7, #0	@ 00061ff6 381c
.org 0x61ff8
	bl 0x1ceec	@ 00061ff8 baf778ff
.org 0x61ffc
	adds r1, r7, #0	@ 00061ffc 391c
.org 0x61ffe
	adds r1, #37	@ 00061ffe 2531
.org 0x62000
	movs r0, #25	@ 00062000 1920
.org 0x62002
	strb r0, [r1, #0]	@ 00062002 0870
.org 0x62004
	adds r1, r5, #0	@ 00062004 291c
.org 0x62006
	ands r1, r4	@ 00062006 2140
.org 0x62008
	adds r0, r7, #0	@ 00062008 381c
.org 0x6200a
	adds r0, #76	@ 0006200a 4c30
.org 0x6200c
	strb r1, [r0, #0]	@ 0006200c 0170
.org 0x6200e
	adds r3, r7, #0	@ 0006200e 3b1c
.org 0x62010
	adds r3, #74	@ 00062010 4a33
.org 0x62012
	lsls r1, r1, #4	@ 00062012 0901
.org 0x62014
	ldrb r2, [r3, #0]	@ 00062014 1a78
.org 0x62016
	movs r0, #17	@ 00062016 1120
.org 0x62018
	negs r0, r0	@ 00062018 4042
.org 0x6201a
	ands r0, r2	@ 0006201a 1040
.org 0x6201c
	orrs r0, r1	@ 0006201c 0843
.org 0x6201e
	strb r0, [r3, #0]	@ 0006201e 1870
.org 0x62020
	ands r5, r4	@ 00062020 2540
.org 0x62022
	cmp r5, #0	@ 00062022 002d
.org 0x62024
	beq.n 0x62038	@ 00062024 08d0
.org 0x62026
	ldrb r0, [r7, #10]	@ 00062026 b87a
.org 0x62028
	movs r1, #16	@ 00062028 1021
.org 0x6202a
	orrs r0, r1	@ 0006202a 0843
.org 0x6202c
	b.n 0x6203e	@ 0006202c 07e0
.org 0x6202e
	.byte 0x00	@ 0006202e data
.org 0x6202f
	.byte 0x00	@ 0006202f data
.org 0x62030
	.byte 0xf0,0xdb,0x02,0x02	@ 00062030 data
.org 0x62034
	.byte 0x70,0x7d,0x85,0x08	@ 00062034 data
.org 0x62038
	ldrb r1, [r7, #10]	@ 00062038 b97a
.org 0x6203a
	movs r0, #239	@ 0006203a ef20
.org 0x6203c
	ands r0, r1	@ 0006203c 0840
.org 0x6203e
	strb r0, [r7, #10]	@ 0006203e b872
.org 0x62040
	ldr r0, [pc, #160]	@ 00062040 2848
.org 0x62042
	ldr r0, [r0, #0]	@ 00062042 0068
.org 0x62044
	ldr r1, [r0, #0]	@ 00062044 0168
.org 0x62046
	adds r0, r7, #0	@ 00062046 381c
.org 0x62048
	movs r2, #64	@ 00062048 4022
.org 0x6204a
	bl 0x503cc	@ 0006204a eef7bff9
.org 0x6204e
	ldr r1, [pc, #152]	@ 0006204e 2649
.org 0x62050
	adds r0, r7, #0	@ 00062050 381c
.org 0x62052
	adds r0, #116	@ 00062052 7430
.org 0x62054
	str r1, [r0, #36]	@ 00062054 4162
.org 0x62056
	movs r4, #250	@ 00062056 fa24
.org 0x62058
	lsls r4, r4, #3	@ 00062058 e400
.org 0x6205a
	ldr r0, [pc, #144]	@ 0006205a 2448
.org 0x6205c
	mov r8, r0	@ 0006205c 8046
.org 0x6205e
	adds r0, r4, r0	@ 0006205e 2018
.org 0x62060
	ldr r6, [pc, #140]	@ 00062060 234e
.org 0x62062
	adds r1, r6, #0	@ 00062062 311c
.org 0x62064
	adds r1, #200	@ 00062064 c831
.org 0x62066
	ldrh r1, [r1, #0]	@ 00062066 0988
.org 0x62068
	ldrh r2, [r0, #6]	@ 00062068 c288
.org 0x6206a
	lsrs r2, r2, #6	@ 0006206a 9209
.org 0x6206c
	subs r1, r1, r2	@ 0006206c 891a
.org 0x6206e
	lsls r1, r1, #5	@ 0006206e 4901
.org 0x62070
	movs r2, #128	@ 00062070 8022
.org 0x62072
	lsls r2, r2, #9	@ 00062072 5202
.org 0x62074
	adds r1, r1, r2	@ 00062074 8918
.org 0x62076
	bl 0x1d30	@ 00062076 9ff75bfe
.org 0x6207a
	ldr r0, [pc, #120]	@ 0006207a 1e48
.org 0x6207c
	mov sl, r0	@ 0006207c 8246
.org 0x6207e
	add r4, sl	@ 0006207e 5444
.org 0x62080
	ldr r5, [pc, #116]	@ 00062080 1d4d
.org 0x62082
	adds r0, r5, #0	@ 00062082 281c
.org 0x62084
	adds r0, #200	@ 00062084 c830
.org 0x62086
	ldrh r1, [r0, #0]	@ 00062086 0188
.org 0x62088
	ldrb r0, [r4, #7]	@ 00062088 e079
.org 0x6208a
	subs r1, r1, r0	@ 0006208a 091a
.org 0x6208c
	lsls r1, r1, #5	@ 0006208c 4901
.org 0x6208e
	movs r2, #128	@ 0006208e 8022
.org 0x62090
	lsls r2, r2, #2	@ 00062090 9200
.org 0x62092
	mov r9, r2	@ 00062092 9146
.org 0x62094
	add r1, r9	@ 00062094 4944
.org 0x62096
	adds r0, r4, #0	@ 00062096 201c
.org 0x62098
	bl 0x2208	@ 00062098 a0f7b6f8
.org 0x6209c
	movs r4, #215	@ 0006209c d724
.org 0x6209e
	lsls r4, r4, #3	@ 0006209e e400
.org 0x620a0
	add r8, r4	@ 000620a0 a044
.org 0x620a2
	adds r6, #172	@ 000620a2 ac36
.org 0x620a4
	ldrh r1, [r6, #0]	@ 000620a4 3188
.org 0x620a6
	mov r2, r8	@ 000620a6 4246
.org 0x620a8
	ldrh r0, [r2, #6]	@ 000620a8 d088
.org 0x620aa
	lsrs r0, r0, #6	@ 000620aa 8009
.org 0x620ac
	subs r1, r1, r0	@ 000620ac 091a
.org 0x620ae
	lsls r1, r1, #5	@ 000620ae 4901
.org 0x620b0
	movs r0, #128	@ 000620b0 8020
.org 0x620b2
	lsls r0, r0, #9	@ 000620b2 4002
.org 0x620b4
	adds r1, r1, r0	@ 000620b4 0918
.org 0x620b6
	mov r0, r8	@ 000620b6 4046
.org 0x620b8
	bl 0x1d30	@ 000620b8 9ff73afe
.org 0x620bc
	add r4, sl	@ 000620bc 5444
.org 0x620be
	adds r5, #172	@ 000620be ac35
.org 0x620c0
	ldrh r1, [r5, #0]	@ 000620c0 2988
.org 0x620c2
	ldrb r0, [r4, #7]	@ 000620c2 e079
.org 0x620c4
	subs r1, r1, r0	@ 000620c4 091a
.org 0x620c6
	lsls r1, r1, #5	@ 000620c6 4901
.org 0x620c8
	add r1, r9	@ 000620c8 4944
.org 0x620ca
	adds r0, r4, #0	@ 000620ca 201c
.org 0x620cc
	bl 0x2208	@ 000620cc a0f79cf8
.org 0x620d0
	adds r0, r7, #0	@ 000620d0 381c
.org 0x620d2
	bl 0x620fc	@ 000620d2 00f013f8
.org 0x620d6
	pop {r3, r4, r5}	@ 000620d6 38bc
.org 0x620d8
	mov r8, r3	@ 000620d8 9846
