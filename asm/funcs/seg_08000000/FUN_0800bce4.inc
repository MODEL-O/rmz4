@ FUN_0800bce4  entry 0x0800bce4  size 550
.thumb
.org 0xbce4
FUN_0800bce4:
	push {r4, r5, r6, r7, lr}	@ 0000bce4 f0b5
.org 0xbce6
	mov r7, sl	@ 0000bce6 5746
.org 0xbce8
	mov r6, r9	@ 0000bce8 4e46
.org 0xbcea
	mov r5, r8	@ 0000bcea 4546
.org 0xbcec
	push {r5, r6, r7}	@ 0000bcec e0b4
.org 0xbcee
	sub sp, #12	@ 0000bcee 83b0
.org 0xbcf0
	adds r7, r0, #0	@ 0000bcf0 071c
.org 0xbcf2
	ldrb r6, [r7, #14]	@ 0000bcf2 be7b
.org 0xbcf4
	cmp r6, #0	@ 0000bcf4 002e
.org 0xbcf6
	bne.n 0xbdc8	@ 0000bcf6 67d1
.org 0xbcf8
	ldr r1, [r7, #92]	@ 0000bcf8 f96d
.org 0xbcfa
	lsls r1, r1, #16	@ 0000bcfa 0904
.org 0xbcfc
	lsrs r1, r1, #20	@ 0000bcfc 090d
.org 0xbcfe
	lsls r0, r1, #1	@ 0000bcfe 4800
.org 0xbd00
	mov r8, r0	@ 0000bd00 8046
.org 0xbd02
	ldr r3, [pc, #400]	@ 0000bd02 644b
.org 0xbd04
	add r8, r3	@ 0000bd04 9844
.org 0xbd06
	ldr r0, [r7, #96]	@ 0000bd06 386e
.org 0xbd08
	ldr r2, [r7, #100]	@ 0000bd08 7a6e
.org 0xbd0a
	orrs r0, r2	@ 0000bd0a 1043
.org 0xbd0c
	ldr r4, [pc, #392]	@ 0000bd0c 624c
.org 0xbd0e
	adds r2, r4, #0	@ 0000bd0e 221c
.org 0xbd10
	orrs r0, r2	@ 0000bd10 1043
.org 0xbd12
	mov r2, r8	@ 0000bd12 4246
.org 0xbd14
	strh r0, [r2, #0]	@ 0000bd14 1080
.org 0xbd16
	lsls r1, r1, #2	@ 0000bd16 8900
.org 0xbd18
	adds r3, #8	@ 0000bd18 0833
.org 0xbd1a
	adds r1, r1, r3	@ 0000bd1a c918
.org 0xbd1c
	str r6, [r1, #0]	@ 0000bd1c 0e60
.org 0xbd1e
	adds r0, r7, #0	@ 0000bd1e 381c
.org 0xbd20
	adds r0, #104	@ 0000bd20 6830
.org 0xbd22
	strb r6, [r0, #0]	@ 0000bd22 0670
.org 0xbd24
	adds r0, #1	@ 0000bd24 0130
.org 0xbd26
	strb r6, [r0, #0]	@ 0000bd26 0670
.org 0xbd28
	adds r0, #1	@ 0000bd28 0130
.org 0xbd2a
	strb r6, [r0, #0]	@ 0000bd2a 0670
.org 0xbd2c
	adds r0, #1	@ 0000bd2c 0130
.org 0xbd2e
	strb r6, [r0, #0]	@ 0000bd2e 0670
.org 0xbd30
	ldr r0, [pc, #360]	@ 0000bd30 5a48
.org 0xbd32
	ldr r4, [pc, #364]	@ 0000bd32 5b4c
.org 0xbd34
	adds r4, r4, r0	@ 0000bd34 2418
.org 0xbd36
	mov ip, r4	@ 0000bd36 a446
.org 0xbd38
	ldr r0, [r4, #0]	@ 0000bd38 2068
.org 0xbd3a
	ldr r5, [pc, #360]	@ 0000bd3a 5a4d
.org 0xbd3c
	adds r2, r0, #0	@ 0000bd3c 021c
.org 0xbd3e
	muls r2, r5	@ 0000bd3e 6a43
.org 0xbd40
	ldr r3, [pc, #356]	@ 0000bd40 594b
.org 0xbd42
	adds r2, r2, r3	@ 0000bd42 d218
.org 0xbd44
	lsrs r0, r2, #16	@ 0000bd44 100c
.org 0xbd46
	movs r4, #1	@ 0000bd46 0124
.org 0xbd48
	ands r0, r4	@ 0000bd48 2040
.org 0xbd4a
	adds r0, #3	@ 0000bd4a 0330
.org 0xbd4c
	adds r1, r7, #0	@ 0000bd4c 391c
.org 0xbd4e
	adds r1, #108	@ 0000bd4e 6c31
.org 0xbd50
	strb r0, [r1, #0]	@ 0000bd50 0870
.org 0xbd52
	adds r1, r2, #0	@ 0000bd52 111c
.org 0xbd54
	muls r1, r5	@ 0000bd54 6943
.org 0xbd56
	adds r1, r1, r3	@ 0000bd56 c918
.org 0xbd58
	lsrs r0, r1, #16	@ 0000bd58 080c
.org 0xbd5a
	ands r0, r4	@ 0000bd5a 2040
.org 0xbd5c
	adds r0, #5	@ 0000bd5c 0530
.org 0xbd5e
	adds r2, r7, #0	@ 0000bd5e 3a1c
.org 0xbd60
	adds r2, #109	@ 0000bd60 6d32
.org 0xbd62
	strb r0, [r2, #0]	@ 0000bd62 1070
.org 0xbd64
	adds r0, r1, #0	@ 0000bd64 081c
.org 0xbd66
	muls r0, r5	@ 0000bd66 6843
.org 0xbd68
	adds r0, r0, r3	@ 0000bd68 c018
.org 0xbd6a
	mov r1, ip	@ 0000bd6a 6146
.org 0xbd6c
	str r0, [r1, #0]	@ 0000bd6c 0860
.org 0xbd6e
	lsrs r0, r0, #16	@ 0000bd6e 000c
.org 0xbd70
	ands r0, r4	@ 0000bd70 2040
.org 0xbd72
	adds r0, #7	@ 0000bd72 0730
.org 0xbd74
	adds r1, r7, #0	@ 0000bd74 391c
.org 0xbd76
	adds r1, #110	@ 0000bd76 6e31
.org 0xbd78
	strb r0, [r1, #0]	@ 0000bd78 0870
.org 0xbd7a
	adds r0, r7, #0	@ 0000bd7a 381c
.org 0xbd7c
	adds r0, #111	@ 0000bd7c 6f30
.org 0xbd7e
	strb r6, [r0, #0]	@ 0000bd7e 0670
.org 0xbd80
	strh r6, [r7, #16]	@ 0000bd80 3e82
.org 0xbd82
	strh r6, [r7, #18]	@ 0000bd82 7e82
.org 0xbd84
	mov r2, r8	@ 0000bd84 4246
.org 0xbd86
	ldrh r0, [r2, #0]	@ 0000bd86 1088
.org 0xbd88
	movs r4, #248	@ 0000bd88 f824
.org 0xbd8a
	lsls r4, r4, #5	@ 0000bd8a 6401
.org 0xbd8c
	adds r1, r4, #0	@ 0000bd8c 211c
.org 0xbd8e
	ands r1, r0	@ 0000bd8e 0140
.org 0xbd90
	lsls r1, r1, #3	@ 0000bd90 c900
.org 0xbd92
	movs r0, #192	@ 0000bd92 c020
.org 0xbd94
	lsls r0, r0, #19	@ 0000bd94 c004
.org 0xbd96
	adds r1, r1, r0	@ 0000bd96 0918
.org 0xbd98
	str r6, [sp, #0]	@ 0000bd98 0096
.org 0xbd9a
	movs r5, #128	@ 0000bd9a 8025
.org 0xbd9c
	lsls r5, r5, #2	@ 0000bd9c ad00
.org 0xbd9e
	ldr r2, [pc, #268]	@ 0000bd9e 434a
.org 0xbda0
	mov r0, sp	@ 0000bda0 6846
.org 0xbda2
	bl 0x128be0	@ 0000bda2 1cf11dff
.org 0xbda6
	ldr r0, [pc, #264]	@ 0000bda6 4248
.org 0xbda8
	ldr r0, [r0, #0]	@ 0000bda8 0068
.org 0xbdaa
	ldr r1, [pc, #264]	@ 0000bdaa 4249
.org 0xbdac
	adds r0, r0, r1	@ 0000bdac 4018
.org 0xbdae
	mov r2, r8	@ 0000bdae 4246
.org 0xbdb0
	ldrh r1, [r2, #0]	@ 0000bdb0 1188
.org 0xbdb2
	ands r4, r1	@ 0000bdb2 0c40
.org 0xbdb4
	lsls r4, r4, #3	@ 0000bdb4 e400
.org 0xbdb6
	ldr r1, [pc, #256]	@ 0000bdb6 4049
.org 0xbdb8
	adds r4, r4, r1	@ 0000bdb8 6418
.org 0xbdba
	adds r1, r4, #0	@ 0000bdba 211c
.org 0xbdbc
	adds r2, r5, #0	@ 0000bdbc 2a1c
.org 0xbdbe
	bl 0x128be0	@ 0000bdbe 1cf10fff
.org 0xbdc2
	ldrb r0, [r7, #14]	@ 0000bdc2 b87b
.org 0xbdc4
	adds r0, #1	@ 0000bdc4 0130
.org 0xbdc6
	strb r0, [r7, #14]	@ 0000bdc6 b873
.org 0xbdc8
	adds r1, r7, #0	@ 0000bdc8 391c
.org 0xbdca
	adds r1, #104	@ 0000bdca 6831
.org 0xbdcc
	ldrb r0, [r1, #0]	@ 0000bdcc 0878
.org 0xbdce
	adds r0, #1	@ 0000bdce 0130
.org 0xbdd0
	movs r3, #0	@ 0000bdd0 0023
.org 0xbdd2
	strb r0, [r1, #0]	@ 0000bdd2 0870
.org 0xbdd4
	adds r0, r7, #0	@ 0000bdd4 381c
.org 0xbdd6
	adds r0, #105	@ 0000bdd6 6930
.org 0xbdd8
	ldrb r1, [r0, #0]	@ 0000bdd8 0178
.org 0xbdda
	mov ip, r0	@ 0000bdda 8446
.org 0xbddc
	ldr r2, [pc, #188]	@ 0000bddc 2f4a
.org 0xbdde
	mov r8, r2	@ 0000bdde 9046
.org 0xbde0
	adds r4, r7, #0	@ 0000bde0 3c1c
.org 0xbde2
	adds r4, #108	@ 0000bde2 6c34
.org 0xbde4
	str r4, [sp, #8]	@ 0000bde4 0294
.org 0xbde6
	cmp r1, #251	@ 0000bde6 fb29
.org 0xbde8
	bls.n 0xbe06	@ 0000bde8 0dd9
.org 0xbdea
	strb r3, [r0, #0]	@ 0000bdea 0370
.org 0xbdec
	ldr r2, [pc, #176]	@ 0000bdec 2c4a
.org 0xbdee
	add r2, r8	@ 0000bdee 4244
.org 0xbdf0
	ldr r1, [r2, #0]	@ 0000bdf0 1168
.org 0xbdf2
	ldr r0, [pc, #176]	@ 0000bdf2 2c48
.org 0xbdf4
	muls r0, r1	@ 0000bdf4 4843
.org 0xbdf6
	ldr r1, [pc, #176]	@ 0000bdf6 2c49
.org 0xbdf8
	adds r0, r0, r1	@ 0000bdf8 4018
.org 0xbdfa
	str r0, [r2, #0]	@ 0000bdfa 1060
.org 0xbdfc
	lsrs r0, r0, #16	@ 0000bdfc 000c
.org 0xbdfe
	movs r1, #1	@ 0000bdfe 0121
.org 0xbe00
	ands r0, r1	@ 0000be00 0840
.org 0xbe02
	adds r0, #3	@ 0000be02 0330
.org 0xbe04
	strb r0, [r4, #0]	@ 0000be04 2070
.org 0xbe06
	adds r0, r7, #0	@ 0000be06 381c
.org 0xbe08
	adds r0, #106	@ 0000be08 6a30
.org 0xbe0a
	ldrb r1, [r0, #0]	@ 0000be0a 0178
.org 0xbe0c
	adds r6, r0, #0	@ 0000be0c 061c
.org 0xbe0e
	movs r2, #109	@ 0000be0e 6d22
.org 0xbe10
	adds r2, r2, r7	@ 0000be10 d219
.org 0xbe12
	mov sl, r2	@ 0000be12 9246
.org 0xbe14
	cmp r1, #249	@ 0000be14 f929
.org 0xbe16
	bls.n 0xbe36	@ 0000be16 0ed9
.org 0xbe18
	strb r3, [r6, #0]	@ 0000be18 3370
.org 0xbe1a
	ldr r2, [pc, #132]	@ 0000be1a 214a
.org 0xbe1c
	add r2, r8	@ 0000be1c 4244
.org 0xbe1e
	ldr r1, [r2, #0]	@ 0000be1e 1168
.org 0xbe20
	ldr r0, [pc, #128]	@ 0000be20 2048
.org 0xbe22
	muls r0, r1	@ 0000be22 4843
.org 0xbe24
	ldr r4, [pc, #128]	@ 0000be24 204c
.org 0xbe26
	adds r0, r0, r4	@ 0000be26 0019
.org 0xbe28
	str r0, [r2, #0]	@ 0000be28 1060
.org 0xbe2a
	lsrs r0, r0, #16	@ 0000be2a 000c
.org 0xbe2c
	movs r1, #1	@ 0000be2c 0121
.org 0xbe2e
	ands r0, r1	@ 0000be2e 0840
.org 0xbe30
	adds r0, #5	@ 0000be30 0530
.org 0xbe32
	mov r1, sl	@ 0000be32 5146
.org 0xbe34
	strb r0, [r1, #0]	@ 0000be34 0870
.org 0xbe36
	adds r0, r7, #0	@ 0000be36 381c
.org 0xbe38
	adds r0, #107	@ 0000be38 6b30
.org 0xbe3a
	ldrb r1, [r0, #0]	@ 0000be3a 0178
.org 0xbe3c
	adds r5, r0, #0	@ 0000be3c 051c
.org 0xbe3e
	movs r2, #110	@ 0000be3e 6e22
.org 0xbe40
	adds r2, r2, r7	@ 0000be40 d219
.org 0xbe42
	mov r9, r2	@ 0000be42 9146
.org 0xbe44
	cmp r1, #247	@ 0000be44 f729
.org 0xbe46
	bls.n 0xbe66	@ 0000be46 0ed9
.org 0xbe48
	strb r3, [r5, #0]	@ 0000be48 2b70
.org 0xbe4a
	ldr r2, [pc, #84]	@ 0000be4a 154a
.org 0xbe4c
	add r2, r8	@ 0000be4c 4244
.org 0xbe4e
	ldr r1, [r2, #0]	@ 0000be4e 1168
.org 0xbe50
	ldr r0, [pc, #80]	@ 0000be50 1448
.org 0xbe52
	muls r0, r1	@ 0000be52 4843
.org 0xbe54
	ldr r4, [pc, #80]	@ 0000be54 144c
.org 0xbe56
	adds r0, r0, r4	@ 0000be56 0019
.org 0xbe58
	str r0, [r2, #0]	@ 0000be58 1060
.org 0xbe5a
	lsrs r0, r0, #16	@ 0000be5a 000c
.org 0xbe5c
	movs r1, #1	@ 0000be5c 0121
.org 0xbe5e
	ands r0, r1	@ 0000be5e 0840
.org 0xbe60
	adds r0, #7	@ 0000be60 0730
.org 0xbe62
	mov r1, r9	@ 0000be62 4946
.org 0xbe64
	strb r0, [r1, #0]	@ 0000be64 0870
.org 0xbe66
	ldr r0, [pc, #84]	@ 0000be66 1548
.org 0xbe68
	ldr r2, [pc, #84]	@ 0000be68 154a
.org 0xbe6a
	adds r0, r0, r2	@ 0000be6a 8018
.org 0xbe6c
	ldrb r1, [r0, #0]	@ 0000be6c 0178
.org 0xbe6e
	movs r0, #1	@ 0000be6e 0120
.org 0xbe70
	ands r0, r1	@ 0000be70 0840
.org 0xbe72
	cmp r0, #0	@ 0000be72 0028
.org 0xbe74
	beq.n 0xbed4	@ 0000be74 2ed0
.org 0xbe76
	adds r2, r7, #0	@ 0000be76 3a1c
.org 0xbe78
	adds r2, #111	@ 0000be78 6f32
.org 0xbe7a
	ldrb r4, [r2, #0]	@ 0000be7a 1478
.org 0xbe7c
	adds r3, r4, #0	@ 0000be7c 231c
.org 0xbe7e
	cmp r3, #32	@ 0000be7e 202b
.org 0xbe80
	beq.n 0xbed4	@ 0000be80 28d0
.org 0xbe82
	ldr r0, [pc, #64]	@ 0000be82 1048
.org 0xbe84
	add r0, r8	@ 0000be84 4044
.org 0xbe86
	ldr r0, [r0, #0]	@ 0000be86 0068
.org 0xbe88
	ldr r1, [r0, #84]	@ 0000be88 416d
.org 0xbe8a
	ldr r0, [pc, #60]	@ 0000be8a 0f48
.org 0xbe8c
	cmp r1, r0	@ 0000be8c 8142
.org 0xbe8e
	ble.n 0xbecc	@ 0000be8e 1ddd
.org 0xbe90
	movs r0, #32	@ 0000be90 2020
.org 0xbe92
	b.n 0xbed2	@ 0000be92 1ee0
.org 0xbe94
	.byte 0x04,0x0a,0x00,0x02	@ 0000be94 data
.org 0xbe98
	.byte 0x44,0x80,0x00,0x00	@ 0000be98 data
.org 0xbe9c
	.byte 0x10,0xf6,0x02,0x02	@ 0000be9c data
.org 0xbea0
	.byte 0x6c,0x62,0x00,0x00	@ 0000bea0 data
.org 0xbea4
	.byte 0x6d,0x4e,0xc6,0x41	@ 0000bea4 data
.org 0xbea8
	.byte 0x39,0x30,0x00,0x00	@ 0000bea8 data
.org 0xbeac
	.byte 0x00,0x02,0x00,0x01	@ 0000beac data
.org 0xbeb0
	.byte 0xb8,0xc0,0xb2,0x08	@ 0000beb0 data
.org 0xbeb4
	.byte 0xc0,0xc0,0xb2,0x08	@ 0000beb4 data
.org 0xbeb8
	.byte 0x00,0x08,0x00,0x06	@ 0000beb8 data
.org 0xbebc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000bebc data
.org 0xbec0
	.byte 0x25,0xd0,0x02,0x00	@ 0000bec0 data
.org 0xbec4
	.byte 0xa8,0x63,0x00,0x00	@ 0000bec4 data
.org 0xbec8
	.byte 0xff,0x5f,0x1c,0x00	@ 0000bec8 data
.org 0xbecc
	cmp r3, #31	@ 0000becc 1f2b
.org 0xbece
	bhi.n 0xbed4	@ 0000bece 01d8
.org 0xbed0
	adds r0, r4, #1	@ 0000bed0 601c
.org 0xbed2
	strb r0, [r2, #0]	@ 0000bed2 1070
.org 0xbed4
	ldrh r0, [r7, #16]	@ 0000bed4 388a
.org 0xbed6
	adds r0, #2	@ 0000bed6 0230
.org 0xbed8
	strh r0, [r7, #16]	@ 0000bed8 3882
.org 0xbeda
	ldr r2, [pc, #36]	@ 0000beda 094a
.org 0xbedc
	add r2, r8	@ 0000bedc 4244
.org 0xbede
	ldr r1, [r2, #0]	@ 0000bede 1168
.org 0xbee0
	ldr r0, [pc, #32]	@ 0000bee0 0848
.org 0xbee2
	muls r0, r1	@ 0000bee2 4843
.org 0xbee4
	ldr r4, [pc, #32]	@ 0000bee4 084c
.org 0xbee6
	adds r0, r0, r4	@ 0000bee6 0019
.org 0xbee8
	str r0, [r2, #0]	@ 0000bee8 1060
.org 0xbeea
	lsrs r0, r0, #16	@ 0000beea 000c
.org 0xbeec
	movs r1, #1	@ 0000beec 0121
.org 0xbeee
	ands r0, r1	@ 0000beee 0840
.org 0xbef0
	cmp r0, #0	@ 0000bef0 0028
.org 0xbef2
	beq.n 0xbf10	@ 0000bef2 0dd0
.org 0xbef4
	ldrh r0, [r7, #18]	@ 0000bef4 788a
.org 0xbef6
	cmp r0, #8	@ 0000bef6 0828
.org 0xbef8
	bne.n 0xbf0c	@ 0000bef8 08d1
.org 0xbefa
	movs r0, #7	@ 0000befa 0720
.org 0xbefc
	b.n 0xbf1c	@ 0000befc 0ee0
.org 0xbefe
	.byte 0x00	@ 0000befe data
.org 0xbeff
	.byte 0x00	@ 0000beff data
.org 0xbf00
	.byte 0x6c,0x62,0x00,0x00	@ 0000bf00 data
.org 0xbf04
	.byte 0x6d,0x4e,0xc6,0x41	@ 0000bf04 data
.org 0xbf08
	.byte 0x39,0x30,0x00,0x00	@ 0000bf08 data
