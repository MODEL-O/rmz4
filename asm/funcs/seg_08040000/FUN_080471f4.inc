@ FUN_080471f4  entry 0x080471f4  size 182
.thumb
.org 0x471f4
FUN_080471f4:
	push {r4, r5, r6, lr}	@ 000471f4 70b5
.org 0x471f6
	mov r6, r8	@ 000471f6 4646
.org 0x471f8
	push {r6}	@ 000471f8 40b4
.org 0x471fa
	adds r4, r0, #0	@ 000471fa 041c
.org 0x471fc
	ldr r1, [pc, #172]	@ 000471fc 2b49
.org 0x471fe
	ldrb r0, [r4, #9]	@ 000471fe 607a
.org 0x47200
	lsls r0, r0, #2	@ 00047200 8000
.org 0x47202
	adds r0, r0, r1	@ 00047202 4018
.org 0x47204
	movs r1, #1	@ 00047204 0121
.org 0x47206
	str r1, [r4, #12]	@ 00047206 e160
.org 0x47208
	ldr r0, [r0, #0]	@ 00047208 0068
.org 0x4720a
	ldr r0, [r0, #4]	@ 0004720a 4068
.org 0x4720c
	str r0, [r4, #20]	@ 0004720c 6061
.org 0x4720e
	adds r0, r4, #0	@ 0004720e 201c
.org 0x47210
	bl 0x1cc9c	@ 00047210 d5f744fd
.org 0x47214
	adds r0, r4, #0	@ 00047214 201c
.org 0x47216
	bl 0x1ceec	@ 00047216 d5f769fe
.org 0x4721a
	ldrb r1, [r4, #10]	@ 0004721a a17a
.org 0x4721c
	movs r0, #1	@ 0004721c 0120
.org 0x4721e
	movs r6, #0	@ 0004721e 0026
.org 0x47220
	orrs r0, r1	@ 00047220 0843
.org 0x47222
	movs r1, #2	@ 00047222 0221
.org 0x47224
	orrs r0, r1	@ 00047224 0843
.org 0x47226
	strb r0, [r4, #10]	@ 00047226 a072
.org 0x47228
	ldrb r1, [r4, #11]	@ 00047228 e17a
.org 0x4722a
	movs r0, #251	@ 0004722a fb20
.org 0x4722c
	ands r0, r1	@ 0004722c 0840
.org 0x4722e
	strb r0, [r4, #11]	@ 0004722e e072
.org 0x47230
	movs r0, #0	@ 00047230 0020
.org 0x47232
	mov r8, r0	@ 00047232 8046
.org 0x47234
	strh r6, [r4, #32]	@ 00047234 2684
.org 0x47236
	adds r0, r4, #0	@ 00047236 201c
.org 0x47238
	adds r0, #34	@ 00047238 2230
.org 0x4723a
	mov r1, r8	@ 0004723a 4146
.org 0x4723c
	strb r1, [r0, #0]	@ 0004723c 0170
.org 0x4723e
	adds r0, r4, #0	@ 0004723e 201c
.org 0x47240
	movs r1, #1	@ 00047240 0121
.org 0x47242
	bl 0x1cf00	@ 00047242 d5f75dfe
.org 0x47246
	ldrb r1, [r4, #10]	@ 00047246 a17a
.org 0x47248
	movs r0, #4	@ 00047248 0420
.org 0x4724a
	orrs r0, r1	@ 0004724a 0843
.org 0x4724c
	strb r0, [r4, #10]	@ 0004724c a072
.org 0x4724e
	adds r5, r4, #0	@ 0004724e 251c
.org 0x47250
	adds r5, #116	@ 00047250 7435
.org 0x47252
	ldr r1, [pc, #92]	@ 00047252 1749
.org 0x47254
	adds r2, r4, #0	@ 00047254 221c
.org 0x47256
	adds r2, #84	@ 00047256 5432
.org 0x47258
	adds r0, r5, #0	@ 00047258 281c
.org 0x4725a
	movs r3, #8	@ 0004725a 0823
.org 0x4725c
	bl 0x5760	@ 0004725c bef780fa
.org 0x47260
	str r4, [r5, #44]	@ 00047260 ec62
.org 0x47262
	str r6, [r5, #36]	@ 00047262 6e62
.org 0x47264
	ldr r2, [pc, #76]	@ 00047264 134a
.org 0x47266
	ldrb r0, [r4, #17]	@ 00047266 607c
.org 0x47268
	adds r0, #64	@ 00047268 4030
.org 0x4726a
	lsls r0, r0, #24	@ 0004726a 0006
.org 0x4726c
	lsrs r0, r0, #23	@ 0004726c c00d
.org 0x4726e
	adds r0, r0, r2	@ 0004726e 8018
.org 0x47270
	movs r1, #0	@ 00047270 0021
.org 0x47272
	ldrsh r0, [r0, r1]	@ 00047272 405e
.org 0x47274
	lsrs r1, r0, #31	@ 00047274 c10f
.org 0x47276
	adds r0, r0, r1	@ 00047276 4018
.org 0x47278
	asrs r0, r0, #1	@ 00047278 4010
.org 0x4727a
	str r0, [r4, #92]	@ 0004727a e065
.org 0x4727c
	ldrb r0, [r4, #17]	@ 0004727c 607c
.org 0x4727e
	lsls r0, r0, #1	@ 0004727e 4000
.org 0x47280
	adds r0, r0, r2	@ 00047280 8018
.org 0x47282
	movs r1, #0	@ 00047282 0021
.org 0x47284
	ldrsh r0, [r0, r1]	@ 00047284 405e
.org 0x47286
	lsrs r1, r0, #31	@ 00047286 c10f
.org 0x47288
	adds r0, r0, r1	@ 00047288 4018
.org 0x4728a
	asrs r0, r0, #1	@ 0004728a 4010
.org 0x4728c
	str r0, [r4, #96]	@ 0004728c 2066
.org 0x4728e
	movs r0, #24	@ 0004728e 1820
.org 0x47290
	strb r0, [r4, #18]	@ 00047290 a074
.org 0x47292
	adds r0, r4, #0	@ 00047292 201c
.org 0x47294
	adds r0, #189	@ 00047294 bd30
.org 0x47296
	mov r1, r8	@ 00047296 4146
.org 0x47298
	strb r1, [r0, #0]	@ 00047298 0170
.org 0x4729a
	adds r0, r4, #0	@ 0004729a 201c
.org 0x4729c
	bl 0x47108	@ 0004729c fff734ff
.org 0x472a0
	pop {r3}	@ 000472a0 08bc
.org 0x472a2
	mov r8, r3	@ 000472a2 9846
.org 0x472a4
	pop {r4, r5, r6}	@ 000472a4 70bc
.org 0x472a6
	pop {r0}	@ 000472a6 01bc
.org 0x472a8
	bx r0	@ 000472a8 0047
