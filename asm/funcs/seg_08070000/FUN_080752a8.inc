@ FUN_080752a8  entry 0x080752a8  size 196
.thumb
.org 0x752a8
FUN_080752a8:
	push {r4, lr}	@ 000752a8 10b5
.org 0x752aa
	adds r4, r0, #0	@ 000752aa 041c
.org 0x752ac
	ldrb r0, [r4, #14]	@ 000752ac a07b
.org 0x752ae
	cmp r0, #0	@ 000752ae 0028
.org 0x752b0
	bne.n 0x752e4	@ 000752b0 18d1
.org 0x752b2
	ldr r1, [pc, #24]	@ 000752b2 0649
.org 0x752b4
	adds r0, r4, #0	@ 000752b4 201c
.org 0x752b6
	bl 0x1cf00	@ 000752b6 a7f723fe
.org 0x752ba
	ldr r0, [pc, #20]	@ 000752ba 0548
.org 0x752bc
	ldrh r0, [r0, #0]	@ 000752bc 0088
.org 0x752be
	cmp r0, #3	@ 000752be 0328
.org 0x752c0
	bne.n 0x752d4	@ 000752c0 08d1
.org 0x752c2
	movs r0, #212	@ 000752c2 d420
.org 0x752c4
	bl 0x2b10	@ 000752c4 8df724fc
.org 0x752c8
	b.n 0x752da	@ 000752c8 07e0
.org 0x752ca
	.byte 0x00	@ 000752ca data
.org 0x752cb
	.byte 0x00	@ 000752cb data
.org 0x752cc
	.byte 0x19,0xaf,0x00,0x00	@ 000752cc data
.org 0x752d0
	.byte 0x10,0xe9,0x02,0x02	@ 000752d0 data
.org 0x752d4
	movs r0, #213	@ 000752d4 d520
.org 0x752d6
	bl 0x2b10	@ 000752d6 8df71bfc
.org 0x752da
	movs r0, #0	@ 000752da 0020
.org 0x752dc
	strb r0, [r4, #15]	@ 000752dc e073
.org 0x752de
	ldrb r0, [r4, #14]	@ 000752de a07b
.org 0x752e0
	adds r0, #1	@ 000752e0 0130
.org 0x752e2
	strb r0, [r4, #14]	@ 000752e2 a073
.org 0x752e4
	adds r0, r4, #0	@ 000752e4 201c
.org 0x752e6
	bl 0x1cff0	@ 000752e6 a7f783fe
.org 0x752ea
	ldrb r2, [r4, #15]	@ 000752ea e27b
.org 0x752ec
	cmp r2, #1	@ 000752ec 012a
.org 0x752ee
	beq.n 0x7533c	@ 000752ee 25d0
.org 0x752f0
	cmp r2, #1	@ 000752f0 012a
.org 0x752f2
	bgt.n 0x752fa	@ 000752f2 02dc
.org 0x752f4
	cmp r2, #0	@ 000752f4 002a
.org 0x752f6
	beq.n 0x75300	@ 000752f6 03d0
.org 0x752f8
	b.n 0x75376	@ 000752f8 3de0
.org 0x752fa
	cmp r2, #2	@ 000752fa 022a
.org 0x752fc
	beq.n 0x75360	@ 000752fc 30d0
.org 0x752fe
	b.n 0x75376	@ 000752fe 3ae0
.org 0x75300
	adds r0, r4, #0	@ 00075300 201c
.org 0x75302
	adds r0, #113	@ 00075302 7130
.org 0x75304
	ldrb r0, [r0, #0]	@ 00075304 0078
.org 0x75306
	lsls r0, r0, #24	@ 00075306 0006
.org 0x75308
	asrs r0, r0, #24	@ 00075308 0016
.org 0x7530a
	cmp r0, #0	@ 0007530a 0028
.org 0x7530c
	bne.n 0x7532c	@ 0007530c 0ed1
.org 0x7530e
	adds r0, r4, #0	@ 0007530e 201c
.org 0x75310
	adds r0, #114	@ 00075310 7230
.org 0x75312
	ldrb r0, [r0, #0]	@ 00075312 0078
.org 0x75314
	lsls r0, r0, #24	@ 00075314 0006
.org 0x75316
	asrs r0, r0, #24	@ 00075316 0016
.org 0x75318
	cmp r0, #1	@ 00075318 0128
.org 0x7531a
	bgt.n 0x7532c	@ 0007531a 07dc
.org 0x7531c
	adds r1, r4, #0	@ 0007531c 211c
.org 0x7531e
	adds r1, #84	@ 0007531e 5431
.org 0x75320
	movs r0, #1	@ 00075320 0120
.org 0x75322
	bl 0x1fe64	@ 00075322 aaf79ffd
.org 0x75326
	movs r0, #222	@ 00075326 de20
.org 0x75328
	bl 0x2b10	@ 00075328 8df7f2fb
.org 0x7532c
	adds r0, r4, #0	@ 0007532c 201c
.org 0x7532e
	adds r0, #115	@ 0007532e 7330
.org 0x75330
	ldrb r0, [r0, #0]	@ 00075330 0078
.org 0x75332
	cmp r0, #3	@ 00075332 0328
.org 0x75334
	bne.n 0x75376	@ 00075334 1fd1
.org 0x75336
	movs r0, #0	@ 00075336 0020
.org 0x75338
	strb r0, [r4, #18]	@ 00075338 a074
.org 0x7533a
	b.n 0x75370	@ 0007533a 19e0
.org 0x7533c
	ldrb r0, [r4, #18]	@ 0007533c a07c
.org 0x7533e
	adds r1, r0, #1	@ 0007533e 411c
.org 0x75340
	strb r1, [r4, #18]	@ 00075340 a174
.org 0x75342
	lsls r0, r0, #24	@ 00075342 0006
.org 0x75344
	lsrs r0, r0, #24	@ 00075344 000e
.org 0x75346
	cmp r0, #32	@ 00075346 2028
.org 0x75348
	bls.n 0x75376	@ 00075348 15d9
.org 0x7534a
	ldr r1, [pc, #16]	@ 0007534a 0449
.org 0x7534c
	adds r0, r4, #0	@ 0007534c 201c
.org 0x7534e
	bl 0x1cf00	@ 0007534e a7f7d7fd
.org 0x75352
	adds r0, r4, #0	@ 00075352 201c
.org 0x75354
	bl 0x1cff0	@ 00075354 a7f74cfe
.org 0x75358
	b.n 0x75370	@ 00075358 0ae0
.org 0x7535a
	.byte 0x00	@ 0007535a data
.org 0x7535b
	.byte 0x00	@ 0007535b data
.org 0x7535c
	.byte 0x01,0xaf,0x00,0x00	@ 0007535c data
.org 0x75360
	ldr r0, [pc, #24]	@ 00075360 0648
.org 0x75362
	ldrb r0, [r0, #18]	@ 00075362 807c
.org 0x75364
	movs r1, #1	@ 00075364 0121
.org 0x75366
	ands r1, r0	@ 00075366 0140
.org 0x75368
	cmp r1, #0	@ 00075368 0029
.org 0x7536a
	bne.n 0x75376	@ 0007536a 04d1
