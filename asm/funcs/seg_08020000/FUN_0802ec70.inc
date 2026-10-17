@ FUN_0802ec70  entry 0x0802ec70  size 488
.thumb
.org 0x2ec70
FUN_0802ec70:
	push {r4, r5, r6, r7, lr}	@ 0002ec70 f0b5
.org 0x2ec72
	sub sp, #4	@ 0002ec72 81b0
.org 0x2ec74
	adds r7, r0, #0	@ 0002ec74 071c
.org 0x2ec76
	adds r4, r1, #0	@ 0002ec76 0c1c
.org 0x2ec78
	mov r0, sp	@ 0002ec78 6846
.org 0x2ec7a
	movs r1, #0	@ 0002ec7a 0021
.org 0x2ec7c
	movs r2, #4	@ 0002ec7c 0422
.org 0x2ec7e
	bl 0x1292b8	@ 0002ec7e faf01bfb
.org 0x2ec82
	ldrb r1, [r7, #10]	@ 0002ec82 b97a
.org 0x2ec84
	movs r0, #16	@ 0002ec84 1020
.org 0x2ec86
	ands r0, r1	@ 0002ec86 0840
.org 0x2ec88
	cmp r0, #0	@ 0002ec88 0028
.org 0x2ec8a
	beq.n 0x2ec9e	@ 0002ec8a 08d0
.org 0x2ec8c
	movs r1, #0	@ 0002ec8c 0021
.org 0x2ec8e
	ldrsh r0, [r4, r1]	@ 0002ec8e 605e
.org 0x2ec90
	ldr r1, [r7, #84]	@ 0002ec90 796d
.org 0x2ec92
	subs r1, r1, r0	@ 0002ec92 091a
.org 0x2ec94
	ldrh r0, [r4, #4]	@ 0002ec94 a088
.org 0x2ec96
	lsls r0, r0, #16	@ 0002ec96 0004
.org 0x2ec98
	asrs r0, r0, #17	@ 0002ec98 4014
.org 0x2ec9a
	adds r6, r1, r0	@ 0002ec9a 0e18
.org 0x2ec9c
	b.n 0x2ecae	@ 0002ec9c 07e0
.org 0x2ec9e
	movs r1, #0	@ 0002ec9e 0021
.org 0x2eca0
	ldrsh r0, [r4, r1]	@ 0002eca0 605e
.org 0x2eca2
	ldr r1, [r7, #84]	@ 0002eca2 796d
.org 0x2eca4
	adds r1, r1, r0	@ 0002eca4 0918
.org 0x2eca6
	ldrh r0, [r4, #4]	@ 0002eca6 a088
.org 0x2eca8
	lsls r0, r0, #16	@ 0002eca8 0004
.org 0x2ecaa
	asrs r0, r0, #17	@ 0002ecaa 4014
.org 0x2ecac
	subs r6, r1, r0	@ 0002ecac 0e1a
.org 0x2ecae
	movs r1, #2	@ 0002ecae 0221
.org 0x2ecb0
	ldrsh r0, [r4, r1]	@ 0002ecb0 605e
.org 0x2ecb2
	ldr r1, [r7, #88]	@ 0002ecb2 b96d
.org 0x2ecb4
	adds r1, r1, r0	@ 0002ecb4 0918
.org 0x2ecb6
	ldrh r0, [r4, #6]	@ 0002ecb6 e088
.org 0x2ecb8
	lsls r0, r0, #16	@ 0002ecb8 0004
.org 0x2ecba
	asrs r0, r0, #17	@ 0002ecba 4014
.org 0x2ecbc
	adds r5, r1, r0	@ 0002ecbc 0d18
.org 0x2ecbe
	adds r0, r6, #0	@ 0002ecbe 301c
.org 0x2ecc0
	adds r1, r5, #0	@ 0002ecc0 291c
.org 0x2ecc2
	bl 0x7d28	@ 0002ecc2 d9f731f8
.org 0x2ecc6
	lsls r0, r0, #16	@ 0002ecc6 0004
.org 0x2ecc8
	lsrs r1, r0, #16	@ 0002ecc8 010c
.org 0x2ecca
	movs r2, #15	@ 0002ecca 0f22
.org 0x2eccc
	ands r2, r1	@ 0002eccc 0a40
.org 0x2ecce
	cmp r2, #1	@ 0002ecce 012a
.org 0x2ecd0
	bne.n 0x2ecec	@ 0002ecd0 0cd1
.org 0x2ecd2
	movs r0, #128	@ 0002ecd2 8020
.org 0x2ecd4
	lsls r0, r0, #8	@ 0002ecd4 0002
.org 0x2ecd6
	ands r0, r1	@ 0002ecd6 0840
.org 0x2ecd8
	cmp r0, #0	@ 0002ecd8 0028
.org 0x2ecda
	bne.n 0x2ecec	@ 0002ecda 07d1
.org 0x2ecdc
	movs r0, #128	@ 0002ecdc 8020
.org 0x2ecde
	lsls r0, r0, #3	@ 0002ecde c000
.org 0x2ece0
	ands r1, r0	@ 0002ece0 0140
.org 0x2ece2
	cmp r1, #0	@ 0002ece2 0029
.org 0x2ece4
	bne.n 0x2ecec	@ 0002ece4 02d1
.org 0x2ece6
	mov r0, sp	@ 0002ece6 6846
.org 0x2ece8
	strb r2, [r0, #0]	@ 0002ece8 0270
.org 0x2ecea
	b.n 0x2ed02	@ 0002ecea 0ae0
.org 0x2ecec
	adds r0, r7, #0	@ 0002ecec 381c
.org 0x2ecee
	adds r1, r6, #0	@ 0002ecee 311c
.org 0x2ecf0
	adds r2, r5, #0	@ 0002ecf0 2a1c
.org 0x2ecf2
	bl 0x2e2d0	@ 0002ecf2 fff7edfa
.org 0x2ecf6
	lsls r0, r0, #16	@ 0002ecf6 0004
.org 0x2ecf8
	cmp r0, #0	@ 0002ecf8 0028
.org 0x2ecfa
	beq.n 0x2ed02	@ 0002ecfa 02d0
.org 0x2ecfc
	mov r1, sp	@ 0002ecfc 6946
.org 0x2ecfe
	movs r0, #1	@ 0002ecfe 0120
.org 0x2ed00
	strb r0, [r1, #0]	@ 0002ed00 0870
.org 0x2ed02
	movs r1, #2	@ 0002ed02 0221
.org 0x2ed04
	ldrsh r0, [r4, r1]	@ 0002ed04 605e
.org 0x2ed06
	ldr r1, [r7, #88]	@ 0002ed06 b96d
.org 0x2ed08
	adds r1, r1, r0	@ 0002ed08 0918
.org 0x2ed0a
	ldrh r0, [r4, #6]	@ 0002ed0a e088
.org 0x2ed0c
	lsls r0, r0, #16	@ 0002ed0c 0004
.org 0x2ed0e
	asrs r0, r0, #17	@ 0002ed0e 4014
.org 0x2ed10
	subs r5, r1, r0	@ 0002ed10 0d1a
.org 0x2ed12
	adds r0, r6, #0	@ 0002ed12 301c
.org 0x2ed14
	adds r1, r5, #0	@ 0002ed14 291c
.org 0x2ed16
	bl 0x7d28	@ 0002ed16 d9f707f8
.org 0x2ed1a
	lsls r0, r0, #16	@ 0002ed1a 0004
.org 0x2ed1c
	lsrs r1, r0, #16	@ 0002ed1c 010c
.org 0x2ed1e
	movs r2, #15	@ 0002ed1e 0f22
.org 0x2ed20
	ands r2, r1	@ 0002ed20 0a40
.org 0x2ed22
	cmp r2, #1	@ 0002ed22 012a
.org 0x2ed24
	bne.n 0x2ed40	@ 0002ed24 0cd1
.org 0x2ed26
	movs r0, #128	@ 0002ed26 8020
.org 0x2ed28
	lsls r0, r0, #8	@ 0002ed28 0002
.org 0x2ed2a
	ands r0, r1	@ 0002ed2a 0840
.org 0x2ed2c
	cmp r0, #0	@ 0002ed2c 0028
.org 0x2ed2e
	bne.n 0x2ed40	@ 0002ed2e 07d1
.org 0x2ed30
	movs r0, #128	@ 0002ed30 8020
.org 0x2ed32
	lsls r0, r0, #3	@ 0002ed32 c000
.org 0x2ed34
	ands r1, r0	@ 0002ed34 0140
.org 0x2ed36
	cmp r1, #0	@ 0002ed36 0029
.org 0x2ed38
	bne.n 0x2ed40	@ 0002ed38 02d1
.org 0x2ed3a
	mov r0, sp	@ 0002ed3a 6846
.org 0x2ed3c
	strb r2, [r0, #1]	@ 0002ed3c 4270
.org 0x2ed3e
	b.n 0x2ed56	@ 0002ed3e 0ae0
.org 0x2ed40
	adds r0, r7, #0	@ 0002ed40 381c
.org 0x2ed42
	adds r1, r6, #0	@ 0002ed42 311c
.org 0x2ed44
	adds r2, r5, #0	@ 0002ed44 2a1c
.org 0x2ed46
	bl 0x2e2d0	@ 0002ed46 fff7c3fa
.org 0x2ed4a
	lsls r0, r0, #16	@ 0002ed4a 0004
.org 0x2ed4c
	cmp r0, #0	@ 0002ed4c 0028
.org 0x2ed4e
	beq.n 0x2ed56	@ 0002ed4e 02d0
.org 0x2ed50
	mov r1, sp	@ 0002ed50 6946
.org 0x2ed52
	movs r0, #1	@ 0002ed52 0120
.org 0x2ed54
	strb r0, [r1, #1]	@ 0002ed54 4870
.org 0x2ed56
	ldrb r1, [r7, #10]	@ 0002ed56 b97a
.org 0x2ed58
	movs r0, #16	@ 0002ed58 1020
.org 0x2ed5a
	ands r0, r1	@ 0002ed5a 0840
.org 0x2ed5c
	cmp r0, #0	@ 0002ed5c 0028
.org 0x2ed5e
	beq.n 0x2ed72	@ 0002ed5e 08d0
.org 0x2ed60
	movs r1, #0	@ 0002ed60 0021
.org 0x2ed62
	ldrsh r0, [r4, r1]	@ 0002ed62 605e
.org 0x2ed64
	ldr r1, [r7, #84]	@ 0002ed64 796d
.org 0x2ed66
	subs r1, r1, r0	@ 0002ed66 091a
.org 0x2ed68
	ldrh r0, [r4, #4]	@ 0002ed68 a088
.org 0x2ed6a
	lsls r0, r0, #16	@ 0002ed6a 0004
.org 0x2ed6c
	asrs r0, r0, #17	@ 0002ed6c 4014
.org 0x2ed6e
	subs r6, r1, r0	@ 0002ed6e 0e1a
.org 0x2ed70
	b.n 0x2ed82	@ 0002ed70 07e0
.org 0x2ed72
	movs r1, #0	@ 0002ed72 0021
.org 0x2ed74
	ldrsh r0, [r4, r1]	@ 0002ed74 605e
.org 0x2ed76
	ldr r1, [r7, #84]	@ 0002ed76 796d
.org 0x2ed78
	adds r1, r1, r0	@ 0002ed78 0918
.org 0x2ed7a
	ldrh r0, [r4, #4]	@ 0002ed7a a088
.org 0x2ed7c
	lsls r0, r0, #16	@ 0002ed7c 0004
.org 0x2ed7e
	asrs r0, r0, #17	@ 0002ed7e 4014
.org 0x2ed80
	adds r6, r1, r0	@ 0002ed80 0e18
.org 0x2ed82
	movs r1, #2	@ 0002ed82 0221
.org 0x2ed84
	ldrsh r0, [r4, r1]	@ 0002ed84 605e
.org 0x2ed86
	ldr r1, [r7, #88]	@ 0002ed86 b96d
.org 0x2ed88
	adds r1, r1, r0	@ 0002ed88 0918
.org 0x2ed8a
	ldrh r0, [r4, #6]	@ 0002ed8a e088
.org 0x2ed8c
	lsls r0, r0, #16	@ 0002ed8c 0004
.org 0x2ed8e
	asrs r0, r0, #17	@ 0002ed8e 4014
.org 0x2ed90
	adds r5, r1, r0	@ 0002ed90 0d18
.org 0x2ed92
	adds r0, r6, #0	@ 0002ed92 301c
.org 0x2ed94
	adds r1, r5, #0	@ 0002ed94 291c
.org 0x2ed96
	bl 0x7d28	@ 0002ed96 d8f7c7ff
.org 0x2ed9a
	lsls r0, r0, #16	@ 0002ed9a 0004
.org 0x2ed9c
	lsrs r1, r0, #16	@ 0002ed9c 010c
.org 0x2ed9e
	movs r2, #15	@ 0002ed9e 0f22
.org 0x2eda0
	ands r2, r1	@ 0002eda0 0a40
.org 0x2eda2
	cmp r2, #1	@ 0002eda2 012a
.org 0x2eda4
	bne.n 0x2edc0	@ 0002eda4 0cd1
.org 0x2eda6
	movs r0, #128	@ 0002eda6 8020
.org 0x2eda8
	lsls r0, r0, #8	@ 0002eda8 0002
.org 0x2edaa
	ands r0, r1	@ 0002edaa 0840
.org 0x2edac
	cmp r0, #0	@ 0002edac 0028
.org 0x2edae
	bne.n 0x2edc0	@ 0002edae 07d1
.org 0x2edb0
	movs r0, #128	@ 0002edb0 8020
.org 0x2edb2
	lsls r0, r0, #3	@ 0002edb2 c000
.org 0x2edb4
	ands r1, r0	@ 0002edb4 0140
.org 0x2edb6
	cmp r1, #0	@ 0002edb6 0029
.org 0x2edb8
	bne.n 0x2edc0	@ 0002edb8 02d1
.org 0x2edba
	mov r0, sp	@ 0002edba 6846
.org 0x2edbc
	strb r2, [r0, #2]	@ 0002edbc 8270
.org 0x2edbe
	b.n 0x2edd6	@ 0002edbe 0ae0
.org 0x2edc0
	adds r0, r7, #0	@ 0002edc0 381c
.org 0x2edc2
	adds r1, r6, #0	@ 0002edc2 311c
.org 0x2edc4
	adds r2, r5, #0	@ 0002edc4 2a1c
.org 0x2edc6
	bl 0x2e2d0	@ 0002edc6 fff783fa
.org 0x2edca
	lsls r0, r0, #16	@ 0002edca 0004
.org 0x2edcc
	cmp r0, #0	@ 0002edcc 0028
.org 0x2edce
	beq.n 0x2edd6	@ 0002edce 02d0
.org 0x2edd0
	mov r1, sp	@ 0002edd0 6946
.org 0x2edd2
	movs r0, #1	@ 0002edd2 0120
.org 0x2edd4
	strb r0, [r1, #2]	@ 0002edd4 8870
.org 0x2edd6
	movs r1, #2	@ 0002edd6 0221
.org 0x2edd8
	ldrsh r0, [r4, r1]	@ 0002edd8 605e
.org 0x2edda
	ldr r1, [r7, #88]	@ 0002edda b96d
.org 0x2eddc
	adds r1, r1, r0	@ 0002eddc 0918
.org 0x2edde
	ldrh r0, [r4, #6]	@ 0002edde e088
.org 0x2ede0
	lsls r0, r0, #16	@ 0002ede0 0004
.org 0x2ede2
	asrs r0, r0, #17	@ 0002ede2 4014
.org 0x2ede4
	subs r5, r1, r0	@ 0002ede4 0d1a
.org 0x2ede6
	adds r0, r6, #0	@ 0002ede6 301c
.org 0x2ede8
	adds r1, r5, #0	@ 0002ede8 291c
.org 0x2edea
	bl 0x7d28	@ 0002edea d8f79dff
.org 0x2edee
	lsls r0, r0, #16	@ 0002edee 0004
.org 0x2edf0
	lsrs r1, r0, #16	@ 0002edf0 010c
.org 0x2edf2
	movs r2, #15	@ 0002edf2 0f22
.org 0x2edf4
	ands r2, r1	@ 0002edf4 0a40
.org 0x2edf6
	cmp r2, #1	@ 0002edf6 012a
.org 0x2edf8
	bne.n 0x2ee14	@ 0002edf8 0cd1
.org 0x2edfa
	movs r0, #128	@ 0002edfa 8020
.org 0x2edfc
	lsls r0, r0, #8	@ 0002edfc 0002
.org 0x2edfe
	ands r0, r1	@ 0002edfe 0840
.org 0x2ee00
	cmp r0, #0	@ 0002ee00 0028
.org 0x2ee02
	bne.n 0x2ee14	@ 0002ee02 07d1
.org 0x2ee04
	movs r0, #128	@ 0002ee04 8020
.org 0x2ee06
	lsls r0, r0, #3	@ 0002ee06 c000
.org 0x2ee08
	ands r1, r0	@ 0002ee08 0140
.org 0x2ee0a
	cmp r1, #0	@ 0002ee0a 0029
.org 0x2ee0c
	bne.n 0x2ee14	@ 0002ee0c 02d1
.org 0x2ee0e
	mov r0, sp	@ 0002ee0e 6846
.org 0x2ee10
	strb r2, [r0, #3]	@ 0002ee10 c270
.org 0x2ee12
	b.n 0x2ee2a	@ 0002ee12 0ae0
.org 0x2ee14
	adds r0, r7, #0	@ 0002ee14 381c
.org 0x2ee16
	adds r1, r6, #0	@ 0002ee16 311c
.org 0x2ee18
	adds r2, r5, #0	@ 0002ee18 2a1c
.org 0x2ee1a
	bl 0x2e2d0	@ 0002ee1a fff759fa
.org 0x2ee1e
	lsls r0, r0, #16	@ 0002ee1e 0004
.org 0x2ee20
	cmp r0, #0	@ 0002ee20 0028
.org 0x2ee22
	beq.n 0x2ee2a	@ 0002ee22 02d0
.org 0x2ee24
	mov r1, sp	@ 0002ee24 6946
.org 0x2ee26
	movs r0, #1	@ 0002ee26 0120
.org 0x2ee28
	strb r0, [r1, #3]	@ 0002ee28 c870
.org 0x2ee2a
	mov r0, sp	@ 0002ee2a 6846
.org 0x2ee2c
	ldrb r0, [r0, #0]	@ 0002ee2c 0078
.org 0x2ee2e
	cmp r0, #0	@ 0002ee2e 0028
.org 0x2ee30
	bne.n 0x2ee4a	@ 0002ee30 0bd1
.org 0x2ee32
	mov r0, sp	@ 0002ee32 6846
.org 0x2ee34
	ldrb r0, [r0, #1]	@ 0002ee34 4078
.org 0x2ee36
	cmp r0, #0	@ 0002ee36 0028
.org 0x2ee38
	bne.n 0x2ee4a	@ 0002ee38 07d1
.org 0x2ee3a
	mov r0, sp	@ 0002ee3a 6846
.org 0x2ee3c
	ldrb r0, [r0, #2]	@ 0002ee3c 8078
.org 0x2ee3e
	cmp r0, #0	@ 0002ee3e 0028
.org 0x2ee40
	bne.n 0x2ee4a	@ 0002ee40 03d1
.org 0x2ee42
	mov r0, sp	@ 0002ee42 6846
.org 0x2ee44
	ldrb r0, [r0, #3]	@ 0002ee44 c078
.org 0x2ee46
	cmp r0, #0	@ 0002ee46 0028
.org 0x2ee48
	beq.n 0x2ee4e	@ 0002ee48 01d0
.org 0x2ee4a
	movs r0, #1	@ 0002ee4a 0120
.org 0x2ee4c
	b.n 0x2ee50	@ 0002ee4c 00e0
.org 0x2ee4e
	movs r0, #0	@ 0002ee4e 0020
.org 0x2ee50
	add sp, #4	@ 0002ee50 01b0
.org 0x2ee52
	pop {r4, r5, r6, r7}	@ 0002ee52 f0bc
.org 0x2ee54
	pop {r1}	@ 0002ee54 02bc
.org 0x2ee56
	bx r1	@ 0002ee56 0847
