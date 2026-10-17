@ FUN_0802e370  entry 0x0802e370  size 242
.thumb
.org 0x2e370
FUN_0802e370:
	push {r4, r5, r6, r7, lr}	@ 0002e370 f0b5
.org 0x2e372
	mov r7, sl	@ 0002e372 5746
.org 0x2e374
	mov r6, r9	@ 0002e374 4e46
.org 0x2e376
	mov r5, r8	@ 0002e376 4546
.org 0x2e378
	push {r5, r6, r7}	@ 0002e378 e0b4
.org 0x2e37a
	sub sp, #8	@ 0002e37a 82b0
.org 0x2e37c
	adds r5, r0, #0	@ 0002e37c 051c
.org 0x2e37e
	mov r9, r1	@ 0002e37e 8946
.org 0x2e380
	str r2, [sp, #0]	@ 0002e380 0092
.org 0x2e382
	movs r7, #0	@ 0002e382 0027
.org 0x2e384
	movs r1, #220	@ 0002e384 dc21
.org 0x2e386
	lsls r1, r1, #1	@ 0002e386 4900
.org 0x2e388
	adds r0, r5, r1	@ 0002e388 6818
.org 0x2e38a
	ldrb r0, [r0, #0]	@ 0002e38a 0078
.org 0x2e38c
	cmp r7, r0	@ 0002e38c 8742
.org 0x2e38e
	bcs.n 0x2e462	@ 0002e38e 68d2
.org 0x2e390
	ldr r2, [pc, #120]	@ 0002e390 1e4a
.org 0x2e392
	mov sl, r2	@ 0002e392 9246
.org 0x2e394
	movs r0, #228	@ 0002e394 e420
.org 0x2e396
	lsls r0, r0, #1	@ 0002e396 4000
.org 0x2e398
	adds r0, r5, r0	@ 0002e398 2818
.org 0x2e39a
	str r0, [sp, #4]	@ 0002e39a 0190
.org 0x2e39c
	adds r1, #12	@ 0002e39c 0c31
.org 0x2e39e
	adds r1, r1, r5	@ 0002e39e 4919
.org 0x2e3a0
	mov r8, r1	@ 0002e3a0 8846
.org 0x2e3a2
	movs r2, #196	@ 0002e3a2 c422
.org 0x2e3a4
	lsls r2, r2, #1	@ 0002e3a4 5200
.org 0x2e3a6
	adds r0, r5, r2	@ 0002e3a6 a818
.org 0x2e3a8
	adds r0, r0, r7	@ 0002e3a8 c019
.org 0x2e3aa
	ldrb r2, [r0, #0]	@ 0002e3aa 0278
.org 0x2e3ac
	lsls r0, r2, #1	@ 0002e3ac 5000
.org 0x2e3ae
	adds r0, r0, r2	@ 0002e3ae 8018
.org 0x2e3b0
	lsls r3, r0, #3	@ 0002e3b0 c300
.org 0x2e3b2
	adds r0, r3, #0	@ 0002e3b2 181c
.org 0x2e3b4
	add r0, sl	@ 0002e3b4 5044
.org 0x2e3b6
	mov ip, r0	@ 0002e3b6 8446
.org 0x2e3b8
	movs r0, #235	@ 0002e3b8 eb20
.org 0x2e3ba
	lsls r0, r0, #1	@ 0002e3ba 4000
.org 0x2e3bc
	add r0, ip	@ 0002e3bc 6044
.org 0x2e3be
	ldrh r6, [r0, #0]	@ 0002e3be 0688
.org 0x2e3c0
	movs r0, #15	@ 0002e3c0 0f20
.org 0x2e3c2
	ands r0, r6	@ 0002e3c2 3040
.org 0x2e3c4
	cmp r0, #15	@ 0002e3c4 0f28
.org 0x2e3c6
	bne.n 0x2e450	@ 0002e3c6 43d1
.org 0x2e3c8
	ldr r1, [pc, #68]	@ 0002e3c8 1149
.org 0x2e3ca
	adds r0, r3, r1	@ 0002e3ca 5818
.org 0x2e3cc
	ldr r4, [r0, #0]	@ 0002e3cc 0468
.org 0x2e3ce
	mov r0, r9	@ 0002e3ce 4846
.org 0x2e3d0
	subs r1, r0, r4	@ 0002e3d0 011b
.org 0x2e3d2
	movs r0, #236	@ 0002e3d2 ec20
.org 0x2e3d4
	lsls r0, r0, #1	@ 0002e3d4 4000
.org 0x2e3d6
	add r0, ip	@ 0002e3d6 6044
.org 0x2e3d8
	ldrh r0, [r0, #0]	@ 0002e3d8 0088
.org 0x2e3da
	adds r1, r1, r0	@ 0002e3da 0918
.org 0x2e3dc
	lsls r0, r0, #1	@ 0002e3dc 4000
.org 0x2e3de
	cmp r1, r0	@ 0002e3de 8142
.org 0x2e3e0
	bcs.n 0x2e450	@ 0002e3e0 36d2
.org 0x2e3e2
	ldr r1, [pc, #48]	@ 0002e3e2 0c49
.org 0x2e3e4
	adds r0, r3, r1	@ 0002e3e4 5818
.org 0x2e3e6
	ldr r1, [r0, #0]	@ 0002e3e6 0168
.org 0x2e3e8
	ldr r0, [sp, #0]	@ 0002e3e8 0098
.org 0x2e3ea
	subs r1, r0, r1	@ 0002e3ea 411a
.org 0x2e3ec
	movs r0, #237	@ 0002e3ec ed20
.org 0x2e3ee
	lsls r0, r0, #1	@ 0002e3ee 4000
.org 0x2e3f0
	add r0, ip	@ 0002e3f0 6044
.org 0x2e3f2
	ldrh r0, [r0, #0]	@ 0002e3f2 0088
.org 0x2e3f4
	adds r1, r1, r0	@ 0002e3f4 0918
.org 0x2e3f6
	lsls r0, r0, #1	@ 0002e3f6 4000
.org 0x2e3f8
	cmp r1, r0	@ 0002e3f8 8142
.org 0x2e3fa
	bcs.n 0x2e450	@ 0002e3fa 29d2
.org 0x2e3fc
	movs r0, #32	@ 0002e3fc 2020
.org 0x2e3fe
	ands r0, r6	@ 0002e3fe 3040
.org 0x2e400
	cmp r0, #0	@ 0002e400 0028
.org 0x2e402
	beq.n 0x2e418	@ 0002e402 09d0
.org 0x2e404
	mov r1, r9	@ 0002e404 4946
.org 0x2e406
	mov r0, r8	@ 0002e406 4046
.org 0x2e408
	str r1, [r0, #0]	@ 0002e408 0160
.org 0x2e40a
	b.n 0x2e41c	@ 0002e40a 07e0
.org 0x2e40c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002e40c data
.org 0x2e410
	.byte 0x8c,0x0c,0x00,0x02	@ 0002e410 data
.org 0x2e414
	.byte 0x90,0x0c,0x00,0x02	@ 0002e414 data
.org 0x2e418
	mov r1, r8	@ 0002e418 4146
.org 0x2e41a
	str r4, [r1, #0]	@ 0002e41a 0c60
.org 0x2e41c
	lsls r0, r2, #1	@ 0002e41c 5000
.org 0x2e41e
	adds r0, r0, r2	@ 0002e41e 8018
.org 0x2e420
	lsls r0, r0, #3	@ 0002e420 c000
.org 0x2e422
	ldr r2, [pc, #40]	@ 0002e422 0a4a
.org 0x2e424
	adds r1, r0, r2	@ 0002e424 8118
.org 0x2e426
	ldr r1, [r1, #0]	@ 0002e426 0968
.org 0x2e428
	ldr r2, [sp, #4]	@ 0002e428 019a
.org 0x2e42a
	str r1, [r2, #0]	@ 0002e42a 1160
.org 0x2e42c
	movs r1, #230	@ 0002e42c e621
.org 0x2e42e
	lsls r1, r1, #1	@ 0002e42e 4900
.org 0x2e430
	adds r2, r5, r1	@ 0002e430 6a18
.org 0x2e432
	movs r1, #1	@ 0002e432 0121
.org 0x2e434
	strb r1, [r2, #0]	@ 0002e434 1170
.org 0x2e436
	add r0, sl	@ 0002e436 5044
.org 0x2e438
	movs r2, #234	@ 0002e438 ea22
.org 0x2e43a
	lsls r2, r2, #1	@ 0002e43a 5200
.org 0x2e43c
	adds r0, r0, r2	@ 0002e43c 8018
.org 0x2e43e
	ldrh r0, [r0, #0]	@ 0002e43e 0088
.org 0x2e440
	subs r2, #7	@ 0002e440 073a
.org 0x2e442
	adds r1, r5, r2	@ 0002e442 a918
.org 0x2e444
	strb r0, [r1, #0]	@ 0002e444 0870
.org 0x2e446
	movs r0, #15	@ 0002e446 0f20
.org 0x2e448
	b.n 0x2e464	@ 0002e448 0ce0
.org 0x2e44a
	.byte 0x00	@ 0002e44a data
.org 0x2e44b
	.byte 0x00	@ 0002e44b data
.org 0x2e44c
	.byte 0x90,0x0c,0x00,0x02	@ 0002e44c data
.org 0x2e450
	adds r0, r7, #1	@ 0002e450 781c
.org 0x2e452
	lsls r0, r0, #24	@ 0002e452 0006
.org 0x2e454
	lsrs r7, r0, #24	@ 0002e454 070e
.org 0x2e456
	movs r1, #220	@ 0002e456 dc21
.org 0x2e458
	lsls r1, r1, #1	@ 0002e458 4900
.org 0x2e45a
	adds r0, r5, r1	@ 0002e45a 6818
.org 0x2e45c
	ldrb r0, [r0, #0]	@ 0002e45c 0078
.org 0x2e45e
	cmp r7, r0	@ 0002e45e 8742
.org 0x2e460
	bcc.n 0x2e3a2	@ 0002e460 9fd3
