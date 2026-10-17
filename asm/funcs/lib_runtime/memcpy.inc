@ memcpy  entry 0x08129258  size 94
.thumb
.org 0x129258
memcpy:
	push {r4, r5, lr}	@ 00129258 30b5
.org 0x12925a
	adds r5, r0, #0	@ 0012925a 051c
.org 0x12925c
	adds r4, r5, #0	@ 0012925c 2c1c
.org 0x12925e
	adds r3, r1, #0	@ 0012925e 0b1c
.org 0x129260
	cmp r2, #15	@ 00129260 0f2a
.org 0x129262
	bls.n 0x129298	@ 00129262 19d9
.org 0x129264
	adds r0, r3, #0	@ 00129264 181c
.org 0x129266
	orrs r0, r5	@ 00129266 2843
.org 0x129268
	movs r1, #3	@ 00129268 0321
.org 0x12926a
	ands r0, r1	@ 0012926a 0840
.org 0x12926c
	cmp r0, #0	@ 0012926c 0028
.org 0x12926e
	bne.n 0x129298	@ 0012926e 13d1
.org 0x129270
	adds r1, r5, #0	@ 00129270 291c
.org 0x129272
	ldmia r3!, {r0}	@ 00129272 01cb
.org 0x129274
	stmia r1!, {r0}	@ 00129274 01c1
.org 0x129276
	ldmia r3!, {r0}	@ 00129276 01cb
.org 0x129278
	stmia r1!, {r0}	@ 00129278 01c1
.org 0x12927a
	ldmia r3!, {r0}	@ 0012927a 01cb
.org 0x12927c
	stmia r1!, {r0}	@ 0012927c 01c1
.org 0x12927e
	ldmia r3!, {r0}	@ 0012927e 01cb
.org 0x129280
	stmia r1!, {r0}	@ 00129280 01c1
.org 0x129282
	subs r2, #16	@ 00129282 103a
.org 0x129284
	cmp r2, #15	@ 00129284 0f2a
.org 0x129286
	bhi.n 0x129272	@ 00129286 f4d8
.org 0x129288
	cmp r2, #3	@ 00129288 032a
.org 0x12928a
	bls.n 0x129296	@ 0012928a 04d9
.org 0x12928c
	ldmia r3!, {r0}	@ 0012928c 01cb
.org 0x12928e
	stmia r1!, {r0}	@ 0012928e 01c1
.org 0x129290
	subs r2, #4	@ 00129290 043a
.org 0x129292
	cmp r2, #3	@ 00129292 032a
.org 0x129294
	bhi.n 0x12928c	@ 00129294 fad8
.org 0x129296
	adds r4, r1, #0	@ 00129296 0c1c
.org 0x129298
	subs r2, #1	@ 00129298 013a
.org 0x12929a
	movs r0, #1	@ 0012929a 0120
.org 0x12929c
	negs r0, r0	@ 0012929c 4042
.org 0x12929e
	cmp r2, r0	@ 0012929e 8242
.org 0x1292a0
	beq.n 0x1292b2	@ 001292a0 07d0
.org 0x1292a2
	adds r1, r0, #0	@ 001292a2 011c
.org 0x1292a4
	ldrb r0, [r3, #0]	@ 001292a4 1878
.org 0x1292a6
	strb r0, [r4, #0]	@ 001292a6 2070
.org 0x1292a8
	adds r3, #1	@ 001292a8 0133
.org 0x1292aa
	adds r4, #1	@ 001292aa 0134
.org 0x1292ac
	subs r2, #1	@ 001292ac 013a
.org 0x1292ae
	cmp r2, r1	@ 001292ae 8a42
.org 0x1292b0
	bne.n 0x1292a4	@ 001292b0 f8d1
.org 0x1292b2
	adds r0, r5, #0	@ 001292b2 281c
.org 0x1292b4
	pop {r4, r5, pc}	@ 001292b4 30bd
