@ FUN_0802e1f0  entry 0x0802e1f0  size 214
.thumb
.org 0x2e1f0
FUN_0802e1f0:
	push {r4, r5, r6, r7, lr}	@ 0002e1f0 f0b5
.org 0x2e1f2
	mov r7, sl	@ 0002e1f2 5746
.org 0x2e1f4
	mov r6, r9	@ 0002e1f4 4e46
.org 0x2e1f6
	mov r5, r8	@ 0002e1f6 4546
.org 0x2e1f8
	push {r5, r6, r7}	@ 0002e1f8 e0b4
.org 0x2e1fa
	sub sp, #4	@ 0002e1fa 81b0
.org 0x2e1fc
	str r0, [sp, #0]	@ 0002e1fc 0090
.org 0x2e1fe
	mov r9, r1	@ 0002e1fe 8946
.org 0x2e200
	mov r8, r2	@ 0002e200 9046
.org 0x2e202
	movs r6, #0	@ 0002e202 0026
.org 0x2e204
	movs r1, #220	@ 0002e204 dc21
.org 0x2e206
	lsls r1, r1, #1	@ 0002e206 4900
.org 0x2e208
	adds r0, r0, r1	@ 0002e208 4018
.org 0x2e20a
	ldrb r0, [r0, #0]	@ 0002e20a 0078
.org 0x2e20c
	cmp r6, r0	@ 0002e20c 8642
.org 0x2e20e
	bcs.n 0x2e2bc	@ 0002e20e 55d2
.org 0x2e210
	ldr r2, [pc, #140]	@ 0002e210 234a
.org 0x2e212
	mov ip, r2	@ 0002e212 9446
.org 0x2e214
	movs r4, #240	@ 0002e214 f024
.org 0x2e216
	lsls r4, r4, #1	@ 0002e216 6400
.org 0x2e218
	add r4, ip	@ 0002e218 6444
.org 0x2e21a
	mov sl, r4	@ 0002e21a a246
.org 0x2e21c
	ldr r7, [sp, #0]	@ 0002e21c 009f
.org 0x2e21e
	movs r1, #196	@ 0002e21e c421
.org 0x2e220
	lsls r1, r1, #1	@ 0002e220 4900
.org 0x2e222
	adds r0, r7, r1	@ 0002e222 7818
.org 0x2e224
	adds r0, r0, r6	@ 0002e224 8019
.org 0x2e226
	ldrb r1, [r0, #0]	@ 0002e226 0178
.org 0x2e228
	lsls r0, r1, #1	@ 0002e228 4800
.org 0x2e22a
	adds r0, r0, r1	@ 0002e22a 4018
.org 0x2e22c
	lsls r2, r0, #3	@ 0002e22c c200
.org 0x2e22e
	ldr r4, [pc, #116]	@ 0002e22e 1d4c
.org 0x2e230
	adds r0, r2, r4	@ 0002e230 1019
.org 0x2e232
	ldr r5, [r0, #0]	@ 0002e232 0568
.org 0x2e234
	mov r7, r9	@ 0002e234 4f46
.org 0x2e236
	subs r1, r7, r5	@ 0002e236 791b
.org 0x2e238
	mov r0, ip	@ 0002e238 6046
.org 0x2e23a
	adds r3, r2, r0	@ 0002e23a 1318
.org 0x2e23c
	movs r4, #236	@ 0002e23c ec24
.org 0x2e23e
	lsls r4, r4, #1	@ 0002e23e 6400
.org 0x2e240
	adds r0, r3, r4	@ 0002e240 1819
.org 0x2e242
	ldrh r0, [r0, #0]	@ 0002e242 0088
.org 0x2e244
	adds r1, r1, r0	@ 0002e244 0918
.org 0x2e246
	lsls r0, r0, #1	@ 0002e246 4000
.org 0x2e248
	cmp r1, r0	@ 0002e248 8142
.org 0x2e24a
	bcs.n 0x2e2a8	@ 0002e24a 2dd2
.org 0x2e24c
	mov r7, sl	@ 0002e24c 5746
.org 0x2e24e
	adds r0, r2, r7	@ 0002e24e d019
.org 0x2e250
	ldr r4, [r0, #0]	@ 0002e250 0468
.org 0x2e252
	mov r0, r8	@ 0002e252 4046
.org 0x2e254
	subs r1, r0, r4	@ 0002e254 011b
.org 0x2e256
	movs r7, #237	@ 0002e256 ed27
.org 0x2e258
	lsls r7, r7, #1	@ 0002e258 7f00
.org 0x2e25a
	adds r0, r3, r7	@ 0002e25a d819
.org 0x2e25c
	ldrh r0, [r0, #0]	@ 0002e25c 0088
.org 0x2e25e
	adds r1, r1, r0	@ 0002e25e 0918
.org 0x2e260
	lsls r0, r0, #1	@ 0002e260 4000
.org 0x2e262
	cmp r1, r0	@ 0002e262 8142
.org 0x2e264
	bcs.n 0x2e2a8	@ 0002e264 20d2
.org 0x2e266
	movs r1, #235	@ 0002e266 eb21
.org 0x2e268
	lsls r1, r1, #1	@ 0002e268 4900
.org 0x2e26a
	adds r0, r3, r1	@ 0002e26a 5818
.org 0x2e26c
	ldrh r1, [r0, #0]	@ 0002e26c 0188
.org 0x2e26e
	movs r0, #128	@ 0002e26e 8020
.org 0x2e270
	lsls r0, r0, #2	@ 0002e270 8000
.org 0x2e272
	ands r0, r1	@ 0002e272 0840
.org 0x2e274
	cmp r0, #0	@ 0002e274 0028
.org 0x2e276
	bne.n 0x2e2a8	@ 0002e276 17d1
.org 0x2e278
	movs r0, #15	@ 0002e278 0f20
.org 0x2e27a
	ands r0, r1	@ 0002e27a 0840
.org 0x2e27c
	cmp r0, #15	@ 0002e27c 0f28
.org 0x2e27e
	beq.n 0x2e2a8	@ 0002e27e 13d0
.org 0x2e280
	movs r0, #242	@ 0002e280 f220
.org 0x2e282
	lsls r0, r0, #1	@ 0002e282 4000
.org 0x2e284
	add r0, ip	@ 0002e284 6044
.org 0x2e286
	adds r0, r2, r0	@ 0002e286 1018
.org 0x2e288
	ldr r0, [r0, #0]	@ 0002e288 0068
.org 0x2e28a
	cmp r5, r0	@ 0002e28a 8542
.org 0x2e28c
	bne.n 0x2e2a8	@ 0002e28c 0cd1
.org 0x2e28e
	movs r0, #244	@ 0002e28e f420
.org 0x2e290
	lsls r0, r0, #1	@ 0002e290 4000
.org 0x2e292
	add r0, ip	@ 0002e292 6044
.org 0x2e294
	adds r0, r2, r0	@ 0002e294 1018
.org 0x2e296
	ldr r0, [r0, #0]	@ 0002e296 0068
.org 0x2e298
	cmp r4, r0	@ 0002e298 8442
.org 0x2e29a
	beq.n 0x2e2a8	@ 0002e29a 05d0
.org 0x2e29c
	movs r0, #1	@ 0002e29c 0120
.org 0x2e29e
	b.n 0x2e2be	@ 0002e29e 0ee0
.org 0x2e2a0
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e2a0 data
.org 0x2e2a4
	.byte 0x8c,0x0c,0x00,0x02	@ 0002e2a4 data
.org 0x2e2a8
	adds r0, r6, #1	@ 0002e2a8 701c
.org 0x2e2aa
	lsls r0, r0, #24	@ 0002e2aa 0006
.org 0x2e2ac
	lsrs r6, r0, #24	@ 0002e2ac 060e
.org 0x2e2ae
	ldr r2, [sp, #0]	@ 0002e2ae 009a
.org 0x2e2b0
	movs r4, #220	@ 0002e2b0 dc24
.org 0x2e2b2
	lsls r4, r4, #1	@ 0002e2b2 6400
.org 0x2e2b4
	adds r0, r2, r4	@ 0002e2b4 1019
.org 0x2e2b6
	ldrb r0, [r0, #0]	@ 0002e2b6 0078
.org 0x2e2b8
	cmp r6, r0	@ 0002e2b8 8642
.org 0x2e2ba
	bcc.n 0x2e21c	@ 0002e2ba afd3
.org 0x2e2bc
	movs r0, #0	@ 0002e2bc 0020
.org 0x2e2be
	add sp, #4	@ 0002e2be 01b0
.org 0x2e2c0
	pop {r3, r4, r5}	@ 0002e2c0 38bc
.org 0x2e2c2
	mov r8, r3	@ 0002e2c2 9846
.org 0x2e2c4
	mov r9, r4	@ 0002e2c4 a146
