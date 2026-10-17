@ FUN_0802baf0  entry 0x0802baf0  size 1228
.thumb
.org 0x2baf0
FUN_0802baf0:
	push {r4, r5, r6, r7, lr}	@ 0002baf0 f0b5
.org 0x2baf2
	mov r7, sl	@ 0002baf2 5746
.org 0x2baf4
	mov r6, r9	@ 0002baf4 4e46
.org 0x2baf6
	mov r5, r8	@ 0002baf6 4546
.org 0x2baf8
	push {r5, r6, r7}	@ 0002baf8 e0b4
.org 0x2bafa
	sub sp, #40	@ 0002bafa 8ab0
.org 0x2bafc
	adds r5, r0, #0	@ 0002bafc 051c
.org 0x2bafe
	mov sl, r1	@ 0002bafe 8a46
.org 0x2bb00
	lsls r2, r2, #24	@ 0002bb00 1206
.org 0x2bb02
	lsrs r2, r2, #24	@ 0002bb02 120e
.org 0x2bb04
	str r2, [sp, #20]	@ 0002bb04 0592
.org 0x2bb06
	movs r0, #0	@ 0002bb06 0020
.org 0x2bb08
	str r0, [sp, #28]	@ 0002bb08 0790
.org 0x2bb0a
	ldr r2, [r5, #84]	@ 0002bb0a 6a6d
.org 0x2bb0c
	str r2, [sp, #0]	@ 0002bb0c 0092
.org 0x2bb0e
	ldrb r1, [r5, #10]	@ 0002bb0e a97a
.org 0x2bb10
	movs r0, #16	@ 0002bb10 1020
.org 0x2bb12
	ands r0, r1	@ 0002bb12 0840
.org 0x2bb14
	cmp r0, #0	@ 0002bb14 0028
.org 0x2bb16
	beq.n 0x2bb36	@ 0002bb16 0ed0
.org 0x2bb18
	mov r1, sl	@ 0002bb18 5146
.org 0x2bb1a
	movs r3, #0	@ 0002bb1a 0023
.org 0x2bb1c
	ldrsh r0, [r1, r3]	@ 0002bb1c c85e
.org 0x2bb1e
	subs r0, r2, r0	@ 0002bb1e 101a
.org 0x2bb20
	ldrh r1, [r1, #4]	@ 0002bb20 8988
.org 0x2bb22
	lsls r1, r1, #16	@ 0002bb22 0904
.org 0x2bb24
	asrs r1, r1, #17	@ 0002bb24 4914
.org 0x2bb26
	adds r0, r0, r1	@ 0002bb26 4018
.org 0x2bb28
	str r0, [sp, #4]	@ 0002bb28 0190
.org 0x2bb2a
	mov r4, sl	@ 0002bb2a 5446
.org 0x2bb2c
	movs r6, #0	@ 0002bb2c 0026
.org 0x2bb2e
	ldrsh r0, [r4, r6]	@ 0002bb2e a05f
.org 0x2bb30
	subs r0, r2, r0	@ 0002bb30 101a
.org 0x2bb32
	subs r0, r0, r1	@ 0002bb32 401a
.org 0x2bb34
	b.n 0x2bb52	@ 0002bb34 0de0
.org 0x2bb36
	mov r1, sl	@ 0002bb36 5146
.org 0x2bb38
	movs r3, #0	@ 0002bb38 0023
.org 0x2bb3a
	ldrsh r0, [r1, r3]	@ 0002bb3a c85e
.org 0x2bb3c
	adds r0, r2, r0	@ 0002bb3c 1018
.org 0x2bb3e
	ldrh r1, [r1, #4]	@ 0002bb3e 8988
.org 0x2bb40
	lsls r1, r1, #16	@ 0002bb40 0904
.org 0x2bb42
	asrs r1, r1, #17	@ 0002bb42 4914
.org 0x2bb44
	subs r0, r0, r1	@ 0002bb44 401a
.org 0x2bb46
	str r0, [sp, #4]	@ 0002bb46 0190
.org 0x2bb48
	mov r4, sl	@ 0002bb48 5446
.org 0x2bb4a
	movs r6, #0	@ 0002bb4a 0026
.org 0x2bb4c
	ldrsh r0, [r4, r6]	@ 0002bb4c a05f
.org 0x2bb4e
	adds r0, r2, r0	@ 0002bb4e 1018
.org 0x2bb50
	adds r0, r0, r1	@ 0002bb50 4018
.org 0x2bb52
	str r0, [sp, #8]	@ 0002bb52 0290
.org 0x2bb54
	mov r1, sl	@ 0002bb54 5146
.org 0x2bb56
	movs r2, #2	@ 0002bb56 0222
.org 0x2bb58
	ldrsh r0, [r1, r2]	@ 0002bb58 885e
.org 0x2bb5a
	ldr r1, [r5, #88]	@ 0002bb5a a96d
.org 0x2bb5c
	adds r1, r1, r0	@ 0002bb5c 0918
.org 0x2bb5e
	mov r3, sl	@ 0002bb5e 5346
.org 0x2bb60
	ldrh r0, [r3, #6]	@ 0002bb60 d888
.org 0x2bb62
	lsls r0, r0, #16	@ 0002bb62 0004
.org 0x2bb64
	asrs r0, r0, #17	@ 0002bb64 4014
.org 0x2bb66
	adds r1, r1, r0	@ 0002bb66 0918
.org 0x2bb68
	mov r8, r1	@ 0002bb68 8846
.org 0x2bb6a
	movs r4, #220	@ 0002bb6a dc24
.org 0x2bb6c
	lsls r4, r4, #1	@ 0002bb6c 6400
.org 0x2bb6e
	adds r0, r5, r4	@ 0002bb6e 2819
.org 0x2bb70
	ldrb r0, [r0, #0]	@ 0002bb70 0078
.org 0x2bb72
	cmp r0, #0	@ 0002bb72 0028
.org 0x2bb74
	beq.n 0x2bc56	@ 0002bb74 6fd0
.org 0x2bb76
	movs r6, #0	@ 0002bb76 0026
.org 0x2bb78
	str r6, [sp, #24]	@ 0002bb78 0696
.org 0x2bb7a
	ldr r0, [sp, #24]	@ 0002bb7a 0698
.org 0x2bb7c
	lsls r4, r0, #2	@ 0002bb7c 8400
.org 0x2bb7e
	mov r1, sp	@ 0002bb7e 6946
.org 0x2bb80
	adds r6, r1, r4	@ 0002bb80 0e19
.org 0x2bb82
	ldr r1, [r6, #0]	@ 0002bb82 3168
.org 0x2bb84
	adds r0, r5, #0	@ 0002bb84 281c
.org 0x2bb86
	mov r2, r8	@ 0002bb86 4246
.org 0x2bb88
	bl 0x2e058	@ 0002bb88 02f066fa
.org 0x2bb8c
	lsls r0, r0, #16	@ 0002bb8c 0004
.org 0x2bb8e
	lsrs r7, r0, #16	@ 0002bb8e 070c
.org 0x2bb90
	adds r1, r7, #0	@ 0002bb90 391c
.org 0x2bb92
	movs r2, #15	@ 0002bb92 0f22
.org 0x2bb94
	ands r1, r2	@ 0002bb94 1140
.org 0x2bb96
	mov r9, r4	@ 0002bb96 a146
.org 0x2bb98
	cmp r1, #15	@ 0002bb98 0f29
.org 0x2bb9a
	beq.n 0x2bc48	@ 0002bb9a 55d0
.org 0x2bb9c
	movs r4, #128	@ 0002bb9c 8024
.org 0x2bb9e
	lsls r4, r4, #8	@ 0002bb9e 2402
.org 0x2bba0
	adds r0, r7, #0	@ 0002bba0 381c
.org 0x2bba2
	ands r0, r4	@ 0002bba2 2040
.org 0x2bba4
	cmp r0, #0	@ 0002bba4 0028
.org 0x2bba6
	beq.n 0x2bbfc	@ 0002bba6 29d0
.org 0x2bba8
	cmp r1, #0	@ 0002bba8 0029
.org 0x2bbaa
	beq.n 0x2bc48	@ 0002bbaa 4dd0
.org 0x2bbac
	cmp r1, #14	@ 0002bbac 0e29
.org 0x2bbae
	bhi.n 0x2bbfc	@ 0002bbae 25d8
.org 0x2bbb0
	ldr r3, [sp, #20]	@ 0002bbb0 059b
.org 0x2bbb2
	cmp r3, #0	@ 0002bbb2 002b
.org 0x2bbb4
	beq.n 0x2bc48	@ 0002bbb4 48d0
.org 0x2bbb6
	movs r1, #161	@ 0002bbb6 a121
.org 0x2bbb8
	lsls r1, r1, #1	@ 0002bbb8 4900
.org 0x2bbba
	adds r0, r5, r1	@ 0002bbba 6818
.org 0x2bbbc
	ldrb r1, [r0, #0]	@ 0002bbbc 0178
.org 0x2bbbe
	movs r0, #16	@ 0002bbbe 1020
.org 0x2bbc0
	ands r0, r1	@ 0002bbc0 0840
.org 0x2bbc2
	cmp r0, #0	@ 0002bbc2 0028
.org 0x2bbc4
	bne.n 0x2bc48	@ 0002bbc4 40d1
.org 0x2bbc6
	movs r2, #138	@ 0002bbc6 8a22
.org 0x2bbc8
	lsls r2, r2, #1	@ 0002bbc8 5200
.org 0x2bbca
	adds r3, r5, r2	@ 0002bbca ab18
.org 0x2bbcc
	ldr r2, [r3, #0]	@ 0002bbcc 1a68
.org 0x2bbce
	ldr r0, [r5, #84]	@ 0002bbce 686d
.org 0x2bbd0
	subs r2, r2, r0	@ 0002bbd0 121a
.org 0x2bbd2
	ldr r1, [r6, #0]	@ 0002bbd2 3168
.org 0x2bbd4
	adds r1, r1, r2	@ 0002bbd4 8918
.org 0x2bbd6
	ldr r2, [r3, #4]	@ 0002bbd6 5a68
.org 0x2bbd8
	ldr r0, [r5, #88]	@ 0002bbd8 a86d
.org 0x2bbda
	subs r2, r2, r0	@ 0002bbda 121a
.org 0x2bbdc
	add r2, r8	@ 0002bbdc 4244
.org 0x2bbde
	adds r0, r5, #0	@ 0002bbde 281c
.org 0x2bbe0
	bl 0x2e124	@ 0002bbe0 02f0a0fa
.org 0x2bbe4
	lsls r0, r0, #16	@ 0002bbe4 0004
.org 0x2bbe6
	lsrs r1, r0, #16	@ 0002bbe6 010c
.org 0x2bbe8
	adds r0, r1, #0	@ 0002bbe8 081c
.org 0x2bbea
	ands r0, r4	@ 0002bbea 2040
.org 0x2bbec
	cmp r0, #0	@ 0002bbec 0028
.org 0x2bbee
	beq.n 0x2bbfc	@ 0002bbee 05d0
.org 0x2bbf0
	movs r0, #15	@ 0002bbf0 0f20
.org 0x2bbf2
	ands r0, r1	@ 0002bbf2 0840
.org 0x2bbf4
	cmp r0, #0	@ 0002bbf4 0028
.org 0x2bbf6
	beq.n 0x2bbfc	@ 0002bbf6 01d0
.org 0x2bbf8
	cmp r0, #14	@ 0002bbf8 0e28
.org 0x2bbfa
	bls.n 0x2bc48	@ 0002bbfa 25d9
.org 0x2bbfc
	movs r6, #15	@ 0002bbfc 0f26
.org 0x2bbfe
	ands r7, r6	@ 0002bbfe 3740
.org 0x2bc00
	cmp r7, #0	@ 0002bc00 002f
.org 0x2bc02
	beq.n 0x2bc48	@ 0002bc02 21d0
.org 0x2bc04
	mov r0, sp	@ 0002bc04 6846
.org 0x2bc06
	add r0, r9	@ 0002bc06 4844
.org 0x2bc08
	ldr r1, [r0, #0]	@ 0002bc08 0168
.org 0x2bc0a
	adds r0, r5, #0	@ 0002bc0a 281c
.org 0x2bc0c
	mov r2, r8	@ 0002bc0c 4246
.org 0x2bc0e
	add r3, sp, #12	@ 0002bc0e 03ab
.org 0x2bc10
	bl 0x2dd54	@ 0002bc10 02f0a0f8
.org 0x2bc14
	lsls r0, r0, #16	@ 0002bc14 0004
.org 0x2bc16
	lsrs r0, r0, #16	@ 0002bc16 000c
.org 0x2bc18
	str r0, [sp, #28]	@ 0002bc18 0790
.org 0x2bc1a
	ands r0, r6	@ 0002bc1a 3040
.org 0x2bc1c
	add r4, sp, #12	@ 0002bc1c 03ac
.org 0x2bc1e
	cmp r0, #0	@ 0002bc1e 0028
.org 0x2bc20
	beq.n 0x2bc48	@ 0002bc20 12d0
.org 0x2bc22
	ldr r0, [sp, #4]	@ 0002bc22 0198
.org 0x2bc24
	mov r1, r8	@ 0002bc24 4146
.org 0x2bc26
	bl 0x7020	@ 0002bc26 dbf7fbf9
.org 0x2bc2a
	adds r1, r6, #0	@ 0002bc2a 311c
.org 0x2bc2c
	ands r1, r0	@ 0002bc2c 0140
.org 0x2bc2e
	cmp r1, #1	@ 0002bc2e 0129
.org 0x2bc30
	beq.n 0x2bc44	@ 0002bc30 08d0
.org 0x2bc32
	ldr r0, [sp, #8]	@ 0002bc32 0298
.org 0x2bc34
	mov r1, r8	@ 0002bc34 4146
.org 0x2bc36
	bl 0x7020	@ 0002bc36 dbf7f3f9
.org 0x2bc3a
	adds r1, r6, #0	@ 0002bc3a 311c
.org 0x2bc3c
	ands r1, r0	@ 0002bc3c 0140
.org 0x2bc3e
	cmp r1, #1	@ 0002bc3e 0129
.org 0x2bc40
	beq.n 0x2bc44	@ 0002bc40 00d0
.org 0x2bc42
	b.n 0x2bfd2	@ 0002bc42 c6e1
.org 0x2bc44
	ldr r0, [r4, #4]	@ 0002bc44 6068
.org 0x2bc46
	add r8, r0	@ 0002bc46 8044
.org 0x2bc48
	ldr r0, [sp, #24]	@ 0002bc48 0698
.org 0x2bc4a
	adds r0, #1	@ 0002bc4a 0130
.org 0x2bc4c
	lsls r0, r0, #16	@ 0002bc4c 0004
.org 0x2bc4e
	lsrs r0, r0, #16	@ 0002bc4e 000c
.org 0x2bc50
	str r0, [sp, #24]	@ 0002bc50 0690
.org 0x2bc52
	cmp r0, #2	@ 0002bc52 0228
.org 0x2bc54
	bls.n 0x2bb7a	@ 0002bc54 91d9
.org 0x2bc56
	ldr r0, [sp, #0]	@ 0002bc56 0098
.org 0x2bc58
	mov r1, r8	@ 0002bc58 4146
.org 0x2bc5a
	bl 0x7d28	@ 0002bc5a dcf765f8
.org 0x2bc5e
	lsls r0, r0, #16	@ 0002bc5e 0004
.org 0x2bc60
	lsrs r7, r0, #16	@ 0002bc60 070c
.org 0x2bc62
	movs r4, #128	@ 0002bc62 8024
.org 0x2bc64
	lsls r4, r4, #3	@ 0002bc64 e400
.org 0x2bc66
	adds r0, r7, #0	@ 0002bc66 381c
.org 0x2bc68
	ands r0, r4	@ 0002bc68 2040
.org 0x2bc6a
	cmp r0, #0	@ 0002bc6a 0028
.org 0x2bc6c
	beq.n 0x2bc8e	@ 0002bc6c 0fd0
.org 0x2bc6e
	ldr r3, [sp, #20]	@ 0002bc6e 059b
.org 0x2bc70
	cmp r3, #0	@ 0002bc70 002b
.org 0x2bc72
	bne.n 0x2bc76	@ 0002bc72 00d1
.org 0x2bc74
	b.n 0x2bf94	@ 0002bc74 8ee1
.org 0x2bc76
	movs r6, #138	@ 0002bc76 8a26
.org 0x2bc78
	lsls r6, r6, #1	@ 0002bc78 7600
.org 0x2bc7a
	adds r1, r5, r6	@ 0002bc7a a919
.org 0x2bc7c
	ldr r0, [r1, #0]	@ 0002bc7c 0868
.org 0x2bc7e
	ldr r1, [r1, #4]	@ 0002bc7e 4968
.org 0x2bc80
	bl 0x7d28	@ 0002bc80 dcf752f8
.org 0x2bc84
	adds r1, r4, #0	@ 0002bc84 211c
.org 0x2bc86
	ands r1, r0	@ 0002bc86 0140
.org 0x2bc88
	cmp r1, #0	@ 0002bc88 0029
.org 0x2bc8a
	beq.n 0x2bc8e	@ 0002bc8a 00d0
.org 0x2bc8c
	b.n 0x2bf94	@ 0002bc8c 82e1
.org 0x2bc8e
	ldr r0, [sp, #20]	@ 0002bc8e 0598
.org 0x2bc90
	cmp r0, #0	@ 0002bc90 0028
.org 0x2bc92
	beq.n 0x2bd3a	@ 0002bc92 52d0
.org 0x2bc94
	ldr r0, [r5, #84]	@ 0002bc94 686d
.org 0x2bc96
	mov r1, r8	@ 0002bc96 4146
.org 0x2bc98
	bl 0x7d28	@ 0002bc98 dcf746f8
.org 0x2bc9c
	lsls r0, r0, #16	@ 0002bc9c 0004
.org 0x2bc9e
	lsrs r7, r0, #16	@ 0002bc9e 070c
.org 0x2bca0
	ldr r0, [r5, #84]	@ 0002bca0 686d
.org 0x2bca2
	mov r1, r8	@ 0002bca2 4146
.org 0x2bca4
	bl 0x7e98	@ 0002bca4 dcf7f8f8
.org 0x2bca8
	adds r4, r0, #0	@ 0002bca8 041c
.org 0x2bcaa
	movs r1, #128	@ 0002bcaa 8021
.org 0x2bcac
	lsls r1, r1, #8	@ 0002bcac 0902
.org 0x2bcae
	mov r9, r1	@ 0002bcae 8946
.org 0x2bcb0
	adds r0, r7, #0	@ 0002bcb0 381c
.org 0x2bcb2
	ands r0, r1	@ 0002bcb2 0840
.org 0x2bcb4
	cmp r0, #0	@ 0002bcb4 0028
.org 0x2bcb6
	beq.n 0x2bd18	@ 0002bcb6 2fd0
.org 0x2bcb8
	adds r0, r7, #0	@ 0002bcb8 381c
.org 0x2bcba
	movs r2, #15	@ 0002bcba 0f22
.org 0x2bcbc
	ands r0, r2	@ 0002bcbc 1040
.org 0x2bcbe
	cmp r0, #0	@ 0002bcbe 0028
.org 0x2bcc0
	beq.n 0x2bd18	@ 0002bcc0 2ad0
.org 0x2bcc2
	cmp r0, #14	@ 0002bcc2 0e28
.org 0x2bcc4
	bhi.n 0x2bd18	@ 0002bcc4 28d8
.org 0x2bcc6
	movs r3, #138	@ 0002bcc6 8a23
.org 0x2bcc8
	lsls r3, r3, #1	@ 0002bcc8 5b00
.org 0x2bcca
	adds r1, r5, r3	@ 0002bcca e918
.org 0x2bccc
	ldr r0, [r1, #0]	@ 0002bccc 0868
.org 0x2bcce
	mov r6, sl	@ 0002bcce 5646
.org 0x2bcd0
	movs r3, #2	@ 0002bcd0 0223
.org 0x2bcd2
	ldrsh r2, [r6, r3]	@ 0002bcd2 f25e
.org 0x2bcd4
	ldr r1, [r1, #4]	@ 0002bcd4 4968
.org 0x2bcd6
	adds r1, r1, r2	@ 0002bcd6 8918
.org 0x2bcd8
	ldrh r2, [r6, #6]	@ 0002bcd8 f288
.org 0x2bcda
	lsls r2, r2, #16	@ 0002bcda 1204
.org 0x2bcdc
	asrs r2, r2, #17	@ 0002bcdc 5214
.org 0x2bcde
	adds r1, r1, r2	@ 0002bcde 8918
.org 0x2bce0
	bl 0x7d28	@ 0002bce0 dcf722f8
.org 0x2bce4
	lsls r0, r0, #16	@ 0002bce4 0004
.org 0x2bce6
	lsrs r1, r0, #16	@ 0002bce6 010c
.org 0x2bce8
	adds r0, r1, #0	@ 0002bce8 081c
.org 0x2bcea
	mov r6, r9	@ 0002bcea 4e46
.org 0x2bcec
	ands r0, r6	@ 0002bcec 3040
.org 0x2bcee
	cmp r0, #0	@ 0002bcee 0028
.org 0x2bcf0
	beq.n 0x2bcfe	@ 0002bcf0 05d0
.org 0x2bcf2
	movs r0, #15	@ 0002bcf2 0f20
.org 0x2bcf4
	ands r0, r1	@ 0002bcf4 0840
.org 0x2bcf6
	cmp r0, #0	@ 0002bcf6 0028
.org 0x2bcf8
	beq.n 0x2bcfe	@ 0002bcf8 01d0
.org 0x2bcfa
	cmp r0, #14	@ 0002bcfa 0e28
.org 0x2bcfc
	bls.n 0x2bd14	@ 0002bcfc 0ad9
.org 0x2bcfe
	movs r1, #138	@ 0002bcfe 8a21
.org 0x2bd00
	lsls r1, r1, #1	@ 0002bd00 4900
.org 0x2bd02
	adds r0, r5, r1	@ 0002bd02 6818
.org 0x2bd04
	ldr r1, [r5, #88]	@ 0002bd04 a96d
.org 0x2bd06
	adds r1, r1, r4	@ 0002bd06 0919
.org 0x2bd08
	movs r2, #224	@ 0002bd08 e022
.org 0x2bd0a
	lsls r2, r2, #3	@ 0002bd0a d200
.org 0x2bd0c
	adds r1, r1, r2	@ 0002bd0c 8918
.org 0x2bd0e
	ldr r0, [r0, #4]	@ 0002bd0e 4068
.org 0x2bd10
	cmp r0, r1	@ 0002bd10 8842
.org 0x2bd12
	ble.n 0x2bd18	@ 0002bd12 01dd
.org 0x2bd14
	movs r0, #0	@ 0002bd14 0020
.org 0x2bd16
	b.n 0x2bfd4	@ 0002bd16 5de1
.org 0x2bd18
	ldr r0, [pc, #8]	@ 0002bd18 0248
.org 0x2bd1a
	cmp r7, r0	@ 0002bd1a 8742
.org 0x2bd1c
	bne.n 0x2bd28	@ 0002bd1c 04d1
.org 0x2bd1e
	ldr r0, [r5, #88]	@ 0002bd1e a86d
.org 0x2bd20
	b.n 0x2bf90	@ 0002bd20 36e1
.org 0x2bd22
	.byte 0x00	@ 0002bd22 data
.org 0x2bd23
	.byte 0x00	@ 0002bd23 data
.org 0x2bd24
	.byte 0x0e,0x80,0x00,0x00	@ 0002bd24 data
.org 0x2bd28
	movs r0, #15	@ 0002bd28 0f20
.org 0x2bd2a
	ands r0, r7	@ 0002bd2a 3840
.org 0x2bd2c
	subs r0, #1	@ 0002bd2c 0138
.org 0x2bd2e
	lsls r0, r0, #16	@ 0002bd2e 0004
.org 0x2bd30
	lsrs r0, r0, #16	@ 0002bd30 000c
.org 0x2bd32
	cmp r0, #12	@ 0002bd32 0c28
.org 0x2bd34
	bhi.n 0x2be06	@ 0002bd34 67d8
.org 0x2bd36
	ldr r0, [r5, #88]	@ 0002bd36 a86d
.org 0x2bd38
	b.n 0x2bf90	@ 0002bd38 2ae1
.org 0x2bd3a
	ldr r0, [r5, #84]	@ 0002bd3a 686d
.org 0x2bd3c
	mov r1, r8	@ 0002bd3c 4146
.org 0x2bd3e
	bl 0x7d28	@ 0002bd3e dbf7f3ff
.org 0x2bd42
	lsls r0, r0, #16	@ 0002bd42 0004
.org 0x2bd44
	lsrs r7, r0, #16	@ 0002bd44 070c
.org 0x2bd46
	movs r0, #128	@ 0002bd46 8020
.org 0x2bd48
	lsls r0, r0, #8	@ 0002bd48 0002
.org 0x2bd4a
	ands r0, r7	@ 0002bd4a 3840
.org 0x2bd4c
	cmp r0, #0	@ 0002bd4c 0028
.org 0x2bd4e
	beq.n 0x2bd66	@ 0002bd4e 0ad0
.org 0x2bd50
	movs r0, #15	@ 0002bd50 0f20
.org 0x2bd52
	ands r0, r7	@ 0002bd52 3840
.org 0x2bd54
	cmp r0, #0	@ 0002bd54 0028
.org 0x2bd56
	beq.n 0x2bd66	@ 0002bd56 06d0
.org 0x2bd58
	cmp r0, #14	@ 0002bd58 0e28
.org 0x2bd5a
	bhi.n 0x2bd66	@ 0002bd5a 04d8
.org 0x2bd5c
	ldr r3, [pc, #60]	@ 0002bd5c 0f4b
.org 0x2bd5e
	adds r0, r5, r3	@ 0002bd5e e818
.org 0x2bd60
	ldrb r0, [r0, #0]	@ 0002bd60 0078
.org 0x2bd62
	cmp r0, #0	@ 0002bd62 0028
.org 0x2bd64
	beq.n 0x2be06	@ 0002bd64 4fd0
.org 0x2bd66
	ldr r0, [r5, #84]	@ 0002bd66 686d
.org 0x2bd68
	movs r4, #160	@ 0002bd68 a024
.org 0x2bd6a
	lsls r4, r4, #3	@ 0002bd6a e400
.org 0x2bd6c
	mov r9, r4	@ 0002bd6c a146
.org 0x2bd6e
	mov r6, r8	@ 0002bd6e 4646
.org 0x2bd70
	add r6, r9	@ 0002bd70 4e44
.org 0x2bd72
	adds r1, r6, #0	@ 0002bd72 311c
.org 0x2bd74
	bl 0x7e98	@ 0002bd74 dcf790f8
.org 0x2bd78
	adds r4, r0, #0	@ 0002bd78 041c
.org 0x2bd7a
	ldr r1, [r5, #84]	@ 0002bd7a 696d
.org 0x2bd7c
	adds r0, r5, #0	@ 0002bd7c 281c
.org 0x2bd7e
	adds r2, r6, #0	@ 0002bd7e 321c
.org 0x2bd80
	bl 0x2e058	@ 0002bd80 02f06af9
.org 0x2bd84
	lsls r0, r0, #16	@ 0002bd84 0004
.org 0x2bd86
	cmp r0, #0	@ 0002bd86 0028
.org 0x2bd88
	beq.n 0x2bda0	@ 0002bd88 0ad0
.org 0x2bd8a
	ldr r1, [r5, #84]	@ 0002bd8a 696d
.org 0x2bd8c
	adds r0, r5, #0	@ 0002bd8c 281c
.org 0x2bd8e
	adds r2, r6, #0	@ 0002bd8e 321c
.org 0x2bd90
	bl 0x2e058	@ 0002bd90 02f062f9
.org 0x2bd94
	lsls r0, r0, #16	@ 0002bd94 0004
.org 0x2bd96
	lsrs r0, r0, #16	@ 0002bd96 000c
.org 0x2bd98
	b.n 0x2bfd4	@ 0002bd98 1ce1
.org 0x2bd9a
	.byte 0x00	@ 0002bd9a data
.org 0x2bd9b
	.byte 0x00	@ 0002bd9b data
.org 0x2bd9c
	.byte 0xb9,0x01,0x00,0x00	@ 0002bd9c data
.org 0x2bda0
	cmp r4, #0	@ 0002bda0 002c
.org 0x2bda2
	bge.n 0x2be06	@ 0002bda2 30da
.org 0x2bda4
	ldr r6, [pc, #80]	@ 0002bda4 144e
.org 0x2bda6
	adds r0, r5, r6	@ 0002bda6 a819
.org 0x2bda8
	ldrb r0, [r0, #0]	@ 0002bda8 0078
.org 0x2bdaa
	cmp r0, #0	@ 0002bdaa 0028
.org 0x2bdac
	beq.n 0x2bdfc	@ 0002bdac 26d0
.org 0x2bdae
	movs r0, #128	@ 0002bdae 8020
.org 0x2bdb0
	lsls r0, r0, #8	@ 0002bdb0 0002
.org 0x2bdb2
	ands r0, r7	@ 0002bdb2 3840
.org 0x2bdb4
	cmp r0, #0	@ 0002bdb4 0028
.org 0x2bdb6
	beq.n 0x2bdc4	@ 0002bdb6 05d0
.org 0x2bdb8
	movs r0, #15	@ 0002bdb8 0f20
.org 0x2bdba
	ands r0, r7	@ 0002bdba 3840
.org 0x2bdbc
	cmp r0, #0	@ 0002bdbc 0028
.org 0x2bdbe
	beq.n 0x2bdc4	@ 0002bdbe 01d0
.org 0x2bdc0
	cmp r0, #14	@ 0002bdc0 0e28
.org 0x2bdc2
	bls.n 0x2be06	@ 0002bdc2 20d9
.org 0x2bdc4
	ldr r1, [sp, #4]	@ 0002bdc4 0199
.org 0x2bdc6
	mov r2, r8	@ 0002bdc6 4246
.org 0x2bdc8
	adds r0, r2, r4	@ 0002bdc8 1019
.org 0x2bdca
	movs r3, #160	@ 0002bdca a023
.org 0x2bdcc
	lsls r3, r3, #3	@ 0002bdcc db00
.org 0x2bdce
	mov r9, r3	@ 0002bdce 9946
.org 0x2bdd0
	adds r6, r0, r3	@ 0002bdd0 c618
.org 0x2bdd2
	adds r0, r5, #0	@ 0002bdd2 281c
.org 0x2bdd4
	adds r2, r6, #0	@ 0002bdd4 321c
.org 0x2bdd6
	bl 0x2e2d0	@ 0002bdd6 02f07bfa
.org 0x2bdda
	lsls r0, r0, #16	@ 0002bdda 0004
.org 0x2bddc
	cmp r0, #0	@ 0002bddc 0028
.org 0x2bdde
	bne.n 0x2be06	@ 0002bdde 12d1
.org 0x2bde0
	ldr r1, [sp, #8]	@ 0002bde0 0299
.org 0x2bde2
	adds r0, r5, #0	@ 0002bde2 281c
.org 0x2bde4
	adds r2, r6, #0	@ 0002bde4 321c
.org 0x2bde6
	bl 0x2e2d0	@ 0002bde6 02f073fa
.org 0x2bdea
	lsls r0, r0, #16	@ 0002bdea 0004
.org 0x2bdec
	cmp r0, #0	@ 0002bdec 0028
.org 0x2bdee
	bne.n 0x2be06	@ 0002bdee 0ad1
.org 0x2bdf0
	ldr r0, [r5, #88]	@ 0002bdf0 a86d
.org 0x2bdf2
	add r0, r9	@ 0002bdf2 4844
.org 0x2bdf4
	b.n 0x2bf90	@ 0002bdf4 cce0
.org 0x2bdf6
	.byte 0x00	@ 0002bdf6 data
.org 0x2bdf7
	.byte 0x00	@ 0002bdf7 data
.org 0x2bdf8
	.byte 0xbb,0x01,0x00,0x00	@ 0002bdf8 data
.org 0x2bdfc
	ldr r0, [r5, #88]	@ 0002bdfc a86d
.org 0x2bdfe
	add r0, r9	@ 0002bdfe 4844
.org 0x2be00
	b.n 0x2bf90	@ 0002be00 c6e0
.org 0x2be02
	ldr r0, [r5, #88]	@ 0002be02 a86d
.org 0x2be04
	b.n 0x2bf90	@ 0002be04 c4e0
.org 0x2be06
	movs r4, #1	@ 0002be06 0124
.org 0x2be08
	str r4, [sp, #24]	@ 0002be08 0694
.org 0x2be0a
	movs r6, #15	@ 0002be0a 0f26
.org 0x2be0c
	mov sl, r6	@ 0002be0c b246
.org 0x2be0e
	movs r0, #138	@ 0002be0e 8a20
.org 0x2be10
	lsls r0, r0, #1	@ 0002be10 4000
.org 0x2be12
	adds r0, r5, r0	@ 0002be12 2818
.org 0x2be14
	str r0, [sp, #32]	@ 0002be14 0890
.org 0x2be16
	ldr r1, [sp, #24]	@ 0002be16 0699
.org 0x2be18
	lsls r4, r1, #2	@ 0002be18 8c00
.org 0x2be1a
	mov r2, sp	@ 0002be1a 6a46
.org 0x2be1c
	adds r6, r2, r4	@ 0002be1c 1619
.org 0x2be1e
	ldr r0, [r6, #0]	@ 0002be1e 3068
.org 0x2be20
	mov r1, r8	@ 0002be20 4146
.org 0x2be22
	bl 0x7d28	@ 0002be22 dbf781ff
.org 0x2be26
	lsls r0, r0, #16	@ 0002be26 0004
.org 0x2be28
	lsrs r7, r0, #16	@ 0002be28 070c
.org 0x2be2a
	adds r0, r7, #0	@ 0002be2a 381c
.org 0x2be2c
	mov r3, sl	@ 0002be2c 5346
.org 0x2be2e
	ands r0, r3	@ 0002be2e 1840
.org 0x2be30
	adds r1, r0, #0	@ 0002be30 011c
.org 0x2be32
	mov r9, r4	@ 0002be32 a146
.org 0x2be34
	cmp r1, #1	@ 0002be34 0129
.org 0x2be36
	bne.n 0x2beb8	@ 0002be36 3fd1
.org 0x2be38
	movs r4, #128	@ 0002be38 8024
.org 0x2be3a
	lsls r4, r4, #8	@ 0002be3a 2402
.org 0x2be3c
	adds r0, r7, #0	@ 0002be3c 381c
.org 0x2be3e
	ands r0, r4	@ 0002be3e 2040
.org 0x2be40
	cmp r0, #0	@ 0002be40 0028
.org 0x2be42
	beq.n 0x2be92	@ 0002be42 26d0
.org 0x2be44
	ldr r0, [sp, #20]	@ 0002be44 0598
.org 0x2be46
	cmp r0, #0	@ 0002be46 0028
.org 0x2be48
	bne.n 0x2be4c	@ 0002be48 00d1
.org 0x2be4a
	b.n 0x2bfc2	@ 0002be4a bae0
.org 0x2be4c
	ldr r2, [sp, #32]	@ 0002be4c 089a
.org 0x2be4e
	ldr r1, [r2, #0]	@ 0002be4e 1168
.org 0x2be50
	ldr r0, [r5, #84]	@ 0002be50 686d
.org 0x2be52
	subs r1, r1, r0	@ 0002be52 091a
.org 0x2be54
	ldr r0, [r6, #0]	@ 0002be54 3068
.org 0x2be56
	adds r0, r0, r1	@ 0002be56 4018
.org 0x2be58
	ldr r1, [r2, #4]	@ 0002be58 5168
.org 0x2be5a
	ldr r2, [r5, #88]	@ 0002be5a aa6d
.org 0x2be5c
	subs r1, r1, r2	@ 0002be5c 891a
.org 0x2be5e
	add r1, r8	@ 0002be5e 4144
.org 0x2be60
	bl 0x7d28	@ 0002be60 dbf762ff
.org 0x2be64
	lsls r0, r0, #16	@ 0002be64 0004
.org 0x2be66
	lsrs r1, r0, #16	@ 0002be66 010c
.org 0x2be68
	adds r0, r1, #0	@ 0002be68 081c
.org 0x2be6a
	ands r0, r4	@ 0002be6a 2040
.org 0x2be6c
	cmp r0, #0	@ 0002be6c 0028
.org 0x2be6e
	beq.n 0x2be7e	@ 0002be6e 06d0
.org 0x2be70
	mov r0, sl	@ 0002be70 5046
.org 0x2be72
	ands r0, r1	@ 0002be72 0840
.org 0x2be74
	cmp r0, #0	@ 0002be74 0028
.org 0x2be76
	beq.n 0x2be7e	@ 0002be76 02d0
.org 0x2be78
	cmp r0, #14	@ 0002be78 0e28
.org 0x2be7a
	bhi.n 0x2be7e	@ 0002be7a 00d8
.org 0x2be7c
	b.n 0x2bfc2	@ 0002be7c a1e0
.org 0x2be7e
	mov r0, r8	@ 0002be7e 4046
.org 0x2be80
	adds r0, #1	@ 0002be80 0130
.org 0x2be82
	ldr r1, [pc, #48]	@ 0002be82 0c49
.org 0x2be84
	ands r0, r1	@ 0002be84 0840
.org 0x2be86
	subs r0, #1	@ 0002be86 0138
.org 0x2be88
	ldr r3, [sp, #32]	@ 0002be88 089b
.org 0x2be8a
	ldr r1, [r3, #4]	@ 0002be8a 5968
.org 0x2be8c
	cmp r1, r0	@ 0002be8c 8142
.org 0x2be8e
	bls.n 0x2be92	@ 0002be8e 00d9
.org 0x2be90
	b.n 0x2bfc2	@ 0002be90 97e0
.org 0x2be92
	mov r0, sp	@ 0002be92 6846
.org 0x2be94
	add r0, r9	@ 0002be94 4844
.org 0x2be96
	ldr r0, [r0, #0]	@ 0002be96 0068
.org 0x2be98
	mov r1, r8	@ 0002be98 4146
.org 0x2be9a
	bl 0x7e98	@ 0002be9a dbf7fdff
.org 0x2be9e
	adds r4, r0, #0	@ 0002be9e 041c
.org 0x2bea0
	cmp r4, #0	@ 0002bea0 002c
.org 0x2bea2
	blt.n 0x2bea6	@ 0002bea2 00db
.org 0x2bea4
	b.n 0x2bfc2	@ 0002bea4 8de0
.org 0x2bea6
	ldr r0, [r5, #88]	@ 0002bea6 a86d
.org 0x2bea8
	adds r0, r0, r4	@ 0002bea8 0019
.org 0x2beaa
	str r0, [r5, #88]	@ 0002beaa a865
.org 0x2beac
	add r8, r4	@ 0002beac a044
.org 0x2beae
	str r7, [sp, #28]	@ 0002beae 0797
.org 0x2beb0
	b.n 0x2bfc2	@ 0002beb0 87e0
.org 0x2beb2
	.byte 0x00	@ 0002beb2 data
.org 0x2beb3
	.byte 0x00	@ 0002beb3 data
.org 0x2beb4
	.byte 0x00,0xf0,0xff,0xff	@ 0002beb4 data
.org 0x2beb8
	subs r0, #1	@ 0002beb8 0138
.org 0x2beba
	lsls r0, r0, #16	@ 0002beba 0004
.org 0x2bebc
	lsrs r0, r0, #16	@ 0002bebc 000c
.org 0x2bebe
	cmp r0, #12	@ 0002bebe 0c28
.org 0x2bec0
	bls.n 0x2bec4	@ 0002bec0 00d9
.org 0x2bec2
	b.n 0x2bfc2	@ 0002bec2 7ee0
.org 0x2bec4
	movs r2, #128	@ 0002bec4 8022
.org 0x2bec6
	lsls r2, r2, #8	@ 0002bec6 1202
.org 0x2bec8
	adds r0, r7, #0	@ 0002bec8 381c
.org 0x2beca
	ands r0, r2	@ 0002beca 1040
.org 0x2becc
	cmp r0, #0	@ 0002becc 0028
.org 0x2bece
	beq.n 0x2bf10	@ 0002bece 1fd0
.org 0x2bed0
	cmp r1, #0	@ 0002bed0 0029
.org 0x2bed2
	beq.n 0x2bf10	@ 0002bed2 1dd0
.org 0x2bed4
	cmp r1, #14	@ 0002bed4 0e29
.org 0x2bed6
	bhi.n 0x2bf10	@ 0002bed6 1bd8
.org 0x2bed8
	ldr r0, [r6, #0]	@ 0002bed8 3068
.org 0x2beda
	ldr r4, [pc, #108]	@ 0002beda 1b4c
.org 0x2bedc
	add r4, r8	@ 0002bedc 4444
.org 0x2bede
	adds r1, r4, #0	@ 0002bede 211c
.org 0x2bee0
	str r2, [sp, #36]	@ 0002bee0 0992
.org 0x2bee2
	bl 0x7020	@ 0002bee2 dbf79df8
.org 0x2bee6
	ldr r2, [sp, #36]	@ 0002bee6 099a
.org 0x2bee8
	adds r1, r2, #0	@ 0002bee8 111c
.org 0x2beea
	ands r1, r0	@ 0002beea 0140
.org 0x2beec
	cmp r1, #0	@ 0002beec 0029
.org 0x2beee
	beq.n 0x2bf10	@ 0002beee 0fd0
.org 0x2bef0
	ldr r0, [r6, #0]	@ 0002bef0 3068
.org 0x2bef2
	adds r1, r4, #0	@ 0002bef2 211c
.org 0x2bef4
	bl 0x7020	@ 0002bef4 dbf794f8
.org 0x2bef8
	mov r1, sl	@ 0002bef8 5146
.org 0x2befa
	ands r1, r0	@ 0002befa 0140
.org 0x2befc
	cmp r1, #0	@ 0002befc 0029
.org 0x2befe
	beq.n 0x2bf10	@ 0002befe 07d0
.org 0x2bf00
	ldr r0, [r6, #0]	@ 0002bf00 3068
.org 0x2bf02
	adds r1, r4, #0	@ 0002bf02 211c
.org 0x2bf04
	bl 0x7020	@ 0002bf04 dbf78cf8
.org 0x2bf08
	mov r1, sl	@ 0002bf08 5146
.org 0x2bf0a
	ands r1, r0	@ 0002bf0a 0140
.org 0x2bf0c
	cmp r1, #14	@ 0002bf0c 0e29
.org 0x2bf0e
	bls.n 0x2bfc2	@ 0002bf0e 58d9
.org 0x2bf10
	mov r4, sp	@ 0002bf10 6c46
.org 0x2bf12
	add r4, r9	@ 0002bf12 4c44
.org 0x2bf14
	ldr r2, [r4, #0]	@ 0002bf14 2268
.org 0x2bf16
	ldr r0, [r5, #84]	@ 0002bf16 686d
.org 0x2bf18
	cmp r2, r0	@ 0002bf18 8242
.org 0x2bf1a
	ble.n 0x2bf68	@ 0002bf1a 25dd
.org 0x2bf1c
	adds r0, r7, #0	@ 0002bf1c 381c
.org 0x2bf1e
	mov r6, sl	@ 0002bf1e 5646
.org 0x2bf20
	ands r0, r6	@ 0002bf20 3040
.org 0x2bf22
	cmp r0, #7	@ 0002bf22 0728
.org 0x2bf24
	bhi.n 0x2bf4c	@ 0002bf24 12d8
.org 0x2bf26
	ldr r0, [pc, #32]	@ 0002bf26 0848
.org 0x2bf28
	ands r2, r0	@ 0002bf28 0240
.org 0x2bf2a
	movs r1, #160	@ 0002bf2a a021
.org 0x2bf2c
	lsls r1, r1, #3	@ 0002bf2c c900
.org 0x2bf2e
	add r1, r8	@ 0002bf2e 4144
.org 0x2bf30
	adds r0, r2, #0	@ 0002bf30 101c
.org 0x2bf32
	bl 0x7e98	@ 0002bf32 dbf7b1ff
.org 0x2bf36
	adds r4, r0, #0	@ 0002bf36 041c
.org 0x2bf38
	cmp r4, #0	@ 0002bf38 002c
.org 0x2bf3a
	bge.n 0x2bfc2	@ 0002bf3a 42da
.org 0x2bf3c
	ldr r0, [r5, #88]	@ 0002bf3c a86d
.org 0x2bf3e
	movs r1, #160	@ 0002bf3e a021
.org 0x2bf40
	lsls r1, r1, #3	@ 0002bf40 c900
.org 0x2bf42
	adds r0, r0, r1	@ 0002bf42 4018
.org 0x2bf44
	b.n 0x2bf90	@ 0002bf44 24e0
.org 0x2bf46
	.byte 0x00	@ 0002bf46 data
.org 0x2bf47
	.byte 0x00	@ 0002bf47 data
.org 0x2bf48
	.byte 0x00,0xf0,0xff,0xff	@ 0002bf48 data
.org 0x2bf4c
	ldr r6, [pc, #20]	@ 0002bf4c 054e
.org 0x2bf4e
	adds r0, r2, r6	@ 0002bf4e 9019
.org 0x2bf50
	mov r1, r8	@ 0002bf50 4146
.org 0x2bf52
	bl 0x7020	@ 0002bf52 dbf765f8
.org 0x2bf56
	lsls r0, r0, #16	@ 0002bf56 0004
.org 0x2bf58
	cmp r0, #0	@ 0002bf58 0028
.org 0x2bf5a
	bne.n 0x2bfc2	@ 0002bf5a 32d1
.org 0x2bf5c
	ldr r0, [r4, #0]	@ 0002bf5c 2068
.org 0x2bf5e
	ands r0, r6	@ 0002bf5e 3040
.org 0x2bf60
	b.n 0x2bfb4	@ 0002bf60 28e0
.org 0x2bf62
	.byte 0x00	@ 0002bf62 data
.org 0x2bf63
	.byte 0x00	@ 0002bf63 data
.org 0x2bf64
	.byte 0x00,0xf0,0xff,0xff	@ 0002bf64 data
.org 0x2bf68
	adds r0, r7, #0	@ 0002bf68 381c
.org 0x2bf6a
	mov r3, sl	@ 0002bf6a 5346
.org 0x2bf6c
	ands r0, r3	@ 0002bf6c 1840
.org 0x2bf6e
	cmp r0, #7	@ 0002bf6e 0728
.org 0x2bf70
	bls.n 0x2bf9c	@ 0002bf70 14d9
.org 0x2bf72
	ldr r0, [pc, #36]	@ 0002bf72 0948
.org 0x2bf74
	orrs r2, r0	@ 0002bf74 0243
.org 0x2bf76
	movs r1, #160	@ 0002bf76 a021
.org 0x2bf78
	lsls r1, r1, #3	@ 0002bf78 c900
.org 0x2bf7a
	add r1, r8	@ 0002bf7a 4144
.org 0x2bf7c
	adds r0, r2, #0	@ 0002bf7c 101c
.org 0x2bf7e
	bl 0x7e98	@ 0002bf7e dbf78bff
.org 0x2bf82
	adds r4, r0, #0	@ 0002bf82 041c
.org 0x2bf84
	cmp r4, #0	@ 0002bf84 002c
.org 0x2bf86
	bge.n 0x2bfc2	@ 0002bf86 1cda
.org 0x2bf88
	ldr r0, [r5, #88]	@ 0002bf88 a86d
.org 0x2bf8a
	movs r6, #160	@ 0002bf8a a026
.org 0x2bf8c
	lsls r6, r6, #3	@ 0002bf8c f600
.org 0x2bf8e
	adds r0, r0, r6	@ 0002bf8e 8019
.org 0x2bf90
	adds r0, r0, r4	@ 0002bf90 0019
.org 0x2bf92
	str r0, [r5, #88]	@ 0002bf92 a865
.org 0x2bf94
	adds r0, r7, #0	@ 0002bf94 381c
.org 0x2bf96
	b.n 0x2bfd4	@ 0002bf96 1de0
.org 0x2bf98
	.byte 0xff,0x0f,0x00,0x00	@ 0002bf98 data
.org 0x2bf9c
	movs r1, #128	@ 0002bf9c 8021
.org 0x2bf9e
	lsls r1, r1, #5	@ 0002bf9e 4901
.org 0x2bfa0
	adds r0, r2, r1	@ 0002bfa0 5018
.org 0x2bfa2
	mov r1, r8	@ 0002bfa2 4146
.org 0x2bfa4
	bl 0x7020	@ 0002bfa4 dbf73cf8
.org 0x2bfa8
	lsls r0, r0, #16	@ 0002bfa8 0004
.org 0x2bfaa
	cmp r0, #0	@ 0002bfaa 0028
.org 0x2bfac
	bne.n 0x2bfc2	@ 0002bfac 09d1
.org 0x2bfae
	ldr r0, [r4, #0]	@ 0002bfae 2068
.org 0x2bfb0
	ldr r1, [pc, #48]	@ 0002bfb0 0c49
.org 0x2bfb2
	orrs r0, r1	@ 0002bfb2 0843
.org 0x2bfb4
	mov r1, r8	@ 0002bfb4 4146
.org 0x2bfb6
	bl 0x7e98	@ 0002bfb6 dbf76fff
.org 0x2bfba
	adds r4, r0, #0	@ 0002bfba 041c
