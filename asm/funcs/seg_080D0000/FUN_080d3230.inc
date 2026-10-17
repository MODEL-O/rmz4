@ FUN_080d3230  entry 0x080d3230  size 178
.thumb
.org 0xd3230
FUN_080d3230:
	push {r4, r5, r6, lr}	@ 000d3230 70b5
.org 0xd3232
	adds r4, r0, #0	@ 000d3232 041c
.org 0xd3234
	adds r0, #116	@ 000d3234 7430
.org 0xd3236
	ldrb r0, [r0, #0]	@ 000d3236 0078
.org 0xd3238
	lsls r0, r0, #24	@ 000d3238 0006
.org 0xd323a
	asrs r0, r0, #24	@ 000d323a 0016
.org 0xd323c
	cmp r0, #0	@ 000d323c 0028
.org 0xd323e
	bne.n 0xd325a	@ 000d323e 0cd1
.org 0xd3240
	adds r0, r4, #0	@ 000d3240 201c
.org 0xd3242
	adds r0, #120	@ 000d3242 7830
.org 0xd3244
	movs r1, #0	@ 000d3244 0021
.org 0xd3246
	ldrsh r2, [r0, r1]	@ 000d3246 425e
.org 0xd3248
	movs r1, #128	@ 000d3248 8021
.org 0xd324a
	lsls r1, r1, #1	@ 000d324a 4900
.org 0xd324c
	adds r5, r0, #0	@ 000d324c 051c
.org 0xd324e
	cmp r2, r1	@ 000d324e 8a42
.org 0xd3250
	bne.n 0xd325a	@ 000d3250 03d1
.org 0xd3252
	adds r0, r4, #0	@ 000d3252 201c
.org 0xd3254
	bl 0x1cc9c	@ 000d3254 49f722fd
.org 0xd3258
	b.n 0xd3264	@ 000d3258 04e0
.org 0xd325a
	adds r0, r4, #0	@ 000d325a 201c
.org 0xd325c
	bl 0x1cdbc	@ 000d325c 49f7aefd
.org 0xd3260
	adds r5, r4, #0	@ 000d3260 251c
.org 0xd3262
	adds r5, #120	@ 000d3262 7835
.org 0xd3264
	ldrb r1, [r4, #10]	@ 000d3264 a17a
.org 0xd3266
	movs r0, #1	@ 000d3266 0120
.org 0xd3268
	movs r6, #0	@ 000d3268 0026
.org 0xd326a
	orrs r0, r1	@ 000d326a 0843
.org 0xd326c
	strb r0, [r4, #10]	@ 000d326c a072
.org 0xd326e
	adds r0, r4, #0	@ 000d326e 201c
.org 0xd3270
	movs r1, #11	@ 000d3270 0b21
.org 0xd3272
	bl 0x1cf00	@ 000d3272 49f745fe
.org 0xd3276
	ldrb r2, [r4, #17]	@ 000d3276 627c
.org 0xd3278
	cmp r2, #0	@ 000d3278 002a
.org 0xd327a
	beq.n 0xd3284	@ 000d327a 03d0
.org 0xd327c
	ldrb r0, [r4, #10]	@ 000d327c a07a
.org 0xd327e
	movs r1, #16	@ 000d327e 1021
.org 0xd3280
	orrs r0, r1	@ 000d3280 0843
.org 0xd3282
	b.n 0xd328a	@ 000d3282 02e0
.org 0xd3284
	ldrb r1, [r4, #10]	@ 000d3284 a17a
.org 0xd3286
	movs r0, #239	@ 000d3286 ef20
.org 0xd3288
	ands r0, r1	@ 000d3288 0840
.org 0xd328a
	strb r0, [r4, #10]	@ 000d328a a072
.org 0xd328c
	movs r3, #1	@ 000d328c 0123
.org 0xd328e
	adds r1, r3, #0	@ 000d328e 191c
.org 0xd3290
	ands r1, r2	@ 000d3290 1140
.org 0xd3292
	adds r0, r4, #0	@ 000d3292 201c
.org 0xd3294
	adds r0, #76	@ 000d3294 4c30
.org 0xd3296
	strb r1, [r0, #0]	@ 000d3296 0170
.org 0xd3298
	movs r0, #74	@ 000d3298 4a20
.org 0xd329a
	adds r0, r0, r4	@ 000d329a 0019
.org 0xd329c
	mov ip, r0	@ 000d329c 8446
.org 0xd329e
	lsls r1, r1, #4	@ 000d329e 0901
.org 0xd32a0
	ldrb r2, [r0, #0]	@ 000d32a0 0278
.org 0xd32a2
	movs r0, #17	@ 000d32a2 1120
.org 0xd32a4
	negs r0, r0	@ 000d32a4 4042
.org 0xd32a6
	ands r0, r2	@ 000d32a6 1040
.org 0xd32a8
	orrs r0, r1	@ 000d32a8 0843
.org 0xd32aa
	mov r1, ip	@ 000d32aa 6146
.org 0xd32ac
	strb r0, [r1, #0]	@ 000d32ac 0870
.org 0xd32ae
	adds r0, r4, #0	@ 000d32ae 201c
.org 0xd32b0
	adds r0, #116	@ 000d32b0 7430
.org 0xd32b2
	ldrb r1, [r0, #0]	@ 000d32b2 0178
.org 0xd32b4
	subs r0, #80	@ 000d32b4 5038
.org 0xd32b6
	strb r1, [r0, #0]	@ 000d32b6 0170
.org 0xd32b8
	ldrh r1, [r5, #0]	@ 000d32b8 2988
.org 0xd32ba
	adds r0, #44	@ 000d32ba 2c30
.org 0xd32bc
	strh r1, [r0, #0]	@ 000d32bc 0180
.org 0xd32be
	ldrh r0, [r5, #0]	@ 000d32be 2888
.org 0xd32c0
	adds r2, r4, #0	@ 000d32c0 221c
.org 0xd32c2
	adds r2, #82	@ 000d32c2 5232
.org 0xd32c4
	strh r0, [r2, #0]	@ 000d32c4 1080
.org 0xd32c6
	ldr r1, [pc, #28]	@ 000d32c6 0749
.org 0xd32c8
	ldrb r0, [r4, #9]	@ 000d32c8 607a
.org 0xd32ca
	lsls r0, r0, #2	@ 000d32ca 8000
.org 0xd32cc
	adds r0, r0, r1	@ 000d32cc 4018
.org 0xd32ce
	str r3, [r4, #12]	@ 000d32ce e360
.org 0xd32d0
	ldr r0, [r0, #0]	@ 000d32d0 0068
.org 0xd32d2
	ldr r0, [r0, #4]	@ 000d32d2 4068
.org 0xd32d4
	str r0, [r4, #20]	@ 000d32d4 6061
.org 0xd32d6
	adds r0, r4, #0	@ 000d32d6 201c
.org 0xd32d8
	bl 0xd32e8	@ 000d32d8 00f006f8
.org 0xd32dc
	pop {r4, r5, r6}	@ 000d32dc 70bc
.org 0xd32de
	pop {r0}	@ 000d32de 01bc
.org 0xd32e0
	bx r0	@ 000d32e0 0047
