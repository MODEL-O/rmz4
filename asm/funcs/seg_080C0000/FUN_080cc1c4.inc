@ FUN_080cc1c4  entry 0x080cc1c4  size 212
.thumb
.org 0xcc1c4
FUN_080cc1c4:
	push {r4, r5, r6, lr}	@ 000cc1c4 70b5
.org 0xcc1c6
	adds r6, r0, #0	@ 000cc1c6 061c
.org 0xcc1c8
	bl 0x1cc9c	@ 000cc1c8 50f768fd
.org 0xcc1cc
	ldrb r1, [r6, #10]	@ 000cc1cc b17a
.org 0xcc1ce
	movs r0, #1	@ 000cc1ce 0120
.org 0xcc1d0
	movs r4, #0	@ 000cc1d0 0024
.org 0xcc1d2
	orrs r0, r1	@ 000cc1d2 0843
.org 0xcc1d4
	movs r1, #2	@ 000cc1d4 0221
.org 0xcc1d6
	orrs r0, r1	@ 000cc1d6 0843
.org 0xcc1d8
	strb r0, [r6, #10]	@ 000cc1d8 b072
.org 0xcc1da
	ldr r1, [pc, #28]	@ 000cc1da 0749
.org 0xcc1dc
	adds r0, r6, #0	@ 000cc1dc 301c
.org 0xcc1de
	bl 0x1cf00	@ 000cc1de 50f78ffe
.org 0xcc1e2
	adds r0, r6, #0	@ 000cc1e2 301c
.org 0xcc1e4
	bl 0x1cff0	@ 000cc1e4 50f704ff
.org 0xcc1e8
	ldrb r2, [r6, #17]	@ 000cc1e8 727c
.org 0xcc1ea
	cmp r2, #0	@ 000cc1ea 002a
.org 0xcc1ec
	beq.n 0xcc1fc	@ 000cc1ec 06d0
.org 0xcc1ee
	ldrb r0, [r6, #10]	@ 000cc1ee b07a
.org 0xcc1f0
	movs r1, #16	@ 000cc1f0 1021
.org 0xcc1f2
	orrs r0, r1	@ 000cc1f2 0843
.org 0xcc1f4
	b.n 0xcc202	@ 000cc1f4 05e0
.org 0xcc1f6
	.byte 0x00	@ 000cc1f6 data
.org 0xcc1f7
	.byte 0x00	@ 000cc1f7 data
.org 0xcc1f8
	.byte 0x02,0x95,0x00,0x00	@ 000cc1f8 data
.org 0xcc1fc
	ldrb r1, [r6, #10]	@ 000cc1fc b17a
.org 0xcc1fe
	movs r0, #239	@ 000cc1fe ef20
.org 0xcc200
	ands r0, r1	@ 000cc200 0840
.org 0xcc202
	strb r0, [r6, #10]	@ 000cc202 b072
.org 0xcc204
	movs r1, #1	@ 000cc204 0121
.org 0xcc206
	ands r1, r2	@ 000cc206 1140
.org 0xcc208
	adds r0, r6, #0	@ 000cc208 301c
.org 0xcc20a
	adds r0, #76	@ 000cc20a 4c30
.org 0xcc20c
	movs r5, #0	@ 000cc20c 0025
.org 0xcc20e
	strb r1, [r0, #0]	@ 000cc20e 0170
.org 0xcc210
	adds r3, r6, #0	@ 000cc210 331c
.org 0xcc212
	adds r3, #74	@ 000cc212 4a33
.org 0xcc214
	lsls r1, r1, #4	@ 000cc214 0901
.org 0xcc216
	ldrb r2, [r3, #0]	@ 000cc216 1a78
.org 0xcc218
	movs r0, #17	@ 000cc218 1120
.org 0xcc21a
	negs r0, r0	@ 000cc21a 4042
.org 0xcc21c
	ands r0, r2	@ 000cc21c 1040
.org 0xcc21e
	orrs r0, r1	@ 000cc21e 0843
.org 0xcc220
	strb r0, [r3, #0]	@ 000cc220 1870
.org 0xcc222
	ldrb r1, [r6, #10]	@ 000cc222 b17a
.org 0xcc224
	movs r0, #4	@ 000cc224 0420
.org 0xcc226
	orrs r0, r1	@ 000cc226 0843
.org 0xcc228
	strb r0, [r6, #10]	@ 000cc228 b072
.org 0xcc22a
	adds r4, r6, #0	@ 000cc22a 341c
.org 0xcc22c
	adds r4, #116	@ 000cc22c 7434
.org 0xcc22e
	ldr r1, [pc, #44]	@ 000cc22e 0b49
.org 0xcc230
	adds r2, r6, #0	@ 000cc230 321c
.org 0xcc232
	adds r2, #84	@ 000cc232 5432
.org 0xcc234
	adds r0, r4, #0	@ 000cc234 201c
.org 0xcc236
	movs r3, #8	@ 000cc236 0823
.org 0xcc238
	bl 0x5760	@ 000cc238 39f792fa
.org 0xcc23c
	str r6, [r4, #44]	@ 000cc23c e662
.org 0xcc23e
	str r5, [r4, #36]	@ 000cc23e 6562
.org 0xcc240
	ldrb r1, [r6, #10]	@ 000cc240 b17a
.org 0xcc242
	movs r0, #16	@ 000cc242 1020
.org 0xcc244
	ands r0, r1	@ 000cc244 0840
.org 0xcc246
	cmp r0, #0	@ 000cc246 0028
.org 0xcc248
	beq.n 0xcc260	@ 000cc248 0ad0
.org 0xcc24a
	ldr r0, [r6, #84]	@ 000cc24a 706d
.org 0xcc24c
	movs r1, #192	@ 000cc24c c021
.org 0xcc24e
	lsls r1, r1, #3	@ 000cc24e c900
.org 0xcc250
	adds r0, r0, r1	@ 000cc250 4018
.org 0xcc252
	str r0, [r6, #84]	@ 000cc252 7065
.org 0xcc254
	movs r0, #160	@ 000cc254 a020
.org 0xcc256
	lsls r0, r0, #2	@ 000cc256 8000
.org 0xcc258
	b.n 0xcc26a	@ 000cc258 07e0
.org 0xcc25a
	.byte 0x00	@ 000cc25a data
.org 0xcc25b
	.byte 0x00	@ 000cc25b data
.org 0xcc25c
	.byte 0xd8,0x66,0x86,0x08	@ 000cc25c data
.org 0xcc260
	ldr r0, [r6, #84]	@ 000cc260 706d
.org 0xcc262
	ldr r1, [pc, #64]	@ 000cc262 1049
.org 0xcc264
	adds r0, r0, r1	@ 000cc264 4018
.org 0xcc266
	str r0, [r6, #84]	@ 000cc266 7065
.org 0xcc268
	ldr r0, [pc, #60]	@ 000cc268 0f48
.org 0xcc26a
	str r0, [r6, #92]	@ 000cc26a f065
.org 0xcc26c
	movs r2, #0	@ 000cc26c 0022
.org 0xcc26e
	movs r0, #16	@ 000cc26e 1020
.org 0xcc270
	strb r0, [r6, #18]	@ 000cc270 b074
.org 0xcc272
	movs r0, #7	@ 000cc272 0720
.org 0xcc274
	strb r0, [r6, #19]	@ 000cc274 f074
.org 0xcc276
	ldr r0, [r6, #88]	@ 000cc276 b06d
.org 0xcc278
	ldr r1, [pc, #48]	@ 000cc278 0c49
.org 0xcc27a
	adds r0, r0, r1	@ 000cc27a 4018
.org 0xcc27c
	str r0, [r6, #88]	@ 000cc27c b065
.org 0xcc27e
	adds r1, r6, #0	@ 000cc27e 311c
.org 0xcc280
	adds r1, #184	@ 000cc280 b831
.org 0xcc282
	str r0, [r1, #0]	@ 000cc282 0860
.org 0xcc284
	str r2, [r6, #100]	@ 000cc284 7266
.org 0xcc286
	ldr r1, [pc, #40]	@ 000cc286 0a49
.org 0xcc288
	ldrb r0, [r6, #9]	@ 000cc288 707a
.org 0xcc28a
	lsls r0, r0, #2	@ 000cc28a 8000
.org 0xcc28c
	adds r0, r0, r1	@ 000cc28c 4018
.org 0xcc28e
	movs r1, #1	@ 000cc28e 0121
.org 0xcc290
	str r1, [r6, #12]	@ 000cc290 f160
.org 0xcc292
	ldr r0, [r0, #0]	@ 000cc292 0068
.org 0xcc294
	ldr r0, [r0, #4]	@ 000cc294 4068
.org 0xcc296
	str r0, [r6, #20]	@ 000cc296 7061
