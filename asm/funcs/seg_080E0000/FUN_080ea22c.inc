@ FUN_080ea22c  entry 0x080ea22c  size 182
.thumb
.org 0xea22c
FUN_080ea22c:
	push {r4, r5, r6, lr}	@ 000ea22c 70b5
.org 0xea22e
	adds r6, r0, #0	@ 000ea22e 061c
.org 0xea230
	bl 0x1cc9c	@ 000ea230 32f734fd
.org 0xea234
	ldr r0, [pc, #16]	@ 000ea234 0448
.org 0xea236
	ldrb r1, [r0, #20]	@ 000ea236 017d
.org 0xea238
	movs r0, #64	@ 000ea238 4020
.org 0xea23a
	ands r0, r1	@ 000ea23a 0840
.org 0xea23c
	cmp r0, #0	@ 000ea23c 0028
.org 0xea23e
	bne.n 0xea24c	@ 000ea23e 05d1
.org 0xea240
	adds r1, r6, #0	@ 000ea240 311c
.org 0xea242
	adds r1, #184	@ 000ea242 b831
.org 0xea244
	movs r0, #20	@ 000ea244 1420
.org 0xea246
	b.n 0xea252	@ 000ea246 04e0
.org 0xea248
	.byte 0xb0,0xe8,0x02,0x02	@ 000ea248 data
.org 0xea24c
	adds r1, r6, #0	@ 000ea24c 311c
.org 0xea24e
	adds r1, #184	@ 000ea24e b831
.org 0xea250
	movs r0, #203	@ 000ea250 cb20
.org 0xea252
	strb r0, [r1, #0]	@ 000ea252 0870
.org 0xea254
	adds r2, r1, #0	@ 000ea254 0a1c
.org 0xea256
	ldr r0, [r6, #84]	@ 000ea256 706d
.org 0xea258
	movs r1, #128	@ 000ea258 8021
.org 0xea25a
	lsls r1, r1, #4	@ 000ea25a 0901
.org 0xea25c
	adds r0, r0, r1	@ 000ea25c 4018
.org 0xea25e
	str r0, [r6, #84]	@ 000ea25e 7065
.org 0xea260
	ldr r0, [r6, #88]	@ 000ea260 b06d
.org 0xea262
	adds r0, r0, r1	@ 000ea262 4018
.org 0xea264
	str r0, [r6, #88]	@ 000ea264 b065
.org 0xea266
	ldrb r4, [r2, #0]	@ 000ea266 1478
.org 0xea268
	lsls r5, r4, #2	@ 000ea268 a500
.org 0xea26a
	adds r5, r5, r4	@ 000ea26a 2d19
.org 0xea26c
	lsls r5, r5, #2	@ 000ea26c ad00
.org 0xea26e
	ldr r0, [pc, #120]	@ 000ea26e 1e48
.org 0xea270
	adds r0, r5, r0	@ 000ea270 2818
.org 0xea272
	ldr r1, [pc, #120]	@ 000ea272 1e49
.org 0xea274
	lsls r4, r4, #1	@ 000ea274 6400
.org 0xea276
	adds r1, r4, r1	@ 000ea276 6118
.org 0xea278
	ldrh r1, [r1, #0]	@ 000ea278 0988
.org 0xea27a
	ldrh r2, [r0, #6]	@ 000ea27a c288
.org 0xea27c
	lsrs r2, r2, #6	@ 000ea27c 9209
.org 0xea27e
	subs r1, r1, r2	@ 000ea27e 891a
.org 0xea280
	lsls r1, r1, #5	@ 000ea280 4901
.org 0xea282
	movs r2, #128	@ 000ea282 8022
.org 0xea284
	lsls r2, r2, #9	@ 000ea284 5202
.org 0xea286
	adds r1, r1, r2	@ 000ea286 8918
.org 0xea288
	bl 0x1d30	@ 000ea288 17f752fd
.org 0xea28c
	ldr r0, [pc, #96]	@ 000ea28c 1848
.org 0xea28e
	adds r5, r5, r0	@ 000ea28e 2d18
.org 0xea290
	ldr r0, [pc, #96]	@ 000ea290 1848
.org 0xea292
	adds r4, r4, r0	@ 000ea292 2418
.org 0xea294
	ldrh r1, [r4, #0]	@ 000ea294 2188
.org 0xea296
	ldrb r0, [r5, #7]	@ 000ea296 e879
.org 0xea298
	subs r1, r1, r0	@ 000ea298 091a
.org 0xea29a
	lsls r1, r1, #5	@ 000ea29a 4901
.org 0xea29c
	movs r2, #128	@ 000ea29c 8022
.org 0xea29e
	lsls r2, r2, #2	@ 000ea29e 9200
.org 0xea2a0
	adds r1, r1, r2	@ 000ea2a0 8918
.org 0xea2a2
	adds r0, r5, #0	@ 000ea2a2 281c
.org 0xea2a4
	bl 0x2208	@ 000ea2a4 17f7b0ff
.org 0xea2a8
	adds r2, r6, #0	@ 000ea2a8 321c
.org 0xea2aa
	adds r2, #73	@ 000ea2aa 4932
.org 0xea2ac
	ldrb r1, [r2, #0]	@ 000ea2ac 1178
.org 0xea2ae
	movs r0, #13	@ 000ea2ae 0d20
.org 0xea2b0
	negs r0, r0	@ 000ea2b0 4042
.org 0xea2b2
	ands r0, r1	@ 000ea2b2 0840
.org 0xea2b4
	movs r1, #4	@ 000ea2b4 0421
.org 0xea2b6
	orrs r0, r1	@ 000ea2b6 0843
.org 0xea2b8
	strb r0, [r2, #0]	@ 000ea2b8 1070
.org 0xea2ba
	ldrb r1, [r6, #10]	@ 000ea2ba b17a
.org 0xea2bc
	movs r0, #1	@ 000ea2bc 0120
.org 0xea2be
	movs r2, #0	@ 000ea2be 0022
.org 0xea2c0
	orrs r0, r1	@ 000ea2c0 0843
.org 0xea2c2
	strb r0, [r6, #10]	@ 000ea2c2 b072
.org 0xea2c4
	ldr r1, [pc, #48]	@ 000ea2c4 0c49
.org 0xea2c6
	ldrb r0, [r6, #9]	@ 000ea2c6 707a
.org 0xea2c8
	lsls r0, r0, #2	@ 000ea2c8 8000
.org 0xea2ca
	adds r0, r0, r1	@ 000ea2ca 4018
.org 0xea2cc
	movs r1, #1	@ 000ea2cc 0121
.org 0xea2ce
	str r1, [r6, #12]	@ 000ea2ce f160
.org 0xea2d0
	ldr r0, [r0, #0]	@ 000ea2d0 0068
.org 0xea2d2
	ldr r0, [r0, #4]	@ 000ea2d2 4068
.org 0xea2d4
	str r0, [r6, #20]	@ 000ea2d4 7061
.org 0xea2d6
	strb r2, [r6, #13]	@ 000ea2d6 7273
.org 0xea2d8
	strb r2, [r6, #14]	@ 000ea2d8 b273
.org 0xea2da
	adds r0, r6, #0	@ 000ea2da 301c
.org 0xea2dc
	bl 0xea2fc	@ 000ea2dc 00f00ef8
.org 0xea2e0
	pop {r4, r5, r6}	@ 000ea2e0 70bc
