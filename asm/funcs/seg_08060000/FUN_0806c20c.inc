@ FUN_0806c20c  entry 0x0806c20c  size 226
.thumb
.org 0x6c20c
FUN_0806c20c:
	push {r4, lr}	@ 0006c20c 10b5
.org 0x6c20e
	adds r4, r0, #0	@ 0006c20e 041c
.org 0x6c210
	ldrb r0, [r4, #14]	@ 0006c210 a07b
.org 0x6c212
	cmp r0, #0	@ 0006c212 0028
.org 0x6c214
	bne.n 0x6c246	@ 0006c214 17d1
.org 0x6c216
	ldr r1, [pc, #28]	@ 0006c216 0749
.org 0x6c218
	adds r0, r4, #0	@ 0006c218 201c
.org 0x6c21a
	bl 0x1cf00	@ 0006c21a b0f771fe
.org 0x6c21e
	movs r0, #199	@ 0006c21e c720
.org 0x6c220
	bl 0x2b10	@ 0006c220 96f776fc
.org 0x6c224
	ldrb r1, [r4, #10]	@ 0006c224 a17a
.org 0x6c226
	movs r0, #16	@ 0006c226 1020
.org 0x6c228
	ands r0, r1	@ 0006c228 0840
.org 0x6c22a
	cmp r0, #0	@ 0006c22a 0028
.org 0x6c22c
	beq.n 0x6c238	@ 0006c22c 04d0
.org 0x6c22e
	movs r0, #160	@ 0006c22e a020
.org 0x6c230
	lsls r0, r0, #3	@ 0006c230 c000
.org 0x6c232
	b.n 0x6c23a	@ 0006c232 02e0
.org 0x6c234
	.byte 0x09,0xaa,0x00,0x00	@ 0006c234 data
.org 0x6c238
	ldr r0, [pc, #56]	@ 0006c238 0e48
.org 0x6c23a
	str r0, [r4, #92]	@ 0006c23a e065
.org 0x6c23c
	movs r0, #0	@ 0006c23c 0020
.org 0x6c23e
	strb r0, [r4, #15]	@ 0006c23e e073
.org 0x6c240
	ldrb r0, [r4, #14]	@ 0006c240 a07b
.org 0x6c242
	adds r0, #1	@ 0006c242 0130
.org 0x6c244
	strb r0, [r4, #14]	@ 0006c244 a073
.org 0x6c246
	adds r0, r4, #0	@ 0006c246 201c
.org 0x6c248
	bl 0x1cff0	@ 0006c248 b0f7d2fe
.org 0x6c24c
	ldrb r3, [r4, #15]	@ 0006c24c e37b
.org 0x6c24e
	adds r0, r3, #0	@ 0006c24e 181c
.org 0x6c250
	cmp r0, #0	@ 0006c250 0028
.org 0x6c252
	bne.n 0x6c27c	@ 0006c252 13d1
.org 0x6c254
	adds r0, r4, #0	@ 0006c254 201c
.org 0x6c256
	adds r0, #113	@ 0006c256 7130
.org 0x6c258
	ldrb r0, [r0, #0]	@ 0006c258 0078
.org 0x6c25a
	lsls r0, r0, #24	@ 0006c25a 0006
.org 0x6c25c
	asrs r0, r0, #24	@ 0006c25c 0016
.org 0x6c25e
	cmp r0, #1	@ 0006c25e 0128
.org 0x6c260
	ble.n 0x6c2fa	@ 0006c260 4bdd
.org 0x6c262
	adds r0, r4, #0	@ 0006c262 201c
.org 0x6c264
	adds r0, #116	@ 0006c264 7430
.org 0x6c266
	ldr r1, [pc, #16]	@ 0006c266 0449
.org 0x6c268
	bl 0x5784	@ 0006c268 99f78cfa
.org 0x6c26c
	ldrb r0, [r4, #15]	@ 0006c26c e07b
.org 0x6c26e
	adds r0, #1	@ 0006c26e 0130
.org 0x6c270
	strb r0, [r4, #15]	@ 0006c270 e073
.org 0x6c272
	b.n 0x6c2fa	@ 0006c272 42e0
.org 0x6c274
	.byte 0x00,0xfb,0xff,0xff	@ 0006c274 data
.org 0x6c278
	.byte 0x0c,0xc2,0x85,0x08	@ 0006c278 data
.org 0x6c27c
	cmp r0, #1	@ 0006c27c 0128
.org 0x6c27e
	bne.n 0x6c2c0	@ 0006c27e 1fd1
.org 0x6c280
	ldr r1, [r4, #84]	@ 0006c280 616d
.org 0x6c282
	ldr r0, [r4, #92]	@ 0006c282 e06d
.org 0x6c284
	adds r2, r1, r0	@ 0006c284 0a18
.org 0x6c286
	str r2, [r4, #84]	@ 0006c286 6265
.org 0x6c288
	ldrb r1, [r4, #10]	@ 0006c288 a17a
.org 0x6c28a
	movs r0, #16	@ 0006c28a 1020
.org 0x6c28c
	ands r0, r1	@ 0006c28c 0840
.org 0x6c28e
	cmp r0, #0	@ 0006c28e 0028
.org 0x6c290
	beq.n 0x6c2a8	@ 0006c290 0ad0
.org 0x6c292
	adds r0, r4, #0	@ 0006c292 201c
.org 0x6c294
	adds r0, #180	@ 0006c294 b430
.org 0x6c296
	ldr r0, [r0, #24]	@ 0006c296 8069
.org 0x6c298
	ldr r1, [pc, #8]	@ 0006c298 0249
.org 0x6c29a
	adds r0, r0, r1	@ 0006c29a 4018
.org 0x6c29c
	cmp r2, r0	@ 0006c29c 8242
.org 0x6c29e
	ble.n 0x6c2fa	@ 0006c29e 2cdd
.org 0x6c2a0
	b.n 0x6c2b8	@ 0006c2a0 0ae0
.org 0x6c2a2
	.byte 0x00	@ 0006c2a2 data
.org 0x6c2a3
	.byte 0x00	@ 0006c2a3 data
.org 0x6c2a4
	.byte 0x00,0xe8,0xff,0xff	@ 0006c2a4 data
.org 0x6c2a8
	adds r0, r4, #0	@ 0006c2a8 201c
.org 0x6c2aa
	adds r0, #180	@ 0006c2aa b430
.org 0x6c2ac
	ldr r0, [r0, #20]	@ 0006c2ac 4069
.org 0x6c2ae
	movs r1, #192	@ 0006c2ae c021
.org 0x6c2b0
	lsls r1, r1, #5	@ 0006c2b0 4901
.org 0x6c2b2
	adds r0, r0, r1	@ 0006c2b2 4018
.org 0x6c2b4
	cmp r2, r0	@ 0006c2b4 8242
.org 0x6c2b6
	bge.n 0x6c2fa	@ 0006c2b6 20da
.org 0x6c2b8
	str r0, [r4, #84]	@ 0006c2b8 6065
.org 0x6c2ba
	adds r0, r3, #1	@ 0006c2ba 581c
.org 0x6c2bc
	strb r0, [r4, #15]	@ 0006c2bc e073
.org 0x6c2be
	b.n 0x6c2fa	@ 0006c2be 1ce0
.org 0x6c2c0
	ldrb r0, [r4, #30]	@ 0006c2c0 a07f
.org 0x6c2c2
	lsls r0, r0, #8	@ 0006c2c2 0002
.org 0x6c2c4
	adds r1, r4, #0	@ 0006c2c4 211c
.org 0x6c2c6
	adds r1, #112	@ 0006c2c6 7031
.org 0x6c2c8
	ldrb r1, [r1, #0]	@ 0006c2c8 0978
.org 0x6c2ca
	orrs r0, r1	@ 0006c2ca 0843
.org 0x6c2cc
	ldr r1, [pc, #48]	@ 0006c2cc 0c49
.org 0x6c2ce
	cmp r0, r1	@ 0006c2ce 8842
.org 0x6c2d0
	beq.n 0x6c2e8	@ 0006c2d0 0ad0
.org 0x6c2d2
	adds r0, r4, #0	@ 0006c2d2 201c
.org 0x6c2d4
	bl 0x1cf00	@ 0006c2d4 b0f714fe
.org 0x6c2d8
	adds r0, r4, #0	@ 0006c2d8 201c
.org 0x6c2da
	bl 0x1cff0	@ 0006c2da b0f789fe
.org 0x6c2de
	adds r0, r4, #0	@ 0006c2de 201c
.org 0x6c2e0
	adds r0, #116	@ 0006c2e0 7430
.org 0x6c2e2
	ldr r1, [pc, #32]	@ 0006c2e2 0849
.org 0x6c2e4
	bl 0x5784	@ 0006c2e4 99f74efa
.org 0x6c2e8
	adds r0, r4, #0	@ 0006c2e8 201c
.org 0x6c2ea
	adds r0, #115	@ 0006c2ea 7330
.org 0x6c2ec
	ldrb r0, [r0, #0]	@ 0006c2ec 0078
