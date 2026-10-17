@ FUN_0805108c  entry 0x0805108c  size 366
.thumb
.org 0x5108c
FUN_0805108c:
	push {r4, r5, lr}	@ 0005108c 30b5
.org 0x5108e
	adds r4, r0, #0	@ 0005108e 041c
.org 0x51090
	ldrb r0, [r4, #14]	@ 00051090 a07b
.org 0x51092
	cmp r0, #0	@ 00051092 0028
.org 0x51094
	bne.n 0x51172	@ 00051094 6dd1
.org 0x51096
	strb r0, [r4, #15]	@ 00051096 e073
.org 0x51098
	ldr r0, [pc, #76]	@ 00051098 1348
.org 0x5109a
	ldr r1, [pc, #80]	@ 0005109a 1449
.org 0x5109c
	adds r0, r0, r1	@ 0005109c 4018
.org 0x5109e
	ldrb r1, [r0, #0]	@ 0005109e 0178
.org 0x510a0
	movs r0, #16	@ 000510a0 1020
.org 0x510a2
	ands r0, r1	@ 000510a2 0840
.org 0x510a4
	cmp r0, #0	@ 000510a4 0028
.org 0x510a6
	beq.n 0x510b4	@ 000510a6 05d0
.org 0x510a8
	ldr r0, [pc, #68]	@ 000510a8 1148
.org 0x510aa
	ldrb r1, [r0, #4]	@ 000510aa 0179
.org 0x510ac
	movs r0, #4	@ 000510ac 0420
.org 0x510ae
	ands r0, r1	@ 000510ae 0840
.org 0x510b0
	cmp r0, #0	@ 000510b0 0028
.org 0x510b2
	beq.n 0x510c0	@ 000510b2 05d0
.org 0x510b4
	ldr r0, [pc, #60]	@ 000510b4 0f48
.org 0x510b6
	ldrh r0, [r0, #0]	@ 000510b6 0088
.org 0x510b8
	adds r5, r4, #0	@ 000510b8 251c
.org 0x510ba
	adds r5, #164	@ 000510ba a435
.org 0x510bc
	cmp r0, #16	@ 000510bc 1028
.org 0x510be
	bne.n 0x5110e	@ 000510be 26d1
.org 0x510c0
	adds r0, r4, #0	@ 000510c0 201c
.org 0x510c2
	adds r0, #164	@ 000510c2 a430
.org 0x510c4
	movs r2, #0	@ 000510c4 0022
.org 0x510c6
	ldrsh r1, [r0, r2]	@ 000510c6 815e
.org 0x510c8
	adds r5, r0, #0	@ 000510c8 051c
.org 0x510ca
	cmp r1, #0	@ 000510ca 0029
.org 0x510cc
	beq.n 0x5110e	@ 000510cc 1fd0
.org 0x510ce
	cmp r1, #63	@ 000510ce 3f29
.org 0x510d0
	bgt.n 0x5110e	@ 000510d0 1ddc
.org 0x510d2
	ldr r1, [pc, #36]	@ 000510d2 0949
.org 0x510d4
	adds r0, r4, #0	@ 000510d4 201c
.org 0x510d6
	bl 0x1cf00	@ 000510d6 cbf713ff
.org 0x510da
	movs r1, #0	@ 000510da 0021
.org 0x510dc
	ldrsh r0, [r5, r1]	@ 000510dc 685e
.org 0x510de
	adds r0, #3	@ 000510de 0330
.org 0x510e0
	cmp r0, #64	@ 000510e0 4028
.org 0x510e2
	ble.n 0x510fc	@ 000510e2 0bdd
.org 0x510e4
	movs r0, #64	@ 000510e4 4020
.org 0x510e6
	b.n 0x51100	@ 000510e6 0be0
.org 0x510e8
	.byte 0xb0,0x0a,0x00,0x02	@ 000510e8 data
.org 0x510ec
	.byte 0x10,0xc0,0x02,0x00	@ 000510ec data
.org 0x510f0
	.byte 0xb0,0xe8,0x02,0x02	@ 000510f0 data
.org 0x510f4
	.byte 0x10,0xe9,0x02,0x02	@ 000510f4 data
.org 0x510f8
	.byte 0x02,0xa1,0x00,0x00	@ 000510f8 data
.org 0x510fc
	ldrh r0, [r5, #0]	@ 000510fc 2888
.org 0x510fe
	adds r0, #3	@ 000510fe 0330
.org 0x51100
	strh r0, [r5, #0]	@ 00051100 2880
.org 0x51102
	movs r0, #244	@ 00051102 f420
.org 0x51104
	bl 0x2b10	@ 00051104 b1f704fd
.org 0x51108
	ldrb r0, [r4, #15]	@ 00051108 e07b
.org 0x5110a
	adds r0, #1	@ 0005110a 0130
.org 0x5110c
	strb r0, [r4, #15]	@ 0005110c e073
.org 0x5110e
	ldrb r0, [r4, #15]	@ 0005110e e07b
.org 0x51110
	cmp r0, #0	@ 00051110 0028
.org 0x51112
	bne.n 0x51140	@ 00051112 15d1
.org 0x51114
	ldrb r0, [r4, #30]	@ 00051114 a07f
.org 0x51116
	lsls r0, r0, #8	@ 00051116 0002
.org 0x51118
	adds r1, r4, #0	@ 00051118 211c
.org 0x5111a
	adds r1, #112	@ 0005111a 7031
.org 0x5111c
	ldrb r1, [r1, #0]	@ 0005111c 0978
.org 0x5111e
	orrs r0, r1	@ 0005111e 0843
.org 0x51120
	ldr r1, [pc, #20]	@ 00051120 0549
.org 0x51122
	cmp r0, r1	@ 00051122 8842
.org 0x51124
	beq.n 0x5112c	@ 00051124 02d0
.org 0x51126
	adds r0, r4, #0	@ 00051126 201c
.org 0x51128
	bl 0x1cf00	@ 00051128 cbf7eafe
.org 0x5112c
	adds r0, r4, #0	@ 0005112c 201c
.org 0x5112e
	adds r0, #116	@ 0005112e 7430
.org 0x51130
	ldr r1, [pc, #8]	@ 00051130 0249
.org 0x51132
	bl 0x5784	@ 00051132 b4f727fb
.org 0x51136
	b.n 0x5114a	@ 00051136 08e0
.org 0x51138
	.byte 0x18,0xa1,0x00,0x00	@ 00051138 data
.org 0x5113c
	.byte 0x54,0x7e,0x85,0x08	@ 0005113c data
.org 0x51140
	adds r0, r4, #0	@ 00051140 201c
.org 0x51142
	adds r0, #116	@ 00051142 7430
.org 0x51144
	ldr r1, [pc, #16]	@ 00051144 0449
.org 0x51146
	bl 0x5784	@ 00051146 b4f71dfb
.org 0x5114a
	movs r2, #0	@ 0005114a 0022
.org 0x5114c
	ldrsh r0, [r5, r2]	@ 0005114c a85e
.org 0x5114e
	cmp r0, #32	@ 0005114e 2028
.org 0x51150
	ble.n 0x5115c	@ 00051150 04dd
.org 0x51152
	movs r0, #48	@ 00051152 3020
.org 0x51154
	b.n 0x51166	@ 00051154 07e0
.org 0x51156
	.byte 0x00	@ 00051156 data
.org 0x51157
	.byte 0x00	@ 00051157 data
.org 0x51158
	.byte 0xac,0x80,0x85,0x08	@ 00051158 data
.org 0x5115c
	cmp r0, #16	@ 0005115c 1028
.org 0x5115e
	ble.n 0x51164	@ 0005115e 01dd
.org 0x51160
	movs r0, #32	@ 00051160 2020
.org 0x51162
	b.n 0x51166	@ 00051162 00e0
.org 0x51164
	movs r0, #24	@ 00051164 1820
.org 0x51166
	strb r0, [r4, #18]	@ 00051166 a074
.org 0x51168
	movs r0, #0	@ 00051168 0020
.org 0x5116a
	strb r0, [r4, #19]	@ 0005116a e074
.org 0x5116c
	ldrb r0, [r4, #14]	@ 0005116c a07b
.org 0x5116e
	adds r0, #1	@ 0005116e 0130
.org 0x51170
	strb r0, [r4, #14]	@ 00051170 a073
.org 0x51172
	adds r0, r4, #0	@ 00051172 201c
.org 0x51174
	bl 0x1cff0	@ 00051174 cbf73cff
.org 0x51178
	movs r3, #0	@ 00051178 0023
.org 0x5117a
	ldr r0, [pc, #64]	@ 0005117a 1048
.org 0x5117c
	ldr r2, [r0, #0]	@ 0005117c 0268
.org 0x5117e
	ldr r1, [r4, #84]	@ 0005117e 616d
.org 0x51180
	ldr r0, [r2, #84]	@ 00051180 506d
.org 0x51182
	cmp r1, r0	@ 00051182 8142
.org 0x51184
	bge.n 0x51188	@ 00051184 00da
.org 0x51186
	movs r3, #1	@ 00051186 0123
.org 0x51188
	adds r0, r4, #0	@ 00051188 201c
.org 0x5118a
	adds r0, #76	@ 0005118a 4c30
.org 0x5118c
	strb r3, [r0, #0]	@ 0005118c 0370
.org 0x5118e
	movs r3, #0	@ 0005118e 0023
.org 0x51190
	ldr r1, [r4, #84]	@ 00051190 616d
.org 0x51192
	ldr r0, [r2, #84]	@ 00051192 506d
.org 0x51194
	cmp r1, r0	@ 00051194 8142
.org 0x51196
	bge.n 0x5119a	@ 00051196 00da
.org 0x51198
	movs r3, #1	@ 00051198 0123
.org 0x5119a
	movs r0, #74	@ 0005119a 4a20
.org 0x5119c
	adds r0, r0, r4	@ 0005119c 0019
.org 0x5119e
	mov ip, r0	@ 0005119e 8446
.org 0x511a0
	lsls r2, r3, #4	@ 000511a0 1a01
.org 0x511a2
	ldrb r1, [r0, #0]	@ 000511a2 0178
.org 0x511a4
	movs r0, #17	@ 000511a4 1120
.org 0x511a6
	negs r0, r0	@ 000511a6 4042
.org 0x511a8
	ands r0, r1	@ 000511a8 0840
.org 0x511aa
	orrs r0, r2	@ 000511aa 1043
.org 0x511ac
	mov r1, ip	@ 000511ac 6146
.org 0x511ae
	strb r0, [r1, #0]	@ 000511ae 0870
.org 0x511b0
	cmp r3, #0	@ 000511b0 002b
.org 0x511b2
	beq.n 0x511c0	@ 000511b2 05d0
.org 0x511b4
	ldrb r0, [r4, #10]	@ 000511b4 a07a
.org 0x511b6
	movs r1, #16	@ 000511b6 1021
.org 0x511b8
	orrs r0, r1	@ 000511b8 0843
.org 0x511ba
	b.n 0x511c6	@ 000511ba 04e0
.org 0x511bc
	.byte 0xf0,0xdb,0x02,0x02	@ 000511bc data
.org 0x511c0
	ldrb r1, [r4, #10]	@ 000511c0 a17a
.org 0x511c2
	movs r0, #239	@ 000511c2 ef20
.org 0x511c4
	ands r0, r1	@ 000511c4 0840
.org 0x511c6
	strb r0, [r4, #10]	@ 000511c6 a072
.org 0x511c8
	ldrb r0, [r4, #15]	@ 000511c8 e07b
.org 0x511ca
	cmp r0, #0	@ 000511ca 0028
.org 0x511cc
	beq.n 0x511fa	@ 000511cc 15d0
.org 0x511ce
	ldrb r0, [r4, #19]	@ 000511ce e07c
.org 0x511d0
	adds r1, r0, #1	@ 000511d0 411c
.org 0x511d2
	strb r1, [r4, #19]	@ 000511d2 e174
.org 0x511d4
	lsls r0, r0, #24	@ 000511d4 0006
.org 0x511d6
	lsrs r0, r0, #24	@ 000511d6 000e
.org 0x511d8
	movs r1, #6	@ 000511d8 0621
.org 0x511da
	bl 0x129198	@ 000511da d7f0ddff
.org 0x511de
	lsls r0, r0, #24	@ 000511de 0006
.org 0x511e0
	cmp r0, #0	@ 000511e0 0028
.org 0x511e2
	bne.n 0x511fa	@ 000511e2 0ad1
.org 0x511e4
	ldrb r0, [r4, #19]	@ 000511e4 e07c
.org 0x511e6
	movs r1, #6	@ 000511e6 0621
.org 0x511e8
	bl 0x129120	@ 000511e8 d7f09aff
.org 0x511ec
	adds r2, r0, #0	@ 000511ec 021c
.org 0x511ee
	lsls r2, r2, #24	@ 000511ee 1206
.org 0x511f0
	lsrs r2, r2, #24	@ 000511f0 120e
.org 0x511f2
	adds r0, r4, #0	@ 000511f2 201c
.org 0x511f4
	movs r1, #4	@ 000511f4 0421
.org 0x511f6
	bl 0xdcd18	@ 000511f6 8bf08ffd
