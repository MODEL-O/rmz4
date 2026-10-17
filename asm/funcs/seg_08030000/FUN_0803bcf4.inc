@ FUN_0803bcf4  entry 0x0803bcf4  size 358
.thumb
.org 0x3bcf4
FUN_0803bcf4:
	push {r4, r5, r6, lr}	@ 0003bcf4 70b5
.org 0x3bcf6
	sub sp, #8	@ 0003bcf6 82b0
.org 0x3bcf8
	adds r5, r0, #0	@ 0003bcf8 051c
.org 0x3bcfa
	ldrb r0, [r5, #13]	@ 0003bcfa 687b
.org 0x3bcfc
	cmp r0, #0	@ 0003bcfc 0028
.org 0x3bcfe
	bne.n 0x3bdb0	@ 0003bcfe 57d1
.org 0x3bd00
	ldrb r1, [r5, #30]	@ 0003bd00 a97f
.org 0x3bd02
	lsls r1, r1, #8	@ 0003bd02 0902
.org 0x3bd04
	adds r0, r5, #0	@ 0003bd04 281c
.org 0x3bd06
	adds r0, #112	@ 0003bd06 7030
.org 0x3bd08
	ldrb r0, [r0, #0]	@ 0003bd08 0078
.org 0x3bd0a
	orrs r0, r1	@ 0003bd0a 0843
.org 0x3bd0c
	movs r1, #176	@ 0003bd0c b021
.org 0x3bd0e
	lsls r1, r1, #7	@ 0003bd0e c901
.org 0x3bd10
	cmp r0, r1	@ 0003bd10 8842
.org 0x3bd12
	bne.n 0x3bd28	@ 0003bd12 09d1
.org 0x3bd14
	adds r0, r5, #0	@ 0003bd14 281c
.org 0x3bd16
	adds r0, #115	@ 0003bd16 7330
.org 0x3bd18
	ldrb r0, [r0, #0]	@ 0003bd18 0078
.org 0x3bd1a
	cmp r0, #3	@ 0003bd1a 0328
.org 0x3bd1c
	bne.n 0x3bd28	@ 0003bd1c 04d1
.org 0x3bd1e
	movs r1, #178	@ 0003bd1e b221
.org 0x3bd20
	lsls r1, r1, #7	@ 0003bd20 c901
.org 0x3bd22
	adds r0, r5, #0	@ 0003bd22 281c
.org 0x3bd24
	bl 0x1cf00	@ 0003bd24 e1f7ecf8
.org 0x3bd28
	ldr r0, [r5, #84]	@ 0003bd28 686d
.org 0x3bd2a
	ldr r1, [r5, #92]	@ 0003bd2a e96d
.org 0x3bd2c
	adds r0, r0, r1	@ 0003bd2c 4018
.org 0x3bd2e
	str r0, [r5, #84]	@ 0003bd2e 6865
.org 0x3bd30
	adds r0, r5, #0	@ 0003bd30 281c
.org 0x3bd32
	bl 0x3c1e4	@ 0003bd32 00f057fa
.org 0x3bd36
	lsls r0, r0, #24	@ 0003bd36 0006
.org 0x3bd38
	lsrs r4, r0, #24	@ 0003bd38 040e
.org 0x3bd3a
	cmp r4, #2	@ 0003bd3a 022c
.org 0x3bd3c
	bne.n 0x3bd50	@ 0003bd3c 08d1
.org 0x3bd3e
	ldr r1, [pc, #12]	@ 0003bd3e 0349
.org 0x3bd40
	ldrb r0, [r5, #9]	@ 0003bd40 687a
.org 0x3bd42
	lsls r0, r0, #2	@ 0003bd42 8000
.org 0x3bd44
	adds r0, r0, r1	@ 0003bd44 4018
.org 0x3bd46
	str r4, [r5, #12]	@ 0003bd46 ec60
.org 0x3bd48
	b.n 0x3be5e	@ 0003bd48 89e0
.org 0x3bd4a
	.byte 0x00	@ 0003bd4a data
.org 0x3bd4b
	.byte 0x00	@ 0003bd4b data
.org 0x3bd4c
	.byte 0xf8,0x39,0x85,0x08	@ 0003bd4c data
.org 0x3bd50
	adds r0, r5, #0	@ 0003bd50 281c
.org 0x3bd52
	bl 0x3c400	@ 0003bd52 00f055fb
.org 0x3bd56
	lsls r0, r0, #24	@ 0003bd56 0006
.org 0x3bd58
	cmp r0, #0	@ 0003bd58 0028
.org 0x3bd5a
	beq.n 0x3bd76	@ 0003bd5a 0cd0
.org 0x3bd5c
	adds r0, r5, #0	@ 0003bd5c 281c
.org 0x3bd5e
	adds r0, #84	@ 0003bd5e 5430
.org 0x3bd60
	ldrb r2, [r5, #10]	@ 0003bd60 aa7a
.org 0x3bd62
	lsrs r2, r2, #4	@ 0003bd62 1209
.org 0x3bd64
	movs r1, #1	@ 0003bd64 0121
.org 0x3bd66
	ands r2, r1	@ 0003bd66 0a40
.org 0x3bd68
	movs r1, #6	@ 0003bd68 0621
.org 0x3bd6a
	bl 0xd1bcc	@ 0003bd6a 95f02fff
.org 0x3bd6e
	movs r0, #43	@ 0003bd6e 2b20
.org 0x3bd70
	bl 0x2b10	@ 0003bd70 c6f7cefe
.org 0x3bd74
	movs r4, #1	@ 0003bd74 0124
.org 0x3bd76
	cmp r4, #0	@ 0003bd76 002c
.org 0x3bd78
	bne.n 0x3bd96	@ 0003bd78 0dd1
.org 0x3bd7a
	ldrb r0, [r5, #18]	@ 0003bd7a a87c
.org 0x3bd7c
	subs r0, #1	@ 0003bd7c 0138
.org 0x3bd7e
	strb r0, [r5, #18]	@ 0003bd7e a874
.org 0x3bd80
	lsls r0, r0, #24	@ 0003bd80 0006
.org 0x3bd82
	lsrs r0, r0, #24	@ 0003bd82 000e
.org 0x3bd84
	cmp r0, #255	@ 0003bd84 ff28
.org 0x3bd86
	beq.n 0x3bd96	@ 0003bd86 06d0
.org 0x3bd88
	adds r0, r5, #0	@ 0003bd88 281c
.org 0x3bd8a
	adds r0, #140	@ 0003bd8a 8c30
.org 0x3bd8c
	ldr r0, [r0, #0]	@ 0003bd8c 0068
.org 0x3bd8e
	movs r1, #4	@ 0003bd8e 0421
.org 0x3bd90
	ands r0, r1	@ 0003bd90 0840
.org 0x3bd92
	cmp r0, #0	@ 0003bd92 0028
.org 0x3bd94
	beq.n 0x3be64	@ 0003bd94 66d0
.org 0x3bd96
	movs r1, #180	@ 0003bd96 b421
.org 0x3bd98
	lsls r1, r1, #7	@ 0003bd98 c901
.org 0x3bd9a
	adds r0, r5, #0	@ 0003bd9a 281c
.org 0x3bd9c
	bl 0x1cf00	@ 0003bd9c e1f7b0f8
.org 0x3bda0
	movs r4, #0	@ 0003bda0 0024
.org 0x3bda2
	str r4, [r5, #92]	@ 0003bda2 ec65
.org 0x3bda4
	strb r4, [r5, #18]	@ 0003bda4 ac74
.org 0x3bda6
	movs r0, #114	@ 0003bda6 7220
.org 0x3bda8
	bl 0x2b10	@ 0003bda8 c6f7b2fe
.org 0x3bdac
	strb r4, [r5, #14]	@ 0003bdac ac73
.org 0x3bdae
	b.n 0x3be3a	@ 0003bdae 44e0
.org 0x3bdb0
	cmp r0, #1	@ 0003bdb0 0128
.org 0x3bdb2
	bne.n 0x3be48	@ 0003bdb2 49d1
.org 0x3bdb4
	adds r0, r5, #0	@ 0003bdb4 281c
.org 0x3bdb6
	adds r0, #180	@ 0003bdb6 b430
.org 0x3bdb8
	ldr r6, [r0, #0]	@ 0003bdb8 0668
.org 0x3bdba
	ldrb r0, [r5, #14]	@ 0003bdba a87b
.org 0x3bdbc
	cmp r0, #0	@ 0003bdbc 0028
.org 0x3bdbe
	bne.n 0x3be0c	@ 0003bdbe 25d1
.org 0x3bdc0
	adds r0, r5, #0	@ 0003bdc0 281c
.org 0x3bdc2
	adds r0, #113	@ 0003bdc2 7130
.org 0x3bdc4
	ldrb r0, [r0, #0]	@ 0003bdc4 0078
.org 0x3bdc6
	lsls r0, r0, #24	@ 0003bdc6 0006
.org 0x3bdc8
	asrs r0, r0, #24	@ 0003bdc8 0016
.org 0x3bdca
	cmp r0, #10	@ 0003bdca 0a28
.org 0x3bdcc
	ble.n 0x3be64	@ 0003bdcc 4add
.org 0x3bdce
	adds r0, r6, #0	@ 0003bdce 301c
.org 0x3bdd0
	bl 0x3a4a8	@ 0003bdd0 fef76afb
.org 0x3bdd4
	adds r0, #2	@ 0003bdd4 0230
.org 0x3bdd6
	lsls r0, r0, #24	@ 0003bdd6 0006
.org 0x3bdd8
	lsrs r4, r0, #24	@ 0003bdd8 040e
.org 0x3bdda
	adds r0, r6, #0	@ 0003bdda 301c
.org 0x3bddc
	bl 0x38a78	@ 0003bddc fcf74cfe
.org 0x3bde0
	lsls r0, r0, #24	@ 0003bde0 0006
.org 0x3bde2
	cmp r0, #0	@ 0003bde2 0028
.org 0x3bde4
	beq.n 0x3bdea	@ 0003bde4 01d0
.org 0x3bde6
	lsls r0, r4, #25	@ 0003bde6 6006
.org 0x3bde8
	lsrs r4, r0, #24	@ 0003bde8 040e
.org 0x3bdea
	adds r0, r5, #0	@ 0003bdea 281c
.org 0x3bdec
	adds r0, #116	@ 0003bdec 7430
.org 0x3bdee
	ldr r1, [pc, #24]	@ 0003bdee 0649
.org 0x3bdf0
	movs r3, #1	@ 0003bdf0 0123
.org 0x3bdf2
	negs r3, r3	@ 0003bdf2 5b42
.org 0x3bdf4
	str r3, [sp, #0]	@ 0003bdf4 0093
.org 0x3bdf6
	str r3, [sp, #4]	@ 0003bdf6 0193
.org 0x3bdf8
	adds r2, r4, #0	@ 0003bdf8 221c
.org 0x3bdfa
	bl 0x5794	@ 0003bdfa c9f7cbfc
.org 0x3bdfe
	ldrb r0, [r5, #14]	@ 0003bdfe a87b
.org 0x3be00
	adds r0, #1	@ 0003be00 0130
.org 0x3be02
	strb r0, [r5, #14]	@ 0003be02 a873
.org 0x3be04
	b.n 0x3be64	@ 0003be04 2ee0
.org 0x3be06
	.byte 0x00	@ 0003be06 data
.org 0x3be07
	.byte 0x00	@ 0003be07 data
.org 0x3be08
	.byte 0x0c,0x3c,0x85,0x08	@ 0003be08 data
.org 0x3be0c
	ldrb r0, [r5, #18]	@ 0003be0c a87c
.org 0x3be0e
	adds r1, r0, #1	@ 0003be0e 411c
.org 0x3be10
	strb r1, [r5, #18]	@ 0003be10 a974
.org 0x3be12
	lsls r0, r0, #24	@ 0003be12 0006
.org 0x3be14
	lsrs r0, r0, #24	@ 0003be14 000e
.org 0x3be16
	cmp r0, #59	@ 0003be16 3b28
.org 0x3be18
	bls.n 0x3be64	@ 0003be18 24d9
.org 0x3be1a
	ldr r1, [pc, #40]	@ 0003be1a 0a49
.org 0x3be1c
	adds r0, r5, #0	@ 0003be1c 281c
.org 0x3be1e
	bl 0x1cf00	@ 0003be1e e1f76ff8
.org 0x3be22
	adds r0, r5, #0	@ 0003be22 281c
.org 0x3be24
	adds r0, #140	@ 0003be24 8c30
.org 0x3be26
	movs r1, #0	@ 0003be26 0021
.org 0x3be28
	str r1, [r0, #0]	@ 0003be28 0160
.org 0x3be2a
	adds r0, #4	@ 0003be2a 0430
.org 0x3be2c
	str r1, [r0, #0]	@ 0003be2c 0160
.org 0x3be2e
	adds r0, #4	@ 0003be2e 0430
.org 0x3be30
	strb r1, [r0, #0]	@ 0003be30 0170
.org 0x3be32
	ldrb r1, [r5, #10]	@ 0003be32 a97a
.org 0x3be34
	movs r0, #251	@ 0003be34 fb20
.org 0x3be36
	ands r0, r1	@ 0003be36 0840
.org 0x3be38
	strb r0, [r5, #10]	@ 0003be38 a872
.org 0x3be3a
	ldrb r0, [r5, #13]	@ 0003be3a 687b
.org 0x3be3c
	adds r0, #1	@ 0003be3c 0130
.org 0x3be3e
	strb r0, [r5, #13]	@ 0003be3e 6873
.org 0x3be40
	b.n 0x3be64	@ 0003be40 10e0
.org 0x3be42
	.byte 0x00	@ 0003be42 data
.org 0x3be43
	.byte 0x00	@ 0003be43 data
.org 0x3be44
	.byte 0x01,0x5a,0x00,0x00	@ 0003be44 data
.org 0x3be48
	adds r0, r5, #0	@ 0003be48 281c
.org 0x3be4a
	adds r0, #115	@ 0003be4a 7330
.org 0x3be4c
	ldrb r0, [r0, #0]	@ 0003be4c 0078
.org 0x3be4e
	cmp r0, #3	@ 0003be4e 0328
.org 0x3be50
	bne.n 0x3be64	@ 0003be50 08d1
.org 0x3be52
	ldr r1, [pc, #24]	@ 0003be52 0649
.org 0x3be54
	ldrb r0, [r5, #9]	@ 0003be54 687a
.org 0x3be56
	lsls r0, r0, #2	@ 0003be56 8000
.org 0x3be58
	adds r0, r0, r1	@ 0003be58 4018
