@ FUN_080132f8  entry 0x080132f8  size 92
.thumb
.org 0x132f8
FUN_080132f8:
	push {r4, r5, r6, lr}	@ 000132f8 70b5
.org 0x132fa
	adds r5, r0, #0	@ 000132fa 051c
.org 0x132fc
	ldrb r6, [r5, #14]	@ 000132fc ae7b
.org 0x132fe
	cmp r6, #0	@ 000132fe 002e
.org 0x13300
	bne.n 0x13348	@ 00013300 22d1
.org 0x13302
	ldr r0, [r5, #92]	@ 00013302 e86d
.org 0x13304
	lsls r0, r0, #16	@ 00013304 0004
.org 0x13306
	lsrs r0, r0, #20	@ 00013306 000d
.org 0x13308
	lsls r3, r0, #1	@ 00013308 4300
.org 0x1330a
	ldr r4, [pc, #72]	@ 0001330a 124c
.org 0x1330c
	adds r3, r3, r4	@ 0001330c 1b19
.org 0x1330e
	ldr r1, [r5, #96]	@ 0001330e 296e
.org 0x13310
	ldr r2, [r5, #100]	@ 00013310 6a6e
.org 0x13312
	orrs r1, r2	@ 00013312 1143
.org 0x13314
	movs r2, #68	@ 00013314 4422
.org 0x13316
	orrs r1, r2	@ 00013316 1143
.org 0x13318
	strh r1, [r3, #0]	@ 00013318 1980
.org 0x1331a
	lsls r0, r0, #2	@ 0001331a 8000
.org 0x1331c
	adds r4, #8	@ 0001331c 0834
.org 0x1331e
	adds r0, r0, r4	@ 0001331e 0019
.org 0x13320
	str r6, [r0, #0]	@ 00013320 0660
.org 0x13322
	ldr r0, [pc, #52]	@ 00013322 0d48
.org 0x13324
	ldr r0, [r0, #0]	@ 00013324 0068
.org 0x13326
	ldr r2, [pc, #52]	@ 00013326 0d4a
.org 0x13328
	adds r0, r0, r2	@ 00013328 8018
.org 0x1332a
	movs r2, #248	@ 0001332a f822
.org 0x1332c
	lsls r2, r2, #5	@ 0001332c 5201
.org 0x1332e
	ands r1, r2	@ 0001332e 1140
.org 0x13330
	lsls r1, r1, #3	@ 00013330 c900
.org 0x13332
	movs r2, #192	@ 00013332 c022
.org 0x13334
	lsls r2, r2, #19	@ 00013334 d204
.org 0x13336
	adds r1, r1, r2	@ 00013336 8918
.org 0x13338
	movs r2, #128	@ 00013338 8022
.org 0x1333a
	lsls r2, r2, #2	@ 0001333a 9200
.org 0x1333c
	bl 0x128be0	@ 0001333c 15f150fc
.org 0x13340
	strh r6, [r5, #16]	@ 00013340 2e82
.org 0x13342
	ldrb r0, [r5, #14]	@ 00013342 a87b
.org 0x13344
	adds r0, #1	@ 00013344 0130
.org 0x13346
	strb r0, [r5, #14]	@ 00013346 a873
.org 0x13348
	ldrh r0, [r5, #16]	@ 00013348 288a
.org 0x1334a
	adds r0, #1	@ 0001334a 0130
.org 0x1334c
	strh r0, [r5, #16]	@ 0001334c 2882
.org 0x1334e
	pop {r4, r5, r6}	@ 0001334e 70bc
.org 0x13350
	pop {r0}	@ 00013350 01bc
.org 0x13352
	bx r0	@ 00013352 0047
