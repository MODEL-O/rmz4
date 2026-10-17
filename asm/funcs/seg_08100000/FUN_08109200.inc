@ FUN_08109200  entry 0x08109200  size 140
.thumb
.org 0x109200
FUN_08109200:
	push {r4, r5, r6, r7, lr}	@ 00109200 f0b5
.org 0x109202
	adds r5, r0, #0	@ 00109202 051c
.org 0x109204
	adds r7, r3, #0	@ 00109204 1f1c
.org 0x109206
	ldr r4, [sp, #20]	@ 00109206 059c
.org 0x109208
	lsls r4, r4, #16	@ 00109208 2404
.org 0x10920a
	ldr r3, [r1, #0]	@ 0010920a 0b68
.org 0x10920c
	ldr r0, [r5, #0]	@ 0010920c 2868
.org 0x10920e
	adds r3, r3, r0	@ 0010920e 1b18
.org 0x109210
	ldr r1, [r1, #4]	@ 00109210 4968
.org 0x109212
	ldr r0, [r5, #4]	@ 00109212 6868
.org 0x109214
	adds r1, r1, r0	@ 00109214 0918
.org 0x109216
	ldr r0, [r2, #0]	@ 00109216 1068
.org 0x109218
	subs r3, r0, r3	@ 00109218 c31a
.org 0x10921a
	ldr r0, [r2, #4]	@ 0010921a 5068
.org 0x10921c
	subs r2, r0, r1	@ 0010921c 421a
.org 0x10921e
	lsrs r6, r4, #16	@ 0010921e 260c
.org 0x109220
	asrs r4, r4, #16	@ 00109220 2414
.org 0x109222
	adds r0, r3, r4	@ 00109222 1819
.org 0x109224
	lsls r1, r4, #1	@ 00109224 6100
.org 0x109226
	cmp r0, r1	@ 00109226 8842
.org 0x109228
	bhi.n 0x109246	@ 00109228 0dd8
.org 0x10922a
	adds r0, r2, r4	@ 0010922a 1019
.org 0x10922c
	cmp r0, r1	@ 0010922c 8842
.org 0x10922e
	bhi.n 0x109246	@ 0010922e 0ad8
.org 0x109230
	adds r0, r3, #0	@ 00109230 181c
.org 0x109232
	muls r0, r3	@ 00109232 5843
.org 0x109234
	adds r1, r2, #0	@ 00109234 111c
.org 0x109236
	muls r1, r2	@ 00109236 5143
.org 0x109238
	adds r0, r0, r1	@ 00109238 4018
.org 0x10923a
	adds r1, r4, #0	@ 0010923a 211c
.org 0x10923c
	muls r1, r4	@ 0010923c 6143
.org 0x10923e
	cmp r0, r1	@ 0010923e 8842
.org 0x109240
	bgt.n 0x109246	@ 00109240 01dc
.org 0x109242
	movs r0, #1	@ 00109242 0120
.org 0x109244
	b.n 0x109286	@ 00109244 1fe0
.org 0x109246
	adds r0, r3, #0	@ 00109246 181c
.org 0x109248
	adds r1, r2, #0	@ 00109248 111c
.org 0x10924a
	bl 0x10d338	@ 0010924a 04f075f8
.org 0x10924e
	strb r0, [r7, #0]	@ 0010924e 3870
.org 0x109250
	lsls r2, r6, #16	@ 00109250 3204
.org 0x109252
	asrs r2, r2, #16	@ 00109252 1214
.org 0x109254
	ldr r3, [pc, #52]	@ 00109254 0d4b
.org 0x109256
	adds r0, #64	@ 00109256 4030
.org 0x109258
	lsls r0, r0, #24	@ 00109258 0006
.org 0x10925a
	lsrs r0, r0, #23	@ 0010925a c00d
.org 0x10925c
	adds r0, r0, r3	@ 0010925c c018
.org 0x10925e
	movs r1, #0	@ 0010925e 0021
.org 0x109260
	ldrsh r0, [r0, r1]	@ 00109260 405e
.org 0x109262
	adds r1, r2, #0	@ 00109262 111c
.org 0x109264
	muls r1, r0	@ 00109264 4143
.org 0x109266
	asrs r1, r1, #8	@ 00109266 0912
.org 0x109268
	ldr r0, [r5, #0]	@ 00109268 2868
.org 0x10926a
	adds r0, r0, r1	@ 0010926a 4018
.org 0x10926c
	str r0, [r5, #0]	@ 0010926c 2860
.org 0x10926e
	ldrb r0, [r7, #0]	@ 0010926e 3878
.org 0x109270
	lsls r0, r0, #1	@ 00109270 4000
.org 0x109272
	adds r0, r0, r3	@ 00109272 c018
.org 0x109274
	movs r1, #0	@ 00109274 0021
.org 0x109276
	ldrsh r0, [r0, r1]	@ 00109276 405e
.org 0x109278
	adds r1, r2, #0	@ 00109278 111c
.org 0x10927a
	muls r1, r0	@ 0010927a 4143
.org 0x10927c
	asrs r1, r1, #8	@ 0010927c 0912
.org 0x10927e
	ldr r0, [r5, #4]	@ 0010927e 6868
.org 0x109280
	adds r0, r0, r1	@ 00109280 4018
.org 0x109282
	str r0, [r5, #4]	@ 00109282 6860
.org 0x109284
	movs r0, #0	@ 00109284 0020
.org 0x109286
	pop {r4, r5, r6, r7}	@ 00109286 f0bc
.org 0x109288
	pop {r1}	@ 00109288 02bc
.org 0x10928a
	bx r1	@ 0010928a 0847
