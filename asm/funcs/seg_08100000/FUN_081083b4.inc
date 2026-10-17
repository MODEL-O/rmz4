@ FUN_081083b4  entry 0x081083b4  size 190
.thumb
.org 0x1083b4
FUN_081083b4:
	push {r4, r5, r6, r7, lr}	@ 001083b4 f0b5
.org 0x1083b6
	mov r7, sl	@ 001083b6 5746
.org 0x1083b8
	mov r6, r9	@ 001083b8 4e46
.org 0x1083ba
	mov r5, r8	@ 001083ba 4546
.org 0x1083bc
	push {r5, r6, r7}	@ 001083bc e0b4
.org 0x1083be
	lsls r0, r0, #24	@ 001083be 0006
.org 0x1083c0
	lsrs r0, r0, #24	@ 001083c0 000e
.org 0x1083c2
	mov sl, r0	@ 001083c2 8246
.org 0x1083c4
	lsls r2, r2, #24	@ 001083c4 1206
.org 0x1083c6
	lsrs r2, r2, #24	@ 001083c6 120e
.org 0x1083c8
	mov r9, r2	@ 001083c8 9146
.org 0x1083ca
	ldr r5, [r1, #0]	@ 001083ca 0d68
.org 0x1083cc
	ldr r1, [r1, #4]	@ 001083cc 4968
.org 0x1083ce
	mov r8, r1	@ 001083ce 8846
.org 0x1083d0
	mov r7, r8	@ 001083d0 4746
.org 0x1083d2
	ldr r0, [pc, #16]	@ 001083d2 0448
.org 0x1083d4
	ldr r1, [r0, #0]	@ 001083d4 0168
.org 0x1083d6
	movs r2, #10	@ 001083d6 0a22
.org 0x1083d8
	ldrsh r0, [r1, r2]	@ 001083d8 885e
.org 0x1083da
	cmp r0, #2	@ 001083da 0228
.org 0x1083dc
	bgt.n 0x1083e8	@ 001083dc 04dc
.org 0x1083de
	movs r0, #0	@ 001083de 0020
.org 0x1083e0
	b.n 0x10846e	@ 001083e0 45e0
.org 0x1083e2
	.byte 0x00	@ 001083e2 data
.org 0x1083e3
	.byte 0x00	@ 001083e3 data
.org 0x1083e4
	.byte 0xa4,0xed,0x02,0x02	@ 001083e4 data
.org 0x1083e8
	adds r0, r1, #0	@ 001083e8 081c
.org 0x1083ea
	bl 0x5500	@ 001083ea fdf689f8
.org 0x1083ee
	adds r4, r0, #0	@ 001083ee 041c
.org 0x1083f0
	cmp r4, #0	@ 001083f0 002c
.org 0x1083f2
	beq.n 0x10846c	@ 001083f2 3bd0
.org 0x1083f4
	adds r2, r4, #0	@ 001083f4 221c
.org 0x1083f6
	adds r2, #37	@ 001083f6 2532
.org 0x1083f8
	movs r1, #0	@ 001083f8 0021
.org 0x1083fa
	movs r0, #1	@ 001083fa 0120
.org 0x1083fc
	strb r0, [r2, #0]	@ 001083fc 1070
.org 0x1083fe
	ldr r0, [pc, #48]	@ 001083fe 0c48
.org 0x108400
	strb r1, [r4, #9]	@ 00108400 6172
.org 0x108402
	ldr r0, [r0, #0]	@ 00108402 0068
.org 0x108404
	ldr r0, [r0, #0]	@ 00108404 0068
.org 0x108406
	str r0, [r4, #20]	@ 00108406 6061
.org 0x108408
	movs r0, #0	@ 00108408 0020
.org 0x10840a
	strh r1, [r4, #32]	@ 0010840a 2184
.org 0x10840c
	adds r1, r4, #0	@ 0010840c 211c
.org 0x10840e
	adds r1, #34	@ 0010840e 2231
.org 0x108410
	strb r0, [r1, #0]	@ 00108410 0870
.org 0x108412
	ldrb r1, [r4, #11]	@ 00108412 e17a
.org 0x108414
	movs r0, #16	@ 00108414 1020
.org 0x108416
	orrs r0, r1	@ 00108416 0843
.org 0x108418
	strb r0, [r4, #11]	@ 00108418 e072
.org 0x10841a
	ldrb r0, [r4, #28]	@ 0010841a 207f
.org 0x10841c
	strb r0, [r4, #29]	@ 0010841c 6077
.org 0x10841e
	ldrb r0, [r4, #17]	@ 0010841e 607c
.org 0x108420
	cmp r0, #1	@ 00108420 0128
.org 0x108422
	bls.n 0x108434	@ 00108422 07d9
.org 0x108424
	str r5, [r4, #84]	@ 00108424 6565
.org 0x108426
	adds r0, r5, #0	@ 00108426 281c
.org 0x108428
	mov r1, r8	@ 00108428 4146
.org 0x10842a
	bl 0x8534	@ 0010842a 00f783f8
.org 0x10842e
	b.n 0x108462	@ 0010842e 18e0
.org 0x108430
	.byte 0x8c,0xc4,0x86,0x08	@ 00108430 data
.org 0x108434
	adds r0, r5, #0	@ 00108434 281c
.org 0x108436
	mov r1, r8	@ 00108436 4146
.org 0x108438
	bl 0x1088f4	@ 00108438 00f05cfa
.org 0x10843c
	lsls r0, r0, #16	@ 0010843c 0004
.org 0x10843e
	cmp r0, #0	@ 0010843e 0028
.org 0x108440
	beq.n 0x10845e	@ 00108440 0dd0
.org 0x108442
	adds r0, r5, #0	@ 00108442 281c
.org 0x108444
	mov r1, r8	@ 00108444 4146
.org 0x108446
	bl 0x8534	@ 00108446 00f775f8
.org 0x10844a
	str r0, [r4, #88]	@ 0010844a a065
.org 0x10844c
	cmp r0, r7	@ 0010844c b842
.org 0x10844e
	ble.n 0x10845a	@ 0010844e 04dd
.org 0x108450
	adds r0, r5, #0	@ 00108450 281c
.org 0x108452
	mov r1, r8	@ 00108452 4146
.org 0x108454
	bl 0x8748	@ 00108454 00f778f9
.org 0x108458
	str r0, [r4, #88]	@ 00108458 a065
.org 0x10845a
	str r5, [r4, #84]	@ 0010845a 6565
.org 0x10845c
	b.n 0x108464	@ 0010845c 02e0
.org 0x10845e
	str r5, [r4, #84]	@ 0010845e 6565
.org 0x108460
	mov r0, r8	@ 00108460 4046
.org 0x108462
	str r0, [r4, #88]	@ 00108462 a065
.org 0x108464
	mov r2, sl	@ 00108464 5246
.org 0x108466
	strb r2, [r4, #16]	@ 00108466 2274
.org 0x108468
	mov r0, r9	@ 00108468 4846
.org 0x10846a
	strb r0, [r4, #17]	@ 0010846a 6074
.org 0x10846c
	adds r0, r4, #0	@ 0010846c 201c
.org 0x10846e
	pop {r3, r4, r5}	@ 0010846e 38bc
.org 0x108470
	mov r8, r3	@ 00108470 9846
