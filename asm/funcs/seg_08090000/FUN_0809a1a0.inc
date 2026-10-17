@ FUN_0809a1a0  entry 0x0809a1a0  size 184
.thumb
.org 0x9a1a0
FUN_0809a1a0:
	push {r4, r5, r6, lr}	@ 0009a1a0 70b5
.org 0x9a1a2
	adds r4, r0, #0	@ 0009a1a2 041c
.org 0x9a1a4
	bl 0x1cc9c	@ 0009a1a4 82f77afd
.org 0x9a1a8
	ldrb r1, [r4, #10]	@ 0009a1a8 a17a
.org 0x9a1aa
	movs r0, #1	@ 0009a1aa 0120
.org 0x9a1ac
	movs r6, #0	@ 0009a1ac 0026
.org 0x9a1ae
	orrs r0, r1	@ 0009a1ae 0843
.org 0x9a1b0
	movs r1, #2	@ 0009a1b0 0221
.org 0x9a1b2
	orrs r0, r1	@ 0009a1b2 0843
.org 0x9a1b4
	strb r0, [r4, #10]	@ 0009a1b4 a072
.org 0x9a1b6
	ldrb r0, [r4, #17]	@ 0009a1b6 607c
.org 0x9a1b8
	movs r1, #3	@ 0009a1b8 0321
.org 0x9a1ba
	bl 0x129198	@ 0009a1ba 8ef0edff
.org 0x9a1be
	adds r1, r0, #0	@ 0009a1be 011c
.org 0x9a1c0
	lsls r1, r1, #24	@ 0009a1c0 0906
.org 0x9a1c2
	lsrs r1, r1, #8	@ 0009a1c2 090a
.org 0x9a1c4
	ldr r0, [pc, #144]	@ 0009a1c4 2448
.org 0x9a1c6
	adds r1, r1, r0	@ 0009a1c6 0918
.org 0x9a1c8
	lsrs r1, r1, #16	@ 0009a1c8 090c
.org 0x9a1ca
	adds r0, r4, #0	@ 0009a1ca 201c
.org 0x9a1cc
	bl 0x1cf00	@ 0009a1cc 82f798fe
.org 0x9a1d0
	adds r0, r4, #0	@ 0009a1d0 201c
.org 0x9a1d2
	bl 0x1cff0	@ 0009a1d2 82f70dff
.org 0x9a1d6
	ldrb r1, [r4, #10]	@ 0009a1d6 a17a
.org 0x9a1d8
	movs r0, #4	@ 0009a1d8 0420
.org 0x9a1da
	orrs r0, r1	@ 0009a1da 0843
.org 0x9a1dc
	strb r0, [r4, #10]	@ 0009a1dc a072
.org 0x9a1de
	adds r5, r4, #0	@ 0009a1de 251c
.org 0x9a1e0
	adds r5, #116	@ 0009a1e0 7435
.org 0x9a1e2
	ldr r1, [pc, #120]	@ 0009a1e2 1e49
.org 0x9a1e4
	adds r2, r4, #0	@ 0009a1e4 221c
.org 0x9a1e6
	adds r2, #84	@ 0009a1e6 5432
.org 0x9a1e8
	adds r0, r5, #0	@ 0009a1e8 281c
.org 0x9a1ea
	movs r3, #4	@ 0009a1ea 0423
.org 0x9a1ec
	bl 0x5760	@ 0009a1ec 6bf7b8fa
.org 0x9a1f0
	str r4, [r5, #44]	@ 0009a1f0 ec62
.org 0x9a1f2
	str r6, [r5, #36]	@ 0009a1f2 6e62
.org 0x9a1f4
	ldr r1, [pc, #104]	@ 0009a1f4 1a49
.org 0x9a1f6
	ldrb r0, [r4, #17]	@ 0009a1f6 607c
.org 0x9a1f8
	adds r0, r0, r1	@ 0009a1f8 4018
.org 0x9a1fa
	movs r1, #0	@ 0009a1fa 0021
.org 0x9a1fc
	ldrsb r1, [r0, r1]	@ 0009a1fc 4156
.org 0x9a1fe
	ldr r0, [r4, #84]	@ 0009a1fe 606d
.org 0x9a200
	adds r0, r0, r1	@ 0009a200 4018
.org 0x9a202
	str r0, [r4, #84]	@ 0009a202 6065
.org 0x9a204
	ldr r1, [pc, #92]	@ 0009a204 1749
.org 0x9a206
	ldrb r0, [r4, #17]	@ 0009a206 607c
.org 0x9a208
	adds r0, r0, r1	@ 0009a208 4018
.org 0x9a20a
	movs r1, #0	@ 0009a20a 0021
.org 0x9a20c
	ldrsb r1, [r0, r1]	@ 0009a20c 4156
.org 0x9a20e
	ldr r0, [r4, #88]	@ 0009a20e a06d
.org 0x9a210
	adds r0, r0, r1	@ 0009a210 4018
.org 0x9a212
	str r0, [r4, #88]	@ 0009a212 a065
.org 0x9a214
	ldr r3, [pc, #80]	@ 0009a214 144b
.org 0x9a216
	ldr r2, [pc, #84]	@ 0009a216 154a
.org 0x9a218
	ldrb r0, [r4, #17]	@ 0009a218 607c
.org 0x9a21a
	adds r0, r0, r2	@ 0009a21a 8018
.org 0x9a21c
	ldrb r0, [r0, #0]	@ 0009a21c 0078
.org 0x9a21e
	adds r0, #64	@ 0009a21e 4030
.org 0x9a220
	lsls r0, r0, #24	@ 0009a220 0006
.org 0x9a222
	lsrs r0, r0, #23	@ 0009a222 c00d
.org 0x9a224
	adds r0, r0, r3	@ 0009a224 c018
.org 0x9a226
	movs r5, #0	@ 0009a226 0025
.org 0x9a228
	ldrsh r1, [r0, r5]	@ 0009a228 415f
.org 0x9a22a
	lsls r0, r1, #3	@ 0009a22a c800
.org 0x9a22c
	subs r0, r0, r1	@ 0009a22c 401a
.org 0x9a22e
	lsls r0, r0, #7	@ 0009a22e c001
.org 0x9a230
	negs r0, r0	@ 0009a230 4042
.org 0x9a232
	asrs r0, r0, #8	@ 0009a232 0012
.org 0x9a234
	str r0, [r4, #92]	@ 0009a234 e065
.org 0x9a236
	ldrb r0, [r4, #17]	@ 0009a236 607c
.org 0x9a238
	adds r0, r0, r2	@ 0009a238 8018
.org 0x9a23a
	ldrb r0, [r0, #0]	@ 0009a23a 0078
.org 0x9a23c
	lsls r0, r0, #1	@ 0009a23c 4000
.org 0x9a23e
	adds r0, r0, r3	@ 0009a23e c018
.org 0x9a240
	movs r2, #0	@ 0009a240 0022
.org 0x9a242
	ldrsh r1, [r0, r2]	@ 0009a242 815e
.org 0x9a244
	lsls r0, r1, #3	@ 0009a244 c800
.org 0x9a246
	subs r0, r0, r1	@ 0009a246 401a
.org 0x9a248
	lsls r0, r0, #7	@ 0009a248 c001
.org 0x9a24a
	negs r0, r0	@ 0009a24a 4042
.org 0x9a24c
	asrs r0, r0, #8	@ 0009a24c 0012
.org 0x9a24e
	str r0, [r4, #96]	@ 0009a24e 2066
.org 0x9a250
	strb r6, [r4, #18]	@ 0009a250 a674
.org 0x9a252
	pop {r4, r5, r6}	@ 0009a252 70bc
.org 0x9a254
	pop {r0}	@ 0009a254 01bc
.org 0x9a256
	bx r0	@ 0009a256 0047
