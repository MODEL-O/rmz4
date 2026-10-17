@ FUN_080e71e0  entry 0x080e71e0  size 316
.thumb
.org 0xe71e0
FUN_080e71e0:
	push {r4, r5, r6, lr}	@ 000e71e0 70b5
.org 0xe71e2
	sub sp, #8	@ 000e71e2 82b0
.org 0xe71e4
	adds r6, r0, #0	@ 000e71e4 061c
.org 0xe71e6
	ldrb r0, [r6, #16]	@ 000e71e6 307c
.org 0xe71e8
	cmp r0, #1	@ 000e71e8 0128
.org 0xe71ea
	bhi.n 0xe7290	@ 000e71ea 51d8
.org 0xe71ec
	ldr r0, [r6, #88]	@ 000e71ec b06d
.org 0xe71ee
	ldr r1, [pc, #56]	@ 000e71ee 0e49
.org 0xe71f0
	adds r0, r0, r1	@ 000e71f0 4018
.org 0xe71f2
	str r0, [sp, #4]	@ 000e71f2 0190
.org 0xe71f4
	ldrb r0, [r6, #17]	@ 000e71f4 707c
.org 0xe71f6
	cmp r0, #0	@ 000e71f6 0028
.org 0xe71f8
	bne.n 0xe7230	@ 000e71f8 1ad1
.org 0xe71fa
	ldr r0, [r6, #84]	@ 000e71fa 706d
.org 0xe71fc
	str r0, [sp, #0]	@ 000e71fc 0090
.org 0xe71fe
	movs r0, #1	@ 000e71fe 0120
.org 0xe7200
	mov r1, sp	@ 000e7200 6946
.org 0xe7202
	bl 0xd0c88	@ 000e7202 e9f741fd
.org 0xe7206
	movs r0, #42	@ 000e7206 2a20
.org 0xe7208
	bl 0x2b10	@ 000e7208 1bf782fc
.org 0xe720c
	adds r5, r6, #0	@ 000e720c 351c
.org 0xe720e
	adds r5, #84	@ 000e720e 5435
.org 0xe7210
	ldr r1, [pc, #24]	@ 000e7210 0649
.org 0xe7212
	ldrb r2, [r6, #10]	@ 000e7212 b27a
.org 0xe7214
	lsrs r2, r2, #4	@ 000e7214 1209
.org 0xe7216
	movs r4, #1	@ 000e7216 0124
.org 0xe7218
	ands r2, r4	@ 000e7218 2240
.org 0xe721a
	adds r0, r5, #0	@ 000e721a 281c
.org 0xe721c
	bl 0xe70d4	@ 000e721c fff75aff
.org 0xe7220
	movs r1, #129	@ 000e7220 8121
.org 0xe7222
	lsls r1, r1, #2	@ 000e7222 8900
.org 0xe7224
	b.n 0xe7276	@ 000e7224 27e0
.org 0xe7226
	.byte 0x00	@ 000e7226 data
.org 0xe7227
	.byte 0x00	@ 000e7227 data
.org 0xe7228
	.byte 0x00,0xf3,0xff,0xff	@ 000e7228 data
.org 0xe722c
	.byte 0x01,0x02,0x00,0x00	@ 000e722c data
.org 0xe7230
	adds r5, r6, #0	@ 000e7230 351c
.org 0xe7232
	adds r5, #84	@ 000e7232 5435
.org 0xe7234
	ldr r2, [pc, #76]	@ 000e7234 134a
.org 0xe7236
	ldrb r1, [r6, #10]	@ 000e7236 b17a
.org 0xe7238
	movs r0, #16	@ 000e7238 1020
.org 0xe723a
	ands r0, r1	@ 000e723a 0840
.org 0xe723c
	lsls r0, r0, #24	@ 000e723c 0006
.org 0xe723e
	lsrs r0, r0, #24	@ 000e723e 000e
.org 0xe7240
	negs r0, r0	@ 000e7240 4042
.org 0xe7242
	asrs r0, r0, #31	@ 000e7242 c017
.org 0xe7244
	movs r1, #4	@ 000e7244 0421
.org 0xe7246
	ands r0, r1	@ 000e7246 0840
.org 0xe7248
	adds r0, r0, r2	@ 000e7248 8018
.org 0xe724a
	ldr r1, [r0, #0]	@ 000e724a 0168
.org 0xe724c
	lsls r1, r1, #8	@ 000e724c 0902
.org 0xe724e
	ldr r0, [r6, #84]	@ 000e724e 706d
.org 0xe7250
	adds r0, r0, r1	@ 000e7250 4018
.org 0xe7252
	str r0, [r6, #84]	@ 000e7252 7065
.org 0xe7254
	str r0, [sp, #0]	@ 000e7254 0090
.org 0xe7256
	movs r0, #1	@ 000e7256 0120
.org 0xe7258
	mov r1, sp	@ 000e7258 6946
.org 0xe725a
	bl 0xd0c88	@ 000e725a e9f715fd
.org 0xe725e
	movs r0, #42	@ 000e725e 2a20
.org 0xe7260
	bl 0x2b10	@ 000e7260 1bf756fc
.org 0xe7264
	ldr r1, [pc, #32]	@ 000e7264 0849
.org 0xe7266
	ldrb r2, [r6, #10]	@ 000e7266 b27a
.org 0xe7268
	lsrs r2, r2, #4	@ 000e7268 1209
.org 0xe726a
	movs r4, #1	@ 000e726a 0124
.org 0xe726c
	ands r2, r4	@ 000e726c 2240
.org 0xe726e
	adds r0, r5, #0	@ 000e726e 281c
.org 0xe7270
	bl 0xe70d4	@ 000e7270 fff730ff
.org 0xe7274
	ldr r1, [pc, #20]	@ 000e7274 0549
.org 0xe7276
	ldrb r2, [r6, #10]	@ 000e7276 b27a
.org 0xe7278
	lsrs r2, r2, #4	@ 000e7278 1209
.org 0xe727a
	ands r2, r4	@ 000e727a 2240
.org 0xe727c
	adds r0, r5, #0	@ 000e727c 281c
.org 0xe727e
	bl 0xe70d4	@ 000e727e fff729ff
.org 0xe7282
	b.n 0xe7318	@ 000e7282 49e0
.org 0xe7284
	.byte 0x6c,0x90,0x86,0x08	@ 000e7284 data
.org 0xe7288
	.byte 0x02,0x02,0x00,0x00	@ 000e7288 data
.org 0xe728c
	.byte 0x03,0x02,0x00,0x00	@ 000e728c data
.org 0xe7290
	ldrh r0, [r6, #16]	@ 000e7290 308a
.org 0xe7292
	cmp r0, #4	@ 000e7292 0428
.org 0xe7294
	bne.n 0xe7318	@ 000e7294 40d1
.org 0xe7296
	adds r4, r6, #0	@ 000e7296 341c
.org 0xe7298
	adds r4, #84	@ 000e7298 5434
.org 0xe729a
	adds r0, r4, #0	@ 000e729a 201c
.org 0xe729c
	movs r1, #0	@ 000e729c 0021
.org 0xe729e
	movs r2, #0	@ 000e729e 0022
.org 0xe72a0
	bl 0xcf20c	@ 000e72a0 e7f7b4ff
.org 0xe72a4
	adds r0, r4, #0	@ 000e72a4 201c
.org 0xe72a6
	movs r1, #0	@ 000e72a6 0021
.org 0xe72a8
	movs r2, #1	@ 000e72a8 0122
.org 0xe72aa
	bl 0xcf20c	@ 000e72aa e7f7afff
.org 0xe72ae
	adds r0, r4, #0	@ 000e72ae 201c
.org 0xe72b0
	movs r1, #0	@ 000e72b0 0021
.org 0xe72b2
	movs r2, #2	@ 000e72b2 0222
.org 0xe72b4
	bl 0xcf20c	@ 000e72b4 e7f7aaff
.org 0xe72b8
	adds r0, r4, #0	@ 000e72b8 201c
.org 0xe72ba
	movs r1, #0	@ 000e72ba 0021
.org 0xe72bc
	movs r2, #3	@ 000e72bc 0322
.org 0xe72be
	bl 0xcf20c	@ 000e72be e7f7a5ff
.org 0xe72c2
	ldr r1, [pc, #112]	@ 000e72c2 1c49
.org 0xe72c4
	ldrb r2, [r6, #10]	@ 000e72c4 b27a
.org 0xe72c6
	lsrs r2, r2, #4	@ 000e72c6 1209
.org 0xe72c8
	movs r5, #1	@ 000e72c8 0125
.org 0xe72ca
	ands r2, r5	@ 000e72ca 2a40
.org 0xe72cc
	adds r0, r4, #0	@ 000e72cc 201c
.org 0xe72ce
	bl 0xe70d4	@ 000e72ce fff701ff
.org 0xe72d2
	ldr r1, [pc, #100]	@ 000e72d2 1949
.org 0xe72d4
	ldrb r2, [r6, #10]	@ 000e72d4 b27a
.org 0xe72d6
	lsrs r2, r2, #4	@ 000e72d6 1209
.org 0xe72d8
	ands r2, r5	@ 000e72d8 2a40
.org 0xe72da
	adds r0, r4, #0	@ 000e72da 201c
.org 0xe72dc
	bl 0xe70d4	@ 000e72dc fff7fafe
.org 0xe72e0
	ldr r1, [pc, #88]	@ 000e72e0 1649
.org 0xe72e2
	ldrb r2, [r6, #10]	@ 000e72e2 b27a
.org 0xe72e4
	lsrs r2, r2, #4	@ 000e72e4 1209
.org 0xe72e6
	ands r2, r5	@ 000e72e6 2a40
.org 0xe72e8
	adds r0, r4, #0	@ 000e72e8 201c
.org 0xe72ea
	bl 0xe70d4	@ 000e72ea fff7f3fe
.org 0xe72ee
	ldr r1, [pc, #80]	@ 000e72ee 1449
.org 0xe72f0
	ldrb r2, [r6, #10]	@ 000e72f0 b27a
.org 0xe72f2
	lsrs r2, r2, #4	@ 000e72f2 1209
.org 0xe72f4
	ands r2, r5	@ 000e72f4 2a40
.org 0xe72f6
	adds r0, r4, #0	@ 000e72f6 201c
.org 0xe72f8
	bl 0xe70d4	@ 000e72f8 fff7ecfe
.org 0xe72fc
	ldr r1, [pc, #68]	@ 000e72fc 1149
.org 0xe72fe
	ldrb r2, [r6, #10]	@ 000e72fe b27a
.org 0xe7300
	lsrs r2, r2, #4	@ 000e7300 1209
.org 0xe7302
	ands r2, r5	@ 000e7302 2a40
.org 0xe7304
	adds r0, r4, #0	@ 000e7304 201c
.org 0xe7306
	bl 0xe70d4	@ 000e7306 fff7e5fe
.org 0xe730a
	ldr r1, [pc, #60]	@ 000e730a 0f49
.org 0xe730c
	ldrb r2, [r6, #10]	@ 000e730c b27a
.org 0xe730e
	lsrs r2, r2, #4	@ 000e730e 1209
.org 0xe7310
	ands r2, r5	@ 000e7310 2a40
.org 0xe7312
	adds r0, r4, #0	@ 000e7312 201c
.org 0xe7314
	bl 0xe70d4	@ 000e7314 fff7defe
.org 0xe7318
	ldr r1, [pc, #48]	@ 000e7318 0c49
.org 0xe731a
	ldrb r0, [r6, #9]	@ 000e731a 707a
