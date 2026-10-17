@ FUN_0805b218  entry 0x0805b218  size 116
.thumb
.org 0x5b218
FUN_0805b218:
	push {r4, lr}	@ 0005b218 10b5
.org 0x5b21a
	adds r4, r0, #0	@ 0005b21a 041c
.org 0x5b21c
	ldrb r0, [r4, #15]	@ 0005b21c e07b
.org 0x5b21e
	cmp r0, #0	@ 0005b21e 0028
.org 0x5b220
	bne.n 0x5b256	@ 0005b220 19d1
.org 0x5b222
	adds r0, r4, #0	@ 0005b222 201c
.org 0x5b224
	adds r0, #116	@ 0005b224 7430
.org 0x5b226
	ldr r1, [pc, #100]	@ 0005b226 1949
.org 0x5b228
	bl 0x5784	@ 0005b228 aaf7acfa
.org 0x5b22c
	ldrb r0, [r4, #30]	@ 0005b22c a07f
.org 0x5b22e
	lsls r0, r0, #8	@ 0005b22e 0002
.org 0x5b230
	adds r1, r4, #0	@ 0005b230 211c
.org 0x5b232
	adds r1, #112	@ 0005b232 7031
.org 0x5b234
	ldrb r1, [r1, #0]	@ 0005b234 0978
.org 0x5b236
	orrs r0, r1	@ 0005b236 0843
.org 0x5b238
	ldr r1, [pc, #84]	@ 0005b238 1549
.org 0x5b23a
	cmp r0, r1	@ 0005b23a 8842
.org 0x5b23c
	beq.n 0x5b24c	@ 0005b23c 06d0
.org 0x5b23e
	adds r0, r4, #0	@ 0005b23e 201c
.org 0x5b240
	bl 0x1cf00	@ 0005b240 c1f75efe
.org 0x5b244
	adds r1, r4, #0	@ 0005b244 211c
.org 0x5b246
	adds r1, #189	@ 0005b246 bd31
.org 0x5b248
	movs r0, #1	@ 0005b248 0120
.org 0x5b24a
	strb r0, [r1, #0]	@ 0005b24a 0870
.org 0x5b24c
	movs r0, #128	@ 0005b24c 8020
.org 0x5b24e
	strb r0, [r4, #18]	@ 0005b24e a074
.org 0x5b250
	ldrb r0, [r4, #15]	@ 0005b250 e07b
.org 0x5b252
	adds r0, #1	@ 0005b252 0130
.org 0x5b254
	strb r0, [r4, #15]	@ 0005b254 e073
.org 0x5b256
	adds r0, r4, #0	@ 0005b256 201c
.org 0x5b258
	bl 0x1cff0	@ 0005b258 c1f7cafe
.org 0x5b25c
	ldrb r0, [r4, #18]	@ 0005b25c a07c
.org 0x5b25e
	cmp r0, #0	@ 0005b25e 0028
.org 0x5b260
	beq.n 0x5b26c	@ 0005b260 04d0
.org 0x5b262
	subs r0, #1	@ 0005b262 0138
.org 0x5b264
	strb r0, [r4, #18]	@ 0005b264 a074
.org 0x5b266
	lsls r0, r0, #24	@ 0005b266 0006
.org 0x5b268
	cmp r0, #0	@ 0005b268 0028
.org 0x5b26a
	bne.n 0x5b286	@ 0005b26a 0cd1
.org 0x5b26c
	adds r0, r4, #0	@ 0005b26c 201c
.org 0x5b26e
	adds r0, #200	@ 0005b26e c830
.org 0x5b270
	ldr r0, [r0, #0]	@ 0005b270 0068
.org 0x5b272
	cmp r0, #0	@ 0005b272 0028
.org 0x5b274
	beq.n 0x5b280	@ 0005b274 04d0
.org 0x5b276
	adds r0, r4, #0	@ 0005b276 201c
.org 0x5b278
	adds r0, #191	@ 0005b278 bf30
.org 0x5b27a
	ldrb r0, [r0, #0]	@ 0005b27a 0078
.org 0x5b27c
	cmp r0, #4	@ 0005b27c 0428
.org 0x5b27e
	beq.n 0x5b286	@ 0005b27e 02d0
.org 0x5b280
	adds r0, r4, #0	@ 0005b280 201c
.org 0x5b282
	bl 0x5bf8c	@ 0005b282 00f083fe
.org 0x5b286
	pop {r4}	@ 0005b286 10bc
.org 0x5b288
	pop {r0}	@ 0005b288 01bc
.org 0x5b28a
	bx r0	@ 0005b28a 0047
