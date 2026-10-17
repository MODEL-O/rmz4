@ FUN_080352ec  entry 0x080352ec  size 150
.thumb
.org 0x352ec
FUN_080352ec:
	push {r4, r5, r6, lr}	@ 000352ec 70b5
.org 0x352ee
	adds r4, r0, #0	@ 000352ee 041c
.org 0x352f0
	movs r0, #162	@ 000352f0 a220
.org 0x352f2
	lsls r0, r0, #1	@ 000352f2 4000
.org 0x352f4
	adds r1, r4, r0	@ 000352f4 2118
.org 0x352f6
	adds r0, r4, #0	@ 000352f6 201c
.org 0x352f8
	bl 0x39fd8	@ 000352f8 04f06efe
.org 0x352fc
	lsls r0, r0, #24	@ 000352fc 0006
.org 0x352fe
	lsrs r3, r0, #24	@ 000352fe 030e
.org 0x35300
	cmp r3, #0	@ 00035300 002b
.org 0x35302
	beq.n 0x35328	@ 00035302 11d0
.org 0x35304
	ldr r0, [pc, #24]	@ 00035304 0648
.org 0x35306
	adds r1, r4, r0	@ 00035306 2118
.org 0x35308
	movs r0, #255	@ 00035308 ff20
.org 0x3530a
	strb r0, [r1, #0]	@ 0003530a 0870
.org 0x3530c
	adds r0, #1	@ 0003530c 0130
.org 0x3530e
	adds r1, r4, r0	@ 0003530e 2118
.org 0x35310
	movs r2, #0	@ 00035310 0022
.org 0x35312
	movs r0, #3	@ 00035312 0320
.org 0x35314
	strb r0, [r1, #0]	@ 00035314 0870
.org 0x35316
	ldr r1, [pc, #12]	@ 00035316 0349
.org 0x35318
	adds r0, r4, r1	@ 00035318 6018
.org 0x3531a
	strb r2, [r0, #0]	@ 0003531a 0270
.org 0x3531c
	b.n 0x3537e	@ 0003531c 2fe0
.org 0x3531e
	.byte 0x00	@ 0003531e data
.org 0x3531f
	.byte 0x00	@ 0003531f data
.org 0x35320
	.byte 0x47,0x01,0x00,0x00	@ 00035320 data
.org 0x35324
	.byte 0x01,0x01,0x00,0x00	@ 00035324 data
.org 0x35328
	adds r5, r4, #0	@ 00035328 251c
.org 0x3532a
	adds r5, #180	@ 0003532a b435
.org 0x3532c
	ldr r1, [pc, #28]	@ 0003532c 0749
.org 0x3532e
	adds r0, r4, r1	@ 0003532e 6018
.org 0x35330
	ldrb r2, [r0, #0]	@ 00035330 0278
.org 0x35332
	adds r1, r2, #0	@ 00035332 111c
.org 0x35334
	adds r6, r0, #0	@ 00035334 061c
.org 0x35336
	cmp r1, #255	@ 00035336 ff29
.org 0x35338
	beq.n 0x35350	@ 00035338 0ad0
.org 0x3533a
	movs r1, #162	@ 0003533a a221
.org 0x3533c
	lsls r1, r1, #1	@ 0003533c 4900
.org 0x3533e
	adds r0, r4, r1	@ 0003533e 6018
.org 0x35340
	strb r2, [r0, #0]	@ 00035340 0270
.org 0x35342
	movs r0, #255	@ 00035342 ff20
.org 0x35344
	strb r0, [r6, #0]	@ 00035344 3070
.org 0x35346
	adds r0, #1	@ 00035346 0130
.org 0x35348
	b.n 0x35372	@ 00035348 13e0
.org 0x3534a
	.byte 0x00	@ 0003534a data
.org 0x3534b
	.byte 0x00	@ 0003534b data
.org 0x3534c
	.byte 0x47,0x01,0x00,0x00	@ 0003534c data
.org 0x35350
	ldr r0, [pc, #52]	@ 00035350 0d48
.org 0x35352
	adds r1, r4, r0	@ 00035352 2118
.org 0x35354
	ldrb r0, [r1, #0]	@ 00035354 0878
.org 0x35356
	cmp r0, #0	@ 00035356 0028
.org 0x35358
	beq.n 0x35392	@ 00035358 1bd0
.org 0x3535a
	ldrb r0, [r5, #12]	@ 0003535a 287b
.org 0x3535c
	cmp r0, #4	@ 0003535c 0428
.org 0x3535e
	beq.n 0x35366	@ 0003535e 02d0
.org 0x35360
	ldrb r0, [r5, #13]	@ 00035360 687b
.org 0x35362
	cmp r0, #4	@ 00035362 0428
.org 0x35364
	bne.n 0x35390	@ 00035364 14d1
.org 0x35366
	movs r0, #162	@ 00035366 a220
.org 0x35368
	lsls r0, r0, #1	@ 00035368 4000
.org 0x3536a
	adds r1, r4, r0	@ 0003536a 2118
.org 0x3536c
	movs r0, #4	@ 0003536c 0420
.org 0x3536e
	strb r0, [r1, #0]	@ 0003536e 0870
.org 0x35370
	adds r0, #252	@ 00035370 fc30
.org 0x35372
	adds r1, r4, r0	@ 00035372 2118
.org 0x35374
	movs r0, #3	@ 00035374 0320
.org 0x35376
	strb r0, [r1, #0]	@ 00035376 0870
.org 0x35378
	ldr r1, [pc, #16]	@ 00035378 0449
.org 0x3537a
	adds r0, r4, r1	@ 0003537a 6018
.org 0x3537c
	strb r3, [r0, #0]	@ 0003537c 0370
.org 0x3537e
	adds r0, r4, #0	@ 0003537e 201c
.org 0x35380
	bl 0x353a0	@ 00035380 00f00ef8
