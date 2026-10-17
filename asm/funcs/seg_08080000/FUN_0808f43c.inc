@ FUN_0808f43c  entry 0x0808f43c  size 218
.thumb
.org 0x8f43c
FUN_0808f43c:
	push {r4, r5, r6, r7, lr}	@ 0008f43c f0b5
.org 0x8f43e
	sub sp, #4	@ 0008f43e 81b0
.org 0x8f440
	adds r4, r0, #0	@ 0008f440 041c
.org 0x8f442
	ldr r1, [pc, #152]	@ 0008f442 2649
.org 0x8f444
	mov r0, sp	@ 0008f444 6846
.org 0x8f446
	movs r2, #2	@ 0008f446 0222
.org 0x8f448
	bl 0x129258	@ 0008f448 99f006ff
.org 0x8f44c
	ldrb r0, [r4, #10]	@ 0008f44c a07a
.org 0x8f44e
	lsrs r6, r0, #4	@ 0008f44e 0609
.org 0x8f450
	movs r7, #1	@ 0008f450 0127
.org 0x8f452
	ands r6, r7	@ 0008f452 3e40
.org 0x8f454
	ldrb r0, [r4, #15]	@ 0008f454 e07b
.org 0x8f456
	cmp r0, #0	@ 0008f456 0028
.org 0x8f458
	bne.n 0x8f470	@ 0008f458 0ad1
.org 0x8f45a
	adds r0, r4, #0	@ 0008f45a 201c
.org 0x8f45c
	bl 0x8fd34	@ 0008f45c 00f06afc
.org 0x8f460
	ldr r1, [pc, #124]	@ 0008f460 1f49
.org 0x8f462
	adds r0, r4, #0	@ 0008f462 201c
.org 0x8f464
	bl 0x1cf00	@ 0008f464 8df74cfd
.org 0x8f468
	strb r7, [r4, #18]	@ 0008f468 a774
.org 0x8f46a
	ldrb r0, [r4, #15]	@ 0008f46a e07b
.org 0x8f46c
	adds r0, #1	@ 0008f46c 0130
.org 0x8f46e
	strb r0, [r4, #15]	@ 0008f46e e073
.org 0x8f470
	adds r0, r4, #0	@ 0008f470 201c
.org 0x8f472
	bl 0x1cff0	@ 0008f472 8df7bdfd
.org 0x8f476
	adds r0, r4, #0	@ 0008f476 201c
.org 0x8f478
	adds r0, #116	@ 0008f478 7430
.org 0x8f47a
	ldr r3, [pc, #104]	@ 0008f47a 1a4b
.org 0x8f47c
	ldrb r1, [r4, #30]	@ 0008f47c a17f
.org 0x8f47e
	lsls r1, r1, #8	@ 0008f47e 0902
.org 0x8f480
	adds r2, r4, #0	@ 0008f480 221c
.org 0x8f482
	adds r2, #112	@ 0008f482 7032
.org 0x8f484
	ldrb r2, [r2, #0]	@ 0008f484 1278
.org 0x8f486
	orrs r1, r2	@ 0008f486 1143
.org 0x8f488
	ldr r2, [pc, #92]	@ 0008f488 174a
.org 0x8f48a
	adds r1, r1, r2	@ 0008f48a 8918
.org 0x8f48c
	lsls r1, r1, #2	@ 0008f48c 8900
.org 0x8f48e
	adds r1, r1, r3	@ 0008f48e c918
.org 0x8f490
	adds r5, r4, #0	@ 0008f490 251c
.org 0x8f492
	adds r5, #113	@ 0008f492 7135
.org 0x8f494
	movs r2, #0	@ 0008f494 0022
.org 0x8f496
	ldrsb r2, [r5, r2]	@ 0008f496 aa56
.org 0x8f498
	ldr r1, [r1, #0]	@ 0008f498 0968
.org 0x8f49a
	lsls r2, r2, #2	@ 0008f49a 9200
.org 0x8f49c
	adds r2, r2, r1	@ 0008f49c 5218
.org 0x8f49e
	ldr r1, [r2, #0]	@ 0008f49e 1168
.org 0x8f4a0
	ldrb r2, [r1, #0]	@ 0008f4a0 0a78
.org 0x8f4a2
	lsls r1, r2, #1	@ 0008f4a2 5100
.org 0x8f4a4
	adds r1, r1, r2	@ 0008f4a4 8918
.org 0x8f4a6
	lsls r1, r1, #3	@ 0008f4a6 c900
.org 0x8f4a8
	ldr r2, [pc, #64]	@ 0008f4a8 104a
.org 0x8f4aa
	adds r1, r1, r2	@ 0008f4aa 8918
.org 0x8f4ac
	bl 0x5784	@ 0008f4ac 76f76af9
.org 0x8f4b0
	ldrb r1, [r4, #18]	@ 0008f4b0 a17c
.org 0x8f4b2
	cmp r1, #0	@ 0008f4b2 0029
.org 0x8f4b4
	beq.n 0x8f50e	@ 0008f4b4 2bd0
.org 0x8f4b6
	movs r0, #0	@ 0008f4b6 0020
.org 0x8f4b8
	ldrsb r0, [r5, r0]	@ 0008f4b8 2856
.org 0x8f4ba
	cmp r0, #2	@ 0008f4ba 0228
.org 0x8f4bc
	bne.n 0x8f522	@ 0008f4bc 31d1
.org 0x8f4be
	adds r1, r4, #0	@ 0008f4be 211c
.org 0x8f4c0
	adds r1, #84	@ 0008f4c0 5431
.org 0x8f4c2
	adds r0, r4, #0	@ 0008f4c2 201c
.org 0x8f4c4
	movs r2, #0	@ 0008f4c4 0022
.org 0x8f4c6
	movs r3, #0	@ 0008f4c6 0023
.org 0x8f4c8
	bl 0x8ff04	@ 0008f4c8 00f01cfd
.org 0x8f4cc
	adds r1, r0, #0	@ 0008f4cc 011c
.org 0x8f4ce
	adds r3, r4, #0	@ 0008f4ce 231c
.org 0x8f4d0
	adds r3, #192	@ 0008f4d0 c033
.org 0x8f4d2
	str r1, [r3, #0]	@ 0008f4d2 1960
.org 0x8f4d4
	cmp r1, #0	@ 0008f4d4 0029
.org 0x8f4d6
	bne.n 0x8f4f0	@ 0008f4d6 0bd1
.org 0x8f4d8
	movs r0, #3	@ 0008f4d8 0320
.org 0x8f4da
	b.n 0x8f51e	@ 0008f4da 20e0
.org 0x8f4dc
	.byte 0xa2,0x9b,0x12,0x08	@ 0008f4dc data
.org 0x8f4e0
	.byte 0x02,0x39,0x00,0x00	@ 0008f4e0 data
.org 0x8f4e4
	.byte 0xac,0xff,0x85,0x08	@ 0008f4e4 data
.org 0x8f4e8
	.byte 0x00,0xc7,0xff,0xff	@ 0008f4e8 data
.org 0x8f4ec
	.byte 0xd8,0xfb,0x85,0x08	@ 0008f4ec data
.org 0x8f4f0
	adds r0, r1, #0	@ 0008f4f0 081c
.org 0x8f4f2
	adds r0, #180	@ 0008f4f2 b430
.org 0x8f4f4
	movs r2, #0	@ 0008f4f4 0022
.org 0x8f4f6
	strb r7, [r0, #0]	@ 0008f4f6 0770
.org 0x8f4f8
	ldr r0, [r3, #0]	@ 0008f4f8 1868
.org 0x8f4fa
	adds r0, #181	@ 0008f4fa b530
.org 0x8f4fc
	strb r2, [r0, #0]	@ 0008f4fc 0270
.org 0x8f4fe
	ldr r0, [r3, #0]	@ 0008f4fe 1868
.org 0x8f500
	mov r3, sp	@ 0008f500 6b46
.org 0x8f502
	adds r1, r3, r6	@ 0008f502 9919
.org 0x8f504
	ldrb r1, [r1, #0]	@ 0008f504 0978
.org 0x8f506
	adds r0, #183	@ 0008f506 b730
.org 0x8f508
	strb r1, [r0, #0]	@ 0008f508 0170
.org 0x8f50a
	strb r2, [r4, #18]	@ 0008f50a a274
.org 0x8f50c
	b.n 0x8f522	@ 0008f50c 09e0
.org 0x8f50e
	adds r0, r4, #0	@ 0008f50e 201c
.org 0x8f510
	adds r0, #192	@ 0008f510 c030
.org 0x8f512
	ldr r0, [r0, #0]	@ 0008f512 0068
.org 0x8f514
	adds r0, #181	@ 0008f514 b530
