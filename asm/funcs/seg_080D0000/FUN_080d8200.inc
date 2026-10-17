@ FUN_080d8200  entry 0x080d8200  size 182
.thumb
.org 0xd8200
FUN_080d8200:
	push {r4, lr}	@ 000d8200 10b5
.org 0xd8202
	adds r4, r0, #0	@ 000d8202 041c
.org 0xd8204
	ldr r0, [r4, #116]	@ 000d8204 606f
.org 0xd8206
	subs r0, #1	@ 000d8206 0138
.org 0xd8208
	str r0, [r4, #116]	@ 000d8208 6067
.org 0xd820a
	cmp r0, #0	@ 000d820a 0028
.org 0xd820c
	bne.n 0xd822c	@ 000d820c 0ed1
.org 0xd820e
	ldr r1, [pc, #24]	@ 000d820e 0649
.org 0xd8210
	ldrb r0, [r4, #9]	@ 000d8210 607a
.org 0xd8212
	lsls r0, r0, #2	@ 000d8212 8000
.org 0xd8214
	adds r0, r0, r1	@ 000d8214 4018
.org 0xd8216
	movs r1, #2	@ 000d8216 0221
.org 0xd8218
	str r1, [r4, #12]	@ 000d8218 e160
.org 0xd821a
	ldr r0, [r0, #0]	@ 000d821a 0068
.org 0xd821c
	ldr r0, [r0, #8]	@ 000d821c 8068
.org 0xd821e
	str r0, [r4, #20]	@ 000d821e 6061
.org 0xd8220
	adds r0, r4, #0	@ 000d8220 201c
.org 0xd8222
	bl 0xd82c4	@ 000d8222 00f04ff8
.org 0xd8226
	b.n 0xd82be	@ 000d8226 4ae0
.org 0xd8228
	.byte 0x64,0x6f,0x86,0x08	@ 000d8228 data
.org 0xd822c
	ldr r0, [pc, #48]	@ 000d822c 0c48
.org 0xd822e
	adds r1, r4, #0	@ 000d822e 211c
.org 0xd8230
	adds r1, #84	@ 000d8230 5431
.org 0xd8232
	bl 0x1fb14	@ 000d8232 47f76ffc
.org 0xd8236
	movs r1, #128	@ 000d8236 8021
.org 0xd8238
	lsls r1, r1, #6	@ 000d8238 8901
.org 0xd823a
	cmp r0, r1	@ 000d823a 8842
.org 0xd823c
	bls.n 0xd8268	@ 000d823c 14d9
.org 0xd823e
	ldrb r1, [r4, #10]	@ 000d823e a17a
.org 0xd8240
	movs r0, #254	@ 000d8240 fe20
.org 0xd8242
	ands r0, r1	@ 000d8242 0840
.org 0xd8244
	movs r1, #253	@ 000d8244 fd21
.org 0xd8246
	ands r0, r1	@ 000d8246 0840
.org 0xd8248
	strb r0, [r4, #10]	@ 000d8248 a072
.org 0xd824a
	ldr r1, [pc, #24]	@ 000d824a 0649
.org 0xd824c
	ldrb r0, [r4, #9]	@ 000d824c 607a
.org 0xd824e
	lsls r0, r0, #2	@ 000d824e 8000
.org 0xd8250
	adds r0, r0, r1	@ 000d8250 4018
.org 0xd8252
	movs r1, #3	@ 000d8252 0321
.org 0xd8254
	str r1, [r4, #12]	@ 000d8254 e160
.org 0xd8256
	ldr r0, [r0, #0]	@ 000d8256 0068
.org 0xd8258
	ldr r0, [r0, #12]	@ 000d8258 c068
.org 0xd825a
	str r0, [r4, #20]	@ 000d825a 6061
.org 0xd825c
	b.n 0xd82be	@ 000d825c 2fe0
.org 0xd825e
	.byte 0x00	@ 000d825e data
.org 0xd825f
	.byte 0x00	@ 000d825f data
.org 0xd8260
	.byte 0xf8,0xe9,0x02,0x02	@ 000d8260 data
.org 0xd8264
	.byte 0x64,0x6f,0x86,0x08	@ 000d8264 data
.org 0xd8268
	ldr r1, [r4, #116]	@ 000d8268 616f
.org 0xd826a
	cmp r1, #23	@ 000d826a 1729
.org 0xd826c
	bgt.n 0xd827e	@ 000d826c 07dc
.org 0xd826e
	movs r0, #3	@ 000d826e 0320
.org 0xd8270
	ands r1, r0	@ 000d8270 0140
.org 0xd8272
	cmp r1, #0	@ 000d8272 0029
.org 0xd8274
	beq.n 0xd8292	@ 000d8274 0dd0
.org 0xd8276
	ldrb r1, [r4, #10]	@ 000d8276 a17a
.org 0xd8278
	movs r0, #254	@ 000d8278 fe20
.org 0xd827a
	ands r0, r1	@ 000d827a 0840
.org 0xd827c
	b.n 0xd8298	@ 000d827c 0ce0
.org 0xd827e
	cmp r1, #47	@ 000d827e 2f29
.org 0xd8280
	bgt.n 0xd829a	@ 000d8280 0bdc
.org 0xd8282
	movs r0, #1	@ 000d8282 0120
.org 0xd8284
	ands r1, r0	@ 000d8284 0140
.org 0xd8286
	cmp r1, #0	@ 000d8286 0029
.org 0xd8288
	beq.n 0xd8292	@ 000d8288 03d0
.org 0xd828a
	ldrb r1, [r4, #10]	@ 000d828a a17a
.org 0xd828c
	movs r0, #254	@ 000d828c fe20
.org 0xd828e
	ands r0, r1	@ 000d828e 0840
.org 0xd8290
	b.n 0xd8298	@ 000d8290 02e0
.org 0xd8292
	ldrb r1, [r4, #10]	@ 000d8292 a17a
.org 0xd8294
	movs r0, #1	@ 000d8294 0120
.org 0xd8296
	orrs r0, r1	@ 000d8296 0843
.org 0xd8298
	strb r0, [r4, #10]	@ 000d8298 a072
.org 0xd829a
	adds r0, r4, #0	@ 000d829a 201c
.org 0xd829c
	bl 0x1cff0	@ 000d829c 44f7a8fe
.org 0xd82a0
	ldr r0, [r4, #84]	@ 000d82a0 606d
.org 0xd82a2
	ldr r1, [r4, #92]	@ 000d82a2 e16d
.org 0xd82a4
	adds r0, r0, r1	@ 000d82a4 4018
.org 0xd82a6
	str r0, [r4, #84]	@ 000d82a6 6065
.org 0xd82a8
	ldr r0, [r4, #88]	@ 000d82a8 a06d
.org 0xd82aa
	ldr r1, [r4, #96]	@ 000d82aa 216e
.org 0xd82ac
	adds r0, r0, r1	@ 000d82ac 4018
.org 0xd82ae
	str r0, [r4, #88]	@ 000d82ae a065
.org 0xd82b0
	adds r1, #64	@ 000d82b0 4031
.org 0xd82b2
	str r1, [r4, #96]	@ 000d82b2 2166
.org 0xd82b4
	movs r0, #224	@ 000d82b4 e020
