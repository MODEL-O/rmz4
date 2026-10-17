@ FUN_0809e1f0  entry 0x0809e1f0  size 92
.thumb
.org 0x9e1f0
FUN_0809e1f0:
	push {r4, r5, r6, lr}	@ 0009e1f0 70b5
.org 0x9e1f2
	adds r6, r0, #0	@ 0009e1f2 061c
.org 0x9e1f4
	adds r4, r1, #0	@ 0009e1f4 0c1c
.org 0x9e1f6
	adds r5, r2, #0	@ 0009e1f6 151c
.org 0x9e1f8
	ldr r0, [pc, #80]	@ 0009e1f8 1448
.org 0x9e1fa
	ldr r0, [r0, #0]	@ 0009e1fa 0068
.org 0x9e1fc
	bl 0x5500	@ 0009e1fc 67f780f9
.org 0x9e200
	adds r3, r0, #0	@ 0009e200 031c
.org 0x9e202
	cmp r3, #0	@ 0009e202 002b
.org 0x9e204
	beq.n 0x9e244	@ 0009e204 1ed0
.org 0x9e206
	adds r1, r3, #0	@ 0009e206 191c
.org 0x9e208
	adds r1, #37	@ 0009e208 2531
.org 0x9e20a
	movs r2, #0	@ 0009e20a 0022
.org 0x9e20c
	movs r0, #24	@ 0009e20c 1820
.org 0x9e20e
	strb r0, [r1, #0]	@ 0009e20e 0870
.org 0x9e210
	ldr r0, [pc, #60]	@ 0009e210 0f48
.org 0x9e212
	movs r1, #44	@ 0009e212 2c21
.org 0x9e214
	strb r1, [r3, #9]	@ 0009e214 5972
.org 0x9e216
	adds r0, #176	@ 0009e216 b030
.org 0x9e218
	ldr r0, [r0, #0]	@ 0009e218 0068
.org 0x9e21a
	ldr r0, [r0, #0]	@ 0009e21a 0068
.org 0x9e21c
	str r0, [r3, #20]	@ 0009e21c 5861
.org 0x9e21e
	movs r0, #0	@ 0009e21e 0020
.org 0x9e220
	strh r2, [r3, #32]	@ 0009e220 1a84
.org 0x9e222
	adds r1, r3, #0	@ 0009e222 191c
.org 0x9e224
	adds r1, #34	@ 0009e224 2231
.org 0x9e226
	strb r0, [r1, #0]	@ 0009e226 0870
.org 0x9e228
	ldrb r1, [r3, #11]	@ 0009e228 d97a
.org 0x9e22a
	movs r0, #16	@ 0009e22a 1020
.org 0x9e22c
	orrs r0, r1	@ 0009e22c 0843
.org 0x9e22e
	strb r0, [r3, #11]	@ 0009e22e d872
.org 0x9e230
	ldrb r0, [r3, #28]	@ 0009e230 187f
.org 0x9e232
	strb r0, [r3, #29]	@ 0009e232 5877
.org 0x9e234
	str r4, [r3, #40]	@ 0009e234 9c62
.org 0x9e236
	ldr r0, [r5, #0]	@ 0009e236 2868
.org 0x9e238
	ldr r1, [r5, #4]	@ 0009e238 6968
.org 0x9e23a
	str r0, [r3, #84]	@ 0009e23a 5865
.org 0x9e23c
	str r1, [r3, #88]	@ 0009e23c 9965
.org 0x9e23e
	adds r0, r3, #0	@ 0009e23e 181c
.org 0x9e240
	adds r0, #180	@ 0009e240 b430
.org 0x9e242
	str r6, [r0, #0]	@ 0009e242 0660
.org 0x9e244
	adds r0, r3, #0	@ 0009e244 181c
.org 0x9e246
	pop {r4, r5, r6}	@ 0009e246 70bc
.org 0x9e248
	pop {r1}	@ 0009e248 02bc
.org 0x9e24a
	bx r1	@ 0009e24a 0847
