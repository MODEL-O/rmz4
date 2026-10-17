@ FUN_080fcc54  entry 0x080fcc54  size 334
.thumb
.org 0xfcc54
FUN_080fcc54:
	push {r4, r5, r6, r7, lr}	@ 000fcc54 f0b5
.org 0xfcc56
	adds r5, r0, #0	@ 000fcc56 051c
.org 0xfcc58
	ldrb r1, [r5, #10]	@ 000fcc58 a97a
.org 0xfcc5a
	movs r0, #1	@ 000fcc5a 0120
.org 0xfcc5c
	orrs r0, r1	@ 000fcc5c 0843
.org 0xfcc5e
	movs r1, #2	@ 000fcc5e 0221
.org 0xfcc60
	orrs r0, r1	@ 000fcc60 0843
.org 0xfcc62
	strb r0, [r5, #10]	@ 000fcc62 a872
.org 0xfcc64
	adds r0, r5, #0	@ 000fcc64 281c
.org 0xfcc66
	bl 0x1cc9c	@ 000fcc66 20f719f8
.org 0xfcc6a
	ldrb r1, [r5, #10]	@ 000fcc6a a97a
.org 0xfcc6c
	movs r0, #4	@ 000fcc6c 0420
.org 0xfcc6e
	orrs r0, r1	@ 000fcc6e 0843
.org 0xfcc70
	strb r0, [r5, #10]	@ 000fcc70 a872
.org 0xfcc72
	adds r4, r5, #0	@ 000fcc72 2c1c
.org 0xfcc74
	adds r4, #116	@ 000fcc74 7434
.org 0xfcc76
	ldr r7, [pc, #92]	@ 000fcc76 174f
.org 0xfcc78
	adds r2, r5, #0	@ 000fcc78 2a1c
.org 0xfcc7a
	adds r2, #84	@ 000fcc7a 5432
.org 0xfcc7c
	adds r0, r4, #0	@ 000fcc7c 201c
.org 0xfcc7e
	adds r1, r7, #0	@ 000fcc7e 391c
.org 0xfcc80
	movs r3, #255	@ 000fcc80 ff23
.org 0xfcc82
	bl 0x5760	@ 000fcc82 08f76dfd
.org 0xfcc86
	str r5, [r4, #44]	@ 000fcc86 e562
.org 0xfcc88
	ldr r0, [pc, #76]	@ 000fcc88 1348
.org 0xfcc8a
	str r0, [r4, #36]	@ 000fcc8a 6062
.org 0xfcc8c
	adds r6, r5, #0	@ 000fcc8c 2e1c
.org 0xfcc8e
	adds r6, #182	@ 000fcc8e b636
.org 0xfcc90
	movs r1, #159	@ 000fcc90 9f21
.org 0xfcc92
	lsls r1, r1, #8	@ 000fcc92 0902
.org 0xfcc94
	strh r1, [r6, #0]	@ 000fcc94 3180
.org 0xfcc96
	adds r0, r5, #0	@ 000fcc96 281c
.org 0xfcc98
	bl 0x1cf00	@ 000fcc98 20f732f9
.org 0xfcc9c
	ldr r0, [pc, #60]	@ 000fcc9c 0f48
.org 0xfcc9e
	ldrb r0, [r0, #0]	@ 000fcc9e 0078
.org 0xfcca0
	adds r2, r5, #0	@ 000fcca0 2a1c
.org 0xfcca2
	adds r2, #180	@ 000fcca2 b432
.org 0xfcca4
	strb r0, [r2, #0]	@ 000fcca4 1070
.org 0xfcca6
	ldrb r1, [r5, #10]	@ 000fcca6 a97a
.org 0xfcca8
	movs r0, #254	@ 000fcca8 fe20
.org 0xfccaa
	ands r0, r1	@ 000fccaa 0840
.org 0xfccac
	strb r0, [r5, #10]	@ 000fccac a872
.org 0xfccae
	movs r0, #0	@ 000fccae 0020
.org 0xfccb0
	ldrsb r0, [r2, r0]	@ 000fccb0 1056
.org 0xfccb2
	cmp r0, #0	@ 000fccb2 0028
.org 0xfccb4
	blt.n 0xfcce4	@ 000fccb4 16db
.org 0xfccb6
	ldrh r1, [r6, #0]	@ 000fccb6 3188
.org 0xfccb8
	ldr r0, [pc, #36]	@ 000fccb8 0948
.org 0xfccba
	cmp r1, r0	@ 000fccba 8142
.org 0xfccbc
	beq.n 0xfcce4	@ 000fccbc 12d0
.org 0xfccbe
	movs r0, #0	@ 000fccbe 0020
.org 0xfccc0
	ldrsb r0, [r2, r0]	@ 000fccc0 1056
.org 0xfccc2
	lsls r1, r0, #1	@ 000fccc2 4100
.org 0xfccc4
	adds r1, r1, r0	@ 000fccc4 0918
.org 0xfccc6
	lsls r1, r1, #3	@ 000fccc6 c900
.org 0xfccc8
	adds r1, r1, r7	@ 000fccc8 c919
.org 0xfccca
	adds r0, r4, #0	@ 000fccca 201c
.org 0xfcccc
	bl 0x5784	@ 000fcccc 08f75afd
.org 0xfccd0
	b.n 0xfccee	@ 000fccd0 0de0
.org 0xfccd2
	.byte 0x00	@ 000fccd2 data
.org 0xfccd3
	.byte 0x00	@ 000fccd3 data
.org 0xfccd4
	.byte 0x3c,0xaf,0x86,0x08	@ 000fccd4 data
.org 0xfccd8
	.byte 0x7d,0xdf,0x0f,0x08	@ 000fccd8 data
.org 0xfccdc
	.byte 0xcc,0xaf,0x86,0x08	@ 000fccdc data
.org 0xfcce0
	.byte 0x07,0x9f,0x00,0x00	@ 000fcce0 data
.org 0xfcce4
	adds r0, r5, #0	@ 000fcce4 281c
.org 0xfcce6
	adds r0, #116	@ 000fcce6 7430
.org 0xfcce8
	ldr r1, [pc, #36]	@ 000fcce8 0949
.org 0xfccea
	bl 0x5784	@ 000fccea 08f74bfd
.org 0xfccee
	adds r2, r5, #0	@ 000fccee 2a1c
.org 0xfccf0
	adds r2, #180	@ 000fccf0 b432
.org 0xfccf2
	movs r0, #0	@ 000fccf2 0020
.org 0xfccf4
	ldrsb r0, [r2, r0]	@ 000fccf4 1056
.org 0xfccf6
	cmp r0, #0	@ 000fccf6 0028
.org 0xfccf8
	ble.n 0xfcd18	@ 000fccf8 0edd
.org 0xfccfa
	ldrb r1, [r5, #11]	@ 000fccfa e97a
.org 0xfccfc
	movs r0, #8	@ 000fccfc 0820
.org 0xfccfe
	orrs r0, r1	@ 000fccfe 0843
.org 0xfcd00
	strb r0, [r5, #11]	@ 000fcd00 e872
.org 0xfcd02
	movs r0, #0	@ 000fcd02 0020
.org 0xfcd04
	ldrsb r0, [r2, r0]	@ 000fcd04 1056
.org 0xfcd06
	lsls r0, r0, #3	@ 000fcd06 c000
.org 0xfcd08
	ldr r1, [pc, #8]	@ 000fcd08 0249
.org 0xfcd0a
	adds r0, r0, r1	@ 000fcd0a 4018
.org 0xfcd0c
	b.n 0xfcd3a	@ 000fcd0c 15e0
.org 0xfcd0e
	.byte 0x00	@ 000fcd0e data
.org 0xfcd0f
	.byte 0x00	@ 000fcd0f data
.org 0xfcd10
	.byte 0xb4,0xaf,0x86,0x08	@ 000fcd10 data
.org 0xfcd14
	.byte 0xdc,0xaf,0x86,0x08	@ 000fcd14 data
.org 0xfcd18
	cmp r0, #0	@ 000fcd18 0028
.org 0xfcd1a
	bne.n 0xfcd4c	@ 000fcd1a 17d1
.org 0xfcd1c
	ldrb r0, [r5, #30]	@ 000fcd1c a87f
.org 0xfcd1e
	lsls r0, r0, #8	@ 000fcd1e 0002
.org 0xfcd20
	adds r1, r5, #0	@ 000fcd20 291c
.org 0xfcd22
	adds r1, #112	@ 000fcd22 7031
.org 0xfcd24
	ldrb r1, [r1, #0]	@ 000fcd24 0978
.org 0xfcd26
	orrs r0, r1	@ 000fcd26 0843
.org 0xfcd28
	movs r1, #159	@ 000fcd28 9f21
.org 0xfcd2a
	lsls r1, r1, #8	@ 000fcd2a 0902
.org 0xfcd2c
	cmp r0, r1	@ 000fcd2c 8842
.org 0xfcd2e
	beq.n 0xfcd4c	@ 000fcd2e 0dd0
.org 0xfcd30
	ldrb r1, [r5, #11]	@ 000fcd30 e97a
.org 0xfcd32
	movs r0, #8	@ 000fcd32 0820
.org 0xfcd34
	orrs r0, r1	@ 000fcd34 0843
.org 0xfcd36
	strb r0, [r5, #11]	@ 000fcd36 e872
.org 0xfcd38
	ldr r0, [pc, #8]	@ 000fcd38 0248
.org 0xfcd3a
	str r0, [r5, #48]	@ 000fcd3a 2863
.org 0xfcd3c
	ldr r0, [pc, #8]	@ 000fcd3c 0248
.org 0xfcd3e
	strh r0, [r5, #38]	@ 000fcd3e e884
.org 0xfcd40
	b.n 0xfcd54	@ 000fcd40 08e0
.org 0xfcd42
	.byte 0x00	@ 000fcd42 data
.org 0xfcd43
	.byte 0x00	@ 000fcd43 data
.org 0xfcd44
	.byte 0xdc,0xaf,0x86,0x08	@ 000fcd44 data
.org 0xfcd48
	.byte 0x01,0x02,0x00,0x00	@ 000fcd48 data
.org 0xfcd4c
	ldrb r1, [r5, #11]	@ 000fcd4c e97a
.org 0xfcd4e
	movs r0, #247	@ 000fcd4e f720
.org 0xfcd50
	ands r0, r1	@ 000fcd50 0840
.org 0xfcd52
	strb r0, [r5, #11]	@ 000fcd52 e872
.org 0xfcd54
	adds r2, r5, #0	@ 000fcd54 2a1c
.org 0xfcd56
	adds r2, #73	@ 000fcd56 4932
.org 0xfcd58
	ldrb r1, [r2, #0]	@ 000fcd58 1178
.org 0xfcd5a
	movs r0, #13	@ 000fcd5a 0d20
.org 0xfcd5c
	negs r0, r0	@ 000fcd5c 4042
.org 0xfcd5e
	ands r0, r1	@ 000fcd5e 0840
.org 0xfcd60
	movs r1, #4	@ 000fcd60 0421
.org 0xfcd62
	orrs r0, r1	@ 000fcd62 0843
.org 0xfcd64
	strb r0, [r2, #0]	@ 000fcd64 1070
.org 0xfcd66
	movs r7, #0	@ 000fcd66 0027
.org 0xfcd68
	movs r6, #1	@ 000fcd68 0126
.org 0xfcd6a
	strb r6, [r5, #19]	@ 000fcd6a ee74
.org 0xfcd6c
	ldr r4, [pc, #88]	@ 000fcd6c 164c
.org 0xfcd6e
	ldrb r1, [r5, #17]	@ 000fcd6e 697c
.org 0xfcd70
	lsrs r2, r1, #5	@ 000fcd70 4a09
.org 0xfcd72
	adds r2, #1	@ 000fcd72 0132
.org 0xfcd74
	lsls r2, r2, #2	@ 000fcd74 9200
.org 0xfcd76
	ldr r0, [pc, #84]	@ 000fcd76 1548
.org 0xfcd78
	adds r4, r4, r0	@ 000fcd78 2418
.org 0xfcd7a
	adds r2, r2, r4	@ 000fcd7a 1219
.org 0xfcd7c
	movs r3, #31	@ 000fcd7c 1f23
.org 0xfcd7e
	adds r0, r3, #0	@ 000fcd7e 181c
.org 0xfcd80
	ands r0, r1	@ 000fcd80 0840
.org 0xfcd82
	adds r1, r6, #0	@ 000fcd82 311c
.org 0xfcd84
	lsls r1, r0	@ 000fcd84 8140
.org 0xfcd86
	ldr r0, [r2, #0]	@ 000fcd86 1068
.org 0xfcd88
	orrs r0, r1	@ 000fcd88 0843
.org 0xfcd8a
	str r0, [r2, #0]	@ 000fcd8a 1060
.org 0xfcd8c
	ldrb r1, [r5, #17]	@ 000fcd8c 697c
.org 0xfcd8e
	lsrs r0, r1, #5	@ 000fcd8e 4809
.org 0xfcd90
	adds r0, #4	@ 000fcd90 0430
.org 0xfcd92
	lsls r0, r0, #2	@ 000fcd92 8000
.org 0xfcd94
	adds r0, r0, r4	@ 000fcd94 0019
.org 0xfcd96
	ands r3, r1	@ 000fcd96 0b40
.org 0xfcd98
	adds r1, r6, #0	@ 000fcd98 311c
.org 0xfcd9a
	lsls r1, r3	@ 000fcd9a 9940
.org 0xfcd9c
	ldr r0, [r0, #0]	@ 000fcd9c 0068
.org 0xfcd9e
	ands r0, r1	@ 000fcd9e 0840
.org 0xfcda0
	cmp r0, #0	@ 000fcda0 0028
