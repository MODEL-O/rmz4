@ FUN_0806222c  entry 0x0806222c  size 150
.thumb
.org 0x6222c
FUN_0806222c:
	push {r4, r5, r6, lr}	@ 0006222c 70b5
.org 0x6222e
	adds r6, r0, #0	@ 0006222e 061c
.org 0x62230
	ldrb r0, [r6, #15]	@ 00062230 f07b
.org 0x62232
	cmp r0, #0	@ 00062232 0028
.org 0x62234
	bne.n 0x62248	@ 00062234 08d1
.org 0x62236
	adds r0, r6, #0	@ 00062236 301c
.org 0x62238
	movs r1, #0	@ 00062238 0021
.org 0x6223a
	bl 0x65a94	@ 0006223a 03f02bfc
.org 0x6223e
	movs r0, #32	@ 0006223e 2020
.org 0x62240
	strb r0, [r6, #18]	@ 00062240 b074
.org 0x62242
	ldrb r0, [r6, #15]	@ 00062242 f07b
.org 0x62244
	adds r0, #1	@ 00062244 0130
.org 0x62246
	strb r0, [r6, #15]	@ 00062246 f073
.org 0x62248
	adds r0, r6, #0	@ 00062248 301c
.org 0x6224a
	bl 0x1cff0	@ 0006224a baf7d1fe
.org 0x6224e
	adds r0, r6, #0	@ 0006224e 301c
.org 0x62250
	adds r0, #116	@ 00062250 7430
.org 0x62252
	ldr r4, [pc, #112]	@ 00062252 1c4c
.org 0x62254
	ldr r3, [pc, #112]	@ 00062254 1c4b
.org 0x62256
	adds r1, r6, #0	@ 00062256 311c
.org 0x62258
	adds r1, #180	@ 00062258 b431
.org 0x6225a
	ldrb r2, [r1, #0]	@ 0006225a 0a78
.org 0x6225c
	lsls r1, r2, #1	@ 0006225c 5100
.org 0x6225e
	adds r1, r1, r3	@ 0006225e c918
.org 0x62260
	ldrh r1, [r1, #0]	@ 00062260 0988
.org 0x62262
	lsls r1, r1, #2	@ 00062262 8900
.org 0x62264
	adds r1, r1, r4	@ 00062264 0919
.org 0x62266
	adds r3, r6, #0	@ 00062266 331c
.org 0x62268
	adds r3, #113	@ 00062268 7133
.org 0x6226a
	movs r5, #0	@ 0006226a 0025
.org 0x6226c
	ldrsb r5, [r3, r5]	@ 0006226c 5d57
.org 0x6226e
	ldr r1, [r1, #0]	@ 0006226e 0968
.org 0x62270
	lsls r3, r5, #2	@ 00062270 ab00
.org 0x62272
	adds r3, r3, r1	@ 00062272 5b18
.org 0x62274
	ldr r4, [pc, #84]	@ 00062274 154c
.org 0x62276
	adds r1, r6, #0	@ 00062276 311c
.org 0x62278
	adds r1, #181	@ 00062278 b531
.org 0x6227a
	ldrb r1, [r1, #0]	@ 0006227a 0978
.org 0x6227c
	lsls r1, r1, #2	@ 0006227c 8900
.org 0x6227e
	adds r1, r1, r4	@ 0006227e 0919
.org 0x62280
	ldr r1, [r1, #0]	@ 00062280 0968
.org 0x62282
	lsls r2, r2, #2	@ 00062282 9200
.org 0x62284
	adds r2, r2, r1	@ 00062284 5218
.org 0x62286
	ldr r1, [r2, #0]	@ 00062286 1168
.org 0x62288
	adds r1, r1, r5	@ 00062288 4919
.org 0x6228a
	ldrb r1, [r1, #0]	@ 0006228a 0978
.org 0x6228c
	lsls r2, r1, #1	@ 0006228c 4a00
.org 0x6228e
	adds r2, r2, r1	@ 0006228e 5218
.org 0x62290
	lsls r2, r2, #3	@ 00062290 d200
.org 0x62292
	ldr r1, [r3, #0]	@ 00062292 1968
.org 0x62294
	adds r1, r1, r2	@ 00062294 8918
.org 0x62296
	bl 0x5784	@ 00062296 a3f775fa
.org 0x6229a
	ldrb r0, [r6, #18]	@ 0006229a b07c
.org 0x6229c
	cmp r0, #0	@ 0006229c 0028
.org 0x6229e
	beq.n 0x622a4	@ 0006229e 01d0
.org 0x622a0
	subs r0, #1	@ 000622a0 0138
.org 0x622a2
	strb r0, [r6, #18]	@ 000622a2 b074
.org 0x622a4
	ldr r0, [pc, #40]	@ 000622a4 0a48
.org 0x622a6
	ldrh r1, [r0, #8]	@ 000622a6 0189
.org 0x622a8
	movs r0, #8	@ 000622a8 0820
.org 0x622aa
	ands r0, r1	@ 000622aa 0840
.org 0x622ac
	cmp r0, #0	@ 000622ac 0028
.org 0x622ae
	bne.n 0x622bc	@ 000622ae 05d1
.org 0x622b0
	ldrb r0, [r6, #18]	@ 000622b0 b07c
.org 0x622b2
	cmp r0, #0	@ 000622b2 0028
.org 0x622b4
	bne.n 0x622bc	@ 000622b4 02d1
.org 0x622b6
	adds r0, r6, #0	@ 000622b6 301c
.org 0x622b8
	bl 0x65b08	@ 000622b8 03f026fc
.org 0x622bc
	pop {r4, r5, r6}	@ 000622bc 70bc
.org 0x622be
	pop {r0}	@ 000622be 01bc
.org 0x622c0
	bx r0	@ 000622c0 0047
