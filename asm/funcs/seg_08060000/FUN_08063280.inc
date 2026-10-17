@ FUN_08063280  entry 0x08063280  size 162
.thumb
.org 0x63280
FUN_08063280:
	push {r4, r5, r6, lr}	@ 00063280 70b5
.org 0x63282
	adds r6, r0, #0	@ 00063282 061c
.org 0x63284
	ldrb r0, [r6, #10]	@ 00063284 b07a
.org 0x63286
	lsrs r4, r0, #4	@ 00063286 0409
.org 0x63288
	movs r0, #1	@ 00063288 0120
.org 0x6328a
	ands r4, r0	@ 0006328a 0440
.org 0x6328c
	ldrb r0, [r6, #15]	@ 0006328c f07b
.org 0x6328e
	cmp r0, #0	@ 0006328e 0028
.org 0x63290
	bne.n 0x632ae	@ 00063290 0dd1
.org 0x63292
	adds r0, r6, #0	@ 00063292 301c
.org 0x63294
	movs r1, #0	@ 00063294 0021
.org 0x63296
	bl 0x65a94	@ 00063296 02f0fdfb
.org 0x6329a
	lsls r0, r4, #1	@ 0006329a 6000
.org 0x6329c
	subs r0, #1	@ 0006329c 0138
.org 0x6329e
	lsls r0, r0, #9	@ 0006329e 4002
.org 0x632a0
	negs r0, r0	@ 000632a0 4042
.org 0x632a2
	str r0, [r6, #92]	@ 000632a2 f065
.org 0x632a4
	movs r0, #8	@ 000632a4 0820
.org 0x632a6
	strb r0, [r6, #18]	@ 000632a6 b074
.org 0x632a8
	ldrb r0, [r6, #15]	@ 000632a8 f07b
.org 0x632aa
	adds r0, #1	@ 000632aa 0130
.org 0x632ac
	strb r0, [r6, #15]	@ 000632ac f073
.org 0x632ae
	adds r0, r6, #0	@ 000632ae 301c
.org 0x632b0
	bl 0x1cff0	@ 000632b0 b9f79efe
.org 0x632b4
	adds r0, r6, #0	@ 000632b4 301c
.org 0x632b6
	adds r0, #116	@ 000632b6 7430
.org 0x632b8
	ldr r4, [pc, #104]	@ 000632b8 1a4c
.org 0x632ba
	ldr r3, [pc, #108]	@ 000632ba 1b4b
.org 0x632bc
	adds r1, r6, #0	@ 000632bc 311c
.org 0x632be
	adds r1, #180	@ 000632be b431
.org 0x632c0
	ldrb r2, [r1, #0]	@ 000632c0 0a78
.org 0x632c2
	lsls r1, r2, #1	@ 000632c2 5100
.org 0x632c4
	adds r1, r1, r3	@ 000632c4 c918
.org 0x632c6
	ldrh r1, [r1, #0]	@ 000632c6 0988
.org 0x632c8
	lsls r1, r1, #2	@ 000632c8 8900
.org 0x632ca
	adds r1, r1, r4	@ 000632ca 0919
.org 0x632cc
	adds r3, r6, #0	@ 000632cc 331c
.org 0x632ce
	adds r3, #113	@ 000632ce 7133
.org 0x632d0
	movs r5, #0	@ 000632d0 0025
.org 0x632d2
	ldrsb r5, [r3, r5]	@ 000632d2 5d57
.org 0x632d4
	ldr r1, [r1, #0]	@ 000632d4 0968
.org 0x632d6
	lsls r3, r5, #2	@ 000632d6 ab00
.org 0x632d8
	adds r3, r3, r1	@ 000632d8 5b18
.org 0x632da
	ldr r4, [pc, #80]	@ 000632da 144c
.org 0x632dc
	adds r1, r6, #0	@ 000632dc 311c
.org 0x632de
	adds r1, #181	@ 000632de b531
.org 0x632e0
	ldrb r1, [r1, #0]	@ 000632e0 0978
.org 0x632e2
	lsls r1, r1, #2	@ 000632e2 8900
.org 0x632e4
	adds r1, r1, r4	@ 000632e4 0919
.org 0x632e6
	ldr r1, [r1, #0]	@ 000632e6 0968
.org 0x632e8
	lsls r2, r2, #2	@ 000632e8 9200
.org 0x632ea
	adds r2, r2, r1	@ 000632ea 5218
.org 0x632ec
	ldr r1, [r2, #0]	@ 000632ec 1168
.org 0x632ee
	adds r1, r1, r5	@ 000632ee 4919
.org 0x632f0
	ldrb r1, [r1, #0]	@ 000632f0 0978
.org 0x632f2
	lsls r2, r1, #1	@ 000632f2 4a00
.org 0x632f4
	adds r2, r2, r1	@ 000632f4 5218
.org 0x632f6
	lsls r2, r2, #3	@ 000632f6 d200
.org 0x632f8
	ldr r1, [r3, #0]	@ 000632f8 1968
.org 0x632fa
	adds r1, r1, r2	@ 000632fa 8918
.org 0x632fc
	bl 0x5784	@ 000632fc a2f742fa
.org 0x63300
	ldr r0, [r6, #84]	@ 00063300 706d
.org 0x63302
	ldr r1, [r6, #92]	@ 00063302 f16d
.org 0x63304
	adds r0, r0, r1	@ 00063304 4018
.org 0x63306
	str r0, [r6, #84]	@ 00063306 7065
.org 0x63308
	ldrb r0, [r6, #18]	@ 00063308 b07c
.org 0x6330a
	subs r0, #1	@ 0006330a 0138
.org 0x6330c
	strb r0, [r6, #18]	@ 0006330c b074
.org 0x6330e
	lsls r0, r0, #24	@ 0006330e 0006
.org 0x63310
	lsrs r1, r0, #24	@ 00063310 010e
.org 0x63312
	cmp r1, #0	@ 00063312 0029
.org 0x63314
	bne.n 0x6331c	@ 00063314 02d1
.org 0x63316
	movs r0, #2	@ 00063316 0220
.org 0x63318
	strb r0, [r6, #14]	@ 00063318 b073
.org 0x6331a
	strb r1, [r6, #15]	@ 0006331a f173
.org 0x6331c
	pop {r4, r5, r6}	@ 0006331c 70bc
.org 0x6331e
	pop {r0}	@ 0006331e 01bc
.org 0x63320
	bx r0	@ 00063320 0047
