@ FUN_080bd260  entry 0x080bd260  size 146
.thumb
.org 0xbd260
FUN_080bd260:
	push {r4, lr}	@ 000bd260 10b5
.org 0xbd262
	adds r4, r0, #0	@ 000bd262 041c
.org 0xbd264
	ldrb r1, [r4, #14]	@ 000bd264 a17b
.org 0xbd266
	cmp r1, #0	@ 000bd266 0029
.org 0xbd268
	bne.n 0xbd298	@ 000bd268 16d1
.org 0xbd26a
	adds r0, #140	@ 000bd26a 8c30
.org 0xbd26c
	str r1, [r0, #0]	@ 000bd26c 0160
.org 0xbd26e
	adds r0, #4	@ 000bd26e 0430
.org 0xbd270
	str r1, [r0, #0]	@ 000bd270 0160
.org 0xbd272
	adds r0, #4	@ 000bd272 0430
.org 0xbd274
	strb r1, [r0, #0]	@ 000bd274 0170
.org 0xbd276
	ldrb r1, [r4, #10]	@ 000bd276 a17a
.org 0xbd278
	movs r0, #251	@ 000bd278 fb20
.org 0xbd27a
	ands r0, r1	@ 000bd27a 0840
.org 0xbd27c
	strb r0, [r4, #10]	@ 000bd27c a072
.org 0xbd27e
	ldr r1, [r4, #40]	@ 000bd27e a16a
.org 0xbd280
	ldr r0, [pc, #60]	@ 000bd280 0f48
.org 0xbd282
	adds r1, r1, r0	@ 000bd282 0918
.org 0xbd284
	ldr r0, [r1, #8]	@ 000bd284 8868
.org 0xbd286
	adds r0, #10	@ 000bd286 0a30
.org 0xbd288
	str r0, [r1, #8]	@ 000bd288 8860
.org 0xbd28a
	movs r0, #210	@ 000bd28a d220
.org 0xbd28c
	lsls r0, r0, #1	@ 000bd28c 4000
.org 0xbd28e
	bl 0x2b10	@ 000bd28e 45f73ffc
.org 0xbd292
	ldrb r0, [r4, #14]	@ 000bd292 a07b
.org 0xbd294
	adds r0, #1	@ 000bd294 0130
.org 0xbd296
	strb r0, [r4, #14]	@ 000bd296 a073
.org 0xbd298
	adds r2, r4, #0	@ 000bd298 221c
.org 0xbd29a
	adds r2, #184	@ 000bd29a b832
.org 0xbd29c
	ldrb r0, [r2, #0]	@ 000bd29c 1078
.org 0xbd29e
	cmp r0, #0	@ 000bd29e 0028
.org 0xbd2a0
	bne.n 0xbd2c4	@ 000bd2a0 10d1
.org 0xbd2a2
	ldrb r1, [r4, #10]	@ 000bd2a2 a17a
.org 0xbd2a4
	movs r0, #1	@ 000bd2a4 0120
.org 0xbd2a6
	orrs r0, r1	@ 000bd2a6 0843
.org 0xbd2a8
	strb r0, [r4, #10]	@ 000bd2a8 a072
.org 0xbd2aa
	movs r0, #1	@ 000bd2aa 0120
.org 0xbd2ac
	strb r0, [r2, #0]	@ 000bd2ac 1070
.org 0xbd2ae
	ldr r0, [r4, #84]	@ 000bd2ae 606d
.org 0xbd2b0
	ldr r1, [r4, #92]	@ 000bd2b0 e16d
.org 0xbd2b2
	adds r0, r0, r1	@ 000bd2b2 4018
.org 0xbd2b4
	str r0, [r4, #84]	@ 000bd2b4 6065
.org 0xbd2b6
	adds r0, r4, #0	@ 000bd2b6 201c
.org 0xbd2b8
	bl 0x1cff0	@ 000bd2b8 5ff79afe
.org 0xbd2bc
	b.n 0xbd2d6	@ 000bd2bc 0be0
.org 0xbd2be
	.byte 0x00	@ 000bd2be data
.org 0xbd2bf
	.byte 0x00	@ 000bd2bf data
.org 0xbd2c0
	.byte 0xcc,0x0d,0x00,0x00	@ 000bd2c0 data
.org 0xbd2c4
	ldrb r0, [r4, #10]	@ 000bd2c4 a07a
.org 0xbd2c6
	movs r1, #254	@ 000bd2c6 fe21
.org 0xbd2c8
	ands r1, r0	@ 000bd2c8 0140
.org 0xbd2ca
	movs r0, #0	@ 000bd2ca 0020
.org 0xbd2cc
	strb r1, [r4, #10]	@ 000bd2cc a172
.org 0xbd2ce
	strb r0, [r2, #0]	@ 000bd2ce 1070
.org 0xbd2d0
	adds r0, r4, #0	@ 000bd2d0 201c
.org 0xbd2d2
	bl 0x1d1f4	@ 000bd2d2 5ff78fff
.org 0xbd2d6
	ldrb r2, [r4, #18]	@ 000bd2d6 a27c
.org 0xbd2d8
	cmp r2, #0	@ 000bd2d8 002a
.org 0xbd2da
	bne.n 0xbd2ee	@ 000bd2da 08d1
.org 0xbd2dc
	ldr r1, [pc, #24]	@ 000bd2dc 0649
.org 0xbd2de
	ldrb r0, [r4, #9]	@ 000bd2de 607a
.org 0xbd2e0
	lsls r0, r0, #2	@ 000bd2e0 8000
.org 0xbd2e2
	adds r0, r0, r1	@ 000bd2e2 4018
.org 0xbd2e4
	movs r1, #4	@ 000bd2e4 0421
.org 0xbd2e6
	str r1, [r4, #12]	@ 000bd2e6 e160
.org 0xbd2e8
	ldr r0, [r0, #0]	@ 000bd2e8 0068
.org 0xbd2ea
	ldr r0, [r0, #16]	@ 000bd2ea 0069
.org 0xbd2ec
	str r0, [r4, #20]	@ 000bd2ec 6061
.org 0xbd2ee
	subs r0, r2, #1	@ 000bd2ee 501e
.org 0xbd2f0
	strb r0, [r4, #18]	@ 000bd2f0 a074
