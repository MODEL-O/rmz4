@ FUN_0806aaf8  entry 0x0806aaf8  size 564
.thumb
.org 0x6aaf8
FUN_0806aaf8:
	push {r4, r5, r6, r7, lr}	@ 0006aaf8 f0b5
.org 0x6aafa
	mov r7, sl	@ 0006aafa 5746
.org 0x6aafc
	mov r6, r9	@ 0006aafc 4e46
.org 0x6aafe
	mov r5, r8	@ 0006aafe 4546
.org 0x6ab00
	push {r5, r6, r7}	@ 0006ab00 e0b4
.org 0x6ab02
	sub sp, #24	@ 0006ab02 86b0
.org 0x6ab04
	adds r4, r0, #0	@ 0006ab04 041c
.org 0x6ab06
	lsls r1, r1, #24	@ 0006ab06 0906
.org 0x6ab08
	lsrs r1, r1, #24	@ 0006ab08 090e
.org 0x6ab0a
	lsls r2, r2, #24	@ 0006ab0a 1206
.org 0x6ab0c
	lsrs r5, r2, #24	@ 0006ab0c 150e
.org 0x6ab0e
	str r5, [sp, #0]	@ 0006ab0e 0095
.org 0x6ab10
	lsls r3, r3, #24	@ 0006ab10 1b06
.org 0x6ab12
	lsrs r3, r3, #24	@ 0006ab12 1b0e
.org 0x6ab14
	adds r0, #36	@ 0006ab14 2430
.org 0x6ab16
	ldrb r0, [r0, #0]	@ 0006ab16 0078
.org 0x6ab18
	mov ip, r0	@ 0006ab18 8446
.org 0x6ab1a
	movs r0, #160	@ 0006ab1a a020
.org 0x6ab1c
	lsls r0, r0, #1	@ 0006ab1c 4000
.org 0x6ab1e
	subs r0, r0, r1	@ 0006ab1e 401a
.org 0x6ab20
	lsls r2, r5, #1	@ 0006ab20 6a00
.org 0x6ab22
	muls r0, r2	@ 0006ab22 5043
.org 0x6ab24
	adds r1, r1, r0	@ 0006ab24 0918
.org 0x6ab26
	adds r1, #128	@ 0006ab26 8031
.org 0x6ab28
	lsls r1, r1, #24	@ 0006ab28 0906
.org 0x6ab2a
	lsrs r1, r1, #24	@ 0006ab2a 090e
.org 0x6ab2c
	mov sl, r1	@ 0006ab2c 8a46
.org 0x6ab2e
	cmp sl, ip	@ 0006ab2e e245
.org 0x6ab30
	bne.n 0x6ab38	@ 0006ab30 02d1
.org 0x6ab32
	cmp r3, #0	@ 0006ab32 002b
.org 0x6ab34
	bne.n 0x6ab38	@ 0006ab34 00d1
.org 0x6ab36
	b.n 0x6ad1c	@ 0006ab36 f1e0
.org 0x6ab38
	ldrb r0, [r4, #30]	@ 0006ab38 a07f
.org 0x6ab3a
	lsls r0, r0, #8	@ 0006ab3a 0002
.org 0x6ab3c
	mov r9, r0	@ 0006ab3c 8146
.org 0x6ab3e
	adds r6, r4, #0	@ 0006ab3e 261c
.org 0x6ab40
	adds r6, #112	@ 0006ab40 7036
.org 0x6ab42
	ldrb r0, [r6, #0]	@ 0006ab42 3078
.org 0x6ab44
	mov r1, r9	@ 0006ab44 4946
.org 0x6ab46
	orrs r1, r0	@ 0006ab46 0143
.org 0x6ab48
	mov r9, r1	@ 0006ab48 8946
.org 0x6ab4a
	adds r7, r4, #0	@ 0006ab4a 271c
.org 0x6ab4c
	adds r7, #113	@ 0006ab4c 7137
.org 0x6ab4e
	movs r2, #0	@ 0006ab4e 0022
.org 0x6ab50
	ldrsb r2, [r7, r2]	@ 0006ab50 ba56
.org 0x6ab52
	str r2, [sp, #4]	@ 0006ab52 0192
.org 0x6ab54
	movs r0, #114	@ 0006ab54 7220
.org 0x6ab56
	adds r0, r0, r4	@ 0006ab56 0019
.org 0x6ab58
	mov r8, r0	@ 0006ab58 8046
.org 0x6ab5a
	movs r1, #0	@ 0006ab5a 0021
.org 0x6ab5c
	ldrsb r1, [r0, r1]	@ 0006ab5c 4156
.org 0x6ab5e
	str r1, [sp, #8]	@ 0006ab5e 0291
.org 0x6ab60
	str r6, [sp, #12]	@ 0006ab60 0396
.org 0x6ab62
	str r7, [sp, #16]	@ 0006ab62 0497
.org 0x6ab64
	mov r2, r8	@ 0006ab64 4246
.org 0x6ab66
	str r2, [sp, #20]	@ 0006ab66 0592
.org 0x6ab68
	mov r0, sl	@ 0006ab68 5046
.org 0x6ab6a
	cmp r0, #0	@ 0006ab6a 0028
.org 0x6ab6c
	bne.n 0x6abca	@ 0006ab6c 2dd1
.org 0x6ab6e
	adds r0, r4, #0	@ 0006ab6e 201c
.org 0x6ab70
	bl 0x1cc9c	@ 0006ab70 b2f794f8
.org 0x6ab74
	adds r2, r5, #0	@ 0006ab74 2a1c
.org 0x6ab76
	cmp r2, #0	@ 0006ab76 002a
.org 0x6ab78
	beq.n 0x6ab82	@ 0006ab78 03d0
.org 0x6ab7a
	ldrb r1, [r4, #10]	@ 0006ab7a a17a
.org 0x6ab7c
	movs r0, #16	@ 0006ab7c 1020
.org 0x6ab7e
	orrs r0, r1	@ 0006ab7e 0843
.org 0x6ab80
	b.n 0x6ab88	@ 0006ab80 02e0
.org 0x6ab82
	ldrb r1, [r4, #10]	@ 0006ab82 a17a
.org 0x6ab84
	movs r0, #239	@ 0006ab84 ef20
.org 0x6ab86
	ands r0, r1	@ 0006ab86 0840
.org 0x6ab88
	strb r0, [r4, #10]	@ 0006ab88 a072
.org 0x6ab8a
	movs r1, #1	@ 0006ab8a 0121
.org 0x6ab8c
	ands r1, r2	@ 0006ab8c 1140
.org 0x6ab8e
	adds r0, r4, #0	@ 0006ab8e 201c
.org 0x6ab90
	adds r0, #76	@ 0006ab90 4c30
.org 0x6ab92
	strb r1, [r0, #0]	@ 0006ab92 0170
.org 0x6ab94
	adds r3, r4, #0	@ 0006ab94 231c
.org 0x6ab96
	adds r3, #74	@ 0006ab96 4a33
.org 0x6ab98
	lsls r1, r1, #4	@ 0006ab98 0901
.org 0x6ab9a
	ldrb r2, [r3, #0]	@ 0006ab9a 1a78
.org 0x6ab9c
	movs r0, #17	@ 0006ab9c 1120
.org 0x6ab9e
	negs r0, r0	@ 0006ab9e 4042
.org 0x6aba0
	ands r0, r2	@ 0006aba0 1040
.org 0x6aba2
	orrs r0, r1	@ 0006aba2 0843
.org 0x6aba4
	strb r0, [r3, #0]	@ 0006aba4 1870
.org 0x6aba6
	movs r2, #0	@ 0006aba6 0022
.org 0x6aba8
	ldrb r1, [r4, #10]	@ 0006aba8 a17a
.org 0x6abaa
	movs r0, #223	@ 0006abaa df20
.org 0x6abac
	ands r0, r1	@ 0006abac 0840
.org 0x6abae
	strb r0, [r4, #10]	@ 0006abae a072
.org 0x6abb0
	adds r0, r4, #0	@ 0006abb0 201c
.org 0x6abb2
	adds r0, #77	@ 0006abb2 4d30
.org 0x6abb4
	strb r2, [r0, #0]	@ 0006abb4 0270
.org 0x6abb6
	ldrb r1, [r3, #0]	@ 0006abb6 1978
.org 0x6abb8
	movs r0, #33	@ 0006abb8 2120
.org 0x6abba
	negs r0, r0	@ 0006abba 4042
.org 0x6abbc
	ands r0, r1	@ 0006abbc 0840
.org 0x6abbe
	strb r0, [r3, #0]	@ 0006abbe 1870
.org 0x6abc0
	adds r0, r4, #0	@ 0006abc0 201c
.org 0x6abc2
	adds r0, #36	@ 0006abc2 2430
.org 0x6abc4
	mov r1, sl	@ 0006abc4 5146
.org 0x6abc6
	strb r1, [r0, #0]	@ 0006abc6 0170
.org 0x6abc8
	b.n 0x6ac3a	@ 0006abc8 37e0
.org 0x6abca
	mov r1, sl	@ 0006abca 5146
.org 0x6abcc
	cmp r1, #128	@ 0006abcc 8029
.org 0x6abce
	bne.n 0x6ac7c	@ 0006abce 55d1
.org 0x6abd0
	adds r0, r4, #0	@ 0006abd0 201c
.org 0x6abd2
	bl 0x1cc9c	@ 0006abd2 b2f763f8
.org 0x6abd6
	adds r2, r5, #1	@ 0006abd6 6a1c
.org 0x6abd8
	movs r0, #1	@ 0006abd8 0120
.org 0x6abda
	ands r2, r0	@ 0006abda 0240
.org 0x6abdc
	cmp r2, #0	@ 0006abdc 002a
.org 0x6abde
	beq.n 0x6abe8	@ 0006abde 03d0
.org 0x6abe0
	ldrb r1, [r4, #10]	@ 0006abe0 a17a
.org 0x6abe2
	movs r0, #16	@ 0006abe2 1020
.org 0x6abe4
	orrs r0, r1	@ 0006abe4 0843
.org 0x6abe6
	b.n 0x6abee	@ 0006abe6 02e0
.org 0x6abe8
	ldrb r1, [r4, #10]	@ 0006abe8 a17a
.org 0x6abea
	movs r0, #239	@ 0006abea ef20
.org 0x6abec
	ands r0, r1	@ 0006abec 0840
.org 0x6abee
	strb r0, [r4, #10]	@ 0006abee a072
.org 0x6abf0
	movs r3, #1	@ 0006abf0 0123
.org 0x6abf2
	adds r1, r3, #0	@ 0006abf2 191c
.org 0x6abf4
	ands r1, r2	@ 0006abf4 1140
.org 0x6abf6
	adds r0, r4, #0	@ 0006abf6 201c
.org 0x6abf8
	adds r0, #76	@ 0006abf8 4c30
.org 0x6abfa
	strb r1, [r0, #0]	@ 0006abfa 0170
.org 0x6abfc
	movs r2, #74	@ 0006abfc 4a22
.org 0x6abfe
	adds r2, r2, r4	@ 0006abfe 1219
.org 0x6ac00
	mov ip, r2	@ 0006ac00 9446
.org 0x6ac02
	lsls r1, r1, #4	@ 0006ac02 0901
.org 0x6ac04
	ldrb r2, [r2, #0]	@ 0006ac04 1278
.org 0x6ac06
	movs r0, #17	@ 0006ac06 1120
.org 0x6ac08
	negs r0, r0	@ 0006ac08 4042
.org 0x6ac0a
	ands r0, r2	@ 0006ac0a 1040
.org 0x6ac0c
	orrs r0, r1	@ 0006ac0c 0843
.org 0x6ac0e
	mov r1, ip	@ 0006ac0e 6146
.org 0x6ac10
	strb r0, [r1, #0]	@ 0006ac10 0870
.org 0x6ac12
	ldrb r1, [r4, #10]	@ 0006ac12 a17a
.org 0x6ac14
	movs r0, #32	@ 0006ac14 2020
.org 0x6ac16
	orrs r0, r1	@ 0006ac16 0843
.org 0x6ac18
	strb r0, [r4, #10]	@ 0006ac18 a072
.org 0x6ac1a
	adds r0, r4, #0	@ 0006ac1a 201c
.org 0x6ac1c
	adds r0, #77	@ 0006ac1c 4d30
.org 0x6ac1e
	strb r3, [r0, #0]	@ 0006ac1e 0370
.org 0x6ac20
	movs r2, #32	@ 0006ac20 2022
.org 0x6ac22
	mov r0, ip	@ 0006ac22 6046
.org 0x6ac24
	ldrb r1, [r0, #0]	@ 0006ac24 0178
.org 0x6ac26
	movs r0, #33	@ 0006ac26 2120
.org 0x6ac28
	negs r0, r0	@ 0006ac28 4042
.org 0x6ac2a
	ands r0, r1	@ 0006ac2a 0840
.org 0x6ac2c
	orrs r0, r2	@ 0006ac2c 1043
.org 0x6ac2e
	mov r1, ip	@ 0006ac2e 6146
.org 0x6ac30
	strb r0, [r1, #0]	@ 0006ac30 0870
.org 0x6ac32
	adds r0, r4, #0	@ 0006ac32 201c
.org 0x6ac34
	adds r0, #36	@ 0006ac34 2430
.org 0x6ac36
	mov r2, sl	@ 0006ac36 5246
.org 0x6ac38
	strb r2, [r0, #0]	@ 0006ac38 0270
.org 0x6ac3a
	mov r1, r9	@ 0006ac3a 4946
.org 0x6ac3c
	ldr r0, [sp, #4]	@ 0006ac3c 0198
.org 0x6ac3e
	lsls r2, r0, #16	@ 0006ac3e 0204
.org 0x6ac40
	lsrs r2, r2, #16	@ 0006ac40 120c
.org 0x6ac42
	ldr r0, [sp, #8]	@ 0006ac42 0298
.org 0x6ac44
	lsls r3, r0, #16	@ 0006ac44 0304
.org 0x6ac46
	lsrs r3, r3, #16	@ 0006ac46 1b0c
.org 0x6ac48
	adds r0, r4, #0	@ 0006ac48 201c
.org 0x6ac4a
	bl 0x1cfc8	@ 0006ac4a b2f7bdf9
.org 0x6ac4e
	ldrb r0, [r4, #30]	@ 0006ac4e a07f
.org 0x6ac50
	lsls r0, r0, #8	@ 0006ac50 0002
.org 0x6ac52
	ldr r2, [sp, #12]	@ 0006ac52 039a
.org 0x6ac54
	ldrb r1, [r2, #0]	@ 0006ac54 1178
.org 0x6ac56
	orrs r1, r0	@ 0006ac56 0143
.org 0x6ac58
	ldr r0, [sp, #16]	@ 0006ac58 0498
.org 0x6ac5a
	movs r2, #0	@ 0006ac5a 0022
.org 0x6ac5c
	ldrsb r2, [r0, r2]	@ 0006ac5c 8256
.org 0x6ac5e
	lsls r2, r2, #16	@ 0006ac5e 1204
.org 0x6ac60
	lsrs r2, r2, #16	@ 0006ac60 120c
.org 0x6ac62
	ldr r0, [sp, #20]	@ 0006ac62 0598
.org 0x6ac64
	movs r3, #0	@ 0006ac64 0023
.org 0x6ac66
	ldrsb r3, [r0, r3]	@ 0006ac66 c356
.org 0x6ac68
	adds r3, #1	@ 0006ac68 0133
.org 0x6ac6a
	lsls r3, r3, #16	@ 0006ac6a 1b04
.org 0x6ac6c
	lsrs r3, r3, #16	@ 0006ac6c 1b0c
.org 0x6ac6e
	adds r0, r4, #0	@ 0006ac6e 201c
.org 0x6ac70
	bl 0x1cfc8	@ 0006ac70 b2f7aaf9
.org 0x6ac74
	adds r0, r4, #0	@ 0006ac74 201c
.org 0x6ac76
	bl 0x1cff0	@ 0006ac76 b2f7bbf9
.org 0x6ac7a
	b.n 0x6ad1c	@ 0006ac7a 4fe0
.org 0x6ac7c
	movs r0, #127	@ 0006ac7c 7f20
.org 0x6ac7e
	mov r1, ip	@ 0006ac7e 6146
.org 0x6ac80
	ands r0, r1	@ 0006ac80 0840
.org 0x6ac82
	cmp r0, #0	@ 0006ac82 0028
.org 0x6ac84
	bne.n 0x6acc8	@ 0006ac84 20d1
.org 0x6ac86
	adds r0, r4, #0	@ 0006ac86 201c
.org 0x6ac88
	bl 0x1ce54	@ 0006ac88 b2f7e4f8
.org 0x6ac8c
	mov r1, r9	@ 0006ac8c 4946
.org 0x6ac8e
	ldr r0, [sp, #4]	@ 0006ac8e 0198
.org 0x6ac90
	lsls r2, r0, #16	@ 0006ac90 0204
.org 0x6ac92
	lsrs r2, r2, #16	@ 0006ac92 120c
.org 0x6ac94
	ldr r0, [sp, #8]	@ 0006ac94 0298
.org 0x6ac96
	lsls r3, r0, #16	@ 0006ac96 0304
.org 0x6ac98
	lsrs r3, r3, #16	@ 0006ac98 1b0c
.org 0x6ac9a
	adds r0, r4, #0	@ 0006ac9a 201c
.org 0x6ac9c
	bl 0x1cfc8	@ 0006ac9c b2f794f9
.org 0x6aca0
	ldrb r0, [r4, #30]	@ 0006aca0 a07f
.org 0x6aca2
	lsls r0, r0, #8	@ 0006aca2 0002
.org 0x6aca4
	ldrb r1, [r6, #0]	@ 0006aca4 3178
.org 0x6aca6
	orrs r1, r0	@ 0006aca6 0143
.org 0x6aca8
	movs r2, #0	@ 0006aca8 0022
.org 0x6acaa
	ldrsb r2, [r7, r2]	@ 0006acaa ba56
.org 0x6acac
	lsls r2, r2, #16	@ 0006acac 1204
.org 0x6acae
	lsrs r2, r2, #16	@ 0006acae 120c
.org 0x6acb0
	mov r0, r8	@ 0006acb0 4046
.org 0x6acb2
	movs r3, #0	@ 0006acb2 0023
.org 0x6acb4
	ldrsb r3, [r0, r3]	@ 0006acb4 c356
.org 0x6acb6
	adds r3, #1	@ 0006acb6 0133
.org 0x6acb8
	lsls r3, r3, #16	@ 0006acb8 1b04
.org 0x6acba
	lsrs r3, r3, #16	@ 0006acba 1b0c
.org 0x6acbc
	adds r0, r4, #0	@ 0006acbc 201c
.org 0x6acbe
	bl 0x1cfc8	@ 0006acbe b2f783f9
.org 0x6acc2
	adds r0, r4, #0	@ 0006acc2 201c
.org 0x6acc4
	bl 0x1cff0	@ 0006acc4 b2f794f9
.org 0x6acc8
	ldr r2, [sp, #0]	@ 0006acc8 009a
.org 0x6acca
	cmp r2, #0	@ 0006acca 002a
.org 0x6accc
	beq.n 0x6acd6	@ 0006accc 03d0
.org 0x6acce
	ldrb r1, [r4, #10]	@ 0006acce a17a
.org 0x6acd0
	movs r0, #16	@ 0006acd0 1020
.org 0x6acd2
	orrs r0, r1	@ 0006acd2 0843
.org 0x6acd4
	b.n 0x6acdc	@ 0006acd4 02e0
.org 0x6acd6
	ldrb r1, [r4, #10]	@ 0006acd6 a17a
.org 0x6acd8
	movs r0, #239	@ 0006acd8 ef20
.org 0x6acda
	ands r0, r1	@ 0006acda 0840
.org 0x6acdc
	strb r0, [r4, #10]	@ 0006acdc a072
.org 0x6acde
	movs r1, #1	@ 0006acde 0121
.org 0x6ace0
	ands r1, r2	@ 0006ace0 1140
.org 0x6ace2
	adds r0, r4, #0	@ 0006ace2 201c
.org 0x6ace4
	adds r0, #76	@ 0006ace4 4c30
.org 0x6ace6
	strb r1, [r0, #0]	@ 0006ace6 0170
.org 0x6ace8
	adds r3, r4, #0	@ 0006ace8 231c
.org 0x6acea
	adds r3, #74	@ 0006acea 4a33
.org 0x6acec
	lsls r1, r1, #4	@ 0006acec 0901
.org 0x6acee
	ldrb r2, [r3, #0]	@ 0006acee 1a78
.org 0x6acf0
	movs r0, #17	@ 0006acf0 1120
.org 0x6acf2
	negs r0, r0	@ 0006acf2 4042
.org 0x6acf4
	ands r0, r2	@ 0006acf4 1040
.org 0x6acf6
	orrs r0, r1	@ 0006acf6 0843
.org 0x6acf8
	strb r0, [r3, #0]	@ 0006acf8 1870
.org 0x6acfa
	movs r2, #0	@ 0006acfa 0022
.org 0x6acfc
	ldrb r1, [r4, #10]	@ 0006acfc a17a
.org 0x6acfe
	movs r0, #223	@ 0006acfe df20
.org 0x6ad00
	ands r0, r1	@ 0006ad00 0840
.org 0x6ad02
	strb r0, [r4, #10]	@ 0006ad02 a072
.org 0x6ad04
	adds r0, r4, #0	@ 0006ad04 201c
.org 0x6ad06
	adds r0, #77	@ 0006ad06 4d30
.org 0x6ad08
	strb r2, [r0, #0]	@ 0006ad08 0270
.org 0x6ad0a
	ldrb r1, [r3, #0]	@ 0006ad0a 1978
.org 0x6ad0c
	movs r0, #33	@ 0006ad0c 2120
.org 0x6ad0e
	negs r0, r0	@ 0006ad0e 4042
.org 0x6ad10
	ands r0, r1	@ 0006ad10 0840
.org 0x6ad12
	strb r0, [r3, #0]	@ 0006ad12 1870
.org 0x6ad14
	adds r0, r4, #0	@ 0006ad14 201c
.org 0x6ad16
	adds r0, #36	@ 0006ad16 2430
.org 0x6ad18
	mov r1, sl	@ 0006ad18 5146
.org 0x6ad1a
	strb r1, [r0, #0]	@ 0006ad1a 0170
.org 0x6ad1c
	add sp, #24	@ 0006ad1c 06b0
.org 0x6ad1e
	pop {r3, r4, r5}	@ 0006ad1e 38bc
.org 0x6ad20
	mov r8, r3	@ 0006ad20 9846
.org 0x6ad22
	mov r9, r4	@ 0006ad22 a146
.org 0x6ad24
	mov sl, r5	@ 0006ad24 aa46
.org 0x6ad26
	pop {r4, r5, r6, r7}	@ 0006ad26 f0bc
.org 0x6ad28
	pop {r0}	@ 0006ad28 01bc
.org 0x6ad2a
	bx r0	@ 0006ad2a 0047
