@ FUN_080bf1e8  entry 0x080bf1e8  size 146
.thumb
.org 0xbf1e8
FUN_080bf1e8:
	push {r4, lr}	@ 000bf1e8 10b5
.org 0xbf1ea
	adds r4, r0, #0	@ 000bf1ea 041c
.org 0xbf1ec
	ldrb r0, [r4, #14]	@ 000bf1ec a07b
.org 0xbf1ee
	cmp r0, #0	@ 000bf1ee 0028
.org 0xbf1f0
	beq.n 0xbf1f8	@ 000bf1f0 02d0
.org 0xbf1f2
	cmp r0, #1	@ 000bf1f2 0128
.org 0xbf1f4
	beq.n 0xbf226	@ 000bf1f4 17d0
.org 0xbf1f6
	b.n 0xbf274	@ 000bf1f6 3de0
.org 0xbf1f8
	ldrb r1, [r4, #10]	@ 000bf1f8 a17a
.org 0xbf1fa
	movs r0, #16	@ 000bf1fa 1020
.org 0xbf1fc
	ands r0, r1	@ 000bf1fc 0840
.org 0xbf1fe
	movs r1, #255	@ 000bf1fe ff21
.org 0xbf200
	cmp r0, #0	@ 000bf200 0028
.org 0xbf202
	beq.n 0xbf206	@ 000bf202 00d0
.org 0xbf204
	movs r1, #1	@ 000bf204 0121
.org 0xbf206
	lsls r1, r1, #24	@ 000bf206 0906
.org 0xbf208
	asrs r1, r1, #24	@ 000bf208 0916
.org 0xbf20a
	lsls r0, r1, #3	@ 000bf20a c800
.org 0xbf20c
	adds r0, r0, r1	@ 000bf20c 4018
.org 0xbf20e
	lsls r0, r0, #6	@ 000bf20e 8001
.org 0xbf210
	str r0, [r4, #92]	@ 000bf210 e065
.org 0xbf212
	movs r0, #144	@ 000bf212 9020
.org 0xbf214
	lsls r0, r0, #2	@ 000bf214 8000
.org 0xbf216
	str r0, [r4, #96]	@ 000bf216 2066
.org 0xbf218
	ldr r1, [pc, #96]	@ 000bf218 1849
.org 0xbf21a
	adds r0, r4, #0	@ 000bf21a 201c
.org 0xbf21c
	bl 0x1cf00	@ 000bf21c 5df770fe
.org 0xbf220
	ldrb r0, [r4, #14]	@ 000bf220 a07b
.org 0xbf222
	adds r0, #1	@ 000bf222 0130
.org 0xbf224
	strb r0, [r4, #14]	@ 000bf224 a073
.org 0xbf226
	adds r0, r4, #0	@ 000bf226 201c
.org 0xbf228
	bl 0x1cff0	@ 000bf228 5df7e2fe
.org 0xbf22c
	ldr r0, [r4, #84]	@ 000bf22c 606d
.org 0xbf22e
	ldr r1, [r4, #92]	@ 000bf22e e16d
.org 0xbf230
	adds r0, r0, r1	@ 000bf230 4018
.org 0xbf232
	str r0, [r4, #84]	@ 000bf232 6065
.org 0xbf234
	ldr r1, [r4, #88]	@ 000bf234 a16d
.org 0xbf236
	ldr r2, [r4, #96]	@ 000bf236 226e
.org 0xbf238
	adds r1, r1, r2	@ 000bf238 8918
.org 0xbf23a
	str r1, [r4, #88]	@ 000bf23a a165
.org 0xbf23c
	bl 0x7c7c	@ 000bf23c 48f71efd
.org 0xbf240
	lsls r0, r0, #16	@ 000bf240 0004
.org 0xbf242
	cmp r0, #0	@ 000bf242 0028
.org 0xbf244
	beq.n 0xbf274	@ 000bf244 16d0
.org 0xbf246
	adds r0, r4, #0	@ 000bf246 201c
.org 0xbf248
	adds r0, #84	@ 000bf248 5430
.org 0xbf24a
	adds r1, r4, #0	@ 000bf24a 211c
.org 0xbf24c
	adds r1, #92	@ 000bf24c 5c31
.org 0xbf24e
	ldrb r2, [r4, #10]	@ 000bf24e a27a
.org 0xbf250
	lsrs r2, r2, #4	@ 000bf250 1209
.org 0xbf252
	movs r3, #1	@ 000bf252 0123
.org 0xbf254
	ands r2, r3	@ 000bf254 1a40
.org 0xbf256
	ldrb r3, [r4, #17]	@ 000bf256 637c
.org 0xbf258
	bl 0xbee30	@ 000bf258 fff7eafd
.org 0xbf25c
	ldr r1, [pc, #32]	@ 000bf25c 0849
.org 0xbf25e
	ldrb r0, [r4, #9]	@ 000bf25e 607a
.org 0xbf260
	lsls r0, r0, #2	@ 000bf260 8000
.org 0xbf262
	adds r0, r0, r1	@ 000bf262 4018
.org 0xbf264
	movs r1, #2	@ 000bf264 0221
.org 0xbf266
	str r1, [r4, #12]	@ 000bf266 e160
.org 0xbf268
	ldr r0, [r0, #0]	@ 000bf268 0068
.org 0xbf26a
	ldr r0, [r0, #8]	@ 000bf26a 8068
.org 0xbf26c
	str r0, [r4, #20]	@ 000bf26c 6061
.org 0xbf26e
	adds r0, r4, #0	@ 000bf26e 201c
.org 0xbf270
	bl 0xbefc0	@ 000bf270 fff7a6fe
.org 0xbf274
	pop {r4}	@ 000bf274 10bc
.org 0xbf276
	pop {r0}	@ 000bf276 01bc
.org 0xbf278
	bx r0	@ 000bf278 0047
