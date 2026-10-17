@ FUN_08074108  entry 0x08074108  size 996
.thumb
.org 0x74108
FUN_08074108:
	push {r4, r5, r6, r7, lr}	@ 00074108 f0b5
.org 0x7410a
	mov r7, sl	@ 0007410a 5746
.org 0x7410c
	mov r6, r9	@ 0007410c 4e46
.org 0x7410e
	mov r5, r8	@ 0007410e 4546
.org 0x74110
	push {r5, r6, r7}	@ 00074110 e0b4
.org 0x74112
	sub sp, #36	@ 00074112 89b0
.org 0x74114
	mov sl, r0	@ 00074114 8246
.org 0x74116
	ldrb r0, [r0, #14]	@ 00074116 807b
.org 0x74118
	cmp r0, #0	@ 00074118 0028
.org 0x7411a
	beq.n 0x7411e	@ 0007411a 00d0
.org 0x7411c
	b.n 0x74310	@ 0007411c f8e0
.org 0x7411e
	ldr r1, [pc, #140]	@ 0007411e 2349
.org 0x74120
	mov r0, sl	@ 00074120 5046
.org 0x74122
	bl 0x1cf00	@ 00074122 a8f7edfe
.org 0x74126
	mov r4, sl	@ 00074126 5446
.org 0x74128
	adds r4, #180	@ 00074128 b434
.org 0x7412a
	ldrh r1, [r4, #16]	@ 0007412a 218a
.org 0x7412c
	movs r0, #63	@ 0007412c 3f20
.org 0x7412e
	adds r2, r0, #0	@ 0007412e 021c
.org 0x74130
	ands r2, r1	@ 00074130 0a40
.org 0x74132
	movs r1, #64	@ 00074132 4021
.org 0x74134
	subs r2, r1, r2	@ 00074134 8a1a
.org 0x74136
	ldrh r3, [r4, #18]	@ 00074136 638a
.org 0x74138
	ands r0, r3	@ 00074138 1840
.org 0x7413a
	subs r1, r1, r0	@ 0007413a 091a
.org 0x7413c
	movs r0, #0	@ 0007413c 0020
.org 0x7413e
	mov r9, r0	@ 0007413e 8146
.org 0x74140
	str r4, [sp, #28]	@ 00074140 0794
.org 0x74142
	cmp r2, r1	@ 00074142 8a42
.org 0x74144
	ble.n 0x7414a	@ 00074144 01dd
.org 0x74146
	movs r1, #1	@ 00074146 0121
.org 0x74148
	mov r9, r1	@ 00074148 8946
.org 0x7414a
	movs r4, #0	@ 0007414a 0024
.org 0x7414c
	mov r6, sl	@ 0007414c 5646
.org 0x7414e
	adds r6, #212	@ 0007414e d436
.org 0x74150
	mov r2, sl	@ 00074150 5246
.org 0x74152
	adds r2, #204	@ 00074152 cc32
.org 0x74154
	str r2, [sp, #32]	@ 00074154 0892
.org 0x74156
	mov r3, sl	@ 00074156 5346
.org 0x74158
	adds r3, #140	@ 00074158 8c33
.org 0x7415a
	str r3, [sp, #16]	@ 0007415a 0493
.org 0x7415c
	mov r0, sl	@ 0007415c 5046
.org 0x7415e
	adds r0, #144	@ 0007415e 9030
.org 0x74160
	str r0, [sp, #20]	@ 00074160 0590
.org 0x74162
	mov r1, sl	@ 00074162 5146
.org 0x74164
	adds r1, #148	@ 00074164 9431
.org 0x74166
	str r1, [sp, #24]	@ 00074166 0691
.org 0x74168
	ldr r2, [sp, #28]	@ 00074168 079a
.org 0x7416a
	mov r8, r2	@ 0007416a 9046
.org 0x7416c
	adds r5, r6, #0	@ 0007416c 351c
.org 0x7416e
	movs r7, #1	@ 0007416e 0127
.org 0x74170
	movs r3, #63	@ 00074170 3f23
.org 0x74172
	mov ip, r3	@ 00074172 9c46
.org 0x74174
	mov r1, r8	@ 00074174 4146
.org 0x74176
	ldrb r0, [r1, #18]	@ 00074176 887c
.org 0x74178
	adds r0, #32	@ 00074178 2030
.org 0x7417a
	lsls r0, r0, #24	@ 0007417a 0006
.org 0x7417c
	lsrs r1, r0, #24	@ 0007417c 010e
.org 0x7417e
	cmp r1, #63	@ 0007417e 3f29
.org 0x74180
	bhi.n 0x741c4	@ 00074180 20d8
.org 0x74182
	adds r0, r4, #2	@ 00074182 a01c
.org 0x74184
	adds r0, r5, r0	@ 00074184 2818
.org 0x74186
	mov r3, r9	@ 00074186 4b46
.org 0x74188
	adds r2, r3, r4	@ 00074188 1a19
.org 0x7418a
	adds r3, r2, #0	@ 0007418a 131c
.org 0x7418c
	ands r3, r7	@ 0007418c 3b40
.org 0x7418e
	strb r3, [r0, #0]	@ 0007418e 0370
.org 0x74190
	ldr r0, [sp, #28]	@ 00074190 0798
.org 0x74192
	ldrh r1, [r0, #18]	@ 00074192 418a
.org 0x74194
	mov r0, ip	@ 00074194 6046
.org 0x74196
	ands r0, r1	@ 00074196 0840
.org 0x74198
	cmp r0, #31	@ 00074198 1f28
.org 0x7419a
	bhi.n 0x741b0	@ 0007419a 09d8
.org 0x7419c
	adds r0, r4, #4	@ 0007419c 201d
.org 0x7419e
	adds r0, r6, r0	@ 0007419e 3018
.org 0x741a0
	adds r1, r3, #2	@ 000741a0 991c
.org 0x741a2
	strb r1, [r0, #0]	@ 000741a2 0170
.org 0x741a4
	adds r1, r6, r4	@ 000741a4 3119
.org 0x741a6
	adds r0, r3, #4	@ 000741a6 181d
.org 0x741a8
	strb r0, [r1, #0]	@ 000741a8 0870
.org 0x741aa
	b.n 0x741be	@ 000741aa 08e0
.org 0x741ac
	.byte 0x01,0x93,0x00,0x00	@ 000741ac data
.org 0x741b0
	adds r1, r6, r4	@ 000741b0 3119
.org 0x741b2
	adds r0, r3, #2	@ 000741b2 981c
.org 0x741b4
	strb r0, [r1, #0]	@ 000741b4 0870
.org 0x741b6
	adds r0, r4, #4	@ 000741b6 201d
.org 0x741b8
	adds r0, r6, r0	@ 000741b8 3018
.org 0x741ba
	adds r1, r3, #4	@ 000741ba 191d
.org 0x741bc
	strb r1, [r0, #0]	@ 000741bc 0170
.org 0x741be
	adds r1, r4, #6	@ 000741be a11d
.org 0x741c0
	adds r1, r5, r1	@ 000741c0 6918
.org 0x741c2
	b.n 0x7427c	@ 000741c2 5be0
.org 0x741c4
	cmp r0, #0	@ 000741c4 0028
.org 0x741c6
	blt.n 0x74202	@ 000741c6 1cdb
.org 0x741c8
	adds r0, r5, r4	@ 000741c8 2819
.org 0x741ca
	mov r1, r9	@ 000741ca 4946
.org 0x741cc
	adds r2, r1, r4	@ 000741cc 0a19
.org 0x741ce
	adds r3, r2, #0	@ 000741ce 131c
.org 0x741d0
	ands r3, r7	@ 000741d0 3b40
.org 0x741d2
	strb r3, [r0, #0]	@ 000741d2 0370
.org 0x741d4
	mov r0, r8	@ 000741d4 4046
.org 0x741d6
	ldrh r1, [r0, #18]	@ 000741d6 418a
.org 0x741d8
	mov r0, ip	@ 000741d8 6046
.org 0x741da
	ands r0, r1	@ 000741da 0840
.org 0x741dc
	cmp r0, #31	@ 000741dc 1f28
.org 0x741de
	bhi.n 0x741ec	@ 000741de 05d8
.org 0x741e0
	adds r0, r4, #2	@ 000741e0 a01c
.org 0x741e2
	adds r0, r6, r0	@ 000741e2 3018
.org 0x741e4
	adds r1, r3, #2	@ 000741e4 991c
.org 0x741e6
	strb r1, [r0, #0]	@ 000741e6 0170
.org 0x741e8
	adds r0, r4, #6	@ 000741e8 a01d
.org 0x741ea
	b.n 0x741f6	@ 000741ea 04e0
.org 0x741ec
	adds r0, r4, #6	@ 000741ec a01d
.org 0x741ee
	adds r0, r6, r0	@ 000741ee 3018
.org 0x741f0
	adds r1, r3, #2	@ 000741f0 991c
.org 0x741f2
	strb r1, [r0, #0]	@ 000741f2 0170
.org 0x741f4
	adds r0, r4, #2	@ 000741f4 a01c
.org 0x741f6
	adds r0, r6, r0	@ 000741f6 3018
.org 0x741f8
	adds r1, r3, #4	@ 000741f8 191d
.org 0x741fa
	strb r1, [r0, #0]	@ 000741fa 0170
.org 0x741fc
	adds r1, r4, #4	@ 000741fc 211d
.org 0x741fe
	adds r1, r5, r1	@ 000741fe 6918
.org 0x74200
	b.n 0x7427c	@ 00074200 3ce0
.org 0x74202
	cmp r1, #191	@ 00074202 bf29
.org 0x74204
	bhi.n 0x74244	@ 00074204 1ed8
.org 0x74206
	adds r0, r4, #6	@ 00074206 a01d
.org 0x74208
	adds r0, r5, r0	@ 00074208 2818
.org 0x7420a
	mov r1, r9	@ 0007420a 4946
.org 0x7420c
	adds r2, r1, r4	@ 0007420c 0a19
.org 0x7420e
	adds r3, r2, #0	@ 0007420e 131c
.org 0x74210
	ands r3, r7	@ 00074210 3b40
.org 0x74212
	strb r3, [r0, #0]	@ 00074212 0370
.org 0x74214
	mov r0, r8	@ 00074214 4046
.org 0x74216
	ldrh r1, [r0, #18]	@ 00074216 418a
.org 0x74218
	mov r0, ip	@ 00074218 6046
.org 0x7421a
	ands r0, r1	@ 0007421a 0840
.org 0x7421c
	cmp r0, #31	@ 0007421c 1f28
.org 0x7421e
	bhi.n 0x74230	@ 0007421e 07d8
.org 0x74220
	adds r1, r6, r4	@ 00074220 3119
.org 0x74222
	adds r0, r3, #2	@ 00074222 981c
.org 0x74224
	strb r0, [r1, #0]	@ 00074224 0870
.org 0x74226
	adds r0, r4, #4	@ 00074226 201d
.org 0x74228
	adds r0, r6, r0	@ 00074228 3018
.org 0x7422a
	adds r1, r3, #4	@ 0007422a 191d
.org 0x7422c
	strb r1, [r0, #0]	@ 0007422c 0170
.org 0x7422e
	b.n 0x7423e	@ 0007422e 06e0
.org 0x74230
	adds r0, r4, #4	@ 00074230 201d
.org 0x74232
	adds r0, r6, r0	@ 00074232 3018
.org 0x74234
	adds r1, r3, #2	@ 00074234 991c
.org 0x74236
	strb r1, [r0, #0]	@ 00074236 0170
.org 0x74238
	adds r1, r6, r4	@ 00074238 3119
.org 0x7423a
	adds r0, r3, #4	@ 0007423a 181d
.org 0x7423c
	strb r0, [r1, #0]	@ 0007423c 0870
.org 0x7423e
	adds r1, r4, #2	@ 0007423e a11c
.org 0x74240
	adds r1, r5, r1	@ 00074240 6918
.org 0x74242
	b.n 0x7427c	@ 00074242 1be0
.org 0x74244
	adds r0, r4, #4	@ 00074244 201d
.org 0x74246
	adds r0, r5, r0	@ 00074246 2818
.org 0x74248
	mov r1, r9	@ 00074248 4946
.org 0x7424a
	adds r2, r1, r4	@ 0007424a 0a19
.org 0x7424c
	adds r3, r2, #0	@ 0007424c 131c
.org 0x7424e
	ands r3, r7	@ 0007424e 3b40
.org 0x74250
	strb r3, [r0, #0]	@ 00074250 0370
.org 0x74252
	mov r0, r8	@ 00074252 4046
.org 0x74254
	ldrh r1, [r0, #18]	@ 00074254 418a
.org 0x74256
	mov r0, ip	@ 00074256 6046
.org 0x74258
	ands r0, r1	@ 00074258 0840
.org 0x7425a
	cmp r0, #31	@ 0007425a 1f28
.org 0x7425c
	bhi.n 0x7426a	@ 0007425c 05d8
.org 0x7425e
	adds r0, r4, #6	@ 0007425e a01d
.org 0x74260
	adds r0, r6, r0	@ 00074260 3018
.org 0x74262
	adds r1, r3, #2	@ 00074262 991c
.org 0x74264
	strb r1, [r0, #0]	@ 00074264 0170
.org 0x74266
	adds r0, r4, #2	@ 00074266 a01c
.org 0x74268
	b.n 0x74274	@ 00074268 04e0
.org 0x7426a
	adds r0, r4, #2	@ 0007426a a01c
.org 0x7426c
	adds r0, r6, r0	@ 0007426c 3018
.org 0x7426e
	adds r1, r3, #2	@ 0007426e 991c
.org 0x74270
	strb r1, [r0, #0]	@ 00074270 0170
.org 0x74272
	adds r0, r4, #6	@ 00074272 a01d
.org 0x74274
	adds r0, r6, r0	@ 00074274 3018
.org 0x74276
	adds r1, r3, #4	@ 00074276 191d
.org 0x74278
	strb r1, [r0, #0]	@ 00074278 0170
.org 0x7427a
	adds r1, r5, r4	@ 0007427a 2919
.org 0x7427c
	ands r2, r7	@ 0007427c 3a40
.org 0x7427e
	adds r0, r2, #6	@ 0007427e 901d
.org 0x74280
	strb r0, [r1, #0]	@ 00074280 0870
.org 0x74282
	adds r0, r4, #1	@ 00074282 601c
.org 0x74284
	lsls r0, r0, #24	@ 00074284 0006
.org 0x74286
	lsrs r4, r0, #24	@ 00074286 040e
.org 0x74288
	cmp r4, #1	@ 00074288 012c
.org 0x7428a
	bhi.n 0x7428e	@ 0007428a 00d8
.org 0x7428c
	b.n 0x74174	@ 0007428c 72e7
.org 0x7428e
	movs r4, #0	@ 0007428e 0024
.org 0x74290
	ldr r1, [sp, #32]	@ 00074290 0899
.org 0x74292
	adds r0, r1, r4	@ 00074292 0819
.org 0x74294
	ldrb r0, [r0, #0]	@ 00074294 0078
.org 0x74296
	adds r7, r4, #1	@ 00074296 671c
.org 0x74298
	cmp r0, #0	@ 00074298 0028
.org 0x7429a
	beq.n 0x742ba	@ 0007429a 0ed0
.org 0x7429c
	movs r5, #0	@ 0007429c 0025
.org 0x7429e
	adds r1, r6, #0	@ 0007429e 311c
.org 0x742a0
	adds r4, r1, r4	@ 000742a0 0c19
.org 0x742a2
	adds r3, r1, r5	@ 000742a2 4b19
.org 0x742a4
	ldrb r2, [r3, #0]	@ 000742a4 1a78
.org 0x742a6
	ldrb r0, [r4, #0]	@ 000742a6 2078
.org 0x742a8
	cmp r0, r2	@ 000742a8 9042
.org 0x742aa
	bcs.n 0x742b0	@ 000742aa 01d2
.org 0x742ac
	subs r0, r2, #1	@ 000742ac 501e
.org 0x742ae
	strb r0, [r3, #0]	@ 000742ae 1870
.org 0x742b0
	adds r0, r5, #1	@ 000742b0 681c
.org 0x742b2
	lsls r0, r0, #24	@ 000742b2 0006
.org 0x742b4
	lsrs r5, r0, #24	@ 000742b4 050e
.org 0x742b6
	cmp r5, #7	@ 000742b6 072d
.org 0x742b8
	bls.n 0x742a2	@ 000742b8 f3d9
.org 0x742ba
	lsls r0, r7, #24	@ 000742ba 3806
.org 0x742bc
	lsrs r4, r0, #24	@ 000742bc 040e
.org 0x742be
	cmp r4, #7	@ 000742be 072c
.org 0x742c0
	bls.n 0x74290	@ 000742c0 e6d9
.org 0x742c2
	movs r4, #0	@ 000742c2 0024
.org 0x742c4
	movs r1, #0	@ 000742c4 0021
.org 0x742c6
	movs r0, #240	@ 000742c6 f020
.org 0x742c8
	ldr r2, [sp, #28]	@ 000742c8 079a
.org 0x742ca
	strh r0, [r2, #40]	@ 000742ca 1085
.org 0x742cc
	ldr r3, [sp, #16]	@ 000742cc 049b
.org 0x742ce
	str r1, [r3, #0]	@ 000742ce 1960
.org 0x742d0
	ldr r0, [sp, #20]	@ 000742d0 0598
.org 0x742d2
	str r1, [r0, #0]	@ 000742d2 0160
.org 0x742d4
	ldr r1, [sp, #24]	@ 000742d4 0699
.org 0x742d6
	strb r4, [r1, #0]	@ 000742d6 0c70
.org 0x742d8
	mov r2, sl	@ 000742d8 5246
.org 0x742da
	ldrb r1, [r2, #10]	@ 000742da 917a
.org 0x742dc
	movs r0, #251	@ 000742dc fb20
.org 0x742de
	ands r0, r1	@ 000742de 0840
.org 0x742e0
	strb r0, [r2, #10]	@ 000742e0 9072
.org 0x742e2
	ldr r3, [pc, #524]	@ 000742e2 834b
.org 0x742e4
	ldrh r2, [r3, #8]	@ 000742e4 1a89
.org 0x742e6
	movs r3, #1	@ 000742e6 0123
.org 0x742e8
	adds r0, r3, #0	@ 000742e8 181c
.org 0x742ea
	ands r0, r2	@ 000742ea 1040
.org 0x742ec
	cmp r0, #0	@ 000742ec 0028
.org 0x742ee
	beq.n 0x74308	@ 000742ee 0bd0
.org 0x742f0
	ldr r0, [pc, #508]	@ 000742f0 7f48
.org 0x742f2
	ldrb r1, [r0, #18]	@ 000742f2 817c
.org 0x742f4
	adds r0, r3, #0	@ 000742f4 181c
.org 0x742f6
	ands r0, r1	@ 000742f6 0840
.org 0x742f8
	cmp r0, #0	@ 000742f8 0028
.org 0x742fa
	bne.n 0x74308	@ 000742fa 05d1
.org 0x742fc
	ldr r0, [pc, #500]	@ 000742fc 7d48
.org 0x742fe
	ands r0, r2	@ 000742fe 1040
.org 0x74300
	movs r1, #16	@ 00074300 1021
.org 0x74302
	orrs r0, r1	@ 00074302 0843
.org 0x74304
	ldr r1, [pc, #488]	@ 00074304 7a49
.org 0x74306
	strh r0, [r1, #8]	@ 00074306 0881
.org 0x74308
	mov r2, sl	@ 00074308 5246
.org 0x7430a
	ldrb r0, [r2, #14]	@ 0007430a 907b
.org 0x7430c
	adds r0, #1	@ 0007430c 0130
.org 0x7430e
	strb r0, [r2, #14]	@ 0007430e 9073
.org 0x74310
	mov r0, sl	@ 00074310 5046
.org 0x74312
	bl 0x1cff0	@ 00074312 a8f76dfe
.org 0x74316
	mov r3, sl	@ 00074316 5346
.org 0x74318
	ldrb r0, [r3, #13]	@ 00074318 587b
.org 0x7431a
	cmp r0, #0	@ 0007431a 0028
.org 0x7431c
	beq.n 0x74320	@ 0007431c 00d0
.org 0x7431e
	b.n 0x744e0	@ 0007431e dfe0
.org 0x74320
	mov r2, sl	@ 00074320 5246
.org 0x74322
	adds r2, #180	@ 00074322 b432
.org 0x74324
	ldrh r1, [r2, #40]	@ 00074324 118d
.org 0x74326
	movs r0, #15	@ 00074326 0f20
.org 0x74328
	mov r8, r0	@ 00074328 8046
.org 0x7432a
	ands r0, r1	@ 0007432a 0840
.org 0x7432c
	str r2, [sp, #28]	@ 0007432c 0792
.org 0x7432e
	cmp r0, #0	@ 0007432e 0028
.org 0x74330
	bne.n 0x743f0	@ 00074330 5ed1
.org 0x74332
	ldr r7, [pc, #452]	@ 00074332 714f
.org 0x74334
	ldr r0, [r7, #0]	@ 00074334 3868
.org 0x74336
	ldr r6, [pc, #452]	@ 00074336 714e
.org 0x74338
	muls r0, r6	@ 00074338 7043
.org 0x7433a
	ldr r4, [pc, #452]	@ 0007433a 714c
.org 0x7433c
	adds r0, r0, r4	@ 0007433c 0019
.org 0x7433e
	lsls r0, r0, #1	@ 0007433e 4000
.org 0x74340
	lsrs r2, r0, #1	@ 00074340 4208
.org 0x74342
	lsrs r0, r0, #17	@ 00074342 400c
.org 0x74344
	mov r1, r8	@ 00074344 4146
.org 0x74346
	ands r0, r1	@ 00074346 0840
.org 0x74348
	movs r3, #8	@ 00074348 0823
.org 0x7434a
	subs r0, r3, r0	@ 0007434a 181a
.org 0x7434c
	lsls r0, r0, #8	@ 0007434c 0002
.org 0x7434e
	mov r3, sl	@ 0007434e 5346
.org 0x74350
	ldr r1, [r3, #84]	@ 00074350 596d
.org 0x74352
	adds r1, r1, r0	@ 00074352 0918
.org 0x74354
	str r1, [sp, #0]	@ 00074354 0091
.org 0x74356
	adds r0, r2, #0	@ 00074356 101c
.org 0x74358
	muls r0, r6	@ 00074358 7043
.org 0x7435a
	adds r0, r0, r4	@ 0007435a 0019
.org 0x7435c
	lsls r0, r0, #1	@ 0007435c 4000
.org 0x7435e
	lsrs r5, r0, #1	@ 0007435e 4508
.org 0x74360
	str r5, [r7, #0]	@ 00074360 3d60
.org 0x74362
	lsrs r0, r0, #17	@ 00074362 400c
.org 0x74364
	movs r1, #24	@ 00074364 1821
.org 0x74366
	bl 0x129198	@ 00074366 b4f017ff
.org 0x7436a
	movs r1, #12	@ 0007436a 0c21
.org 0x7436c
	mov r9, r1	@ 0007436c 8946
.org 0x7436e
	subs r0, r1, r0	@ 0007436e 081a
.org 0x74370
	lsls r0, r0, #8	@ 00074370 0002
.org 0x74372
	mov r2, sl	@ 00074372 5246
.org 0x74374
	ldr r1, [r2, #88]	@ 00074374 916d
.org 0x74376
	adds r1, r1, r0	@ 00074376 0918
.org 0x74378
	str r1, [sp, #4]	@ 00074378 0191
.org 0x7437a
	adds r1, r5, #0	@ 0007437a 291c
.org 0x7437c
	muls r1, r6	@ 0007437c 7143
.org 0x7437e
	adds r1, r1, r4	@ 0007437e 0919
.org 0x74380
	lsls r1, r1, #1	@ 00074380 4900
.org 0x74382
	lsrs r0, r1, #1	@ 00074382 4808
.org 0x74384
	str r0, [r7, #0]	@ 00074384 3860
.org 0x74386
	lsrs r1, r1, #17	@ 00074386 490c
.org 0x74388
	lsls r1, r1, #24	@ 00074388 0906
.org 0x7438a
	lsrs r1, r1, #24	@ 0007438a 090e
.org 0x7438c
	movs r2, #224	@ 0007438c e022
.org 0x7438e
	lsls r2, r2, #1	@ 0007438e 5200
.org 0x74390
	mov r0, sp	@ 00074390 6846
.org 0x74392
	bl 0xe1b14	@ 00074392 6df0bffb
.org 0x74396
	movs r0, #53	@ 00074396 3520
.org 0x74398
	bl 0x2b10	@ 00074398 8ef7bafb
.org 0x7439c
	ldr r3, [sp, #28]	@ 0007439c 079b
.org 0x7439e
	ldrh r1, [r3, #40]	@ 0007439e 198d
.org 0x743a0
	mov r0, r8	@ 000743a0 4046
.org 0x743a2
	ands r0, r1	@ 000743a2 0840
.org 0x743a4
	cmp r0, #0	@ 000743a4 0028
.org 0x743a6
	bne.n 0x743f0	@ 000743a6 23d1
.org 0x743a8
	ldr r0, [r7, #0]	@ 000743a8 3868
.org 0x743aa
	muls r0, r6	@ 000743aa 7043
.org 0x743ac
	adds r0, r0, r4	@ 000743ac 0019
.org 0x743ae
	lsls r0, r0, #1	@ 000743ae 4000
.org 0x743b0
	lsrs r2, r0, #1	@ 000743b0 4208
.org 0x743b2
	lsrs r0, r0, #17	@ 000743b2 400c
.org 0x743b4
	mov r1, r8	@ 000743b4 4146
.org 0x743b6
	ands r0, r1	@ 000743b6 0840
.org 0x743b8
	movs r3, #8	@ 000743b8 0823
.org 0x743ba
	subs r0, r3, r0	@ 000743ba 181a
.org 0x743bc
	lsls r0, r0, #8	@ 000743bc 0002
.org 0x743be
	mov r3, sl	@ 000743be 5346
.org 0x743c0
	ldr r1, [r3, #84]	@ 000743c0 596d
.org 0x743c2
	adds r1, r1, r0	@ 000743c2 0918
.org 0x743c4
	str r1, [sp, #8]	@ 000743c4 0291
.org 0x743c6
	adds r0, r2, #0	@ 000743c6 101c
.org 0x743c8
	muls r0, r6	@ 000743c8 7043
.org 0x743ca
	adds r0, r0, r4	@ 000743ca 0019
.org 0x743cc
	lsls r0, r0, #1	@ 000743cc 4000
.org 0x743ce
	lsrs r1, r0, #1	@ 000743ce 4108
.org 0x743d0
	str r1, [r7, #0]	@ 000743d0 3960
.org 0x743d2
	lsrs r0, r0, #17	@ 000743d2 400c
.org 0x743d4
	movs r1, #24	@ 000743d4 1821
.org 0x743d6
	bl 0x129198	@ 000743d6 b4f0dffe
.org 0x743da
	mov r1, r9	@ 000743da 4946
.org 0x743dc
	subs r0, r1, r0	@ 000743dc 081a
.org 0x743de
	lsls r0, r0, #8	@ 000743de 0002
.org 0x743e0
	mov r3, sl	@ 000743e0 5346
.org 0x743e2
	ldr r2, [r3, #88]	@ 000743e2 9a6d
.org 0x743e4
	adds r2, r2, r0	@ 000743e4 1218
.org 0x743e6
	add r1, sp, #8	@ 000743e6 02a9
.org 0x743e8
	str r2, [r1, #4]	@ 000743e8 4a60
.org 0x743ea
	movs r0, #2	@ 000743ea 0220
.org 0x743ec
	bl 0xd0c88	@ 000743ec 5cf04cfc
.org 0x743f0
	ldr r1, [sp, #28]	@ 000743f0 0799
.org 0x743f2
	ldrh r0, [r1, #40]	@ 000743f2 088d
.org 0x743f4
	subs r0, #1	@ 000743f4 0138
.org 0x743f6
	strh r0, [r1, #40]	@ 000743f6 0885
.org 0x743f8
	lsls r0, r0, #16	@ 000743f8 0004
.org 0x743fa
	ldr r1, [pc, #264]	@ 000743fa 4249
.org 0x743fc
	cmp r0, r1	@ 000743fc 8842
.org 0x743fe
	bne.n 0x744e0	@ 000743fe 6fd1
.org 0x74400
	mov r2, sl	@ 00074400 5246
.org 0x74402
	ldrb r1, [r2, #10]	@ 00074402 917a
.org 0x74404
	movs r0, #254	@ 00074404 fe20
.org 0x74406
	ands r0, r1	@ 00074406 0840
.org 0x74408
	strb r0, [r2, #10]	@ 00074408 9072
.org 0x7440a
	movs r3, #84	@ 0007440a 5423
.org 0x7440c
	add r3, sl	@ 0007440c 5344
.org 0x7440e
	mov r9, r3	@ 0007440e 9946
.org 0x74410
	movs r0, #1	@ 00074410 0120
.org 0x74412
	mov r1, r9	@ 00074412 4946
.org 0x74414
	bl 0xd0c88	@ 00074414 5cf038fc
.org 0x74418
	ldr r7, [pc, #236]	@ 00074418 3b4f
.org 0x7441a
	ldr r4, [pc, #220]	@ 0007441a 374c
.org 0x7441c
	ldr r0, [r4, #0]	@ 0007441c 2068
.org 0x7441e
	ldr r1, [pc, #220]	@ 0007441e 3749
.org 0x74420
	mov r8, r1	@ 00074420 8846
.org 0x74422
	mov r3, r8	@ 00074422 4346
.org 0x74424
	muls r3, r0	@ 00074424 4343
.org 0x74426
	ldr r6, [pc, #216]	@ 00074426 364e
.org 0x74428
	adds r3, r3, r6	@ 00074428 9b19
.org 0x7442a
	lsls r3, r3, #1	@ 0007442a 5b00
.org 0x7442c
	lsrs r0, r3, #1	@ 0007442c 5808
.org 0x7442e
	str r0, [r4, #0]	@ 0007442e 2060
.org 0x74430
	lsrs r3, r3, #17	@ 00074430 5b0c
.org 0x74432
	movs r5, #1	@ 00074432 0125
.org 0x74434
	ands r3, r5	@ 00074434 2b40
.org 0x74436
	lsls r3, r3, #4	@ 00074436 1b01
.org 0x74438
	mov r0, r9	@ 00074438 4846
.org 0x7443a
	adds r1, r7, #0	@ 0007443a 391c
.org 0x7443c
	movs r2, #0	@ 0007443c 0022
.org 0x7443e
	bl 0xd4c8c	@ 0007443e 60f025fc
.org 0x74442
	adds r1, r7, #0	@ 00074442 391c
.org 0x74444
	adds r1, #28	@ 00074444 1c31
.org 0x74446
	ldr r0, [r4, #0]	@ 00074446 2068
.org 0x74448
	mov r3, r8	@ 00074448 4346
.org 0x7444a
	muls r3, r0	@ 0007444a 4343
.org 0x7444c
	adds r3, r3, r6	@ 0007444c 9b19
.org 0x7444e
	lsls r3, r3, #1	@ 0007444e 5b00
.org 0x74450
	lsrs r0, r3, #1	@ 00074450 5808
.org 0x74452
	str r0, [r4, #0]	@ 00074452 2060
.org 0x74454
	lsrs r3, r3, #17	@ 00074454 5b0c
.org 0x74456
	ands r3, r5	@ 00074456 2b40
.org 0x74458
	lsls r3, r3, #4	@ 00074458 1b01
.org 0x7445a
	mov r0, r9	@ 0007445a 4846
.org 0x7445c
	movs r2, #0	@ 0007445c 0022
.org 0x7445e
	bl 0xd4c8c	@ 0007445e 60f015fc
.org 0x74462
	adds r1, r7, #0	@ 00074462 391c
.org 0x74464
	adds r1, #56	@ 00074464 3831
.org 0x74466
	ldr r0, [r4, #0]	@ 00074466 2068
.org 0x74468
	mov r3, r8	@ 00074468 4346
.org 0x7446a
	muls r3, r0	@ 0007446a 4343
.org 0x7446c
	adds r3, r3, r6	@ 0007446c 9b19
.org 0x7446e
	lsls r3, r3, #1	@ 0007446e 5b00
.org 0x74470
	lsrs r0, r3, #1	@ 00074470 5808
.org 0x74472
	str r0, [r4, #0]	@ 00074472 2060
.org 0x74474
	lsrs r3, r3, #17	@ 00074474 5b0c
.org 0x74476
	ands r3, r5	@ 00074476 2b40
.org 0x74478
	lsls r3, r3, #4	@ 00074478 1b01
.org 0x7447a
	mov r0, r9	@ 0007447a 4846
.org 0x7447c
	movs r2, #0	@ 0007447c 0022
.org 0x7447e
	bl 0xd4c8c	@ 0007447e 60f005fc
.org 0x74482
	adds r1, r7, #0	@ 00074482 391c
.org 0x74484
	adds r1, #84	@ 00074484 5431
.org 0x74486
	ldr r0, [r4, #0]	@ 00074486 2068
.org 0x74488
	mov r3, r8	@ 00074488 4346
.org 0x7448a
	muls r3, r0	@ 0007448a 4343
.org 0x7448c
	adds r3, r3, r6	@ 0007448c 9b19
.org 0x7448e
	lsls r3, r3, #1	@ 0007448e 5b00
.org 0x74490
	lsrs r0, r3, #1	@ 00074490 5808
.org 0x74492
	str r0, [r4, #0]	@ 00074492 2060
.org 0x74494
	lsrs r3, r3, #17	@ 00074494 5b0c
.org 0x74496
	ands r3, r5	@ 00074496 2b40
.org 0x74498
	lsls r3, r3, #4	@ 00074498 1b01
.org 0x7449a
	mov r0, r9	@ 0007449a 4846
.org 0x7449c
	movs r2, #0	@ 0007449c 0022
.org 0x7449e
	bl 0xd4c8c	@ 0007449e 60f0f5fb
.org 0x744a2
	adds r1, r7, #0	@ 000744a2 391c
.org 0x744a4
	adds r1, #112	@ 000744a4 7031
.org 0x744a6
	ldr r0, [r4, #0]	@ 000744a6 2068
.org 0x744a8
	mov r3, r8	@ 000744a8 4346
.org 0x744aa
	muls r3, r0	@ 000744aa 4343
.org 0x744ac
	adds r3, r3, r6	@ 000744ac 9b19
.org 0x744ae
	lsls r3, r3, #1	@ 000744ae 5b00
.org 0x744b0
	lsrs r0, r3, #1	@ 000744b0 5808
.org 0x744b2
	str r0, [r4, #0]	@ 000744b2 2060
.org 0x744b4
	lsrs r3, r3, #17	@ 000744b4 5b0c
.org 0x744b6
	ands r3, r5	@ 000744b6 2b40
.org 0x744b8
	lsls r3, r3, #4	@ 000744b8 1b01
.org 0x744ba
	mov r0, r9	@ 000744ba 4846
.org 0x744bc
	movs r2, #0	@ 000744bc 0022
.org 0x744be
	bl 0xd4c8c	@ 000744be 60f0e5fb
.org 0x744c2
	movs r0, #42	@ 000744c2 2a20
.org 0x744c4
	bl 0x2b10	@ 000744c4 8ef724fb
.org 0x744c8
	ldr r2, [pc, #36]	@ 000744c8 094a
.org 0x744ca
	ldrb r1, [r2, #18]	@ 000744ca 917c
.org 0x744cc
	movs r0, #2	@ 000744cc 0220
.org 0x744ce
	orrs r0, r1	@ 000744ce 0843
.org 0x744d0
	strb r0, [r2, #18]	@ 000744d0 9074
.org 0x744d2
	movs r0, #64	@ 000744d2 4020
.org 0x744d4
	ldr r2, [sp, #28]	@ 000744d4 079a
.org 0x744d6
	strh r0, [r2, #40]	@ 000744d6 1085
.org 0x744d8
	mov r3, sl	@ 000744d8 5346
.org 0x744da
	ldrb r0, [r3, #13]	@ 000744da 587b
.org 0x744dc
	adds r0, #1	@ 000744dc 0130
.org 0x744de
	strb r0, [r3, #13]	@ 000744de 5873
.org 0x744e0
	add sp, #36	@ 000744e0 09b0
.org 0x744e2
	pop {r3, r4, r5}	@ 000744e2 38bc
.org 0x744e4
	mov r8, r3	@ 000744e4 9846
.org 0x744e6
	mov r9, r4	@ 000744e6 a146
.org 0x744e8
	mov sl, r5	@ 000744e8 aa46
.org 0x744ea
	pop {r4, r5, r6, r7}	@ 000744ea f0bc
