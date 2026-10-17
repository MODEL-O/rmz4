@ FUN_080554b4  entry 0x080554b4  size 138
.thumb
.org 0x554b4
FUN_080554b4:
	push {r4, r5, lr}	@ 000554b4 30b5
.org 0x554b6
	adds r4, r0, #0	@ 000554b6 041c
.org 0x554b8
	ldrb r0, [r4, #15]	@ 000554b8 e07b
.org 0x554ba
	cmp r0, #0	@ 000554ba 0028
.org 0x554bc
	bne.n 0x554cc	@ 000554bc 06d1
.org 0x554be
	ldr r1, [pc, #116]	@ 000554be 1d49
.org 0x554c0
	adds r0, r4, #0	@ 000554c0 201c
.org 0x554c2
	bl 0x1cf00	@ 000554c2 c7f71dfd
.org 0x554c6
	ldrb r0, [r4, #15]	@ 000554c6 e07b
.org 0x554c8
	adds r0, #1	@ 000554c8 0130
.org 0x554ca
	strb r0, [r4, #15]	@ 000554ca e073
.org 0x554cc
	adds r0, r4, #0	@ 000554cc 201c
.org 0x554ce
	bl 0x1cff0	@ 000554ce c7f78ffd
.org 0x554d2
	adds r0, r4, #0	@ 000554d2 201c
.org 0x554d4
	adds r0, #116	@ 000554d4 7430
.org 0x554d6
	ldr r3, [pc, #96]	@ 000554d6 184b
.org 0x554d8
	ldrb r1, [r4, #30]	@ 000554d8 a17f
.org 0x554da
	lsls r1, r1, #8	@ 000554da 0902
.org 0x554dc
	adds r2, r4, #0	@ 000554dc 221c
.org 0x554de
	adds r2, #112	@ 000554de 7032
.org 0x554e0
	ldrb r2, [r2, #0]	@ 000554e0 1278
.org 0x554e2
	orrs r1, r2	@ 000554e2 1143
.org 0x554e4
	ldr r2, [pc, #84]	@ 000554e4 154a
.org 0x554e6
	adds r1, r1, r2	@ 000554e6 8918
.org 0x554e8
	lsls r1, r1, #2	@ 000554e8 8900
.org 0x554ea
	adds r1, r1, r3	@ 000554ea c918
.org 0x554ec
	adds r2, r4, #0	@ 000554ec 221c
.org 0x554ee
	adds r2, #113	@ 000554ee 7132
.org 0x554f0
	ldrb r2, [r2, #0]	@ 000554f0 1278
.org 0x554f2
	lsls r2, r2, #24	@ 000554f2 1206
.org 0x554f4
	asrs r2, r2, #24	@ 000554f4 1216
.org 0x554f6
	ldr r1, [r1, #0]	@ 000554f6 0968
.org 0x554f8
	lsls r2, r2, #2	@ 000554f8 9200
.org 0x554fa
	adds r2, r2, r1	@ 000554fa 5218
.org 0x554fc
	ldr r1, [r2, #0]	@ 000554fc 1168
.org 0x554fe
	ldrb r2, [r1, #0]	@ 000554fe 0a78
.org 0x55500
	lsls r1, r2, #1	@ 00055500 5100
.org 0x55502
	adds r1, r1, r2	@ 00055502 8918
.org 0x55504
	lsls r1, r1, #3	@ 00055504 c900
.org 0x55506
	ldr r2, [pc, #56]	@ 00055506 0e4a
.org 0x55508
	adds r1, r1, r2	@ 00055508 8918
.org 0x5550a
	bl 0x5784	@ 0005550a b0f73bf9
.org 0x5550e
	ldr r0, [pc, #52]	@ 0005550e 0d48
.org 0x55510
	ldrh r1, [r0, #8]	@ 00055510 0189
.org 0x55512
	movs r0, #8	@ 00055512 0820
.org 0x55514
	ands r0, r1	@ 00055514 0840
.org 0x55516
	lsls r0, r0, #16	@ 00055516 0004
.org 0x55518
	lsrs r5, r0, #16	@ 00055518 050c
.org 0x5551a
	cmp r5, #0	@ 0005551a 002d
.org 0x5551c
	bne.n 0x5554e	@ 0005551c 17d1
.org 0x5551e
	adds r0, r4, #0	@ 0005551e 201c
.org 0x55520
	bl 0x597ac	@ 00055520 04f044f9
.org 0x55524
	cmp r0, #0	@ 00055524 0028
.org 0x55526
	beq.n 0x55548	@ 00055526 0fd0
.org 0x55528
	movs r0, #4	@ 00055528 0420
.org 0x5552a
	strb r0, [r4, #13]	@ 0005552a 6073
.org 0x5552c
	strb r5, [r4, #14]	@ 0005552c a573
.org 0x5552e
	strb r5, [r4, #15]	@ 0005552e e573
.org 0x55530
	b.n 0x5554e	@ 00055530 0de0
.org 0x55532
	.byte 0x00	@ 00055532 data
.org 0x55533
	.byte 0x00	@ 00055533 data
.org 0x55534
	.byte 0x06,0xa0,0x00,0x00	@ 00055534 data
.org 0x55538
	.byte 0x1c,0x87,0x85,0x08	@ 00055538 data
.org 0x5553c
	.byte 0x00,0x60,0xff,0xff	@ 0005553c data
