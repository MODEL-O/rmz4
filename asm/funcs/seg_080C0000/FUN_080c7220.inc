@ FUN_080c7220  entry 0x080c7220  size 80
.thumb
.org 0xc7220
FUN_080c7220:
	push {r4, r5, r6, lr}	@ 000c7220 70b5
.org 0xc7222
	adds r4, r0, #0	@ 000c7222 041c
.org 0xc7224
	adds r5, r1, #0	@ 000c7224 0d1c
.org 0xc7226
	lsls r2, r2, #24	@ 000c7226 1206
.org 0xc7228
	lsrs r6, r2, #24	@ 000c7228 160e
.org 0xc722a
	ldr r0, [pc, #68]	@ 000c722a 1148
.org 0xc722c
	ldr r0, [r0, #0]	@ 000c722c 0068
.org 0xc722e
	bl 0x54cc	@ 000c722e 3ef74df9
.org 0xc7232
	adds r3, r0, #0	@ 000c7232 031c
.org 0xc7234
	cmp r3, #0	@ 000c7234 002b
.org 0xc7236
	beq.n 0xc7268	@ 000c7236 17d0
.org 0xc7238
	adds r1, r3, #0	@ 000c7238 191c
.org 0xc723a
	adds r1, #37	@ 000c723a 2531
.org 0xc723c
	movs r2, #0	@ 000c723c 0022
.org 0xc723e
	movs r0, #8	@ 000c723e 0820
.org 0xc7240
	strb r0, [r1, #0]	@ 000c7240 0870
.org 0xc7242
	ldr r1, [pc, #48]	@ 000c7242 0c49
.org 0xc7244
	movs r0, #27	@ 000c7244 1b20
.org 0xc7246
	strb r0, [r3, #9]	@ 000c7246 5872
.org 0xc7248
	ldr r0, [r1, #108]	@ 000c7248 c86e
.org 0xc724a
	ldr r0, [r0, #0]	@ 000c724a 0068
.org 0xc724c
	str r0, [r3, #20]	@ 000c724c 5861
.org 0xc724e
	movs r0, #0	@ 000c724e 0020
.org 0xc7250
	strh r2, [r3, #32]	@ 000c7250 1a84
.org 0xc7252
	adds r1, r3, #0	@ 000c7252 191c
.org 0xc7254
	adds r1, #34	@ 000c7254 2231
.org 0xc7256
	strb r0, [r1, #0]	@ 000c7256 0870
.org 0xc7258
	str r4, [r3, #40]	@ 000c7258 9c62
.org 0xc725a
	ldr r0, [r5, #0]	@ 000c725a 2868
.org 0xc725c
	ldr r1, [r5, #4]	@ 000c725c 6968
.org 0xc725e
	str r0, [r3, #84]	@ 000c725e 5865
.org 0xc7260
	str r1, [r3, #88]	@ 000c7260 9965
.org 0xc7262
	movs r0, #1	@ 000c7262 0120
.org 0xc7264
	strb r0, [r3, #16]	@ 000c7264 1874
.org 0xc7266
	strb r6, [r3, #17]	@ 000c7266 5e74
.org 0xc7268
	adds r0, r3, #0	@ 000c7268 181c
.org 0xc726a
	pop {r4, r5, r6}	@ 000c726a 70bc
.org 0xc726c
	pop {r1}	@ 000c726c 02bc
.org 0xc726e
	bx r1	@ 000c726e 0847
