@ FUN_080c42d4  entry 0x080c42d4  size 138
.thumb
.org 0xc42d4
FUN_080c42d4:
	push {r4, r5, r6, r7, lr}	@ 000c42d4 f0b5
.org 0xc42d6
	adds r4, r0, #0	@ 000c42d6 041c
.org 0xc42d8
	ldr r7, [r4, #40]	@ 000c42d8 a76a
.org 0xc42da
	ldrb r0, [r7, #10]	@ 000c42da b87a
.org 0xc42dc
	lsrs r5, r0, #4	@ 000c42dc 0509
.org 0xc42de
	movs r0, #1	@ 000c42de 0120
.org 0xc42e0
	ands r5, r0	@ 000c42e0 0540
.org 0xc42e2
	ldrb r0, [r4, #15]	@ 000c42e2 e07b
.org 0xc42e4
	cmp r0, #0	@ 000c42e4 0028
.org 0xc42e6
	bne.n 0xc4300	@ 000c42e6 0bd1
.org 0xc42e8
	adds r0, r4, #0	@ 000c42e8 201c
.org 0xc42ea
	adds r0, #116	@ 000c42ea 7430
.org 0xc42ec
	ldr r1, [pc, #36]	@ 000c42ec 0949
.org 0xc42ee
	bl 0x5784	@ 000c42ee 41f749fa
.org 0xc42f2
	ldr r1, [pc, #36]	@ 000c42f2 0949
.org 0xc42f4
	adds r0, r4, #0	@ 000c42f4 201c
.org 0xc42f6
	bl 0x1cf00	@ 000c42f6 58f703fe
.org 0xc42fa
	ldrb r0, [r4, #15]	@ 000c42fa e07b
.org 0xc42fc
	adds r0, #1	@ 000c42fc 0130
.org 0xc42fe
	strb r0, [r4, #15]	@ 000c42fe e073
.org 0xc4300
	adds r0, r4, #0	@ 000c4300 201c
.org 0xc4302
	bl 0x1cff0	@ 000c4302 58f775fe
.org 0xc4306
	adds r2, r5, #0	@ 000c4306 2a1c
.org 0xc4308
	cmp r2, #0	@ 000c4308 002a
.org 0xc430a
	beq.n 0xc431c	@ 000c430a 07d0
.org 0xc430c
	ldrb r1, [r4, #10]	@ 000c430c a17a
.org 0xc430e
	movs r0, #16	@ 000c430e 1020
.org 0xc4310
	orrs r0, r1	@ 000c4310 0843
.org 0xc4312
	b.n 0xc4322	@ 000c4312 06e0
.org 0xc4314
	.byte 0x80,0x56,0x86,0x08	@ 000c4314 data
.org 0xc4318
	.byte 0x02,0x52,0x00,0x00	@ 000c4318 data
.org 0xc431c
	ldrb r1, [r4, #10]	@ 000c431c a17a
.org 0xc431e
	movs r0, #239	@ 000c431e ef20
.org 0xc4320
	ands r0, r1	@ 000c4320 0840
.org 0xc4322
	strb r0, [r4, #10]	@ 000c4322 a072
.org 0xc4324
	movs r6, #1	@ 000c4324 0126
.org 0xc4326
	adds r1, r6, #0	@ 000c4326 311c
.org 0xc4328
	ands r1, r2	@ 000c4328 1140
.org 0xc432a
	adds r0, r4, #0	@ 000c432a 201c
.org 0xc432c
	adds r0, #76	@ 000c432c 4c30
.org 0xc432e
	movs r5, #0	@ 000c432e 0025
.org 0xc4330
	strb r1, [r0, #0]	@ 000c4330 0170
.org 0xc4332
	adds r3, r4, #0	@ 000c4332 231c
.org 0xc4334
	adds r3, #74	@ 000c4334 4a33
.org 0xc4336
	lsls r1, r1, #4	@ 000c4336 0901
.org 0xc4338
	ldrb r2, [r3, #0]	@ 000c4338 1a78
.org 0xc433a
	movs r0, #17	@ 000c433a 1120
.org 0xc433c
	negs r0, r0	@ 000c433c 4042
.org 0xc433e
	ands r0, r2	@ 000c433e 1040
.org 0xc4340
	orrs r0, r1	@ 000c4340 0843
.org 0xc4342
	strb r0, [r3, #0]	@ 000c4342 1870
.org 0xc4344
	ldr r0, [r7, #84]	@ 000c4344 786d
.org 0xc4346
	ldr r1, [r7, #88]	@ 000c4346 b96d
.org 0xc4348
	str r0, [r4, #84]	@ 000c4348 6065
.org 0xc434a
	str r1, [r4, #88]	@ 000c434a a165
.org 0xc434c
	adds r0, r4, #0	@ 000c434c 201c
.org 0xc434e
	adds r0, #113	@ 000c434e 7130
.org 0xc4350
	ldrb r0, [r0, #0]	@ 000c4350 0078
.org 0xc4352
	lsls r0, r0, #24	@ 000c4352 0006
.org 0xc4354
	asrs r0, r0, #24	@ 000c4354 0016
.org 0xc4356
	cmp r0, #4	@ 000c4356 0428
.org 0xc4358
	ble.n 0xc4360	@ 000c4358 02dd
.org 0xc435a
	strb r6, [r4, #13]	@ 000c435a 6673
.org 0xc435c
	strb r5, [r4, #14]	@ 000c435c a573
