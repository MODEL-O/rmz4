@ FUN_0801f224  entry 0x0801f224  size 148
.thumb
.org 0x1f224
FUN_0801f224:
	push {r4, r5, r6, lr}	@ 0001f224 70b5
.org 0x1f226
	adds r4, r0, #0	@ 0001f226 041c
.org 0x1f228
	ldr r5, [pc, #116]	@ 0001f228 1d4d
.org 0x1f22a
	ldrb r6, [r5, #0]	@ 0001f22a 2e78
.org 0x1f22c
	movs r0, #255	@ 0001f22c ff20
.org 0x1f22e
	strb r0, [r5, #3]	@ 0001f22e e870
.org 0x1f230
	movs r1, #0	@ 0001f230 0021
.org 0x1f232
	str r1, [r5, #12]	@ 0001f232 e960
.org 0x1f234
	movs r2, #188	@ 0001f234 bc22
.org 0x1f236
	lsls r2, r2, #1	@ 0001f236 5200
.org 0x1f238
	adds r0, r5, r2	@ 0001f238 a818
.org 0x1f23a
	str r4, [r0, #0]	@ 0001f23a 0460
.org 0x1f23c
	movs r2, #0	@ 0001f23c 0022
.org 0x1f23e
	strh r1, [r5, #8]	@ 0001f23e 2981
.org 0x1f240
	ldr r1, [pc, #96]	@ 0001f240 1849
.org 0x1f242
	adds r0, r5, r1	@ 0001f242 6818
.org 0x1f244
	strb r2, [r0, #0]	@ 0001f244 0270
.org 0x1f246
	subs r1, #1	@ 0001f246 0139
.org 0x1f248
	adds r0, r5, r1	@ 0001f248 6818
.org 0x1f24a
	strb r2, [r0, #0]	@ 0001f24a 0270
.org 0x1f24c
	movs r2, #194	@ 0001f24c c222
.org 0x1f24e
	lsls r2, r2, #1	@ 0001f24e 5200
.org 0x1f250
	adds r1, r5, r2	@ 0001f250 a918
.org 0x1f252
	movs r0, #1	@ 0001f252 0120
.org 0x1f254
	negs r0, r0	@ 0001f254 4042
.org 0x1f256
	str r0, [r1, #0]	@ 0001f256 0860
.org 0x1f258
	bl 0x1fe18	@ 0001f258 00f0defd
.org 0x1f25c
	adds r0, r5, #0	@ 0001f25c 281c
.org 0x1f25e
	adds r0, #232	@ 0001f25e e830
.org 0x1f260
	ldr r1, [pc, #68]	@ 0001f260 1149
.org 0x1f262
	adds r2, r4, #0	@ 0001f262 221c
.org 0x1f264
	bl 0x1f884	@ 0001f264 00f00efb
.org 0x1f268
	ldr r1, [pc, #64]	@ 0001f268 1049
.org 0x1f26a
	lsls r0, r6, #2	@ 0001f26a b000
.org 0x1f26c
	adds r0, r0, r1	@ 0001f26c 4018
.org 0x1f26e
	ldr r0, [r0, #0]	@ 0001f26e 0068
.org 0x1f270
	movs r2, #144	@ 0001f270 9022
.org 0x1f272
	lsls r2, r2, #1	@ 0001f272 5200
.org 0x1f274
	adds r1, r5, r2	@ 0001f274 a918
.org 0x1f276
	bl 0x6a94	@ 0001f276 e7f70dfc
.org 0x1f27a
	ldr r0, [pc, #52]	@ 0001f27a 0d48
.org 0x1f27c
	ldr r2, [r0, #0]	@ 0001f27c 0268
.org 0x1f27e
	ldr r0, [pc, #52]	@ 0001f27e 0d48
.org 0x1f280
	adds r0, r6, r0	@ 0001f280 3018
.org 0x1f282
	movs r1, #1	@ 0001f282 0121
.org 0x1f284
	ldrb r0, [r0, #0]	@ 0001f284 0078
.org 0x1f286
	lsls r1, r0	@ 0001f286 8140
.org 0x1f288
	ldr r0, [r2, #16]	@ 0001f288 1069
.org 0x1f28a
	ands r0, r1	@ 0001f28a 0840
.org 0x1f28c
	cmp r0, #0	@ 0001f28c 0028
.org 0x1f28e
	bne.n 0x1f2bc	@ 0001f28e 15d1
.org 0x1f290
	ldr r0, [pc, #36]	@ 0001f290 0948
.org 0x1f292
	adds r0, r6, r0	@ 0001f292 3018
.org 0x1f294
	ldrb r0, [r0, #0]	@ 0001f294 0078
.org 0x1f296
	movs r1, #0	@ 0001f296 0021
.org 0x1f298
	bl 0x1d530	@ 0001f298 fef74af9
.org 0x1f29c
	b.n 0x1f2c8	@ 0001f29c 14e0
.org 0x1f29e
	.byte 0x00	@ 0001f29e data
.org 0x1f29f
	.byte 0x00	@ 0001f29f data
.org 0x1f2a0
	.byte 0x10,0xe9,0x02,0x02	@ 0001f2a0 data
.org 0x1f2a4
	.byte 0x7d,0x01,0x00,0x00	@ 0001f2a4 data
.org 0x1f2a8
	.byte 0xf0,0x2b,0x84,0x08	@ 0001f2a8 data
.org 0x1f2ac
	.byte 0xf8,0x2a,0x84,0x08	@ 0001f2ac data
.org 0x1f2b0
	.byte 0xe0,0xe8,0x02,0x02	@ 0001f2b0 data
.org 0x1f2b4
	.byte 0xdc,0x2b,0x84,0x08	@ 0001f2b4 data
