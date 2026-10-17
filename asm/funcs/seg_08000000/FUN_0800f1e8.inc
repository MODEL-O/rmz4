@ FUN_0800f1e8  entry 0x0800f1e8  size 156
.thumb
.org 0xf1e8
FUN_0800f1e8:
	push {r4, r5, r6, r7, lr}	@ 0000f1e8 f0b5
.org 0xf1ea
	adds r7, r0, #0	@ 0000f1ea 071c
.org 0xf1ec
	ldrb r4, [r7, #14]	@ 0000f1ec bc7b
.org 0xf1ee
	cmp r4, #0	@ 0000f1ee 002c
.org 0xf1f0
	bne.n 0xf27e	@ 0000f1f0 45d1
.org 0xf1f2
	ldr r0, [r7, #92]	@ 0000f1f2 f86d
.org 0xf1f4
	lsls r0, r0, #16	@ 0000f1f4 0004
.org 0xf1f6
	lsrs r0, r0, #20	@ 0000f1f6 000d
.org 0xf1f8
	lsls r5, r0, #1	@ 0000f1f8 4500
.org 0xf1fa
	ldr r3, [pc, #136]	@ 0000f1fa 224b
.org 0xf1fc
	adds r5, r5, r3	@ 0000f1fc ed18
.org 0xf1fe
	ldr r1, [r7, #100]	@ 0000f1fe 796e
.org 0xf200
	ldr r6, [pc, #132]	@ 0000f200 214e
.org 0xf202
	adds r2, r6, #0	@ 0000f202 321c
.org 0xf204
	orrs r1, r2	@ 0000f204 1143
.org 0xf206
	strh r1, [r5, #0]	@ 0000f206 2980
.org 0xf208
	lsls r0, r0, #2	@ 0000f208 8000
.org 0xf20a
	adds r3, #8	@ 0000f20a 0833
.org 0xf20c
	adds r0, r0, r3	@ 0000f20c c018
.org 0xf20e
	str r4, [r0, #0]	@ 0000f20e 0460
.org 0xf210
	ldr r0, [pc, #120]	@ 0000f210 1e48
.org 0xf212
	ldr r0, [r0, #0]	@ 0000f212 0068
.org 0xf214
	ldr r2, [pc, #120]	@ 0000f214 1e4a
.org 0xf216
	adds r0, r0, r2	@ 0000f216 8018
.org 0xf218
	movs r4, #248	@ 0000f218 f824
.org 0xf21a
	lsls r4, r4, #5	@ 0000f21a 6401
.org 0xf21c
	ands r1, r4	@ 0000f21c 2140
.org 0xf21e
	lsls r1, r1, #3	@ 0000f21e c900
.org 0xf220
	movs r2, #192	@ 0000f220 c022
.org 0xf222
	lsls r2, r2, #19	@ 0000f222 d204
.org 0xf224
	adds r1, r1, r2	@ 0000f224 8918
.org 0xf226
	movs r6, #128	@ 0000f226 8026
.org 0xf228
	lsls r6, r6, #2	@ 0000f228 b600
.org 0xf22a
	adds r2, r6, #0	@ 0000f22a 321c
.org 0xf22c
	bl 0x128be0	@ 0000f22c 19f1d8fc
.org 0xf230
	ldr r0, [pc, #96]	@ 0000f230 1848
.org 0xf232
	ldr r0, [r0, #0]	@ 0000f232 0068
.org 0xf234
	ldr r1, [pc, #96]	@ 0000f234 1849
.org 0xf236
	adds r0, r0, r1	@ 0000f236 4018
.org 0xf238
	ldrh r1, [r5, #0]	@ 0000f238 2988
.org 0xf23a
	ands r4, r1	@ 0000f23a 0c40
.org 0xf23c
	lsls r4, r4, #3	@ 0000f23c e400
.org 0xf23e
	ldr r2, [pc, #92]	@ 0000f23e 174a
.org 0xf240
	adds r4, r4, r2	@ 0000f240 a418
.org 0xf242
	adds r1, r4, #0	@ 0000f242 211c
.org 0xf244
	adds r2, r6, #0	@ 0000f244 321c
.org 0xf246
	bl 0x128be0	@ 0000f246 19f1cbfc
.org 0xf24a
	movs r0, #192	@ 0000f24a c020
.org 0xf24c
	str r0, [r7, #68]	@ 0000f24c 7864
.org 0xf24e
	str r0, [r7, #72]	@ 0000f24e b864
.org 0xf250
	ldr r1, [r7, #52]	@ 0000f250 796b
.org 0xf252
	muls r0, r1	@ 0000f252 4843
.org 0xf254
	asrs r0, r0, #8	@ 0000f254 0012
.org 0xf256
	adds r1, r7, #0	@ 0000f256 391c
.org 0xf258
	adds r1, #108	@ 0000f258 6c31
.org 0xf25a
	movs r4, #0	@ 0000f25a 0024
.org 0xf25c
	strh r0, [r1, #0]	@ 0000f25c 0880
.org 0xf25e
	adds r1, #2	@ 0000f25e 0231
.org 0xf260
	strh r0, [r1, #0]	@ 0000f260 0880
.org 0xf262
	ldrh r0, [r1, #0]	@ 0000f262 0888
.org 0xf264
	movs r1, #150	@ 0000f264 9621
.org 0xf266
	lsls r1, r1, #4	@ 0000f266 0901
.org 0xf268
	bl 0x129198	@ 0000f268 19f196ff
.org 0xf26c
	adds r1, r7, #0	@ 0000f26c 391c
.org 0xf26e
	adds r1, #106	@ 0000f26e 6a31
.org 0xf270
	strh r0, [r1, #0]	@ 0000f270 0880
.org 0xf272
	adds r0, r7, #0	@ 0000f272 381c
.org 0xf274
	adds r0, #104	@ 0000f274 6830
.org 0xf276
	strb r4, [r0, #0]	@ 0000f276 0470
.org 0xf278
	ldrb r0, [r7, #14]	@ 0000f278 b87b
.org 0xf27a
	adds r0, #1	@ 0000f27a 0130
.org 0xf27c
	strb r0, [r7, #14]	@ 0000f27c b873
.org 0xf27e
	pop {r4, r5, r6, r7}	@ 0000f27e f0bc
.org 0xf280
	pop {r0}	@ 0000f280 01bc
.org 0xf282
	bx r0	@ 0000f282 0047
