@ FUN_080942ec  entry 0x080942ec  size 172
.thumb
.org 0x942ec
FUN_080942ec:
	push {r4, r5, r6, lr}	@ 000942ec 70b5
.org 0x942ee
	sub sp, #8	@ 000942ee 82b0
.org 0x942f0
	adds r6, r0, #0	@ 000942f0 061c
.org 0x942f2
	ldrb r0, [r6, #16]	@ 000942f2 307c
.org 0x942f4
	ldrb r4, [r6, #17]	@ 000942f4 747c
.org 0x942f6
	cmp r0, #2	@ 000942f6 0228
.org 0x942f8
	bne.n 0x9432c	@ 000942f8 18d1
.org 0x942fa
	ldr r0, [pc, #128]	@ 000942fa 2048
.org 0x942fc
	ldr r1, [pc, #128]	@ 000942fc 2049
.org 0x942fe
	lsls r4, r4, #2	@ 000942fe a400
.org 0x94300
	adds r4, r4, r1	@ 00094300 6418
.org 0x94302
	ldr r1, [r4, #0]	@ 00094302 2168
.org 0x94304
	asrs r3, r1, #3	@ 00094304 cb10
.org 0x94306
	adds r0, #4	@ 00094306 0430
.org 0x94308
	adds r3, r3, r0	@ 00094308 1b18
.org 0x9430a
	movs r5, #7	@ 0009430a 0725
.org 0x9430c
	ands r1, r5	@ 0009430c 2940
.org 0x9430e
	movs r2, #1	@ 0009430e 0122
.org 0x94310
	adds r0, r2, #0	@ 00094310 101c
.org 0x94312
	lsls r0, r1	@ 00094312 8840
.org 0x94314
	ldrb r1, [r3, #0]	@ 00094314 1978
.org 0x94316
	orrs r0, r1	@ 00094316 0843
.org 0x94318
	strb r0, [r3, #0]	@ 00094318 1870
.org 0x9431a
	ldr r3, [pc, #104]	@ 0009431a 1a4b
.org 0x9431c
	ldr r0, [r4, #0]	@ 0009431c 2068
.org 0x9431e
	asrs r1, r0, #3	@ 0009431e c110
.org 0x94320
	adds r1, r1, r3	@ 00094320 c918
.org 0x94322
	ands r0, r5	@ 00094322 2840
.org 0x94324
	lsls r2, r0	@ 00094324 8240
.org 0x94326
	ldrb r0, [r1, #0]	@ 00094326 0878
.org 0x94328
	orrs r2, r0	@ 00094328 0243
.org 0x9432a
	strb r2, [r1, #0]	@ 0009432a 0a70
.org 0x9432c
	adds r0, r6, #0	@ 0009432c 301c
.org 0x9432e
	adds r0, #140	@ 0009432e 8c30
.org 0x94330
	movs r4, #0	@ 00094330 0024
.org 0x94332
	str r4, [r0, #0]	@ 00094332 0460
.org 0x94334
	adds r0, #4	@ 00094334 0430
.org 0x94336
	str r4, [r0, #0]	@ 00094336 0460
.org 0x94338
	adds r0, #4	@ 00094338 0430
.org 0x9433a
	strb r4, [r0, #0]	@ 0009433a 0470
.org 0x9433c
	ldrb r1, [r6, #10]	@ 0009433c b17a
.org 0x9433e
	movs r0, #251	@ 0009433e fb20
.org 0x94340
	ands r0, r1	@ 00094340 0840
.org 0x94342
	strb r0, [r6, #10]	@ 00094342 b072
.org 0x94344
	ldr r0, [r6, #84]	@ 00094344 706d
.org 0x94346
	str r0, [sp, #0]	@ 00094346 0090
.org 0x94348
	ldr r0, [r6, #88]	@ 00094348 b06d
.org 0x9434a
	ldr r1, [pc, #60]	@ 0009434a 0f49
.org 0x9434c
	adds r0, r0, r1	@ 0009434c 4018
.org 0x9434e
	str r0, [sp, #4]	@ 0009434e 0190
.org 0x94350
	movs r2, #128	@ 00094350 8022
.org 0x94352
	lsls r2, r2, #2	@ 00094352 9200
.org 0x94354
	adds r0, r6, #0	@ 00094354 301c
.org 0x94356
	adds r0, #186	@ 00094356 ba30
.org 0x94358
	ldrb r3, [r0, #0]	@ 00094358 0378
.org 0x9435a
	movs r0, #0	@ 0009435a 0020
.org 0x9435c
	mov r1, sp	@ 0009435c 6946
.org 0x9435e
	bl 0xd0dc4	@ 0009435e 3cf031fd
.org 0x94362
	ldr r1, [r6, #84]	@ 00094362 716d
.org 0x94364
	ldr r2, [r6, #88]	@ 00094364 b26d
.org 0x94366
	adds r0, r6, #0	@ 00094366 301c
.org 0x94368
	bl 0x947b4	@ 00094368 00f024fa
.org 0x9436c
	adds r1, r0, #0	@ 0009436c 011c
.org 0x9436e
	cmp r1, #0	@ 0009436e 0029
.org 0x94370
	beq.n 0x9438c	@ 00094370 0cd0
.org 0x94372
	movs r0, #1	@ 00094372 0120
.org 0x94374
	strb r0, [r6, #14]	@ 00094374 b073
.org 0x94376
	strb r4, [r6, #15]	@ 00094376 f473
.org 0x94378
	b.n 0x94392	@ 00094378 0be0
.org 0x9437a
	.byte 0x00	@ 0009437a data
.org 0x9437b
	.byte 0x00	@ 0009437b data
.org 0x9437c
	.byte 0xb0,0xe8,0x02,0x02	@ 0009437c data
.org 0x94380
	.byte 0x50,0x06,0x86,0x08	@ 00094380 data
.org 0x94384
	.byte 0x80,0x58,0x03,0x02	@ 00094384 data
.org 0x94388
	.byte 0x00,0xf0,0xff,0xff	@ 00094388 data
.org 0x9438c
	movs r0, #2	@ 0009438c 0220
.org 0x9438e
	strb r0, [r6, #14]	@ 0009438e b073
.org 0x94390
	strb r1, [r6, #15]	@ 00094390 f173
.org 0x94392
	ldr r0, [pc, #24]	@ 00094392 0648
.org 0x94394
	ldrb r1, [r6, #14]	@ 00094394 b17b
.org 0x94396
	lsls r1, r1, #2	@ 00094396 8900
