@ FUN_08084244  entry 0x08084244  size 216
.thumb
.org 0x84244
FUN_08084244:
	push {r4, r5, lr}	@ 00084244 30b5
.org 0x84246
	sub sp, #8	@ 00084246 82b0
.org 0x84248
	adds r5, r0, #0	@ 00084248 051c
.org 0x8424a
	ldrb r0, [r5, #14]	@ 0008424a a87b
.org 0x8424c
	cmp r0, #0	@ 0008424c 0028
.org 0x8424e
	bne.n 0x842d8	@ 0008424e 43d1
.org 0x84250
	ldr r1, [pc, #68]	@ 00084250 1149
.org 0x84252
	adds r0, r5, #0	@ 00084252 281c
.org 0x84254
	bl 0x1cf00	@ 00084254 98f754fe
.org 0x84258
	ldr r0, [r5, #88]	@ 00084258 a86d
.org 0x8425a
	movs r1, #128	@ 0008425a 8021
.org 0x8425c
	lsls r1, r1, #4	@ 0008425c 0901
.org 0x8425e
	adds r0, r0, r1	@ 0008425e 4018
.org 0x84260
	str r0, [sp, #4]	@ 00084260 0190
.org 0x84262
	ldrb r1, [r5, #10]	@ 00084262 a97a
.org 0x84264
	movs r0, #16	@ 00084264 1020
.org 0x84266
	ands r0, r1	@ 00084266 0840
.org 0x84268
	cmp r0, #0	@ 00084268 0028
.org 0x8426a
	beq.n 0x842a0	@ 0008426a 19d0
.org 0x8426c
	ldr r0, [r5, #84]	@ 0008426c 686d
.org 0x8426e
	movs r2, #128	@ 0008426e 8022
.org 0x84270
	lsls r2, r2, #5	@ 00084270 5201
.org 0x84272
	adds r0, r0, r2	@ 00084272 8018
.org 0x84274
	str r0, [sp, #0]	@ 00084274 0090
.org 0x84276
	movs r4, #192	@ 00084276 c024
.org 0x84278
	lsls r4, r4, #1	@ 00084278 6400
.org 0x8427a
	mov r0, sp	@ 0008427a 6846
.org 0x8427c
	adds r1, r4, #0	@ 0008427c 211c
.org 0x8427e
	movs r2, #144	@ 0008427e 9022
.org 0x84280
	bl 0xbd43c	@ 00084280 39f0dcf8
.org 0x84284
	ldr r0, [r5, #88]	@ 00084284 a86d
.org 0x84286
	ldr r1, [pc, #20]	@ 00084286 0549
.org 0x84288
	adds r0, r0, r1	@ 00084288 4018
.org 0x8428a
	str r0, [sp, #4]	@ 0008428a 0190
.org 0x8428c
	mov r0, sp	@ 0008428c 6846
.org 0x8428e
	adds r1, r4, #0	@ 0008428e 211c
.org 0x84290
	movs r2, #112	@ 00084290 7022
.org 0x84292
	bl 0xbd43c	@ 00084292 39f0d3f8
.org 0x84296
	b.n 0x842c8	@ 00084296 17e0
.org 0x84298
	.byte 0x03,0x1c,0x00,0x00	@ 00084298 data
.org 0x8429c
	.byte 0x00,0xfb,0xff,0xff	@ 0008429c data
.org 0x842a0
	ldr r0, [r5, #84]	@ 000842a0 686d
.org 0x842a2
	ldr r2, [pc, #84]	@ 000842a2 154a
.org 0x842a4
	adds r0, r0, r2	@ 000842a4 8018
.org 0x842a6
	str r0, [sp, #0]	@ 000842a6 0090
.org 0x842a8
	movs r4, #192	@ 000842a8 c024
.org 0x842aa
	lsls r4, r4, #1	@ 000842aa 6400
.org 0x842ac
	mov r0, sp	@ 000842ac 6846
.org 0x842ae
	adds r1, r4, #0	@ 000842ae 211c
.org 0x842b0
	movs r2, #239	@ 000842b0 ef22
.org 0x842b2
	bl 0xbd43c	@ 000842b2 39f0c3f8
.org 0x842b6
	ldr r0, [r5, #88]	@ 000842b6 a86d
.org 0x842b8
	ldr r1, [pc, #64]	@ 000842b8 1049
.org 0x842ba
	adds r0, r0, r1	@ 000842ba 4018
.org 0x842bc
	str r0, [sp, #4]	@ 000842bc 0190
.org 0x842be
	mov r0, sp	@ 000842be 6846
.org 0x842c0
	adds r1, r4, #0	@ 000842c0 211c
.org 0x842c2
	movs r2, #16	@ 000842c2 1022
.org 0x842c4
	bl 0xbd43c	@ 000842c4 39f0baf8
.org 0x842c8
	movs r0, #44	@ 000842c8 2c20
.org 0x842ca
	bl 0x2b10	@ 000842ca 7ef721fc
.org 0x842ce
	movs r0, #48	@ 000842ce 3020
.org 0x842d0
	strb r0, [r5, #18]	@ 000842d0 a874
.org 0x842d2
	ldrb r0, [r5, #14]	@ 000842d2 a87b
.org 0x842d4
	adds r0, #1	@ 000842d4 0130
.org 0x842d6
	strb r0, [r5, #14]	@ 000842d6 a873
.org 0x842d8
	ldr r4, [r5, #44]	@ 000842d8 ec6a
.org 0x842da
	cmp r4, #0	@ 000842da 002c
.org 0x842dc
	bne.n 0x84300	@ 000842dc 10d1
.org 0x842de
	ldr r0, [r5, #84]	@ 000842de 686d
.org 0x842e0
	ldr r1, [r5, #88]	@ 000842e0 a96d
.org 0x842e2
	movs r2, #160	@ 000842e2 a022
.org 0x842e4
	lsls r2, r2, #4	@ 000842e4 1201
.org 0x842e6
	adds r1, r1, r2	@ 000842e6 8918
.org 0x842e8
	bl 0x7c7c	@ 000842e8 83f7c8fc
.org 0x842ec
	lsls r0, r0, #16	@ 000842ec 0004
.org 0x842ee
	cmp r0, #0	@ 000842ee 0028
.org 0x842f0
	beq.n 0x84300	@ 000842f0 06d0
.org 0x842f2
	strb r4, [r5, #13]	@ 000842f2 6c73
.org 0x842f4
	strb r4, [r5, #14]	@ 000842f4 ac73
.org 0x842f6
	b.n 0x84324	@ 000842f6 15e0
.org 0x842f8
	.byte 0x00,0xf0,0xff,0xff	@ 000842f8 data
.org 0x842fc
	.byte 0x00,0xfb,0xff,0xff	@ 000842fc data
.org 0x84300
	ldrb r0, [r5, #18]	@ 00084300 a87c
.org 0x84302
	subs r0, #1	@ 00084302 0138
.org 0x84304
	strb r0, [r5, #18]	@ 00084304 a874
.org 0x84306
	lsls r0, r0, #24	@ 00084306 0006
.org 0x84308
	lsrs r0, r0, #24	@ 00084308 000e
.org 0x8430a
	cmp r0, #255	@ 0008430a ff28
.org 0x8430c
	bne.n 0x84324	@ 0008430c 0ad1
.org 0x8430e
	ldr r1, [r5, #44]	@ 0008430e e96a
.org 0x84310
	cmp r1, #0	@ 00084310 0029
.org 0x84312
	beq.n 0x8431e	@ 00084312 04d0
.org 0x84314
	movs r0, #4	@ 00084314 0420
.org 0x84316
	strb r0, [r5, #13]	@ 00084316 6873
.org 0x84318
	movs r0, #0	@ 00084318 0020
.org 0x8431a
	strb r0, [r5, #14]	@ 0008431a a873
