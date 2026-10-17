@ FUN_08054214  entry 0x08054214  size 126
.thumb
.org 0x54214
FUN_08054214:
	push {r4, lr}	@ 00054214 10b5
.org 0x54216
	adds r4, r0, #0	@ 00054216 041c
.org 0x54218
	ldrb r0, [r4, #15]	@ 00054218 e07b
.org 0x5421a
	cmp r0, #0	@ 0005421a 0028
.org 0x5421c
	bne.n 0x54252	@ 0005421c 19d1
.org 0x5421e
	adds r2, r4, #0	@ 0005421e 221c
.org 0x54220
	adds r2, #196	@ 00054220 c432
.org 0x54222
	ldr r0, [r2, #0]	@ 00054222 1068
.org 0x54224
	adds r0, #184	@ 00054224 b830
.org 0x54226
	movs r1, #4	@ 00054226 0421
.org 0x54228
	strb r1, [r0, #0]	@ 00054228 0170
.org 0x5422a
	ldr r0, [r2, #0]	@ 0005422a 1068
.org 0x5422c
	adds r0, #188	@ 0005422c bc30
.org 0x5422e
	movs r3, #32	@ 0005422e 2023
.org 0x54230
	strh r3, [r0, #0]	@ 00054230 0380
.org 0x54232
	adds r2, #4	@ 00054232 0432
.org 0x54234
	ldr r0, [r2, #0]	@ 00054234 1068
.org 0x54236
	adds r0, #184	@ 00054236 b830
.org 0x54238
	movs r1, #7	@ 00054238 0721
.org 0x5423a
	strb r1, [r0, #0]	@ 0005423a 0170
.org 0x5423c
	ldr r0, [r2, #0]	@ 0005423c 1068
.org 0x5423e
	adds r0, #188	@ 0005423e bc30
.org 0x54240
	strh r3, [r0, #0]	@ 00054240 0380
.org 0x54242
	movs r1, #176	@ 00054242 b021
.org 0x54244
	lsls r1, r1, #6	@ 00054244 8901
.org 0x54246
	adds r0, r4, #0	@ 00054246 201c
.org 0x54248
	bl 0x1cf00	@ 00054248 c8f75afe
.org 0x5424c
	ldrb r0, [r4, #15]	@ 0005424c e07b
.org 0x5424e
	adds r0, #1	@ 0005424e 0130
.org 0x54250
	strb r0, [r4, #15]	@ 00054250 e073
.org 0x54252
	adds r0, r4, #0	@ 00054252 201c
.org 0x54254
	bl 0x1cff0	@ 00054254 c8f7ccfe
.org 0x54258
	adds r0, r4, #0	@ 00054258 201c
.org 0x5425a
	bl 0x54fb0	@ 0005425a 00f0a9fe
.org 0x5425e
	adds r0, r4, #0	@ 0005425e 201c
.org 0x54260
	movs r1, #0	@ 00054260 0021
.org 0x54262
	bl 0x55068	@ 00054262 00f001ff
.org 0x54266
	adds r0, r4, #0	@ 00054266 201c
.org 0x54268
	adds r0, #196	@ 00054268 c430
.org 0x5426a
	ldr r0, [r0, #0]	@ 0005426a 0068
.org 0x5426c
	adds r0, #188	@ 0005426c bc30
.org 0x5426e
	movs r1, #0	@ 0005426e 0021
.org 0x54270
	ldrsh r0, [r0, r1]	@ 00054270 405e
.org 0x54272
	cmp r0, #0	@ 00054272 0028
.org 0x54274
	bne.n 0x5428c	@ 00054274 0ad1
.org 0x54276
	adds r0, r4, #0	@ 00054276 201c
.org 0x54278
	adds r0, #200	@ 00054278 c830
.org 0x5427a
	ldr r0, [r0, #0]	@ 0005427a 0068
.org 0x5427c
	adds r0, #188	@ 0005427c bc30
.org 0x5427e
	movs r2, #0	@ 0005427e 0022
.org 0x54280
	ldrsh r1, [r0, r2]	@ 00054280 815e
.org 0x54282
	cmp r1, #0	@ 00054282 0029
.org 0x54284
	bne.n 0x5428c	@ 00054284 02d1
.org 0x54286
	movs r0, #4	@ 00054286 0420
.org 0x54288
	strb r0, [r4, #14]	@ 00054288 a073
.org 0x5428a
	strb r1, [r4, #15]	@ 0005428a e173
.org 0x5428c
	pop {r4}	@ 0005428c 10bc
.org 0x5428e
	pop {r0}	@ 0005428e 01bc
.org 0x54290
	bx r0	@ 00054290 0047
