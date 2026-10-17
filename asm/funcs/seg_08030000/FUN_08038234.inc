@ FUN_08038234  entry 0x08038234  size 122
.thumb
.org 0x38234
FUN_08038234:
	push {r4, r5, lr}	@ 00038234 30b5
.org 0x38236
	adds r3, r0, #0	@ 00038236 031c
.org 0x38238
	movs r2, #0	@ 00038238 0022
.org 0x3823a
	strb r2, [r3, #12]	@ 0003823a 1a73
.org 0x3823c
	movs r0, #2	@ 0003823c 0220
.org 0x3823e
	strb r0, [r3, #13]	@ 0003823e 5873
.org 0x38240
	strb r2, [r3, #15]	@ 00038240 da73
.org 0x38242
	strb r2, [r3, #14]	@ 00038242 9a73
.org 0x38244
	movs r0, #255	@ 00038244 ff20
.org 0x38246
	strb r0, [r3, #16]	@ 00038246 1874
.org 0x38248
	movs r0, #1	@ 00038248 0120
.org 0x3824a
	negs r0, r0	@ 0003824a 4042
.org 0x3824c
	strb r0, [r3, #17]	@ 0003824c 5874
.org 0x3824e
	strb r0, [r3, #18]	@ 0003824e 9874
.org 0x38250
	movs r1, #0	@ 00038250 0021
.org 0x38252
	strh r2, [r3, #20]	@ 00038252 9a82
.org 0x38254
	adds r0, r3, #0	@ 00038254 181c
.org 0x38256
	adds r0, #50	@ 00038256 3230
.org 0x38258
	strb r1, [r0, #0]	@ 00038258 0170
.org 0x3825a
	subs r0, #6	@ 0003825a 0638
.org 0x3825c
	strb r1, [r0, #0]	@ 0003825c 0170
.org 0x3825e
	adds r0, #4	@ 0003825e 0430
.org 0x38260
	strb r1, [r0, #0]	@ 00038260 0170
.org 0x38262
	adds r0, #1	@ 00038262 0130
.org 0x38264
	strb r1, [r0, #0]	@ 00038264 0170
.org 0x38266
	str r2, [r3, #56]	@ 00038266 9a63
.org 0x38268
	adds r4, r3, #0	@ 00038268 1c1c
.org 0x3826a
	adds r4, #8	@ 0003826a 0834
.org 0x3826c
	movs r5, #0	@ 0003826c 0025
.org 0x3826e
	adds r1, r4, r2	@ 0003826e a118
.org 0x38270
	ldrb r0, [r1, #0]	@ 00038270 0878
.org 0x38272
	cmp r0, #255	@ 00038272 ff28
.org 0x38274
	beq.n 0x38278	@ 00038274 00d0
.org 0x38276
	strb r5, [r1, #0]	@ 00038276 0d70
.org 0x38278
	adds r0, r2, #1	@ 00038278 501c
.org 0x3827a
	lsls r0, r0, #24	@ 0003827a 0006
.org 0x3827c
	lsrs r2, r0, #24	@ 0003827c 020e
.org 0x3827e
	cmp r2, #3	@ 0003827e 032a
.org 0x38280
	bls.n 0x3826e	@ 00038280 f5d9
.org 0x38282
	movs r2, #0	@ 00038282 0022
.org 0x38284
	movs r0, #0	@ 00038284 0020
.org 0x38286
	strh r0, [r3, #4]	@ 00038286 9880
.org 0x38288
	adds r1, r3, #0	@ 00038288 191c
.org 0x3828a
	adds r1, #52	@ 0003828a 3431
.org 0x3828c
	movs r0, #64	@ 0003828c 4020
.org 0x3828e
	strb r0, [r1, #0]	@ 0003828e 0870
.org 0x38290
	adds r0, r3, #0	@ 00038290 181c
.org 0x38292
	adds r0, #53	@ 00038292 3530
.org 0x38294
	strb r2, [r0, #0]	@ 00038294 0270
.org 0x38296
	adds r0, #8	@ 00038296 0830
.org 0x38298
	strb r2, [r0, #0]	@ 00038298 0270
.org 0x3829a
	adds r0, #1	@ 0003829a 0130
.org 0x3829c
	strb r2, [r0, #0]	@ 0003829c 0270
.org 0x3829e
	adds r0, #1	@ 0003829e 0130
.org 0x382a0
	strb r2, [r0, #0]	@ 000382a0 0270
.org 0x382a2
	adds r1, #13	@ 000382a2 0d31
.org 0x382a4
	movs r0, #255	@ 000382a4 ff20
.org 0x382a6
	strb r0, [r1, #0]	@ 000382a6 0870
.org 0x382a8
	pop {r4, r5}	@ 000382a8 30bc
.org 0x382aa
	pop {r0}	@ 000382aa 01bc
.org 0x382ac
	bx r0	@ 000382ac 0047
