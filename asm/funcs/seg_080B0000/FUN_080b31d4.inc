@ FUN_080b31d4  entry 0x080b31d4  size 234
.thumb
.org 0xb31d4
FUN_080b31d4:
	push {r4, r5, lr}	@ 000b31d4 30b5
.org 0xb31d6
	sub sp, #4	@ 000b31d6 81b0
.org 0xb31d8
	adds r4, r0, #0	@ 000b31d8 041c
.org 0xb31da
	ldr r1, [pc, #36]	@ 000b31da 0949
.org 0xb31dc
	mov r0, sp	@ 000b31dc 6846
.org 0xb31de
	movs r2, #4	@ 000b31de 0422
.org 0xb31e0
	bl 0x129258	@ 000b31e0 76f03af8
.org 0xb31e4
	ldrb r0, [r4, #14]	@ 000b31e4 a07b
.org 0xb31e6
	cmp r0, #0	@ 000b31e6 0028
.org 0xb31e8
	bne.n 0xb322e	@ 000b31e8 21d1
.org 0xb31ea
	adds r0, r4, #0	@ 000b31ea 201c
.org 0xb31ec
	adds r0, #180	@ 000b31ec b430
.org 0xb31ee
	ldrb r0, [r0, #0]	@ 000b31ee 0078
.org 0xb31f0
	cmp r0, #0	@ 000b31f0 0028
.org 0xb31f2
	bne.n 0xb3208	@ 000b31f2 09d1
.org 0xb31f4
	adds r1, r4, #0	@ 000b31f4 211c
.org 0xb31f6
	adds r1, #184	@ 000b31f6 b831
.org 0xb31f8
	ldr r0, [r4, #84]	@ 000b31f8 606d
.org 0xb31fa
	ldr r2, [pc, #8]	@ 000b31fa 024a
.org 0xb31fc
	adds r0, r0, r2	@ 000b31fc 8018
.org 0xb31fe
	b.n 0xb3214	@ 000b31fe 09e0
.org 0xb3200
	.byte 0x34,0x9e,0x12,0x08	@ 000b3200 data
.org 0xb3204
	.byte 0x00,0xea,0xff,0xff	@ 000b3204 data
.org 0xb3208
	adds r1, r4, #0	@ 000b3208 211c
.org 0xb320a
	adds r1, #184	@ 000b320a b831
.org 0xb320c
	ldr r0, [r4, #84]	@ 000b320c 606d
.org 0xb320e
	movs r3, #176	@ 000b320e b023
.org 0xb3210
	lsls r3, r3, #5	@ 000b3210 5b01
.org 0xb3212
	adds r0, r0, r3	@ 000b3212 c018
.org 0xb3214
	str r0, [r1, #0]	@ 000b3214 0860
.org 0xb3216
	adds r1, r4, #0	@ 000b3216 211c
.org 0xb3218
	adds r1, #188	@ 000b3218 bc31
.org 0xb321a
	ldr r0, [r4, #88]	@ 000b321a a06d
.org 0xb321c
	str r0, [r1, #0]	@ 000b321c 0860
.org 0xb321e
	movs r0, #0	@ 000b321e 0020
.org 0xb3220
	strb r0, [r4, #18]	@ 000b3220 a074
.org 0xb3222
	strb r0, [r4, #17]	@ 000b3222 6074
.org 0xb3224
	movs r0, #30	@ 000b3224 1e20
.org 0xb3226
	strb r0, [r4, #19]	@ 000b3226 e074
.org 0xb3228
	ldrb r0, [r4, #14]	@ 000b3228 a07b
.org 0xb322a
	adds r0, #1	@ 000b322a 0130
.org 0xb322c
	strb r0, [r4, #14]	@ 000b322c a073
.org 0xb322e
	ldrb r0, [r4, #18]	@ 000b322e a07c
.org 0xb3230
	cmp r0, #0	@ 000b3230 0028
.org 0xb3232
	beq.n 0xb3238	@ 000b3232 01d0
.org 0xb3234
	cmp r0, #255	@ 000b3234 ff28
.org 0xb3236
	bne.n 0xb323e	@ 000b3236 02d1
.org 0xb3238
	adds r0, r4, #0	@ 000b3238 201c
.org 0xb323a
	bl 0xb37b8	@ 000b323a 00f0bdfa
.org 0xb323e
	ldrb r0, [r4, #15]	@ 000b323e e07b
.org 0xb3240
	lsls r0, r0, #1	@ 000b3240 4000
.org 0xb3242
	add r0, sp	@ 000b3242 6844
.org 0xb3244
	ldrb r0, [r0, #0]	@ 000b3244 0078
.org 0xb3246
	ldrb r5, [r4, #18]	@ 000b3246 a57c
.org 0xb3248
	adds r0, r0, r5	@ 000b3248 4019
.org 0xb324a
	strb r0, [r4, #18]	@ 000b324a a074
.org 0xb324c
	ldrb r0, [r4, #17]	@ 000b324c 607c
.org 0xb324e
	cmp r0, #0	@ 000b324e 0028
.org 0xb3250
	bne.n 0xb325a	@ 000b3250 03d1
.org 0xb3252
	adds r0, r4, #0	@ 000b3252 201c
.org 0xb3254
	bl 0xb3654	@ 000b3254 00f0fef9
.org 0xb3258
	b.n 0xb325e	@ 000b3258 01e0
.org 0xb325a
	subs r0, #1	@ 000b325a 0138
.org 0xb325c
	strb r0, [r4, #17]	@ 000b325c 6074
.org 0xb325e
	adds r0, r4, #0	@ 000b325e 201c
.org 0xb3260
	adds r0, #180	@ 000b3260 b430
.org 0xb3262
	ldrb r0, [r0, #0]	@ 000b3262 0078
.org 0xb3264
	cmp r0, #1	@ 000b3264 0128
.org 0xb3266
	bne.n 0xb328c	@ 000b3266 11d1
.org 0xb3268
	adds r3, r4, #0	@ 000b3268 231c
.org 0xb326a
	adds r3, #184	@ 000b326a b833
.org 0xb326c
	ldr r2, [pc, #24]	@ 000b326c 064a
.org 0xb326e
	ldrb r0, [r4, #18]	@ 000b326e a07c
.org 0xb3270
	adds r0, #64	@ 000b3270 4030
.org 0xb3272
	lsls r0, r0, #24	@ 000b3272 0006
.org 0xb3274
	lsrs r0, r0, #23	@ 000b3274 c00d
.org 0xb3276
	adds r0, r0, r2	@ 000b3276 8018
.org 0xb3278
	movs r5, #0	@ 000b3278 0025
.org 0xb327a
	ldrsh r1, [r0, r5]	@ 000b327a 415f
.org 0xb327c
	movs r0, #22	@ 000b327c 1620
.org 0xb327e
	muls r1, r0	@ 000b327e 4143
.org 0xb3280
	ldr r0, [r3, #0]	@ 000b3280 1868
.org 0xb3282
	subs r0, r0, r1	@ 000b3282 401a
.org 0xb3284
	b.n 0xb32a8	@ 000b3284 10e0
.org 0xb3286
	.byte 0x00	@ 000b3286 data
.org 0xb3287
	.byte 0x00	@ 000b3287 data
.org 0xb3288
	.byte 0x0c,0x93,0x12,0x08	@ 000b3288 data
.org 0xb328c
	adds r3, r4, #0	@ 000b328c 231c
.org 0xb328e
	adds r3, #184	@ 000b328e b833
.org 0xb3290
	ldr r2, [pc, #56]	@ 000b3290 0e4a
.org 0xb3292
	ldrb r0, [r4, #18]	@ 000b3292 a07c
.org 0xb3294
	adds r0, #64	@ 000b3294 4030
.org 0xb3296
	lsls r0, r0, #24	@ 000b3296 0006
.org 0xb3298
	lsrs r0, r0, #23	@ 000b3298 c00d
.org 0xb329a
	adds r0, r0, r2	@ 000b329a 8018
.org 0xb329c
	movs r5, #0	@ 000b329c 0025
.org 0xb329e
	ldrsh r1, [r0, r5]	@ 000b329e 415f
.org 0xb32a0
	movs r0, #22	@ 000b32a0 1620
.org 0xb32a2
	muls r1, r0	@ 000b32a2 4143
.org 0xb32a4
	ldr r0, [r3, #0]	@ 000b32a4 1868
.org 0xb32a6
	adds r0, r0, r1	@ 000b32a6 4018
.org 0xb32a8
	str r0, [r4, #84]	@ 000b32a8 6065
.org 0xb32aa
	adds r1, r2, #0	@ 000b32aa 111c
.org 0xb32ac
	adds r2, r4, #0	@ 000b32ac 221c
.org 0xb32ae
	adds r2, #188	@ 000b32ae bc32
.org 0xb32b0
	ldrb r0, [r4, #18]	@ 000b32b0 a07c
.org 0xb32b2
	lsls r0, r0, #1	@ 000b32b2 4000
.org 0xb32b4
	adds r0, r0, r1	@ 000b32b4 4018
.org 0xb32b6
	movs r3, #0	@ 000b32b6 0023
.org 0xb32b8
	ldrsh r1, [r0, r3]	@ 000b32b8 c15e
.org 0xb32ba
	movs r0, #22	@ 000b32ba 1620
.org 0xb32bc
	muls r1, r0	@ 000b32bc 4143
