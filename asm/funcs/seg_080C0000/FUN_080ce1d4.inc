@ FUN_080ce1d4  entry 0x080ce1d4  size 88
.thumb
.org 0xce1d4
FUN_080ce1d4:
	push {r4, r5, r6, r7, lr}	@ 000ce1d4 f0b5
.org 0xce1d6
	adds r6, r0, #0	@ 000ce1d6 061c
.org 0xce1d8
	adds r7, r1, #0	@ 000ce1d8 0f1c
.org 0xce1da
	lsls r2, r2, #24	@ 000ce1da 1206
.org 0xce1dc
	lsrs r4, r2, #24	@ 000ce1dc 140e
.org 0xce1de
	lsls r3, r3, #24	@ 000ce1de 1b06
.org 0xce1e0
	lsrs r5, r3, #24	@ 000ce1e0 1d0e
.org 0xce1e2
	ldr r0, [pc, #72]	@ 000ce1e2 1248
.org 0xce1e4
	ldr r0, [r0, #0]	@ 000ce1e4 0068
.org 0xce1e6
	bl 0x5500	@ 000ce1e6 37f78bf9
.org 0xce1ea
	adds r3, r0, #0	@ 000ce1ea 031c
.org 0xce1ec
	cmp r3, #0	@ 000ce1ec 002b
.org 0xce1ee
	beq.n 0xce224	@ 000ce1ee 19d0
.org 0xce1f0
	adds r1, r3, #0	@ 000ce1f0 191c
.org 0xce1f2
	adds r1, #37	@ 000ce1f2 2531
.org 0xce1f4
	movs r2, #0	@ 000ce1f4 0022
.org 0xce1f6
	movs r0, #8	@ 000ce1f6 0820
.org 0xce1f8
	strb r0, [r1, #0]	@ 000ce1f8 0870
.org 0xce1fa
	ldr r0, [pc, #52]	@ 000ce1fa 0d48
.org 0xce1fc
	movs r1, #53	@ 000ce1fc 3521
.org 0xce1fe
	strb r1, [r3, #9]	@ 000ce1fe 5972
.org 0xce200
	adds r0, #212	@ 000ce200 d430
.org 0xce202
	ldr r0, [r0, #0]	@ 000ce202 0068
.org 0xce204
	ldr r0, [r0, #0]	@ 000ce204 0068
.org 0xce206
	str r0, [r3, #20]	@ 000ce206 5861
.org 0xce208
	movs r0, #0	@ 000ce208 0020
.org 0xce20a
	strh r2, [r3, #32]	@ 000ce20a 1a84
.org 0xce20c
	adds r1, r3, #0	@ 000ce20c 191c
.org 0xce20e
	adds r1, #34	@ 000ce20e 2231
.org 0xce210
	strb r0, [r1, #0]	@ 000ce210 0870
.org 0xce212
	str r6, [r3, #40]	@ 000ce212 9e62
.org 0xce214
	ldr r0, [r7, #0]	@ 000ce214 3868
.org 0xce216
	ldr r1, [r7, #4]	@ 000ce216 7968
.org 0xce218
	str r0, [r3, #84]	@ 000ce218 5865
.org 0xce21a
	str r1, [r3, #88]	@ 000ce21a 9965
.org 0xce21c
	strb r4, [r3, #16]	@ 000ce21c 1c74
.org 0xce21e
	adds r0, r3, #0	@ 000ce21e 181c
.org 0xce220
	adds r0, #180	@ 000ce220 b430
.org 0xce222
	strb r5, [r0, #0]	@ 000ce222 0570
.org 0xce224
	adds r0, r3, #0	@ 000ce224 181c
.org 0xce226
	pop {r4, r5, r6, r7}	@ 000ce226 f0bc
.org 0xce228
	pop {r1}	@ 000ce228 02bc
.org 0xce22a
	bx r1	@ 000ce22a 0847
