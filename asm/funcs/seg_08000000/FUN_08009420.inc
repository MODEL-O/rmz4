@ FUN_08009420  entry 0x08009420  size 128
.thumb
.org 0x9420
FUN_08009420:
	push {r4, r5, r6, r7, lr}	@ 00009420 f0b5
.org 0x9422
	mov r7, sl	@ 00009422 5746
.org 0x9424
	mov r6, r9	@ 00009424 4e46
.org 0x9426
	mov r5, r8	@ 00009426 4546
.org 0x9428
	push {r5, r6, r7}	@ 00009428 e0b4
.org 0x942a
	mov sl, r0	@ 0000942a 8246
.org 0x942c
	adds r5, r1, #0	@ 0000942c 0d1c
.org 0x942e
	ldr r6, [pc, #84]	@ 0000942e 154e
.org 0x9430
	movs r4, #0	@ 00009430 0024
.org 0x9432
	movs r1, #233	@ 00009432 e921
.org 0x9434
	lsls r1, r1, #1	@ 00009434 4900
.org 0x9436
	adds r0, r6, r1	@ 00009436 7018
.org 0x9438
	ldrb r0, [r0, #0]	@ 00009438 0078
.org 0x943a
	cmp r4, r0	@ 0000943a 8442
.org 0x943c
	bge.n 0x9496	@ 0000943c 2bda
.org 0x943e
	mov r9, r0	@ 0000943e 8146
.org 0x9440
	movs r3, #240	@ 00009440 f023
.org 0x9442
	lsls r3, r3, #1	@ 00009442 5b00
.org 0x9444
	adds r3, r3, r6	@ 00009444 9b19
.org 0x9446
	mov r8, r3	@ 00009446 9846
.org 0x9448
	movs r0, #238	@ 00009448 ee20
.org 0x944a
	lsls r0, r0, #1	@ 0000944a 4000
.org 0x944c
	adds r7, r6, r0	@ 0000944c 3718
.org 0x944e
	mov ip, r6	@ 0000944e b446
.org 0x9450
	movs r0, #236	@ 00009450 ec20
.org 0x9452
	lsls r0, r0, #1	@ 00009452 4000
.org 0x9454
	add r0, ip	@ 00009454 6044
.org 0x9456
	ldrh r1, [r0, #0]	@ 00009456 0188
.org 0x9458
	lsls r2, r1, #1	@ 00009458 4a00
.org 0x945a
	ldr r0, [r7, #0]	@ 0000945a 3868
.org 0x945c
	mov r3, sl	@ 0000945c 5346
.org 0x945e
	subs r0, r3, r0	@ 0000945e 181a
.org 0x9460
	adds r0, r0, r1	@ 00009460 4018
.org 0x9462
	cmp r2, r0	@ 00009462 8242
.org 0x9464
	bls.n 0x9488	@ 00009464 10d9
.org 0x9466
	movs r0, #237	@ 00009466 ed20
.org 0x9468
	lsls r0, r0, #1	@ 00009468 4000
.org 0x946a
	add r0, ip	@ 0000946a 6044
.org 0x946c
	ldrh r2, [r0, #0]	@ 0000946c 0288
.org 0x946e
	lsls r1, r2, #1	@ 0000946e 5100
.org 0x9470
	mov r0, r8	@ 00009470 4046
.org 0x9472
	ldr r3, [r0, #0]	@ 00009472 0368
.org 0x9474
	subs r0, r5, r3	@ 00009474 e81a
.org 0x9476
	adds r0, r0, r2	@ 00009476 8018
.org 0x9478
	subs r0, #1	@ 00009478 0138
.org 0x947a
	cmp r1, r0	@ 0000947a 8142
.org 0x947c
	bls.n 0x9488	@ 0000947c 04d9
.org 0x947e
	subs r5, r3, r2	@ 0000947e 9d1a
.org 0x9480
	b.n 0x9430	@ 00009480 d6e7
.org 0x9482
	.byte 0x00	@ 00009482 data
.org 0x9483
	.byte 0x00	@ 00009483 data
.org 0x9484
	.byte 0xb0,0x0a,0x00,0x02	@ 00009484 data
.org 0x9488
	movs r1, #24	@ 00009488 1821
.org 0x948a
	add r8, r1	@ 0000948a 8844
.org 0x948c
	adds r7, #24	@ 0000948c 1837
.org 0x948e
	add ip, r1	@ 0000948e 8c44
.org 0x9490
	adds r4, #1	@ 00009490 0134
.org 0x9492
	cmp r4, r9	@ 00009492 4c45
.org 0x9494
	blt.n 0x9450	@ 00009494 dcdb
.org 0x9496
	adds r0, r5, #0	@ 00009496 281c
.org 0x9498
	pop {r3, r4, r5}	@ 00009498 38bc
.org 0x949a
	mov r8, r3	@ 0000949a 9846
.org 0x949c
	mov r9, r4	@ 0000949c a146
.org 0x949e
	mov sl, r5	@ 0000949e aa46
