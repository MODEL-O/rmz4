@ FUN_080cf20c  entry 0x080cf20c  size 78
.thumb
.org 0xcf20c
FUN_080cf20c:
	push {r4, r5, r6, lr}	@ 000cf20c 70b5
.org 0xcf20e
	adds r6, r0, #0	@ 000cf20e 061c
.org 0xcf210
	lsls r1, r1, #24	@ 000cf210 0906
.org 0xcf212
	lsrs r5, r1, #24	@ 000cf212 0d0e
.org 0xcf214
	lsls r2, r2, #24	@ 000cf214 1206
.org 0xcf216
	lsrs r4, r2, #24	@ 000cf216 140e
.org 0xcf218
	ldr r0, [pc, #64]	@ 000cf218 1048
.org 0xcf21a
	ldr r0, [r0, #0]	@ 000cf21a 0068
.org 0xcf21c
	bl 0x5500	@ 000cf21c 36f770f9
.org 0xcf220
	adds r3, r0, #0	@ 000cf220 031c
.org 0xcf222
	cmp r3, #0	@ 000cf222 002b
.org 0xcf224
	beq.n 0xcf254	@ 000cf224 16d0
.org 0xcf226
	adds r1, r3, #0	@ 000cf226 191c
.org 0xcf228
	adds r1, #37	@ 000cf228 2531
.org 0xcf22a
	movs r2, #0	@ 000cf22a 0022
.org 0xcf22c
	movs r0, #8	@ 000cf22c 0820
.org 0xcf22e
	strb r0, [r1, #0]	@ 000cf22e 0870
.org 0xcf230
	ldr r0, [pc, #44]	@ 000cf230 0b48
.org 0xcf232
	movs r1, #57	@ 000cf232 3921
.org 0xcf234
	strb r1, [r3, #9]	@ 000cf234 5972
.org 0xcf236
	adds r0, #228	@ 000cf236 e430
.org 0xcf238
	ldr r0, [r0, #0]	@ 000cf238 0068
.org 0xcf23a
	ldr r0, [r0, #0]	@ 000cf23a 0068
.org 0xcf23c
	str r0, [r3, #20]	@ 000cf23c 5861
.org 0xcf23e
	movs r0, #0	@ 000cf23e 0020
.org 0xcf240
	strh r2, [r3, #32]	@ 000cf240 1a84
.org 0xcf242
	adds r1, r3, #0	@ 000cf242 191c
.org 0xcf244
	adds r1, #34	@ 000cf244 2231
.org 0xcf246
	strb r0, [r1, #0]	@ 000cf246 0870
.org 0xcf248
	ldr r0, [r6, #0]	@ 000cf248 3068
.org 0xcf24a
	ldr r1, [r6, #4]	@ 000cf24a 7168
.org 0xcf24c
	str r0, [r3, #84]	@ 000cf24c 5865
.org 0xcf24e
	str r1, [r3, #88]	@ 000cf24e 9965
.org 0xcf250
	strb r5, [r3, #16]	@ 000cf250 1d74
.org 0xcf252
	strb r4, [r3, #17]	@ 000cf252 5c74
.org 0xcf254
	pop {r4, r5, r6}	@ 000cf254 70bc
.org 0xcf256
	pop {r0}	@ 000cf256 01bc
.org 0xcf258
	bx r0	@ 000cf258 0047
