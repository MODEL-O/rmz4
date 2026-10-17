@ FUN_0806bc38  entry 0x0806bc38  size 382
.thumb
.org 0x6bc38
FUN_0806bc38:
	push {r4, r5, r6, lr}	@ 0006bc38 70b5
.org 0x6bc3a
	adds r5, r0, #0	@ 0006bc3a 051c
.org 0x6bc3c
	ldrb r6, [r5, #14]	@ 0006bc3c ae7b
.org 0x6bc3e
	cmp r6, #0	@ 0006bc3e 002e
.org 0x6bc40
	bne.n 0x6bc8c	@ 0006bc40 24d1
.org 0x6bc42
	ldr r1, [pc, #168]	@ 0006bc42 2a49
.org 0x6bc44
	bl 0x1cf00	@ 0006bc44 b1f75cf9
.org 0x6bc48
	movs r0, #198	@ 0006bc48 c620
.org 0x6bc4a
	bl 0x2b10	@ 0006bc4a 96f761ff
.org 0x6bc4e
	ldr r0, [pc, #160]	@ 0006bc4e 2848
.org 0x6bc50
	ldr r1, [pc, #160]	@ 0006bc50 2849
.org 0x6bc52
	movs r4, #133	@ 0006bc52 8524
.org 0x6bc54
	lsls r4, r4, #1	@ 0006bc54 6400
.org 0x6bc56
	adds r1, r1, r4	@ 0006bc56 0919
.org 0x6bc58
	ldrh r1, [r1, #0]	@ 0006bc58 0988
.org 0x6bc5a
	ldrh r2, [r0, #6]	@ 0006bc5a c288
.org 0x6bc5c
	lsrs r2, r2, #6	@ 0006bc5c 9209
.org 0x6bc5e
	subs r1, r1, r2	@ 0006bc5e 891a
.org 0x6bc60
	lsls r1, r1, #5	@ 0006bc60 4901
.org 0x6bc62
	movs r2, #128	@ 0006bc62 8022
.org 0x6bc64
	lsls r2, r2, #9	@ 0006bc64 5202
.org 0x6bc66
	adds r1, r1, r2	@ 0006bc66 8918
.org 0x6bc68
	bl 0x1d30	@ 0006bc68 96f762f8
.org 0x6bc6c
	ldr r0, [pc, #136]	@ 0006bc6c 2248
.org 0x6bc6e
	ldr r1, [pc, #140]	@ 0006bc6e 2349
.org 0x6bc70
	adds r1, r1, r4	@ 0006bc70 0919
.org 0x6bc72
	ldrh r1, [r1, #0]	@ 0006bc72 0988
.org 0x6bc74
	ldrb r2, [r0, #7]	@ 0006bc74 c279
.org 0x6bc76
	subs r1, r1, r2	@ 0006bc76 891a
.org 0x6bc78
	lsls r1, r1, #5	@ 0006bc78 4901
.org 0x6bc7a
	movs r2, #128	@ 0006bc7a 8022
.org 0x6bc7c
	lsls r2, r2, #2	@ 0006bc7c 9200
.org 0x6bc7e
	adds r1, r1, r2	@ 0006bc7e 8918
.org 0x6bc80
	bl 0x2208	@ 0006bc80 96f7c2fa
.org 0x6bc84
	strb r6, [r5, #15]	@ 0006bc84 ee73
.org 0x6bc86
	ldrb r0, [r5, #14]	@ 0006bc86 a87b
.org 0x6bc88
	adds r0, #1	@ 0006bc88 0130
.org 0x6bc8a
	strb r0, [r5, #14]	@ 0006bc8a a873
.org 0x6bc8c
	adds r0, r5, #0	@ 0006bc8c 281c
.org 0x6bc8e
	bl 0x1cff0	@ 0006bc8e b1f7aff9
.org 0x6bc92
	ldrb r4, [r5, #15]	@ 0006bc92 ec7b
.org 0x6bc94
	cmp r4, #0	@ 0006bc94 002c
.org 0x6bc96
	bne.n 0x6bd4c	@ 0006bc96 59d1
.org 0x6bc98
	adds r0, r5, #0	@ 0006bc98 281c
.org 0x6bc9a
	adds r0, #113	@ 0006bc9a 7130
.org 0x6bc9c
	ldrb r0, [r0, #0]	@ 0006bc9c 0078
.org 0x6bc9e
	lsls r0, r0, #24	@ 0006bc9e 0006
.org 0x6bca0
	asrs r0, r0, #24	@ 0006bca0 0016
.org 0x6bca2
	cmp r0, #1	@ 0006bca2 0128
.org 0x6bca4
	bgt.n 0x6bca8	@ 0006bca4 00dc
.org 0x6bca6
	b.n 0x6bde2	@ 0006bca6 9ce0
.org 0x6bca8
	adds r0, r5, #0	@ 0006bca8 281c
.org 0x6bcaa
	adds r0, #116	@ 0006bcaa 7430
.org 0x6bcac
	ldr r1, [pc, #80]	@ 0006bcac 1449
.org 0x6bcae
	bl 0x5784	@ 0006bcae 99f769fd
.org 0x6bcb2
	ldr r0, [pc, #80]	@ 0006bcb2 1448
.org 0x6bcb4
	ldr r0, [r0, #0]	@ 0006bcb4 0068
.org 0x6bcb6
	ldr r1, [r5, #84]	@ 0006bcb6 696d
.org 0x6bcb8
	ldr r0, [r0, #84]	@ 0006bcb8 406d
.org 0x6bcba
	cmp r1, r0	@ 0006bcba 8142
.org 0x6bcbc
	ble.n 0x6bd08	@ 0006bcbc 24dd
.org 0x6bcbe
	adds r0, r5, #0	@ 0006bcbe 281c
.org 0x6bcc0
	adds r0, #180	@ 0006bcc0 b430
.org 0x6bcc2
	movs r2, #128	@ 0006bcc2 8022
.org 0x6bcc4
	lsls r2, r2, #6	@ 0006bcc4 9201
.org 0x6bcc6
	adds r1, r1, r2	@ 0006bcc6 8918
.org 0x6bcc8
	ldr r0, [r0, #24]	@ 0006bcc8 8069
.org 0x6bcca
	subs r0, r0, r1	@ 0006bcca 401a
.org 0x6bccc
	str r0, [r5, #92]	@ 0006bccc e865
.org 0x6bcce
	adds r0, r5, #0	@ 0006bcce 281c
.org 0x6bcd0
	adds r0, #76	@ 0006bcd0 4c30
.org 0x6bcd2
	strb r4, [r0, #0]	@ 0006bcd2 0470
.org 0x6bcd4
	adds r2, r5, #0	@ 0006bcd4 2a1c
.org 0x6bcd6
	adds r2, #74	@ 0006bcd6 4a32
.org 0x6bcd8
	ldrb r1, [r2, #0]	@ 0006bcd8 1178
.org 0x6bcda
	movs r0, #17	@ 0006bcda 1120
.org 0x6bcdc
	negs r0, r0	@ 0006bcdc 4042
.org 0x6bcde
	ands r0, r1	@ 0006bcde 0840
.org 0x6bce0
	strb r0, [r2, #0]	@ 0006bce0 1070
.org 0x6bce2
	ldrb r1, [r5, #10]	@ 0006bce2 a97a
.org 0x6bce4
	movs r0, #239	@ 0006bce4 ef20
.org 0x6bce6
	ands r0, r1	@ 0006bce6 0840
.org 0x6bce8
	strb r0, [r5, #10]	@ 0006bce8 a872
.org 0x6bcea
	b.n 0x6bd30	@ 0006bcea 21e0
.org 0x6bcec
	.byte 0x03,0xaa,0x00,0x00	@ 0006bcec data
.org 0x6bcf0
	.byte 0x64,0x4a,0xc4,0x08	@ 0006bcf0 data
.org 0x6bcf4
	.byte 0x40,0xe0,0x02,0x02	@ 0006bcf4 data
.org 0x6bcf8
	.byte 0x70,0x4a,0xc4,0x08	@ 0006bcf8 data
.org 0x6bcfc
	.byte 0x40,0xde,0x02,0x02	@ 0006bcfc data
.org 0x6bd00
	.byte 0xdc,0xc1,0x85,0x08	@ 0006bd00 data
.org 0x6bd04
	.byte 0xf0,0xdb,0x02,0x02	@ 0006bd04 data
.org 0x6bd08
	adds r0, r5, #0	@ 0006bd08 281c
.org 0x6bd0a
	adds r0, #180	@ 0006bd0a b430
.org 0x6bd0c
	ldr r2, [pc, #52]	@ 0006bd0c 0d4a
.org 0x6bd0e
	adds r1, r1, r2	@ 0006bd0e 8918
.org 0x6bd10
	ldr r0, [r0, #20]	@ 0006bd10 4069
.org 0x6bd12
	subs r0, r0, r1	@ 0006bd12 401a
.org 0x6bd14
	str r0, [r5, #92]	@ 0006bd14 e865
.org 0x6bd16
	adds r1, r5, #0	@ 0006bd16 291c
.org 0x6bd18
	adds r1, #76	@ 0006bd18 4c31
.org 0x6bd1a
	movs r0, #1	@ 0006bd1a 0120
.org 0x6bd1c
	strb r0, [r1, #0]	@ 0006bd1c 0870
.org 0x6bd1e
	adds r2, r5, #0	@ 0006bd1e 2a1c
.org 0x6bd20
	adds r2, #74	@ 0006bd20 4a32
.org 0x6bd22
	ldrb r0, [r2, #0]	@ 0006bd22 1078
.org 0x6bd24
	movs r1, #16	@ 0006bd24 1021
.org 0x6bd26
	orrs r0, r1	@ 0006bd26 0843
.org 0x6bd28
	strb r0, [r2, #0]	@ 0006bd28 1070
.org 0x6bd2a
	ldrb r0, [r5, #10]	@ 0006bd2a a87a
.org 0x6bd2c
	orrs r1, r0	@ 0006bd2c 0143
.org 0x6bd2e
	strb r1, [r5, #10]	@ 0006bd2e a972
.org 0x6bd30
	ldr r0, [r5, #92]	@ 0006bd30 e86d
.org 0x6bd32
	asrs r0, r0, #1	@ 0006bd32 4010
.org 0x6bd34
	movs r1, #12	@ 0006bd34 0c21
.org 0x6bd36
	bl 0x128fb8	@ 0006bd36 bdf03ff9
.org 0x6bd3a
	str r0, [r5, #92]	@ 0006bd3a e865
.org 0x6bd3c
	ldr r0, [pc, #8]	@ 0006bd3c 0248
.org 0x6bd3e
	str r0, [r5, #96]	@ 0006bd3e 2866
.org 0x6bd40
	b.n 0x6bdc0	@ 0006bd40 3ee0
.org 0x6bd42
	.byte 0x00	@ 0006bd42 data
.org 0x6bd43
	.byte 0x00	@ 0006bd43 data
.org 0x6bd44
	.byte 0x00,0xe0,0xff,0xff	@ 0006bd44 data
.org 0x6bd48
	.byte 0x00,0xfd,0xff,0xff	@ 0006bd48 data
.org 0x6bd4c
	cmp r4, #1	@ 0006bd4c 012c
.org 0x6bd4e
	bne.n 0x6bd7c	@ 0006bd4e 15d1
.org 0x6bd50
	ldr r0, [r5, #84]	@ 0006bd50 686d
.org 0x6bd52
	ldr r1, [r5, #92]	@ 0006bd52 e96d
.org 0x6bd54
	adds r0, r0, r1	@ 0006bd54 4018
.org 0x6bd56
	str r0, [r5, #84]	@ 0006bd56 6865
.org 0x6bd58
	ldr r0, [r5, #88]	@ 0006bd58 a86d
.org 0x6bd5a
	ldr r1, [r5, #96]	@ 0006bd5a 296e
.org 0x6bd5c
	adds r0, r0, r1	@ 0006bd5c 4018
.org 0x6bd5e
	str r0, [r5, #88]	@ 0006bd5e a865
.org 0x6bd60
	adds r1, #64	@ 0006bd60 4031
.org 0x6bd62
	str r1, [r5, #96]	@ 0006bd62 2966
.org 0x6bd64
	cmp r1, #0	@ 0006bd64 0029
.org 0x6bd66
	ble.n 0x6bde2	@ 0006bd66 3cdd
.org 0x6bd68
	ldr r1, [pc, #12]	@ 0006bd68 0349
.org 0x6bd6a
	adds r0, r5, #0	@ 0006bd6a 281c
.org 0x6bd6c
	bl 0x1cf00	@ 0006bd6c b1f7c8f8
.org 0x6bd70
	adds r0, r5, #0	@ 0006bd70 281c
.org 0x6bd72
	bl 0x1cff0	@ 0006bd72 b1f73df9
.org 0x6bd76
	b.n 0x6bdc0	@ 0006bd76 23e0
.org 0x6bd78
	.byte 0x04,0xaa,0x00,0x00	@ 0006bd78 data
.org 0x6bd7c
	cmp r4, #2	@ 0006bd7c 022c
.org 0x6bd7e
	bne.n 0x6bdd0	@ 0006bd7e 27d1
.org 0x6bd80
	ldr r0, [r5, #84]	@ 0006bd80 686d
.org 0x6bd82
	ldr r1, [r5, #92]	@ 0006bd82 e96d
.org 0x6bd84
	adds r0, r0, r1	@ 0006bd84 4018
.org 0x6bd86
	str r0, [r5, #84]	@ 0006bd86 6865
.org 0x6bd88
	ldr r1, [r5, #88]	@ 0006bd88 a96d
.org 0x6bd8a
	ldr r0, [r5, #96]	@ 0006bd8a 286e
.org 0x6bd8c
	adds r1, r1, r0	@ 0006bd8c 0918
.org 0x6bd8e
	str r1, [r5, #88]	@ 0006bd8e a965
.org 0x6bd90
	adds r0, #64	@ 0006bd90 4030
.org 0x6bd92
	str r0, [r5, #96]	@ 0006bd92 2866
.org 0x6bd94
	adds r4, r5, #0	@ 0006bd94 2c1c
.org 0x6bd96
	adds r4, #180	@ 0006bd96 b434
.org 0x6bd98
	ldr r0, [r4, #4]	@ 0006bd98 6068
.org 0x6bd9a
	cmp r1, r0	@ 0006bd9a 8142
.org 0x6bd9c
	ble.n 0x6bde2	@ 0006bd9c 21dd
.org 0x6bd9e
	ldr r1, [pc, #40]	@ 0006bd9e 0a49
.org 0x6bda0
	adds r0, r5, #0	@ 0006bda0 281c
.org 0x6bda2
	bl 0x1cf00	@ 0006bda2 b1f7adf8
.org 0x6bda6
	adds r0, r5, #0	@ 0006bda6 281c
.org 0x6bda8
	bl 0x1cff0	@ 0006bda8 b1f722f9
.org 0x6bdac
	movs r0, #211	@ 0006bdac d320
.org 0x6bdae
	bl 0x2b10	@ 0006bdae 96f7affe
.org 0x6bdb2
	adds r0, r5, #0	@ 0006bdb2 281c
.org 0x6bdb4
	adds r0, #116	@ 0006bdb4 7430
