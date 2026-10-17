@ FUN_0801d1f4  entry 0x0801d1f4  size 284
.thumb
.org 0x1d1f4
FUN_0801d1f4:
	push {r4, r5, r6, r7, lr}	@ 0001d1f4 f0b5
.org 0x1d1f6
	mov r7, r8	@ 0001d1f6 4746
.org 0x1d1f8
	push {r7}	@ 0001d1f8 80b4
.org 0x1d1fa
	adds r5, r0, #0	@ 0001d1fa 051c
.org 0x1d1fc
	adds r6, r5, #0	@ 0001d1fc 2e1c
.org 0x1d1fe
	adds r6, #52	@ 0001d1fe 3436
.org 0x1d200
	adds r0, #112	@ 0001d200 7030
.org 0x1d202
	ldrb r1, [r0, #0]	@ 0001d202 0178
.org 0x1d204
	ldr r0, [r5, #108]	@ 0001d204 e86e
.org 0x1d206
	lsls r1, r1, #2	@ 0001d206 8900
.org 0x1d208
	adds r1, r1, r0	@ 0001d208 0918
.org 0x1d20a
	adds r0, r5, #0	@ 0001d20a 281c
.org 0x1d20c
	adds r0, #113	@ 0001d20c 7130
.org 0x1d20e
	ldrb r0, [r0, #0]	@ 0001d20e 0078
.org 0x1d210
	lsls r0, r0, #24	@ 0001d210 0006
.org 0x1d212
	asrs r0, r0, #24	@ 0001d212 0016
.org 0x1d214
	ldr r1, [r1, #0]	@ 0001d214 0968
.org 0x1d216
	lsls r0, r0, #1	@ 0001d216 4000
.org 0x1d218
	adds r0, r0, r1	@ 0001d218 4018
.org 0x1d21a
	ldrb r0, [r0, #0]	@ 0001d21a 0078
.org 0x1d21c
	adds r3, r0, #0	@ 0001d21c 031c
.org 0x1d21e
	strb r3, [r6, #26]	@ 0001d21e b376
.org 0x1d220
	ldrb r1, [r5, #11]	@ 0001d220 e97a
.org 0x1d222
	movs r0, #4	@ 0001d222 0420
.org 0x1d224
	ands r0, r1	@ 0001d224 0840
.org 0x1d226
	cmp r0, #0	@ 0001d226 0028
.org 0x1d228
	beq.n 0x1d318	@ 0001d228 76d0
.org 0x1d22a
	ldrb r0, [r5, #30]	@ 0001d22a a87f
.org 0x1d22c
	lsls r4, r0, #2	@ 0001d22c 8400
.org 0x1d22e
	ldr r1, [pc, #112]	@ 0001d22e 1c49
.org 0x1d230
	adds r1, r4, r1	@ 0001d230 6118
.org 0x1d232
	ldr r2, [r1, #0]	@ 0001d232 0a68
.org 0x1d234
	ldr r1, [r6, #8]	@ 0001d234 b168
.org 0x1d236
	mov ip, r0	@ 0001d236 8446
.org 0x1d238
	cmp r1, r2	@ 0001d238 9142
.org 0x1d23a
	beq.n 0x1d23e	@ 0001d23a 00d0
.org 0x1d23c
	str r2, [r5, #60]	@ 0001d23c ea63
.org 0x1d23e
	lsls r0, r3, #2	@ 0001d23e 9800
.org 0x1d240
	adds r0, r0, r2	@ 0001d240 8018
.org 0x1d242
	ldrb r3, [r0, #3]	@ 0001d242 c378
.org 0x1d244
	ldrb r0, [r5, #31]	@ 0001d244 e87f
.org 0x1d246
	cmp r3, r0	@ 0001d246 8342
.org 0x1d248
	beq.n 0x1d318	@ 0001d248 66d0
.org 0x1d24a
	strb r3, [r5, #31]	@ 0001d24a eb77
.org 0x1d24c
	ldr r0, [pc, #84]	@ 0001d24c 1548
.org 0x1d24e
	mov r2, ip	@ 0001d24e 6246
.org 0x1d250
	lsls r1, r2, #1	@ 0001d250 5100
.org 0x1d252
	adds r0, r1, r0	@ 0001d252 0818
.org 0x1d254
	ldrh r0, [r0, #0]	@ 0001d254 0088
.org 0x1d256
	ldrh r2, [r5, #32]	@ 0001d256 2a8c
.org 0x1d258
	adds r0, r0, r2	@ 0001d258 8018
.org 0x1d25a
	lsls r0, r0, #16	@ 0001d25a 0004
.org 0x1d25c
	lsrs r7, r0, #16	@ 0001d25c 070c
.org 0x1d25e
	adds r2, r5, #0	@ 0001d25e 2a1c
.org 0x1d260
	adds r2, #34	@ 0001d260 2232
.org 0x1d262
	ldr r0, [pc, #68]	@ 0001d262 1148
.org 0x1d264
	adds r1, r1, r0	@ 0001d264 0918
.org 0x1d266
	ldrh r0, [r1, #0]	@ 0001d266 0888
.org 0x1d268
	ldrb r2, [r2, #0]	@ 0001d268 1278
.org 0x1d26a
	adds r0, r0, r2	@ 0001d26a 8018
.org 0x1d26c
	lsls r0, r0, #16	@ 0001d26c 0004
.org 0x1d26e
	lsrs r0, r0, #16	@ 0001d26e 000c
.org 0x1d270
	mov r8, r0	@ 0001d270 8046
.org 0x1d272
	mov r1, ip	@ 0001d272 6146
.org 0x1d274
	lsls r0, r1, #24	@ 0001d274 0806
.org 0x1d276
	cmp r0, #0	@ 0001d276 0028
.org 0x1d278
	blt.n 0x1d2b0	@ 0001d278 1adb
.org 0x1d27a
	ldr r1, [pc, #48]	@ 0001d27a 0c49
.org 0x1d27c
	adds r1, r4, r1	@ 0001d27c 6118
.org 0x1d27e
	ldr r0, [r1, #0]	@ 0001d27e 0868
.org 0x1d280
	adds r0, r0, r1	@ 0001d280 4018
.org 0x1d282
	lsls r1, r3, #1	@ 0001d282 5900
.org 0x1d284
	adds r1, r1, r3	@ 0001d284 c918
.org 0x1d286
	lsls r1, r1, #2	@ 0001d286 8900
.org 0x1d288
	adds r0, r0, r1	@ 0001d288 4018
.org 0x1d28a
	ldrh r1, [r0, #6]	@ 0001d28a c188
.org 0x1d28c
	lsrs r1, r1, #6	@ 0001d28c 8909
.org 0x1d28e
	subs r1, r7, r1	@ 0001d28e 791a
.org 0x1d290
	lsls r1, r1, #5	@ 0001d290 4901
.org 0x1d292
	movs r2, #128	@ 0001d292 8022
.org 0x1d294
	lsls r2, r2, #9	@ 0001d294 5202
.org 0x1d296
	adds r1, r1, r2	@ 0001d296 8918
.org 0x1d298
	bl 0x1ea4	@ 0001d298 e4f704fe
.org 0x1d29c
	b.n 0x1d2ea	@ 0001d29c 25e0
.org 0x1d29e
	.byte 0x00	@ 0001d29e data
.org 0x1d29f
	.byte 0x00	@ 0001d29f data
.org 0x1d2a0
	.byte 0x00,0x70,0x8a,0x08	@ 0001d2a0 data
.org 0x1d2a4
	.byte 0x40,0xe2,0x02,0x02	@ 0001d2a4 data
.org 0x1d2a8
	.byte 0x40,0xdc,0x02,0x02	@ 0001d2a8 data
.org 0x1d2ac
	.byte 0x00,0xc0,0x8c,0x08	@ 0001d2ac data
.org 0x1d2b0
	ldr r0, [pc, #112]	@ 0001d2b0 1c48
.org 0x1d2b2
	adds r0, r4, r0	@ 0001d2b2 2018
.org 0x1d2b4
	ldr r4, [r0, #0]	@ 0001d2b4 0468
.org 0x1d2b6
	adds r4, r4, r0	@ 0001d2b6 2418
.org 0x1d2b8
	lsls r0, r3, #2	@ 0001d2b8 9800
.org 0x1d2ba
	adds r0, r0, r3	@ 0001d2ba c018
.org 0x1d2bc
	lsls r0, r0, #2	@ 0001d2bc 8000
.org 0x1d2be
	adds r4, r4, r0	@ 0001d2be 2418
.org 0x1d2c0
	ldrh r1, [r4, #6]	@ 0001d2c0 e188
.org 0x1d2c2
	lsrs r1, r1, #6	@ 0001d2c2 8909
.org 0x1d2c4
	subs r1, r7, r1	@ 0001d2c4 791a
.org 0x1d2c6
	lsls r1, r1, #5	@ 0001d2c6 4901
.org 0x1d2c8
	movs r2, #128	@ 0001d2c8 8022
.org 0x1d2ca
	lsls r2, r2, #9	@ 0001d2ca 5202
.org 0x1d2cc
	adds r1, r1, r2	@ 0001d2cc 8918
.org 0x1d2ce
	adds r0, r4, #0	@ 0001d2ce 201c
.org 0x1d2d0
	bl 0x1ea4	@ 0001d2d0 e4f7e8fd
.org 0x1d2d4
	adds r0, r4, #0	@ 0001d2d4 201c
.org 0x1d2d6
	adds r0, #12	@ 0001d2d6 0c30
.org 0x1d2d8
	ldrb r1, [r4, #19]	@ 0001d2d8 e17c
.org 0x1d2da
	mov r2, r8	@ 0001d2da 4246
.org 0x1d2dc
	subs r1, r2, r1	@ 0001d2dc 511a
.org 0x1d2de
	lsls r1, r1, #5	@ 0001d2de 4901
.org 0x1d2e0
	movs r2, #128	@ 0001d2e0 8022
.org 0x1d2e2
	lsls r2, r2, #2	@ 0001d2e2 9200
.org 0x1d2e4
	adds r1, r1, r2	@ 0001d2e4 8918
.org 0x1d2e6
	bl 0x2208	@ 0001d2e6 e4f78fff
.org 0x1d2ea
	ldr r1, [pc, #60]	@ 0001d2ea 0f49
.org 0x1d2ec
	ands r1, r7	@ 0001d2ec 3940
.org 0x1d2ee
	ldrh r2, [r6, #20]	@ 0001d2ee b28a
.org 0x1d2f0
	ldr r0, [pc, #56]	@ 0001d2f0 0e48
.org 0x1d2f2
	ands r0, r2	@ 0001d2f2 1040
.org 0x1d2f4
	orrs r0, r1	@ 0001d2f4 0843
.org 0x1d2f6
	strh r0, [r6, #20]	@ 0001d2f6 b082
.org 0x1d2f8
	ldrb r1, [r5, #11]	@ 0001d2f8 e97a
.org 0x1d2fa
	movs r0, #32	@ 0001d2fa 2020
.org 0x1d2fc
	ands r0, r1	@ 0001d2fc 0840
.org 0x1d2fe
	cmp r0, #0	@ 0001d2fe 0028
.org 0x1d300
	bne.n 0x1d318	@ 0001d300 0ad1
.org 0x1d302
	mov r0, r8	@ 0001d302 4046
.org 0x1d304
	lsls r2, r0, #4	@ 0001d304 0201
.org 0x1d306
	ldrb r1, [r6, #21]	@ 0001d306 717d
.org 0x1d308
	movs r0, #15	@ 0001d308 0f20
.org 0x1d30a
	ands r0, r1	@ 0001d30a 0840
.org 0x1d30c
	orrs r0, r2	@ 0001d30c 1043
.org 0x1d30e
	strb r0, [r6, #21]	@ 0001d30e 7075
