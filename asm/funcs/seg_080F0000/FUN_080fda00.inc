@ FUN_080fda00  entry 0x080fda00  size 874
.thumb
.org 0xfda00
FUN_080fda00:
	push {r4, r5, r6, r7, lr}	@ 000fda00 f0b5
.org 0xfda02
	adds r5, r0, #0	@ 000fda02 051c
.org 0xfda04
	ldrb r0, [r5, #13]	@ 000fda04 687b
.org 0xfda06
	cmp r0, #1	@ 000fda06 0128
.org 0xfda08
	bne.n 0xfda0c	@ 000fda08 00d1
.org 0xfda0a
	b.n 0xfdbde	@ 000fda0a e8e0
.org 0xfda0c
	cmp r0, #1	@ 000fda0c 0128
.org 0xfda0e
	bgt.n 0xfda16	@ 000fda0e 02dc
.org 0xfda10
	cmp r0, #0	@ 000fda10 0028
.org 0xfda12
	beq.n 0xfda24	@ 000fda12 07d0
.org 0xfda14
	b.n 0xfde06	@ 000fda14 f7e1
.org 0xfda16
	cmp r0, #2	@ 000fda16 0228
.org 0xfda18
	bne.n 0xfda1c	@ 000fda18 00d1
.org 0xfda1a
	b.n 0xfdcc4	@ 000fda1a 53e1
.org 0xfda1c
	cmp r0, #3	@ 000fda1c 0328
.org 0xfda1e
	bne.n 0xfda22	@ 000fda1e 00d1
.org 0xfda20
	b.n 0xfddd2	@ 000fda20 d7e1
.org 0xfda22
	b.n 0xfde06	@ 000fda22 f0e1
.org 0xfda24
	adds r0, r5, #0	@ 000fda24 281c
.org 0xfda26
	adds r0, #181	@ 000fda26 b530
.org 0xfda28
	ldrb r0, [r0, #0]	@ 000fda28 0078
.org 0xfda2a
	lsls r0, r0, #24	@ 000fda2a 0006
.org 0xfda2c
	asrs r0, r0, #24	@ 000fda2c 0016
.org 0xfda2e
	cmp r0, #0	@ 000fda2e 0028
.org 0xfda30
	beq.n 0xfdaac	@ 000fda30 3cd0
.org 0xfda32
	adds r0, r5, #0	@ 000fda32 281c
.org 0xfda34
	adds r0, #182	@ 000fda34 b630
.org 0xfda36
	ldrh r1, [r0, #0]	@ 000fda36 0188
.org 0xfda38
	ldr r4, [pc, #20]	@ 000fda38 054c
.org 0xfda3a
	adds r6, r0, #0	@ 000fda3a 061c
.org 0xfda3c
	cmp r1, r4	@ 000fda3c a142
.org 0xfda3e
	beq.n 0xfda7c	@ 000fda3e 1dd0
.org 0xfda40
	cmp r1, r4	@ 000fda40 a142
.org 0xfda42
	bgt.n 0xfda54	@ 000fda42 07dc
.org 0xfda44
	movs r0, #159	@ 000fda44 9f20
.org 0xfda46
	lsls r0, r0, #8	@ 000fda46 0002
.org 0xfda48
	cmp r1, r0	@ 000fda48 8142
.org 0xfda4a
	beq.n 0xfda60	@ 000fda4a 09d0
.org 0xfda4c
	b.n 0xfdad2	@ 000fda4c 41e0
.org 0xfda4e
	.byte 0x00	@ 000fda4e data
.org 0xfda4f
	.byte 0x00	@ 000fda4f data
.org 0xfda50
	.byte 0x02,0x9f,0x00,0x00	@ 000fda50 data
.org 0xfda54
	ldr r0, [pc, #4]	@ 000fda54 0148
.org 0xfda56
	cmp r1, r0	@ 000fda56 8142
.org 0xfda58
	beq.n 0xfda94	@ 000fda58 1cd0
.org 0xfda5a
	b.n 0xfdad2	@ 000fda5a 3ae0
.org 0xfda5c
	.byte 0x04,0x9f,0x00,0x00	@ 000fda5c data
.org 0xfda60
	ldr r0, [r5, #84]	@ 000fda60 686d
.org 0xfda62
	ldr r1, [r5, #88]	@ 000fda62 a96d
.org 0xfda64
	bl 0x127c8	@ 000fda64 14f7b0fe
.org 0xfda68
	strh r4, [r6, #0]	@ 000fda68 3480
.org 0xfda6a
	adds r0, r5, #0	@ 000fda6a 281c
.org 0xfda6c
	adds r1, r4, #0	@ 000fda6c 211c
.org 0xfda6e
	bl 0x1cf00	@ 000fda6e 1ff747fa
.org 0xfda72
	ldr r0, [pc, #4]	@ 000fda72 0148
.org 0xfda74
	ldrb r1, [r0, #2]	@ 000fda74 8178
.org 0xfda76
	b.n 0xfdb1e	@ 000fda76 52e0
.org 0xfda78
	.byte 0xcc,0xaf,0x86,0x08	@ 000fda78 data
.org 0xfda7c
	ldr r1, [pc, #12]	@ 000fda7c 0349
.org 0xfda7e
	strh r1, [r6, #0]	@ 000fda7e 3180
.org 0xfda80
	adds r0, r5, #0	@ 000fda80 281c
.org 0xfda82
	bl 0x1cf00	@ 000fda82 1ff73dfa
.org 0xfda86
	ldr r0, [pc, #8]	@ 000fda86 0248
.org 0xfda88
	ldrb r1, [r0, #4]	@ 000fda88 0179
.org 0xfda8a
	b.n 0xfdb1e	@ 000fda8a 48e0
.org 0xfda8c
	.byte 0x04,0x9f,0x00,0x00	@ 000fda8c data
.org 0xfda90
	.byte 0xcc,0xaf,0x86,0x08	@ 000fda90 data
.org 0xfda94
	ldr r1, [pc, #12]	@ 000fda94 0349
.org 0xfda96
	strh r1, [r6, #0]	@ 000fda96 3180
.org 0xfda98
	adds r0, r5, #0	@ 000fda98 281c
.org 0xfda9a
	bl 0x1cf00	@ 000fda9a 1ff731fa
.org 0xfda9e
	ldr r0, [pc, #8]	@ 000fda9e 0248
.org 0xfdaa0
	ldrb r1, [r0, #6]	@ 000fdaa0 8179
.org 0xfdaa2
	b.n 0xfdb1e	@ 000fdaa2 3ce0
.org 0xfdaa4
	.byte 0x06,0x9f,0x00,0x00	@ 000fdaa4 data
.org 0xfdaa8
	.byte 0xcc,0xaf,0x86,0x08	@ 000fdaa8 data
.org 0xfdaac
	adds r0, r5, #0	@ 000fdaac 281c
.org 0xfdaae
	adds r0, #182	@ 000fdaae b630
.org 0xfdab0
	ldrh r1, [r0, #0]	@ 000fdab0 0188
.org 0xfdab2
	ldr r4, [pc, #20]	@ 000fdab2 054c
.org 0xfdab4
	adds r6, r0, #0	@ 000fdab4 061c
.org 0xfdab6
	cmp r1, r4	@ 000fdab6 a142
.org 0xfdab8
	beq.n 0xfdaf8	@ 000fdab8 1ed0
.org 0xfdaba
	cmp r1, r4	@ 000fdaba a142
.org 0xfdabc
	bgt.n 0xfdacc	@ 000fdabc 06dc
.org 0xfdabe
	movs r0, #159	@ 000fdabe 9f20
.org 0xfdac0
	lsls r0, r0, #8	@ 000fdac0 0002
.org 0xfdac2
	cmp r1, r0	@ 000fdac2 8142
.org 0xfdac4
	beq.n 0xfdadc	@ 000fdac4 0ad0
.org 0xfdac6
	b.n 0xfdad2	@ 000fdac6 04e0
.org 0xfdac8
	.byte 0x08,0x9f,0x00,0x00	@ 000fdac8 data
.org 0xfdacc
	ldr r0, [pc, #8]	@ 000fdacc 0248
.org 0xfdace
	cmp r1, r0	@ 000fdace 8142
.org 0xfdad0
	beq.n 0xfdb10	@ 000fdad0 1ed0
.org 0xfdad2
	adds r4, r5, #0	@ 000fdad2 2c1c
.org 0xfdad4
	adds r4, #180	@ 000fdad4 b434
.org 0xfdad6
	b.n 0xfdb26	@ 000fdad6 26e0
.org 0xfdad8
	.byte 0x0a,0x9f,0x00,0x00	@ 000fdad8 data
.org 0xfdadc
	ldr r0, [r5, #84]	@ 000fdadc 686d
.org 0xfdade
	ldr r1, [r5, #88]	@ 000fdade a96d
.org 0xfdae0
	bl 0x127c8	@ 000fdae0 14f772fe
.org 0xfdae4
	strh r4, [r6, #0]	@ 000fdae4 3480
.org 0xfdae6
	adds r0, r5, #0	@ 000fdae6 281c
.org 0xfdae8
	adds r1, r4, #0	@ 000fdae8 211c
.org 0xfdaea
	bl 0x1cf00	@ 000fdaea 1ff709fa
.org 0xfdaee
	ldr r0, [pc, #4]	@ 000fdaee 0148
.org 0xfdaf0
	ldrb r1, [r0, #8]	@ 000fdaf0 017a
.org 0xfdaf2
	b.n 0xfdb1e	@ 000fdaf2 14e0
.org 0xfdaf4
	.byte 0xcc,0xaf,0x86,0x08	@ 000fdaf4 data
.org 0xfdaf8
	ldr r1, [pc, #12]	@ 000fdaf8 0349
.org 0xfdafa
	strh r1, [r6, #0]	@ 000fdafa 3180
.org 0xfdafc
	adds r0, r5, #0	@ 000fdafc 281c
.org 0xfdafe
	bl 0x1cf00	@ 000fdafe 1ff7fff9
.org 0xfdb02
	ldr r0, [pc, #8]	@ 000fdb02 0248
.org 0xfdb04
	ldrb r1, [r0, #10]	@ 000fdb04 817a
.org 0xfdb06
	b.n 0xfdb1e	@ 000fdb06 0ae0
.org 0xfdb08
	.byte 0x0a,0x9f,0x00,0x00	@ 000fdb08 data
.org 0xfdb0c
	.byte 0xcc,0xaf,0x86,0x08	@ 000fdb0c data
.org 0xfdb10
	ldr r1, [pc, #72]	@ 000fdb10 1249
.org 0xfdb12
	strh r1, [r6, #0]	@ 000fdb12 3180
.org 0xfdb14
	adds r0, r5, #0	@ 000fdb14 281c
.org 0xfdb16
	bl 0x1cf00	@ 000fdb16 1ff7f3f9
.org 0xfdb1a
	ldr r0, [pc, #68]	@ 000fdb1a 1148
.org 0xfdb1c
	ldrb r1, [r0, #12]	@ 000fdb1c 017b
.org 0xfdb1e
	adds r0, r5, #0	@ 000fdb1e 281c
.org 0xfdb20
	adds r0, #180	@ 000fdb20 b430
.org 0xfdb22
	strb r1, [r0, #0]	@ 000fdb22 0170
.org 0xfdb24
	adds r4, r0, #0	@ 000fdb24 041c
.org 0xfdb26
	ldrb r1, [r5, #10]	@ 000fdb26 a97a
.org 0xfdb28
	movs r0, #1	@ 000fdb28 0120
.org 0xfdb2a
	orrs r0, r1	@ 000fdb2a 0843
.org 0xfdb2c
	strb r0, [r5, #10]	@ 000fdb2c a872
.org 0xfdb2e
	movs r0, #48	@ 000fdb2e 3020
.org 0xfdb30
	strb r0, [r5, #18]	@ 000fdb30 a874
.org 0xfdb32
	movs r0, #0	@ 000fdb32 0020
.org 0xfdb34
	ldrsb r0, [r4, r0]	@ 000fdb34 2056
.org 0xfdb36
	cmp r0, #0	@ 000fdb36 0028
.org 0xfdb38
	blt.n 0xfdb6c	@ 000fdb38 18db
.org 0xfdb3a
	ldrh r1, [r6, #0]	@ 000fdb3a 3188
.org 0xfdb3c
	ldr r0, [pc, #36]	@ 000fdb3c 0948
.org 0xfdb3e
	cmp r1, r0	@ 000fdb3e 8142
.org 0xfdb40
	beq.n 0xfdb6c	@ 000fdb40 14d0
.org 0xfdb42
	adds r0, r5, #0	@ 000fdb42 281c
.org 0xfdb44
	adds r0, #116	@ 000fdb44 7430
.org 0xfdb46
	movs r2, #0	@ 000fdb46 0022
.org 0xfdb48
	ldrsb r2, [r4, r2]	@ 000fdb48 a256
.org 0xfdb4a
	lsls r1, r2, #1	@ 000fdb4a 5100
.org 0xfdb4c
	adds r1, r1, r2	@ 000fdb4c 8918
.org 0xfdb4e
	lsls r1, r1, #3	@ 000fdb4e c900
.org 0xfdb50
	ldr r2, [pc, #20]	@ 000fdb50 054a
.org 0xfdb52
	adds r1, r1, r2	@ 000fdb52 8918
.org 0xfdb54
	bl 0x5784	@ 000fdb54 07f716fe
.org 0xfdb58
	b.n 0xfdb76	@ 000fdb58 0de0
.org 0xfdb5a
	.byte 0x00	@ 000fdb5a data
.org 0xfdb5b
	.byte 0x00	@ 000fdb5b data
.org 0xfdb5c
	.byte 0x0c,0x9f,0x00,0x00	@ 000fdb5c data
.org 0xfdb60
	.byte 0xcc,0xaf,0x86,0x08	@ 000fdb60 data
.org 0xfdb64
	.byte 0x07,0x9f,0x00,0x00	@ 000fdb64 data
.org 0xfdb68
	.byte 0x3c,0xaf,0x86,0x08	@ 000fdb68 data
.org 0xfdb6c
	adds r0, r5, #0	@ 000fdb6c 281c
.org 0xfdb6e
	adds r0, #116	@ 000fdb6e 7430
.org 0xfdb70
	ldr r1, [pc, #32]	@ 000fdb70 0849
.org 0xfdb72
	bl 0x5784	@ 000fdb72 07f707fe
.org 0xfdb76
	movs r0, #0	@ 000fdb76 0020
.org 0xfdb78
	ldrsb r0, [r4, r0]	@ 000fdb78 2056
.org 0xfdb7a
	cmp r0, #0	@ 000fdb7a 0028
.org 0xfdb7c
	ble.n 0xfdb9c	@ 000fdb7c 0edd
.org 0xfdb7e
	ldrb r1, [r5, #11]	@ 000fdb7e e97a
.org 0xfdb80
	movs r0, #8	@ 000fdb80 0820
.org 0xfdb82
	orrs r0, r1	@ 000fdb82 0843
.org 0xfdb84
	strb r0, [r5, #11]	@ 000fdb84 e872
.org 0xfdb86
	movs r0, #0	@ 000fdb86 0020
.org 0xfdb88
	ldrsb r0, [r4, r0]	@ 000fdb88 2056
.org 0xfdb8a
	lsls r0, r0, #3	@ 000fdb8a c000
.org 0xfdb8c
	ldr r1, [pc, #8]	@ 000fdb8c 0249
.org 0xfdb8e
	adds r0, r0, r1	@ 000fdb8e 4018
.org 0xfdb90
	b.n 0xfdbbe	@ 000fdb90 15e0
.org 0xfdb92
	.byte 0x00	@ 000fdb92 data
.org 0xfdb93
	.byte 0x00	@ 000fdb93 data
.org 0xfdb94
	.byte 0xb4,0xaf,0x86,0x08	@ 000fdb94 data
.org 0xfdb98
	.byte 0xdc,0xaf,0x86,0x08	@ 000fdb98 data
.org 0xfdb9c
	cmp r0, #0	@ 000fdb9c 0028
.org 0xfdb9e
	bne.n 0xfdbd0	@ 000fdb9e 17d1
.org 0xfdba0
	ldrb r0, [r5, #30]	@ 000fdba0 a87f
.org 0xfdba2
	lsls r0, r0, #8	@ 000fdba2 0002
.org 0xfdba4
	adds r1, r5, #0	@ 000fdba4 291c
.org 0xfdba6
	adds r1, #112	@ 000fdba6 7031
.org 0xfdba8
	ldrb r1, [r1, #0]	@ 000fdba8 0978
.org 0xfdbaa
	orrs r0, r1	@ 000fdbaa 0843
.org 0xfdbac
	movs r1, #159	@ 000fdbac 9f21
.org 0xfdbae
	lsls r1, r1, #8	@ 000fdbae 0902
.org 0xfdbb0
	cmp r0, r1	@ 000fdbb0 8842
.org 0xfdbb2
	beq.n 0xfdbd0	@ 000fdbb2 0dd0
.org 0xfdbb4
	ldrb r1, [r5, #11]	@ 000fdbb4 e97a
.org 0xfdbb6
	movs r0, #8	@ 000fdbb6 0820
.org 0xfdbb8
	orrs r0, r1	@ 000fdbb8 0843
.org 0xfdbba
	strb r0, [r5, #11]	@ 000fdbba e872
.org 0xfdbbc
	ldr r0, [pc, #8]	@ 000fdbbc 0248
.org 0xfdbbe
	str r0, [r5, #48]	@ 000fdbbe 2863
.org 0xfdbc0
	ldr r0, [pc, #8]	@ 000fdbc0 0248
.org 0xfdbc2
	strh r0, [r5, #38]	@ 000fdbc2 e884
.org 0xfdbc4
	b.n 0xfdbd8	@ 000fdbc4 08e0
.org 0xfdbc6
	.byte 0x00	@ 000fdbc6 data
.org 0xfdbc7
	.byte 0x00	@ 000fdbc7 data
.org 0xfdbc8
	.byte 0xdc,0xaf,0x86,0x08	@ 000fdbc8 data
.org 0xfdbcc
	.byte 0x01,0x02,0x00,0x00	@ 000fdbcc data
.org 0xfdbd0
	ldrb r1, [r5, #11]	@ 000fdbd0 e97a
.org 0xfdbd2
	movs r0, #247	@ 000fdbd2 f720
.org 0xfdbd4
	ands r0, r1	@ 000fdbd4 0840
.org 0xfdbd6
	strb r0, [r5, #11]	@ 000fdbd6 e872
.org 0xfdbd8
	ldrb r0, [r5, #13]	@ 000fdbd8 687b
.org 0xfdbda
	adds r0, #1	@ 000fdbda 0130
.org 0xfdbdc
	strb r0, [r5, #13]	@ 000fdbdc 6873
.org 0xfdbde
	adds r0, r5, #0	@ 000fdbde 281c
.org 0xfdbe0
	adds r0, #115	@ 000fdbe0 7330
.org 0xfdbe2
	ldrb r0, [r0, #0]	@ 000fdbe2 0078
.org 0xfdbe4
	cmp r0, #3	@ 000fdbe4 0328
.org 0xfdbe6
	beq.n 0xfdbea	@ 000fdbe6 00d0
.org 0xfdbe8
	b.n 0xfde06	@ 000fdbe8 0de1
.org 0xfdbea
	ldrb r0, [r5, #30]	@ 000fdbea a87f
.org 0xfdbec
	lsls r1, r0, #8	@ 000fdbec 0102
.org 0xfdbee
	adds r0, r5, #0	@ 000fdbee 281c
.org 0xfdbf0
	adds r0, #112	@ 000fdbf0 7030
.org 0xfdbf2
	ldrb r0, [r0, #0]	@ 000fdbf2 0078
.org 0xfdbf4
	orrs r1, r0	@ 000fdbf4 0143
.org 0xfdbf6
	ldr r0, [pc, #96]	@ 000fdbf6 1848
.org 0xfdbf8
	cmp r1, r0	@ 000fdbf8 8142
.org 0xfdbfa
	beq.n 0xfdc02	@ 000fdbfa 02d0
.org 0xfdbfc
	adds r0, #6	@ 000fdbfc 0630
.org 0xfdbfe
	cmp r1, r0	@ 000fdbfe 8142
.org 0xfdc00
	bne.n 0xfdc68	@ 000fdc00 32d1
.org 0xfdc02
	ldr r3, [pc, #88]	@ 000fdc02 164b
.org 0xfdc04
	ldrb r1, [r5, #17]	@ 000fdc04 697c
.org 0xfdc06
	lsrs r2, r1, #5	@ 000fdc06 4a09
.org 0xfdc08
	adds r2, #1	@ 000fdc08 0132
.org 0xfdc0a
	lsls r2, r2, #2	@ 000fdc0a 9200
.org 0xfdc0c
	ldr r0, [pc, #80]	@ 000fdc0c 1448
.org 0xfdc0e
	adds r6, r3, r0	@ 000fdc0e 1e18
.org 0xfdc10
	adds r2, r2, r6	@ 000fdc10 9219
.org 0xfdc12
	movs r7, #31	@ 000fdc12 1f27
.org 0xfdc14
	adds r0, r7, #0	@ 000fdc14 381c
.org 0xfdc16
	ands r0, r1	@ 000fdc16 0840
.org 0xfdc18
	movs r4, #1	@ 000fdc18 0124
.org 0xfdc1a
	adds r1, r4, #0	@ 000fdc1a 211c
.org 0xfdc1c
	lsls r1, r0	@ 000fdc1c 8140
.org 0xfdc1e
	ldr r0, [r2, #0]	@ 000fdc1e 1068
.org 0xfdc20
	bics r0, r1	@ 000fdc20 8843
.org 0xfdc22
	str r0, [r2, #0]	@ 000fdc22 1060
.org 0xfdc24
	ldr r0, [pc, #60]	@ 000fdc24 0f48
.org 0xfdc26
	adds r3, r3, r0	@ 000fdc26 1b18
.org 0xfdc28
	ldrb r1, [r3, #0]	@ 000fdc28 1978
.org 0xfdc2a
	movs r0, #15	@ 000fdc2a 0f20
.org 0xfdc2c
	ands r0, r1	@ 000fdc2c 0840
.org 0xfdc2e
	cmp r0, #0	@ 000fdc2e 0028
.org 0xfdc30
	beq.n 0xfdc68	@ 000fdc30 1ad0
.org 0xfdc32
	ldrb r2, [r5, #17]	@ 000fdc32 6a7c
.org 0xfdc34
	lsrs r1, r2, #5	@ 000fdc34 5109
.org 0xfdc36
	adds r1, #4	@ 000fdc36 0431
.org 0xfdc38
	lsls r1, r1, #2	@ 000fdc38 8900
.org 0xfdc3a
	adds r1, r1, r6	@ 000fdc3a 8919
.org 0xfdc3c
	adds r0, r7, #0	@ 000fdc3c 381c
.org 0xfdc3e
	ands r0, r2	@ 000fdc3e 1040
.org 0xfdc40
	adds r2, r4, #0	@ 000fdc40 221c
.org 0xfdc42
	lsls r2, r0	@ 000fdc42 8240
.org 0xfdc44
	ldr r0, [r1, #0]	@ 000fdc44 0868
.org 0xfdc46
	orrs r0, r2	@ 000fdc46 1043
.org 0xfdc48
	str r0, [r1, #0]	@ 000fdc48 0860
.org 0xfdc4a
	movs r1, #0	@ 000fdc4a 0021
.org 0xfdc4c
	movs r0, #4	@ 000fdc4c 0420
.org 0xfdc4e
	strb r0, [r5, #16]	@ 000fdc4e 2874
.org 0xfdc50
	strb r1, [r5, #13]	@ 000fdc50 6973
.org 0xfdc52
	strb r1, [r5, #14]	@ 000fdc52 a973
.org 0xfdc54
	b.n 0xfde06	@ 000fdc54 d7e0
.org 0xfdc56
	.byte 0x00	@ 000fdc56 data
.org 0xfdc57
	.byte 0x00	@ 000fdc57 data
.org 0xfdc58
	.byte 0x06,0x9f,0x00,0x00	@ 000fdc58 data
.org 0xfdc5c
	.byte 0xb0,0x0a,0x00,0x02	@ 000fdc5c data
.org 0xfdc60
	.byte 0x28,0xd0,0x02,0x00	@ 000fdc60 data
.org 0xfdc64
	.byte 0x10,0xc0,0x02,0x00	@ 000fdc64 data
.org 0xfdc68
	adds r2, r5, #0	@ 000fdc68 2a1c
.org 0xfdc6a
	adds r2, #180	@ 000fdc6a b432
.org 0xfdc6c
	movs r0, #0	@ 000fdc6c 0020
.org 0xfdc6e
	ldrsb r0, [r2, r0]	@ 000fdc6e 1056
.org 0xfdc70
	cmp r0, #0	@ 000fdc70 0028
.org 0xfdc72
	blt.n 0xfdca4	@ 000fdc72 17db
.org 0xfdc74
	adds r0, r5, #0	@ 000fdc74 281c
.org 0xfdc76
	adds r0, #182	@ 000fdc76 b630
.org 0xfdc78
	ldrh r1, [r0, #0]	@ 000fdc78 0188
.org 0xfdc7a
	ldr r0, [pc, #32]	@ 000fdc7a 0848
.org 0xfdc7c
	cmp r1, r0	@ 000fdc7c 8142
.org 0xfdc7e
	beq.n 0xfdca4	@ 000fdc7e 11d0
.org 0xfdc80
	adds r0, r5, #0	@ 000fdc80 281c
.org 0xfdc82
	adds r0, #116	@ 000fdc82 7430
.org 0xfdc84
	ldrb r2, [r2, #0]	@ 000fdc84 1278
.org 0xfdc86
	lsls r2, r2, #24	@ 000fdc86 1206
.org 0xfdc88
	asrs r2, r2, #24	@ 000fdc88 1216
.org 0xfdc8a
	lsls r1, r2, #1	@ 000fdc8a 5100
.org 0xfdc8c
	adds r1, r1, r2	@ 000fdc8c 8918
.org 0xfdc8e
	lsls r1, r1, #3	@ 000fdc8e c900
.org 0xfdc90
	ldr r2, [pc, #12]	@ 000fdc90 034a
.org 0xfdc92
	adds r1, r1, r2	@ 000fdc92 8918
.org 0xfdc94
	bl 0x5784	@ 000fdc94 07f776fd
.org 0xfdc98
	b.n 0xfdcae	@ 000fdc98 09e0
.org 0xfdc9a
	.byte 0x00	@ 000fdc9a data
.org 0xfdc9b
	.byte 0x00	@ 000fdc9b data
.org 0xfdc9c
	.byte 0x07,0x9f,0x00,0x00	@ 000fdc9c data
.org 0xfdca0
	.byte 0x3c,0xaf,0x86,0x08	@ 000fdca0 data
.org 0xfdca4
	adds r0, r5, #0	@ 000fdca4 281c
.org 0xfdca6
	adds r0, #116	@ 000fdca6 7430
.org 0xfdca8
	ldr r1, [pc, #20]	@ 000fdca8 0549
.org 0xfdcaa
	bl 0x5784	@ 000fdcaa 07f76bfd
.org 0xfdcae
	adds r1, r5, #0	@ 000fdcae 291c
.org 0xfdcb0
	adds r1, #164	@ 000fdcb0 a431
.org 0xfdcb2
	movs r0, #255	@ 000fdcb2 ff20
.org 0xfdcb4
	strh r0, [r1, #0]	@ 000fdcb4 0880
.org 0xfdcb6
	ldrb r0, [r5, #13]	@ 000fdcb6 687b
.org 0xfdcb8
	adds r0, #1	@ 000fdcb8 0130
.org 0xfdcba
	strb r0, [r5, #13]	@ 000fdcba 6873
.org 0xfdcbc
	b.n 0xfde06	@ 000fdcbc a3e0
.org 0xfdcbe
	.byte 0x00	@ 000fdcbe data
.org 0xfdcbf
	.byte 0x00	@ 000fdcbf data
.org 0xfdcc0
	.byte 0xb4,0xaf,0x86,0x08	@ 000fdcc0 data
.org 0xfdcc4
	ldrb r0, [r5, #18]	@ 000fdcc4 a87c
.org 0xfdcc6
	adds r4, r0, #0	@ 000fdcc6 041c
.org 0xfdcc8
	cmp r4, #0	@ 000fdcc8 002c
.org 0xfdcca
	beq.n 0xfdcfa	@ 000fdcca 16d0
.org 0xfdccc
	ldr r0, [pc, #20]	@ 000fdccc 0548
.org 0xfdcce
	ldr r0, [r0, #0]	@ 000fdcce 0068
.org 0xfdcd0
	ldr r3, [r5, #84]	@ 000fdcd0 6b6d
.org 0xfdcd2
	ldr r1, [r0, #84]	@ 000fdcd2 416d
.org 0xfdcd4
	subs r2, r3, r1	@ 000fdcd4 5a1a
.org 0xfdcd6
	cmp r2, #0	@ 000fdcd6 002a
.org 0xfdcd8
	blt.n 0xfdce8	@ 000fdcd8 06db
.org 0xfdcda
	movs r0, #128	@ 000fdcda 8020
.org 0xfdcdc
	lsls r0, r0, #6	@ 000fdcdc 8001
.org 0xfdcde
	cmp r2, r0	@ 000fdcde 8242
.org 0xfdce0
	bgt.n 0xfdcf4	@ 000fdce0 08dc
.org 0xfdce2
	b.n 0xfde06	@ 000fdce2 90e0
.org 0xfdce4
	.byte 0xf0,0xdb,0x02,0x02	@ 000fdce4 data
.org 0xfdce8
	subs r1, r1, r3	@ 000fdce8 c91a
.org 0xfdcea
	movs r0, #128	@ 000fdcea 8020
.org 0xfdcec
	lsls r0, r0, #6	@ 000fdcec 8001
.org 0xfdcee
	cmp r1, r0	@ 000fdcee 8142
.org 0xfdcf0
	bgt.n 0xfdcf4	@ 000fdcf0 00dc
.org 0xfdcf2
	b.n 0xfde06	@ 000fdcf2 88e0
.org 0xfdcf4
	subs r0, r4, #1	@ 000fdcf4 601e
.org 0xfdcf6
	strb r0, [r5, #18]	@ 000fdcf6 a874
.org 0xfdcf8
	b.n 0xfde06	@ 000fdcf8 85e0
.org 0xfdcfa
	adds r6, r5, #0	@ 000fdcfa 2e1c
.org 0xfdcfc
	adds r6, #182	@ 000fdcfc b636
.org 0xfdcfe
	ldrh r0, [r6, #0]	@ 000fdcfe 3088
.org 0xfdd00
	adds r0, #1	@ 000fdd00 0130
.org 0xfdd02
	lsls r0, r0, #16	@ 000fdd02 0004
.org 0xfdd04
	lsrs r4, r0, #16	@ 000fdd04 040c
.org 0xfdd06
	ldr r0, [pc, #72]	@ 000fdd06 1248
.org 0xfdd08
	cmp r4, r0	@ 000fdd08 8442
.org 0xfdd0a
	bls.n 0xfdd0e	@ 000fdd0a 00d9
.org 0xfdd0c
	ldr r4, [pc, #68]	@ 000fdd0c 114c
.org 0xfdd0e
	strh r4, [r6, #0]	@ 000fdd0e 3480
.org 0xfdd10
	adds r0, r5, #0	@ 000fdd10 281c
.org 0xfdd12
	adds r1, r4, #0	@ 000fdd12 211c
.org 0xfdd14
	bl 0x1cf00	@ 000fdd14 1ff7f4f8
.org 0xfdd18
	ldr r0, [pc, #60]	@ 000fdd18 0f48
.org 0xfdd1a
	movs r1, #255	@ 000fdd1a ff21
.org 0xfdd1c
	ands r4, r1	@ 000fdd1c 0c40
.org 0xfdd1e
	adds r0, r4, r0	@ 000fdd1e 2018
.org 0xfdd20
	ldrb r0, [r0, #0]	@ 000fdd20 0078
.org 0xfdd22
	adds r1, r5, #0	@ 000fdd22 291c
.org 0xfdd24
	adds r1, #180	@ 000fdd24 b431
.org 0xfdd26
	strb r0, [r1, #0]	@ 000fdd26 0870
.org 0xfdd28
	lsls r0, r0, #24	@ 000fdd28 0006
.org 0xfdd2a
	adds r4, r1, #0	@ 000fdd2a 0c1c
.org 0xfdd2c
	cmp r0, #0	@ 000fdd2c 0028
.org 0xfdd2e
	blt.n 0xfdd60	@ 000fdd2e 17db
.org 0xfdd30
	ldrh r1, [r6, #0]	@ 000fdd30 3188
.org 0xfdd32
	ldr r0, [pc, #32]	@ 000fdd32 0848
.org 0xfdd34
	cmp r1, r0	@ 000fdd34 8142
.org 0xfdd36
	beq.n 0xfdd60	@ 000fdd36 13d0
.org 0xfdd38
	adds r0, r5, #0	@ 000fdd38 281c
.org 0xfdd3a
	adds r0, #116	@ 000fdd3a 7430
.org 0xfdd3c
	movs r2, #0	@ 000fdd3c 0022
.org 0xfdd3e
	ldrsb r2, [r4, r2]	@ 000fdd3e a256
.org 0xfdd40
	lsls r1, r2, #1	@ 000fdd40 5100
.org 0xfdd42
	adds r1, r1, r2	@ 000fdd42 8918
.org 0xfdd44
	lsls r1, r1, #3	@ 000fdd44 c900
.org 0xfdd46
	ldr r2, [pc, #20]	@ 000fdd46 054a
.org 0xfdd48
	adds r1, r1, r2	@ 000fdd48 8918
.org 0xfdd4a
	bl 0x5784	@ 000fdd4a 07f71bfd
.org 0xfdd4e
	b.n 0xfdd6a	@ 000fdd4e 0ce0
.org 0xfdd50
	.byte 0x0c,0x9f,0x00,0x00	@ 000fdd50 data
.org 0xfdd54
	.byte 0x07,0x9f,0x00,0x00	@ 000fdd54 data
.org 0xfdd58
	.byte 0xcc,0xaf,0x86,0x08	@ 000fdd58 data
.org 0xfdd5c
	.byte 0x3c,0xaf,0x86,0x08	@ 000fdd5c data
.org 0xfdd60
	adds r0, r5, #0	@ 000fdd60 281c
.org 0xfdd62
	adds r0, #116	@ 000fdd62 7430
.org 0xfdd64
	ldr r1, [pc, #32]	@ 000fdd64 0849
.org 0xfdd66
	bl 0x5784	@ 000fdd66 07f70dfd
