@ FUN_080a61d4  entry 0x080a61d4  size 152
.thumb
.org 0xa61d4
FUN_080a61d4:
	push {r4, r5, lr}	@ 000a61d4 30b5
.org 0xa61d6
	adds r5, r0, #0	@ 000a61d6 051c
.org 0xa61d8
	adds r0, #180	@ 000a61d8 b430
.org 0xa61da
	ldrb r0, [r0, #0]	@ 000a61da 0078
.org 0xa61dc
	cmp r0, #0	@ 000a61dc 0028
.org 0xa61de
	bne.n 0xa621e	@ 000a61de 1ed1
.org 0xa61e0
	adds r0, r5, #0	@ 000a61e0 281c
.org 0xa61e2
	adds r0, #140	@ 000a61e2 8c30
.org 0xa61e4
	ldr r0, [r0, #0]	@ 000a61e4 0068
.org 0xa61e6
	movs r1, #128	@ 000a61e6 8021
.org 0xa61e8
	lsls r1, r1, #9	@ 000a61e8 4902
.org 0xa61ea
	ands r0, r1	@ 000a61ea 0840
.org 0xa61ec
	cmp r0, #0	@ 000a61ec 0028
.org 0xa61ee
	beq.n 0xa6206	@ 000a61ee 0ad0
.org 0xa61f0
	adds r4, r5, #0	@ 000a61f0 2c1c
.org 0xa61f2
	adds r4, #84	@ 000a61f2 5434
.org 0xa61f4
	ldrb r2, [r5, #10]	@ 000a61f4 aa7a
.org 0xa61f6
	lsrs r2, r2, #4	@ 000a61f6 1209
.org 0xa61f8
	movs r0, #1	@ 000a61f8 0120
.org 0xa61fa
	ands r2, r0	@ 000a61fa 0240
.org 0xa61fc
	adds r0, r4, #0	@ 000a61fc 201c
.org 0xa61fe
	movs r1, #0	@ 000a61fe 0021
.org 0xa6200
	bl 0xe2188	@ 000a6200 3bf0c2ff
.org 0xa6204
	b.n 0xa6234	@ 000a6204 16e0
.org 0xa6206
	adds r4, r5, #0	@ 000a6206 2c1c
.org 0xa6208
	adds r4, #84	@ 000a6208 5434
.org 0xa620a
	movs r1, #128	@ 000a620a 8021
.org 0xa620c
	lsls r1, r1, #1	@ 000a620c 4900
.org 0xa620e
	ldrb r2, [r5, #10]	@ 000a620e aa7a
.org 0xa6210
	lsrs r2, r2, #4	@ 000a6210 1209
.org 0xa6212
	movs r0, #1	@ 000a6212 0120
.org 0xa6214
	ands r2, r0	@ 000a6214 0240
.org 0xa6216
	adds r0, r4, #0	@ 000a6216 201c
.org 0xa6218
	bl 0xe2188	@ 000a6218 3bf0b6ff
.org 0xa621c
	b.n 0xa6234	@ 000a621c 0ae0
.org 0xa621e
	adds r4, r5, #0	@ 000a621e 2c1c
.org 0xa6220
	adds r4, #84	@ 000a6220 5434
.org 0xa6222
	movs r1, #128	@ 000a6222 8021
.org 0xa6224
	lsls r1, r1, #2	@ 000a6224 8900
.org 0xa6226
	ldrb r2, [r5, #10]	@ 000a6226 aa7a
.org 0xa6228
	lsrs r2, r2, #4	@ 000a6228 1209
.org 0xa622a
	movs r0, #1	@ 000a622a 0120
.org 0xa622c
	ands r2, r0	@ 000a622c 0240
.org 0xa622e
	adds r0, r4, #0	@ 000a622e 201c
.org 0xa6230
	bl 0xe2188	@ 000a6230 3bf0aaff
.org 0xa6234
	ldr r2, [pc, #52]	@ 000a6234 0d4a
.org 0xa6236
	ldrh r1, [r2, #12]	@ 000a6236 9189
.org 0xa6238
	ldr r0, [pc, #52]	@ 000a6238 0d48
.org 0xa623a
	cmp r1, r0	@ 000a623a 8142
.org 0xa623c
	bhi.n 0xa6242	@ 000a623c 01d8
.org 0xa623e
	adds r0, r1, #1	@ 000a623e 481c
.org 0xa6240
	strh r0, [r2, #12]	@ 000a6240 9081
.org 0xa6242
	adds r0, r5, #0	@ 000a6242 281c
.org 0xa6244
	adds r1, r4, #0	@ 000a6244 211c
.org 0xa6246
	bl 0x2abe0	@ 000a6246 84f7cbfc
.org 0xa624a
	movs r0, #1	@ 000a624a 0120
.org 0xa624c
	movs r1, #22	@ 000a624c 1621
.org 0xa624e
	adds r2, r4, #0	@ 000a624e 221c
.org 0xa6250
	bl 0x2ab88	@ 000a6250 84f79afc
.org 0xa6254
	ldr r1, [pc, #28]	@ 000a6254 0749
.org 0xa6256
	ldrb r0, [r5, #9]	@ 000a6256 687a
.org 0xa6258
	lsls r0, r0, #2	@ 000a6258 8000
.org 0xa625a
	adds r0, r0, r1	@ 000a625a 4018
.org 0xa625c
	movs r1, #4	@ 000a625c 0421
.org 0xa625e
	str r1, [r5, #12]	@ 000a625e e960
.org 0xa6260
	ldr r0, [r0, #0]	@ 000a6260 0068
.org 0xa6262
	ldr r0, [r0, #16]	@ 000a6262 0069
.org 0xa6264
	str r0, [r5, #20]	@ 000a6264 6861
.org 0xa6266
	pop {r4, r5}	@ 000a6266 30bc
.org 0xa6268
	pop {r0}	@ 000a6268 01bc
.org 0xa626a
	bx r0	@ 000a626a 0047
