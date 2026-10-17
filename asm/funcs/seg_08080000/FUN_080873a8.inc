@ FUN_080873a8  entry 0x080873a8  size 192
.thumb
.org 0x873a8
FUN_080873a8:
	push {r4, lr}	@ 000873a8 10b5
.org 0x873aa
	sub sp, #16	@ 000873aa 84b0
.org 0x873ac
	adds r4, r0, #0	@ 000873ac 041c
.org 0x873ae
	ldrb r0, [r4, #15]	@ 000873ae e07b
.org 0x873b0
	cmp r0, #0	@ 000873b0 0028
.org 0x873b2
	bne.n 0x873d0	@ 000873b2 0dd1
.org 0x873b4
	adds r0, r4, #0	@ 000873b4 201c
.org 0x873b6
	adds r0, #116	@ 000873b6 7430
.org 0x873b8
	ldr r1, [pc, #56]	@ 000873b8 0e49
.org 0x873ba
	bl 0x5784	@ 000873ba 7ef7e3f9
.org 0x873be
	ldr r1, [pc, #56]	@ 000873be 0e49
.org 0x873c0
	adds r0, r4, #0	@ 000873c0 201c
.org 0x873c2
	bl 0x1cf00	@ 000873c2 95f79dfd
.org 0x873c6
	movs r0, #32	@ 000873c6 2020
.org 0x873c8
	strb r0, [r4, #18]	@ 000873c8 a074
.org 0x873ca
	ldrb r0, [r4, #15]	@ 000873ca e07b
.org 0x873cc
	adds r0, #1	@ 000873cc 0130
.org 0x873ce
	strb r0, [r4, #15]	@ 000873ce e073
.org 0x873d0
	adds r0, r4, #0	@ 000873d0 201c
.org 0x873d2
	bl 0x1cff0	@ 000873d2 95f70dfe
.org 0x873d6
	ldrb r1, [r4, #18]	@ 000873d6 a17c
.org 0x873d8
	movs r0, #63	@ 000873d8 3f20
.org 0x873da
	ands r0, r1	@ 000873da 0840
.org 0x873dc
	cmp r0, #0	@ 000873dc 0028
.org 0x873de
	bne.n 0x8741c	@ 000873de 1dd1
.org 0x873e0
	ldr r2, [r4, #84]	@ 000873e0 626d
.org 0x873e2
	ldrb r1, [r4, #10]	@ 000873e2 a17a
.org 0x873e4
	movs r0, #16	@ 000873e4 1020
.org 0x873e6
	ands r0, r1	@ 000873e6 0840
.org 0x873e8
	cmp r0, #0	@ 000873e8 0028
.org 0x873ea
	beq.n 0x873fc	@ 000873ea 07d0
.org 0x873ec
	movs r1, #128	@ 000873ec 8021
.org 0x873ee
	lsls r1, r1, #3	@ 000873ee c900
.org 0x873f0
	b.n 0x873fe	@ 000873f0 05e0
.org 0x873f2
	.byte 0x00	@ 000873f2 data
.org 0x873f3
	.byte 0x00	@ 000873f3 data
.org 0x873f4
	.byte 0x04,0xf0,0x85,0x08	@ 000873f4 data
.org 0x873f8
	.byte 0x03,0x1d,0x00,0x00	@ 000873f8 data
.org 0x873fc
	ldr r1, [pc, #96]	@ 000873fc 1849
.org 0x873fe
	adds r0, r2, r1	@ 000873fe 5018
.org 0x87400
	str r0, [sp, #0]	@ 00087400 0090
.org 0x87402
	ldr r0, [r4, #88]	@ 00087402 a06d
.org 0x87404
	str r0, [sp, #4]	@ 00087404 0190
.org 0x87406
	movs r0, #128	@ 00087406 8020
.org 0x87408
	lsls r0, r0, #2	@ 00087408 8000
.org 0x8740a
	str r0, [sp, #8]	@ 0008740a 0290
.org 0x8740c
	add r1, sp, #8	@ 0008740c 02a9
.org 0x8740e
	movs r0, #0	@ 0008740e 0020
.org 0x87410
	str r0, [r1, #4]	@ 00087410 4860
.org 0x87412
	mov r0, sp	@ 00087412 6846
.org 0x87414
	movs r2, #0	@ 00087414 0022
.org 0x87416
	movs r3, #2	@ 00087416 0223
.org 0x87418
	bl 0x88ff0	@ 00087418 01f0eafd
.org 0x8741c
	ldrb r0, [r4, #18]	@ 0008741c a07c
.org 0x8741e
	subs r0, #1	@ 0008741e 0138
.org 0x87420
	strb r0, [r4, #18]	@ 00087420 a074
.org 0x87422
	lsls r0, r0, #24	@ 00087422 0006
.org 0x87424
	lsrs r2, r0, #24	@ 00087424 020e
.org 0x87426
	cmp r2, #0	@ 00087426 002a
.org 0x87428
	bne.n 0x87472	@ 00087428 23d1
.org 0x8742a
	ldr r0, [pc, #56]	@ 0008742a 0e48
.org 0x8742c
	ldr r3, [r0, #0]	@ 0008742c 0368
.org 0x8742e
	ldr r0, [r3, #84]	@ 0008742e 586d
.org 0x87430
	ldr r1, [r4, #84]	@ 00087430 616d
.org 0x87432
	subs r0, r0, r1	@ 00087432 401a
.org 0x87434
	movs r1, #208	@ 00087434 d021
.org 0x87436
	lsls r1, r1, #7	@ 00087436 c901
.org 0x87438
	adds r0, r0, r1	@ 00087438 4018
.org 0x8743a
	movs r1, #208	@ 0008743a d021
.org 0x8743c
	lsls r1, r1, #8	@ 0008743c 0902
.org 0x8743e
	cmp r0, r1	@ 0008743e 8842
.org 0x87440
	bhi.n 0x87468	@ 00087440 12d8
.org 0x87442
	ldr r0, [r3, #88]	@ 00087442 986d
.org 0x87444
	ldr r1, [r4, #88]	@ 00087444 a16d
.org 0x87446
	subs r0, r0, r1	@ 00087446 401a
.org 0x87448
	movs r1, #160	@ 00087448 a021
.org 0x8744a
	lsls r1, r1, #8	@ 0008744a 0902
.org 0x8744c
	adds r0, r0, r1	@ 0008744c 4018
.org 0x8744e
	movs r1, #160	@ 0008744e a021
.org 0x87450
	lsls r1, r1, #9	@ 00087450 4902
.org 0x87452
	cmp r0, r1	@ 00087452 8842
.org 0x87454
	bhi.n 0x87468	@ 00087454 08d8
.org 0x87456
	movs r0, #5	@ 00087456 0520
.org 0x87458
	strb r0, [r4, #13]	@ 00087458 6073
.org 0x8745a
	strb r2, [r4, #14]	@ 0008745a a273
.org 0x8745c
	strb r2, [r4, #15]	@ 0008745c e273
.org 0x8745e
	b.n 0x87472	@ 0008745e 08e0
.org 0x87460
	.byte 0x00,0xfc,0xff,0xff	@ 00087460 data
.org 0x87464
	.byte 0xf0,0xdb,0x02,0x02	@ 00087464 data
