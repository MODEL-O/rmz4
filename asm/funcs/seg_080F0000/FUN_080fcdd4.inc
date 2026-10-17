@ FUN_080fcdd4  entry 0x080fcdd4  size 382
.thumb
.org 0xfcdd4
FUN_080fcdd4:
	push {r4, r5, r6, lr}	@ 000fcdd4 70b5
.org 0xfcdd6
	adds r4, r0, #0	@ 000fcdd6 041c
.org 0xfcdd8
	ldr r0, [pc, #68]	@ 000fcdd8 1148
.org 0xfcdda
	ldr r5, [r0, #0]	@ 000fcdda 0568
.org 0xfcddc
	ldr r0, [r5, #84]	@ 000fcddc 686d
.org 0xfcdde
	ldr r1, [r4, #84]	@ 000fcdde 616d
.org 0xfcde0
	subs r0, r0, r1	@ 000fcde0 401a
.org 0xfcde2
	lsrs r2, r0, #31	@ 000fcde2 c20f
.org 0xfcde4
	adds r0, r4, #0	@ 000fcde4 201c
.org 0xfcde6
	adds r0, #181	@ 000fcde6 b530
.org 0xfcde8
	movs r6, #0	@ 000fcde8 0026
.org 0xfcdea
	strb r2, [r0, #0]	@ 000fcdea 0270
.org 0xfcdec
	subs r0, #41	@ 000fcdec 2938
.org 0xfcdee
	ldr r1, [r0, #0]	@ 000fcdee 0168
.org 0xfcdf0
	movs r3, #1	@ 000fcdf0 0123
.org 0xfcdf2
	adds r0, r1, #0	@ 000fcdf2 081c
.org 0xfcdf4
	ands r0, r3	@ 000fcdf4 1840
.org 0xfcdf6
	cmp r0, #0	@ 000fcdf6 0028
.org 0xfcdf8
	beq.n 0xfce6a	@ 000fcdf8 37d0
.org 0xfcdfa
	movs r2, #128	@ 000fcdfa 8022
.org 0xfcdfc
	lsls r2, r2, #10	@ 000fcdfc 9202
.org 0xfcdfe
	ands r2, r1	@ 000fcdfe 0a40
.org 0xfce00
	cmp r2, #0	@ 000fce00 002a
.org 0xfce02
	beq.n 0xfce24	@ 000fce02 0fd0
.org 0xfce04
	ldrb r0, [r4, #16]	@ 000fce04 207c
.org 0xfce06
	cmp r0, #1	@ 000fce06 0128
.org 0xfce08
	bne.n 0xfce0c	@ 000fce08 00d1
.org 0xfce0a
	b.n 0xfcf62	@ 000fce0a aae0
.org 0xfce0c
	strb r3, [r4, #16]	@ 000fce0c 2374
.org 0xfce0e
	strb r6, [r4, #13]	@ 000fce0e 6673
.org 0xfce10
	strb r6, [r4, #14]	@ 000fce10 a673
.org 0xfce12
	adds r0, r5, #0	@ 000fce12 281c
.org 0xfce14
	movs r1, #8	@ 000fce14 0821
.org 0xfce16
	movs r2, #0	@ 000fce16 0022
.org 0xfce18
	bl 0x3a578	@ 000fce18 3df7aefb
.org 0xfce1c
	b.n 0xfcf62	@ 000fce1c a1e0
.org 0xfce1e
	.byte 0x00	@ 000fce1e data
.org 0xfce1f
	.byte 0x00	@ 000fce1f data
.org 0xfce20
	.byte 0xf0,0xdb,0x02,0x02	@ 000fce20 data
.org 0xfce24
	adds r0, r4, #0	@ 000fce24 201c
.org 0xfce26
	adds r0, #151	@ 000fce26 9730
.org 0xfce28
	ldrb r1, [r0, #0]	@ 000fce28 0178
.org 0xfce2a
	movs r0, #240	@ 000fce2a f020
.org 0xfce2c
	ands r0, r1	@ 000fce2c 0840
.org 0xfce2e
	cmp r0, #32	@ 000fce2e 2028
.org 0xfce30
	bne.n 0xfce3e	@ 000fce30 05d1
.org 0xfce32
	ldrb r0, [r4, #16]	@ 000fce32 207c
.org 0xfce34
	cmp r0, #2	@ 000fce34 0228
.org 0xfce36
	bne.n 0xfce3a	@ 000fce36 00d1
.org 0xfce38
	b.n 0xfcf62	@ 000fce38 93e0
.org 0xfce3a
	movs r0, #2	@ 000fce3a 0220
.org 0xfce3c
	b.n 0xfce62	@ 000fce3c 11e0
.org 0xfce3e
	ldrb r0, [r4, #16]	@ 000fce3e 207c
.org 0xfce40
	cmp r0, #0	@ 000fce40 0028
.org 0xfce42
	beq.n 0xfce52	@ 000fce42 06d0
.org 0xfce44
	cmp r0, #3	@ 000fce44 0328
.org 0xfce46
	beq.n 0xfce4a	@ 000fce46 00d0
.org 0xfce48
	b.n 0xfcf62	@ 000fce48 8be0
.org 0xfce4a
	ldrb r0, [r4, #13]	@ 000fce4a 607b
.org 0xfce4c
	cmp r0, #2	@ 000fce4c 0228
.org 0xfce4e
	beq.n 0xfce52	@ 000fce4e 00d0
.org 0xfce50
	b.n 0xfcf62	@ 000fce50 87e0
.org 0xfce52
	adds r0, r4, #0	@ 000fce52 201c
.org 0xfce54
	adds r0, #164	@ 000fce54 a430
.org 0xfce56
	movs r1, #0	@ 000fce56 0021
.org 0xfce58
	ldrsh r0, [r0, r1]	@ 000fce58 405e
.org 0xfce5a
	cmp r0, #249	@ 000fce5a f928
.org 0xfce5c
	ble.n 0xfce60	@ 000fce5c 00dd
.org 0xfce5e
	b.n 0xfcf62	@ 000fce5e 80e0
.org 0xfce60
	movs r0, #3	@ 000fce60 0320
.org 0xfce62
	strb r0, [r4, #16]	@ 000fce62 2074
.org 0xfce64
	strb r2, [r4, #13]	@ 000fce64 6273
.org 0xfce66
	strb r2, [r4, #14]	@ 000fce66 a273
.org 0xfce68
	b.n 0xfcf62	@ 000fce68 7be0
.org 0xfce6a
	cmp r2, #0	@ 000fce6a 002a
.org 0xfce6c
	beq.n 0xfceca	@ 000fce6c 2dd0
.org 0xfce6e
	ldr r1, [pc, #72]	@ 000fce6e 1249
.org 0xfce70
	ldrb r2, [r4, #17]	@ 000fce70 627c
.org 0xfce72
	subs r2, #1	@ 000fce72 013a
.org 0xfce74
	asrs r0, r2, #5	@ 000fce74 5011
.org 0xfce76
	adds r0, #1	@ 000fce76 0130
.org 0xfce78
	lsls r0, r0, #2	@ 000fce78 8000
.org 0xfce7a
	ldr r5, [pc, #64]	@ 000fce7a 104d
.org 0xfce7c
	adds r1, r1, r5	@ 000fce7c 4919
.org 0xfce7e
	adds r0, r0, r1	@ 000fce7e 4018
.org 0xfce80
	movs r1, #31	@ 000fce80 1f21
.org 0xfce82
	ands r2, r1	@ 000fce82 0a40
.org 0xfce84
	adds r1, r3, #0	@ 000fce84 191c
.org 0xfce86
	lsls r1, r2	@ 000fce86 9140
.org 0xfce88
	ldr r0, [r0, #0]	@ 000fce88 0068
.org 0xfce8a
	ands r0, r1	@ 000fce8a 0840
.org 0xfce8c
	cmp r0, #0	@ 000fce8c 0028
.org 0xfce8e
	bne.n 0xfcec4	@ 000fce8e 19d1
.org 0xfce90
	ldrb r0, [r4, #16]	@ 000fce90 207c
.org 0xfce92
	cmp r0, #2	@ 000fce92 0228
.org 0xfce94
	beq.n 0xfcec4	@ 000fce94 16d0
.org 0xfce96
	ldrb r0, [r4, #19]	@ 000fce96 e07c
.org 0xfce98
	cmp r0, #0	@ 000fce98 0028
.org 0xfce9a
	bne.n 0xfcef8	@ 000fce9a 2dd1
.org 0xfce9c
	adds r2, r4, #0	@ 000fce9c 221c
.org 0xfce9e
	adds r2, #180	@ 000fce9e b432
.org 0xfcea0
	movs r0, #0	@ 000fcea0 0020
.org 0xfcea2
	ldrsb r0, [r2, r0]	@ 000fcea2 1056
.org 0xfcea4
	cmp r0, #0	@ 000fcea4 0028
.org 0xfcea6
	blt.n 0xfcf44	@ 000fcea6 4ddb
.org 0xfcea8
	adds r0, r4, #0	@ 000fcea8 201c
.org 0xfceaa
	adds r0, #182	@ 000fceaa b630
.org 0xfceac
	ldrh r1, [r0, #0]	@ 000fceac 0188
.org 0xfceae
	ldr r0, [pc, #16]	@ 000fceae 0448
.org 0xfceb0
	cmp r1, r0	@ 000fceb0 8142
.org 0xfceb2
	bne.n 0xfcf20	@ 000fceb2 35d1
.org 0xfceb4
	b.n 0xfcf44	@ 000fceb4 46e0
.org 0xfceb6
	.byte 0x00	@ 000fceb6 data
.org 0xfceb7
	.byte 0x00	@ 000fceb7 data
.org 0xfceb8
	.byte 0xb0,0x0a,0x00,0x02	@ 000fceb8 data
.org 0xfcebc
	.byte 0x28,0xd0,0x02,0x00	@ 000fcebc data
.org 0xfcec0
	.byte 0x07,0x9f,0x00,0x00	@ 000fcec0 data
.org 0xfcec4
	movs r0, #1	@ 000fcec4 0120
.org 0xfcec6
	strb r0, [r4, #19]	@ 000fcec6 e074
.org 0xfcec8
	b.n 0xfcf44	@ 000fcec8 3ce0
.org 0xfceca
	ldr r1, [pc, #52]	@ 000fceca 0d49
.org 0xfcecc
	ldrb r2, [r4, #17]	@ 000fcecc 627c
.org 0xfcece
	adds r2, #1	@ 000fcece 0132
.org 0xfced0
	asrs r0, r2, #5	@ 000fced0 5011
.org 0xfced2
	adds r0, #1	@ 000fced2 0130
.org 0xfced4
	lsls r0, r0, #2	@ 000fced4 8000
.org 0xfced6
	ldr r5, [pc, #44]	@ 000fced6 0b4d
.org 0xfced8
	adds r1, r1, r5	@ 000fced8 4919
.org 0xfceda
	adds r0, r0, r1	@ 000fceda 4018
.org 0xfcedc
	movs r1, #31	@ 000fcedc 1f21
.org 0xfcede
	ands r2, r1	@ 000fcede 0a40
.org 0xfcee0
	adds r1, r3, #0	@ 000fcee0 191c
.org 0xfcee2
	lsls r1, r2	@ 000fcee2 9140
.org 0xfcee4
	ldr r0, [r0, #0]	@ 000fcee4 0068
.org 0xfcee6
	ands r0, r1	@ 000fcee6 0840
.org 0xfcee8
	cmp r0, #0	@ 000fcee8 0028
.org 0xfceea
	bne.n 0xfcf54	@ 000fceea 33d1
.org 0xfceec
	ldrb r0, [r4, #16]	@ 000fceec 207c
.org 0xfceee
	cmp r0, #2	@ 000fceee 0228
.org 0xfcef0
	beq.n 0xfcf54	@ 000fcef0 30d0
.org 0xfcef2
	ldrb r0, [r4, #19]	@ 000fcef2 e07c
.org 0xfcef4
	cmp r0, #0	@ 000fcef4 0028
.org 0xfcef6
	beq.n 0xfcf08	@ 000fcef6 07d0
.org 0xfcef8
	subs r0, #1	@ 000fcef8 0138
.org 0xfcefa
	strb r0, [r4, #19]	@ 000fcefa e074
.org 0xfcefc
	b.n 0xfcf62	@ 000fcefc 31e0
.org 0xfcefe
	.byte 0x00	@ 000fcefe data
.org 0xfceff
	.byte 0x00	@ 000fceff data
.org 0xfcf00
	.byte 0xb0,0x0a,0x00,0x02	@ 000fcf00 data
.org 0xfcf04
	.byte 0x28,0xd0,0x02,0x00	@ 000fcf04 data
.org 0xfcf08
	adds r2, r4, #0	@ 000fcf08 221c
.org 0xfcf0a
	adds r2, #180	@ 000fcf0a b432
.org 0xfcf0c
	movs r0, #0	@ 000fcf0c 0020
.org 0xfcf0e
	ldrsb r0, [r2, r0]	@ 000fcf0e 1056
.org 0xfcf10
	cmp r0, #0	@ 000fcf10 0028
.org 0xfcf12
	blt.n 0xfcf44	@ 000fcf12 17db
.org 0xfcf14
	adds r0, r4, #0	@ 000fcf14 201c
.org 0xfcf16
	adds r0, #182	@ 000fcf16 b630
.org 0xfcf18
	ldrh r1, [r0, #0]	@ 000fcf18 0188
.org 0xfcf1a
	ldr r0, [pc, #32]	@ 000fcf1a 0848
.org 0xfcf1c
	cmp r1, r0	@ 000fcf1c 8142
.org 0xfcf1e
	beq.n 0xfcf44	@ 000fcf1e 11d0
.org 0xfcf20
	adds r0, r4, #0	@ 000fcf20 201c
.org 0xfcf22
	adds r0, #116	@ 000fcf22 7430
.org 0xfcf24
	ldrb r2, [r2, #0]	@ 000fcf24 1278
.org 0xfcf26
	lsls r2, r2, #24	@ 000fcf26 1206
.org 0xfcf28
	asrs r2, r2, #24	@ 000fcf28 1216
.org 0xfcf2a
	lsls r1, r2, #1	@ 000fcf2a 5100
.org 0xfcf2c
	adds r1, r1, r2	@ 000fcf2c 8918
.org 0xfcf2e
	lsls r1, r1, #3	@ 000fcf2e c900
.org 0xfcf30
	ldr r2, [pc, #12]	@ 000fcf30 034a
.org 0xfcf32
	adds r1, r1, r2	@ 000fcf32 8918
.org 0xfcf34
	bl 0x5784	@ 000fcf34 08f726fc
.org 0xfcf38
	b.n 0xfcf62	@ 000fcf38 13e0
.org 0xfcf3a
	.byte 0x00	@ 000fcf3a data
.org 0xfcf3b
	.byte 0x00	@ 000fcf3b data
.org 0xfcf3c
	.byte 0x07,0x9f,0x00,0x00	@ 000fcf3c data
.org 0xfcf40
	.byte 0x3c,0xaf,0x86,0x08	@ 000fcf40 data
.org 0xfcf44
	adds r0, r4, #0	@ 000fcf44 201c
.org 0xfcf46
	adds r0, #116	@ 000fcf46 7430
.org 0xfcf48
	ldr r1, [pc, #4]	@ 000fcf48 0149
.org 0xfcf4a
	bl 0x5784	@ 000fcf4a 08f71bfc
.org 0xfcf4e
	b.n 0xfcf62	@ 000fcf4e 08e0
.org 0xfcf50
	.byte 0xb4,0xaf,0x86,0x08	@ 000fcf50 data
