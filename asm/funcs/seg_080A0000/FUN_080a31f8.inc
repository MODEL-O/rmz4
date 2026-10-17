@ FUN_080a31f8  entry 0x080a31f8  size 94
.thumb
.org 0xa31f8
FUN_080a31f8:
	push {r4, r5, r6, lr}	@ 000a31f8 70b5
.org 0xa31fa
	adds r4, r0, #0	@ 000a31fa 041c
.org 0xa31fc
	lsls r1, r1, #24	@ 000a31fc 0906
.org 0xa31fe
	lsrs r6, r1, #24	@ 000a31fe 0e0e
.org 0xa3200
	lsls r2, r2, #24	@ 000a3200 1206
.org 0xa3202
	lsrs r5, r2, #24	@ 000a3202 150e
.org 0xa3204
	ldr r0, [pc, #80]	@ 000a3204 1448
.org 0xa3206
	ldr r0, [r0, #0]	@ 000a3206 0068
.org 0xa3208
	bl 0x5500	@ 000a3208 62f77af9
.org 0xa320c
	adds r3, r0, #0	@ 000a320c 031c
.org 0xa320e
	cmp r3, #0	@ 000a320e 002b
.org 0xa3210
	beq.n 0xa324e	@ 000a3210 1dd0
.org 0xa3212
	adds r1, r3, #0	@ 000a3212 191c
.org 0xa3214
	adds r1, #37	@ 000a3214 2531
.org 0xa3216
	movs r2, #0	@ 000a3216 0022
.org 0xa3218
	movs r0, #24	@ 000a3218 1820
.org 0xa321a
	strb r0, [r1, #0]	@ 000a321a 0870
.org 0xa321c
	ldr r0, [pc, #60]	@ 000a321c 0f48
.org 0xa321e
	movs r1, #57	@ 000a321e 3921
.org 0xa3220
	strb r1, [r3, #9]	@ 000a3220 5972
.org 0xa3222
	adds r0, #228	@ 000a3222 e430
.org 0xa3224
	ldr r0, [r0, #0]	@ 000a3224 0068
.org 0xa3226
	ldr r0, [r0, #0]	@ 000a3226 0068
.org 0xa3228
	str r0, [r3, #20]	@ 000a3228 5861
.org 0xa322a
	movs r0, #0	@ 000a322a 0020
.org 0xa322c
	strh r2, [r3, #32]	@ 000a322c 1a84
.org 0xa322e
	adds r1, r3, #0	@ 000a322e 191c
.org 0xa3230
	adds r1, #34	@ 000a3230 2231
.org 0xa3232
	strb r0, [r1, #0]	@ 000a3232 0870
.org 0xa3234
	ldrb r1, [r3, #11]	@ 000a3234 d97a
.org 0xa3236
	movs r0, #16	@ 000a3236 1020
.org 0xa3238
	orrs r0, r1	@ 000a3238 0843
.org 0xa323a
	strb r0, [r3, #11]	@ 000a323a d872
.org 0xa323c
	ldrb r0, [r3, #28]	@ 000a323c 187f
.org 0xa323e
	strb r0, [r3, #29]	@ 000a323e 5877
.org 0xa3240
	str r4, [r3, #40]	@ 000a3240 9c62
.org 0xa3242
	ldr r0, [r4, #84]	@ 000a3242 606d
.org 0xa3244
	ldr r1, [r4, #88]	@ 000a3244 a16d
.org 0xa3246
	str r0, [r3, #84]	@ 000a3246 5865
.org 0xa3248
	str r1, [r3, #88]	@ 000a3248 9965
.org 0xa324a
	strb r6, [r3, #16]	@ 000a324a 1e74
.org 0xa324c
	strb r5, [r3, #17]	@ 000a324c 5d74
.org 0xa324e
	adds r0, r3, #0	@ 000a324e 181c
.org 0xa3250
	pop {r4, r5, r6}	@ 000a3250 70bc
.org 0xa3252
	pop {r1}	@ 000a3252 02bc
.org 0xa3254
	bx r1	@ 000a3254 0847
