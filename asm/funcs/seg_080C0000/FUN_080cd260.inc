@ FUN_080cd260  entry 0x080cd260  size 114
.thumb
.org 0xcd260
FUN_080cd260:
	push {r4, lr}	@ 000cd260 10b5
.org 0xcd262
	sub sp, #8	@ 000cd262 82b0
.org 0xcd264
	adds r4, r0, #0	@ 000cd264 041c
.org 0xcd266
	ldr r0, [pc, #108]	@ 000cd266 1b48
.org 0xcd268
	ldr r1, [r0, #4]	@ 000cd268 4168
.org 0xcd26a
	ldr r0, [r0, #0]	@ 000cd26a 0068
.org 0xcd26c
	str r0, [sp, #0]	@ 000cd26c 0090
.org 0xcd26e
	str r1, [sp, #4]	@ 000cd26e 0191
.org 0xcd270
	ldrb r2, [r4, #17]	@ 000cd270 627c
.org 0xcd272
	ldrb r1, [r4, #15]	@ 000cd272 e17b
.org 0xcd274
	cmp r1, #0	@ 000cd274 0029
.org 0xcd276
	bne.n 0xcd2a0	@ 000cd276 13d1
.org 0xcd278
	adds r0, r4, #0	@ 000cd278 201c
.org 0xcd27a
	adds r0, #140	@ 000cd27a 8c30
.org 0xcd27c
	str r1, [r0, #0]	@ 000cd27c 0160
.org 0xcd27e
	adds r0, #4	@ 000cd27e 0430
.org 0xcd280
	str r1, [r0, #0]	@ 000cd280 0160
.org 0xcd282
	adds r0, #4	@ 000cd282 0430
.org 0xcd284
	strb r1, [r0, #0]	@ 000cd284 0170
.org 0xcd286
	ldrb r1, [r4, #10]	@ 000cd286 a17a
.org 0xcd288
	movs r0, #251	@ 000cd288 fb20
.org 0xcd28a
	ands r0, r1	@ 000cd28a 0840
.org 0xcd28c
	strb r0, [r4, #10]	@ 000cd28c a072
.org 0xcd28e
	lsls r0, r2, #2	@ 000cd28e 9000
.org 0xcd290
	add r0, sp	@ 000cd290 6844
.org 0xcd292
	ldrh r1, [r0, #0]	@ 000cd292 0188
.org 0xcd294
	adds r0, r4, #0	@ 000cd294 201c
.org 0xcd296
	bl 0x1cf00	@ 000cd296 4ff733fe
.org 0xcd29a
	ldrb r0, [r4, #15]	@ 000cd29a e07b
.org 0xcd29c
	adds r0, #1	@ 000cd29c 0130
.org 0xcd29e
	strb r0, [r4, #15]	@ 000cd29e e073
.org 0xcd2a0
	adds r0, r4, #0	@ 000cd2a0 201c
.org 0xcd2a2
	bl 0x1cff0	@ 000cd2a2 4ff7a5fe
.org 0xcd2a6
	adds r0, r4, #0	@ 000cd2a6 201c
.org 0xcd2a8
	adds r0, #115	@ 000cd2a8 7330
.org 0xcd2aa
	ldrb r0, [r0, #0]	@ 000cd2aa 0078
.org 0xcd2ac
	cmp r0, #3	@ 000cd2ac 0328
.org 0xcd2ae
	bne.n 0xcd2ca	@ 000cd2ae 0cd1
.org 0xcd2b0
	ldrb r1, [r4, #10]	@ 000cd2b0 a17a
.org 0xcd2b2
	movs r0, #254	@ 000cd2b2 fe20
.org 0xcd2b4
	ands r0, r1	@ 000cd2b4 0840
.org 0xcd2b6
	strb r0, [r4, #10]	@ 000cd2b6 a072
.org 0xcd2b8
	ldr r1, [pc, #28]	@ 000cd2b8 0749
.org 0xcd2ba
	ldrb r0, [r4, #9]	@ 000cd2ba 607a
.org 0xcd2bc
	lsls r0, r0, #2	@ 000cd2bc 8000
.org 0xcd2be
	adds r0, r0, r1	@ 000cd2be 4018
.org 0xcd2c0
	movs r1, #4	@ 000cd2c0 0421
.org 0xcd2c2
	str r1, [r4, #12]	@ 000cd2c2 e160
.org 0xcd2c4
	ldr r0, [r0, #0]	@ 000cd2c4 0068
.org 0xcd2c6
	ldr r0, [r0, #16]	@ 000cd2c6 0069
.org 0xcd2c8
	str r0, [r4, #20]	@ 000cd2c8 6061
.org 0xcd2ca
	add sp, #8	@ 000cd2ca 02b0
.org 0xcd2cc
	pop {r4}	@ 000cd2cc 10bc
.org 0xcd2ce
	pop {r0}	@ 000cd2ce 01bc
.org 0xcd2d0
	bx r0	@ 000cd2d0 0047
