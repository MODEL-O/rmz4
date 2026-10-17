@ FUN_0801c22c  entry 0x0801c22c  size 94
.thumb
.org 0x1c22c
FUN_0801c22c:
	push {r4, r5, r6, lr}	@ 0001c22c 70b5
.org 0x1c22e
	adds r5, r0, #0	@ 0001c22e 051c
.org 0x1c230
	ldr r3, [pc, #88]	@ 0001c230 164b
.org 0x1c232
	ldr r1, [pc, #92]	@ 0001c232 1749
.org 0x1c234
	ldr r0, [pc, #92]	@ 0001c234 1748
.org 0x1c236
	adds r1, r1, r0	@ 0001c236 0918
.org 0x1c238
	ldr r2, [r1, #0]	@ 0001c238 0a68
.org 0x1c23a
	ldr r0, [pc, #92]	@ 0001c23a 1748
.org 0x1c23c
	muls r0, r2	@ 0001c23c 5043
.org 0x1c23e
	ldr r2, [pc, #92]	@ 0001c23e 174a
.org 0x1c240
	adds r0, r0, r2	@ 0001c240 8018
.org 0x1c242
	str r0, [r1, #0]	@ 0001c242 0860
.org 0x1c244
	lsrs r0, r0, #16	@ 0001c244 000c
.org 0x1c246
	movs r1, #31	@ 0001c246 1f21
.org 0x1c248
	ands r0, r1	@ 0001c248 0840
.org 0x1c24a
	lsls r0, r0, #1	@ 0001c24a 4000
.org 0x1c24c
	adds r0, r0, r3	@ 0001c24c c018
.org 0x1c24e
	ldrh r1, [r0, #0]	@ 0001c24e 0188
.org 0x1c250
	adds r0, r5, #0	@ 0001c250 281c
.org 0x1c252
	adds r0, #104	@ 0001c252 6830
.org 0x1c254
	movs r6, #0	@ 0001c254 0026
.org 0x1c256
	strh r1, [r0, #0]	@ 0001c256 0180
.org 0x1c258
	ldr r4, [pc, #68]	@ 0001c258 114c
.org 0x1c25a
	ldr r0, [r4, #0]	@ 0001c25a 2068
.org 0x1c25c
	ldr r1, [pc, #68]	@ 0001c25c 1149
.org 0x1c25e
	adds r0, r0, r1	@ 0001c25e 4018
.org 0x1c260
	movs r1, #128	@ 0001c260 8021
.org 0x1c262
	lsls r1, r1, #7	@ 0001c262 c901
.org 0x1c264
	bl 0x1ea4	@ 0001c264 e5f71efe
.org 0x1c268
	ldr r0, [r4, #0]	@ 0001c268 2068
.org 0x1c26a
	ldr r2, [pc, #60]	@ 0001c26a 0f4a
.org 0x1c26c
	adds r0, r0, r2	@ 0001c26c 8018
.org 0x1c26e
	movs r1, #0	@ 0001c26e 0021
.org 0x1c270
	bl 0x2208	@ 0001c270 e5f7caff
.org 0x1c274
	adds r5, #106	@ 0001c274 6a35
.org 0x1c276
	strh r6, [r5, #0]	@ 0001c276 2e80
.org 0x1c278
	ldr r1, [pc, #48]	@ 0001c278 0c49
.org 0x1c27a
	ldr r0, [pc, #52]	@ 0001c27a 0d48
.org 0x1c27c
	adds r1, r1, r0	@ 0001c27c 0918
.org 0x1c27e
	ldrb r0, [r1, #0]	@ 0001c27e 0878
.org 0x1c280
	adds r0, #1	@ 0001c280 0130
.org 0x1c282
	strb r0, [r1, #0]	@ 0001c282 0870
.org 0x1c284
	pop {r4, r5, r6}	@ 0001c284 70bc
.org 0x1c286
	pop {r0}	@ 0001c286 01bc
.org 0x1c288
	bx r0	@ 0001c288 0047
