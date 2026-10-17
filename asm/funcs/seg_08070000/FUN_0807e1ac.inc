@ FUN_0807e1ac  entry 0x0807e1ac  size 262
.thumb
.org 0x7e1ac
FUN_0807e1ac:
	push {r4, r5, lr}	@ 0007e1ac 30b5
.org 0x7e1ae
	adds r4, r0, #0	@ 0007e1ae 041c
.org 0x7e1b0
	ldrb r0, [r4, #15]	@ 0007e1b0 e07b
.org 0x7e1b2
	cmp r0, #0	@ 0007e1b2 0028
.org 0x7e1b4
	bne.n 0x7e20a	@ 0007e1b4 29d1
.org 0x7e1b6
	movs r0, #164	@ 0007e1b6 a420
.org 0x7e1b8
	lsls r0, r0, #1	@ 0007e1b8 4000
.org 0x7e1ba
	bl 0x2b10	@ 0007e1ba 84f7a9fc
.org 0x7e1be
	ldr r1, [pc, #244]	@ 0007e1be 3d49
.org 0x7e1c0
	ldr r0, [pc, #244]	@ 0007e1c0 3d48
.org 0x7e1c2
	strh r0, [r1, #0]	@ 0007e1c2 0880
.org 0x7e1c4
	adds r2, r4, #0	@ 0007e1c4 221c
.org 0x7e1c6
	adds r2, #69	@ 0007e1c6 4532
.org 0x7e1c8
	ldrb r1, [r2, #0]	@ 0007e1c8 1178
.org 0x7e1ca
	movs r0, #13	@ 0007e1ca 0d20
.org 0x7e1cc
	negs r0, r0	@ 0007e1cc 4042
.org 0x7e1ce
	ands r0, r1	@ 0007e1ce 0840
.org 0x7e1d0
	movs r1, #4	@ 0007e1d0 0421
.org 0x7e1d2
	orrs r0, r1	@ 0007e1d2 0843
.org 0x7e1d4
	strb r0, [r2, #0]	@ 0007e1d4 1070
.org 0x7e1d6
	adds r0, r4, #0	@ 0007e1d6 201c
.org 0x7e1d8
	movs r1, #28	@ 0007e1d8 1c21
.org 0x7e1da
	bl 0x7e8c8	@ 0007e1da 00f075fb
.org 0x7e1de
	adds r0, r4, #0	@ 0007e1de 201c
.org 0x7e1e0
	adds r0, #180	@ 0007e1e0 b430
.org 0x7e1e2
	ldr r1, [r0, #0]	@ 0007e1e2 0168
.org 0x7e1e4
	movs r0, #240	@ 0007e1e4 f020
.org 0x7e1e6
	lsls r0, r0, #7	@ 0007e1e6 c001
.org 0x7e1e8
	adds r1, r1, r0	@ 0007e1e8 0918
.org 0x7e1ea
	str r1, [r4, #92]	@ 0007e1ea e165
.org 0x7e1ec
	adds r0, r4, #0	@ 0007e1ec 201c
.org 0x7e1ee
	adds r0, #184	@ 0007e1ee b830
.org 0x7e1f0
	ldr r0, [r0, #0]	@ 0007e1f0 0068
.org 0x7e1f2
	movs r2, #168	@ 0007e1f2 a822
.org 0x7e1f4
	lsls r2, r2, #5	@ 0007e1f4 5201
.org 0x7e1f6
	adds r0, r0, r2	@ 0007e1f6 8018
.org 0x7e1f8
	str r0, [r4, #96]	@ 0007e1f8 2066
.org 0x7e1fa
	ldr r0, [r4, #84]	@ 0007e1fa 606d
.org 0x7e1fc
	subs r1, r1, r0	@ 0007e1fc 091a
.org 0x7e1fe
	str r1, [r4, #100]	@ 0007e1fe 6166
.org 0x7e200
	movs r0, #32	@ 0007e200 2020
.org 0x7e202
	strb r0, [r4, #18]	@ 0007e202 a074
.org 0x7e204
	ldrb r0, [r4, #15]	@ 0007e204 e07b
.org 0x7e206
	adds r0, #1	@ 0007e206 0130
.org 0x7e208
	strb r0, [r4, #15]	@ 0007e208 e073
.org 0x7e20a
	adds r5, r4, #0	@ 0007e20a 251c
.org 0x7e20c
	adds r5, #188	@ 0007e20c bc35
.org 0x7e20e
	ldrb r0, [r5, #0]	@ 0007e20e 2878
.org 0x7e210
	cmp r0, #0	@ 0007e210 0028
.org 0x7e212
	beq.n 0x7e21a	@ 0007e212 02d0
.org 0x7e214
	adds r0, r4, #0	@ 0007e214 201c
.org 0x7e216
	bl 0x1cff0	@ 0007e216 9ef7ebfe
.org 0x7e21a
	adds r0, r4, #0	@ 0007e21a 201c
.org 0x7e21c
	adds r0, #116	@ 0007e21c 7430
.org 0x7e21e
	ldr r3, [pc, #156]	@ 0007e21e 274b
.org 0x7e220
	ldr r2, [pc, #156]	@ 0007e220 274a
.org 0x7e222
	ldrb r1, [r5, #0]	@ 0007e222 2978
.org 0x7e224
	lsls r1, r1, #1	@ 0007e224 4900
.org 0x7e226
	adds r1, r1, r2	@ 0007e226 8918
.org 0x7e228
	ldrh r2, [r1, #0]	@ 0007e228 0a88
.org 0x7e22a
	lsls r2, r2, #2	@ 0007e22a 9200
.org 0x7e22c
	adds r2, r2, r3	@ 0007e22c d218
.org 0x7e22e
	adds r1, r4, #0	@ 0007e22e 211c
.org 0x7e230
	adds r1, #113	@ 0007e230 7131
.org 0x7e232
	ldrb r1, [r1, #0]	@ 0007e232 0978
.org 0x7e234
	lsls r1, r1, #24	@ 0007e234 0906
.org 0x7e236
	asrs r1, r1, #24	@ 0007e236 0916
.org 0x7e238
	ldr r2, [r2, #0]	@ 0007e238 1268
.org 0x7e23a
	lsls r1, r1, #2	@ 0007e23a 8900
.org 0x7e23c
	adds r1, r1, r2	@ 0007e23c 8918
.org 0x7e23e
	ldr r1, [r1, #0]	@ 0007e23e 0968
.org 0x7e240
	bl 0x5784	@ 0007e240 87f7a0fa
.org 0x7e244
	ldrb r0, [r4, #18]	@ 0007e244 a07c
.org 0x7e246
	subs r5, r0, #1	@ 0007e246 451e
.org 0x7e248
	strb r5, [r4, #18]	@ 0007e248 a574
.org 0x7e24a
	ldrb r0, [r4, #18]	@ 0007e24a a07c
.org 0x7e24c
	ldr r1, [pc, #116]	@ 0007e24c 1d49
.org 0x7e24e
	lsls r0, r0, #25	@ 0007e24e 4006
.org 0x7e250
	lsrs r0, r0, #23	@ 0007e250 c00d
.org 0x7e252
	adds r0, r0, r1	@ 0007e252 4018
.org 0x7e254
	movs r3, #0	@ 0007e254 0023
.org 0x7e256
	ldrsh r2, [r0, r3]	@ 0007e256 c25e
.org 0x7e258
	adds r0, r2, #0	@ 0007e258 101c
.org 0x7e25a
	cmp r2, #0	@ 0007e25a 002a
.org 0x7e25c
	bge.n 0x7e260	@ 0007e25c 00da
.org 0x7e25e
	adds r0, r2, #3	@ 0007e25e d01c
.org 0x7e260
	asrs r2, r0, #2	@ 0007e260 8210
.org 0x7e262
	lsls r0, r2, #24	@ 0007e262 1006
.org 0x7e264
	lsrs r0, r0, #23	@ 0007e264 c00d
.org 0x7e266
	adds r0, r0, r1	@ 0007e266 4018
.org 0x7e268
	movs r1, #0	@ 0007e268 0021
.org 0x7e26a
	ldrsh r2, [r0, r1]	@ 0007e26a 425e
.org 0x7e26c
	ldr r0, [r4, #100]	@ 0007e26c 606e
.org 0x7e26e
	negs r0, r0	@ 0007e26e 4042
.org 0x7e270
	muls r0, r2	@ 0007e270 5043
.org 0x7e272
	cmp r0, #0	@ 0007e272 0028
.org 0x7e274
	bge.n 0x7e278	@ 0007e274 00da
.org 0x7e276
	adds r0, #255	@ 0007e276 ff30
.org 0x7e278
	asrs r1, r0, #8	@ 0007e278 0112
.org 0x7e27a
	ldr r0, [r4, #92]	@ 0007e27a e06d
.org 0x7e27c
	adds r0, r0, r1	@ 0007e27c 4018
.org 0x7e27e
	str r0, [r4, #84]	@ 0007e27e 6065
.org 0x7e280
	adds r0, r2, #0	@ 0007e280 101c
.org 0x7e282
	cmp r0, #0	@ 0007e282 0028
.org 0x7e284
	bge.n 0x7e288	@ 0007e284 00da
.org 0x7e286
	adds r0, #15	@ 0007e286 0f30
.org 0x7e288
	asrs r2, r0, #4	@ 0007e288 0211
.org 0x7e28a
	ldr r3, [pc, #40]	@ 0007e28a 0a4b
.org 0x7e28c
	movs r0, #31	@ 0007e28c 1f20
.org 0x7e28e
	adds r1, r2, #0	@ 0007e28e 111c
.org 0x7e290
	ands r1, r0	@ 0007e290 0140
.org 0x7e292
	movs r0, #16	@ 0007e292 1020
.org 0x7e294
	subs r0, r0, r2	@ 0007e294 801a
.org 0x7e296
	lsls r0, r0, #8	@ 0007e296 0002
.org 0x7e298
	orrs r1, r0	@ 0007e298 0143
.org 0x7e29a
	strh r1, [r3, #2]	@ 0007e29a 5980
.org 0x7e29c
	lsls r0, r5, #24	@ 0007e29c 2806
.org 0x7e29e
	cmp r0, #0	@ 0007e29e 0028
.org 0x7e2a0
	bne.n 0x7e2ac	@ 0007e2a0 04d1
.org 0x7e2a2
	ldrb r0, [r4, #14]	@ 0007e2a2 a07b
.org 0x7e2a4
	adds r0, #1	@ 0007e2a4 0130
.org 0x7e2a6
	strb r0, [r4, #14]	@ 0007e2a6 a073
.org 0x7e2a8
	movs r0, #0	@ 0007e2a8 0020
.org 0x7e2aa
	strb r0, [r4, #15]	@ 0007e2aa e073
.org 0x7e2ac
	pop {r4, r5}	@ 0007e2ac 30bc
.org 0x7e2ae
	pop {r0}	@ 0007e2ae 01bc
.org 0x7e2b0
	bx r0	@ 0007e2b0 0047
