@ FUN_0801c2b4  entry 0x0801c2b4  size 138
.thumb
.org 0x1c2b4
FUN_0801c2b4:
	push {r4, lr}	@ 0001c2b4 10b5
.org 0x1c2b6
	adds r3, r0, #0	@ 0001c2b6 031c
.org 0x1c2b8
	adds r2, r3, #0	@ 0001c2b8 1a1c
.org 0x1c2ba
	adds r2, #104	@ 0001c2ba 6832
.org 0x1c2bc
	ldrh r0, [r2, #0]	@ 0001c2bc 1088
.org 0x1c2be
	subs r0, #1	@ 0001c2be 0138
.org 0x1c2c0
	strh r0, [r2, #0]	@ 0001c2c0 1080
.org 0x1c2c2
	lsls r0, r0, #16	@ 0001c2c2 0004
.org 0x1c2c4
	lsrs r0, r0, #16	@ 0001c2c4 000c
.org 0x1c2c6
	cmp r0, #63	@ 0001c2c6 3f28
.org 0x1c2c8
	bhi.n 0x1c2f0	@ 0001c2c8 12d8
.org 0x1c2ca
	adds r1, r3, #0	@ 0001c2ca 191c
.org 0x1c2cc
	adds r1, #106	@ 0001c2cc 6a31
.org 0x1c2ce
	ldrh r0, [r1, #0]	@ 0001c2ce 0888
.org 0x1c2d0
	subs r0, #4	@ 0001c2d0 0438
.org 0x1c2d2
	strh r0, [r1, #0]	@ 0001c2d2 0880
.org 0x1c2d4
	ldrh r0, [r2, #0]	@ 0001c2d4 1088
.org 0x1c2d6
	cmp r0, #0	@ 0001c2d6 0028
.org 0x1c2d8
	bne.n 0x1c302	@ 0001c2d8 13d1
.org 0x1c2da
	ldr r0, [pc, #12]	@ 0001c2da 0348
.org 0x1c2dc
	ldr r1, [pc, #12]	@ 0001c2dc 0349
.org 0x1c2de
	adds r0, r0, r1	@ 0001c2de 4018
.org 0x1c2e0
	movs r1, #4	@ 0001c2e0 0421
.org 0x1c2e2
	strb r1, [r0, #0]	@ 0001c2e2 0170
.org 0x1c2e4
	b.n 0x1c302	@ 0001c2e4 0de0
.org 0x1c2e6
	.byte 0x00	@ 0001c2e6 data
.org 0x1c2e7
	.byte 0x00	@ 0001c2e7 data
.org 0x1c2e8
	.byte 0xb0,0x0a,0x00,0x02	@ 0001c2e8 data
.org 0x1c2ec
	.byte 0x25,0xd0,0x02,0x00	@ 0001c2ec data
.org 0x1c2f0
	adds r1, r3, #0	@ 0001c2f0 191c
.org 0x1c2f2
	adds r1, #106	@ 0001c2f2 6a31
.org 0x1c2f4
	ldrh r2, [r1, #0]	@ 0001c2f4 0a88
.org 0x1c2f6
	movs r4, #0	@ 0001c2f6 0024
.org 0x1c2f8
	ldrsh r0, [r1, r4]	@ 0001c2f8 085f
.org 0x1c2fa
	cmp r0, #255	@ 0001c2fa ff28
.org 0x1c2fc
	bgt.n 0x1c302	@ 0001c2fc 01dc
.org 0x1c2fe
	adds r0, r2, #4	@ 0001c2fe 101d
.org 0x1c300
	strh r0, [r1, #0]	@ 0001c300 0880
.org 0x1c302
	adds r0, r3, #0	@ 0001c302 181c
.org 0x1c304
	adds r0, #104	@ 0001c304 6830
.org 0x1c306
	ldrh r0, [r0, #0]	@ 0001c306 0088
.org 0x1c308
	cmp r0, #3	@ 0001c308 0328
.org 0x1c30a
	bhi.n 0x1c328	@ 0001c30a 0dd8
.org 0x1c30c
	ldrh r0, [r3, #18]	@ 0001c30c 588a
.org 0x1c30e
	subs r0, #1	@ 0001c30e 0138
.org 0x1c310
	strh r0, [r3, #18]	@ 0001c310 5882
.org 0x1c312
	ldr r2, [pc, #16]	@ 0001c312 044a
.org 0x1c314
	lsls r0, r0, #16	@ 0001c314 0004
.org 0x1c316
	lsrs r0, r0, #17	@ 0001c316 400c
.org 0x1c318
	movs r1, #31	@ 0001c318 1f21
.org 0x1c31a
	ands r0, r1	@ 0001c31a 0840
.org 0x1c31c
	movs r3, #128	@ 0001c31c 8023
.org 0x1c31e
	lsls r3, r3, #5	@ 0001c31e 5b01
.org 0x1c320
	adds r1, r3, #0	@ 0001c320 191c
.org 0x1c322
	b.n 0x1c342	@ 0001c322 0ee0
.org 0x1c324
	.byte 0x40,0x0a,0x00,0x02	@ 0001c324 data
.org 0x1c328
	ldrh r0, [r3, #18]	@ 0001c328 588a
.org 0x1c32a
	cmp r0, #7	@ 0001c32a 0728
.org 0x1c32c
	bhi.n 0x1c346	@ 0001c32c 0bd8
.org 0x1c32e
	adds r0, #1	@ 0001c32e 0130
.org 0x1c330
	strh r0, [r3, #18]	@ 0001c330 5882
.org 0x1c332
	ldr r2, [pc, #24]	@ 0001c332 064a
.org 0x1c334
	lsls r0, r0, #16	@ 0001c334 0004
.org 0x1c336
	lsrs r0, r0, #17	@ 0001c336 400c
.org 0x1c338
	movs r1, #31	@ 0001c338 1f21
.org 0x1c33a
	ands r0, r1	@ 0001c33a 0840
.org 0x1c33c
	movs r4, #128	@ 0001c33c 8024
