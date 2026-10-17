@ FUN_080f81c4  entry 0x080f81c4  size 176
.thumb
.org 0xf81c4
FUN_080f81c4:
	push {r4, r5, r6, r7, lr}	@ 000f81c4 f0b5
.org 0xf81c6
	adds r6, r0, #0	@ 000f81c6 061c
.org 0xf81c8
	ldrb r0, [r6, #17]	@ 000f81c8 707c
.org 0xf81ca
	ldr r5, [pc, #68]	@ 000f81ca 114d
.org 0xf81cc
	cmp r0, #0	@ 000f81cc 0028
.org 0xf81ce
	bne.n 0xf81d2	@ 000f81ce 00d1
.org 0xf81d0
	subs r5, #1	@ 000f81d0 013d
.org 0xf81d2
	ldrb r4, [r5, #0]	@ 000f81d2 2c78
.org 0xf81d4
	adds r0, r6, #0	@ 000f81d4 301c
.org 0xf81d6
	adds r0, #180	@ 000f81d6 b430
.org 0xf81d8
	ldrb r1, [r0, #0]	@ 000f81d8 0178
.org 0xf81da
	adds r7, r0, #0	@ 000f81da 071c
.org 0xf81dc
	cmp r1, #0	@ 000f81dc 0029
.org 0xf81de
	beq.n 0xf821c	@ 000f81de 1dd0
.org 0xf81e0
	cmp r4, r1	@ 000f81e0 8c42
.org 0xf81e2
	beq.n 0xf821c	@ 000f81e2 1bd0
.org 0xf81e4
	movs r5, #0	@ 000f81e4 0025
.org 0xf81e6
	strb r5, [r7, #0]	@ 000f81e6 3d70
.org 0xf81e8
	ldrb r1, [r6, #10]	@ 000f81e8 b17a
.org 0xf81ea
	movs r0, #4	@ 000f81ea 0420
.org 0xf81ec
	orrs r0, r1	@ 000f81ec 0843
.org 0xf81ee
	strb r0, [r6, #10]	@ 000f81ee b072
.org 0xf81f0
	adds r4, r6, #0	@ 000f81f0 341c
.org 0xf81f2
	adds r4, #116	@ 000f81f2 7434
.org 0xf81f4
	ldr r1, [pc, #28]	@ 000f81f4 0749
.org 0xf81f6
	adds r2, r6, #0	@ 000f81f6 321c
.org 0xf81f8
	adds r2, #84	@ 000f81f8 5432
.org 0xf81fa
	adds r0, r4, #0	@ 000f81fa 201c
.org 0xf81fc
	movs r3, #0	@ 000f81fc 0023
.org 0xf81fe
	bl 0x5760	@ 000f81fe 0df7affa
.org 0xf8202
	str r6, [r4, #44]	@ 000f8202 e662
.org 0xf8204
	str r5, [r4, #36]	@ 000f8204 6562
.org 0xf8206
	ldr r1, [pc, #16]	@ 000f8206 0449
.org 0xf8208
	adds r0, r6, #0	@ 000f8208 301c
.org 0xf820a
	bl 0x1cf00	@ 000f820a 24f779fe
.org 0xf820e
	b.n 0xf8274	@ 000f820e 31e0
.org 0xf8210
	.byte 0xf1,0xda,0x02,0x02	@ 000f8210 data
.org 0xf8214
	.byte 0x40,0xa3,0x86,0x08	@ 000f8214 data
.org 0xf8218
	.byte 0x05,0x73,0x00,0x00	@ 000f8218 data
.org 0xf821c
	adds r0, r4, #0	@ 000f821c 201c
.org 0xf821e
	movs r1, #3	@ 000f821e 0321
.org 0xf8220
	bl 0x129198	@ 000f8220 30f0baff
.org 0xf8224
	lsls r0, r0, #24	@ 000f8224 0006
.org 0xf8226
	cmp r0, #0	@ 000f8226 0028
.org 0xf8228
	bne.n 0xf8274	@ 000f8228 24d1
.org 0xf822a
	ldrb r2, [r7, #0]	@ 000f822a 3a78
.org 0xf822c
	cmp r2, #0	@ 000f822c 002a
.org 0xf822e
	bne.n 0xf8274	@ 000f822e 21d1
.org 0xf8230
	cmp r4, #9	@ 000f8230 092c
.org 0xf8232
	bhi.n 0xf8274	@ 000f8232 1fd8
.org 0xf8234
	adds r3, r6, #0	@ 000f8234 331c
.org 0xf8236
	adds r3, #140	@ 000f8236 8c33
.org 0xf8238
	ldr r0, [r3, #0]	@ 000f8238 1868
.org 0xf823a
	movs r1, #1	@ 000f823a 0121
.org 0xf823c
	ands r0, r1	@ 000f823c 0840
.org 0xf823e
	cmp r0, #0	@ 000f823e 0028
.org 0xf8240
	beq.n 0xf8274	@ 000f8240 18d0
.org 0xf8242
	str r2, [r3, #0]	@ 000f8242 1a60
.org 0xf8244
	adds r0, r6, #0	@ 000f8244 301c
.org 0xf8246
	adds r0, #144	@ 000f8246 9030
.org 0xf8248
	str r2, [r0, #0]	@ 000f8248 0260
.org 0xf824a
	adds r0, #4	@ 000f824a 0430
.org 0xf824c
	strb r2, [r0, #0]	@ 000f824c 0270
.org 0xf824e
	ldrb r1, [r6, #10]	@ 000f824e b17a
.org 0xf8250
	movs r0, #251	@ 000f8250 fb20
.org 0xf8252
	ands r0, r1	@ 000f8252 0840
.org 0xf8254
	strb r0, [r6, #10]	@ 000f8254 b072
.org 0xf8256
	ldr r1, [pc, #40]	@ 000f8256 0a49
.org 0xf8258
	adds r0, r6, #0	@ 000f8258 301c
.org 0xf825a
	bl 0x1cf00	@ 000f825a 24f751fe
.org 0xf825e
	adds r0, r4, #0	@ 000f825e 201c
.org 0xf8260
	movs r1, #3	@ 000f8260 0321
.org 0xf8262
	bl 0x129120	@ 000f8262 30f05dff
.org 0xf8266
	lsls r0, r0, #24	@ 000f8266 0006
.org 0xf8268
	lsrs r0, r0, #24	@ 000f8268 000e
.org 0xf826a
	lsls r1, r0, #1	@ 000f826a 4100
.org 0xf826c
	adds r1, r1, r0	@ 000f826c 0918
.org 0xf826e
	adds r1, #2	@ 000f826e 0231
.org 0xf8270
	strb r1, [r7, #0]	@ 000f8270 3970
.org 0xf8272
	strb r1, [r5, #0]	@ 000f8272 2970
