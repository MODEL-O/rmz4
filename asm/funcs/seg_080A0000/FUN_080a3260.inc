@ FUN_080a3260  entry 0x080a3260  size 98
.thumb
.org 0xa3260
FUN_080a3260:
	push {r4, r5, r6, r7, lr}	@ 000a3260 f0b5
.org 0xa3262
	adds r4, r0, #0	@ 000a3262 041c
.org 0xa3264
	adds r7, r1, #0	@ 000a3264 0f1c
.org 0xa3266
	lsls r2, r2, #24	@ 000a3266 1206
.org 0xa3268
	lsrs r6, r2, #24	@ 000a3268 160e
.org 0xa326a
	lsls r3, r3, #24	@ 000a326a 1b06
.org 0xa326c
	lsrs r5, r3, #24	@ 000a326c 1d0e
.org 0xa326e
	ldr r0, [pc, #84]	@ 000a326e 1548
.org 0xa3270
	ldr r0, [r0, #0]	@ 000a3270 0068
.org 0xa3272
	bl 0x5500	@ 000a3272 62f745f9
.org 0xa3276
	adds r3, r0, #0	@ 000a3276 031c
.org 0xa3278
	cmp r3, #0	@ 000a3278 002b
.org 0xa327a
	beq.n 0xa32ba	@ 000a327a 1ed0
.org 0xa327c
	adds r1, r3, #0	@ 000a327c 191c
.org 0xa327e
	adds r1, #37	@ 000a327e 2531
.org 0xa3280
	movs r2, #0	@ 000a3280 0022
.org 0xa3282
	movs r0, #24	@ 000a3282 1820
.org 0xa3284
	strb r0, [r1, #0]	@ 000a3284 0870
.org 0xa3286
	ldr r0, [pc, #64]	@ 000a3286 1048
.org 0xa3288
	movs r1, #57	@ 000a3288 3921
.org 0xa328a
	strb r1, [r3, #9]	@ 000a328a 5972
.org 0xa328c
	adds r0, #228	@ 000a328c e430
.org 0xa328e
	ldr r0, [r0, #0]	@ 000a328e 0068
.org 0xa3290
	ldr r0, [r0, #0]	@ 000a3290 0068
.org 0xa3292
	str r0, [r3, #20]	@ 000a3292 5861
.org 0xa3294
	movs r0, #0	@ 000a3294 0020
.org 0xa3296
	strh r2, [r3, #32]	@ 000a3296 1a84
.org 0xa3298
	adds r1, r3, #0	@ 000a3298 191c
.org 0xa329a
	adds r1, #34	@ 000a329a 2231
.org 0xa329c
	strb r0, [r1, #0]	@ 000a329c 0870
.org 0xa329e
	ldrb r1, [r3, #11]	@ 000a329e d97a
.org 0xa32a0
	movs r0, #16	@ 000a32a0 1020
.org 0xa32a2
	orrs r0, r1	@ 000a32a2 0843
.org 0xa32a4
	strb r0, [r3, #11]	@ 000a32a4 d872
.org 0xa32a6
	ldrb r0, [r3, #28]	@ 000a32a6 187f
.org 0xa32a8
	strb r0, [r3, #29]	@ 000a32a8 5877
.org 0xa32aa
	str r4, [r3, #40]	@ 000a32aa 9c62
.org 0xa32ac
	str r7, [r3, #44]	@ 000a32ac df62
.org 0xa32ae
	ldr r0, [r4, #84]	@ 000a32ae 606d
.org 0xa32b0
	ldr r1, [r4, #88]	@ 000a32b0 a16d
.org 0xa32b2
	str r0, [r3, #84]	@ 000a32b2 5865
.org 0xa32b4
	str r1, [r3, #88]	@ 000a32b4 9965
.org 0xa32b6
	strb r6, [r3, #16]	@ 000a32b6 1e74
.org 0xa32b8
	strb r5, [r3, #17]	@ 000a32b8 5d74
.org 0xa32ba
	adds r0, r3, #0	@ 000a32ba 181c
.org 0xa32bc
	pop {r4, r5, r6, r7}	@ 000a32bc f0bc
.org 0xa32be
	pop {r1}	@ 000a32be 02bc
.org 0xa32c0
	bx r1	@ 000a32c0 0847
