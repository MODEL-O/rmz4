@ FUN_080ab128  entry 0x080ab128  size 418
.thumb
.org 0xab128
FUN_080ab128:
	push {r4, r5, r6, r7, lr}	@ 000ab128 f0b5
.org 0xab12a
	mov r7, r8	@ 000ab12a 4746
.org 0xab12c
	push {r7}	@ 000ab12c 80b4
.org 0xab12e
	sub sp, #8	@ 000ab12e 82b0
.org 0xab130
	adds r6, r0, #0	@ 000ab130 061c
.org 0xab132
	ldrb r0, [r6, #10]	@ 000ab132 b07a
.org 0xab134
	lsrs r0, r0, #4	@ 000ab134 0009
.org 0xab136
	mov r8, r0	@ 000ab136 8046
.org 0xab138
	movs r0, #1	@ 000ab138 0120
.org 0xab13a
	mov r1, r8	@ 000ab13a 4146
.org 0xab13c
	ands r1, r0	@ 000ab13c 0140
.org 0xab13e
	mov r8, r1	@ 000ab13e 8846
.org 0xab140
	ldrb r4, [r6, #15]	@ 000ab140 f47b
.org 0xab142
	cmp r4, #0	@ 000ab142 002c
.org 0xab144
	bne.n 0xab166	@ 000ab144 0fd1
.org 0xab146
	ldr r1, [pc, #120]	@ 000ab146 1e49
.org 0xab148
	adds r0, r6, #0	@ 000ab148 301c
.org 0xab14a
	bl 0x1cf00	@ 000ab14a 71f7d9fe
.org 0xab14e
	mov r3, r8	@ 000ab14e 4346
.org 0xab150
	lsls r1, r3, #1	@ 000ab150 5900
.org 0xab152
	subs r1, #1	@ 000ab152 0139
.org 0xab154
	lsls r0, r1, #2	@ 000ab154 8800
.org 0xab156
	adds r0, r0, r1	@ 000ab156 4018
.org 0xab158
	lsls r0, r0, #6	@ 000ab158 8001
.org 0xab15a
	str r0, [r6, #92]	@ 000ab15a f065
.org 0xab15c
	str r4, [r6, #96]	@ 000ab15c 3466
.org 0xab15e
	str r4, [r6, #100]	@ 000ab15e 7466
.org 0xab160
	ldrb r0, [r6, #15]	@ 000ab160 f07b
.org 0xab162
	adds r0, #1	@ 000ab162 0130
.org 0xab164
	strb r0, [r6, #15]	@ 000ab164 f073
.org 0xab166
	adds r0, r6, #0	@ 000ab166 301c
.org 0xab168
	bl 0x1cff0	@ 000ab168 71f742ff
.org 0xab16c
	adds r0, r6, #0	@ 000ab16c 301c
.org 0xab16e
	adds r0, #116	@ 000ab16e 7430
.org 0xab170
	ldr r1, [pc, #80]	@ 000ab170 1449
.org 0xab172
	bl 0x5784	@ 000ab172 5af707fb
.org 0xab176
	ldr r0, [r6, #84]	@ 000ab176 706d
.org 0xab178
	ldr r1, [r6, #88]	@ 000ab178 b16d
.org 0xab17a
	str r0, [sp, #0]	@ 000ab17a 0090
.org 0xab17c
	str r1, [sp, #4]	@ 000ab17c 0191
.org 0xab17e
	ldr r5, [r6, #84]	@ 000ab17e 756d
.org 0xab180
	ldr r0, [r6, #88]	@ 000ab180 b06d
.org 0xab182
	adds r4, r0, #1	@ 000ab182 441c
.org 0xab184
	adds r0, r5, #0	@ 000ab184 281c
.org 0xab186
	adds r1, r4, #0	@ 000ab186 211c
.org 0xab188
	bl 0x7c7c	@ 000ab188 5cf778fd
.org 0xab18c
	lsls r0, r0, #16	@ 000ab18c 0004
.org 0xab18e
	lsrs r7, r0, #16	@ 000ab18e 070c
.org 0xab190
	cmp r7, #0	@ 000ab190 002f
.org 0xab192
	bne.n 0xab1da	@ 000ab192 22d1
.org 0xab194
	ldr r0, [r6, #88]	@ 000ab194 b06d
.org 0xab196
	ldr r1, [r6, #96]	@ 000ab196 316e
.org 0xab198
	adds r0, r0, r1	@ 000ab198 4018
.org 0xab19a
	str r0, [r6, #88]	@ 000ab19a b065
.org 0xab19c
	ldr r4, [r6, #84]	@ 000ab19c 746d
.org 0xab19e
	adds r5, r0, #1	@ 000ab19e 451c
.org 0xab1a0
	adds r0, r4, #0	@ 000ab1a0 201c
.org 0xab1a2
	adds r1, r5, #0	@ 000ab1a2 291c
.org 0xab1a4
	bl 0x7c7c	@ 000ab1a4 5cf76afd
.org 0xab1a8
	lsls r0, r0, #16	@ 000ab1a8 0004
.org 0xab1aa
	cmp r0, #0	@ 000ab1aa 0028
.org 0xab1ac
	beq.n 0xab1c8	@ 000ab1ac 0cd0
.org 0xab1ae
	adds r0, r4, #0	@ 000ab1ae 201c
.org 0xab1b0
	adds r1, r5, #0	@ 000ab1b0 291c
.org 0xab1b2
	bl 0x8534	@ 000ab1b2 5df7bff9
.org 0xab1b6
	subs r0, #1	@ 000ab1b6 0138
.org 0xab1b8
	str r0, [r6, #88]	@ 000ab1b8 b065
.org 0xab1ba
	str r7, [r6, #96]	@ 000ab1ba 3766
.org 0xab1bc
	b.n 0xab1ea	@ 000ab1bc 15e0
.org 0xab1be
	.byte 0x00	@ 000ab1be data
.org 0xab1bf
	.byte 0x00	@ 000ab1bf data
.org 0xab1c0
	.byte 0x03,0x90,0x00,0x00	@ 000ab1c0 data
.org 0xab1c4
	.byte 0xe4,0x2b,0x86,0x08	@ 000ab1c4 data
.org 0xab1c8
	ldr r0, [r6, #96]	@ 000ab1c8 306e
.org 0xab1ca
	adds r0, #64	@ 000ab1ca 4030
.org 0xab1cc
	str r0, [r6, #96]	@ 000ab1cc 3066
.org 0xab1ce
	movs r1, #224	@ 000ab1ce e021
.org 0xab1d0
	lsls r1, r1, #3	@ 000ab1d0 c900
.org 0xab1d2
	cmp r0, r1	@ 000ab1d2 8842
.org 0xab1d4
	ble.n 0xab1ea	@ 000ab1d4 09dd
.org 0xab1d6
	str r1, [r6, #96]	@ 000ab1d6 3166
.org 0xab1d8
	b.n 0xab1ea	@ 000ab1d8 07e0
.org 0xab1da
	adds r0, r5, #0	@ 000ab1da 281c
.org 0xab1dc
	adds r1, r4, #0	@ 000ab1dc 211c
.org 0xab1de
	bl 0x8534	@ 000ab1de 5df7a9f9
.org 0xab1e2
	subs r0, #1	@ 000ab1e2 0138
.org 0xab1e4
	str r0, [r6, #88]	@ 000ab1e4 b065
.org 0xab1e6
	movs r0, #0	@ 000ab1e6 0020
.org 0xab1e8
	str r0, [r6, #96]	@ 000ab1e8 3066
.org 0xab1ea
	ldr r0, [r6, #84]	@ 000ab1ea 706d
.org 0xab1ec
	ldr r1, [r6, #92]	@ 000ab1ec f16d
.org 0xab1ee
	adds r0, r0, r1	@ 000ab1ee 4018
.org 0xab1f0
	str r0, [r6, #84]	@ 000ab1f0 7065
.org 0xab1f2
	cmp r1, #0	@ 000ab1f2 0029
.org 0xab1f4
	bge.n 0xab236	@ 000ab1f4 1fda
.org 0xab1f6
	ldr r4, [r6, #84]	@ 000ab1f6 746d
.org 0xab1f8
	ldr r5, [r6, #88]	@ 000ab1f8 b56d
.org 0xab1fa
	adds r0, r4, #0	@ 000ab1fa 201c
.org 0xab1fc
	adds r1, r5, #0	@ 000ab1fc 291c
.org 0xab1fe
	bl 0x7c7c	@ 000ab1fe 5cf73dfd
.org 0xab202
	lsls r0, r0, #16	@ 000ab202 0004
.org 0xab204
	cmp r0, #0	@ 000ab204 0028
.org 0xab206
	beq.n 0xab28e	@ 000ab206 42d0
.org 0xab208
	adds r0, r4, #0	@ 000ab208 201c
.org 0xab20a
	adds r1, r5, #0	@ 000ab20a 291c
.org 0xab20c
	bl 0x8988	@ 000ab20c 5df7bcfb
.org 0xab210
	str r0, [r6, #84]	@ 000ab210 7065
.org 0xab212
	mov r0, r8	@ 000ab212 4046
.org 0xab214
	adds r0, #1	@ 000ab214 0130
.org 0xab216
	movs r1, #1	@ 000ab216 0121
.org 0xab218
	ands r0, r1	@ 000ab218 0840
.org 0xab21a
	adds r2, r0, #0	@ 000ab21a 021c
.org 0xab21c
	cmp r2, #0	@ 000ab21c 002a
.org 0xab21e
	beq.n 0xab228	@ 000ab21e 03d0
.org 0xab220
	ldrb r1, [r6, #10]	@ 000ab220 b17a
.org 0xab222
	movs r0, #16	@ 000ab222 1020
.org 0xab224
	orrs r0, r1	@ 000ab224 0843
.org 0xab226
	b.n 0xab22e	@ 000ab226 02e0
.org 0xab228
	ldrb r1, [r6, #10]	@ 000ab228 b17a
.org 0xab22a
	movs r0, #239	@ 000ab22a ef20
.org 0xab22c
	ands r0, r1	@ 000ab22c 0840
.org 0xab22e
	strb r0, [r6, #10]	@ 000ab22e b072
.org 0xab230
	movs r1, #1	@ 000ab230 0121
.org 0xab232
	ands r1, r2	@ 000ab232 1140
.org 0xab234
	b.n 0xab270	@ 000ab234 1ce0
.org 0xab236
	ldr r4, [r6, #84]	@ 000ab236 746d
.org 0xab238
	ldr r5, [r6, #88]	@ 000ab238 b56d
.org 0xab23a
	adds r0, r4, #0	@ 000ab23a 201c
.org 0xab23c
	adds r1, r5, #0	@ 000ab23c 291c
.org 0xab23e
	bl 0x7c7c	@ 000ab23e 5cf71dfd
.org 0xab242
	lsls r0, r0, #16	@ 000ab242 0004
.org 0xab244
	cmp r0, #0	@ 000ab244 0028
.org 0xab246
	beq.n 0xab28e	@ 000ab246 22d0
.org 0xab248
	adds r0, r4, #0	@ 000ab248 201c
.org 0xab24a
	adds r1, r5, #0	@ 000ab24a 291c
.org 0xab24c
	bl 0x8868	@ 000ab24c 5df70cfb
.org 0xab250
	str r0, [r6, #84]	@ 000ab250 7065
.org 0xab252
	mov r2, r8	@ 000ab252 4246
.org 0xab254
	adds r2, #1	@ 000ab254 0132
.org 0xab256
	movs r0, #1	@ 000ab256 0120
.org 0xab258
	ands r2, r0	@ 000ab258 0240
.org 0xab25a
	cmp r2, #0	@ 000ab25a 002a
.org 0xab25c
	beq.n 0xab266	@ 000ab25c 03d0
.org 0xab25e
	ldrb r1, [r6, #10]	@ 000ab25e b17a
.org 0xab260
	movs r0, #16	@ 000ab260 1020
.org 0xab262
	orrs r0, r1	@ 000ab262 0843
.org 0xab264
	b.n 0xab26c	@ 000ab264 02e0
.org 0xab266
	ldrb r1, [r6, #10]	@ 000ab266 b17a
.org 0xab268
	movs r0, #239	@ 000ab268 ef20
.org 0xab26a
	ands r0, r1	@ 000ab26a 0840
.org 0xab26c
	strb r0, [r6, #10]	@ 000ab26c b072
.org 0xab26e
	adds r1, r2, #0	@ 000ab26e 111c
.org 0xab270
	adds r0, r6, #0	@ 000ab270 301c
.org 0xab272
	adds r0, #76	@ 000ab272 4c30
.org 0xab274
	strb r1, [r0, #0]	@ 000ab274 0170
.org 0xab276
	adds r3, r6, #0	@ 000ab276 331c
.org 0xab278
	adds r3, #74	@ 000ab278 4a33
.org 0xab27a
	lsls r1, r1, #4	@ 000ab27a 0901
.org 0xab27c
	ldrb r2, [r3, #0]	@ 000ab27c 1a78
.org 0xab27e
	movs r0, #17	@ 000ab27e 1120
.org 0xab280
	negs r0, r0	@ 000ab280 4042
.org 0xab282
	ands r0, r2	@ 000ab282 1040
.org 0xab284
	orrs r0, r1	@ 000ab284 0843
.org 0xab286
	strb r0, [r3, #0]	@ 000ab286 1870
.org 0xab288
	ldr r0, [r6, #92]	@ 000ab288 f06d
.org 0xab28a
	negs r0, r0	@ 000ab28a 4042
.org 0xab28c
	str r0, [r6, #92]	@ 000ab28c f065
.org 0xab28e
	ldr r2, [r6, #100]	@ 000ab28e 726e
.org 0xab290
	ldr r0, [r6, #84]	@ 000ab290 706d
.org 0xab292
	ldr r3, [sp, #0]	@ 000ab292 009b
.org 0xab294
	subs r1, r0, r3	@ 000ab294 c11a
.org 0xab296
	cmp r1, #0	@ 000ab296 0029
.org 0xab298
	blt.n 0xab29e	@ 000ab298 01db
.org 0xab29a
	adds r2, r2, r1	@ 000ab29a 5218
.org 0xab29c
	b.n 0xab2a4	@ 000ab29c 02e0
.org 0xab29e
	ldr r1, [sp, #0]	@ 000ab29e 0099
.org 0xab2a0
	subs r0, r1, r0	@ 000ab2a0 081a
.org 0xab2a2
	adds r2, r2, r0	@ 000ab2a2 1218
.org 0xab2a4
	str r2, [r6, #100]	@ 000ab2a4 7266
.org 0xab2a6
	adds r0, r6, #0	@ 000ab2a6 301c
.org 0xab2a8
	adds r0, #180	@ 000ab2a8 b430
.org 0xab2aa
	movs r3, #0	@ 000ab2aa 0023
.org 0xab2ac
	ldrsh r1, [r0, r3]	@ 000ab2ac c15e
.org 0xab2ae
	cmp r1, #0	@ 000ab2ae 0029
.org 0xab2b0
	bne.n 0xab2bc	@ 000ab2b0 04d1
.org 0xab2b2
	movs r0, #6	@ 000ab2b2 0620
.org 0xab2b4
	strb r0, [r6, #13]	@ 000ab2b4 7073
.org 0xab2b6
	strb r1, [r6, #14]	@ 000ab2b6 b173
.org 0xab2b8
	strb r1, [r6, #15]	@ 000ab2b8 f173
.org 0xab2ba
	b.n 0xab2c8	@ 000ab2ba 05e0
.org 0xab2bc
	ldr r0, [pc, #20]	@ 000ab2bc 0548
.org 0xab2be
	cmp r2, r0	@ 000ab2be 8242
.org 0xab2c0
	ble.n 0xab2c8	@ 000ab2c0 02dd
.org 0xab2c2
	adds r0, r6, #0	@ 000ab2c2 301c
.org 0xab2c4
	bl 0xab610	@ 000ab2c4 00f0a4f9
.org 0xab2c8
	add sp, #8	@ 000ab2c8 02b0
