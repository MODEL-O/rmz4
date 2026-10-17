@ FUN_080ef21c  entry 0x080ef21c  size 140
.thumb
.org 0xef21c
FUN_080ef21c:
	push {r4, lr}	@ 000ef21c 10b5
.org 0xef21e
	adds r4, r0, #0	@ 000ef21e 041c
.org 0xef220
	ldrb r0, [r4, #13]	@ 000ef220 607b
.org 0xef222
	cmp r0, #0	@ 000ef222 0028
.org 0xef224
	beq.n 0xef22c	@ 000ef224 02d0
.org 0xef226
	cmp r0, #1	@ 000ef226 0128
.org 0xef228
	beq.n 0xef270	@ 000ef228 22d0
.org 0xef22a
	b.n 0xef368	@ 000ef22a 9de0
.org 0xef22c
	ldr r1, [pc, #24]	@ 000ef22c 0649
.org 0xef22e
	adds r0, r4, #0	@ 000ef22e 201c
.org 0xef230
	bl 0x1cf00	@ 000ef230 2df766fe
.org 0xef234
	ldrb r0, [r4, #17]	@ 000ef234 607c
.org 0xef236
	movs r1, #3	@ 000ef236 0321
.org 0xef238
	ands r1, r0	@ 000ef238 0140
.org 0xef23a
	cmp r1, #1	@ 000ef23a 0129
.org 0xef23c
	beq.n 0xef258	@ 000ef23c 0cd0
.org 0xef23e
	cmp r1, #1	@ 000ef23e 0129
.org 0xef240
	bgt.n 0xef24c	@ 000ef240 04dc
.org 0xef242
	cmp r1, #0	@ 000ef242 0029
.org 0xef244
	beq.n 0xef252	@ 000ef244 05d0
.org 0xef246
	b.n 0xef264	@ 000ef246 0de0
.org 0xef248
	.byte 0x0b,0x40,0x00,0x00	@ 000ef248 data
.org 0xef24c
	cmp r1, #2	@ 000ef24c 0229
.org 0xef24e
	beq.n 0xef25e	@ 000ef24e 06d0
.org 0xef250
	b.n 0xef264	@ 000ef250 08e0
.org 0xef252
	movs r0, #192	@ 000ef252 c020
.org 0xef254
	lsls r0, r0, #3	@ 000ef254 c000
.org 0xef256
	b.n 0xef262	@ 000ef256 04e0
.org 0xef258
	movs r0, #224	@ 000ef258 e020
.org 0xef25a
	lsls r0, r0, #3	@ 000ef25a c000
.org 0xef25c
	b.n 0xef262	@ 000ef25c 01e0
.org 0xef25e
	movs r0, #202	@ 000ef25e ca20
.org 0xef260
	lsls r0, r0, #3	@ 000ef260 c000
.org 0xef262
	str r0, [r4, #92]	@ 000ef262 e065
.org 0xef264
	movs r0, #0	@ 000ef264 0020
.org 0xef266
	strb r0, [r4, #18]	@ 000ef266 a074
.org 0xef268
	strb r0, [r4, #19]	@ 000ef268 e074
.org 0xef26a
	ldrb r0, [r4, #13]	@ 000ef26a 607b
.org 0xef26c
	adds r0, #1	@ 000ef26c 0130
.org 0xef26e
	strb r0, [r4, #13]	@ 000ef26e 6073
.org 0xef270
	ldrb r0, [r4, #17]	@ 000ef270 607c
.org 0xef272
	cmp r0, #6	@ 000ef272 0628
.org 0xef274
	bls.n 0xef278	@ 000ef274 00d9
.org 0xef276
	b.n 0xef368	@ 000ef276 77e0
.org 0xef278
	lsls r0, r0, #2	@ 000ef278 8000
.org 0xef27a
	ldr r1, [pc, #8]	@ 000ef27a 0249
.org 0xef27c
	adds r0, r0, r1	@ 000ef27c 4018
.org 0xef27e
	ldr r0, [r0, #0]	@ 000ef27e 0068
.org 0xef280
	mov pc, r0	@ 000ef280 8746
.org 0xef282
	.byte 0x00	@ 000ef282 data
.org 0xef283
	.byte 0x00	@ 000ef283 data
.org 0xef284
	.byte 0x88,0xf2,0x0e,0x08	@ 000ef284 data
.org 0xef288
	.byte 0xa4,0xf2,0x0e,0x08	@ 000ef288 data
.org 0xef28c
	.byte 0xc0,0xf2,0x0e,0x08	@ 000ef28c data
.org 0xef290
	.byte 0xd8,0xf2,0x0e,0x08	@ 000ef290 data
.org 0xef294
	.byte 0xf4,0xf2,0x0e,0x08	@ 000ef294 data
.org 0xef298
	.byte 0x0c,0xf3,0x0e,0x08	@ 000ef298 data
.org 0xef29c
	.byte 0x28,0xf3,0x0e,0x08	@ 000ef29c data
.org 0xef2a0
	.byte 0x44,0xf3,0x0e,0x08	@ 000ef2a0 data
.org 0xef2a4
	.byte 0xa0	@ 000ef2a4 data
.org 0xef2a5
	.byte 0x7c	@ 000ef2a5 data
.org 0xef2a6
	.byte 0x04	@ 000ef2a6 data
.org 0xef2a7
	.byte 0x30	@ 000ef2a7 data
