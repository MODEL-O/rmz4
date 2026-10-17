@ FUN_080fe1ac  entry 0x080fe1ac  size 280
.thumb
.org 0xfe1ac
FUN_080fe1ac:
	push {r4, r5, r6, r7, lr}	@ 000fe1ac f0b5
.org 0xfe1ae
	mov r7, sl	@ 000fe1ae 5746
.org 0xfe1b0
	mov r6, r9	@ 000fe1b0 4e46
.org 0xfe1b2
	mov r5, r8	@ 000fe1b2 4546
.org 0xfe1b4
	push {r5, r6, r7}	@ 000fe1b4 e0b4
.org 0xfe1b6
	adds r5, r0, #0	@ 000fe1b6 051c
.org 0xfe1b8
	movs r0, #0	@ 000fe1b8 0020
.org 0xfe1ba
	mov r8, r0	@ 000fe1ba 8046
.org 0xfe1bc
	movs r7, #0	@ 000fe1bc 0027
.org 0xfe1be
	ldrb r0, [r5, #18]	@ 000fe1be a87c
.org 0xfe1c0
	cmp r0, #0	@ 000fe1c0 0028
.org 0xfe1c2
	beq.n 0xfe1ca	@ 000fe1c2 02d0
.org 0xfe1c4
	subs r0, #1	@ 000fe1c4 0138
.org 0xfe1c6
	strb r0, [r5, #18]	@ 000fe1c6 a874
.org 0xfe1c8
	b.n 0xfe2ce	@ 000fe1c8 81e0
.org 0xfe1ca
	adds r4, r5, #0	@ 000fe1ca 2c1c
.org 0xfe1cc
	adds r4, #84	@ 000fe1cc 5434
.org 0xfe1ce
	adds r0, r4, #0	@ 000fe1ce 201c
.org 0xfe1d0
	movs r1, #1	@ 000fe1d0 0121
.org 0xfe1d2
	bl 0xfe4d0	@ 000fe1d2 00f07df9
.org 0xfe1d6
	ldr r1, [r5, #84]	@ 000fe1d6 696d
.org 0xfe1d8
	mov r9, r1	@ 000fe1d8 8946
.org 0xfe1da
	ldr r6, [r5, #88]	@ 000fe1da ae6d
.org 0xfe1dc
	ldr r2, [pc, #84]	@ 000fe1dc 154a
.org 0xfe1de
	adds r2, r2, r6	@ 000fe1de 9219
.org 0xfe1e0
	mov sl, r2	@ 000fe1e0 9246
.org 0xfe1e2
	ldr r0, [pc, #84]	@ 000fe1e2 1548
.org 0xfe1e4
	adds r1, r6, r0	@ 000fe1e4 3118
.org 0xfe1e6
	mov r0, r9	@ 000fe1e6 4846
.org 0xfe1e8
	bl 0x146bc	@ 000fe1e8 16f768fa
.org 0xfe1ec
	lsls r0, r0, #16	@ 000fe1ec 0004
.org 0xfe1ee
	cmp r0, #0	@ 000fe1ee 0028
.org 0xfe1f0
	beq.n 0xfe1f8	@ 000fe1f0 02d0
.org 0xfe1f2
	movs r1, #1	@ 000fe1f2 0121
.org 0xfe1f4
	mov r8, r1	@ 000fe1f4 8846
.org 0xfe1f6
	movs r7, #1	@ 000fe1f6 0127
.org 0xfe1f8
	movs r2, #128	@ 000fe1f8 8022
.org 0xfe1fa
	lsls r2, r2, #4	@ 000fe1fa 1201
.org 0xfe1fc
	adds r1, r6, r2	@ 000fe1fc b118
.org 0xfe1fe
	mov r0, r9	@ 000fe1fe 4846
.org 0xfe200
	bl 0x146bc	@ 000fe200 16f75cfa
.org 0xfe204
	lsls r0, r0, #16	@ 000fe204 0004
.org 0xfe206
	cmp r0, #0	@ 000fe206 0028
.org 0xfe208
	beq.n 0xfe218	@ 000fe208 06d0
.org 0xfe20a
	mov r0, r8	@ 000fe20a 4046
.org 0xfe20c
	adds r0, #1	@ 000fe20c 0130
.org 0xfe20e
	lsls r0, r0, #24	@ 000fe20e 0006
.org 0xfe210
	lsrs r0, r0, #24	@ 000fe210 000e
.org 0xfe212
	mov r8, r0	@ 000fe212 8046
.org 0xfe214
	movs r0, #4	@ 000fe214 0420
.org 0xfe216
	orrs r7, r0	@ 000fe216 0743
.org 0xfe218
	mov r0, r8	@ 000fe218 4046
.org 0xfe21a
	cmp r0, #0	@ 000fe21a 0028
.org 0xfe21c
	bne.n 0xfe240	@ 000fe21c 10d1
.org 0xfe21e
	ldr r1, [pc, #28]	@ 000fe21e 0749
.org 0xfe220
	ldrb r0, [r5, #9]	@ 000fe220 687a
.org 0xfe222
	lsls r0, r0, #2	@ 000fe222 8000
.org 0xfe224
	adds r0, r0, r1	@ 000fe224 4018
.org 0xfe226
	movs r1, #2	@ 000fe226 0221
.org 0xfe228
	str r1, [r5, #12]	@ 000fe228 e960
.org 0xfe22a
	ldr r0, [r0, #0]	@ 000fe22a 0068
.org 0xfe22c
	ldr r0, [r0, #8]	@ 000fe22c 8068
.org 0xfe22e
	str r0, [r5, #20]	@ 000fe22e 6861
.org 0xfe230
	b.n 0xfe2ce	@ 000fe230 4de0
.org 0xfe232
	.byte 0x00	@ 000fe232 data
.org 0xfe233
	.byte 0x00	@ 000fe233 data
.org 0xfe234
	.byte 0x00,0xf8,0xff,0xff	@ 000fe234 data
.org 0xfe238
	.byte 0x00,0xe8,0xff,0xff	@ 000fe238 data
.org 0xfe23c
	.byte 0xfc,0x92,0x86,0x08	@ 000fe23c data
.org 0xfe240
	ldr r0, [pc, #36]	@ 000fe240 0948
.org 0xfe242
	ldr r0, [r0, #0]	@ 000fe242 0068
.org 0xfe244
	movs r2, #10	@ 000fe244 0a22
.org 0xfe246
	ldrsh r1, [r0, r2]	@ 000fe246 815e
.org 0xfe248
	mov r0, r8	@ 000fe248 4046
.org 0xfe24a
	subs r0, #1	@ 000fe24a 0138
.org 0xfe24c
	cmp r1, r0	@ 000fe24c 8142
.org 0xfe24e
	blt.n 0xfe2ce	@ 000fe24e 3edb
.org 0xfe250
	movs r0, #1	@ 000fe250 0120
.org 0xfe252
	ands r0, r7	@ 000fe252 3840
.org 0xfe254
	cmp r0, #0	@ 000fe254 0028
.org 0xfe256
	beq.n 0xfe270	@ 000fe256 0bd0
.org 0xfe258
	ldr r0, [r5, #88]	@ 000fe258 a86d
.org 0xfe25a
	ldr r1, [pc, #16]	@ 000fe25a 0449
.org 0xfe25c
	adds r0, r0, r1	@ 000fe25c 4018
.org 0xfe25e
	str r0, [r5, #88]	@ 000fe25e a865
.org 0xfe260
	movs r0, #1	@ 000fe260 0120
.org 0xfe262
	eors r7, r0	@ 000fe262 4740
.org 0xfe264
	b.n 0xfe28a	@ 000fe264 11e0
.org 0xfe266
	.byte 0x00	@ 000fe266 data
.org 0xfe267
	.byte 0x00	@ 000fe267 data
.org 0xfe268
	.byte 0xa0,0xed,0x02,0x02	@ 000fe268 data
.org 0xfe26c
	.byte 0x00,0xf0,0xff,0xff	@ 000fe26c data
.org 0xfe270
	movs r0, #4	@ 000fe270 0420
.org 0xfe272
	ands r0, r7	@ 000fe272 3840
.org 0xfe274
	cmp r0, #0	@ 000fe274 0028
.org 0xfe276
	beq.n 0xfe28a	@ 000fe276 08d0
.org 0xfe278
	ldr r0, [r5, #88]	@ 000fe278 a86d
.org 0xfe27a
	movs r2, #128	@ 000fe27a 8022
.org 0xfe27c
	lsls r2, r2, #5	@ 000fe27c 5201
.org 0xfe27e
	adds r0, r0, r2	@ 000fe27e 8018
.org 0xfe280
	str r0, [r5, #88]	@ 000fe280 a865
.org 0xfe282
	movs r0, #4	@ 000fe282 0420
.org 0xfe284
	eors r7, r0	@ 000fe284 4740
.org 0xfe286
	lsls r0, r7, #24	@ 000fe286 3806
.org 0xfe288
	lsrs r7, r0, #24	@ 000fe288 070e
.org 0xfe28a
	adds r0, r4, #0	@ 000fe28a 201c
.org 0xfe28c
	movs r1, #0	@ 000fe28c 0021
.org 0xfe28e
	bl 0xfe4d0	@ 000fe28e 00f01ff9
.org 0xfe292
	ldr r0, [r5, #84]	@ 000fe292 686d
.org 0xfe294
	ldr r1, [r5, #88]	@ 000fe294 a96d
.org 0xfe296
	ldr r2, [pc, #68]	@ 000fe296 114a
.org 0xfe298
	adds r1, r1, r2	@ 000fe298 8918
.org 0xfe29a
	bl 0x14720	@ 000fe29a 16f741fa
.org 0xfe29e
	movs r0, #1	@ 000fe29e 0120
.org 0xfe2a0
	ands r0, r7	@ 000fe2a0 3840
.org 0xfe2a2
	cmp r0, #0	@ 000fe2a2 0028
.org 0xfe2a4
	beq.n 0xfe2b2	@ 000fe2a4 05d0
.org 0xfe2a6
	ldr r2, [pc, #56]	@ 000fe2a6 0e4a
.org 0xfe2a8
	add r2, sl	@ 000fe2a8 5244
.org 0xfe2aa
	adds r0, r5, #0	@ 000fe2aa 281c
.org 0xfe2ac
	mov r1, r9	@ 000fe2ac 4946
.org 0xfe2ae
	bl 0xfe400	@ 000fe2ae 00f0a7f8
.org 0xfe2b2
	movs r0, #4	@ 000fe2b2 0420
.org 0xfe2b4
	ands r7, r0	@ 000fe2b4 0740
.org 0xfe2b6
	cmp r7, #0	@ 000fe2b6 002f
.org 0xfe2b8
	beq.n 0xfe2c8	@ 000fe2b8 06d0
.org 0xfe2ba
	movs r2, #128	@ 000fe2ba 8022
.org 0xfe2bc
	lsls r2, r2, #5	@ 000fe2bc 5201
.org 0xfe2be
	add r2, sl	@ 000fe2be 5244
.org 0xfe2c0
	adds r0, r5, #0	@ 000fe2c0 281c
.org 0xfe2c2
	mov r1, r9	@ 000fe2c2 4946
