@ FUN_080c926c  entry 0x080c926c  size 94
.thumb
.org 0xc926c
FUN_080c926c:
	push {r4, r5, lr}	@ 000c926c 30b5
.org 0xc926e
	adds r4, r0, #0	@ 000c926e 041c
.org 0xc9270
	ldr r0, [pc, #88]	@ 000c9270 1648
.org 0xc9272
	ldr r5, [r0, #0]	@ 000c9272 0568
.org 0xc9274
	ldr r0, [r4, #84]	@ 000c9274 606d
.org 0xc9276
	ldr r1, [r4, #92]	@ 000c9276 e16d
.org 0xc9278
	adds r0, r0, r1	@ 000c9278 4018
.org 0xc927a
	str r0, [r4, #84]	@ 000c927a 6065
.org 0xc927c
	ldr r1, [r4, #88]	@ 000c927c a16d
.org 0xc927e
	ldr r2, [r4, #96]	@ 000c927e 226e
.org 0xc9280
	adds r1, r1, r2	@ 000c9280 8918
.org 0xc9282
	str r1, [r4, #88]	@ 000c9282 a165
.org 0xc9284
	adds r2, #64	@ 000c9284 4032
.org 0xc9286
	str r2, [r4, #96]	@ 000c9286 2266
.org 0xc9288
	ldr r2, [r4, #100]	@ 000c9288 626e
.org 0xc928a
	adds r0, r0, r2	@ 000c928a 8018
.org 0xc928c
	bl 0x7c7c	@ 000c928c 3ef7f6fc
.org 0xc9290
	lsls r0, r0, #16	@ 000c9290 0004
.org 0xc9292
	cmp r0, #0	@ 000c9292 0028
.org 0xc9294
	beq.n 0xc92b8	@ 000c9294 10d0
.org 0xc9296
	movs r0, #56	@ 000c9296 3820
.org 0xc9298
	bl 0x2b10	@ 000c9298 39f73afc
.org 0xc929c
	adds r0, r4, #0	@ 000c929c 201c
.org 0xc929e
	adds r0, #116	@ 000c929e 7430
.org 0xc92a0
	ldr r1, [pc, #44]	@ 000c92a0 0b49
.org 0xc92a2
	bl 0x5784	@ 000c92a2 3cf76ffa
.org 0xc92a6
	ldr r1, [pc, #44]	@ 000c92a6 0b49
.org 0xc92a8
	ldrb r0, [r4, #9]	@ 000c92a8 607a
.org 0xc92aa
	lsls r0, r0, #2	@ 000c92aa 8000
.org 0xc92ac
	adds r0, r0, r1	@ 000c92ac 4018
.org 0xc92ae
	movs r1, #2	@ 000c92ae 0221
.org 0xc92b0
	str r1, [r4, #12]	@ 000c92b0 e160
.org 0xc92b2
	ldr r0, [r0, #0]	@ 000c92b2 0068
.org 0xc92b4
	ldr r0, [r0, #8]	@ 000c92b4 8068
.org 0xc92b6
	str r0, [r4, #20]	@ 000c92b6 6061
.org 0xc92b8
	cmp r5, #0	@ 000c92b8 002d
.org 0xc92ba
	beq.n 0xc92c4	@ 000c92ba 03d0
.org 0xc92bc
	ldr r0, [r4, #84]	@ 000c92bc 606d
.org 0xc92be
	ldr r1, [r4, #88]	@ 000c92be a16d
.org 0xc92c0
	str r0, [r5, #84]	@ 000c92c0 6865
.org 0xc92c2
	str r1, [r5, #88]	@ 000c92c2 a965
.org 0xc92c4
	pop {r4, r5}	@ 000c92c4 30bc
.org 0xc92c6
	pop {r0}	@ 000c92c6 01bc
.org 0xc92c8
	bx r0	@ 000c92c8 0047
