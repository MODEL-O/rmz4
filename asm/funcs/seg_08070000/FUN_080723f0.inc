@ FUN_080723f0  entry 0x080723f0  size 90
.thumb
.org 0x723f0
FUN_080723f0:
	push {r4, r5, lr}	@ 000723f0 30b5
.org 0x723f2
	adds r4, r0, #0	@ 000723f2 041c
.org 0x723f4
	ldrb r0, [r4, #10]	@ 000723f4 a07a
.org 0x723f6
	lsrs r5, r0, #4	@ 000723f6 0509
.org 0x723f8
	movs r1, #1	@ 000723f8 0121
.org 0x723fa
	ands r5, r1	@ 000723fa 0d40
.org 0x723fc
	adds r0, r4, #0	@ 000723fc 201c
.org 0x723fe
	adds r0, #180	@ 000723fe b430
.org 0x72400
	ldr r0, [r0, #0]	@ 00072400 0068
.org 0x72402
	adds r0, #180	@ 00072402 b430
.org 0x72404
	strb r1, [r0, #0]	@ 00072404 0170
.org 0x72406
	adds r0, r4, #0	@ 00072406 201c
.org 0x72408
	bl 0x73e00	@ 00072408 01f0fafc
.org 0x7240c
	adds r1, r4, #0	@ 0007240c 211c
.org 0x7240e
	adds r1, #195	@ 0007240e c331
.org 0x72410
	strb r0, [r1, #0]	@ 00072410 0870
.org 0x72412
	movs r2, #0	@ 00072412 0022
.org 0x72414
	ldr r0, [pc, #20]	@ 00072414 0548
.org 0x72416
	ldr r0, [r0, #0]	@ 00072416 0068
.org 0x72418
	ldr r1, [r4, #84]	@ 00072418 616d
.org 0x7241a
	ldr r0, [r0, #84]	@ 0007241a 406d
.org 0x7241c
	cmp r1, r0	@ 0007241c 8142
.org 0x7241e
	bge.n 0x72422	@ 0007241e 00da
.org 0x72420
	movs r2, #1	@ 00072420 0122
.org 0x72422
	cmp r2, r5	@ 00072422 aa42
.org 0x72424
	bne.n 0x72430	@ 00072424 04d1
.org 0x72426
	ldrb r0, [r4, #14]	@ 00072426 a07b
.org 0x72428
	adds r0, #1	@ 00072428 0130
.org 0x7242a
	b.n 0x72432	@ 0007242a 02e0
.org 0x7242c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007242c data
.org 0x72430
	movs r0, #3	@ 00072430 0320
.org 0x72432
	strb r0, [r4, #14]	@ 00072432 a073
.org 0x72434
	movs r0, #0	@ 00072434 0020
.org 0x72436
	strb r0, [r4, #15]	@ 00072436 e073
.org 0x72438
	ldr r1, [pc, #20]	@ 00072438 0549
.org 0x7243a
	ldrb r0, [r4, #13]	@ 0007243a 607b
.org 0x7243c
	lsls r0, r0, #2	@ 0007243c 8000
.org 0x7243e
	adds r0, r0, r1	@ 0007243e 4018
.org 0x72440
	ldr r1, [r0, #0]	@ 00072440 0168
.org 0x72442
	adds r0, r4, #0	@ 00072442 201c
.org 0x72444
	bl 0x128f80	@ 00072444 b6f09cfd
.org 0x72448
	pop {r4, r5}	@ 00072448 30bc
