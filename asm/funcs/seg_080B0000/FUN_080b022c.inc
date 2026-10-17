@ FUN_080b022c  entry 0x080b022c  size 228
.thumb
.org 0xb022c
FUN_080b022c:
	push {r4, r5, r6, r7, lr}	@ 000b022c f0b5
.org 0xb022e
	mov ip, r0	@ 000b022e 8446
.org 0xb0230
	ldrb r2, [r0, #10]	@ 000b0230 827a
.org 0xb0232
	lsrs r5, r2, #4	@ 000b0232 1509
.org 0xb0234
	movs r6, #1	@ 000b0234 0126
.org 0xb0236
	ands r5, r6	@ 000b0236 3540
.org 0xb0238
	ldr r0, [pc, #80]	@ 000b0238 1448
.org 0xb023a
	ldr r1, [r0, #0]	@ 000b023a 0168
.org 0xb023c
	ldr r4, [r1, #84]	@ 000b023c 4c6d
.org 0xb023e
	mov r0, ip	@ 000b023e 6046
.org 0xb0240
	ldr r3, [r0, #84]	@ 000b0240 436d
.org 0xb0242
	subs r0, r4, r3	@ 000b0242 e01a
.org 0xb0244
	asrs r0, r0, #8	@ 000b0244 0012
.org 0xb0246
	cmp r0, #0	@ 000b0246 0028
.org 0xb0248
	bge.n 0xb024c	@ 000b0248 00da
.org 0xb024a
	negs r0, r0	@ 000b024a 4042
.org 0xb024c
	cmp r0, #199	@ 000b024c c728
.org 0xb024e
	bgt.n 0xb0306	@ 000b024e 5adc
.org 0xb0250
	ldr r0, [r1, #88]	@ 000b0250 886d
.org 0xb0252
	mov r7, ip	@ 000b0252 6746
.org 0xb0254
	ldr r1, [r7, #88]	@ 000b0254 b96d
.org 0xb0256
	subs r0, r0, r1	@ 000b0256 401a
.org 0xb0258
	asrs r0, r0, #8	@ 000b0258 0012
.org 0xb025a
	cmp r0, #0	@ 000b025a 0028
.org 0xb025c
	bge.n 0xb0260	@ 000b025c 00da
.org 0xb025e
	negs r0, r0	@ 000b025e 4042
.org 0xb0260
	cmp r0, #119	@ 000b0260 7728
.org 0xb0262
	bgt.n 0xb0306	@ 000b0262 50dc
.org 0xb0264
	cmp r4, r3	@ 000b0264 9c42
.org 0xb0266
	ble.n 0xb0290	@ 000b0266 13dd
.org 0xb0268
	movs r0, #16	@ 000b0268 1020
.org 0xb026a
	orrs r0, r2	@ 000b026a 1043
.org 0xb026c
	mov r1, ip	@ 000b026c 6146
.org 0xb026e
	strb r0, [r1, #10]	@ 000b026e 8872
.org 0xb0270
	mov r0, ip	@ 000b0270 6046
.org 0xb0272
	adds r0, #76	@ 000b0272 4c30
.org 0xb0274
	strb r6, [r0, #0]	@ 000b0274 0670
.org 0xb0276
	mov r3, ip	@ 000b0276 6346
.org 0xb0278
	adds r3, #74	@ 000b0278 4a33
.org 0xb027a
	movs r2, #16	@ 000b027a 1022
.org 0xb027c
	ldrb r1, [r3, #0]	@ 000b027c 1978
.org 0xb027e
	movs r0, #17	@ 000b027e 1120
.org 0xb0280
	negs r0, r0	@ 000b0280 4042
.org 0xb0282
	ands r0, r1	@ 000b0282 0840
.org 0xb0284
	orrs r0, r2	@ 000b0284 1043
.org 0xb0286
	strb r0, [r3, #0]	@ 000b0286 1870
.org 0xb0288
	b.n 0xb02ac	@ 000b0288 10e0
.org 0xb028a
	.byte 0x00	@ 000b028a data
.org 0xb028b
	.byte 0x00	@ 000b028b data
.org 0xb028c
	.byte 0xf0,0xdb,0x02,0x02	@ 000b028c data
.org 0xb0290
	movs r1, #0	@ 000b0290 0021
.org 0xb0292
	movs r0, #239	@ 000b0292 ef20
.org 0xb0294
	ands r0, r2	@ 000b0294 1040
.org 0xb0296
	mov r2, ip	@ 000b0296 6246
.org 0xb0298
	strb r0, [r2, #10]	@ 000b0298 9072
.org 0xb029a
	mov r0, ip	@ 000b029a 6046
.org 0xb029c
	adds r0, #76	@ 000b029c 4c30
.org 0xb029e
	strb r1, [r0, #0]	@ 000b029e 0170
.org 0xb02a0
	adds r2, #74	@ 000b02a0 4a32
.org 0xb02a2
	ldrb r1, [r2, #0]	@ 000b02a2 1178
.org 0xb02a4
	movs r0, #17	@ 000b02a4 1120
.org 0xb02a6
	negs r0, r0	@ 000b02a6 4042
.org 0xb02a8
	ands r0, r1	@ 000b02a8 0840
.org 0xb02aa
	strb r0, [r2, #0]	@ 000b02aa 1070
.org 0xb02ac
	mov r7, ip	@ 000b02ac 6746
.org 0xb02ae
	ldrb r0, [r7, #10]	@ 000b02ae b87a
.org 0xb02b0
	lsrs r3, r0, #4	@ 000b02b0 0309
.org 0xb02b2
	movs r0, #1	@ 000b02b2 0120
.org 0xb02b4
	ands r3, r0	@ 000b02b4 0340
.org 0xb02b6
	cmp r3, #0	@ 000b02b6 002b
.org 0xb02b8
	beq.n 0xb02c4	@ 000b02b8 04d0
.org 0xb02ba
	ldr r2, [r7, #44]	@ 000b02ba fa6a
.org 0xb02bc
	ldrb r1, [r2, #10]	@ 000b02bc 917a
.org 0xb02be
	movs r0, #16	@ 000b02be 1020
.org 0xb02c0
	orrs r0, r1	@ 000b02c0 0843
.org 0xb02c2
	b.n 0xb02ce	@ 000b02c2 04e0
.org 0xb02c4
	mov r0, ip	@ 000b02c4 6046
.org 0xb02c6
	ldr r2, [r0, #44]	@ 000b02c6 c26a
.org 0xb02c8
	ldrb r1, [r2, #10]	@ 000b02c8 917a
.org 0xb02ca
	movs r0, #239	@ 000b02ca ef20
.org 0xb02cc
	ands r0, r1	@ 000b02cc 0840
.org 0xb02ce
	strb r0, [r2, #10]	@ 000b02ce 9072
.org 0xb02d0
	mov r1, ip	@ 000b02d0 6146
.org 0xb02d2
	ldr r0, [r1, #44]	@ 000b02d2 c86a
.org 0xb02d4
	movs r4, #1	@ 000b02d4 0124
.org 0xb02d6
	adds r2, r4, #0	@ 000b02d6 221c
.org 0xb02d8
	ands r2, r3	@ 000b02d8 1a40
.org 0xb02da
	adds r0, #76	@ 000b02da 4c30
.org 0xb02dc
	strb r2, [r0, #0]	@ 000b02dc 0270
.org 0xb02de
	ldr r1, [r1, #44]	@ 000b02de c96a
.org 0xb02e0
	adds r1, #74	@ 000b02e0 4a31
.org 0xb02e2
	lsls r2, r2, #4	@ 000b02e2 1201
.org 0xb02e4
	ldrb r3, [r1, #0]	@ 000b02e4 0b78
.org 0xb02e6
	movs r0, #17	@ 000b02e6 1120
.org 0xb02e8
	negs r0, r0	@ 000b02e8 4042
.org 0xb02ea
	ands r0, r3	@ 000b02ea 1840
.org 0xb02ec
	orrs r0, r2	@ 000b02ec 1043
.org 0xb02ee
	strb r0, [r1, #0]	@ 000b02ee 0870
.org 0xb02f0
	mov r0, ip	@ 000b02f0 6046
.org 0xb02f2
	adds r0, #182	@ 000b02f2 b630
.org 0xb02f4
	strb r4, [r0, #0]	@ 000b02f4 0470
.org 0xb02f6
	mov r2, ip	@ 000b02f6 6246
.org 0xb02f8
	ldrb r0, [r2, #10]	@ 000b02f8 907a
.org 0xb02fa
	lsrs r0, r0, #4	@ 000b02fa 0009
.org 0xb02fc
	ands r0, r4	@ 000b02fc 2040
.org 0xb02fe
	cmp r5, r0	@ 000b02fe 8542
.org 0xb0300
	beq.n 0xb030e	@ 000b0300 05d0
.org 0xb0302
	movs r0, #1	@ 000b0302 0120
.org 0xb0304
	b.n 0xb0310	@ 000b0304 04e0
.org 0xb0306
	mov r1, ip	@ 000b0306 6146
.org 0xb0308
	adds r1, #182	@ 000b0308 b631
.org 0xb030a
	movs r0, #0	@ 000b030a 0020
.org 0xb030c
	strb r0, [r1, #0]	@ 000b030c 0870
.org 0xb030e
	movs r0, #0	@ 000b030e 0020
