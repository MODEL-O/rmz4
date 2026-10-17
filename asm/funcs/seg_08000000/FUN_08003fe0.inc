@ FUN_08003fe0  entry 0x08003fe0  size 704
.thumb
.org 0x3fe0
FUN_08003fe0:
	push {r4, r5, r6, r7, lr}	@ 00003fe0 f0b5
.org 0x3fe2
	mov r7, sl	@ 00003fe2 5746
.org 0x3fe4
	mov r6, r9	@ 00003fe4 4e46
.org 0x3fe6
	mov r5, r8	@ 00003fe6 4546
.org 0x3fe8
	push {r5, r6, r7}	@ 00003fe8 e0b4
.org 0x3fea
	sub sp, #68	@ 00003fea 91b0
.org 0x3fec
	str r0, [sp, #0]	@ 00003fec 0090
.org 0x3fee
	str r1, [sp, #4]	@ 00003fee 0191
.org 0x3ff0
	str r2, [sp, #8]	@ 00003ff0 0292
.org 0x3ff2
	ldr r0, [r1, #0]	@ 00003ff2 0868
.org 0x3ff4
	ldr r1, [r1, #4]	@ 00003ff4 4968
.org 0x3ff6
	str r0, [sp, #16]	@ 00003ff6 0490
.org 0x3ff8
	str r1, [sp, #20]	@ 00003ff8 0591
.org 0x3ffa
	ldr r2, [sp, #4]	@ 00003ffa 019a
.org 0x3ffc
	ldr r0, [r2, #0]	@ 00003ffc 1068
.org 0x3ffe
	subs r0, #32	@ 00003ffe 2038
.org 0x4000
	cmp r0, #0	@ 00004000 0028
.org 0x4002
	ble.n 0x4008	@ 00004002 01dd
.org 0x4004
	str r0, [sp, #16]	@ 00004004 0490
.org 0x4006
	b.n 0x400c	@ 00004006 01e0
.org 0x4008
	movs r3, #0	@ 00004008 0023
.org 0x400a
	str r3, [sp, #16]	@ 0000400a 0493
.org 0x400c
	ldr r1, [sp, #4]	@ 0000400c 0199
.org 0x400e
	ldr r0, [r1, #4]	@ 0000400e 4868
.org 0x4010
	subs r0, #16	@ 00004010 1038
.org 0x4012
	cmp r0, #0	@ 00004012 0028
.org 0x4014
	ble.n 0x401a	@ 00004014 01dd
.org 0x4016
	str r0, [sp, #20]	@ 00004016 0590
.org 0x4018
	b.n 0x401e	@ 00004018 01e0
.org 0x401a
	movs r2, #0	@ 0000401a 0022
.org 0x401c
	str r2, [sp, #20]	@ 0000401c 0592
.org 0x401e
	ldr r0, [sp, #16]	@ 0000401e 0498
.org 0x4020
	movs r1, #240	@ 00004020 f021
.org 0x4022
	bl 0x128fb8	@ 00004022 24f1c9ff
.org 0x4026
	adds r4, r0, #0	@ 00004026 041c
.org 0x4028
	adds r4, #4	@ 00004028 0434
.org 0x402a
	ldr r3, [sp, #0]	@ 0000402a 009b
.org 0x402c
	ldr r6, [r3, #20]	@ 0000402c 5e69
.org 0x402e
	adds r4, r6, r4	@ 0000402e 3419
.org 0x4030
	ldr r5, [sp, #20]	@ 00004030 059d
.org 0x4032
	adds r0, r5, #0	@ 00004032 281c
.org 0x4034
	movs r1, #160	@ 00004034 a021
.org 0x4036
	bl 0x128fb8	@ 00004036 24f1bfff
.org 0x403a
	ldrb r1, [r6, #0]	@ 0000403a 3178
.org 0x403c
	muls r0, r1	@ 0000403c 4843
.org 0x403e
	adds r4, r4, r0	@ 0000403e 2418
.org 0x4040
	str r4, [sp, #12]	@ 00004040 0394
.org 0x4042
	ldr r0, [sp, #16]	@ 00004042 0498
.org 0x4044
	movs r1, #240	@ 00004044 f021
.org 0x4046
	bl 0x129050	@ 00004046 25f103f8
.org 0x404a
	adds r4, r0, #0	@ 0000404a 041c
.org 0x404c
	lsls r4, r4, #12	@ 0000404c 2403
.org 0x404e
	lsrs r4, r4, #16	@ 0000404e 240c
.org 0x4050
	adds r0, r5, #0	@ 00004050 281c
.org 0x4052
	movs r1, #160	@ 00004052 a021
.org 0x4054
	bl 0x129050	@ 00004054 24f1fcff
.org 0x4058
	lsls r0, r0, #12	@ 00004058 0003
.org 0x405a
	ldr r1, [sp, #12]	@ 0000405a 0399
.org 0x405c
	ldrb r2, [r1, #0]	@ 0000405c 0a78
.org 0x405e
	lsls r1, r2, #2	@ 0000405e 9100
.org 0x4060
	adds r1, r1, r2	@ 00004060 8918
.org 0x4062
	lsls r2, r1, #4	@ 00004062 0a01
.org 0x4064
	subs r2, r2, r1	@ 00004064 521a
.org 0x4066
	lsls r2, r2, #2	@ 00004066 9200
.org 0x4068
	ldr r1, [sp, #0]	@ 00004068 0099
.org 0x406a
	ldr r3, [r1, #16]	@ 0000406a 0b69
.org 0x406c
	adds r2, r3, r2	@ 0000406c 9a18
.org 0x406e
	lsls r4, r4, #16	@ 0000406e 2404
.org 0x4070
	asrs r4, r4, #16	@ 00004070 2414
.org 0x4072
	lsls r5, r4, #1	@ 00004072 6500
.org 0x4074
	adds r2, r2, r5	@ 00004074 5219
.org 0x4076
	asrs r0, r0, #16	@ 00004076 0014
.org 0x4078
	lsls r1, r0, #4	@ 00004078 0101
.org 0x407a
	subs r1, r1, r0	@ 0000407a 091a
.org 0x407c
	lsls r1, r1, #1	@ 0000407c 4900
.org 0x407e
	adds r7, r2, r1	@ 0000407e 5718
.org 0x4080
	movs r2, #0	@ 00004080 0022
.org 0x4082
	mov r8, r2	@ 00004082 9046
.org 0x4084
	movs r1, #0	@ 00004084 0021
.org 0x4086
	str r1, [sp, #24]	@ 00004086 0691
.org 0x4088
	mov ip, r1	@ 00004088 8c46
.org 0x408a
	str r6, [sp, #64]	@ 0000408a 1096
.org 0x408c
	str r3, [sp, #60]	@ 0000408c 0f93
.org 0x408e
	str r0, [sp, #32]	@ 0000408e 0890
.org 0x4090
	movs r0, #10	@ 00004090 0a20
.org 0x4092
	ldr r3, [sp, #32]	@ 00004092 089b
.org 0x4094
	subs r0, r0, r3	@ 00004094 c01a
.org 0x4096
	str r0, [sp, #36]	@ 00004096 0990
.org 0x4098
	str r4, [sp, #40]	@ 00004098 0a94
.org 0x409a
	str r5, [sp, #28]	@ 0000409a 0795
.org 0x409c
	movs r0, #15	@ 0000409c 0f20
.org 0x409e
	subs r0, r0, r4	@ 0000409e 001b
.org 0x40a0
	str r0, [sp, #44]	@ 000040a0 0b90
.org 0x40a2
	movs r1, #0	@ 000040a2 0021
.org 0x40a4
	mov r3, r8	@ 000040a4 4346
.org 0x40a6
	lsls r3, r3, #16	@ 000040a6 1b04
.org 0x40a8
	str r3, [sp, #52]	@ 000040a8 0d93
.org 0x40aa
	lsls r2, r2, #16	@ 000040aa 1204
.org 0x40ac
	str r2, [sp, #56]	@ 000040ac 0e92
.org 0x40ae
	asrs r2, r2, #16	@ 000040ae 1214
.org 0x40b0
	mov r9, r2	@ 000040b0 9146
.org 0x40b2
	ldr r0, [sp, #52]	@ 000040b2 0d98
.org 0x40b4
	lsrs r6, r0, #16	@ 000040b4 060c
.org 0x40b6
	lsls r1, r1, #16	@ 000040b6 0904
.org 0x40b8
	mov r8, r1	@ 000040b8 8846
.org 0x40ba
	mov r1, r9	@ 000040ba 4946
.org 0x40bc
	cmp r1, #0	@ 000040bc 0029
.org 0x40be
	bne.n 0x40d0	@ 000040be 07d1
.org 0x40c0
	lsls r0, r6, #16	@ 000040c0 3004
.org 0x40c2
	asrs r1, r0, #16	@ 000040c2 0114
.org 0x40c4
	adds r2, r0, #0	@ 000040c4 021c
.org 0x40c6
	ldr r3, [sp, #36]	@ 000040c6 099b
.org 0x40c8
	cmp r1, r3	@ 000040c8 9942
.org 0x40ca
	blt.n 0x40ce	@ 000040ca 00db
.org 0x40cc
	b.n 0x41de	@ 000040cc 87e0
.org 0x40ce
	b.n 0x40f8	@ 000040ce 13e0
.org 0x40d0
	mov r0, r9	@ 000040d0 4846
.org 0x40d2
	cmp r0, #1	@ 000040d2 0128
.org 0x40d4
	bne.n 0x40ee	@ 000040d4 0bd1
.org 0x40d6
	lsls r0, r6, #16	@ 000040d6 3004
.org 0x40d8
	asrs r1, r0, #16	@ 000040d8 0114
.org 0x40da
	adds r2, r0, #0	@ 000040da 021c
.org 0x40dc
	cmp r1, #12	@ 000040dc 0c29
.org 0x40de
	bgt.n 0x41de	@ 000040de 7edc
.org 0x40e0
	adds r0, r1, #0	@ 000040e0 081c
.org 0x40e2
	subs r0, #10	@ 000040e2 0a38
.org 0x40e4
	ldr r1, [sp, #32]	@ 000040e4 0899
.org 0x40e6
	adds r0, r0, r1	@ 000040e6 4018
.org 0x40e8
	cmp r0, #9	@ 000040e8 0928
.org 0x40ea
	bgt.n 0x41de	@ 000040ea 78dc
.org 0x40ec
	b.n 0x40f8	@ 000040ec 04e0
.org 0x40ee
	lsls r0, r6, #16	@ 000040ee 3004
.org 0x40f0
	asrs r1, r0, #16	@ 000040f0 0114
.org 0x40f2
	adds r2, r0, #0	@ 000040f2 021c
.org 0x40f4
	cmp r1, #12	@ 000040f4 0c29
.org 0x40f6
	bgt.n 0x41de	@ 000040f6 72dc
.org 0x40f8
	asrs r0, r2, #12	@ 000040f8 1013
.org 0x40fa
	ldr r2, [sp, #20]	@ 000040fa 059a
.org 0x40fc
	adds r0, r2, r0	@ 000040fc 1018
.org 0x40fe
	lsls r0, r0, #16	@ 000040fe 0004
.org 0x4100
	lsrs r0, r0, #16	@ 00004100 000c
.org 0x4102
	mov sl, r0	@ 00004102 8246
.org 0x4104
	ldr r3, [sp, #24]	@ 00004104 069b
.org 0x4106
	lsls r0, r3, #16	@ 00004106 1804
.org 0x4108
	lsrs r1, r0, #16	@ 00004108 010c
.org 0x410a
	mov ip, r1	@ 0000410a 8c46
.org 0x410c
	str r0, [sp, #48]	@ 0000410c 0c90
.org 0x410e
	mov r2, r8	@ 0000410e 4246
.org 0x4110
	cmp r2, #0	@ 00004110 002a
.org 0x4112
	bne.n 0x4120	@ 00004112 05d1
.org 0x4114
	lsls r0, r1, #16	@ 00004114 0804
.org 0x4116
	asrs r0, r0, #16	@ 00004116 0014
.org 0x4118
	ldr r3, [sp, #44]	@ 00004118 0b9b
.org 0x411a
	cmp r0, r3	@ 0000411a 9842
.org 0x411c
	bge.n 0x41ac	@ 0000411c 46da
.org 0x411e
	b.n 0x4148	@ 0000411e 13e0
.org 0x4120
	mov r1, r8	@ 00004120 4146
.org 0x4122
	asrs r0, r1, #16	@ 00004122 0814
.org 0x4124
	cmp r0, #1	@ 00004124 0128
.org 0x4126
	bne.n 0x413e	@ 00004126 0ad1
.org 0x4128
	mov r2, ip	@ 00004128 6246
.org 0x412a
	lsls r0, r2, #16	@ 0000412a 1004
.org 0x412c
	asrs r0, r0, #16	@ 0000412c 0014
.org 0x412e
	cmp r0, #19	@ 0000412e 1328
.org 0x4130
	bgt.n 0x41ac	@ 00004130 3cdc
.org 0x4132
	subs r0, #15	@ 00004132 0f38
.org 0x4134
	ldr r3, [sp, #40]	@ 00004134 0a9b
.org 0x4136
	adds r0, r0, r3	@ 00004136 c018
.org 0x4138
	cmp r0, #14	@ 00004138 0e28
.org 0x413a
	bgt.n 0x41ac	@ 0000413a 37dc
.org 0x413c
	b.n 0x4148	@ 0000413c 04e0
.org 0x413e
	mov r1, ip	@ 0000413e 6146
.org 0x4140
	lsls r0, r1, #16	@ 00004140 0804
.org 0x4142
	asrs r0, r0, #16	@ 00004142 0014
.org 0x4144
	cmp r0, #19	@ 00004144 1328
.org 0x4146
	bgt.n 0x41ac	@ 00004146 31dc
.org 0x4148
	mov r2, ip	@ 00004148 6246
.org 0x414a
	lsls r4, r2, #16	@ 0000414a 1404
.org 0x414c
	asrs r4, r4, #16	@ 0000414c 2414
.org 0x414e
	lsls r2, r4, #4	@ 0000414e 2201
.org 0x4150
	ldr r3, [sp, #16]	@ 00004150 049b
.org 0x4152
	adds r2, r3, r2	@ 00004152 9a18
.org 0x4154
	ldrh r0, [r7, #0]	@ 00004154 3888
.org 0x4156
	lsls r0, r0, #3	@ 00004156 c000
.org 0x4158
	ldr r1, [sp, #0]	@ 00004158 0099
.org 0x415a
	ldr r5, [r1, #12]	@ 0000415a cd68
.org 0x415c
	adds r5, r5, r0	@ 0000415c 2d18
.org 0x415e
	mov r0, sl	@ 0000415e 5046
.org 0x4160
	lsls r3, r0, #16	@ 00004160 0304
.org 0x4162
	asrs r3, r3, #14	@ 00004162 9b13
.org 0x4164
	movs r0, #240	@ 00004164 f020
.org 0x4166
	lsls r0, r0, #2	@ 00004166 8000
.org 0x4168
	ands r3, r0	@ 00004168 0340
.org 0x416a
	lsls r2, r2, #16	@ 0000416a 1204
.org 0x416c
	asrs r1, r2, #16	@ 0000416c 1114
.org 0x416e
	asrs r2, r2, #19	@ 0000416e d214
.org 0x4170
	movs r0, #30	@ 00004170 1e20
.org 0x4172
	ands r2, r0	@ 00004172 0240
.org 0x4174
	adds r3, r3, r2	@ 00004174 9b18
.org 0x4176
	movs r0, #128	@ 00004176 8020
.org 0x4178
	lsls r0, r0, #1	@ 00004178 4000
.org 0x417a
	ands r1, r0	@ 0000417a 0140
.org 0x417c
	lsls r1, r1, #16	@ 0000417c 0904
.org 0x417e
	asrs r1, r1, #16	@ 0000417e 0914
.org 0x4180
	lsls r1, r1, #3	@ 00004180 c900
.org 0x4182
	lsls r3, r3, #1	@ 00004182 5b00
.org 0x4184
	ldr r2, [sp, #8]	@ 00004184 029a
.org 0x4186
	adds r3, r3, r2	@ 00004186 9b18
.org 0x4188
	adds r1, r1, r3	@ 00004188 c918
.org 0x418a
	ldr r0, [r5, #0]	@ 0000418a 2868
.org 0x418c
	str r0, [r1, #0]	@ 0000418c 0860
.org 0x418e
	ldr r0, [r5, #4]	@ 0000418e 6868
.org 0x4190
	str r0, [r1, #64]	@ 00004190 0864
.org 0x4192
	adds r7, #2	@ 00004192 0237
.org 0x4194
	adds r4, #1	@ 00004194 0134
.org 0x4196
	lsls r4, r4, #16	@ 00004196 2404
.org 0x4198
	lsrs r4, r4, #16	@ 00004198 240c
.org 0x419a
	mov ip, r4	@ 0000419a a446
.org 0x419c
	mov r3, r8	@ 0000419c 4346
.org 0x419e
	cmp r3, #0	@ 0000419e 002b
.org 0x41a0
	bne.n 0x4120	@ 000041a0 bed1
.org 0x41a2
	lsls r0, r4, #16	@ 000041a2 2004
.org 0x41a4
	asrs r0, r0, #16	@ 000041a4 0014
.org 0x41a6
	ldr r1, [sp, #44]	@ 000041a6 0b99
.org 0x41a8
	cmp r0, r1	@ 000041a8 8842
.org 0x41aa
	blt.n 0x4148	@ 000041aa cddb
.org 0x41ac
	mov r2, ip	@ 000041ac 6246
.org 0x41ae
	lsls r0, r2, #16	@ 000041ae 1004
.org 0x41b0
	asrs r0, r0, #16	@ 000041b0 0014
.org 0x41b2
	ldr r3, [sp, #48]	@ 000041b2 0c9b
.org 0x41b4
	asrs r1, r3, #16	@ 000041b4 1914
.org 0x41b6
	subs r0, r0, r1	@ 000041b6 401a
.org 0x41b8
	movs r1, #15	@ 000041b8 0f21
.org 0x41ba
	subs r0, r1, r0	@ 000041ba 081a
.org 0x41bc
	lsls r0, r0, #1	@ 000041bc 4000
.org 0x41be
	adds r7, r7, r0	@ 000041be 3f18
.org 0x41c0
	lsls r0, r6, #16	@ 000041c0 3004
.org 0x41c2
	movs r2, #128	@ 000041c2 8022
.org 0x41c4
	lsls r2, r2, #9	@ 000041c4 5202
.org 0x41c6
	adds r0, r0, r2	@ 000041c6 8018
.org 0x41c8
	lsrs r6, r0, #16	@ 000041c8 060c
.org 0x41ca
	mov r3, r9	@ 000041ca 4b46
.org 0x41cc
	cmp r3, #0	@ 000041cc 002b
.org 0x41ce
	beq.n 0x41d2	@ 000041ce 00d0
.org 0x41d0
	b.n 0x40d0	@ 000041d0 7ee7
.org 0x41d2
	lsls r0, r6, #16	@ 000041d2 3004
.org 0x41d4
	asrs r1, r0, #16	@ 000041d4 0114
.org 0x41d6
	adds r2, r0, #0	@ 000041d6 021c
.org 0x41d8
	ldr r0, [sp, #36]	@ 000041d8 0998
.org 0x41da
	cmp r1, r0	@ 000041da 8142
.org 0x41dc
	blt.n 0x40f8	@ 000041dc 8cdb
.org 0x41de
	mov r1, ip	@ 000041de 6146
.org 0x41e0
	str r1, [sp, #24]	@ 000041e0 0691
.org 0x41e2
	mov r3, r8	@ 000041e2 4346
.org 0x41e4
	asrs r0, r3, #16	@ 000041e4 1814
.org 0x41e6
	cmp r0, #2	@ 000041e6 0228
.org 0x41e8
	beq.n 0x4234	@ 000041e8 24d0
.org 0x41ea
	ldr r0, [sp, #12]	@ 000041ea 0398
.org 0x41ec
	adds r0, #1	@ 000041ec 0130
.org 0x41ee
	str r0, [sp, #12]	@ 000041ee 0390
.org 0x41f0
	mov r1, r9	@ 000041f0 4946
.org 0x41f2
	cmp r1, #0	@ 000041f2 0029
.org 0x41f4
	bne.n 0x4212	@ 000041f4 0dd1
.org 0x41f6
	ldrb r1, [r0, #0]	@ 000041f6 0178
.org 0x41f8
	lsls r0, r1, #2	@ 000041f8 8800
.org 0x41fa
	adds r0, r0, r1	@ 000041fa 4018
.org 0x41fc
	lsls r1, r0, #4	@ 000041fc 0101
.org 0x41fe
	subs r1, r1, r0	@ 000041fe 091a
.org 0x4200
	lsls r1, r1, #2	@ 00004200 8900
.org 0x4202
	ldr r3, [sp, #60]	@ 00004202 0f9b
.org 0x4204
	adds r1, r3, r1	@ 00004204 5918
.org 0x4206
	ldr r3, [sp, #32]	@ 00004206 089b
.org 0x4208
	lsls r0, r3, #4	@ 00004208 1801
.org 0x420a
	subs r0, r0, r3	@ 0000420a c01a
.org 0x420c
	lsls r0, r0, #1	@ 0000420c 4000
.org 0x420e
	adds r7, r1, r0	@ 0000420e 0f18
.org 0x4210
	b.n 0x4224	@ 00004210 08e0
.org 0x4212
	ldr r1, [sp, #12]	@ 00004212 0399
.org 0x4214
	ldrb r0, [r1, #0]	@ 00004214 0878
.org 0x4216
	lsls r1, r0, #2	@ 00004216 8100
.org 0x4218
	adds r1, r1, r0	@ 00004218 0918
.org 0x421a
	lsls r0, r1, #4	@ 0000421a 0801
.org 0x421c
	subs r0, r0, r1	@ 0000421c 401a
.org 0x421e
	lsls r0, r0, #2	@ 0000421e 8000
.org 0x4220
	ldr r3, [sp, #60]	@ 00004220 0f9b
.org 0x4222
	adds r7, r3, r0	@ 00004222 1f18
.org 0x4224
	movs r0, #128	@ 00004224 8020
.org 0x4226
	lsls r0, r0, #9	@ 00004226 4002
.org 0x4228
	add r0, r8	@ 00004228 4044
.org 0x422a
	lsrs r1, r0, #16	@ 0000422a 010c
.org 0x422c
	asrs r0, r0, #16	@ 0000422c 0014
.org 0x422e
	cmp r0, #2	@ 0000422e 0228
.org 0x4230
	bgt.n 0x4234	@ 00004230 00dc
.org 0x4232
	b.n 0x40b2	@ 00004232 3ee7
.org 0x4234
	ldr r0, [sp, #56]	@ 00004234 0e98
.org 0x4236
	asrs r3, r0, #16	@ 00004236 0314
.org 0x4238
	cmp r3, #2	@ 00004238 022b
.org 0x423a
	beq.n 0x4272	@ 0000423a 1ad0
.org 0x423c
	ldr r1, [sp, #64]	@ 0000423c 1099
.org 0x423e
	ldrb r0, [r1, #0]	@ 0000423e 0878
.org 0x4240
	ldr r1, [sp, #12]	@ 00004240 0399
.org 0x4242
	adds r0, r1, r0	@ 00004242 0818
.org 0x4244
	subs r0, #2	@ 00004244 0238
.org 0x4246
	str r0, [sp, #12]	@ 00004246 0390
.org 0x4248
	ldrb r0, [r0, #0]	@ 00004248 0078
.org 0x424a
	lsls r1, r0, #2	@ 0000424a 8100
.org 0x424c
	adds r1, r1, r0	@ 0000424c 0918
.org 0x424e
	lsls r0, r1, #4	@ 0000424e 0801
.org 0x4250
	subs r0, r0, r1	@ 00004250 401a
.org 0x4252
	lsls r0, r0, #2	@ 00004252 8000
.org 0x4254
	ldr r1, [sp, #60]	@ 00004254 0f99
.org 0x4256
	adds r0, r1, r0	@ 00004256 0818
.org 0x4258
	ldr r1, [sp, #28]	@ 00004258 0799
.org 0x425a
	adds r7, r0, r1	@ 0000425a 4718
.org 0x425c
	lsrs r2, r2, #16	@ 0000425c 120c
.org 0x425e
	mov r8, r2	@ 0000425e 9046
.org 0x4260
	movs r2, #0	@ 00004260 0022
.org 0x4262
	str r2, [sp, #24]	@ 00004262 0692
.org 0x4264
	adds r0, r3, #1	@ 00004264 581c
.org 0x4266
	lsls r0, r0, #16	@ 00004266 0004
.org 0x4268
	lsrs r2, r0, #16	@ 00004268 020c
.org 0x426a
	asrs r0, r0, #16	@ 0000426a 0014
.org 0x426c
	cmp r0, #2	@ 0000426c 0228
.org 0x426e
	bgt.n 0x4272	@ 0000426e 00dc
.org 0x4270
	b.n 0x40a2	@ 00004270 17e7
.org 0x4272
	ldr r0, [sp, #4]	@ 00004272 0198
.org 0x4274
	ldr r3, [r0, #0]	@ 00004274 0368
.org 0x4276
	ldr r2, [pc, #40]	@ 00004276 0a4a
.org 0x4278
	adds r0, r3, #0	@ 00004278 181c
.org 0x427a
	ands r0, r2	@ 0000427a 1040
.org 0x427c
	ldr r1, [sp, #0]	@ 0000427c 0099
.org 0x427e
	strh r0, [r1, #8]	@ 0000427e 0881
.org 0x4280
	ldr r0, [sp, #4]	@ 00004280 0198
.org 0x4282
	ldr r1, [r0, #4]	@ 00004282 4168
.org 0x4284
	adds r0, r1, #0	@ 00004284 081c
.org 0x4286
	ands r0, r2	@ 00004286 1040
.org 0x4288
	ldr r2, [sp, #0]	@ 00004288 009a
.org 0x428a
	strh r0, [r2, #10]	@ 0000428a 5081
.org 0x428c
	str r3, [r2, #0]	@ 0000428c 1360
.org 0x428e
	str r1, [r2, #4]	@ 0000428e 5160
.org 0x4290
	add sp, #68	@ 00004290 11b0
.org 0x4292
	pop {r3, r4, r5}	@ 00004292 38bc
.org 0x4294
	mov r8, r3	@ 00004294 9846
.org 0x4296
	mov r9, r4	@ 00004296 a146
.org 0x4298
	mov sl, r5	@ 00004298 aa46
.org 0x429a
	pop {r4, r5, r6, r7}	@ 0000429a f0bc
.org 0x429c
	pop {r0}	@ 0000429c 01bc
.org 0x429e
	bx r0	@ 0000429e 0047
