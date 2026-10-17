@ FUN_0806e1a0  entry 0x0806e1a0  size 236
.thumb
.org 0x6e1a0
FUN_0806e1a0:
	push {r4, r5, lr}	@ 0006e1a0 30b5
.org 0x6e1a2
	sub sp, #8	@ 0006e1a2 82b0
.org 0x6e1a4
	adds r4, r0, #0	@ 0006e1a4 041c
.org 0x6e1a6
	ldrb r0, [r4, #15]	@ 0006e1a6 e07b
.org 0x6e1a8
	cmp r0, #0	@ 0006e1a8 0028
.org 0x6e1aa
	bne.n 0x6e20e	@ 0006e1aa 30d1
.org 0x6e1ac
	adds r0, r4, #0	@ 0006e1ac 201c
.org 0x6e1ae
	adds r0, #116	@ 0006e1ae 7430
.org 0x6e1b0
	ldr r1, [pc, #216]	@ 0006e1b0 3649
.org 0x6e1b2
	bl 0x5784	@ 0006e1b2 97f7e7fa
.org 0x6e1b6
	ldr r0, [r4, #84]	@ 0006e1b6 606d
.org 0x6e1b8
	ldr r1, [r4, #88]	@ 0006e1b8 a16d
.org 0x6e1ba
	ldr r2, [pc, #212]	@ 0006e1ba 354a
.org 0x6e1bc
	ldr r3, [r2, #0]	@ 0006e1bc 1368
.org 0x6e1be
	ldr r2, [r3, #84]	@ 0006e1be 5a6d
.org 0x6e1c0
	ldr r3, [r3, #88]	@ 0006e1c0 9b6d
.org 0x6e1c2
	ldr r5, [pc, #208]	@ 0006e1c2 344d
.org 0x6e1c4
	adds r3, r3, r5	@ 0006e1c4 5b19
.org 0x6e1c6
	bl 0x10d398	@ 0006e1c6 9ff0e7f8
.org 0x6e1ca
	lsls r0, r0, #24	@ 0006e1ca 0006
.org 0x6e1cc
	lsrs r0, r0, #24	@ 0006e1cc 000e
.org 0x6e1ce
	adds r1, r0, #0	@ 0006e1ce 011c
.org 0x6e1d0
	adds r1, #8	@ 0006e1d0 0831
.org 0x6e1d2
	movs r0, #240	@ 0006e1d2 f020
.org 0x6e1d4
	ands r1, r0	@ 0006e1d4 0140
.org 0x6e1d6
	adds r0, r4, #0	@ 0006e1d6 201c
.org 0x6e1d8
	adds r0, #192	@ 0006e1d8 c030
.org 0x6e1da
	strb r1, [r0, #0]	@ 0006e1da 0170
.org 0x6e1dc
	ldr r2, [pc, #184]	@ 0006e1dc 2e4a
.org 0x6e1de
	ldr r1, [r2, #0]	@ 0006e1de 1168
.org 0x6e1e0
	ldr r0, [pc, #184]	@ 0006e1e0 2e48
.org 0x6e1e2
	muls r0, r1	@ 0006e1e2 4843
.org 0x6e1e4
	ldr r1, [pc, #184]	@ 0006e1e4 2e49
.org 0x6e1e6
	adds r0, r0, r1	@ 0006e1e6 4018
.org 0x6e1e8
	lsls r0, r0, #1	@ 0006e1e8 4000
.org 0x6e1ea
	lsrs r1, r0, #1	@ 0006e1ea 4108
.org 0x6e1ec
	str r1, [r2, #0]	@ 0006e1ec 1160
.org 0x6e1ee
	lsrs r0, r0, #17	@ 0006e1ee 400c
.org 0x6e1f0
	movs r1, #1	@ 0006e1f0 0121
.org 0x6e1f2
	ands r0, r1	@ 0006e1f2 0840
.org 0x6e1f4
	adds r1, r4, #0	@ 0006e1f4 211c
.org 0x6e1f6
	adds r1, #193	@ 0006e1f6 c131
.org 0x6e1f8
	strb r0, [r1, #0]	@ 0006e1f8 0870
.org 0x6e1fa
	movs r0, #143	@ 0006e1fa 8f20
.org 0x6e1fc
	lsls r0, r0, #1	@ 0006e1fc 4000
.org 0x6e1fe
	str r0, [r4, #100]	@ 0006e1fe 6066
.org 0x6e200
	ldrb r0, [r1, #0]	@ 0006e200 0878
.org 0x6e202
	lsls r0, r0, #1	@ 0006e202 4000
.org 0x6e204
	subs r0, #1	@ 0006e204 0138
.org 0x6e206
	str r0, [r4, #104]	@ 0006e206 a066
.org 0x6e208
	ldrb r0, [r4, #15]	@ 0006e208 e07b
.org 0x6e20a
	adds r0, #1	@ 0006e20a 0130
.org 0x6e20c
	strb r0, [r4, #15]	@ 0006e20c e073
.org 0x6e20e
	ldr r0, [r4, #100]	@ 0006e20e 606e
.org 0x6e210
	movs r1, #22	@ 0006e210 1621
.org 0x6e212
	bl 0x129050	@ 0006e212 baf01dff
.org 0x6e216
	cmp r0, #0	@ 0006e216 0028
.org 0x6e218
	bne.n 0x6e26e	@ 0006e218 29d1
.org 0x6e21a
	ldr r0, [pc, #136]	@ 0006e21a 2248
.org 0x6e21c
	bl 0x2b10	@ 0006e21c 94f778fc
.org 0x6e220
	ldr r1, [pc, #132]	@ 0006e220 2149
.org 0x6e222
	adds r0, r4, #0	@ 0006e222 201c
.org 0x6e224
	bl 0x1cf00	@ 0006e224 aef76cfe
.org 0x6e228
	ldr r0, [r4, #84]	@ 0006e228 606d
.org 0x6e22a
	str r0, [sp, #0]	@ 0006e22a 0090
.org 0x6e22c
	ldr r0, [r4, #88]	@ 0006e22c a06d
.org 0x6e22e
	str r0, [sp, #4]	@ 0006e22e 0190
.org 0x6e230
	ldr r1, [r4, #100]	@ 0006e230 616e
.org 0x6e232
	movs r0, #143	@ 0006e232 8f20
.org 0x6e234
	lsls r0, r0, #1	@ 0006e234 4000
.org 0x6e236
	subs r0, r0, r1	@ 0006e236 401a
.org 0x6e238
	movs r1, #22	@ 0006e238 1621
.org 0x6e23a
	bl 0x128fb8	@ 0006e23a baf0bdfe
.org 0x6e23e
	ldr r1, [r4, #104]	@ 0006e23e a16e
.org 0x6e240
	muls r0, r1	@ 0006e240 4843
.org 0x6e242
	adds r1, r4, #0	@ 0006e242 211c
.org 0x6e244
	adds r1, #192	@ 0006e244 c031
.org 0x6e246
	lsls r0, r0, #4	@ 0006e246 0001
.org 0x6e248
	adds r0, #128	@ 0006e248 8030
.org 0x6e24a
	ldrb r1, [r1, #0]	@ 0006e24a 0978
.org 0x6e24c
	adds r0, r0, r1	@ 0006e24c 4018
.org 0x6e24e
	lsls r0, r0, #24	@ 0006e24e 0006
.org 0x6e250
	lsrs r3, r0, #24	@ 0006e250 030e
.org 0x6e252
	adds r0, r4, #0	@ 0006e252 201c
.org 0x6e254
	mov r1, sp	@ 0006e254 6946
.org 0x6e256
	movs r2, #0	@ 0006e256 0022
.org 0x6e258
	bl 0xbd94c	@ 0006e258 4ff078fb
.org 0x6e25c
	ldr r0, [r4, #84]	@ 0006e25c 606d
.org 0x6e25e
	str r0, [sp, #0]	@ 0006e25e 0090
.org 0x6e260
	ldr r0, [r4, #88]	@ 0006e260 a06d
.org 0x6e262
	str r0, [sp, #4]	@ 0006e262 0190
.org 0x6e264
	mov r0, sp	@ 0006e264 6846
.org 0x6e266
	movs r1, #1	@ 0006e266 0121
.org 0x6e268
	movs r2, #0	@ 0006e268 0022
.org 0x6e26a
	bl 0xe2064	@ 0006e26a 73f0fbfe
.org 0x6e26e
	adds r0, r4, #0	@ 0006e26e 201c
.org 0x6e270
	bl 0x1cff0	@ 0006e270 aef7befe
.org 0x6e274
	ldr r0, [r4, #100]	@ 0006e274 606e
.org 0x6e276
	subs r1, r0, #1	@ 0006e276 411e
.org 0x6e278
	str r1, [r4, #100]	@ 0006e278 6166
.org 0x6e27a
	cmp r1, #0	@ 0006e27a 0029
.org 0x6e27c
	bne.n 0x6e284	@ 0006e27c 02d1
.org 0x6e27e
	movs r0, #2	@ 0006e27e 0220
.org 0x6e280
	strb r0, [r4, #14]	@ 0006e280 a073
.org 0x6e282
	strb r1, [r4, #15]	@ 0006e282 e173
.org 0x6e284
	add sp, #8	@ 0006e284 02b0
.org 0x6e286
	pop {r4, r5}	@ 0006e286 30bc
.org 0x6e288
	pop {r0}	@ 0006e288 01bc
.org 0x6e28a
	bx r0	@ 0006e28a 0047
