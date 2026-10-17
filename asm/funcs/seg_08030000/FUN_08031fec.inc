@ FUN_08031fec  entry 0x08031fec  size 346
.thumb
.org 0x31fec
FUN_08031fec:
	push {r4, r5, r6, lr}	@ 00031fec 70b5
.org 0x31fee
	sub sp, #8	@ 00031fee 82b0
.org 0x31ff0
	adds r6, r0, #0	@ 00031ff0 061c
.org 0x31ff2
	movs r1, #171	@ 00031ff2 ab21
.org 0x31ff4
	lsls r1, r1, #1	@ 00031ff4 4900
.org 0x31ff6
	adds r0, r6, r1	@ 00031ff6 7018
.org 0x31ff8
	ldrb r0, [r0, #0]	@ 00031ff8 0078
.org 0x31ffa
	cmp r0, #3	@ 00031ffa 0328
.org 0x31ffc
	bne.n 0x32062	@ 00031ffc 31d1
.org 0x31ffe
	adds r0, r6, #0	@ 00031ffe 301c
.org 0x32000
	adds r0, #113	@ 00032000 7130
.org 0x32002
	ldrb r0, [r0, #0]	@ 00032002 0078
.org 0x32004
	lsls r0, r0, #24	@ 00032004 0006
.org 0x32006
	asrs r0, r0, #24	@ 00032006 0016
.org 0x32008
	cmp r0, #0	@ 00032008 0028
.org 0x3200a
	bne.n 0x32046	@ 0003200a 1cd1
.org 0x3200c
	adds r0, r6, #0	@ 0003200c 301c
.org 0x3200e
	adds r0, #114	@ 0003200e 7230
.org 0x32010
	ldrb r0, [r0, #0]	@ 00032010 0078
.org 0x32012
	lsls r0, r0, #24	@ 00032012 0006
.org 0x32014
	asrs r0, r0, #24	@ 00032014 0016
.org 0x32016
	cmp r0, #1	@ 00032016 0128
.org 0x32018
	ble.n 0x32046	@ 00032018 15dd
.org 0x3201a
	ldrb r1, [r6, #10]	@ 0003201a b17a
.org 0x3201c
	movs r0, #16	@ 0003201c 1020
.org 0x3201e
	ands r0, r1	@ 0003201e 0840
.org 0x32020
	cmp r0, #0	@ 00032020 0028
.org 0x32022
	beq.n 0x32038	@ 00032022 09d0
.org 0x32024
	movs r1, #226	@ 00032024 e221
.org 0x32026
	lsls r1, r1, #1	@ 00032026 4900
.org 0x32028
	adds r0, r6, r1	@ 00032028 7018
.org 0x3202a
	ldr r0, [r0, #0]	@ 0003202a 0068
.org 0x3202c
	ldr r1, [pc, #4]	@ 0003202c 0149
.org 0x3202e
	adds r0, r0, r1	@ 0003202e 4018
.org 0x32030
	b.n 0x3204e	@ 00032030 0de0
.org 0x32032
	.byte 0x00	@ 00032032 data
.org 0x32033
	.byte 0x00	@ 00032033 data
.org 0x32034
	.byte 0x00,0xfe,0xff,0xff	@ 00032034 data
.org 0x32038
	movs r1, #226	@ 00032038 e221
.org 0x3203a
	lsls r1, r1, #1	@ 0003203a 4900
.org 0x3203c
	adds r0, r6, r1	@ 0003203c 7018
.org 0x3203e
	ldr r0, [r0, #0]	@ 0003203e 0068
.org 0x32040
	adds r1, #60	@ 00032040 3c31
.org 0x32042
	adds r0, r0, r1	@ 00032042 4018
.org 0x32044
	b.n 0x3204e	@ 00032044 03e0
.org 0x32046
	movs r1, #226	@ 00032046 e221
.org 0x32048
	lsls r1, r1, #1	@ 00032048 4900
.org 0x3204a
	adds r0, r6, r1	@ 0003204a 7018
.org 0x3204c
	ldr r0, [r0, #0]	@ 0003204c 0068
.org 0x3204e
	str r0, [r6, #84]	@ 0003204e 7065
.org 0x32050
	movs r1, #228	@ 00032050 e421
.org 0x32052
	lsls r1, r1, #1	@ 00032052 4900
.org 0x32054
	adds r0, r6, r1	@ 00032054 7018
.org 0x32056
	ldr r0, [r0, #0]	@ 00032056 0068
.org 0x32058
	movs r1, #180	@ 00032058 b421
.org 0x3205a
	lsls r1, r1, #6	@ 0003205a 8901
.org 0x3205c
	adds r0, r0, r1	@ 0003205c 4018
.org 0x3205e
	str r0, [r6, #88]	@ 0003205e b065
.org 0x32060
	b.n 0x320ec	@ 00032060 44e0
.org 0x32062
	movs r4, #1	@ 00032062 0124
.org 0x32064
	cmp r0, #0	@ 00032064 0028
.org 0x32066
	beq.n 0x32070	@ 00032066 03d0
.org 0x32068
	movs r4, #0	@ 00032068 0024
.org 0x3206a
	cmp r0, #1	@ 0003206a 0128
.org 0x3206c
	bne.n 0x32070	@ 0003206c 00d1
.org 0x3206e
	movs r4, #2	@ 0003206e 0224
.org 0x32070
	adds r0, r6, #0	@ 00032070 301c
.org 0x32072
	adds r0, #114	@ 00032072 7230
.org 0x32074
	ldrb r0, [r0, #0]	@ 00032074 0078
.org 0x32076
	lsls r0, r0, #24	@ 00032076 0006
.org 0x32078
	asrs r0, r0, #24	@ 00032078 0016
.org 0x3207a
	cmp r0, #1	@ 0003207a 0128
.org 0x3207c
	bgt.n 0x32084	@ 0003207c 02dc
.org 0x3207e
	adds r0, r4, #1	@ 0003207e 601c
.org 0x32080
	lsls r0, r0, #24	@ 00032080 0006
.org 0x32082
	lsrs r4, r0, #24	@ 00032082 040e
.org 0x32084
	ldrb r1, [r6, #10]	@ 00032084 b17a
.org 0x32086
	movs r0, #16	@ 00032086 1020
.org 0x32088
	ands r0, r1	@ 00032088 0840
.org 0x3208a
	cmp r0, #0	@ 0003208a 0028
.org 0x3208c
	beq.n 0x320b0	@ 0003208c 10d0
.org 0x3208e
	movs r0, #226	@ 0003208e e220
.org 0x32090
	lsls r0, r0, #1	@ 00032090 4000
.org 0x32092
	adds r3, r6, r0	@ 00032092 3318
.org 0x32094
	ldr r1, [pc, #20]	@ 00032094 0549
.org 0x32096
	adds r2, r6, #0	@ 00032096 321c
.org 0x32098
	adds r2, #113	@ 00032098 7132
.org 0x3209a
	movs r0, #0	@ 0003209a 0020
.org 0x3209c
	ldrsb r0, [r2, r0]	@ 0003209c 1056
.org 0x3209e
	adds r0, r0, r4	@ 0003209e 0019
.org 0x320a0
	lsls r0, r0, #2	@ 000320a0 8000
.org 0x320a2
	adds r0, r0, r1	@ 000320a2 4018
.org 0x320a4
	ldr r1, [r3, #0]	@ 000320a4 1968
.org 0x320a6
	ldr r0, [r0, #0]	@ 000320a6 0068
.org 0x320a8
	subs r1, r1, r0	@ 000320a8 091a
.org 0x320aa
	b.n 0x320cc	@ 000320aa 0fe0
.org 0x320ac
	.byte 0x60,0x2f,0x85,0x08	@ 000320ac data
.org 0x320b0
	movs r1, #226	@ 000320b0 e221
.org 0x320b2
	lsls r1, r1, #1	@ 000320b2 4900
.org 0x320b4
	adds r3, r6, r1	@ 000320b4 7318
.org 0x320b6
	ldr r1, [pc, #128]	@ 000320b6 2049
.org 0x320b8
	adds r2, r6, #0	@ 000320b8 321c
.org 0x320ba
	adds r2, #113	@ 000320ba 7132
.org 0x320bc
	movs r0, #0	@ 000320bc 0020
.org 0x320be
	ldrsb r0, [r2, r0]	@ 000320be 1056
.org 0x320c0
	adds r0, r0, r4	@ 000320c0 0019
.org 0x320c2
	lsls r0, r0, #2	@ 000320c2 8000
.org 0x320c4
	adds r0, r0, r1	@ 000320c4 4018
.org 0x320c6
	ldr r1, [r3, #0]	@ 000320c6 1968
.org 0x320c8
	ldr r0, [r0, #0]	@ 000320c8 0068
.org 0x320ca
	adds r1, r1, r0	@ 000320ca 0918
.org 0x320cc
	str r1, [r6, #84]	@ 000320cc 7165
.org 0x320ce
	adds r0, r2, #0	@ 000320ce 101c
.org 0x320d0
	movs r1, #228	@ 000320d0 e421
.org 0x320d2
	lsls r1, r1, #1	@ 000320d2 4900
.org 0x320d4
	adds r2, r6, r1	@ 000320d4 7218
.org 0x320d6
	ldr r1, [pc, #100]	@ 000320d6 1949
.org 0x320d8
	ldrb r0, [r0, #0]	@ 000320d8 0078
.org 0x320da
	lsls r0, r0, #24	@ 000320da 0006
.org 0x320dc
	asrs r0, r0, #24	@ 000320dc 0016
.org 0x320de
	adds r0, r0, r4	@ 000320de 0019
.org 0x320e0
	lsls r0, r0, #2	@ 000320e0 8000
.org 0x320e2
	adds r0, r0, r1	@ 000320e2 4018
.org 0x320e4
	ldr r1, [r2, #0]	@ 000320e4 1168
.org 0x320e6
	ldr r0, [r0, #0]	@ 000320e6 0068
.org 0x320e8
	adds r1, r1, r0	@ 000320e8 0918
.org 0x320ea
	str r1, [r6, #88]	@ 000320ea b165
.org 0x320ec
	ldr r0, [r6, #84]	@ 000320ec 706d
.org 0x320ee
	ldr r1, [r6, #88]	@ 000320ee b16d
.org 0x320f0
	str r0, [sp, #0]	@ 000320f0 0090
.org 0x320f2
	str r1, [sp, #4]	@ 000320f2 0191
.org 0x320f4
	movs r1, #186	@ 000320f4 ba21
.org 0x320f6
	lsls r1, r1, #1	@ 000320f6 4900
.org 0x320f8
	adds r5, r6, r1	@ 000320f8 7518
.org 0x320fa
	ldrb r1, [r5, #0]	@ 000320fa 2978
.org 0x320fc
	lsls r1, r1, #3	@ 000320fc c900
.org 0x320fe
	ldr r4, [pc, #64]	@ 000320fe 104c
.org 0x32100
	adds r1, r1, r4	@ 00032100 0919
.org 0x32102
	adds r0, r6, #0	@ 00032102 301c
.org 0x32104
	movs r2, #0	@ 00032104 0022
.org 0x32106
	bl 0x2b7f0	@ 00032106 f9f773fb
.org 0x3210a
	ldrb r1, [r5, #0]	@ 0003210a 2978
.org 0x3210c
	lsls r1, r1, #3	@ 0003210c c900
.org 0x3210e
	adds r1, r1, r4	@ 0003210e 0919
.org 0x32110
	adds r0, r6, #0	@ 00032110 301c
.org 0x32112
	movs r2, #1	@ 00032112 0122
.org 0x32114
	bl 0x2b7f0	@ 00032114 f9f76cfb
.org 0x32118
	ldr r0, [r6, #84]	@ 00032118 706d
.org 0x3211a
	ldr r1, [sp, #0]	@ 0003211a 0099
.org 0x3211c
	cmp r0, r1	@ 0003211c 8842
.org 0x3211e
	bne.n 0x32128	@ 0003211e 03d1
.org 0x32120
	ldr r0, [r6, #88]	@ 00032120 b06d
.org 0x32122
	ldr r1, [sp, #4]	@ 00032122 0199
.org 0x32124
	cmp r0, r1	@ 00032124 8842
.org 0x32126
	beq.n 0x32144	@ 00032126 0dd0
.org 0x32128
	movs r0, #0	@ 00032128 0020
.org 0x3212a
	movs r1, #1	@ 0003212a 0121
.org 0x3212c
	strb r1, [r6, #13]	@ 0003212c 7173
.org 0x3212e
	movs r1, #2	@ 0003212e 0221
.org 0x32130
	strb r1, [r6, #14]	@ 00032130 b173
.org 0x32132
	strb r0, [r6, #15]	@ 00032132 f073
.org 0x32134
	b.n 0x32156	@ 00032134 0fe0
.org 0x32136
	.byte 0x00	@ 00032136 data
.org 0x32137
	.byte 0x00	@ 00032137 data
.org 0x32138
	.byte 0x60,0x2f,0x85,0x08	@ 00032138 data
.org 0x3213c
	.byte 0x88,0x2f,0x85,0x08	@ 0003213c data
.org 0x32140
	.byte 0x6c,0x33,0x85,0x08	@ 00032140 data
.org 0x32144
	adds r0, r6, #0	@ 00032144 301c
