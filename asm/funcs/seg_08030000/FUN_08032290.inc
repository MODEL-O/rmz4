@ FUN_08032290  entry 0x08032290  size 212
.thumb
.org 0x32290
FUN_08032290:
	push {r4, lr}	@ 00032290 10b5
.org 0x32292
	adds r2, r0, #0	@ 00032292 021c
.org 0x32294
	adds r4, r2, #0	@ 00032294 141c
.org 0x32296
	adds r4, #180	@ 00032296 b434
.org 0x32298
	ldr r3, [r4, #84]	@ 00032298 636d
.org 0x3229a
	cmp r3, #0	@ 0003229a 002b
.org 0x3229c
	beq.n 0x322a6	@ 0003229c 03d0
.org 0x3229e
	movs r1, #0	@ 0003229e 0021
.org 0x322a0
	movs r0, #1	@ 000322a0 0120
.org 0x322a2
	strb r0, [r3, #17]	@ 000322a2 5874
.org 0x322a4
	str r1, [r4, #84]	@ 000322a4 6165
.org 0x322a6
	ldr r0, [pc, #40]	@ 000322a6 0a48
.org 0x322a8
	adds r1, r2, r0	@ 000322a8 1118
.org 0x322aa
	movs r0, #255	@ 000322aa ff20
.org 0x322ac
	strb r0, [r1, #0]	@ 000322ac 0870
.org 0x322ae
	movs r3, #167	@ 000322ae a723
.org 0x322b0
	lsls r3, r3, #1	@ 000322b0 5b00
.org 0x322b2
	adds r1, r2, r3	@ 000322b2 d118
.org 0x322b4
	movs r0, #1	@ 000322b4 0120
.org 0x322b6
	negs r0, r0	@ 000322b6 4042
.org 0x322b8
	strb r0, [r1, #0]	@ 000322b8 0870
.org 0x322ba
	adds r3, r2, #0	@ 000322ba 131c
.org 0x322bc
	adds r3, #250	@ 000322bc fa33
.org 0x322be
	ldrb r1, [r3, #0]	@ 000322be 1978
.org 0x322c0
	adds r0, r1, #0	@ 000322c0 081c
.org 0x322c2
	cmp r0, #2	@ 000322c2 0228
.org 0x322c4
	beq.n 0x322f8	@ 000322c4 18d0
.org 0x322c6
	cmp r0, #8	@ 000322c6 0828
.org 0x322c8
	bne.n 0x322d4	@ 000322c8 04d1
.org 0x322ca
	movs r0, #2	@ 000322ca 0220
.org 0x322cc
	strb r0, [r3, #0]	@ 000322cc 1870
.org 0x322ce
	b.n 0x322f8	@ 000322ce 13e0
.org 0x322d0
	.byte 0x49,0x01,0x00,0x00	@ 000322d0 data
.org 0x322d4
	ldrb r0, [r4, #12]	@ 000322d4 207b
.org 0x322d6
	cmp r0, #2	@ 000322d6 0228
.org 0x322d8
	beq.n 0x322e4	@ 000322d8 04d0
.org 0x322da
	ldrb r0, [r4, #13]	@ 000322da 607b
.org 0x322dc
	cmp r0, #2	@ 000322dc 0228
.org 0x322de
	bne.n 0x322f8	@ 000322de 0bd1
.org 0x322e0
	strb r1, [r4, #13]	@ 000322e0 6173
.org 0x322e2
	b.n 0x322e6	@ 000322e2 00e0
.org 0x322e4
	strb r1, [r4, #12]	@ 000322e4 2173
.org 0x322e6
	adds r1, r2, #0	@ 000322e6 111c
.org 0x322e8
	adds r1, #248	@ 000322e8 f831
.org 0x322ea
	ldrb r0, [r1, #0]	@ 000322ea 0878
.org 0x322ec
	cmp r0, #2	@ 000322ec 0228
.org 0x322ee
	beq.n 0x322f6	@ 000322ee 02d0
.org 0x322f0
	adds r1, r2, #0	@ 000322f0 111c
.org 0x322f2
	adds r1, #249	@ 000322f2 f931
.org 0x322f4
	movs r0, #2	@ 000322f4 0220
.org 0x322f6
	strb r0, [r1, #0]	@ 000322f6 0870
.org 0x322f8
	adds r0, r2, #0	@ 000322f8 101c
.org 0x322fa
	adds r0, #180	@ 000322fa b430
.org 0x322fc
	ldrb r0, [r0, #19]	@ 000322fc c07c
.org 0x322fe
	cmp r0, #3	@ 000322fe 0328
.org 0x32300
	bls.n 0x3231a	@ 00032300 0bd9
.org 0x32302
	movs r0, #0	@ 00032302 0020
.org 0x32304
	movs r1, #1	@ 00032304 0121
.org 0x32306
	strb r1, [r2, #14]	@ 00032306 9173
.org 0x32308
	strb r0, [r2, #15]	@ 00032308 d073
.org 0x3230a
	movs r3, #128	@ 0003230a 8023
.org 0x3230c
	lsls r3, r3, #1	@ 0003230c 5b00
.org 0x3230e
	adds r1, r2, r3	@ 0003230e d118
.org 0x32310
	strb r0, [r1, #0]	@ 00032310 0870
.org 0x32312
	adds r0, r2, #0	@ 00032312 101c
.org 0x32314
	bl 0x32368	@ 00032314 00f028f8
.org 0x32318
	b.n 0x32362	@ 00032318 23e0
.org 0x3231a
	adds r0, r2, #0	@ 0003231a 101c
.org 0x3231c
	adds r0, #140	@ 0003231c 8c30
.org 0x3231e
	ldr r1, [r0, #0]	@ 0003231e 0168
.org 0x32320
	movs r0, #128	@ 00032320 8020
.org 0x32322
	lsls r0, r0, #2	@ 00032322 8000
.org 0x32324
	ands r1, r0	@ 00032324 0140
.org 0x32326
	cmp r1, #0	@ 00032326 0029
.org 0x32328
	bne.n 0x32336	@ 00032328 05d1
.org 0x3232a
	adds r0, r2, #0	@ 0003232a 101c
.org 0x3232c
	adds r0, #164	@ 0003232c a430
.org 0x3232e
	movs r3, #0	@ 0003232e 0023
.org 0x32330
	ldrsh r0, [r0, r3]	@ 00032330 c05e
.org 0x32332
	cmp r0, #0	@ 00032332 0028
.org 0x32334
	bne.n 0x3234e	@ 00032334 0bd1
.org 0x32336
	movs r0, #0	@ 00032336 0020
.org 0x32338
	movs r1, #2	@ 00032338 0221
.org 0x3233a
	strb r1, [r2, #14]	@ 0003233a 9173
.org 0x3233c
	strb r0, [r2, #15]	@ 0003233c d073
.org 0x3233e
	movs r3, #128	@ 0003233e 8023
.org 0x32340
	lsls r3, r3, #1	@ 00032340 5b00
.org 0x32342
	adds r1, r2, r3	@ 00032342 d118
.org 0x32344
	strb r0, [r1, #0]	@ 00032344 0870
.org 0x32346
	adds r0, r2, #0	@ 00032346 101c
.org 0x32348
	bl 0x32418	@ 00032348 00f066f8
.org 0x3234c
	b.n 0x32362	@ 0003234c 09e0
.org 0x3234e
	movs r0, #1	@ 0003234e 0120
.org 0x32350
	strb r0, [r2, #14]	@ 00032350 9073
.org 0x32352
	strb r1, [r2, #15]	@ 00032352 d173
.org 0x32354
	movs r3, #128	@ 00032354 8023
.org 0x32356
	lsls r3, r3, #1	@ 00032356 5b00
.org 0x32358
	adds r0, r2, r3	@ 00032358 d018
.org 0x3235a
	strb r1, [r0, #0]	@ 0003235a 0170
.org 0x3235c
	adds r0, r2, #0	@ 0003235c 101c
.org 0x3235e
	bl 0x32368	@ 0003235e 00f003f8
.org 0x32362
	pop {r4}	@ 00032362 10bc
