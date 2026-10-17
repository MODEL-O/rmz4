@ FUN_08075fd8  entry 0x08075fd8  size 476
.thumb
.org 0x75fd8
FUN_08075fd8:
	push {r4, r5, r6, r7, lr}	@ 00075fd8 f0b5
.org 0x75fda
	sub sp, #8	@ 00075fda 82b0
.org 0x75fdc
	adds r6, r0, #0	@ 00075fdc 061c
.org 0x75fde
	ldrb r0, [r6, #14]	@ 00075fde b07b
.org 0x75fe0
	cmp r0, #0	@ 00075fe0 0028
.org 0x75fe2
	bne.n 0x76088	@ 00075fe2 51d1
.org 0x75fe4
	ldr r1, [pc, #60]	@ 00075fe4 0f49
.org 0x75fe6
	adds r0, r6, #0	@ 00075fe6 301c
.org 0x75fe8
	bl 0x1cf00	@ 00075fe8 a6f78aff
.org 0x75fec
	adds r0, r6, #0	@ 00075fec 301c
.org 0x75fee
	adds r0, #116	@ 00075fee 7430
.org 0x75ff0
	ldr r1, [pc, #52]	@ 00075ff0 0d49
.org 0x75ff2
	bl 0x5784	@ 00075ff2 8ff7c7fb
.org 0x75ff6
	adds r2, r6, #0	@ 00075ff6 321c
.org 0x75ff8
	adds r2, #218	@ 00075ff8 da32
.org 0x75ffa
	ldrb r0, [r2, #0]	@ 00075ffa 1078
.org 0x75ffc
	adds r0, #1	@ 00075ffc 0130
.org 0x75ffe
	movs r1, #1	@ 00075ffe 0121
.org 0x76000
	ands r0, r1	@ 00076000 0840
.org 0x76002
	strb r0, [r2, #0]	@ 00076002 1070
.org 0x76004
	adds r1, r0, #0	@ 00076004 011c
.org 0x76006
	adds r3, r6, #0	@ 00076006 331c
.org 0x76008
	adds r3, #180	@ 00076008 b433
.org 0x7600a
	cmp r1, #0	@ 0007600a 0029
.org 0x7600c
	beq.n 0x76040	@ 0007600c 18d0
.org 0x7600e
	ldr r0, [pc, #28]	@ 0007600e 0748
.org 0x76010
	ldr r0, [r0, #0]	@ 00076010 0068
.org 0x76012
	ldr r1, [r0, #84]	@ 00076012 416d
.org 0x76014
	ldr r0, [r3, #24]	@ 00076014 9869
.org 0x76016
	cmp r1, r0	@ 00076016 8142
.org 0x76018
	ble.n 0x76034	@ 00076018 0cdd
.org 0x7601a
	ldr r0, [r3, #20]	@ 0007601a 5869
.org 0x7601c
	ldr r1, [pc, #16]	@ 0007601c 0449
.org 0x7601e
	adds r0, r0, r1	@ 0007601e 4018
.org 0x76020
	str r0, [r6, #84]	@ 00076020 7065
.org 0x76022
	b.n 0x76054	@ 00076022 17e0
.org 0x76024
	.byte 0x09,0xaf,0x00,0x00	@ 00076024 data
.org 0x76028
	.byte 0x0c,0xcf,0x85,0x08	@ 00076028 data
.org 0x7602c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007602c data
.org 0x76030
	.byte 0x00,0xb0,0xff,0xff	@ 00076030 data
.org 0x76034
	ldr r0, [r3, #16]	@ 00076034 1869
.org 0x76036
	movs r2, #160	@ 00076036 a022
.org 0x76038
	lsls r2, r2, #7	@ 00076038 d201
.org 0x7603a
	adds r0, r0, r2	@ 0007603a 8018
.org 0x7603c
	str r0, [r6, #84]	@ 0007603c 7065
.org 0x7603e
	b.n 0x76054	@ 0007603e 09e0
.org 0x76040
	ldr r0, [pc, #12]	@ 00076040 0348
.org 0x76042
	ldr r0, [r0, #0]	@ 00076042 0068
.org 0x76044
	ldr r0, [r0, #84]	@ 00076044 406d
.org 0x76046
	str r0, [r6, #84]	@ 00076046 7065
.org 0x76048
	movs r0, #17	@ 00076048 1120
.org 0x7604a
	strb r0, [r6, #13]	@ 0007604a 7073
.org 0x7604c
	strb r1, [r6, #14]	@ 0007604c b173
.org 0x7604e
	b.n 0x761d2	@ 0007604e c0e0
.org 0x76050
	.byte 0xf0,0xdb,0x02,0x02	@ 00076050 data
.org 0x76054
	ldr r0, [r3, #4]	@ 00076054 5868
.org 0x76056
	ldr r1, [pc, #272]	@ 00076056 4449
.org 0x76058
	adds r0, r0, r1	@ 00076058 4018
.org 0x7605a
	str r0, [r6, #88]	@ 0007605a b065
.org 0x7605c
	movs r0, #0	@ 0007605c 0020
.org 0x7605e
	str r0, [r6, #96]	@ 0007605e 3066
.org 0x76060
	movs r2, #0	@ 00076060 0022
.org 0x76062
	ldr r0, [r6, #88]	@ 00076062 b06d
.org 0x76064
	ldr r1, [r6, #96]	@ 00076064 316e
.org 0x76066
	subs r0, r0, r1	@ 00076066 401a
.org 0x76068
	str r0, [r6, #88]	@ 00076068 b065
.org 0x7606a
	adds r1, #32	@ 0007606a 2031
.org 0x7606c
	str r1, [r6, #96]	@ 0007606c 3166
.org 0x7606e
	adds r0, r2, #1	@ 0007606e 501c
.org 0x76070
	lsls r0, r0, #24	@ 00076070 0006
.org 0x76072
	lsrs r2, r0, #24	@ 00076072 020e
.org 0x76074
	cmp r2, #47	@ 00076074 2f2a
.org 0x76076
	bls.n 0x76062	@ 00076076 f4d9
.org 0x76078
	movs r1, #0	@ 00076078 0021
.org 0x7607a
	str r1, [r3, #28]	@ 0007607a d961
.org 0x7607c
	movs r0, #48	@ 0007607c 3020
.org 0x7607e
	strb r0, [r6, #19]	@ 0007607e f074
.org 0x76080
	strb r1, [r6, #15]	@ 00076080 f173
.org 0x76082
	ldrb r0, [r6, #14]	@ 00076082 b07b
.org 0x76084
	adds r0, #1	@ 00076084 0130
.org 0x76086
	strb r0, [r6, #14]	@ 00076086 b073
.org 0x76088
	adds r0, r6, #0	@ 00076088 301c
.org 0x7608a
	bl 0x1cff0	@ 0007608a a6f7b1ff
.org 0x7608e
	ldrb r0, [r6, #19]	@ 0007608e f07c
.org 0x76090
	cmp r0, #0	@ 00076090 0028
.org 0x76092
	beq.n 0x76098	@ 00076092 01d0
.org 0x76094
	subs r0, #1	@ 00076094 0138
.org 0x76096
	strb r0, [r6, #19]	@ 00076096 f074
.org 0x76098
	ldrb r0, [r6, #15]	@ 00076098 f07b
.org 0x7609a
	cmp r0, #0	@ 0007609a 0028
.org 0x7609c
	bne.n 0x76126	@ 0007609c 43d1
.org 0x7609e
	adds r4, r6, #0	@ 0007609e 341c
.org 0x760a0
	adds r4, #208	@ 000760a0 d034
.org 0x760a2
	ldr r5, [r4, #0]	@ 000760a2 2568
.org 0x760a4
	adds r0, r5, #0	@ 000760a4 281c
.org 0x760a6
	movs r1, #6	@ 000760a6 0621
.org 0x760a8
	bl 0x129198	@ 000760a8 b3f076f8
.org 0x760ac
	adds r5, #1	@ 000760ac 0135
.org 0x760ae
	str r5, [r4, #0]	@ 000760ae 2560
.org 0x760b0
	cmp r0, #0	@ 000760b0 0028
.org 0x760b2
	bne.n 0x76126	@ 000760b2 38d1
.org 0x760b4
	ldr r7, [pc, #180]	@ 000760b4 2d4f
.org 0x760b6
	adds r0, r7, #0	@ 000760b6 381c
.org 0x760b8
	adds r0, #192	@ 000760b8 c030
.org 0x760ba
	movs r2, #0	@ 000760ba 0022
.org 0x760bc
	ldrsh r0, [r0, r2]	@ 000760bc 805e
.org 0x760be
	lsls r4, r0, #2	@ 000760be 8400
.org 0x760c0
	adds r4, r4, r0	@ 000760c0 2418
.org 0x760c2
	lsls r4, r4, #2	@ 000760c2 a400
.org 0x760c4
	ldr r0, [r6, #84]	@ 000760c4 706d
.org 0x760c6
	adds r0, r0, r4	@ 000760c6 0019
.org 0x760c8
	str r0, [sp, #0]	@ 000760c8 0090
.org 0x760ca
	adds r0, r7, #0	@ 000760ca 381c
.org 0x760cc
	adds r0, #64	@ 000760cc 4030
.org 0x760ce
	movs r2, #0	@ 000760ce 0022
.org 0x760d0
	ldrsh r1, [r0, r2]	@ 000760d0 815e
.org 0x760d2
	lsls r0, r1, #2	@ 000760d2 8800
.org 0x760d4
	adds r0, r0, r1	@ 000760d4 4018
.org 0x760d6
	lsls r0, r0, #2	@ 000760d6 8000
.org 0x760d8
	ldr r1, [r6, #88]	@ 000760d8 b16d
.org 0x760da
	adds r1, r1, r0	@ 000760da 0918
.org 0x760dc
	ldr r5, [pc, #144]	@ 000760dc 244d
.org 0x760de
	adds r1, r1, r5	@ 000760de 4919
.org 0x760e0
	str r1, [sp, #4]	@ 000760e0 0191
.org 0x760e2
	ldrb r0, [r6, #19]	@ 000760e2 f07c
.org 0x760e4
	movs r3, #48	@ 000760e4 3023
.org 0x760e6
	subs r3, r3, r0	@ 000760e6 1b1a
.org 0x760e8
	lsls r3, r3, #24	@ 000760e8 1b06
.org 0x760ea
	lsrs r3, r3, #24	@ 000760ea 1b0e
.org 0x760ec
	adds r0, r6, #0	@ 000760ec 301c
.org 0x760ee
	mov r1, sp	@ 000760ee 6946
.org 0x760f0
	movs r2, #2	@ 000760f0 0222
.org 0x760f2
	bl 0xcbfd4	@ 000760f2 55f06fff
.org 0x760f6
	movs r1, #160	@ 000760f6 a021
.org 0x760f8
	lsls r1, r1, #1	@ 000760f8 4900
.org 0x760fa
	adds r0, r7, r1	@ 000760fa 7818
.org 0x760fc
	movs r2, #0	@ 000760fc 0022
.org 0x760fe
	ldrsh r0, [r0, r2]	@ 000760fe 805e
.org 0x76100
	lsls r1, r0, #2	@ 00076100 8100
.org 0x76102
	adds r1, r1, r0	@ 00076102 0918
.org 0x76104
	lsls r1, r1, #2	@ 00076104 8900
.org 0x76106
	ldr r0, [r6, #84]	@ 00076106 706d
.org 0x76108
	adds r0, r0, r1	@ 00076108 4018
.org 0x7610a
	str r0, [sp, #0]	@ 0007610a 0090
.org 0x7610c
	ldr r0, [r6, #88]	@ 0007610c b06d
.org 0x7610e
	adds r0, r0, r4	@ 0007610e 0019
.org 0x76110
	adds r0, r0, r5	@ 00076110 4019
.org 0x76112
	str r0, [sp, #4]	@ 00076112 0190
.org 0x76114
	ldrb r3, [r6, #19]	@ 00076114 f37c
.org 0x76116
	adds r3, #80	@ 00076116 5033
.org 0x76118
	lsls r3, r3, #24	@ 00076118 1b06
.org 0x7611a
	lsrs r3, r3, #24	@ 0007611a 1b0e
.org 0x7611c
	adds r0, r6, #0	@ 0007611c 301c
.org 0x7611e
	mov r1, sp	@ 0007611e 6946
.org 0x76120
	movs r2, #2	@ 00076120 0222
.org 0x76122
	bl 0xcbfd4	@ 00076122 55f057ff
.org 0x76126
	movs r3, #0	@ 00076126 0023
.org 0x76128
	ldr r0, [pc, #72]	@ 00076128 1248
.org 0x7612a
	ldr r2, [r0, #0]	@ 0007612a 0268
.org 0x7612c
	ldr r1, [r6, #84]	@ 0007612c 716d
.org 0x7612e
	ldr r0, [r2, #84]	@ 0007612e 506d
.org 0x76130
	cmp r1, r0	@ 00076130 8142
.org 0x76132
	bge.n 0x76136	@ 00076132 00da
.org 0x76134
	movs r3, #1	@ 00076134 0123
.org 0x76136
	adds r0, r6, #0	@ 00076136 301c
.org 0x76138
	adds r0, #76	@ 00076138 4c30
.org 0x7613a
	strb r3, [r0, #0]	@ 0007613a 0370
.org 0x7613c
	movs r3, #0	@ 0007613c 0023
.org 0x7613e
	ldr r1, [r6, #84]	@ 0007613e 716d
.org 0x76140
	ldr r0, [r2, #84]	@ 00076140 506d
.org 0x76142
	cmp r1, r0	@ 00076142 8142
.org 0x76144
	bge.n 0x76148	@ 00076144 00da
.org 0x76146
	movs r3, #1	@ 00076146 0123
.org 0x76148
	adds r4, r6, #0	@ 00076148 341c
.org 0x7614a
	adds r4, #74	@ 0007614a 4a34
.org 0x7614c
	lsls r2, r3, #4	@ 0007614c 1a01
.org 0x7614e
	ldrb r1, [r4, #0]	@ 0007614e 2178
.org 0x76150
	movs r0, #17	@ 00076150 1120
.org 0x76152
	negs r0, r0	@ 00076152 4042
.org 0x76154
	ands r0, r1	@ 00076154 0840
.org 0x76156
	orrs r0, r2	@ 00076156 1043
.org 0x76158
	strb r0, [r4, #0]	@ 00076158 2070
.org 0x7615a
	cmp r3, #0	@ 0007615a 002b
.org 0x7615c
	beq.n 0x76178	@ 0007615c 0cd0
.org 0x7615e
	ldrb r0, [r6, #10]	@ 0007615e b07a
.org 0x76160
	movs r1, #16	@ 00076160 1021
.org 0x76162
	orrs r0, r1	@ 00076162 0843
.org 0x76164
	b.n 0x7617e	@ 00076164 0be0
.org 0x76166
	.byte 0x00	@ 00076166 data
.org 0x76167
	.byte 0x00	@ 00076167 data
.org 0x76168
	.byte 0x00,0xc0,0xff,0xff	@ 00076168 data
.org 0x7616c
	.byte 0x0c,0x93,0x12,0x08	@ 0007616c data
.org 0x76170
	.byte 0x00,0xd9,0xff,0xff	@ 00076170 data
.org 0x76174
	.byte 0xf0,0xdb,0x02,0x02	@ 00076174 data
.org 0x76178
	ldrb r1, [r6, #10]	@ 00076178 b17a
.org 0x7617a
	movs r0, #239	@ 0007617a ef20
.org 0x7617c
	ands r0, r1	@ 0007617c 0840
.org 0x7617e
	strb r0, [r6, #10]	@ 0007617e b072
.org 0x76180
	ldrb r0, [r6, #15]	@ 00076180 f07b
.org 0x76182
	cmp r0, #0	@ 00076182 0028
.org 0x76184
	bne.n 0x761b2	@ 00076184 15d1
.org 0x76186
	ldr r0, [r6, #88]	@ 00076186 b06d
.org 0x76188
	ldr r1, [r6, #96]	@ 00076188 316e
.org 0x7618a
	adds r0, r0, r1	@ 0007618a 4018
.org 0x7618c
	str r0, [r6, #88]	@ 0007618c b065
.org 0x7618e
	subs r1, #32	@ 0007618e 2039
.org 0x76190
	str r1, [r6, #96]	@ 00076190 3166
.org 0x76192
	cmp r1, #0	@ 00076192 0029
.org 0x76194
	bgt.n 0x761d2	@ 00076194 1ddc
.org 0x76196
	adds r0, r6, #0	@ 00076196 301c
.org 0x76198
	adds r0, #218	@ 00076198 da30
.org 0x7619a
	ldrb r0, [r0, #0]	@ 0007619a 0078
.org 0x7619c
	cmp r0, #0	@ 0007619c 0028
.org 0x7619e
	beq.n 0x761a6	@ 0007619e 02d0
.org 0x761a0
	movs r0, #218	@ 000761a0 da20
.org 0x761a2
	bl 0x2b10	@ 000761a2 8cf7b5fc
.org 0x761a6
	movs r0, #32	@ 000761a6 2020
.org 0x761a8
	strb r0, [r6, #18]	@ 000761a8 b074
.org 0x761aa
	ldrb r0, [r6, #15]	@ 000761aa f07b
.org 0x761ac
	adds r0, #1	@ 000761ac 0130
.org 0x761ae
	strb r0, [r6, #15]	@ 000761ae f073
.org 0x761b0
	b.n 0x761d2	@ 000761b0 0fe0
.org 0x761b2
	ldrb r0, [r6, #18]	@ 000761b2 b07c
