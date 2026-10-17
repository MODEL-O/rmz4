@ FUN_080bb440  entry 0x080bb440  size 264
.thumb
.org 0xbb440
FUN_080bb440:
	push {r4, r5, r6, r7, lr}	@ 000bb440 f0b5
.org 0xbb442
	mov r7, sl	@ 000bb442 5746
.org 0xbb444
	mov r6, r9	@ 000bb444 4e46
.org 0xbb446
	mov r5, r8	@ 000bb446 4546
.org 0xbb448
	push {r5, r6, r7}	@ 000bb448 e0b4
.org 0xbb44a
	sub sp, #68	@ 000bb44a 91b0
.org 0xbb44c
	adds r6, r0, #0	@ 000bb44c 061c
.org 0xbb44e
	mov r1, sp	@ 000bb44e 6946
.org 0xbb450
	ldr r0, [pc, #132]	@ 000bb450 2148
.org 0xbb452
	ldmia r0!, {r2, r3, r4}	@ 000bb452 1cc8
.org 0xbb454
	stmia r1!, {r2, r3, r4}	@ 000bb454 1cc1
.org 0xbb456
	ldmia r0!, {r2, r3, r5}	@ 000bb456 2cc8
.org 0xbb458
	stmia r1!, {r2, r3, r5}	@ 000bb458 2cc1
.org 0xbb45a
	ldmia r0!, {r4, r5}	@ 000bb45a 30c8
.org 0xbb45c
	stmia r1!, {r4, r5}	@ 000bb45c 30c1
.org 0xbb45e
	add r2, sp, #32	@ 000bb45e 08aa
.org 0xbb460
	adds r1, r2, #0	@ 000bb460 111c
.org 0xbb462
	ldr r0, [pc, #120]	@ 000bb462 1e48
.org 0xbb464
	ldmia r0!, {r3, r4, r5}	@ 000bb464 38c8
.org 0xbb466
	stmia r1!, {r3, r4, r5}	@ 000bb466 38c1
.org 0xbb468
	ldr r0, [r0, #0]	@ 000bb468 0068
.org 0xbb46a
	str r0, [r1, #0]	@ 000bb46a 0860
.org 0xbb46c
	mov r0, sp	@ 000bb46c 6846
.org 0xbb46e
	str r0, [sp, #52]	@ 000bb46e 0d90
.org 0xbb470
	add r5, sp, #52	@ 000bb470 0dad
.org 0xbb472
	str r2, [r5, #4]	@ 000bb472 6a60
.org 0xbb474
	add r4, sp, #48	@ 000bb474 0cac
.org 0xbb476
	ldr r1, [pc, #104]	@ 000bb476 1a49
.org 0xbb478
	adds r0, r4, #0	@ 000bb478 201c
.org 0xbb47a
	movs r2, #2	@ 000bb47a 0222
.org 0xbb47c
	bl 0x129258	@ 000bb47c 6df0ecfe
.org 0xbb480
	ldr r1, [r6, #40]	@ 000bb480 b16a
.org 0xbb482
	mov r8, r1	@ 000bb482 8846
.org 0xbb484
	ldrb r7, [r6, #15]	@ 000bb484 f77b
.org 0xbb486
	mov sl, r5	@ 000bb486 aa46
.org 0xbb488
	adds r5, r4, #0	@ 000bb488 251c
.org 0xbb48a
	cmp r7, #0	@ 000bb48a 002f
.org 0xbb48c
	bne.n 0xbb4a4	@ 000bb48c 0ad1
.org 0xbb48e
	adds r0, r6, #0	@ 000bb48e 301c
.org 0xbb490
	adds r0, #116	@ 000bb490 7430
.org 0xbb492
	ldr r1, [pc, #80]	@ 000bb492 1449
.org 0xbb494
	bl 0x5784	@ 000bb494 4af776f9
.org 0xbb498
	str r7, [r6, #104]	@ 000bb498 b766
.org 0xbb49a
	movs r0, #1	@ 000bb49a 0120
.org 0xbb49c
	strb r0, [r6, #19]	@ 000bb49c f074
.org 0xbb49e
	ldrb r0, [r6, #15]	@ 000bb49e f07b
.org 0xbb4a0
	adds r0, #1	@ 000bb4a0 0130
.org 0xbb4a2
	strb r0, [r6, #15]	@ 000bb4a2 f073
.org 0xbb4a4
	ldrb r0, [r6, #19]	@ 000bb4a4 f07c
.org 0xbb4a6
	movs r2, #115	@ 000bb4a6 7322
.org 0xbb4a8
	adds r2, r2, r6	@ 000bb4a8 9219
.org 0xbb4aa
	mov r9, r2	@ 000bb4aa 9146
.org 0xbb4ac
	cmp r0, #0	@ 000bb4ac 0028
.org 0xbb4ae
	beq.n 0xbb51c	@ 000bb4ae 35d0
.org 0xbb4b0
	movs r0, #204	@ 000bb4b0 cc20
.org 0xbb4b2
	lsls r0, r0, #1	@ 000bb4b2 4000
.org 0xbb4b4
	bl 0x2b10	@ 000bb4b4 47f72cfb
.org 0xbb4b8
	ldr r1, [pc, #44]	@ 000bb4b8 0b49
.org 0xbb4ba
	adds r0, r6, #0	@ 000bb4ba 301c
.org 0xbb4bc
	bl 0x1cf00	@ 000bb4bc 61f720fd
.org 0xbb4c0
	ldr r0, [r6, #84]	@ 000bb4c0 706d
.org 0xbb4c2
	str r0, [sp, #60]	@ 000bb4c2 0f90
.org 0xbb4c4
	ldr r0, [r6, #88]	@ 000bb4c4 b06d
.org 0xbb4c6
	ldr r3, [pc, #36]	@ 000bb4c6 094b
.org 0xbb4c8
	adds r0, r0, r3	@ 000bb4c8 c018
.org 0xbb4ca
	add r1, sp, #60	@ 000bb4ca 0fa9
.org 0xbb4cc
	str r0, [r1, #4]	@ 000bb4cc 4860
.org 0xbb4ce
	movs r4, #0	@ 000bb4ce 0024
.org 0xbb4d0
	ldr r2, [r6, #104]	@ 000bb4d0 b26e
.org 0xbb4d2
	adds r0, r5, r2	@ 000bb4d2 a818
.org 0xbb4d4
	adds r7, r1, #0	@ 000bb4d4 0f1c
.org 0xbb4d6
	b.n 0xbb508	@ 000bb4d6 17e0
.org 0xbb4d8
	.byte 0x10,0xa0,0x12,0x08	@ 000bb4d8 data
.org 0xbb4dc
	.byte 0x30,0xa0,0x12,0x08	@ 000bb4dc data
.org 0xbb4e0
	.byte 0x40,0xa0,0x12,0x08	@ 000bb4e0 data
.org 0xbb4e4
	.byte 0xe4,0x45,0x86,0x08	@ 000bb4e4 data
.org 0xbb4e8
	.byte 0x02,0xb9,0x00,0x00	@ 000bb4e8 data
.org 0xbb4ec
	.byte 0x00,0xbe,0xff,0xff	@ 000bb4ec data
.org 0xbb4f0
	lsls r0, r2, #2	@ 000bb4f0 9000
.org 0xbb4f2
	add r0, sl	@ 000bb4f2 5044
.org 0xbb4f4
	lsls r1, r4, #3	@ 000bb4f4 e100
.org 0xbb4f6
	ldr r2, [r0, #0]	@ 000bb4f6 0268
.org 0xbb4f8
	adds r2, r2, r1	@ 000bb4f8 5218
.org 0xbb4fa
	mov r0, r8	@ 000bb4fa 4046
.org 0xbb4fc
	adds r1, r7, #0	@ 000bb4fc 391c
.org 0xbb4fe
	bl 0xd016c	@ 000bb4fe 14f035fe
.org 0xbb502
	adds r4, #1	@ 000bb502 0134
.org 0xbb504
	ldr r2, [r6, #104]	@ 000bb504 b26e
.org 0xbb506
	adds r0, r5, r2	@ 000bb506 a818
.org 0xbb508
	ldrb r0, [r0, #0]	@ 000bb508 0078
.org 0xbb50a
	cmp r4, r0	@ 000bb50a 8442
.org 0xbb50c
	blt.n 0xbb4f0	@ 000bb50c f0db
.org 0xbb50e
	ldr r0, [r6, #104]	@ 000bb50e b06e
.org 0xbb510
	adds r0, #1	@ 000bb510 0130
.org 0xbb512
	str r0, [r6, #104]	@ 000bb512 b066
.org 0xbb514
	movs r0, #0	@ 000bb514 0020
.org 0xbb516
	strb r0, [r6, #19]	@ 000bb516 f074
.org 0xbb518
	movs r0, #20	@ 000bb518 1420
.org 0xbb51a
	strb r0, [r6, #18]	@ 000bb51a b074
.org 0xbb51c
	adds r0, r6, #0	@ 000bb51c 301c
.org 0xbb51e
	bl 0x1cff0	@ 000bb51e 61f767fd
.org 0xbb522
	mov r4, r9	@ 000bb522 4c46
.org 0xbb524
	ldrb r0, [r4, #0]	@ 000bb524 2078
.org 0xbb526
	cmp r0, #3	@ 000bb526 0328
.org 0xbb528
	bne.n 0xbb550	@ 000bb528 12d1
.org 0xbb52a
	ldrb r0, [r6, #18]	@ 000bb52a b07c
.org 0xbb52c
	cmp r0, #0	@ 000bb52c 0028
.org 0xbb52e
	beq.n 0xbb53a	@ 000bb52e 04d0
.org 0xbb530
	subs r0, #1	@ 000bb530 0138
.org 0xbb532
	strb r0, [r6, #18]	@ 000bb532 b074
.org 0xbb534
	lsls r0, r0, #24	@ 000bb534 0006
.org 0xbb536
	cmp r0, #0	@ 000bb536 0028
.org 0xbb538
	bne.n 0xbb550	@ 000bb538 0ad1
.org 0xbb53a
	ldr r0, [r6, #104]	@ 000bb53a b06e
.org 0xbb53c
	cmp r0, #1	@ 000bb53c 0128
.org 0xbb53e
	ble.n 0xbb54c	@ 000bb53e 05dd
.org 0xbb540
	movs r1, #0	@ 000bb540 0021
.org 0xbb542
	movs r0, #5	@ 000bb542 0520
.org 0xbb544
	strb r0, [r6, #13]	@ 000bb544 7073
.org 0xbb546
	strb r1, [r6, #14]	@ 000bb546 b173
