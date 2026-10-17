@ FUN_0809f244  entry 0x0809f244  size 48
.thumb
.org 0x9f244
FUN_0809f244:
	push {r4, lr}	@ 0009f244 10b5
.org 0x9f246
	adds r4, r0, #0	@ 0009f246 041c
.org 0x9f248
	ldrb r0, [r4, #14]	@ 0009f248 a07b
.org 0x9f24a
	cmp r0, #0	@ 0009f24a 0028
.org 0x9f24c
	bne.n 0x9f25c	@ 0009f24c 06d1
.org 0x9f24e
	ldr r1, [pc, #36]	@ 0009f24e 0949
.org 0x9f250
	adds r0, r4, #0	@ 0009f250 201c
.org 0x9f252
	bl 0x1cf00	@ 0009f252 7df755fe
.org 0x9f256
	ldrb r0, [r4, #14]	@ 0009f256 a07b
.org 0x9f258
	adds r0, #1	@ 0009f258 0130
.org 0x9f25a
	strb r0, [r4, #14]	@ 0009f25a a073
.org 0x9f25c
	ldrb r2, [r4, #18]	@ 0009f25c a27c
.org 0x9f25e
	adds r1, r2, #0	@ 0009f25e 111c
.org 0x9f260
	cmp r1, #0	@ 0009f260 0029
.org 0x9f262
	bne.n 0x9f26a	@ 0009f262 02d1
.org 0x9f264
	movs r0, #1	@ 0009f264 0120
.org 0x9f266
	strb r0, [r4, #13]	@ 0009f266 6073
.org 0x9f268
	strb r1, [r4, #14]	@ 0009f268 a173
.org 0x9f26a
	subs r0, r2, #1	@ 0009f26a 501e
.org 0x9f26c
	strb r0, [r4, #18]	@ 0009f26c a074
.org 0x9f26e
	pop {r4}	@ 0009f26e 10bc
.org 0x9f270
	pop {r0}	@ 0009f270 01bc
.org 0x9f272
	bx r0	@ 0009f272 0047
