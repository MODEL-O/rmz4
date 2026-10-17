@ FUN_08012230  entry 0x08012230  size 250
.thumb
.org 0x12230
FUN_08012230:
	.byte 0xf0,0xb5	@ 00012230 (raw)
.org 0x12232
	.byte 0x82,0xb0	@ 00012232 (raw)
.org 0x12234
	.byte 0x05,0x1c	@ 00012234 (raw)
.org 0x12236
	ldr r0, [pc, #188]	@ 00012236 2f48
.org 0x12238
	ldr r1, [pc, #188]	@ 00012238 2f49
.org 0x1223a
	adds r0, r0, r1	@ 0001223a 4018
.org 0x1223c
	ldrb r1, [r0, #0]	@ 0001223c 0178
.org 0x1223e
	movs r7, #15	@ 0001223e 0f27
.org 0x12240
	adds r0, r7, #0	@ 00012240 381c
.org 0x12242
	ands r0, r1	@ 00012242 0840
.org 0x12244
	cmp r0, #3	@ 00012244 0328
.org 0x12246
	bne.n 0x12320	@ 00012246 6bd1
.org 0x12248
	ldrb r6, [r5, #14]	@ 00012248 ae7b
.org 0x1224a
	cmp r6, #0	@ 0001224a 002e
.org 0x1224c
	bne.n 0x12294	@ 0001224c 22d1
.org 0x1224e
	ldr r0, [r5, #92]	@ 0001224e e86d
.org 0x12250
	lsls r0, r0, #16	@ 00012250 0004
.org 0x12252
	lsrs r0, r0, #20	@ 00012252 000d
.org 0x12254
	lsls r3, r0, #1	@ 00012254 4300
.org 0x12256
	ldr r4, [pc, #164]	@ 00012256 294c
.org 0x12258
	adds r3, r3, r4	@ 00012258 1b19
.org 0x1225a
	ldr r1, [r5, #100]	@ 0001225a 696e
.org 0x1225c
	movs r2, #69	@ 0001225c 4522
.org 0x1225e
	orrs r1, r2	@ 0001225e 1143
.org 0x12260
	strh r1, [r3, #0]	@ 00012260 1980
.org 0x12262
	lsls r0, r0, #2	@ 00012262 8000
.org 0x12264
	adds r4, #8	@ 00012264 0834
.org 0x12266
	adds r0, r0, r4	@ 00012266 0019
.org 0x12268
	str r6, [r0, #0]	@ 00012268 0660
.org 0x1226a
	ldr r0, [pc, #148]	@ 0001226a 2548
.org 0x1226c
	ldr r0, [r0, #0]	@ 0001226c 0068
.org 0x1226e
	ldr r2, [pc, #148]	@ 0001226e 254a
.org 0x12270
	adds r0, r0, r2	@ 00012270 8018
.org 0x12272
	movs r2, #248	@ 00012272 f822
.org 0x12274
	lsls r2, r2, #5	@ 00012274 5201
.org 0x12276
	ands r1, r2	@ 00012276 1140
.org 0x12278
	lsls r1, r1, #3	@ 00012278 c900
.org 0x1227a
	movs r2, #192	@ 0001227a c022
.org 0x1227c
	lsls r2, r2, #19	@ 0001227c d204
.org 0x1227e
	adds r1, r1, r2	@ 0001227e 8918
.org 0x12280
	movs r2, #128	@ 00012280 8022
.org 0x12282
	lsls r2, r2, #2	@ 00012282 9200
.org 0x12284
	bl 0x128be0	@ 00012284 16f1acfc
.org 0x12288
	strh r6, [r5, #16]	@ 00012288 2e82
.org 0x1228a
	movs r0, #1	@ 0001228a 0120
.org 0x1228c
	strh r0, [r5, #18]	@ 0001228c 6882
.org 0x1228e
	ldrb r0, [r5, #14]	@ 0001228e a87b
.org 0x12290
	adds r0, #1	@ 00012290 0130
.org 0x12292
	strb r0, [r5, #14]	@ 00012292 a873
.org 0x12294
	adds r0, r5, #0	@ 00012294 281c
.org 0x12296
	adds r0, #104	@ 00012296 6830
.org 0x12298
	ldrb r1, [r0, #0]	@ 00012298 0178
.org 0x1229a
	adds r3, r0, #0	@ 0001229a 031c
.org 0x1229c
	cmp r1, #0	@ 0001229c 0029
.org 0x1229e
	bne.n 0x122c4	@ 0001229e 11d1
.org 0x122a0
	ldr r1, [pc, #100]	@ 000122a0 1949
.org 0x122a2
	ldr r0, [pc, #104]	@ 000122a2 1a48
.org 0x122a4
	adds r1, r1, r0	@ 000122a4 0918
.org 0x122a6
	ldr r2, [r1, #0]	@ 000122a6 0a68
.org 0x122a8
	ldr r0, [pc, #100]	@ 000122a8 1948
.org 0x122aa
	muls r0, r2	@ 000122aa 5043
.org 0x122ac
	ldr r2, [pc, #100]	@ 000122ac 194a
.org 0x122ae
	adds r0, r0, r2	@ 000122ae 8018
.org 0x122b0
	str r0, [r1, #0]	@ 000122b0 0860
.org 0x122b2
	lsrs r0, r0, #16	@ 000122b2 000c
.org 0x122b4
	ands r0, r7	@ 000122b4 3840
.org 0x122b6
	cmp r0, #0	@ 000122b6 0028
.org 0x122b8
	bne.n 0x122be	@ 000122b8 01d1
.org 0x122ba
	movs r0, #1	@ 000122ba 0120
.org 0x122bc
	strb r0, [r3, #0]	@ 000122bc 1870
.org 0x122be
	ldrb r0, [r3, #0]	@ 000122be 1878
.org 0x122c0
	cmp r0, #0	@ 000122c0 0028
.org 0x122c2
	beq.n 0x122da	@ 000122c2 0ad0
.org 0x122c4
	ldr r1, [pc, #80]	@ 000122c4 1449
.org 0x122c6
	ldrb r0, [r3, #0]	@ 000122c6 1878
.org 0x122c8
	lsls r0, r0, #1	@ 000122c8 4000
.org 0x122ca
	adds r0, r0, r1	@ 000122ca 4018
.org 0x122cc
	ldrh r0, [r0, #0]	@ 000122cc 0088
.org 0x122ce
	ldrh r1, [r5, #16]	@ 000122ce 298a
.org 0x122d0
	adds r0, r0, r1	@ 000122d0 4018
.org 0x122d2
	strh r0, [r5, #16]	@ 000122d2 2882
.org 0x122d4
	ldrb r0, [r3, #0]	@ 000122d4 1878
.org 0x122d6
	adds r0, #1	@ 000122d6 0130
.org 0x122d8
	strb r0, [r3, #0]	@ 000122d8 1870
.org 0x122da
	movs r2, #128	@ 000122da 8022
.org 0x122dc
	lsls r2, r2, #1	@ 000122dc 5200
.org 0x122de
	adds r0, r2, #0	@ 000122de 101c
.org 0x122e0
	ldrh r1, [r5, #16]	@ 000122e0 298a
.org 0x122e2
	adds r0, r0, r1	@ 000122e2 4018
.org 0x122e4
	strh r0, [r5, #16]	@ 000122e4 2882
.org 0x122e6
	ldr r2, [pc, #52]	@ 000122e6 0d4a
.org 0x122e8
	adds r0, r2, #0	@ 000122e8 101c
.org 0x122ea
	ldrh r1, [r5, #18]	@ 000122ea 698a
.org 0x122ec
	adds r0, r0, r1	@ 000122ec 4018
.org 0x122ee
	strh r0, [r5, #18]	@ 000122ee 6882
.org 0x122f0
	b.n 0x12350	@ 000122f0 2ee0
.org 0x122f2
	.byte 0x00	@ 000122f2 data
.org 0x122f3
	.byte 0x00	@ 000122f3 data
.org 0x122f4
	.byte 0xb0,0x0a,0x00,0x02	@ 000122f4 data
.org 0x122f8
	.byte 0x10,0xc0,0x02,0x00	@ 000122f8 data
.org 0x122fc
	.byte 0x04,0x0a,0x00,0x02	@ 000122fc data
.org 0x12300
	.byte 0x24,0xc1,0xb2,0x08	@ 00012300 data
.org 0x12304
	.byte 0x2c,0xc1,0xb2,0x08	@ 00012304 data
.org 0x12308
	.byte 0x10,0xf6,0x02,0x02	@ 00012308 data
.org 0x1230c
	.byte 0x6c,0x62,0x00,0x00	@ 0001230c data
.org 0x12310
	.byte 0x6d,0x4e,0xc6,0x41	@ 00012310 data
.org 0x12314
	.byte 0x39,0x30,0x00,0x00	@ 00012314 data
.org 0x12318
	.byte 0x0c,0x93,0x12,0x08	@ 00012318 data
.org 0x1231c
	.byte 0x00,0xff,0xff,0xff	@ 0001231c data
.org 0x12320
	ldrb r2, [r5, #14]	@ 00012320 aa7b
.org 0x12322
	cmp r2, #0	@ 00012322 002a
.org 0x12324
	bne.n 0x12350	@ 00012324 14d1
.org 0x12326
	ldr r0, [r5, #92]	@ 00012326 e86d
.org 0x12328
	lsrs r0, r0, #4	@ 00012328 0009
