@ FUN_0803720c  entry 0x0803720c  size 134
.thumb
.org 0x3720c
FUN_0803720c:
	push {r4, r5, lr}	@ 0003720c 30b5
.org 0x3720e
	adds r4, r0, #0	@ 0003720e 041c
.org 0x37210
	movs r0, #129	@ 00037210 8120
.org 0x37212
	lsls r0, r0, #1	@ 00037212 4000
.org 0x37214
	adds r5, r4, r0	@ 00037214 2518
.org 0x37216
	ldrb r0, [r5, #0]	@ 00037216 2878
.org 0x37218
	cmp r0, #0	@ 00037218 0028
.org 0x3721a
	bne.n 0x37238	@ 0003721a 0dd1
.org 0x3721c
	ldr r1, [pc, #20]	@ 0003721c 0549
.org 0x3721e
	adds r0, r4, #0	@ 0003721e 201c
.org 0x37220
	bl 0x1cf00	@ 00037220 e5f76efe
.org 0x37224
	adds r0, r4, #0	@ 00037224 201c
.org 0x37226
	movs r1, #10	@ 00037226 0a21
.org 0x37228
	bl 0x3c464	@ 00037228 05f01cf9
.org 0x3722c
	ldrb r0, [r5, #0]	@ 0003722c 2878
.org 0x3722e
	adds r0, #1	@ 0003722e 0130
.org 0x37230
	strb r0, [r5, #0]	@ 00037230 2870
.org 0x37232
	b.n 0x37274	@ 00037232 1fe0
.org 0x37234
	.byte 0x02,0x1c,0x00,0x00	@ 00037234 data
.org 0x37238
	ldr r1, [pc, #36]	@ 00037238 0949
.org 0x3723a
	adds r0, r4, r1	@ 0003723a 6018
.org 0x3723c
	ldrb r1, [r0, #0]	@ 0003723c 0178
.org 0x3723e
	movs r0, #1	@ 0003723e 0120
.org 0x37240
	ands r0, r1	@ 00037240 0840
.org 0x37242
	cmp r0, #0	@ 00037242 0028
.org 0x37244
	beq.n 0x3726c	@ 00037244 12d0
.org 0x37246
	ldr r1, [pc, #28]	@ 00037246 0749
.org 0x37248
	movs r2, #183	@ 00037248 b722
.org 0x3724a
	lsls r2, r2, #1	@ 0003724a 5200
.org 0x3724c
	adds r0, r4, r2	@ 0003724c a018
.org 0x3724e
	ldrb r2, [r0, #0]	@ 0003724e 0278
.org 0x37250
	ldr r3, [pc, #20]	@ 00037250 054b
.org 0x37252
	adds r0, r4, r3	@ 00037252 e018
.org 0x37254
	ldrb r3, [r0, #0]	@ 00037254 0378
.org 0x37256
	adds r0, r4, #0	@ 00037256 201c
.org 0x37258
	bl 0x1cfc8	@ 00037258 e5f7b6fe
.org 0x3725c
	b.n 0x37274	@ 0003725c 0ae0
.org 0x3725e
	.byte 0x00	@ 0003725e data
.org 0x3725f
	.byte 0x00	@ 0003725f data
.org 0x37260
	.byte 0x53,0x01,0x00,0x00	@ 00037260 data
.org 0x37264
	.byte 0x02,0x1c,0x00,0x00	@ 00037264 data
.org 0x37268
	.byte 0x6f,0x01,0x00,0x00	@ 00037268 data
.org 0x3726c
	ldr r1, [pc, #40]	@ 0003726c 0a49
.org 0x3726e
	adds r0, r4, #0	@ 0003726e 201c
.org 0x37270
	bl 0x3a3b0	@ 00037270 03f09ef8
.org 0x37274
	adds r0, r4, #0	@ 00037274 201c
.org 0x37276
	adds r0, #115	@ 00037276 7330
.org 0x37278
	ldrb r0, [r0, #0]	@ 00037278 0078
.org 0x3727a
	cmp r0, #3	@ 0003727a 0328
.org 0x3727c
	bne.n 0x3729c	@ 0003727c 0ed1
.org 0x3727e
	movs r1, #160	@ 0003727e a021
.org 0x37280
	lsls r1, r1, #3	@ 00037280 c900
.org 0x37282
	adds r0, r4, #0	@ 00037282 201c
.org 0x37284
	movs r2, #4	@ 00037284 0422
.org 0x37286
	movs r3, #1	@ 00037286 0123
.org 0x37288
	bl 0x1cfc8	@ 00037288 e5f79efe
.org 0x3728c
	movs r0, #128	@ 0003728c 8020
.org 0x3728e
	lsls r0, r0, #1	@ 0003728e 4000
.org 0x37290
	adds r1, r4, r0	@ 00037290 2118
