@ FUN_080e81a8  entry 0x080e81a8  size 254
.thumb
.org 0xe81a8
FUN_080e81a8:
	push {r4, r5, lr}	@ 000e81a8 30b5
.org 0xe81aa
	adds r4, r0, #0	@ 000e81aa 041c
.org 0xe81ac
	ldr r0, [r4, #84]	@ 000e81ac 606d
.org 0xe81ae
	ldr r1, [r4, #92]	@ 000e81ae e16d
.org 0xe81b0
	adds r0, r0, r1	@ 000e81b0 4018
.org 0xe81b2
	str r0, [r4, #84]	@ 000e81b2 6065
.org 0xe81b4
	ldr r0, [r4, #88]	@ 000e81b4 a06d
.org 0xe81b6
	ldr r1, [r4, #96]	@ 000e81b6 216e
.org 0xe81b8
	adds r0, r0, r1	@ 000e81b8 4018
.org 0xe81ba
	str r0, [r4, #88]	@ 000e81ba a065
.org 0xe81bc
	adds r1, #64	@ 000e81bc 4031
.org 0xe81be
	str r1, [r4, #96]	@ 000e81be 2166
.org 0xe81c0
	ldrb r1, [r4, #18]	@ 000e81c0 a17c
.org 0xe81c2
	adds r0, r4, #0	@ 000e81c2 201c
.org 0xe81c4
	adds r0, #36	@ 000e81c4 2430
.org 0xe81c6
	strb r1, [r0, #0]	@ 000e81c6 0170
.org 0xe81c8
	ldrb r0, [r4, #17]	@ 000e81c8 607c
.org 0xe81ca
	cmp r0, #0	@ 000e81ca 0028
.org 0xe81cc
	bne.n 0xe81d4	@ 000e81cc 02d1
.org 0xe81ce
	ldrb r0, [r4, #18]	@ 000e81ce a07c
.org 0xe81d0
	subs r0, #24	@ 000e81d0 1838
.org 0xe81d2
	b.n 0xe81d8	@ 000e81d2 01e0
.org 0xe81d4
	ldrb r0, [r4, #18]	@ 000e81d4 a07c
.org 0xe81d6
	adds r0, #24	@ 000e81d6 1830
.org 0xe81d8
	strb r0, [r4, #18]	@ 000e81d8 a074
.org 0xe81da
	ldr r0, [r4, #84]	@ 000e81da 606d
.org 0xe81dc
	ldr r1, [r4, #88]	@ 000e81dc a16d
.org 0xe81de
	bl 0x7c7c	@ 000e81de 1ff74dfd
.org 0xe81e2
	lsls r0, r0, #16	@ 000e81e2 0004
.org 0xe81e4
	adds r5, r4, #0	@ 000e81e4 251c
.org 0xe81e6
	adds r5, #124	@ 000e81e6 7c35
.org 0xe81e8
	cmp r0, #0	@ 000e81e8 0028
.org 0xe81ea
	beq.n 0xe827e	@ 000e81ea 48d0
.org 0xe81ec
	ldrb r0, [r5, #0]	@ 000e81ec 2878
.org 0xe81ee
	cmp r0, #0	@ 000e81ee 0028
.org 0xe81f0
	bne.n 0xe826c	@ 000e81f0 3cd1
.org 0xe81f2
	ldr r2, [pc, #116]	@ 000e81f2 1d4a
.org 0xe81f4
	adds r0, r2, #0	@ 000e81f4 101c
.org 0xe81f6
	adds r0, #236	@ 000e81f6 ec30
.org 0xe81f8
	movs r3, #0	@ 000e81f8 0023
.org 0xe81fa
	ldrsh r1, [r0, r3]	@ 000e81fa c15e
.org 0xe81fc
	lsls r0, r1, #3	@ 000e81fc c800
.org 0xe81fe
	subs r0, r0, r1	@ 000e81fe 401a
.org 0xe8200
	lsls r0, r0, #7	@ 000e8200 c001
.org 0xe8202
	cmp r0, #0	@ 000e8202 0028
.org 0xe8204
	bge.n 0xe8208	@ 000e8204 00da
.org 0xe8206
	adds r0, #255	@ 000e8206 ff30
.org 0xe8208
	asrs r3, r0, #8	@ 000e8208 0312
.org 0xe820a
	str r3, [r4, #92]	@ 000e820a e365
.org 0xe820c
	adds r0, r2, #0	@ 000e820c 101c
.org 0xe820e
	adds r0, #108	@ 000e820e 6c30
.org 0xe8210
	movs r2, #0	@ 000e8210 0022
.org 0xe8212
	ldrsh r1, [r0, r2]	@ 000e8212 815e
.org 0xe8214
	lsls r0, r1, #3	@ 000e8214 c800
.org 0xe8216
	subs r0, r0, r1	@ 000e8216 401a
.org 0xe8218
	lsls r0, r0, #7	@ 000e8218 c001
.org 0xe821a
	cmp r0, #0	@ 000e821a 0028
.org 0xe821c
	bge.n 0xe8220	@ 000e821c 00da
.org 0xe821e
	adds r0, #255	@ 000e821e ff30
.org 0xe8220
	asrs r0, r0, #8	@ 000e8220 0012
.org 0xe8222
	str r0, [r4, #96]	@ 000e8222 2066
.org 0xe8224
	lsls r0, r0, #8	@ 000e8224 0002
.org 0xe8226
	negs r0, r0	@ 000e8226 4042
.org 0xe8228
	cmp r0, #0	@ 000e8228 0028
.org 0xe822a
	bge.n 0xe822e	@ 000e822a 00da
.org 0xe822c
	adds r0, #255	@ 000e822c ff30
.org 0xe822e
	asrs r0, r0, #8	@ 000e822e 0012
.org 0xe8230
	str r0, [r4, #96]	@ 000e8230 2066
.org 0xe8232
	ldrb r0, [r4, #17]	@ 000e8232 607c
.org 0xe8234
	cmp r0, #0	@ 000e8234 0028
.org 0xe8236
	bne.n 0xe8246	@ 000e8236 06d1
.org 0xe8238
	lsls r0, r3, #8	@ 000e8238 1802
.org 0xe823a
	negs r0, r0	@ 000e823a 4042
.org 0xe823c
	cmp r0, #0	@ 000e823c 0028
.org 0xe823e
	bge.n 0xe8242	@ 000e823e 00da
.org 0xe8240
	adds r0, #255	@ 000e8240 ff30
.org 0xe8242
	asrs r0, r0, #8	@ 000e8242 0012
.org 0xe8244
	str r0, [r4, #92]	@ 000e8244 e065
.org 0xe8246
	ldrb r1, [r4, #10]	@ 000e8246 a17a
.org 0xe8248
	movs r0, #16	@ 000e8248 1020
.org 0xe824a
	ands r0, r1	@ 000e824a 0840
.org 0xe824c
	cmp r0, #0	@ 000e824c 0028
.org 0xe824e
	beq.n 0xe8260	@ 000e824e 07d0
.org 0xe8250
	ldr r0, [r4, #92]	@ 000e8250 e06d
.org 0xe8252
	lsls r0, r0, #8	@ 000e8252 0002
.org 0xe8254
	negs r0, r0	@ 000e8254 4042
.org 0xe8256
	cmp r0, #0	@ 000e8256 0028
.org 0xe8258
	bge.n 0xe825c	@ 000e8258 00da
.org 0xe825a
	adds r0, #255	@ 000e825a ff30
.org 0xe825c
	asrs r0, r0, #8	@ 000e825c 0012
.org 0xe825e
	str r0, [r4, #92]	@ 000e825e e065
.org 0xe8260
	movs r0, #1	@ 000e8260 0120
.org 0xe8262
	strb r0, [r5, #0]	@ 000e8262 2870
.org 0xe8264
	b.n 0xe827e	@ 000e8264 0be0
.org 0xe8266
	.byte 0x00	@ 000e8266 data
.org 0xe8267
	.byte 0x00	@ 000e8267 data
.org 0xe8268
	.byte 0x0c,0x93,0x12,0x08	@ 000e8268 data
.org 0xe826c
	ldr r1, [pc, #44]	@ 000e826c 0b49
.org 0xe826e
	ldrb r0, [r4, #9]	@ 000e826e 607a
.org 0xe8270
	lsls r0, r0, #2	@ 000e8270 8000
.org 0xe8272
	adds r0, r0, r1	@ 000e8272 4018
.org 0xe8274
	movs r1, #2	@ 000e8274 0221
.org 0xe8276
	str r1, [r4, #12]	@ 000e8276 e160
.org 0xe8278
	ldr r0, [r0, #0]	@ 000e8278 0068
.org 0xe827a
	ldr r0, [r0, #8]	@ 000e827a 8068
.org 0xe827c
	str r0, [r4, #20]	@ 000e827c 6061
.org 0xe827e
	ldrb r3, [r5, #0]	@ 000e827e 2b78
.org 0xe8280
	cmp r3, #1	@ 000e8280 012b
.org 0xe8282
	bne.n 0xe82ac	@ 000e8282 13d1
.org 0xe8284
	adds r2, r4, #0	@ 000e8284 221c
.org 0xe8286
	adds r2, #125	@ 000e8286 7d32
.org 0xe8288
	ldrb r0, [r2, #0]	@ 000e8288 1078
.org 0xe828a
	cmp r0, #0	@ 000e828a 0028
.org 0xe828c
	bne.n 0xe82a0	@ 000e828c 08d1
.org 0xe828e
	ldrb r1, [r4, #10]	@ 000e828e a17a
.org 0xe8290
	movs r0, #1	@ 000e8290 0120
.org 0xe8292
	orrs r0, r1	@ 000e8292 0843
.org 0xe8294
	strb r0, [r4, #10]	@ 000e8294 a072
.org 0xe8296
	strb r3, [r2, #0]	@ 000e8296 1370
.org 0xe8298
	b.n 0xe82ac	@ 000e8298 08e0
.org 0xe829a
	.byte 0x00	@ 000e829a data
.org 0xe829b
	.byte 0x00	@ 000e829b data
.org 0xe829c
	.byte 0x64,0x6f,0x86,0x08	@ 000e829c data
.org 0xe82a0
	ldrb r0, [r4, #10]	@ 000e82a0 a07a
.org 0xe82a2
	movs r1, #254	@ 000e82a2 fe21
.org 0xe82a4
	ands r1, r0	@ 000e82a4 0140
