@ FUN_0803f260  entry 0x0803f260  size 78
.thumb
.org 0x3f260
FUN_0803f260:
	push {r4, r5, lr}	@ 0003f260 30b5
.org 0x3f262
	adds r5, r0, #0	@ 0003f262 051c
.org 0x3f264
	movs r1, #255	@ 0003f264 ff21
.org 0x3f266
	bl 0x3a99c	@ 0003f266 fbf799fb
.org 0x3f26a
	adds r4, r0, #0	@ 0003f26a 041c
.org 0x3f26c
	lsls r4, r4, #24	@ 0003f26c 2406
.org 0x3f26e
	lsrs r4, r4, #24	@ 0003f26e 240e
.org 0x3f270
	adds r0, r5, #0	@ 0003f270 281c
.org 0x3f272
	bl 0x1cff0	@ 0003f272 ddf7bdfe
.org 0x3f276
	cmp r4, #0	@ 0003f276 002c
.org 0x3f278
	bne.n 0x3f284	@ 0003f278 04d1
.org 0x3f27a
	adds r0, r5, #0	@ 0003f27a 281c
.org 0x3f27c
	adds r0, #180	@ 0003f27c b430
.org 0x3f27e
	ldrb r0, [r0, #7]	@ 0003f27e c079
.org 0x3f280
	cmp r0, #0	@ 0003f280 0028
.org 0x3f282
	beq.n 0x3f29c	@ 0003f282 0bd0
.org 0x3f284
	ldr r1, [pc, #16]	@ 0003f284 0449
.org 0x3f286
	ldrb r0, [r5, #9]	@ 0003f286 687a
.org 0x3f288
	lsls r0, r0, #2	@ 0003f288 8000
.org 0x3f28a
	adds r0, r0, r1	@ 0003f28a 4018
.org 0x3f28c
	movs r1, #2	@ 0003f28c 0221
.org 0x3f28e
	str r1, [r5, #12]	@ 0003f28e e960
.org 0x3f290
	ldr r0, [r0, #0]	@ 0003f290 0068
.org 0x3f292
	ldr r0, [r0, #8]	@ 0003f292 8068
.org 0x3f294
	str r0, [r5, #20]	@ 0003f294 6861
.org 0x3f296
	b.n 0x3f2ac	@ 0003f296 09e0
.org 0x3f298
	.byte 0xf8,0x39,0x85,0x08	@ 0003f298 data
.org 0x3f29c
	ldr r0, [r5, #84]	@ 0003f29c 686d
.org 0x3f29e
	ldr r1, [r5, #92]	@ 0003f29e e96d
.org 0x3f2a0
	adds r0, r0, r1	@ 0003f2a0 4018
.org 0x3f2a2
	str r0, [r5, #84]	@ 0003f2a2 6865
.org 0x3f2a4
	ldr r0, [r5, #88]	@ 0003f2a4 a86d
.org 0x3f2a6
	ldr r1, [r5, #96]	@ 0003f2a6 296e
.org 0x3f2a8
	adds r0, r0, r1	@ 0003f2a8 4018
.org 0x3f2aa
	str r0, [r5, #88]	@ 0003f2aa a865
.org 0x3f2ac
	pop {r4, r5}	@ 0003f2ac 30bc
