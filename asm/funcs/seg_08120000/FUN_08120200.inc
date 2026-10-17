@ FUN_08120200  entry 0x08120200  size 296
.thumb
.org 0x120200
FUN_08120200:
	push {r4, r5, r6, r7, lr}	@ 00120200 f0b5
.org 0x120202
	mov r7, r8	@ 00120202 4746
.org 0x120204
	push {r7}	@ 00120204 80b4
.org 0x120206
	adds r5, r0, #0	@ 00120206 051c
.org 0x120208
	bl 0x120b58	@ 00120208 00f0a6fc
.org 0x12020c
	movs r4, #0	@ 0012020c 0024
.org 0x12020e
	ldr r7, [pc, #12]	@ 0012020e 034f
.org 0x120210
	ldr r0, [pc, #12]	@ 00120210 0348
.org 0x120212
	adds r0, r0, r7	@ 00120212 c019
.org 0x120214
	mov r8, r0	@ 00120214 8046
.org 0x120216
	ldr r6, [pc, #12]	@ 00120216 034e
.org 0x120218
	b.n 0x120248	@ 00120218 16e0
.org 0x12021a
	.byte 0x00	@ 0012021a data
.org 0x12021b
	.byte 0x00	@ 0012021b data
.org 0x12021c
	.byte 0xf8,0xcf,0x86,0x08	@ 0012021c data
.org 0x120220
	.byte 0xbe,0x03,0x00,0x00	@ 00120220 data
.org 0x120224
	.byte 0x5f,0x0e,0x01,0x09	@ 00120224 data
.org 0x120228
	ldrb r0, [r1, #0]	@ 00120228 0878
.org 0x12022a
	movs r1, #150	@ 0012022a 9621
.org 0x12022c
	lsls r1, r1, #2	@ 0012022c 8900
.org 0x12022e
	adds r0, r0, r1	@ 0012022e 4018
.org 0x120230
	lsls r0, r0, #1	@ 00120230 4000
.org 0x120232
	adds r0, r0, r7	@ 00120232 c019
.org 0x120234
	ldrh r0, [r0, #0]	@ 00120234 0088
.org 0x120236
	adds r0, r0, r6	@ 00120236 8019
.org 0x120238
	lsls r2, r4, #1	@ 00120238 6200
.org 0x12023a
	adds r2, #2	@ 0012023a 0232
.org 0x12023c
	movs r1, #2	@ 0012023c 0221
.org 0x12023e
	bl 0x10d85c	@ 0012023e edf70dfb
.org 0x120242
	adds r0, r4, #1	@ 00120242 601c
.org 0x120244
	lsls r0, r0, #24	@ 00120244 0006
.org 0x120246
	lsrs r4, r0, #24	@ 00120246 040e
.org 0x120248
	cmp r4, #6	@ 00120248 062c
.org 0x12024a
	bhi.n 0x12026a	@ 0012024a 0ed8
.org 0x12024c
	ldr r2, [pc, #132]	@ 0012024c 214a
.org 0x12024e
	adds r0, r5, r2	@ 0012024e a818
.org 0x120250
	adds r1, r0, r4	@ 00120250 0119
.org 0x120252
	ldrb r0, [r1, #0]	@ 00120252 0878
.org 0x120254
	cmp r0, #255	@ 00120254 ff28
.org 0x120256
	bne.n 0x120228	@ 00120256 e7d1
.org 0x120258
	cmp r4, #0	@ 00120258 002c
.org 0x12025a
	bne.n 0x12026a	@ 0012025a 06d1
.org 0x12025c
	mov r1, r8	@ 0012025c 4146
.org 0x12025e
	ldrh r0, [r1, #0]	@ 0012025e 0888
.org 0x120260
	adds r0, r0, r6	@ 00120260 8019
.org 0x120262
	movs r1, #2	@ 00120262 0221
.org 0x120264
	movs r2, #2	@ 00120264 0222
.org 0x120266
	bl 0x10d85c	@ 00120266 edf7f9fa
.org 0x12026a
	ldrb r0, [r5, #3]	@ 0012026a e878
.org 0x12026c
	cmp r0, #1	@ 0012026c 0128
.org 0x12026e
	bhi.n 0x1202e8	@ 0012026e 3bd8
.org 0x120270
	movs r4, #0	@ 00120270 0024
.org 0x120272
	movs r6, #0	@ 00120272 0026
.org 0x120274
	ldr r5, [pc, #96]	@ 00120274 184d
.org 0x120276
	movs r3, #7	@ 00120276 0723
.org 0x120278
	movs r2, #1	@ 00120278 0122
.org 0x12027a
	adds r0, r4, #0	@ 0012027a 201c
.org 0x12027c
	adds r0, #76	@ 0012027c 4c30
.org 0x12027e
	asrs r1, r0, #3	@ 0012027e c110
.org 0x120280
	adds r1, r1, r5	@ 00120280 4919
.org 0x120282
	ldrb r1, [r1, #0]	@ 00120282 0978
.org 0x120284
	ands r0, r3	@ 00120284 1840
.org 0x120286
	asrs r1, r0	@ 00120286 0141
.org 0x120288
	ands r1, r2	@ 00120288 1140
.org 0x12028a
	cmp r1, #0	@ 0012028a 0029
.org 0x12028c
	beq.n 0x120294	@ 0012028c 02d0
.org 0x12028e
	adds r0, r6, #1	@ 0012028e 701c
.org 0x120290
	lsls r0, r0, #24	@ 00120290 0006
.org 0x120292
	lsrs r6, r0, #24	@ 00120292 060e
.org 0x120294
	adds r0, r4, #1	@ 00120294 601c
.org 0x120296
	lsls r0, r0, #24	@ 00120296 0006
.org 0x120298
	lsrs r4, r0, #24	@ 00120298 040e
.org 0x12029a
	cmp r4, #7	@ 0012029a 072c
.org 0x12029c
	bls.n 0x12027a	@ 0012029c edd9
.org 0x12029e
	adds r0, r6, #0	@ 0012029e 301c
.org 0x1202a0
	movs r1, #21	@ 001202a0 1521
.org 0x1202a2
	movs r2, #1	@ 001202a2 0122
.org 0x1202a4
	bl 0x118348	@ 001202a4 f8f750f8
.org 0x1202a8
	ldr r4, [pc, #48]	@ 001202a8 0c4c
.org 0x1202aa
	ldrh r0, [r4, #12]	@ 001202aa a089
.org 0x1202ac
	ldr r5, [pc, #48]	@ 001202ac 0c4d
.org 0x1202ae
	adds r0, r0, r5	@ 001202ae 4019
.org 0x1202b0
	movs r1, #22	@ 001202b0 1621
.org 0x1202b2
	movs r2, #1	@ 001202b2 0122
.org 0x1202b4
	bl 0x10d85c	@ 001202b4 edf7d2fa
.org 0x1202b8
	movs r0, #8	@ 001202b8 0820
.org 0x1202ba
	movs r1, #23	@ 001202ba 1721
.org 0x1202bc
	movs r2, #1	@ 001202bc 0122
.org 0x1202be
	bl 0x118348	@ 001202be f8f743f8
.org 0x1202c2
	ldr r2, [pc, #32]	@ 001202c2 084a
.org 0x1202c4
	adds r4, r4, r2	@ 001202c4 a418
.org 0x1202c6
	ldrh r0, [r4, #0]	@ 001202c6 2088
.org 0x1202c8
	adds r0, r0, r5	@ 001202c8 4019
.org 0x1202ca
	movs r1, #17	@ 001202ca 1121
.org 0x1202cc
	movs r2, #5	@ 001202cc 0522
.org 0x1202ce
	bl 0x10d85c	@ 001202ce edf7c5fa
.org 0x1202d2
	b.n 0x120354	@ 001202d2 3fe0
.org 0x1202d4
	.byte 0xd2,0x0d,0x00,0x00	@ 001202d4 data
.org 0x1202d8
	.byte 0x70,0x0a,0x00,0x02	@ 001202d8 data
.org 0x1202dc
	.byte 0xf8,0xcf,0x86,0x08	@ 001202dc data
.org 0x1202e0
	.byte 0x5f,0x0e,0x01,0x09	@ 001202e0 data
.org 0x1202e4
	.byte 0x72,0x05,0x00,0x00	@ 001202e4 data
.org 0x1202e8
	ldr r0, [pc, #36]	@ 001202e8 0948
.org 0x1202ea
	adds r1, r5, r0	@ 001202ea 2918
.org 0x1202ec
	ldr r2, [pc, #36]	@ 001202ec 094a
.org 0x1202ee
	adds r0, r5, r2	@ 001202ee a818
.org 0x1202f0
	ldrb r1, [r1, #2]	@ 001202f0 8978
.org 0x1202f2
	adds r0, r0, r1	@ 001202f2 4018
.org 0x1202f4
	ldrb r6, [r0, #0]	@ 001202f4 0678
.org 0x1202f6
	cmp r6, #255	@ 001202f6 ff2e
.org 0x1202f8
	bne.n 0x120324	@ 001202f8 14d1
.org 0x1202fa
	ldr r0, [pc, #28]	@ 001202fa 0748
.org 0x1202fc
	ldr r1, [pc, #28]	@ 001202fc 0749
.org 0x1202fe
	adds r0, r0, r1	@ 001202fe 4018
.org 0x120300
	ldrh r0, [r0, #0]	@ 00120300 0088
.org 0x120302
	ldr r1, [pc, #28]	@ 00120302 0749
.org 0x120304
	adds r0, r0, r1	@ 00120304 4018
.org 0x120306
	movs r1, #17	@ 00120306 1121
.org 0x120308
	movs r2, #1	@ 00120308 0122
.org 0x12030a
	bl 0x10d85c	@ 0012030a edf7a7fa
.org 0x12030e
	b.n 0x120354	@ 0012030e 21e0
.org 0x120310
	.byte 0xcc,0x0d,0x00,0x00	@ 00120310 data
.org 0x120314
	.byte 0xd2,0x0d,0x00,0x00	@ 00120314 data
.org 0x120318
	.byte 0xf8,0xcf,0x86,0x08	@ 00120318 data
.org 0x12031c
	.byte 0xbe,0x03,0x00,0x00	@ 0012031c data
.org 0x120320
	.byte 0x5f,0x0e,0x01,0x09	@ 00120320 data
.org 0x120324
	ldr r5, [pc, #56]	@ 00120324 0e4d
.org 0x120326
	movs r2, #150	@ 00120326 9622
