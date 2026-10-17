@ FUN_08019254  entry 0x08019254  size 86
.thumb
.org 0x19254
FUN_08019254:
	push {r4, r5, r6, lr}	@ 00019254 70b5
.org 0x19256
	adds r5, r0, #0	@ 00019256 051c
.org 0x19258
	ldrb r6, [r5, #14]	@ 00019258 ae7b
.org 0x1925a
	cmp r6, #0	@ 0001925a 002e
.org 0x1925c
	bne.n 0x192a4	@ 0001925c 22d1
.org 0x1925e
	ldr r0, [r5, #92]	@ 0001925e e86d
.org 0x19260
	lsls r0, r0, #16	@ 00019260 0004
.org 0x19262
	lsrs r0, r0, #20	@ 00019262 000d
.org 0x19264
	lsls r3, r0, #1	@ 00019264 4300
.org 0x19266
	ldr r4, [pc, #68]	@ 00019266 114c
.org 0x19268
	adds r3, r3, r4	@ 00019268 1b19
.org 0x1926a
	ldr r1, [r5, #100]	@ 0001926a 696e
.org 0x1926c
	movs r2, #71	@ 0001926c 4722
.org 0x1926e
	orrs r1, r2	@ 0001926e 1143
.org 0x19270
	strh r1, [r3, #0]	@ 00019270 1980
.org 0x19272
	lsls r0, r0, #2	@ 00019272 8000
.org 0x19274
	adds r4, #8	@ 00019274 0834
.org 0x19276
	adds r0, r0, r4	@ 00019276 0019
.org 0x19278
	str r6, [r0, #0]	@ 00019278 0660
.org 0x1927a
	ldr r0, [pc, #52]	@ 0001927a 0d48
.org 0x1927c
	ldr r0, [r0, #0]	@ 0001927c 0068
.org 0x1927e
	ldr r2, [pc, #52]	@ 0001927e 0d4a
.org 0x19280
	adds r0, r0, r2	@ 00019280 8018
.org 0x19282
	movs r2, #248	@ 00019282 f822
.org 0x19284
	lsls r2, r2, #5	@ 00019284 5201
.org 0x19286
	ands r1, r2	@ 00019286 1140
.org 0x19288
	lsls r1, r1, #3	@ 00019288 c900
.org 0x1928a
	movs r2, #192	@ 0001928a c022
.org 0x1928c
	lsls r2, r2, #19	@ 0001928c d204
.org 0x1928e
	adds r1, r1, r2	@ 0001928e 8918
.org 0x19290
	movs r2, #128	@ 00019290 8022
.org 0x19292
	lsls r2, r2, #2	@ 00019292 9200
.org 0x19294
	bl 0x128be0	@ 00019294 0ff1a4fc
.org 0x19298
	movs r0, #192	@ 00019298 c020
.org 0x1929a
	str r0, [r5, #68]	@ 0001929a 6864
.org 0x1929c
	str r0, [r5, #72]	@ 0001929c a864
.org 0x1929e
	ldrb r0, [r5, #14]	@ 0001929e a87b
.org 0x192a0
	adds r0, #1	@ 000192a0 0130
.org 0x192a2
	strb r0, [r5, #14]	@ 000192a2 a873
.org 0x192a4
	pop {r4, r5, r6}	@ 000192a4 70bc
.org 0x192a6
	pop {r0}	@ 000192a6 01bc
.org 0x192a8
	bx r0	@ 000192a8 0047
