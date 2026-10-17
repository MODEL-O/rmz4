@ FUN_080761dc  entry 0x080761dc  size 264
.thumb
.org 0x761dc
FUN_080761dc:
	push {r4, r5, lr}	@ 000761dc 30b5
.org 0x761de
	adds r4, r0, #0	@ 000761de 041c
.org 0x761e0
	ldrb r0, [r4, #14]	@ 000761e0 a07b
.org 0x761e2
	adds r1, r0, #0	@ 000761e2 011c
.org 0x761e4
	cmp r1, #0	@ 000761e4 0029
.org 0x761e6
	bne.n 0x761f0	@ 000761e6 03d1
.org 0x761e8
	str r1, [r4, #96]	@ 000761e8 2166
.org 0x761ea
	strb r1, [r4, #15]	@ 000761ea e173
.org 0x761ec
	adds r0, #1	@ 000761ec 0130
.org 0x761ee
	strb r0, [r4, #14]	@ 000761ee a073
.org 0x761f0
	adds r0, r4, #0	@ 000761f0 201c
.org 0x761f2
	bl 0x1cff0	@ 000761f2 a6f7fdfe
.org 0x761f6
	ldr r0, [r4, #88]	@ 000761f6 a06d
.org 0x761f8
	ldr r1, [r4, #96]	@ 000761f8 216e
.org 0x761fa
	adds r0, r0, r1	@ 000761fa 4018
.org 0x761fc
	str r0, [r4, #88]	@ 000761fc a065
.org 0x761fe
	adds r1, #64	@ 000761fe 4031
.org 0x76200
	str r1, [r4, #96]	@ 00076200 2166
.org 0x76202
	movs r0, #160	@ 00076202 a020
.org 0x76204
	lsls r0, r0, #3	@ 00076204 c000
.org 0x76206
	cmp r1, r0	@ 00076206 8142
.org 0x76208
	ble.n 0x7620c	@ 00076208 00dd
.org 0x7620a
	str r0, [r4, #96]	@ 0007620a 2066
.org 0x7620c
	ldrb r0, [r4, #15]	@ 0007620c e07b
.org 0x7620e
	cmp r0, #0	@ 0007620e 0028
.org 0x76210
	bne.n 0x7628c	@ 00076210 3cd1
.org 0x76212
	movs r3, #0	@ 00076212 0023
.org 0x76214
	ldr r0, [pc, #60]	@ 00076214 0f48
.org 0x76216
	ldr r2, [r0, #0]	@ 00076216 0268
.org 0x76218
	ldr r1, [r4, #84]	@ 00076218 616d
.org 0x7621a
	ldr r0, [r2, #84]	@ 0007621a 506d
.org 0x7621c
	cmp r1, r0	@ 0007621c 8142
.org 0x7621e
	bge.n 0x76222	@ 0007621e 00da
.org 0x76220
	movs r3, #1	@ 00076220 0123
.org 0x76222
	adds r0, r4, #0	@ 00076222 201c
.org 0x76224
	adds r0, #76	@ 00076224 4c30
.org 0x76226
	strb r3, [r0, #0]	@ 00076226 0370
.org 0x76228
	movs r3, #0	@ 00076228 0023
.org 0x7622a
	ldr r1, [r4, #84]	@ 0007622a 616d
.org 0x7622c
	ldr r0, [r2, #84]	@ 0007622c 506d
.org 0x7622e
	cmp r1, r0	@ 0007622e 8142
.org 0x76230
	bge.n 0x76234	@ 00076230 00da
.org 0x76232
	movs r3, #1	@ 00076232 0123
.org 0x76234
	adds r5, r4, #0	@ 00076234 251c
.org 0x76236
	adds r5, #74	@ 00076236 4a35
.org 0x76238
	lsls r2, r3, #4	@ 00076238 1a01
.org 0x7623a
	ldrb r1, [r5, #0]	@ 0007623a 2978
.org 0x7623c
	movs r0, #17	@ 0007623c 1120
.org 0x7623e
	negs r0, r0	@ 0007623e 4042
.org 0x76240
	ands r0, r1	@ 00076240 0840
.org 0x76242
	orrs r0, r2	@ 00076242 1043
.org 0x76244
	strb r0, [r5, #0]	@ 00076244 2870
.org 0x76246
	cmp r3, #0	@ 00076246 002b
.org 0x76248
	beq.n 0x76258	@ 00076248 06d0
.org 0x7624a
	ldrb r0, [r4, #10]	@ 0007624a a07a
.org 0x7624c
	movs r1, #16	@ 0007624c 1021
.org 0x7624e
	orrs r0, r1	@ 0007624e 0843
.org 0x76250
	b.n 0x7625e	@ 00076250 05e0
.org 0x76252
	.byte 0x00	@ 00076252 data
.org 0x76253
	.byte 0x00	@ 00076253 data
.org 0x76254
	.byte 0xf0,0xdb,0x02,0x02	@ 00076254 data
.org 0x76258
	ldrb r1, [r4, #10]	@ 00076258 a17a
.org 0x7625a
	movs r0, #239	@ 0007625a ef20
.org 0x7625c
	ands r0, r1	@ 0007625c 0840
.org 0x7625e
	strb r0, [r4, #10]	@ 0007625e a072
.org 0x76260
	adds r5, r4, #0	@ 00076260 251c
.org 0x76262
	adds r5, #180	@ 00076262 b435
.org 0x76264
	ldr r0, [r5, #4]	@ 00076264 6868
.org 0x76266
	movs r1, #160	@ 00076266 a021
.org 0x76268
	lsls r1, r1, #5	@ 00076268 4901
.org 0x7626a
	adds r0, r0, r1	@ 0007626a 4018
.org 0x7626c
	ldr r1, [r4, #88]	@ 0007626c a16d
.org 0x7626e
	cmp r1, r0	@ 0007626e 8142
.org 0x76270
	blt.n 0x762f2	@ 00076270 3fdb
.org 0x76272
	movs r0, #222	@ 00076272 de20
.org 0x76274
	bl 0x2b10	@ 00076274 8cf74cfc
.org 0x76278
	ldr r0, [r5, #4]	@ 00076278 6868
.org 0x7627a
	movs r1, #160	@ 0007627a a021
.org 0x7627c
	lsls r1, r1, #5	@ 0007627c 4901
.org 0x7627e
	adds r0, r0, r1	@ 0007627e 4018
.org 0x76280
	str r0, [r4, #88]	@ 00076280 a065
.org 0x76282
	ldr r0, [pc, #4]	@ 00076282 0148
.org 0x76284
	str r0, [r4, #96]	@ 00076284 2066
.org 0x76286
	b.n 0x762c8	@ 00076286 1fe0
.org 0x76288
	.byte 0x80,0xfb,0xff,0xff	@ 00076288 data
.org 0x7628c
	cmp r0, #1	@ 0007628c 0128
.org 0x7628e
	bne.n 0x762ac	@ 0007628e 0dd1
.org 0x76290
	ldr r0, [r4, #96]	@ 00076290 206e
.org 0x76292
	cmp r0, #0	@ 00076292 0028
.org 0x76294
	ble.n 0x762f2	@ 00076294 2ddd
.org 0x76296
	ldr r1, [pc, #16]	@ 00076296 0449
.org 0x76298
	adds r0, r4, #0	@ 00076298 201c
.org 0x7629a
	bl 0x1cf00	@ 0007629a a6f731fe
.org 0x7629e
	adds r0, r4, #0	@ 0007629e 201c
.org 0x762a0
	bl 0x1cff0	@ 000762a0 a6f7a6fe
.org 0x762a4
	b.n 0x762c8	@ 000762a4 10e0
.org 0x762a6
	.byte 0x00	@ 000762a6 data
.org 0x762a7
	.byte 0x00	@ 000762a7 data
.org 0x762a8
	.byte 0x0a,0xaf,0x00,0x00	@ 000762a8 data
.org 0x762ac
	cmp r0, #2	@ 000762ac 0228
.org 0x762ae
	bne.n 0x762d4	@ 000762ae 11d1
.org 0x762b0
	adds r0, r4, #0	@ 000762b0 201c
.org 0x762b2
	adds r0, #113	@ 000762b2 7130
.org 0x762b4
	ldrb r0, [r0, #0]	@ 000762b4 0078
.org 0x762b6
	lsls r0, r0, #24	@ 000762b6 0006
.org 0x762b8
	asrs r0, r0, #24	@ 000762b8 0016
.org 0x762ba
	cmp r0, #0	@ 000762ba 0028
.org 0x762bc
	ble.n 0x762f2	@ 000762bc 19dd
.org 0x762be
	adds r0, r4, #0	@ 000762be 201c
.org 0x762c0
	adds r0, #116	@ 000762c0 7430
.org 0x762c2
	ldr r1, [pc, #12]	@ 000762c2 0349
.org 0x762c4
	bl 0x5784	@ 000762c4 8ff75efa
.org 0x762c8
	ldrb r0, [r4, #15]	@ 000762c8 e07b
.org 0x762ca
	adds r0, #1	@ 000762ca 0130
.org 0x762cc
	strb r0, [r4, #15]	@ 000762cc e073
.org 0x762ce
	b.n 0x762f2	@ 000762ce 10e0
.org 0x762d0
	.byte 0xac,0xce,0x85,0x08	@ 000762d0 data
.org 0x762d4
	adds r5, r4, #0	@ 000762d4 251c
.org 0x762d6
	adds r5, #180	@ 000762d6 b435
.org 0x762d8
	ldr r1, [r4, #88]	@ 000762d8 a16d
.org 0x762da
	ldr r0, [r5, #4]	@ 000762da 6868
.org 0x762dc
	cmp r1, r0	@ 000762dc 8142
.org 0x762de
	blt.n 0x762f2	@ 000762de 08db
.org 0x762e0
	movs r0, #222	@ 000762e0 de20
.org 0x762e2
	bl 0x2b10	@ 000762e2 8cf715fc
