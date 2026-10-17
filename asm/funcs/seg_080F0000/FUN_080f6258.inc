@ FUN_080f6258  entry 0x080f6258  size 184
.thumb
.org 0xf6258
FUN_080f6258:
	push {r4, r5, r6, r7, lr}	@ 000f6258 f0b5
.org 0xf625a
	adds r6, r0, #0	@ 000f625a 061c
.org 0xf625c
	ldrb r1, [r6, #10]	@ 000f625c b17a
.org 0xf625e
	movs r0, #1	@ 000f625e 0120
.org 0xf6260
	movs r7, #0	@ 000f6260 0027
.org 0xf6262
	movs r5, #0	@ 000f6262 0025
.org 0xf6264
	orrs r0, r1	@ 000f6264 0843
.org 0xf6266
	movs r1, #2	@ 000f6266 0221
.org 0xf6268
	orrs r0, r1	@ 000f6268 0843
.org 0xf626a
	strb r0, [r6, #10]	@ 000f626a b072
.org 0xf626c
	adds r0, r6, #0	@ 000f626c 301c
.org 0xf626e
	bl 0x1cd28	@ 000f626e 26f75bfd
.org 0xf6272
	adds r0, r6, #0	@ 000f6272 301c
.org 0xf6274
	adds r0, #92	@ 000f6274 5c30
.org 0xf6276
	str r0, [r6, #64]	@ 000f6276 3064
.org 0xf6278
	ldrb r0, [r6, #10]	@ 000f6278 b07a
.org 0xf627a
	movs r1, #4	@ 000f627a 0421
.org 0xf627c
	orrs r0, r1	@ 000f627c 0843
.org 0xf627e
	strb r0, [r6, #10]	@ 000f627e b072
.org 0xf6280
	adds r4, r6, #0	@ 000f6280 341c
.org 0xf6282
	adds r4, #116	@ 000f6282 7434
.org 0xf6284
	ldr r1, [pc, #48]	@ 000f6284 0c49
.org 0xf6286
	adds r2, r6, #0	@ 000f6286 321c
.org 0xf6288
	adds r2, #84	@ 000f6288 5432
.org 0xf628a
	adds r0, r4, #0	@ 000f628a 201c
.org 0xf628c
	movs r3, #0	@ 000f628c 0023
.org 0xf628e
	bl 0x5760	@ 000f628e 0ff767fa
.org 0xf6292
	str r6, [r4, #44]	@ 000f6292 e662
.org 0xf6294
	str r5, [r4, #36]	@ 000f6294 6562
.org 0xf6296
	ldrb r0, [r6, #11]	@ 000f6296 f07a
.org 0xf6298
	movs r1, #8	@ 000f6298 0821
.org 0xf629a
	orrs r0, r1	@ 000f629a 0843
.org 0xf629c
	strb r0, [r6, #11]	@ 000f629c f072
.org 0xf629e
	ldr r0, [pc, #28]	@ 000f629e 0748
.org 0xf62a0
	str r0, [r6, #48]	@ 000f62a0 3063
.org 0xf62a2
	ldr r0, [pc, #28]	@ 000f62a2 0748
.org 0xf62a4
	strh r0, [r6, #38]	@ 000f62a4 f084
.org 0xf62a6
	ldrb r0, [r6, #17]	@ 000f62a6 707c
.org 0xf62a8
	movs r2, #1	@ 000f62a8 0122
.org 0xf62aa
	ands r2, r0	@ 000f62aa 0240
.org 0xf62ac
	cmp r2, #0	@ 000f62ac 002a
.org 0xf62ae
	beq.n 0xf62c4	@ 000f62ae 09d0
.org 0xf62b0
	ldrb r0, [r6, #10]	@ 000f62b0 b07a
.org 0xf62b2
	movs r1, #16	@ 000f62b2 1021
.org 0xf62b4
	orrs r0, r1	@ 000f62b4 0843
.org 0xf62b6
	b.n 0xf62ca	@ 000f62b6 08e0
.org 0xf62b8
	.byte 0xb0,0xa1,0x86,0x08	@ 000f62b8 data
.org 0xf62bc
	.byte 0xc8,0xa1,0x86,0x08	@ 000f62bc data
.org 0xf62c0
	.byte 0x01,0x20,0x00,0x00	@ 000f62c0 data
.org 0xf62c4
	ldrb r1, [r6, #10]	@ 000f62c4 b17a
.org 0xf62c6
	movs r0, #239	@ 000f62c6 ef20
.org 0xf62c8
	ands r0, r1	@ 000f62c8 0840
.org 0xf62ca
	strb r0, [r6, #10]	@ 000f62ca b072
.org 0xf62cc
	adds r1, r2, #0	@ 000f62cc 111c
.org 0xf62ce
	adds r0, r6, #0	@ 000f62ce 301c
.org 0xf62d0
	adds r0, #76	@ 000f62d0 4c30
.org 0xf62d2
	movs r4, #0	@ 000f62d2 0024
.org 0xf62d4
	strb r1, [r0, #0]	@ 000f62d4 0170
.org 0xf62d6
	adds r3, r6, #0	@ 000f62d6 331c
.org 0xf62d8
	adds r3, #74	@ 000f62d8 4a33
.org 0xf62da
	lsls r1, r1, #4	@ 000f62da 0901
.org 0xf62dc
	ldrb r2, [r3, #0]	@ 000f62dc 1a78
.org 0xf62de
	movs r0, #17	@ 000f62de 1120
.org 0xf62e0
	negs r0, r0	@ 000f62e0 4042
.org 0xf62e2
	ands r0, r2	@ 000f62e2 1040
.org 0xf62e4
	orrs r0, r1	@ 000f62e4 0843
.org 0xf62e6
	strb r0, [r3, #0]	@ 000f62e6 1870
.org 0xf62e8
	ldr r1, [pc, #48]	@ 000f62e8 0c49
.org 0xf62ea
	ldrb r0, [r6, #17]	@ 000f62ea 707c
.org 0xf62ec
	lsrs r0, r0, #1	@ 000f62ec 4008
.org 0xf62ee
	lsls r0, r0, #1	@ 000f62ee 4000
.org 0xf62f0
	adds r0, r0, r1	@ 000f62f0 4018
.org 0xf62f2
	ldrh r1, [r0, #0]	@ 000f62f2 0188
.org 0xf62f4
	adds r0, r6, #0	@ 000f62f4 301c
.org 0xf62f6
	bl 0x1cf00	@ 000f62f6 26f703fe
.org 0xf62fa
	ldr r0, [pc, #36]	@ 000f62fa 0948
.org 0xf62fc
	ldr r1, [pc, #36]	@ 000f62fc 0949
.org 0xf62fe
	adds r0, r0, r1	@ 000f62fe 4018
.org 0xf6300
	ldr r0, [r0, #0]	@ 000f6300 0068
.org 0xf6302
	movs r1, #128	@ 000f6302 8021
.org 0xf6304
	lsls r1, r1, #4	@ 000f6304 0901
.org 0xf6306
	adds r0, r0, r1	@ 000f6306 4018
.org 0xf6308
	str r0, [r6, #88]	@ 000f6308 b065
.org 0xf630a
	ldr r1, [r6, #84]	@ 000f630a 716d
.org 0xf630c
	str r1, [r6, #92]	@ 000f630c f165
.org 0xf630e
	str r0, [r6, #96]	@ 000f630e 3066
