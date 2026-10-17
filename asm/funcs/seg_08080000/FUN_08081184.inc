@ FUN_08081184  entry 0x08081184  size 398
.thumb
.org 0x81184
FUN_08081184:
	push {r4, r5, r6, r7, lr}	@ 00081184 f0b5
.org 0x81186
	mov r7, r9	@ 00081186 4f46
.org 0x81188
	mov r6, r8	@ 00081188 4646
.org 0x8118a
	push {r6, r7}	@ 0008118a c0b4
.org 0x8118c
	sub sp, #56	@ 0008118c 8eb0
.org 0x8118e
	adds r5, r0, #0	@ 0008118e 051c
.org 0x81190
	ldr r4, [pc, #108]	@ 00081190 1b4c
.org 0x81192
	ldr r0, [r4, #0]	@ 00081192 2068
.org 0x81194
	mov r8, r0	@ 00081194 8046
.org 0x81196
	ldr r1, [pc, #108]	@ 00081196 1b49
.org 0x81198
	mov r0, sp	@ 00081198 6846
.org 0x8119a
	movs r2, #56	@ 0008119a 3822
.org 0x8119c
	bl 0x129258	@ 0008119c a8f05cf8
.org 0x811a0
	adds r0, r5, #0	@ 000811a0 281c
.org 0x811a2
	adds r0, #112	@ 000811a2 7030
.org 0x811a4
	ldrb r0, [r0, #0]	@ 000811a4 0078
.org 0x811a6
	adds r1, r5, #0	@ 000811a6 291c
.org 0x811a8
	adds r1, #113	@ 000811a8 7131
.org 0x811aa
	lsls r0, r0, #3	@ 000811aa c000
.org 0x811ac
	ldrb r1, [r1, #0]	@ 000811ac 0978
.org 0x811ae
	adds r0, r0, r1	@ 000811ae 4018
.org 0x811b0
	add r0, sp	@ 000811b0 6844
.org 0x811b2
	ldrb r0, [r0, #0]	@ 000811b2 0078
.org 0x811b4
	lsls r0, r0, #24	@ 000811b4 0006
.org 0x811b6
	asrs r0, r0, #24	@ 000811b6 0016
.org 0x811b8
	lsls r0, r0, #16	@ 000811b8 0004
.org 0x811ba
	lsrs r0, r0, #16	@ 000811ba 000c
.org 0x811bc
	mov r9, r0	@ 000811bc 8146
.org 0x811be
	mov r1, r8	@ 000811be 4146
.org 0x811c0
	cmp r1, #0	@ 000811c0 0029
.org 0x811c2
	beq.n 0x811de	@ 000811c2 0cd0
.org 0x811c4
	adds r0, r5, #0	@ 000811c4 281c
.org 0x811c6
	adds r0, #140	@ 000811c6 8c30
.org 0x811c8
	ldr r0, [r0, #0]	@ 000811c8 0068
.org 0x811ca
	movs r3, #128	@ 000811ca 8023
.org 0x811cc
	lsls r3, r3, #4	@ 000811cc 1b01
.org 0x811ce
	ands r0, r3	@ 000811ce 1840
.org 0x811d0
	cmp r0, #0	@ 000811d0 0028
.org 0x811d2
	beq.n 0x811de	@ 000811d2 04d0
.org 0x811d4
	mov r2, r9	@ 000811d4 4a46
.org 0x811d6
	lsls r0, r2, #16	@ 000811d6 1004
.org 0x811d8
	asrs r0, r0, #16	@ 000811d8 0014
.org 0x811da
	cmp r0, #127	@ 000811da 7f28
.org 0x811dc
	bne.n 0x81208	@ 000811dc 14d1
.org 0x811de
	adds r2, r5, #0	@ 000811de 2a1c
.org 0x811e0
	adds r2, #184	@ 000811e0 b832
.org 0x811e2
	adds r1, r5, #0	@ 000811e2 291c
.org 0x811e4
	adds r1, #188	@ 000811e4 bc31
.org 0x811e6
	movs r0, #0	@ 000811e6 0020
.org 0x811e8
	str r0, [r1, #0]	@ 000811e8 0860
.org 0x811ea
	str r0, [r2, #0]	@ 000811ea 1060
.org 0x811ec
	subs r1, #6	@ 000811ec 0639
.org 0x811ee
	strb r0, [r1, #0]	@ 000811ee 0870
.org 0x811f0
	subs r1, #1	@ 000811f0 0139
.org 0x811f2
	strb r0, [r1, #0]	@ 000811f2 0870
.org 0x811f4
	subs r1, #144	@ 000811f4 9039
.org 0x811f6
	movs r0, #24	@ 000811f6 1820
.org 0x811f8
	strb r0, [r1, #0]	@ 000811f8 0870
.org 0x811fa
	movs r0, #0	@ 000811fa 0020
.org 0x811fc
	b.n 0x8131c	@ 000811fc 8ee0
.org 0x811fe
	.byte 0x00	@ 000811fe data
.org 0x811ff
	.byte 0x00	@ 000811ff data
.org 0x81200
	.byte 0xf0,0xdb,0x02,0x02	@ 00081200 data
.org 0x81204
	.byte 0x4c,0x9a,0x12,0x08	@ 00081204 data
.org 0x81208
	lsls r0, r0, #24	@ 00081208 0006
.org 0x8120a
	lsrs r0, r0, #16	@ 0008120a 000c
.org 0x8120c
	mov r9, r0	@ 0008120c 8146
.org 0x8120e
	adds r0, r5, #0	@ 0008120e 281c
.org 0x81210
	adds r0, #181	@ 00081210 b530
.org 0x81212
	ldrb r1, [r0, #0]	@ 00081212 0178
.org 0x81214
	adds r6, r5, #0	@ 00081214 2e1c
.org 0x81216
	adds r6, #184	@ 00081216 b836
.org 0x81218
	adds r7, r5, #0	@ 00081218 2f1c
.org 0x8121a
	adds r7, #188	@ 0008121a bc37
.org 0x8121c
	mov ip, r0	@ 0008121c 8446
.org 0x8121e
	cmp r1, #0	@ 0008121e 0029
.org 0x81220
	bne.n 0x812e8	@ 00081220 62d1
.org 0x81222
	movs r0, #1	@ 00081222 0120
.org 0x81224
	mov r1, ip	@ 00081224 6146
.org 0x81226
	strb r0, [r1, #0]	@ 00081226 0870
.org 0x81228
	ldr r2, [r4, #0]	@ 00081228 2268
.org 0x8122a
	ldr r0, [r2, #84]	@ 0008122a 506d
.org 0x8122c
	ldr r1, [r5, #84]	@ 0008122c 696d
.org 0x8122e
	subs r0, r0, r1	@ 0008122e 401a
.org 0x81230
	str r0, [r6, #0]	@ 00081230 3060
.org 0x81232
	mov r1, r9	@ 00081232 4946
.org 0x81234
	lsls r0, r1, #16	@ 00081234 0804
.org 0x81236
	asrs r0, r0, #16	@ 00081236 0014
.org 0x81238
	ldr r1, [r5, #88]	@ 00081238 a96d
.org 0x8123a
	adds r1, r1, r0	@ 0008123a 0918
.org 0x8123c
	ldr r0, [r2, #88]	@ 0008123c 906d
.org 0x8123e
	subs r0, r0, r1	@ 0008123e 401a
.org 0x81240
	str r0, [r7, #0]	@ 00081240 3860
.org 0x81242
	ldr r0, [r6, #0]	@ 00081242 3068
.org 0x81244
	ldr r1, [pc, #8]	@ 00081244 0249
.org 0x81246
	cmp r0, r1	@ 00081246 8842
.org 0x81248
	bge.n 0x81254	@ 00081248 04da
.org 0x8124a
	str r1, [r6, #0]	@ 0008124a 3160
.org 0x8124c
	b.n 0x8125a	@ 0008124c 05e0
.org 0x8124e
	.byte 0x00	@ 0008124e data
.org 0x8124f
	.byte 0x00	@ 0008124f data
.org 0x81250
	.byte 0x00,0xf8,0xff,0xff	@ 00081250 data
.org 0x81254
	cmp r0, r3	@ 00081254 9842
.org 0x81256
	ble.n 0x8125a	@ 00081256 00dd
.org 0x81258
	str r3, [r6, #0]	@ 00081258 3360
.org 0x8125a
	ldr r0, [r7, #0]	@ 0008125a 3868
.org 0x8125c
	ldr r1, [pc, #36]	@ 0008125c 0949
.org 0x8125e
	cmp r0, r1	@ 0008125e 8842
.org 0x81260
	blt.n 0x8126a	@ 00081260 03db
.org 0x81262
	movs r1, #128	@ 00081262 8021
.org 0x81264
	lsls r1, r1, #3	@ 00081264 c900
.org 0x81266
	cmp r0, r1	@ 00081266 8842
.org 0x81268
	ble.n 0x8126c	@ 00081268 00dd
.org 0x8126a
	str r1, [r7, #0]	@ 0008126a 3960
.org 0x8126c
	ldr r0, [pc, #24]	@ 0008126c 0648
.org 0x8126e
	ldr r2, [r0, #0]	@ 0008126e 0268
.org 0x81270
	ldr r1, [r2, #84]	@ 00081270 516d
.org 0x81272
	adds r0, r5, #0	@ 00081272 281c
.org 0x81274
	adds r0, #192	@ 00081274 c030
.org 0x81276
	ldr r0, [r0, #0]	@ 00081276 0068
.org 0x81278
	cmp r1, r0	@ 00081278 8142
.org 0x8127a
	bge.n 0x8128c	@ 0008127a 07da
.org 0x8127c
	adds r1, r5, #0	@ 0008127c 291c
.org 0x8127e
	adds r1, #182	@ 0008127e b631
.org 0x81280
	movs r0, #1	@ 00081280 0120
.org 0x81282
	b.n 0x812a6	@ 00081282 10e0
.org 0x81284
	.byte 0x00,0xf8,0xff,0xff	@ 00081284 data
.org 0x81288
	.byte 0xf0,0xdb,0x02,0x02	@ 00081288 data
.org 0x8128c
	cmp r1, r0	@ 0008128c 8142
.org 0x8128e
	ble.n 0x81298	@ 0008128e 03dd
.org 0x81290
	adds r1, r5, #0	@ 00081290 291c
.org 0x81292
	adds r1, #182	@ 00081292 b631
.org 0x81294
	movs r0, #0	@ 00081294 0020
.org 0x81296
	b.n 0x812a6	@ 00081296 06e0
.org 0x81298
	ldrb r0, [r2, #10]	@ 00081298 907a
.org 0x8129a
	lsrs r0, r0, #4	@ 0008129a 0009
.org 0x8129c
	movs r1, #1	@ 0008129c 0121
.org 0x8129e
	eors r0, r1	@ 0008129e 4840
.org 0x812a0
	ands r0, r1	@ 000812a0 0840
.org 0x812a2
	adds r1, r5, #0	@ 000812a2 291c
.org 0x812a4
	adds r1, #182	@ 000812a4 b631
.org 0x812a6
	strb r0, [r1, #0]	@ 000812a6 0870
.org 0x812a8
	adds r0, r5, #0	@ 000812a8 281c
.org 0x812aa
	adds r0, #116	@ 000812aa 7430
.org 0x812ac
	ldr r4, [pc, #124]	@ 000812ac 1f4c
.org 0x812ae
	mov r2, ip	@ 000812ae 6246
.org 0x812b0
	ldrb r3, [r2, #0]	@ 000812b0 1378
.org 0x812b2
	lsls r3, r3, #2	@ 000812b2 9b00
.org 0x812b4
	ldrb r1, [r5, #30]	@ 000812b4 a97f
.org 0x812b6
	lsls r1, r1, #8	@ 000812b6 0902
.org 0x812b8
	adds r2, r5, #0	@ 000812b8 2a1c
.org 0x812ba
	adds r2, #112	@ 000812ba 7032
.org 0x812bc
	ldrb r2, [r2, #0]	@ 000812bc 1278
.org 0x812be
	orrs r1, r2	@ 000812be 1143
.org 0x812c0
	ldr r2, [pc, #108]	@ 000812c0 1b4a
.org 0x812c2
	adds r1, r1, r2	@ 000812c2 8918
.org 0x812c4
	lsls r1, r1, #3	@ 000812c4 c900
.org 0x812c6
	adds r3, r3, r1	@ 000812c6 5b18
.org 0x812c8
	adds r3, r3, r4	@ 000812c8 1b19
.org 0x812ca
	adds r1, r5, #0	@ 000812ca 291c
.org 0x812cc
	adds r1, #113	@ 000812cc 7131
.org 0x812ce
	ldrb r1, [r1, #0]	@ 000812ce 0978
.org 0x812d0
	lsls r1, r1, #24	@ 000812d0 0906
.org 0x812d2
	asrs r1, r1, #24	@ 000812d2 0916
.org 0x812d4
	ldr r2, [r3, #0]	@ 000812d4 1a68
.org 0x812d6
	lsls r1, r1, #2	@ 000812d6 8900
.org 0x812d8
	adds r1, r1, r2	@ 000812d8 8918
.org 0x812da
	ldr r1, [r1, #0]	@ 000812da 0968
.org 0x812dc
	bl 0x5784	@ 000812dc 84f752fa
.org 0x812e0
	adds r1, r5, #0	@ 000812e0 291c
.org 0x812e2
	adds r1, #37	@ 000812e2 2531
.org 0x812e4
	movs r0, #15	@ 000812e4 0f20
.org 0x812e6
	strb r0, [r1, #0]	@ 000812e6 0870
.org 0x812e8
	ldr r2, [pc, #72]	@ 000812e8 124a
.org 0x812ea
	add r2, r8	@ 000812ea 4244
.org 0x812ec
	movs r1, #0	@ 000812ec 0021
.org 0x812ee
	movs r0, #1	@ 000812ee 0120
.org 0x812f0
	strb r0, [r2, #0]	@ 000812f0 1070
.org 0x812f2
	movs r0, #185	@ 000812f2 b920
.org 0x812f4
	lsls r0, r0, #1	@ 000812f4 4000
.org 0x812f6
	add r0, r8	@ 000812f6 4044
.org 0x812f8
	strb r1, [r0, #0]	@ 000812f8 0170
.org 0x812fa
	mov r0, r8	@ 000812fa 4046
.org 0x812fc
	str r1, [r0, #96]	@ 000812fc 0166
.org 0x812fe
	ldr r0, [r5, #84]	@ 000812fe 686d
.org 0x81300
	ldr r1, [r6, #0]	@ 00081300 3168
.org 0x81302
	adds r0, r0, r1	@ 00081302 4018
.org 0x81304
	mov r1, r8	@ 00081304 4146
.org 0x81306
	str r0, [r1, #84]	@ 00081306 4865
.org 0x81308
	ldr r1, [r5, #88]	@ 00081308 a96d
.org 0x8130a
	ldr r0, [r7, #0]	@ 0008130a 3868
.org 0x8130c
	adds r1, r1, r0	@ 0008130c 0918
.org 0x8130e
	mov r2, r9	@ 0008130e 4a46
.org 0x81310
	lsls r0, r2, #16	@ 00081310 1004
