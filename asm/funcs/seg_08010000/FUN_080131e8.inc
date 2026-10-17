@ FUN_080131e8  entry 0x080131e8  size 186
.thumb
.org 0x131e8
FUN_080131e8:
	push {r4, r5, r6, lr}	@ 000131e8 70b5
.org 0x131ea
	adds r5, r0, #0	@ 000131ea 051c
.org 0x131ec
	ldrb r6, [r5, #14]	@ 000131ec ae7b
.org 0x131ee
	cmp r6, #0	@ 000131ee 002e
.org 0x131f0
	bne.n 0x13286	@ 000131f0 49d1
.org 0x131f2
	ldr r0, [r5, #92]	@ 000131f2 e86d
.org 0x131f4
	lsls r0, r0, #16	@ 000131f4 0004
.org 0x131f6
	lsrs r0, r0, #20	@ 000131f6 000d
.org 0x131f8
	lsls r2, r0, #1	@ 000131f8 4200
.org 0x131fa
	ldr r3, [pc, #72]	@ 000131fa 124b
.org 0x131fc
	adds r2, r2, r3	@ 000131fc d218
.org 0x131fe
	ldr r4, [r5, #96]	@ 000131fe 2c6e
.org 0x13200
	ldr r1, [r5, #100]	@ 00013200 696e
.org 0x13202
	orrs r4, r1	@ 00013202 0c43
.org 0x13204
	movs r1, #68	@ 00013204 4421
.org 0x13206
	orrs r4, r1	@ 00013206 0c43
.org 0x13208
	strh r4, [r2, #0]	@ 00013208 1480
.org 0x1320a
	lsls r0, r0, #2	@ 0001320a 8000
.org 0x1320c
	adds r3, #8	@ 0001320c 0833
.org 0x1320e
	adds r0, r0, r3	@ 0001320e c018
.org 0x13210
	str r6, [r0, #0]	@ 00013210 0660
.org 0x13212
	ldr r0, [pc, #52]	@ 00013212 0d48
.org 0x13214
	ldr r1, [pc, #52]	@ 00013214 0d49
.org 0x13216
	adds r0, r0, r1	@ 00013216 4018
.org 0x13218
	ldrb r1, [r0, #0]	@ 00013218 0178
.org 0x1321a
	movs r0, #15	@ 0001321a 0f20
.org 0x1321c
	ands r0, r1	@ 0001321c 0840
.org 0x1321e
	cmp r0, #0	@ 0001321e 0028
.org 0x13220
	bne.n 0x13258	@ 00013220 1ad1
.org 0x13222
	ldr r0, [pc, #44]	@ 00013222 0b48
.org 0x13224
	ldr r0, [r0, #0]	@ 00013224 0068
.org 0x13226
	ldr r2, [pc, #44]	@ 00013226 0b4a
.org 0x13228
	adds r0, r0, r2	@ 00013228 8018
.org 0x1322a
	movs r1, #248	@ 0001322a f821
.org 0x1322c
	lsls r1, r1, #5	@ 0001322c 4901
.org 0x1322e
	ands r4, r1	@ 0001322e 0c40
.org 0x13230
	lsls r1, r4, #3	@ 00013230 e100
.org 0x13232
	movs r2, #192	@ 00013232 c022
.org 0x13234
	lsls r2, r2, #19	@ 00013234 d204
.org 0x13236
	adds r1, r1, r2	@ 00013236 8918
.org 0x13238
	movs r2, #128	@ 00013238 8022
.org 0x1323a
	lsls r2, r2, #2	@ 0001323a 9200
.org 0x1323c
	bl 0x128be0	@ 0001323c 15f1d0fc
.org 0x13240
	b.n 0x13276	@ 00013240 19e0
.org 0x13242
	.byte 0x00	@ 00013242 data
.org 0x13243
	.byte 0x00	@ 00013243 data
.org 0x13244
	.byte 0x04,0x0a,0x00,0x02	@ 00013244 data
.org 0x13248
	.byte 0xb0,0x0a,0x00,0x02	@ 00013248 data
.org 0x1324c
	.byte 0x10,0xc0,0x02,0x00	@ 0001324c data
.org 0x13250
	.byte 0xe8,0xc0,0xb2,0x08	@ 00013250 data
.org 0x13254
	.byte 0xf0,0xc0,0xb2,0x08	@ 00013254 data
.org 0x13258
	ldr r0, [pc, #92]	@ 00013258 1748
.org 0x1325a
	ldr r0, [r0, #0]	@ 0001325a 0068
.org 0x1325c
	ldr r1, [pc, #92]	@ 0001325c 1749
.org 0x1325e
	adds r0, r0, r1	@ 0001325e 4018
.org 0x13260
	movs r1, #248	@ 00013260 f821
.org 0x13262
	lsls r1, r1, #5	@ 00013262 4901
.org 0x13264
	ands r4, r1	@ 00013264 0c40
.org 0x13266
	lsls r1, r4, #3	@ 00013266 e100
.org 0x13268
	movs r2, #192	@ 00013268 c022
.org 0x1326a
	lsls r2, r2, #19	@ 0001326a d204
.org 0x1326c
	adds r1, r1, r2	@ 0001326c 8918
.org 0x1326e
	movs r2, #128	@ 0001326e 8022
.org 0x13270
	lsls r2, r2, #2	@ 00013270 9200
.org 0x13272
	bl 0x128be0	@ 00013272 15f1b5fc
.org 0x13276
	movs r1, #0	@ 00013276 0021
.org 0x13278
	str r1, [r5, #108]	@ 00013278 e966
.org 0x1327a
	adds r0, r5, #0	@ 0001327a 281c
.org 0x1327c
	adds r0, #104	@ 0001327c 6830
.org 0x1327e
	strh r1, [r0, #0]	@ 0001327e 0180
.org 0x13280
	ldrb r0, [r5, #14]	@ 00013280 a87b
.org 0x13282
	adds r0, #1	@ 00013282 0130
.org 0x13284
	strb r0, [r5, #14]	@ 00013284 a873
.org 0x13286
	adds r3, r5, #0	@ 00013286 2b1c
.org 0x13288
	adds r3, #104	@ 00013288 6833
.org 0x1328a
	ldrh r0, [r3, #0]	@ 0001328a 1888
.org 0x1328c
	ldr r1, [r5, #108]	@ 0001328c e96e
.org 0x1328e
	ldr r2, [r5, #52]	@ 0001328e 6a6b
.org 0x13290
	subs r1, r1, r2	@ 00013290 891a
.org 0x13292
	lsls r1, r1, #4	@ 00013292 0901
.org 0x13294
	movs r2, #128	@ 00013294 8022
.org 0x13296
	lsls r2, r2, #5	@ 00013296 5201
.org 0x13298
	adds r1, r1, r2	@ 00013298 8918
.org 0x1329a
	cmp r0, r1	@ 0001329a 8842
.org 0x1329c
	ble.n 0x132a6	@ 0001329c 03dd
.org 0x1329e
	movs r0, #0	@ 0001329e 0020
.org 0x132a0
	strh r0, [r3, #0]	@ 000132a0 1880
