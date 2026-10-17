@ FUN_080011fc  entry 0x080011fc  size 130
.thumb
.org 0x11fc
FUN_080011fc:
	push {r4, r5, r6, r7, lr}	@ 000011fc f0b5
.org 0x11fe
	ldr r6, [pc, #128]	@ 000011fe 204e
.org 0x1200
	ldr r0, [pc, #128]	@ 00001200 2048
.org 0x1202
	adds r5, r6, r0	@ 00001202 3518
.org 0x1204
	ldr r1, [pc, #128]	@ 00001204 2049
.org 0x1206
	adds r7, r6, r1	@ 00001206 7718
.org 0x1208
	movs r0, #0	@ 00001208 0020
.org 0x120a
	str r0, [r5, #0]	@ 0000120a 2860
.org 0x120c
	ldr r2, [pc, #124]	@ 0000120c 1f4a
.org 0x120e
	adds r4, r6, r2	@ 0000120e b418
.org 0x1210
	ldrb r1, [r4, #0]	@ 00001210 2178
.org 0x1212
	movs r0, #9	@ 00001212 0920
.org 0x1214
	ands r0, r1	@ 00001214 0840
.org 0x1216
	cmp r0, #0	@ 00001216 0028
.org 0x1218
	bne.n 0x125a	@ 00001218 1fd1
.org 0x121a
	movs r0, #4	@ 0000121a 0420
.org 0x121c
	ands r0, r1	@ 0000121c 0840
.org 0x121e
	cmp r0, #0	@ 0000121e 0028
.org 0x1220
	beq.n 0x123a	@ 00001220 0bd0
.org 0x1222
	ldrh r1, [r4, #2]	@ 00001222 6188
.org 0x1224
	movs r2, #2	@ 00001224 0222
.org 0x1226
	ldrsh r0, [r4, r2]	@ 00001226 a05e
.org 0x1228
	cmp r0, #0	@ 00001228 0028
.org 0x122a
	beq.n 0x1236	@ 0000122a 04d0
.org 0x122c
	subs r0, r1, #1	@ 0000122c 481e
.org 0x122e
	strh r0, [r4, #2]	@ 0000122e 6080
.org 0x1230
	lsls r0, r0, #16	@ 00001230 0004
.org 0x1232
	cmp r0, #0	@ 00001232 0028
.org 0x1234
	bne.n 0x123a	@ 00001234 01d1
.org 0x1236
	movs r0, #2	@ 00001236 0220
.org 0x1238
	strb r0, [r4, #0]	@ 00001238 2070
.org 0x123a
	ldrb r0, [r4, #0]	@ 0000123a 2078
.org 0x123c
	cmp r0, #2	@ 0000123c 0228
.org 0x123e
	bne.n 0x125a	@ 0000123e 0cd1
.org 0x1240
	ldrb r0, [r4, #1]	@ 00001240 6078
.org 0x1242
	cmp r0, #0	@ 00001242 0028
.org 0x1244
	beq.n 0x124e	@ 00001244 03d0
.org 0x1246
	ldr r0, [r5, #0]	@ 00001246 2868
.org 0x1248
	ldr r1, [r4, #4]	@ 00001248 6168
.org 0x124a
	bl 0x12b8	@ 0000124a 00f035f8
.org 0x124e
	ldr r1, [r4, #4]	@ 0000124e 6168
.org 0x1250
	ldr r2, [r4, #8]	@ 00001250 a268
.org 0x1252
	adds r0, r4, #0	@ 00001252 201c
.org 0x1254
	ldr r3, [pc, #56]	@ 00001254 0e4b
.org 0x1256
	bl 0x2dc	@ 00001256 fff741f8
.org 0x125a
	ldr r0, [r5, #0]	@ 0000125a 2868
.org 0x125c
	adds r0, #1	@ 0000125c 0130
.org 0x125e
	str r0, [r5, #0]	@ 0000125e 2860
.org 0x1260
	adds r4, #24	@ 00001260 1834
.org 0x1262
	cmp r0, #2	@ 00001262 0228
.org 0x1264
	bls.n 0x1210	@ 00001264 d4d9
.org 0x1266
	movs r1, #152	@ 00001266 9821
.org 0x1268
	lsls r1, r1, #5	@ 00001268 4901
.org 0x126a
	adds r0, r6, r1	@ 0000126a 7018
.org 0x126c
	ldr r1, [r0, #0]	@ 0000126c 0168
.org 0x126e
	adds r1, #1	@ 0000126e 0131
.org 0x1270
	str r1, [r0, #0]	@ 00001270 0160
.org 0x1272
	ldr r0, [r7, #0]	@ 00001272 3868
.org 0x1274
	cmp r0, #0	@ 00001274 0028
.org 0x1276
	bne.n 0x1208	@ 00001276 c7d1
.org 0x1278
	pop {r4, r5, r6, r7}	@ 00001278 f0bc
.org 0x127a
	pop {r0}	@ 0000127a 01bc
.org 0x127c
	bx r0	@ 0000127c 0047
