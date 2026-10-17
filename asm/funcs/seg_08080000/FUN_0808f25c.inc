@ FUN_0808f25c  entry 0x0808f25c  size 182
.thumb
.org 0x8f25c
FUN_0808f25c:
	push {r4, r5, lr}	@ 0008f25c 30b5
.org 0x8f25e
	adds r4, r0, #0	@ 0008f25e 041c
.org 0x8f260
	ldrb r3, [r4, #15]	@ 0008f260 e37b
.org 0x8f262
	cmp r3, #0	@ 0008f262 002b
.org 0x8f264
	bne.n 0x8f27e	@ 0008f264 0bd1
.org 0x8f266
	adds r2, r4, #0	@ 0008f266 221c
.org 0x8f268
	adds r2, #192	@ 0008f268 c032
.org 0x8f26a
	ldr r0, [r2, #0]	@ 0008f26a 1068
.org 0x8f26c
	adds r0, #180	@ 0008f26c b430
.org 0x8f26e
	movs r1, #2	@ 0008f26e 0221
.org 0x8f270
	strb r1, [r0, #0]	@ 0008f270 0170
.org 0x8f272
	ldr r0, [r2, #0]	@ 0008f272 1068
.org 0x8f274
	adds r0, #182	@ 0008f274 b630
.org 0x8f276
	strb r3, [r0, #0]	@ 0008f276 0370
.org 0x8f278
	ldrb r0, [r4, #15]	@ 0008f278 e07b
.org 0x8f27a
	adds r0, #1	@ 0008f27a 0130
.org 0x8f27c
	strb r0, [r4, #15]	@ 0008f27c e073
.org 0x8f27e
	adds r0, r4, #0	@ 0008f27e 201c
.org 0x8f280
	bl 0x1cff0	@ 0008f280 8df7b6fe
.org 0x8f284
	adds r0, r4, #0	@ 0008f284 201c
.org 0x8f286
	adds r0, #116	@ 0008f286 7430
.org 0x8f288
	ldr r3, [pc, #136]	@ 0008f288 224b
.org 0x8f28a
	ldrb r1, [r4, #30]	@ 0008f28a a17f
.org 0x8f28c
	lsls r1, r1, #8	@ 0008f28c 0902
.org 0x8f28e
	adds r2, r4, #0	@ 0008f28e 221c
.org 0x8f290
	adds r2, #112	@ 0008f290 7032
.org 0x8f292
	ldrb r2, [r2, #0]	@ 0008f292 1278
.org 0x8f294
	orrs r1, r2	@ 0008f294 1143
.org 0x8f296
	ldr r2, [pc, #128]	@ 0008f296 204a
.org 0x8f298
	adds r1, r1, r2	@ 0008f298 8918
.org 0x8f29a
	lsls r1, r1, #2	@ 0008f29a 8900
.org 0x8f29c
	adds r1, r1, r3	@ 0008f29c c918
.org 0x8f29e
	adds r2, r4, #0	@ 0008f29e 221c
.org 0x8f2a0
	adds r2, #113	@ 0008f2a0 7132
.org 0x8f2a2
	ldrb r2, [r2, #0]	@ 0008f2a2 1278
.org 0x8f2a4
	lsls r2, r2, #24	@ 0008f2a4 1206
.org 0x8f2a6
	asrs r2, r2, #24	@ 0008f2a6 1216
.org 0x8f2a8
	ldr r1, [r1, #0]	@ 0008f2a8 0968
.org 0x8f2aa
	lsls r2, r2, #2	@ 0008f2aa 9200
.org 0x8f2ac
	adds r2, r2, r1	@ 0008f2ac 5218
.org 0x8f2ae
	ldr r1, [r2, #0]	@ 0008f2ae 1168
.org 0x8f2b0
	ldrb r2, [r1, #0]	@ 0008f2b0 0a78
.org 0x8f2b2
	lsls r1, r2, #1	@ 0008f2b2 5100
.org 0x8f2b4
	adds r1, r1, r2	@ 0008f2b4 8918
.org 0x8f2b6
	lsls r1, r1, #3	@ 0008f2b6 c900
.org 0x8f2b8
	ldr r2, [pc, #96]	@ 0008f2b8 184a
.org 0x8f2ba
	adds r1, r1, r2	@ 0008f2ba 8918
.org 0x8f2bc
	bl 0x5784	@ 0008f2bc 76f762fa
.org 0x8f2c0
	adds r5, r4, #0	@ 0008f2c0 251c
.org 0x8f2c2
	adds r5, #192	@ 0008f2c2 c035
.org 0x8f2c4
	ldr r3, [r5, #0]	@ 0008f2c4 2b68
.org 0x8f2c6
	adds r0, r3, #0	@ 0008f2c6 181c
.org 0x8f2c8
	adds r0, #182	@ 0008f2c8 b630
.org 0x8f2ca
	ldrb r0, [r0, #0]	@ 0008f2ca 0078
.org 0x8f2cc
	cmp r0, #0	@ 0008f2cc 0028
.org 0x8f2ce
	beq.n 0x8f30c	@ 0008f2ce 1dd0
.org 0x8f2d0
	ldrb r1, [r3, #10]	@ 0008f2d0 997a
.org 0x8f2d2
	movs r0, #254	@ 0008f2d2 fe20
.org 0x8f2d4
	ands r0, r1	@ 0008f2d4 0840
.org 0x8f2d6
	movs r2, #0	@ 0008f2d6 0022
.org 0x8f2d8
	movs r1, #253	@ 0008f2d8 fd21
.org 0x8f2da
	ands r0, r1	@ 0008f2da 0840
.org 0x8f2dc
	strb r0, [r3, #10]	@ 0008f2dc 9872
.org 0x8f2de
	adds r0, r3, #0	@ 0008f2de 181c
.org 0x8f2e0
	adds r0, #140	@ 0008f2e0 8c30
.org 0x8f2e2
	str r2, [r0, #0]	@ 0008f2e2 0260
.org 0x8f2e4
	adds r0, #4	@ 0008f2e4 0430
.org 0x8f2e6
	str r2, [r0, #0]	@ 0008f2e6 0260
.org 0x8f2e8
	adds r0, #4	@ 0008f2e8 0430
.org 0x8f2ea
	strb r2, [r0, #0]	@ 0008f2ea 0270
.org 0x8f2ec
	ldrb r1, [r3, #10]	@ 0008f2ec 997a
.org 0x8f2ee
	movs r0, #251	@ 0008f2ee fb20
.org 0x8f2f0
	ands r0, r1	@ 0008f2f0 0840
.org 0x8f2f2
	strb r0, [r3, #10]	@ 0008f2f2 9872
.org 0x8f2f4
	ldr r1, [pc, #40]	@ 0008f2f4 0a49
.org 0x8f2f6
	ldrb r0, [r3, #9]	@ 0008f2f6 587a
.org 0x8f2f8
	lsls r0, r0, #2	@ 0008f2f8 8000
.org 0x8f2fa
	adds r0, r0, r1	@ 0008f2fa 4018
.org 0x8f2fc
	movs r1, #3	@ 0008f2fc 0321
.org 0x8f2fe
	str r1, [r3, #12]	@ 0008f2fe d960
.org 0x8f300
	ldr r0, [r0, #0]	@ 0008f300 0068
.org 0x8f302
	ldr r0, [r0, #12]	@ 0008f302 c068
.org 0x8f304
	str r0, [r3, #20]	@ 0008f304 5861
.org 0x8f306
	str r2, [r5, #0]	@ 0008f306 2a60
.org 0x8f308
	strb r1, [r4, #14]	@ 0008f308 a173
.org 0x8f30a
	strb r2, [r4, #15]	@ 0008f30a e273
.org 0x8f30c
	pop {r4, r5}	@ 0008f30c 30bc
.org 0x8f30e
	pop {r0}	@ 0008f30e 01bc
.org 0x8f310
	bx r0	@ 0008f310 0047
