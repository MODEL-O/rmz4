@ FUN_0800e99c  entry 0x0800e99c  size 948
.thumb
.org 0xe99c
FUN_0800e99c:
	push {r4, r5, r6, lr}	@ 0000e99c 70b5
.org 0xe99e
	ldr r1, [pc, #32]	@ 0000e99e 0849
.org 0xe9a0
	ldr r2, [pc, #32]	@ 0000e9a0 084a
.org 0xe9a2
	adds r0, r1, r2	@ 0000e9a2 8818
.org 0xe9a4
	ldrb r0, [r0, #0]	@ 0000e9a4 0078
.org 0xe9a6
	cmp r0, #1	@ 0000e9a6 0128
.org 0xe9a8
	bne.n 0xe9d0	@ 0000e9a8 12d1
.org 0xe9aa
	ldr r0, [pc, #28]	@ 0000e9aa 0748
.org 0xe9ac
	adds r4, r1, r0	@ 0000e9ac 0c18
.org 0xe9ae
	ldr r0, [r4, #0]	@ 0000e9ae 2068
.org 0xe9b0
	cmp r0, #0	@ 0000e9b0 0028
.org 0xe9b2
	bne.n 0xe9d0	@ 0000e9b2 0dd1
.org 0xe9b4
	ldr r0, [pc, #20]	@ 0000e9b4 0548
.org 0xe9b6
	bl 0x101cf8	@ 0000e9b6 f3f09ff9
.org 0xe9ba
	str r0, [r4, #0]	@ 0000e9ba 2060
.org 0xe9bc
	b.n 0xea2c	@ 0000e9bc 36e0
.org 0xe9be
	.byte 0x00	@ 0000e9be data
.org 0xe9bf
	.byte 0x00	@ 0000e9bf data
.org 0xe9c0
	.byte 0xb0,0x0a,0x00,0x02	@ 0000e9c0 data
.org 0xe9c4
	.byte 0x24,0xd0,0x02,0x00	@ 0000e9c4 data
.org 0xe9c8
	.byte 0x30,0xd0,0x02,0x00	@ 0000e9c8 data
.org 0xe9cc
	.byte 0x94,0xeb,0x02,0x02	@ 0000e9cc data
.org 0xe9d0
	ldr r4, [pc, #204]	@ 0000e9d0 334c
.org 0xe9d2
	ldr r1, [pc, #208]	@ 0000e9d2 3449
.org 0xe9d4
	adds r6, r4, r1	@ 0000e9d4 6618
.org 0xe9d6
	ldrb r0, [r6, #0]	@ 0000e9d6 3078
.org 0xe9d8
	cmp r0, #2	@ 0000e9d8 0228
.org 0xe9da
	bne.n 0xea2c	@ 0000e9da 27d1
.org 0xe9dc
	ldr r3, [pc, #200]	@ 0000e9dc 324b
.org 0xe9de
	ldrh r1, [r3, #20]	@ 0000e9de 998a
.org 0xe9e0
	movs r5, #1	@ 0000e9e0 0125
.org 0xe9e2
	movs r0, #1	@ 0000e9e2 0120
.org 0xe9e4
	ands r0, r1	@ 0000e9e4 0840
.org 0xe9e6
	cmp r0, #0	@ 0000e9e6 0028
.org 0xe9e8
	bne.n 0xea2c	@ 0000e9e8 20d1
.org 0xe9ea
	ldrh r1, [r3, #8]	@ 0000e9ea 1989
.org 0xe9ec
	movs r0, #8	@ 0000e9ec 0820
.org 0xe9ee
	ands r0, r1	@ 0000e9ee 0840
.org 0xe9f0
	cmp r0, #0	@ 0000e9f0 0028
.org 0xe9f2
	bne.n 0xea2c	@ 0000e9f2 1bd1
.org 0xe9f4
	movs r2, #161	@ 0000e9f4 a122
.org 0xe9f6
	lsls r2, r2, #2	@ 0000e9f6 9200
.org 0xe9f8
	adds r1, r3, r2	@ 0000e9f8 9918
.org 0xe9fa
	ldr r0, [r1, #0]	@ 0000e9fa 0868
.org 0xe9fc
	subs r0, #1	@ 0000e9fc 0138
.org 0xe9fe
	str r0, [r1, #0]	@ 0000e9fe 0860
.org 0xea00
	cmp r0, #0	@ 0000ea00 0028
.org 0xea02
	bne.n 0xea2c	@ 0000ea02 13d1
.org 0xea04
	ldr r1, [pc, #164]	@ 0000ea04 2949
.org 0xea06
	adds r0, r4, r1	@ 0000ea06 6018
.org 0xea08
	ldr r0, [r0, #0]	@ 0000ea08 0068
.org 0xea0a
	strb r5, [r0, #13]	@ 0000ea0a 4573
.org 0xea0c
	ldr r2, [pc, #160]	@ 0000ea0c 284a
.org 0xea0e
	ldrb r1, [r2, #0]	@ 0000ea0e 1178
.org 0xea10
	movs r0, #128	@ 0000ea10 8020
.org 0xea12
	orrs r0, r1	@ 0000ea12 0843
.org 0xea14
	strb r0, [r2, #0]	@ 0000ea14 1070
.org 0xea16
	movs r2, #172	@ 0000ea16 ac22
.org 0xea18
	lsls r2, r2, #1	@ 0000ea18 5200
.org 0xea1a
	adds r1, r3, r2	@ 0000ea1a 9918
.org 0xea1c
	movs r2, #0	@ 0000ea1c 0022
.org 0xea1e
	movs r0, #128	@ 0000ea1e 8020
.org 0xea20
	lsls r0, r0, #8	@ 0000ea20 0002
.org 0xea22
	strh r0, [r1, #0]	@ 0000ea22 0880
.org 0xea24
	strb r2, [r6, #0]	@ 0000ea24 3270
.org 0xea26
	ldr r1, [pc, #140]	@ 0000ea26 2349
.org 0xea28
	adds r0, r4, r1	@ 0000ea28 6018
.org 0xea2a
	strb r5, [r0, #0]	@ 0000ea2a 0570
.org 0xea2c
	ldr r0, [pc, #112]	@ 0000ea2c 1c48
.org 0xea2e
	ldr r2, [pc, #136]	@ 0000ea2e 224a
.org 0xea30
	adds r1, r0, r2	@ 0000ea30 8118
.org 0xea32
	ldrh r3, [r1, #0]	@ 0000ea32 0b88
.org 0xea34
	lsrs r1, r3, #8	@ 0000ea34 190a
.org 0xea36
	adds r2, r0, #0	@ 0000ea36 021c
.org 0xea38
	cmp r1, #4	@ 0000ea38 0429
.org 0xea3a
	bne.n 0xea5a	@ 0000ea3a 0ed1
.org 0xea3c
	movs r0, #255	@ 0000ea3c ff20
.org 0xea3e
	ands r0, r3	@ 0000ea3e 1840
.org 0xea40
	cmp r0, #1	@ 0000ea40 0128
.org 0xea42
	bne.n 0xea5a	@ 0000ea42 0ad1
.org 0xea44
	ldr r0, [pc, #116]	@ 0000ea44 1d48
.org 0xea46
	adds r1, r2, r0	@ 0000ea46 1118
.org 0xea48
	ldrb r0, [r1, #0]	@ 0000ea48 0878
.org 0xea4a
	adds r0, #1	@ 0000ea4a 0130
.org 0xea4c
	strb r0, [r1, #0]	@ 0000ea4c 0870
.org 0xea4e
	lsls r0, r0, #24	@ 0000ea4e 0006
.org 0xea50
	lsrs r0, r0, #24	@ 0000ea50 000e
.org 0xea52
	cmp r0, #48	@ 0000ea52 3028
.org 0xea54
	bne.n 0xea5a	@ 0000ea54 01d1
.org 0xea56
	movs r0, #0	@ 0000ea56 0020
.org 0xea58
	strb r0, [r1, #0]	@ 0000ea58 0870
.org 0xea5a
	ldr r1, [pc, #100]	@ 0000ea5a 1949
.org 0xea5c
	adds r0, r2, r1	@ 0000ea5c 5018
.org 0xea5e
	ldrb r1, [r0, #0]	@ 0000ea5e 0178
.org 0xea60
	movs r0, #15	@ 0000ea60 0f20
.org 0xea62
	ands r0, r1	@ 0000ea62 0840
.org 0xea64
	cmp r0, #2	@ 0000ea64 0228
.org 0xea66
	bne.n 0xeaf4	@ 0000ea66 45d1
.org 0xea68
	ldr r1, [pc, #88]	@ 0000ea68 1649
.org 0xea6a
	adds r0, r2, r1	@ 0000ea6a 5018
.org 0xea6c
	ldrh r1, [r0, #0]	@ 0000ea6c 0188
.org 0xea6e
	lsrs r0, r1, #8	@ 0000ea6e 080a
.org 0xea70
	cmp r0, #4	@ 0000ea70 0428
.org 0xea72
	bne.n 0xeacc	@ 0000ea72 2bd1
.org 0xea74
	movs r0, #255	@ 0000ea74 ff20
.org 0xea76
	ands r0, r1	@ 0000ea76 0840
.org 0xea78
	cmp r0, #0	@ 0000ea78 0028
.org 0xea7a
	bne.n 0xeacc	@ 0000ea7a 27d1
.org 0xea7c
	ldr r0, [pc, #72]	@ 0000ea7c 1248
.org 0xea7e
	adds r2, r2, r0	@ 0000ea7e 1218
.org 0xea80
	ldrb r1, [r2, #0]	@ 0000ea80 1178
.org 0xea82
	movs r0, #1	@ 0000ea82 0120
.org 0xea84
	ands r0, r1	@ 0000ea84 0840
.org 0xea86
	cmp r0, #0	@ 0000ea86 0028
.org 0xea88
	bne.n 0xea98	@ 0000ea88 06d1
.org 0xea8a
	movs r0, #1	@ 0000ea8a 0120
.org 0xea8c
	orrs r0, r1	@ 0000ea8c 0843
.org 0xea8e
	strb r0, [r2, #0]	@ 0000ea8e 1070
.org 0xea90
	movs r0, #130	@ 0000ea90 8220
.org 0xea92
	movs r1, #0	@ 0000ea92 0021
.org 0xea94
	bl 0x249c	@ 0000ea94 f3f702fd
.org 0xea98
	movs r0, #130	@ 0000ea98 8220
.org 0xea9a
	bl 0x25d8	@ 0000ea9a f3f79dfd
.org 0xea9e
	b.n 0xeb50	@ 0000ea9e 57e0
.org 0xeaa0
	.byte 0xb0,0x0a,0x00,0x02	@ 0000eaa0 data
.org 0xeaa4
	.byte 0x24,0xd0,0x02,0x00	@ 0000eaa4 data
.org 0xeaa8
	.byte 0x10,0xe9,0x02,0x02	@ 0000eaa8 data
.org 0xeaac
	.byte 0x30,0xd0,0x02,0x00	@ 0000eaac data
.org 0xeab0
	.byte 0xe0,0x32,0x00,0x03	@ 0000eab0 data
.org 0xeab4
	.byte 0x2e,0xd0,0x02,0x00	@ 0000eab4 data
.org 0xeab8
	.byte 0xd6,0x07,0x00,0x00	@ 0000eab8 data
.org 0xeabc
	.byte 0x29,0xd0,0x02,0x00	@ 0000eabc data
.org 0xeac0
	.byte 0x10,0xc0,0x02,0x00	@ 0000eac0 data
.org 0xeac4
	.byte 0xd4,0x07,0x00,0x00	@ 0000eac4 data
.org 0xeac8
	.byte 0x28,0xd0,0x02,0x00	@ 0000eac8 data
.org 0xeacc
	ldr r0, [pc, #28]	@ 0000eacc 0748
.org 0xeace
	ldr r1, [pc, #32]	@ 0000eace 0849
.org 0xead0
	adds r2, r0, r1	@ 0000ead0 4218
.org 0xead2
	ldrb r1, [r2, #0]	@ 0000ead2 1178
.org 0xead4
	movs r0, #1	@ 0000ead4 0120
.org 0xead6
	ands r0, r1	@ 0000ead6 0840
.org 0xead8
	cmp r0, #0	@ 0000ead8 0028
.org 0xeada
	beq.n 0xeb50	@ 0000eada 39d0
.org 0xeadc
	movs r0, #1	@ 0000eadc 0120
.org 0xeade
	eors r0, r1	@ 0000eade 4840
.org 0xeae0
	strb r0, [r2, #0]	@ 0000eae0 1070
.org 0xeae2
	movs r0, #130	@ 0000eae2 8220
.org 0xeae4
	bl 0x2624	@ 0000eae4 f3f79efd
.org 0xeae8
	b.n 0xeb50	@ 0000eae8 32e0
.org 0xeaea
	.byte 0x00	@ 0000eaea data
.org 0xeaeb
	.byte 0x00	@ 0000eaeb data
.org 0xeaec
	.byte 0xb0,0x0a,0x00,0x02	@ 0000eaec data
.org 0xeaf0
	.byte 0x28,0xd0,0x02,0x00	@ 0000eaf0 data
.org 0xeaf4
	ldr r1, [pc, #52]	@ 0000eaf4 0d49
.org 0xeaf6
	adds r0, r2, r1	@ 0000eaf6 5018
.org 0xeaf8
	ldrh r1, [r0, #0]	@ 0000eaf8 0188
.org 0xeafa
	lsrs r0, r1, #8	@ 0000eafa 080a
.org 0xeafc
	cmp r0, #4	@ 0000eafc 0428
.org 0xeafe
	bne.n 0xeb34	@ 0000eafe 19d1
.org 0xeb00
	movs r0, #255	@ 0000eb00 ff20
.org 0xeb02
	ands r0, r1	@ 0000eb02 0840
.org 0xeb04
	cmp r0, #0	@ 0000eb04 0028
.org 0xeb06
	bne.n 0xeb34	@ 0000eb06 15d1
.org 0xeb08
	ldr r0, [pc, #36]	@ 0000eb08 0948
.org 0xeb0a
	adds r2, r2, r0	@ 0000eb0a 1218
.org 0xeb0c
	ldrb r1, [r2, #0]	@ 0000eb0c 1178
.org 0xeb0e
	movs r0, #1	@ 0000eb0e 0120
.org 0xeb10
	ands r0, r1	@ 0000eb10 0840
.org 0xeb12
	cmp r0, #0	@ 0000eb12 0028
.org 0xeb14
	bne.n 0xeb24	@ 0000eb14 06d1
.org 0xeb16
	movs r0, #1	@ 0000eb16 0120
.org 0xeb18
	orrs r0, r1	@ 0000eb18 0843
.org 0xeb1a
	strb r0, [r2, #0]	@ 0000eb1a 1070
.org 0xeb1c
	movs r0, #196	@ 0000eb1c c420
.org 0xeb1e
	movs r1, #0	@ 0000eb1e 0021
.org 0xeb20
	bl 0x249c	@ 0000eb20 f3f7bcfc
.org 0xeb24
	movs r0, #196	@ 0000eb24 c420
.org 0xeb26
	bl 0x25d8	@ 0000eb26 f3f757fd
.org 0xeb2a
	b.n 0xeb50	@ 0000eb2a 11e0
.org 0xeb2c
	.byte 0xd4,0x07,0x00,0x00	@ 0000eb2c data
.org 0xeb30
	.byte 0x28,0xd0,0x02,0x00	@ 0000eb30 data
.org 0xeb34
	ldr r0, [pc, #84]	@ 0000eb34 1548
.org 0xeb36
	ldr r1, [pc, #88]	@ 0000eb36 1649
.org 0xeb38
	adds r2, r0, r1	@ 0000eb38 4218
.org 0xeb3a
	ldrb r1, [r2, #0]	@ 0000eb3a 1178
.org 0xeb3c
	movs r0, #1	@ 0000eb3c 0120
.org 0xeb3e
	ands r0, r1	@ 0000eb3e 0840
.org 0xeb40
	cmp r0, #0	@ 0000eb40 0028
.org 0xeb42
	beq.n 0xeb50	@ 0000eb42 05d0
.org 0xeb44
	movs r0, #1	@ 0000eb44 0120
.org 0xeb46
	eors r0, r1	@ 0000eb46 4840
.org 0xeb48
	strb r0, [r2, #0]	@ 0000eb48 1070
.org 0xeb4a
	movs r0, #196	@ 0000eb4a c420
.org 0xeb4c
	bl 0x2624	@ 0000eb4c f3f76afd
.org 0xeb50
	ldr r2, [pc, #56]	@ 0000eb50 0e4a
.org 0xeb52
	ldr r1, [pc, #64]	@ 0000eb52 1049
.org 0xeb54
	adds r0, r2, r1	@ 0000eb54 5018
.org 0xeb56
	ldrh r1, [r0, #0]	@ 0000eb56 0188
.org 0xeb58
	lsrs r0, r1, #8	@ 0000eb58 080a
.org 0xeb5a
	cmp r0, #4	@ 0000eb5a 0428
.org 0xeb5c
	bne.n 0xeb98	@ 0000eb5c 1cd1
.org 0xeb5e
	movs r0, #255	@ 0000eb5e ff20
.org 0xeb60
	ands r0, r1	@ 0000eb60 0840
.org 0xeb62
	cmp r0, #3	@ 0000eb62 0328
.org 0xeb64
	bne.n 0xeb98	@ 0000eb64 18d1
.org 0xeb66
	ldr r0, [pc, #40]	@ 0000eb66 0a48
.org 0xeb68
	adds r2, r2, r0	@ 0000eb68 1218
.org 0xeb6a
	ldrb r1, [r2, #0]	@ 0000eb6a 1178
.org 0xeb6c
	movs r0, #2	@ 0000eb6c 0220
.org 0xeb6e
	ands r0, r1	@ 0000eb6e 0840
.org 0xeb70
	cmp r0, #0	@ 0000eb70 0028
.org 0xeb72
	bne.n 0xeb82	@ 0000eb72 06d1
.org 0xeb74
	movs r0, #2	@ 0000eb74 0220
.org 0xeb76
	orrs r0, r1	@ 0000eb76 0843
.org 0xeb78
	strb r0, [r2, #0]	@ 0000eb78 1070
.org 0xeb7a
	movs r0, #123	@ 0000eb7a 7b20
.org 0xeb7c
	movs r1, #0	@ 0000eb7c 0021
.org 0xeb7e
	bl 0x249c	@ 0000eb7e f3f78dfc
.org 0xeb82
	movs r0, #123	@ 0000eb82 7b20
.org 0xeb84
	bl 0x25d8	@ 0000eb84 f3f728fd
.org 0xeb88
	b.n 0xebb4	@ 0000eb88 14e0
.org 0xeb8a
	.byte 0x00	@ 0000eb8a data
.org 0xeb8b
	.byte 0x00	@ 0000eb8b data
.org 0xeb8c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000eb8c data
.org 0xeb90
	.byte 0x28,0xd0,0x02,0x00	@ 0000eb90 data
.org 0xeb94
	.byte 0xd4,0x07,0x00,0x00	@ 0000eb94 data
.org 0xeb98
	ldr r0, [pc, #80]	@ 0000eb98 1448
.org 0xeb9a
	ldr r1, [pc, #84]	@ 0000eb9a 1549
.org 0xeb9c
	adds r2, r0, r1	@ 0000eb9c 4218
.org 0xeb9e
	ldrb r1, [r2, #0]	@ 0000eb9e 1178
.org 0xeba0
	movs r0, #2	@ 0000eba0 0220
.org 0xeba2
	ands r0, r1	@ 0000eba2 0840
.org 0xeba4
	cmp r0, #0	@ 0000eba4 0028
.org 0xeba6
	beq.n 0xebb4	@ 0000eba6 05d0
.org 0xeba8
	movs r0, #2	@ 0000eba8 0220
.org 0xebaa
	eors r0, r1	@ 0000ebaa 4840
.org 0xebac
	strb r0, [r2, #0]	@ 0000ebac 1070
.org 0xebae
	movs r0, #123	@ 0000ebae 7b20
.org 0xebb0
	bl 0x2624	@ 0000ebb0 f3f738fd
.org 0xebb4
	ldr r2, [pc, #52]	@ 0000ebb4 0d4a
.org 0xebb6
	ldr r1, [pc, #60]	@ 0000ebb6 0f49
.org 0xebb8
	adds r0, r2, r1	@ 0000ebb8 5018
.org 0xebba
	ldrh r1, [r0, #0]	@ 0000ebba 0188
.org 0xebbc
	lsrs r0, r1, #8	@ 0000ebbc 080a
.org 0xebbe
	cmp r0, #4	@ 0000ebbe 0428
.org 0xebc0
	bne.n 0xebf8	@ 0000ebc0 1ad1
.org 0xebc2
	movs r0, #255	@ 0000ebc2 ff20
.org 0xebc4
	ands r0, r1	@ 0000ebc4 0840
.org 0xebc6
	cmp r0, #4	@ 0000ebc6 0428
.org 0xebc8
	bne.n 0xebf8	@ 0000ebc8 16d1
.org 0xebca
	ldr r1, [pc, #36]	@ 0000ebca 0949
.org 0xebcc
	adds r2, r2, r1	@ 0000ebcc 5218
.org 0xebce
	ldrb r1, [r2, #0]	@ 0000ebce 1178
.org 0xebd0
	ands r0, r1	@ 0000ebd0 0840
.org 0xebd2
	cmp r0, #0	@ 0000ebd2 0028
.org 0xebd4
	bne.n 0xebe4	@ 0000ebd4 06d1
.org 0xebd6
	movs r0, #4	@ 0000ebd6 0420
.org 0xebd8
	orrs r0, r1	@ 0000ebd8 0843
.org 0xebda
	strb r0, [r2, #0]	@ 0000ebda 1070
.org 0xebdc
	movs r0, #124	@ 0000ebdc 7c20
.org 0xebde
	movs r1, #0	@ 0000ebde 0021
.org 0xebe0
	bl 0x249c	@ 0000ebe0 f3f75cfc
.org 0xebe4
	movs r0, #124	@ 0000ebe4 7c20
.org 0xebe6
	bl 0x25d8	@ 0000ebe6 f3f7f7fc
.org 0xebea
	b.n 0xec14	@ 0000ebea 13e0
.org 0xebec
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ebec data
.org 0xebf0
	.byte 0x28,0xd0,0x02,0x00	@ 0000ebf0 data
.org 0xebf4
	.byte 0xd4,0x07,0x00,0x00	@ 0000ebf4 data
.org 0xebf8
	ldr r0, [pc, #84]	@ 0000ebf8 1548
.org 0xebfa
	ldr r1, [pc, #88]	@ 0000ebfa 1649
.org 0xebfc
	adds r2, r0, r1	@ 0000ebfc 4218
.org 0xebfe
	ldrb r1, [r2, #0]	@ 0000ebfe 1178
.org 0xec00
	movs r0, #4	@ 0000ec00 0420
.org 0xec02
	ands r0, r1	@ 0000ec02 0840
.org 0xec04
	cmp r0, #0	@ 0000ec04 0028
.org 0xec06
	beq.n 0xec14	@ 0000ec06 05d0
.org 0xec08
	movs r0, #4	@ 0000ec08 0420
.org 0xec0a
	eors r0, r1	@ 0000ec0a 4840
.org 0xec0c
	strb r0, [r2, #0]	@ 0000ec0c 1070
.org 0xec0e
	movs r0, #124	@ 0000ec0e 7c20
.org 0xec10
	bl 0x2624	@ 0000ec10 f3f708fd
.org 0xec14
	ldr r2, [pc, #56]	@ 0000ec14 0e4a
.org 0xec16
	ldr r1, [pc, #64]	@ 0000ec16 1049
.org 0xec18
	adds r0, r2, r1	@ 0000ec18 5018
.org 0xec1a
	ldrh r1, [r0, #0]	@ 0000ec1a 0188
.org 0xec1c
	lsrs r0, r1, #8	@ 0000ec1c 080a
.org 0xec1e
	cmp r0, #4	@ 0000ec1e 0428
.org 0xec20
	bne.n 0xec5c	@ 0000ec20 1cd1
.org 0xec22
	movs r0, #255	@ 0000ec22 ff20
.org 0xec24
	ands r0, r1	@ 0000ec24 0840
.org 0xec26
	cmp r0, #5	@ 0000ec26 0528
.org 0xec28
	bne.n 0xec5c	@ 0000ec28 18d1
.org 0xec2a
	ldr r0, [pc, #40]	@ 0000ec2a 0a48
.org 0xec2c
	adds r2, r2, r0	@ 0000ec2c 1218
.org 0xec2e
	ldrb r1, [r2, #0]	@ 0000ec2e 1178
.org 0xec30
	movs r0, #8	@ 0000ec30 0820
.org 0xec32
	ands r0, r1	@ 0000ec32 0840
.org 0xec34
	cmp r0, #0	@ 0000ec34 0028
.org 0xec36
	bne.n 0xec46	@ 0000ec36 06d1
.org 0xec38
	movs r0, #8	@ 0000ec38 0820
.org 0xec3a
	orrs r0, r1	@ 0000ec3a 0843
.org 0xec3c
	strb r0, [r2, #0]	@ 0000ec3c 1070
.org 0xec3e
	movs r0, #125	@ 0000ec3e 7d20
.org 0xec40
	movs r1, #0	@ 0000ec40 0021
.org 0xec42
	bl 0x249c	@ 0000ec42 f3f72bfc
.org 0xec46
	movs r0, #125	@ 0000ec46 7d20
.org 0xec48
	bl 0x25d8	@ 0000ec48 f3f7c6fc
.org 0xec4c
	b.n 0xec78	@ 0000ec4c 14e0
.org 0xec4e
	.byte 0x00	@ 0000ec4e data
.org 0xec4f
	.byte 0x00	@ 0000ec4f data
.org 0xec50
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ec50 data
.org 0xec54
	.byte 0x28,0xd0,0x02,0x00	@ 0000ec54 data
.org 0xec58
	.byte 0xd6,0x07,0x00,0x00	@ 0000ec58 data
.org 0xec5c
	ldr r0, [pc, #112]	@ 0000ec5c 1c48
.org 0xec5e
	ldr r1, [pc, #116]	@ 0000ec5e 1d49
.org 0xec60
	adds r2, r0, r1	@ 0000ec60 4218
.org 0xec62
	ldrb r1, [r2, #0]	@ 0000ec62 1178
.org 0xec64
	movs r0, #8	@ 0000ec64 0820
.org 0xec66
	ands r0, r1	@ 0000ec66 0840
.org 0xec68
	cmp r0, #0	@ 0000ec68 0028
.org 0xec6a
	beq.n 0xec78	@ 0000ec6a 05d0
.org 0xec6c
	movs r0, #8	@ 0000ec6c 0820
.org 0xec6e
	eors r0, r1	@ 0000ec6e 4840
.org 0xec70
	strb r0, [r2, #0]	@ 0000ec70 1070
.org 0xec72
	movs r0, #125	@ 0000ec72 7d20
.org 0xec74
	bl 0x2624	@ 0000ec74 f3f7d6fc
.org 0xec78
	ldr r2, [pc, #84]	@ 0000ec78 154a
.org 0xec7a
	ldr r1, [pc, #92]	@ 0000ec7a 1749
.org 0xec7c
	adds r0, r2, r1	@ 0000ec7c 5018
.org 0xec7e
	ldrh r1, [r0, #0]	@ 0000ec7e 0188
.org 0xec80
	lsrs r0, r1, #8	@ 0000ec80 080a
.org 0xec82
	cmp r0, #4	@ 0000ec82 0428
.org 0xec84
	bne.n 0xecdc	@ 0000ec84 2ad1
.org 0xec86
	movs r0, #255	@ 0000ec86 ff20
.org 0xec88
	ands r0, r1	@ 0000ec88 0840
.org 0xec8a
	cmp r0, #6	@ 0000ec8a 0628
.org 0xec8c
	bne.n 0xecdc	@ 0000ec8c 26d1
.org 0xec8e
	ldr r0, [pc, #68]	@ 0000ec8e 1148
.org 0xec90
	adds r2, r2, r0	@ 0000ec90 1218
.org 0xec92
	ldrb r1, [r2, #0]	@ 0000ec92 1178
.org 0xec94
	movs r0, #16	@ 0000ec94 1020
.org 0xec96
	ands r0, r1	@ 0000ec96 0840
.org 0xec98
	cmp r0, #0	@ 0000ec98 0028
.org 0xec9a
	bne.n 0xecba	@ 0000ec9a 0ed1
.org 0xec9c
	movs r0, #16	@ 0000ec9c 1020
.org 0xec9e
	orrs r0, r1	@ 0000ec9e 0843
.org 0xeca0
	strb r0, [r2, #0]	@ 0000eca0 1070
.org 0xeca2
	movs r0, #126	@ 0000eca2 7e20
.org 0xeca4
	movs r1, #0	@ 0000eca4 0021
.org 0xeca6
	bl 0x249c	@ 0000eca6 f3f7f9fb
.org 0xecaa
	movs r0, #127	@ 0000ecaa 7f20
.org 0xecac
	movs r1, #0	@ 0000ecac 0021
.org 0xecae
	bl 0x249c	@ 0000ecae f3f7f5fb
.org 0xecb2
	movs r0, #131	@ 0000ecb2 8320
.org 0xecb4
	movs r1, #0	@ 0000ecb4 0021
.org 0xecb6
	bl 0x249c	@ 0000ecb6 f3f7f1fb
.org 0xecba
	movs r0, #126	@ 0000ecba 7e20
.org 0xecbc
	bl 0x25d8	@ 0000ecbc f3f78cfc
.org 0xecc0
	movs r0, #127	@ 0000ecc0 7f20
.org 0xecc2
	bl 0x25d8	@ 0000ecc2 f3f789fc
.org 0xecc6
	movs r0, #131	@ 0000ecc6 8320
.org 0xecc8
	bl 0x25d8	@ 0000ecc8 f3f786fc
.org 0xeccc
	b.n 0xed04	@ 0000eccc 1ae0
.org 0xecce
	.byte 0x00	@ 0000ecce data
.org 0xeccf
	.byte 0x00	@ 0000eccf data
.org 0xecd0
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ecd0 data
.org 0xecd4
	.byte 0x28,0xd0,0x02,0x00	@ 0000ecd4 data
.org 0xecd8
	.byte 0xd4,0x07,0x00,0x00	@ 0000ecd8 data
.org 0xecdc
	ldr r0, [pc, #108]	@ 0000ecdc 1b48
.org 0xecde
	ldr r1, [pc, #112]	@ 0000ecde 1c49
.org 0xece0
	adds r2, r0, r1	@ 0000ece0 4218
.org 0xece2
	ldrb r1, [r2, #0]	@ 0000ece2 1178
.org 0xece4
	movs r0, #16	@ 0000ece4 1020
.org 0xece6
	ands r0, r1	@ 0000ece6 0840
.org 0xece8
	cmp r0, #0	@ 0000ece8 0028
.org 0xecea
	beq.n 0xed04	@ 0000ecea 0bd0
.org 0xecec
	movs r0, #16	@ 0000ecec 1020
.org 0xecee
	eors r0, r1	@ 0000ecee 4840
.org 0xecf0
	strb r0, [r2, #0]	@ 0000ecf0 1070
.org 0xecf2
	movs r0, #126	@ 0000ecf2 7e20
.org 0xecf4
	bl 0x2624	@ 0000ecf4 f3f796fc
.org 0xecf8
	movs r0, #127	@ 0000ecf8 7f20
.org 0xecfa
	bl 0x2624	@ 0000ecfa f3f793fc
.org 0xecfe
	movs r0, #131	@ 0000ecfe 8320
.org 0xed00
	bl 0x2624	@ 0000ed00 f3f790fc
.org 0xed04
	ldr r2, [pc, #68]	@ 0000ed04 114a
.org 0xed06
	ldr r1, [pc, #76]	@ 0000ed06 1349
.org 0xed08
	adds r0, r2, r1	@ 0000ed08 5018
.org 0xed0a
	ldrh r1, [r0, #0]	@ 0000ed0a 0188
.org 0xed0c
	lsrs r0, r1, #8	@ 0000ed0c 080a
.org 0xed0e
	cmp r0, #4	@ 0000ed0e 0428
.org 0xed10
	bne.n 0xed58	@ 0000ed10 22d1
.org 0xed12
	movs r0, #255	@ 0000ed12 ff20
.org 0xed14
	ands r0, r1	@ 0000ed14 0840
.org 0xed16
	cmp r0, #7	@ 0000ed16 0728
.org 0xed18
	bne.n 0xed58	@ 0000ed18 1ed1
.org 0xed1a
	ldr r0, [pc, #52]	@ 0000ed1a 0d48
.org 0xed1c
	adds r2, r2, r0	@ 0000ed1c 1218
.org 0xed1e
	ldrb r1, [r2, #0]	@ 0000ed1e 1178
.org 0xed20
	movs r0, #32	@ 0000ed20 2020
.org 0xed22
	ands r0, r1	@ 0000ed22 0840
.org 0xed24
	cmp r0, #0	@ 0000ed24 0028
.org 0xed26
	bne.n 0xed3e	@ 0000ed26 0ad1
.org 0xed28
	movs r0, #32	@ 0000ed28 2020
.org 0xed2a
	orrs r0, r1	@ 0000ed2a 0843
.org 0xed2c
	strb r0, [r2, #0]	@ 0000ed2c 1070
.org 0xed2e
	movs r0, #128	@ 0000ed2e 8020
.org 0xed30
	movs r1, #0	@ 0000ed30 0021
.org 0xed32
	bl 0x249c	@ 0000ed32 f3f7b3fb
.org 0xed36
	movs r0, #129	@ 0000ed36 8120
.org 0xed38
	movs r1, #0	@ 0000ed38 0021
.org 0xed3a
	bl 0x249c	@ 0000ed3a f3f7affb
.org 0xed3e
	movs r0, #128	@ 0000ed3e 8020
.org 0xed40
	bl 0x25d8	@ 0000ed40 f3f74afc
.org 0xed44
	movs r0, #129	@ 0000ed44 8120
.org 0xed46
	bl 0x25d8	@ 0000ed46 f3f747fc
.org 0xed4a
	b.n 0xed7a	@ 0000ed4a 16e0
.org 0xed4c
	.byte 0xb0,0x0a,0x00,0x02	@ 0000ed4c data
