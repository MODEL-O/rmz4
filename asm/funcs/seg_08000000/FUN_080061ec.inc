@ FUN_080061ec  entry 0x080061ec  size 140
.thumb
.org 0x61ec
FUN_080061ec:
	push {r4, r5, r6, r7, lr}	@ 000061ec f0b5
.org 0x61ee
	adds r3, r0, #0	@ 000061ee 031c
.org 0x61f0
	lsls r1, r1, #24	@ 000061f0 0906
.org 0x61f2
	lsrs r4, r1, #24	@ 000061f2 0c0e
.org 0x61f4
	ldr r0, [r3, #4]	@ 000061f4 5868
.org 0x61f6
	adds r2, r3, #0	@ 000061f6 1a1c
.org 0x61f8
	adds r2, #59	@ 000061f8 3b32
.org 0x61fa
	ldrb r1, [r0, #9]	@ 000061fa 417a
.org 0x61fc
	ldrb r0, [r2, #0]	@ 000061fc 1078
.org 0x61fe
	adds r2, r0, #0	@ 000061fe 021c
.org 0x6200
	orrs r2, r1	@ 00006200 0a43
.org 0x6202
	adds r5, r2, #0	@ 00006202 151c
.org 0x6204
	ldr r0, [pc, #24]	@ 00006204 0648
.org 0x6206
	ldrb r1, [r0, #0]	@ 00006206 0178
.org 0x6208
	movs r7, #128	@ 00006208 8027
.org 0x620a
	adds r0, r7, #0	@ 0000620a 381c
.org 0x620c
	ands r0, r1	@ 0000620c 0840
.org 0x620e
	cmp r0, #0	@ 0000620e 0028
.org 0x6210
	bne.n 0x621c	@ 00006210 04d1
.org 0x6212
	adds r6, r3, #0	@ 00006212 1e1c
.org 0x6214
	adds r6, #32	@ 00006214 2036
.org 0x6216
	ldrb r0, [r6, #0]	@ 00006216 3078
.org 0x6218
	cmp r0, #0	@ 00006218 0028
.org 0x621a
	beq.n 0x6224	@ 0000621a 03d0
.org 0x621c
	movs r0, #0	@ 0000621c 0020
.org 0x621e
	b.n 0x6276	@ 0000621e 2ae0
.org 0x6220
	.byte 0xe0,0x32,0x00,0x03	@ 00006220 data
.org 0x6224
	adds r0, r2, #0	@ 00006224 101c
.org 0x6226
	ands r0, r7	@ 00006226 3840
.org 0x6228
	cmp r0, #0	@ 00006228 0028
.org 0x622a
	beq.n 0x6230	@ 0000622a 01d0
.org 0x622c
	lsls r0, r4, #25	@ 0000622c 6006
.org 0x622e
	lsrs r4, r0, #24	@ 0000622e 040e
.org 0x6230
	movs r0, #32	@ 00006230 2020
.org 0x6232
	ands r2, r0	@ 00006232 0240
.org 0x6234
	cmp r2, #0	@ 00006234 002a
.org 0x6236
	beq.n 0x623a	@ 00006236 00d0
.org 0x6238
	lsrs r4, r4, #1	@ 00006238 6408
.org 0x623a
	cmp r4, #0	@ 0000623a 002c
.org 0x623c
	bne.n 0x6240	@ 0000623c 00d1
.org 0x623e
	movs r4, #1	@ 0000623e 0124
.org 0x6240
	movs r0, #2	@ 00006240 0220
.org 0x6242
	ands r5, r0	@ 00006242 0540
.org 0x6244
	lsls r0, r5, #24	@ 00006244 2806
.org 0x6246
	lsrs r1, r0, #24	@ 00006246 010e
.org 0x6248
	cmp r1, #0	@ 00006248 0029
.org 0x624a
	bne.n 0x6274	@ 0000624a 13d1
.org 0x624c
	ldrh r0, [r3, #48]	@ 0000624c 188e
.org 0x624e
	subs r0, r0, r4	@ 0000624e 001b
.org 0x6250
	strh r0, [r3, #48]	@ 00006250 1886
.org 0x6252
	lsls r0, r0, #16	@ 00006252 0004
.org 0x6254
	cmp r0, #0	@ 00006254 0028
.org 0x6256
	bgt.n 0x6264	@ 00006256 05dc
.org 0x6258
	strh r1, [r3, #48]	@ 00006258 1986
.org 0x625a
	ldr r0, [r3, #20]	@ 0000625a 5869
.org 0x625c
	movs r1, #128	@ 0000625c 8021
.org 0x625e
	lsls r1, r1, #2	@ 0000625e 8900
.org 0x6260
	orrs r0, r1	@ 00006260 0843
.org 0x6262
	str r0, [r3, #20]	@ 00006262 5861
.org 0x6264
	ldr r0, [r3, #4]	@ 00006264 5868
.org 0x6266
	ldrb r0, [r0, #2]	@ 00006266 8078
.org 0x6268
	cmp r0, #1	@ 00006268 0128
.org 0x626a
	beq.n 0x6270	@ 0000626a 01d0
.org 0x626c
	cmp r0, #2	@ 0000626c 0228
.org 0x626e
	bne.n 0x6274	@ 0000626e 01d1
.org 0x6270
	movs r0, #90	@ 00006270 5a20
.org 0x6272
	strb r0, [r6, #0]	@ 00006272 3070
.org 0x6274
	adds r0, r4, #0	@ 00006274 201c
.org 0x6276
	pop {r4, r5, r6, r7}	@ 00006276 f0bc
