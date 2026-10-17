@ FUN_080d621c  entry 0x080d621c  size 120
.thumb
.org 0xd621c
FUN_080d621c:
	push {r4, r5, r6, r7, lr}	@ 000d621c f0b5
.org 0xd621e
	mov r7, r9	@ 000d621e 4f46
.org 0xd6220
	mov r6, r8	@ 000d6220 4646
.org 0xd6222
	push {r6, r7}	@ 000d6222 c0b4
.org 0xd6224
	sub sp, #4	@ 000d6224 81b0
.org 0xd6226
	adds r6, r0, #0	@ 000d6226 061c
.org 0xd6228
	adds r5, r1, #0	@ 000d6228 0d1c
.org 0xd622a
	lsls r2, r2, #24	@ 000d622a 1206
.org 0xd622c
	lsrs r2, r2, #24	@ 000d622c 120e
.org 0xd622e
	mov r8, r2	@ 000d622e 9046
.org 0xd6230
	movs r4, #0	@ 000d6230 0024
.org 0xd6232
	movs r2, #0	@ 000d6232 0022
.org 0xd6234
	movs r7, #1	@ 000d6234 0127
.org 0xd6236
	ldr r0, [pc, #92]	@ 000d6236 1748
.org 0xd6238
	mov r9, r0	@ 000d6238 8146
.org 0xd623a
	ldr r0, [pc, #92]	@ 000d623a 1748
.org 0xd623c
	ldr r0, [r0, #0]	@ 000d623c 0068
.org 0xd623e
	str r2, [sp, #0]	@ 000d623e 0092
.org 0xd6240
	bl 0x5500	@ 000d6240 2ff75ef9
.org 0xd6244
	adds r1, r0, #0	@ 000d6244 011c
.org 0xd6246
	ldr r2, [sp, #0]	@ 000d6246 009a
.org 0xd6248
	cmp r1, #0	@ 000d6248 0029
.org 0xd624a
	beq.n 0xd6280	@ 000d624a 19d0
.org 0xd624c
	adds r0, #37	@ 000d624c 2530
.org 0xd624e
	strb r7, [r0, #0]	@ 000d624e 0770
.org 0xd6250
	movs r0, #20	@ 000d6250 1420
.org 0xd6252
	strb r0, [r1, #9]	@ 000d6252 4872
.org 0xd6254
	mov r3, r9	@ 000d6254 4b46
.org 0xd6256
	ldr r0, [r3, #80]	@ 000d6256 186d
.org 0xd6258
	ldr r0, [r0, #0]	@ 000d6258 0068
.org 0xd625a
	str r0, [r1, #20]	@ 000d625a 4861
.org 0xd625c
	strh r2, [r1, #32]	@ 000d625c 0a84
.org 0xd625e
	adds r0, r1, #0	@ 000d625e 081c
.org 0xd6260
	adds r0, #34	@ 000d6260 2230
.org 0xd6262
	strb r2, [r0, #0]	@ 000d6262 0270
.org 0xd6264
	strb r7, [r1, #16]	@ 000d6264 0f74
.org 0xd6266
	strb r4, [r1, #17]	@ 000d6266 4c74
.org 0xd6268
	adds r0, #86	@ 000d6268 5630
.org 0xd626a
	mov r3, r8	@ 000d626a 4346
.org 0xd626c
	strb r3, [r0, #0]	@ 000d626c 0370
.org 0xd626e
	adds r0, r6, #0	@ 000d626e 301c
.org 0xd6270
	adds r0, #180	@ 000d6270 b430
.org 0xd6272
	ldr r0, [r0, #0]	@ 000d6272 0068
.org 0xd6274
	str r0, [r1, #116]	@ 000d6274 4867
.org 0xd6276
	str r6, [r1, #40]	@ 000d6276 8e62
.org 0xd6278
	ldr r0, [r5, #0]	@ 000d6278 2868
.org 0xd627a
	str r0, [r1, #84]	@ 000d627a 4865
.org 0xd627c
	ldr r0, [r5, #4]	@ 000d627c 6868
.org 0xd627e
	str r0, [r1, #88]	@ 000d627e 8865
.org 0xd6280
	adds r4, #1	@ 000d6280 0134
.org 0xd6282
	cmp r4, #2	@ 000d6282 022c
.org 0xd6284
	ble.n 0xd623a	@ 000d6284 d9dd
.org 0xd6286
	add sp, #4	@ 000d6286 01b0
.org 0xd6288
	pop {r3, r4}	@ 000d6288 18bc
.org 0xd628a
	mov r8, r3	@ 000d628a 9846
.org 0xd628c
	mov r9, r4	@ 000d628c a146
.org 0xd628e
	pop {r4, r5, r6, r7}	@ 000d628e f0bc
.org 0xd6290
	pop {r0}	@ 000d6290 01bc
.org 0xd6292
	bx r0	@ 000d6292 0047
