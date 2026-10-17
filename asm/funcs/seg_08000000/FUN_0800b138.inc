@ FUN_0800b138  entry 0x0800b138  size 462
.thumb
.org 0xb138
FUN_0800b138:
	push {r4, r5, r6, r7, lr}	@ 0000b138 f0b5
.org 0xb13a
	adds r6, r0, #0	@ 0000b13a 061c
.org 0xb13c
	ldr r0, [r6, #92]	@ 0000b13c f06d
.org 0xb13e
	lsls r0, r0, #16	@ 0000b13e 0004
.org 0xb140
	ldrb r5, [r6, #14]	@ 0000b140 b57b
.org 0xb142
	ldr r7, [pc, #100]	@ 0000b142 194f
.org 0xb144
	cmp r5, #0	@ 0000b144 002d
.org 0xb146
	bne.n 0xb18a	@ 0000b146 20d1
.org 0xb148
	lsrs r3, r0, #20	@ 0000b148 030d
.org 0xb14a
	lsls r2, r3, #1	@ 0000b14a 5a00
.org 0xb14c
	ldr r4, [pc, #92]	@ 0000b14c 174c
.org 0xb14e
	adds r2, r2, r4	@ 0000b14e 1219
.org 0xb150
	ldrh r1, [r2, #0]	@ 0000b150 1188
.org 0xb152
	ldr r0, [pc, #92]	@ 0000b152 1748
.org 0xb154
	ands r0, r1	@ 0000b154 0840
.org 0xb156
	movs r1, #2	@ 0000b156 0221
.org 0xb158
	orrs r0, r1	@ 0000b158 0843
.org 0xb15a
	strh r0, [r2, #0]	@ 0000b15a 1080
.org 0xb15c
	ldrh r1, [r7, #0]	@ 0000b15c 3988
.org 0xb15e
	movs r2, #128	@ 0000b15e 8022
.org 0xb160
	lsls r2, r2, #7	@ 0000b160 d201
.org 0xb162
	adds r0, r2, #0	@ 0000b162 101c
.org 0xb164
	orrs r0, r1	@ 0000b164 0843
.org 0xb166
	strh r0, [r7, #0]	@ 0000b166 3880
.org 0xb168
	movs r0, #1	@ 0000b168 0120
.org 0xb16a
	negs r0, r0	@ 0000b16a 4042
.org 0xb16c
	strb r0, [r7, #13]	@ 0000b16c 7873
.org 0xb16e
	strh r5, [r7, #6]	@ 0000b16e fd80
.org 0xb170
	movs r0, #255	@ 0000b170 ff20
.org 0xb172
	strh r0, [r7, #10]	@ 0000b172 7881
.org 0xb174
	str r5, [r6, #104]	@ 0000b174 b566
.org 0xb176
	str r5, [r6, #108]	@ 0000b176 f566
.org 0xb178
	strh r5, [r6, #16]	@ 0000b178 3582
.org 0xb17a
	strh r5, [r6, #18]	@ 0000b17a 7582
.org 0xb17c
	lsls r3, r3, #2	@ 0000b17c 9b00
.org 0xb17e
	adds r4, #8	@ 0000b17e 0834
.org 0xb180
	adds r3, r3, r4	@ 0000b180 1b19
.org 0xb182
	str r5, [r3, #0]	@ 0000b182 1d60
.org 0xb184
	ldrb r0, [r6, #14]	@ 0000b184 b07b
.org 0xb186
	adds r0, #1	@ 0000b186 0130
.org 0xb188
	strb r0, [r6, #14]	@ 0000b188 b073
.org 0xb18a
	ldr r0, [pc, #40]	@ 0000b18a 0a48
.org 0xb18c
	ldr r1, [pc, #40]	@ 0000b18c 0a49
.org 0xb18e
	adds r0, r0, r1	@ 0000b18e 4018
.org 0xb190
	ldr r0, [r0, #0]	@ 0000b190 0068
.org 0xb192
	ldr r1, [r0, #84]	@ 0000b192 416d
.org 0xb194
	ldr r2, [r6, #52]	@ 0000b194 726b
.org 0xb196
	ldr r0, [pc, #36]	@ 0000b196 0948
.org 0xb198
	cmp r2, r0	@ 0000b198 8242
.org 0xb19a
	bgt.n 0xb1ca	@ 0000b19a 16dc
.org 0xb19c
	ldr r0, [pc, #32]	@ 0000b19c 0848
.org 0xb19e
	cmp r1, r0	@ 0000b19e 8142
.org 0xb1a0
	bgt.n 0xb1c4	@ 0000b1a0 10dc
.org 0xb1a2
	adds r0, #1	@ 0000b1a2 0130
.org 0xb1a4
	subs r1, r0, r1	@ 0000b1a4 411a
.org 0xb1a6
	b.n 0xb1c6	@ 0000b1a6 0ee0
.org 0xb1a8
	.byte 0x50,0x0a,0x00,0x02	@ 0000b1a8 data
.org 0xb1ac
	.byte 0x04,0x0a,0x00,0x02	@ 0000b1ac data
.org 0xb1b0
	.byte 0xfc,0xff,0x00,0x00	@ 0000b1b0 data
.org 0xb1b4
	.byte 0x10,0xf6,0x02,0x02	@ 0000b1b4 data
.org 0xb1b8
	.byte 0xa8,0x63,0x00,0x00	@ 0000b1b8 data
.org 0xb1bc
	.byte 0xdf,0x01,0x00,0x00	@ 0000b1bc data
.org 0xb1c0
	.byte 0xff,0xd7,0x01,0x00	@ 0000b1c0 data
.org 0xb1c4
	movs r1, #0	@ 0000b1c4 0021
.org 0xb1c6
	movs r4, #255	@ 0000b1c6 ff24
.org 0xb1c8
	b.n 0xb2b2	@ 0000b1c8 73e0
.org 0xb1ca
	ldr r0, [pc, #36]	@ 0000b1ca 0948
.org 0xb1cc
	cmp r2, r0	@ 0000b1cc 8242
.org 0xb1ce
	bgt.n 0xb202	@ 0000b1ce 18dc
.org 0xb1d0
	movs r0, #251	@ 0000b1d0 fb20
.org 0xb1d2
	strb r0, [r7, #13]	@ 0000b1d2 7873
.org 0xb1d4
	movs r0, #253	@ 0000b1d4 fd20
.org 0xb1d6
	strb r0, [r7, #14]	@ 0000b1d6 b873
.org 0xb1d8
	movs r0, #173	@ 0000b1d8 ad20
.org 0xb1da
	lsls r0, r0, #11	@ 0000b1da c002
.org 0xb1dc
	cmp r1, r0	@ 0000b1dc 8142
.org 0xb1de
	ble.n 0xb1f8	@ 0000b1de 0bdd
.org 0xb1e0
	movs r0, #188	@ 0000b1e0 bc20
.org 0xb1e2
	lsls r0, r0, #11	@ 0000b1e2 c002
.org 0xb1e4
	subs r0, r0, r1	@ 0000b1e4 401a
.org 0xb1e6
	asrs r4, r0, #8	@ 0000b1e6 0412
.org 0xb1e8
	ldr r2, [pc, #8]	@ 0000b1e8 024a
.org 0xb1ea
	adds r1, r1, r2	@ 0000b1ea 8918
.org 0xb1ec
	b.n 0xb2b2	@ 0000b1ec 61e0
.org 0xb1ee
	.byte 0x00	@ 0000b1ee data
.org 0xb1ef
	.byte 0x00	@ 0000b1ef data
.org 0xb1f0
	.byte 0x9f,0x05,0x00,0x00	@ 0000b1f0 data
.org 0xb1f4
	.byte 0x00,0x98,0xfa,0xff	@ 0000b1f4 data
.org 0xb1f8
	movs r0, #188	@ 0000b1f8 bc20
.org 0xb1fa
	lsls r0, r0, #11	@ 0000b1fa c002
.org 0xb1fc
	subs r0, r0, r1	@ 0000b1fc 401a
.org 0xb1fe
	asrs r4, r0, #8	@ 0000b1fe 0412
.org 0xb200
	b.n 0xb2b0	@ 0000b200 56e0
.org 0xb202
	ldr r0, [pc, #36]	@ 0000b202 0948
.org 0xb204
	cmp r1, r0	@ 0000b204 8142
.org 0xb206
	bgt.n 0xb23e	@ 0000b206 1adc
.org 0xb208
	movs r0, #251	@ 0000b208 fb20
.org 0xb20a
	strb r0, [r7, #13]	@ 0000b20a 7873
.org 0xb20c
	movs r0, #253	@ 0000b20c fd20
.org 0xb20e
	strb r0, [r7, #14]	@ 0000b20e b873
.org 0xb210
	movs r0, #253	@ 0000b210 fd20
.org 0xb212
	lsls r0, r0, #11	@ 0000b212 c002
.org 0xb214
	cmp r1, r0	@ 0000b214 8142
.org 0xb216
	ble.n 0xb230	@ 0000b216 0bdd
.org 0xb218
	movs r0, #134	@ 0000b218 8620
.org 0xb21a
	lsls r0, r0, #12	@ 0000b21a 0003
.org 0xb21c
	subs r0, r0, r1	@ 0000b21c 401a
.org 0xb21e
	asrs r4, r0, #8	@ 0000b21e 0412
.org 0xb220
	ldr r0, [pc, #8]	@ 0000b220 0248
.org 0xb222
	adds r1, r1, r0	@ 0000b222 0918
.org 0xb224
	b.n 0xb2b2	@ 0000b224 45e0
.org 0xb226
	.byte 0x00	@ 0000b226 data
.org 0xb227
	.byte 0x00	@ 0000b227 data
.org 0xb228
	.byte 0xff,0x5f,0x09,0x00	@ 0000b228 data
.org 0xb22c
	.byte 0x00,0x18,0xf8,0xff	@ 0000b22c data
.org 0xb230
	movs r0, #134	@ 0000b230 8620
.org 0xb232
	lsls r0, r0, #12	@ 0000b232 0003
.org 0xb234
	subs r0, r0, r1	@ 0000b234 401a
.org 0xb236
	asrs r4, r0, #8	@ 0000b236 0412
.org 0xb238
	movs r1, #0	@ 0000b238 0021
.org 0xb23a
	strh r1, [r6, #18]	@ 0000b23a 7182
.org 0xb23c
	b.n 0xb2b2	@ 0000b23c 39e0
.org 0xb23e
	ldr r0, [pc, #32]	@ 0000b23e 0848
.org 0xb240
	cmp r1, r0	@ 0000b240 8142
.org 0xb242
	bgt.n 0xb276	@ 0000b242 18dc
.org 0xb244
	movs r0, #251	@ 0000b244 fb20
.org 0xb246
	strb r0, [r7, #13]	@ 0000b246 7873
.org 0xb248
	movs r0, #253	@ 0000b248 fd20
.org 0xb24a
	strb r0, [r7, #14]	@ 0000b24a b873
.org 0xb24c
	ldr r0, [pc, #20]	@ 0000b24c 0548
.org 0xb24e
	cmp r1, r0	@ 0000b24e 8142
.org 0xb250
	ble.n 0xb26c	@ 0000b250 0cdd
.org 0xb252
	movs r0, #192	@ 0000b252 c020
.org 0xb254
	lsls r0, r0, #12	@ 0000b254 0003
.org 0xb256
	subs r0, r0, r1	@ 0000b256 401a
.org 0xb258
	asrs r4, r0, #8	@ 0000b258 0412
.org 0xb25a
	ldr r2, [pc, #12]	@ 0000b25a 034a
.org 0xb25c
	adds r1, r1, r2	@ 0000b25c 8918
.org 0xb25e
	b.n 0xb2b2	@ 0000b25e 28e0
.org 0xb260
	.byte 0xff,0x1f,0x0d,0x00	@ 0000b260 data
.org 0xb264
	.byte 0x00,0x88,0x0b,0x00	@ 0000b264 data
.org 0xb268
	.byte 0x00,0x78,0xf4,0xff	@ 0000b268 data
.org 0xb26c
	movs r0, #192	@ 0000b26c c020
.org 0xb26e
	lsls r0, r0, #12	@ 0000b26e 0003
.org 0xb270
	subs r0, r0, r1	@ 0000b270 401a
.org 0xb272
	asrs r4, r0, #8	@ 0000b272 0412
.org 0xb274
	b.n 0xb2b0	@ 0000b274 1ce0
.org 0xb276
	ldr r0, [pc, #32]	@ 0000b276 0848
.org 0xb278
	cmp r1, r0	@ 0000b278 8142
.org 0xb27a
	bgt.n 0xb2ae	@ 0000b27a 18dc
.org 0xb27c
	movs r0, #251	@ 0000b27c fb20
.org 0xb27e
	strb r0, [r7, #13]	@ 0000b27e 7873
.org 0xb280
	movs r0, #253	@ 0000b280 fd20
.org 0xb282
	strb r0, [r7, #14]	@ 0000b282 b873
.org 0xb284
	ldr r0, [pc, #20]	@ 0000b284 0548
.org 0xb286
	cmp r1, r0	@ 0000b286 8142
.org 0xb288
	ble.n 0xb2a4	@ 0000b288 0cdd
.org 0xb28a
	movs r0, #250	@ 0000b28a fa20
.org 0xb28c
	lsls r0, r0, #12	@ 0000b28c 0003
.org 0xb28e
	subs r0, r0, r1	@ 0000b28e 401a
.org 0xb290
	asrs r4, r0, #8	@ 0000b290 0412
.org 0xb292
	ldr r0, [pc, #12]	@ 0000b292 0348
.org 0xb294
	adds r1, r1, r0	@ 0000b294 0918
.org 0xb296
	b.n 0xb2b2	@ 0000b296 0ce0
.org 0xb298
	.byte 0xff,0xdf,0x10,0x00	@ 0000b298 data
.org 0xb29c
	.byte 0x00,0x28,0x0f,0x00	@ 0000b29c data
.org 0xb2a0
	.byte 0x00,0xd8,0xf0,0xff	@ 0000b2a0 data
.org 0xb2a4
	movs r0, #250	@ 0000b2a4 fa20
.org 0xb2a6
	lsls r0, r0, #12	@ 0000b2a6 0003
.org 0xb2a8
	subs r0, r0, r1	@ 0000b2a8 401a
.org 0xb2aa
	asrs r4, r0, #8	@ 0000b2aa 0412
.org 0xb2ac
	b.n 0xb2b0	@ 0000b2ac 00e0
.org 0xb2ae
	movs r4, #255	@ 0000b2ae ff24
.org 0xb2b0
	movs r1, #0	@ 0000b2b0 0021
.org 0xb2b2
	movs r2, #0	@ 0000b2b2 0022
.org 0xb2b4
	str r2, [r6, #108]	@ 0000b2b4 f266
.org 0xb2b6
	movs r0, #128	@ 0000b2b6 8020
.org 0xb2b8
	lsls r0, r0, #5	@ 0000b2b8 4001
.org 0xb2ba
	cmp r1, r0	@ 0000b2ba 8142
.org 0xb2bc
	ble.n 0xb2d6	@ 0000b2bc 0bdd
.org 0xb2be
	ldrh r0, [r6, #16]	@ 0000b2be 308a
.org 0xb2c0
	cmp r0, #0	@ 0000b2c0 0028
.org 0xb2c2
	beq.n 0xb2c8	@ 0000b2c2 01d0
.org 0xb2c4
	subs r0, #32	@ 0000b2c4 2038
.org 0xb2c6
	strh r0, [r6, #16]	@ 0000b2c6 3082
.org 0xb2c8
	movs r3, #2	@ 0000b2c8 0223
.org 0xb2ca
	ldrh r0, [r6, #18]	@ 0000b2ca 708a
.org 0xb2cc
	adds r0, #3	@ 0000b2cc 0330
.org 0xb2ce
	movs r1, #255	@ 0000b2ce ff21
.org 0xb2d0
	ands r0, r1	@ 0000b2d0 0840
.org 0xb2d2
	strh r0, [r6, #18]	@ 0000b2d2 7082
.org 0xb2d4
	b.n 0xb2f8	@ 0000b2d4 10e0
.org 0xb2d6
	movs r3, #2	@ 0000b2d6 0223
.org 0xb2d8
	ldrh r0, [r6, #18]	@ 0000b2d8 708a
.org 0xb2da
	cmp r0, #0	@ 0000b2da 0028
.org 0xb2dc
	beq.n 0xb2f8	@ 0000b2dc 0cd0
.org 0xb2de
	adds r1, r0, #0	@ 0000b2de 011c
.org 0xb2e0
	adds r1, #9	@ 0000b2e0 0931
.org 0xb2e2
	strh r1, [r6, #18]	@ 0000b2e2 7182
.org 0xb2e4
	subs r0, #119	@ 0000b2e4 7738
.org 0xb2e6
	lsls r0, r0, #16	@ 0000b2e6 0004
.org 0xb2e8
	lsrs r0, r0, #16	@ 0000b2e8 000c
.org 0xb2ea
	cmp r0, #15	@ 0000b2ea 0f28
.org 0xb2ec
	bls.n 0xb2f6	@ 0000b2ec 03d9
.org 0xb2ee
	lsls r0, r1, #16	@ 0000b2ee 0804
.org 0xb2f0
	lsrs r0, r0, #16	@ 0000b2f0 000c
.org 0xb2f2
	cmp r0, #255	@ 0000b2f2 ff28
.org 0xb2f4
	bls.n 0xb2f8	@ 0000b2f4 00d9
.org 0xb2f6
	strh r2, [r6, #18]	@ 0000b2f6 7282
.org 0xb2f8
	ldr r1, [pc, #56]	@ 0000b2f8 0e49
.org 0xb2fa
	ldrb r0, [r6, #18]	@ 0000b2fa b07c
.org 0xb2fc
	lsls r0, r0, #1	@ 0000b2fc 4000
.org 0xb2fe
	adds r0, r0, r1	@ 0000b2fe 4018
.org 0xb300
	movs r2, #0	@ 0000b300 0022
.org 0xb302
	ldrsh r1, [r0, r2]	@ 0000b302 815e
.org 0xb304
	lsls r0, r3, #24	@ 0000b304 1806
