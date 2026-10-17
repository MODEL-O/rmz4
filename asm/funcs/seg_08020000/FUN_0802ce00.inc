@ FUN_0802ce00  entry 0x0802ce00  size 2454
.thumb
.org 0x2ce00
FUN_0802ce00:
	push {r4, r5, r6, r7, lr}	@ 0002ce00 f0b5
.org 0x2ce02
	mov r7, sl	@ 0002ce02 5746
.org 0x2ce04
	mov r6, r9	@ 0002ce04 4e46
.org 0x2ce06
	mov r5, r8	@ 0002ce06 4546
.org 0x2ce08
	push {r5, r6, r7}	@ 0002ce08 e0b4
.org 0x2ce0a
	sub sp, #40	@ 0002ce0a 8ab0
.org 0x2ce0c
	adds r7, r0, #0	@ 0002ce0c 071c
.org 0x2ce0e
	mov r8, r1	@ 0002ce0e 8846
.org 0x2ce10
	ldr r0, [r7, #84]	@ 0002ce10 786d
.org 0x2ce12
	ldr r1, [r7, #88]	@ 0002ce12 b96d
.org 0x2ce14
	str r0, [sp, #12]	@ 0002ce14 0390
.org 0x2ce16
	str r1, [sp, #16]	@ 0002ce16 0491
.org 0x2ce18
	ldr r2, [pc, #148]	@ 0002ce18 254a
.org 0x2ce1a
	adds r1, r7, r2	@ 0002ce1a b918
.org 0x2ce1c
	movs r0, #0	@ 0002ce1c 0020
.org 0x2ce1e
	strb r0, [r1, #0]	@ 0002ce1e 0870
.org 0x2ce20
	ldr r3, [pc, #144]	@ 0002ce20 244b
.org 0x2ce22
	adds r1, r7, r3	@ 0002ce22 f918
.org 0x2ce24
	strb r0, [r1, #0]	@ 0002ce24 0870
.org 0x2ce26
	movs r4, #0	@ 0002ce26 0024
.org 0x2ce28
	str r4, [sp, #0]	@ 0002ce28 0094
.org 0x2ce2a
	movs r5, #0	@ 0002ce2a 0025
.org 0x2ce2c
	str r5, [sp, #8]	@ 0002ce2c 0295
.org 0x2ce2e
	movs r6, #230	@ 0002ce2e e626
.org 0x2ce30
	lsls r6, r6, #1	@ 0002ce30 7600
.org 0x2ce32
	adds r2, r7, r6	@ 0002ce32 ba19
.org 0x2ce34
	ldrb r0, [r2, #0]	@ 0002ce34 1078
.org 0x2ce36
	subs r3, #1	@ 0002ce36 013b
.org 0x2ce38
	adds r1, r7, r3	@ 0002ce38 f918
.org 0x2ce3a
	strb r0, [r1, #0]	@ 0002ce3a 0870
.org 0x2ce3c
	ldrb r0, [r7, #13]	@ 0002ce3c 787b
.org 0x2ce3e
	cmp r0, #3	@ 0002ce3e 0328
.org 0x2ce40
	bne.n 0x2cf22	@ 0002ce40 6fd1
.org 0x2ce42
	ldrb r0, [r2, #0]	@ 0002ce42 1078
.org 0x2ce44
	movs r4, #204	@ 0002ce44 cc24
.org 0x2ce46
	lsls r4, r4, #1	@ 0002ce46 6400
.org 0x2ce48
	adds r4, r7, r4	@ 0002ce48 3c19
.org 0x2ce4a
	str r4, [sp, #36]	@ 0002ce4a 0994
.org 0x2ce4c
	cmp r0, #0	@ 0002ce4c 0028
.org 0x2ce4e
	beq.n 0x2cf30	@ 0002ce4e 6fd0
.org 0x2ce50
	mov sl, r5	@ 0002ce50 aa46
.org 0x2ce52
	movs r5, #1	@ 0002ce52 0125
.org 0x2ce54
	mov ip, r5	@ 0002ce54 ac46
.org 0x2ce56
	ldr r1, [pc, #96]	@ 0002ce56 1849
.org 0x2ce58
	adds r6, #6	@ 0002ce58 0636
.org 0x2ce5a
	adds r0, r1, r6	@ 0002ce5a 8819
.org 0x2ce5c
	str r1, [sp, #32]	@ 0002ce5c 0891
.org 0x2ce5e
	ldr r1, [sp, #8]	@ 0002ce5e 0299
.org 0x2ce60
	ldrb r0, [r0, #0]	@ 0002ce60 0078
.org 0x2ce62
	cmp r1, r0	@ 0002ce62 8142
.org 0x2ce64
	bcs.n 0x2cf10	@ 0002ce64 54d2
.org 0x2ce66
	ldr r2, [sp, #32]	@ 0002ce66 089a
.org 0x2ce68
	mov r9, r2	@ 0002ce68 9146
.org 0x2ce6a
	subs r3, #10	@ 0002ce6a 0a3b
.org 0x2ce6c
	adds r5, r7, r3	@ 0002ce6c fd18
.org 0x2ce6e
	movs r4, #228	@ 0002ce6e e424
.org 0x2ce70
	lsls r4, r4, #1	@ 0002ce70 6400
.org 0x2ce72
	adds r4, r7, r4	@ 0002ce72 3c19
.org 0x2ce74
	str r4, [sp, #20]	@ 0002ce74 0594
.org 0x2ce76
	mov r6, sl	@ 0002ce76 5646
.org 0x2ce78
	lsls r1, r6, #1	@ 0002ce78 7100
.org 0x2ce7a
	adds r0, r1, r6	@ 0002ce7a 8819
.org 0x2ce7c
	lsls r2, r0, #3	@ 0002ce7c c200
.org 0x2ce7e
	mov r0, r9	@ 0002ce7e 4846
.org 0x2ce80
	adds r4, r2, r0	@ 0002ce80 1418
.org 0x2ce82
	movs r3, #234	@ 0002ce82 ea23
.org 0x2ce84
	lsls r3, r3, #1	@ 0002ce84 5b00
.org 0x2ce86
	adds r0, r4, r3	@ 0002ce86 e018
.org 0x2ce88
	ldr r6, [pc, #48]	@ 0002ce88 0c4e
.org 0x2ce8a
	adds r3, r7, r6	@ 0002ce8a bb19
.org 0x2ce8c
	ldrh r0, [r0, #0]	@ 0002ce8c 0088
.org 0x2ce8e
	str r1, [sp, #28]	@ 0002ce8e 0791
.org 0x2ce90
	ldrb r3, [r3, #0]	@ 0002ce90 1b78
.org 0x2ce92
	cmp r0, r3	@ 0002ce92 9842
.org 0x2ce94
	bne.n 0x2cef8	@ 0002ce94 30d1
.org 0x2ce96
	movs r1, #235	@ 0002ce96 eb21
.org 0x2ce98
	lsls r1, r1, #1	@ 0002ce98 4900
.org 0x2ce9a
	adds r0, r4, r1	@ 0002ce9a 6018
.org 0x2ce9c
	ldrh r1, [r0, #0]	@ 0002ce9c 0188
.org 0x2ce9e
	movs r0, #32	@ 0002ce9e 2020
.org 0x2cea0
	ands r0, r1	@ 0002cea0 0840
.org 0x2cea2
	cmp r0, #0	@ 0002cea2 0028
.org 0x2cea4
	bne.n 0x2cec4	@ 0002cea4 0ed1
.org 0x2cea6
	ldr r3, [pc, #24]	@ 0002cea6 064b
.org 0x2cea8
	adds r0, r2, r3	@ 0002cea8 d018
.org 0x2ceaa
	ldr r0, [r0, #0]	@ 0002ceaa 0068
.org 0x2ceac
	b.n 0x2ced6	@ 0002ceac 13e0
.org 0x2ceae
	.byte 0x00	@ 0002ceae data
.org 0x2ceaf
	.byte 0x00	@ 0002ceaf data
.org 0x2ceb0
	.byte 0xbb,0x01,0x00,0x00	@ 0002ceb0 data
.org 0x2ceb4
	.byte 0xcf,0x01,0x00,0x00	@ 0002ceb4 data
.org 0x2ceb8
	.byte 0xb0,0x0a,0x00,0x02	@ 0002ceb8 data
.org 0x2cebc
	.byte 0xcd,0x01,0x00,0x00	@ 0002cebc data
.org 0x2cec0
	.byte 0x8c,0x0c,0x00,0x02	@ 0002cec0 data
.org 0x2cec4
	ldr r4, [pc, #36]	@ 0002cec4 094c
.org 0x2cec6
	adds r0, r2, r4	@ 0002cec6 1019
.org 0x2cec8
	ldr r6, [pc, #36]	@ 0002cec8 094e
.org 0x2ceca
	adds r2, r2, r6	@ 0002ceca 9219
.org 0x2cecc
	ldr r1, [r0, #0]	@ 0002cecc 0168
.org 0x2cece
	ldr r0, [r2, #0]	@ 0002cece 1068
.org 0x2ced0
	subs r1, r1, r0	@ 0002ced0 091a
.org 0x2ced2
	ldr r0, [r5, #0]	@ 0002ced2 2868
.org 0x2ced4
	adds r0, r0, r1	@ 0002ced4 4018
.org 0x2ced6
	str r0, [r5, #0]	@ 0002ced6 2860
.org 0x2ced8
	ldr r0, [sp, #28]	@ 0002ced8 0798
.org 0x2ceda
	add r0, sl	@ 0002ceda 5044
.org 0x2cedc
	lsls r0, r0, #3	@ 0002cedc c000
.org 0x2cede
	ldr r1, [pc, #20]	@ 0002cede 0549
.org 0x2cee0
	adds r0, r0, r1	@ 0002cee0 4018
.org 0x2cee2
	ldr r0, [r0, #0]	@ 0002cee2 0068
.org 0x2cee4
	ldr r2, [sp, #20]	@ 0002cee4 059a
.org 0x2cee6
	str r0, [r2, #0]	@ 0002cee6 1060
.org 0x2cee8
	b.n 0x2cf30	@ 0002cee8 22e0
.org 0x2ceea
	.byte 0x00	@ 0002ceea data
.org 0x2ceeb
	.byte 0x00	@ 0002ceeb data
.org 0x2ceec
	.byte 0x8c,0x0c,0x00,0x02	@ 0002ceec data
.org 0x2cef0
	.byte 0x94,0x0c,0x00,0x02	@ 0002cef0 data
.org 0x2cef4
	.byte 0x90,0x0c,0x00,0x02	@ 0002cef4 data
.org 0x2cef8
	mov r0, sl	@ 0002cef8 5046
.org 0x2cefa
	adds r0, #1	@ 0002cefa 0130
.org 0x2cefc
	lsls r0, r0, #24	@ 0002cefc 0006
.org 0x2cefe
	lsrs r0, r0, #24	@ 0002cefe 000e
.org 0x2cf00
	mov sl, r0	@ 0002cf00 8246
.org 0x2cf02
	ldr r3, [sp, #32]	@ 0002cf02 089b
.org 0x2cf04
	movs r4, #233	@ 0002cf04 e924
.org 0x2cf06
	lsls r4, r4, #1	@ 0002cf06 6400
.org 0x2cf08
	adds r0, r3, r4	@ 0002cf08 1819
.org 0x2cf0a
	ldrb r0, [r0, #0]	@ 0002cf0a 0078
.org 0x2cf0c
	cmp sl, r0	@ 0002cf0c 8245
.org 0x2cf0e
	bcc.n 0x2ce76	@ 0002cf0e b2d3
.org 0x2cf10
	mov r5, ip	@ 0002cf10 6546
.org 0x2cf12
	cmp r5, #0	@ 0002cf12 002d
.org 0x2cf14
	beq.n 0x2cf30	@ 0002cf14 0cd0
.org 0x2cf16
	movs r6, #230	@ 0002cf16 e626
.org 0x2cf18
	lsls r6, r6, #1	@ 0002cf18 7600
.org 0x2cf1a
	adds r1, r7, r6	@ 0002cf1a b919
.org 0x2cf1c
	movs r0, #0	@ 0002cf1c 0020
.org 0x2cf1e
	strb r0, [r1, #0]	@ 0002cf1e 0870
.org 0x2cf20
	b.n 0x2cf30	@ 0002cf20 06e0
.org 0x2cf22
	mov r0, sp	@ 0002cf22 6846
.org 0x2cf24
	ldrb r0, [r0, #8]	@ 0002cf24 007a
.org 0x2cf26
	strb r0, [r2, #0]	@ 0002cf26 1070
.org 0x2cf28
	movs r1, #204	@ 0002cf28 cc21
.org 0x2cf2a
	lsls r1, r1, #1	@ 0002cf2a 4900
.org 0x2cf2c
	adds r1, r7, r1	@ 0002cf2c 7918
.org 0x2cf2e
	str r1, [sp, #36]	@ 0002cf2e 0991
.org 0x2cf30
	movs r2, #0	@ 0002cf30 0022
.org 0x2cf32
	str r2, [sp, #4]	@ 0002cf32 0192
.org 0x2cf34
	ldr r3, [sp, #36]	@ 0002cf34 099b
.org 0x2cf36
	ldrh r0, [r3, #0]	@ 0002cf36 1888
.org 0x2cf38
	ldr r1, [pc, #284]	@ 0002cf38 4749
.org 0x2cf3a
	cmp r0, r1	@ 0002cf3a 8842
.org 0x2cf3c
	bne.n 0x2cf40	@ 0002cf3c 00d1
.org 0x2cf3e
	b.n 0x2d2c0	@ 0002cf3e bfe1
.org 0x2cf40
	ldr r4, [pc, #280]	@ 0002cf40 464c
.org 0x2cf42
	str r4, [sp, #24]	@ 0002cf42 0694
.org 0x2cf44
	str r4, [sp, #32]	@ 0002cf44 0894
.org 0x2cf46
	movs r5, #0	@ 0002cf46 0025
.org 0x2cf48
	mov sl, r5	@ 0002cf48 aa46
.org 0x2cf4a
	movs r6, #1	@ 0002cf4a 0126
.org 0x2cf4c
	mov ip, r6	@ 0002cf4c b446
.org 0x2cf4e
	ldr r0, [pc, #272]	@ 0002cf4e 4448
.org 0x2cf50
	ldrb r1, [r0, #0]	@ 0002cf50 0178
.org 0x2cf52
	ldr r2, [sp, #4]	@ 0002cf52 019a
.org 0x2cf54
	lsls r3, r2, #1	@ 0002cf54 5300
.org 0x2cf56
	cmp sl, r1	@ 0002cf56 8a45
.org 0x2cf58
	bcs.n 0x2cf86	@ 0002cf58 15d2
.org 0x2cf5a
	ldr r4, [pc, #256]	@ 0002cf5a 404c
.org 0x2cf5c
	ldr r5, [sp, #36]	@ 0002cf5c 099d
.org 0x2cf5e
	adds r0, r5, r3	@ 0002cf5e e818
.org 0x2cf60
	ldrh r2, [r0, #0]	@ 0002cf60 0288
.org 0x2cf62
	mov r6, sl	@ 0002cf62 5646
.org 0x2cf64
	lsls r0, r6, #1	@ 0002cf64 7000
.org 0x2cf66
	add r0, sl	@ 0002cf66 5044
.org 0x2cf68
	lsls r0, r0, #3	@ 0002cf68 c000
.org 0x2cf6a
	adds r0, r0, r4	@ 0002cf6a 0019
.org 0x2cf6c
	movs r5, #234	@ 0002cf6c ea25
.org 0x2cf6e
	lsls r5, r5, #1	@ 0002cf6e 6d00
.org 0x2cf70
	adds r0, r0, r5	@ 0002cf70 4019
.org 0x2cf72
	ldrh r0, [r0, #0]	@ 0002cf72 0088
.org 0x2cf74
	cmp r0, r2	@ 0002cf74 9042
.org 0x2cf76
	beq.n 0x2d074	@ 0002cf76 7dd0
.org 0x2cf78
	mov r0, sl	@ 0002cf78 5046
.org 0x2cf7a
	adds r0, #1	@ 0002cf7a 0130
.org 0x2cf7c
	lsls r0, r0, #24	@ 0002cf7c 0006
.org 0x2cf7e
	lsrs r0, r0, #24	@ 0002cf7e 000e
.org 0x2cf80
	mov sl, r0	@ 0002cf80 8246
.org 0x2cf82
	cmp sl, r1	@ 0002cf82 8a45
.org 0x2cf84
	bcc.n 0x2cf62	@ 0002cf84 edd3
.org 0x2cf86
	ldr r6, [sp, #36]	@ 0002cf86 099e
.org 0x2cf88
	adds r1, r6, r3	@ 0002cf88 f118
.org 0x2cf8a
	ldr r0, [pc, #204]	@ 0002cf8a 3348
.org 0x2cf8c
	strh r0, [r1, #0]	@ 0002cf8c 0880
.org 0x2cf8e
	mov r0, ip	@ 0002cf8e 6046
.org 0x2cf90
	cmp r0, #0	@ 0002cf90 0028
.org 0x2cf92
	beq.n 0x2cf96	@ 0002cf92 00d0
.org 0x2cf94
	b.n 0x2d2a2	@ 0002cf94 85e1
.org 0x2cf96
	mov r1, sl	@ 0002cf96 5146
.org 0x2cf98
	lsls r2, r1, #1	@ 0002cf98 4a00
.org 0x2cf9a
	adds r0, r2, r1	@ 0002cf9a 5018
.org 0x2cf9c
	lsls r3, r0, #3	@ 0002cf9c c300
.org 0x2cf9e
	ldr r4, [sp, #32]	@ 0002cf9e 089c
.org 0x2cfa0
	movs r5, #238	@ 0002cfa0 ee25
.org 0x2cfa2
	lsls r5, r5, #1	@ 0002cfa2 6d00
.org 0x2cfa4
	adds r1, r4, r5	@ 0002cfa4 6119
.org 0x2cfa6
	adds r1, r3, r1	@ 0002cfa6 5918
.org 0x2cfa8
	movs r6, #242	@ 0002cfa8 f226
.org 0x2cfaa
	lsls r6, r6, #1	@ 0002cfaa 7600
.org 0x2cfac
	adds r0, r4, r6	@ 0002cfac a019
.org 0x2cfae
	adds r0, r3, r0	@ 0002cfae 1818
.org 0x2cfb0
	ldr r1, [r1, #0]	@ 0002cfb0 0968
.org 0x2cfb2
	ldr r0, [r0, #0]	@ 0002cfb2 0068
.org 0x2cfb4
	subs r4, r1, r0	@ 0002cfb4 0c1a
.org 0x2cfb6
	ldr r0, [sp, #32]	@ 0002cfb6 0898
.org 0x2cfb8
	adds r0, r0, r3	@ 0002cfb8 c018
.org 0x2cfba
	mov r9, r0	@ 0002cfba 8146
.org 0x2cfbc
	subs r5, #6	@ 0002cfbc 063d
.org 0x2cfbe
	add r5, r9	@ 0002cfbe 4d44
.org 0x2cfc0
	ldrh r1, [r5, #0]	@ 0002cfc0 2988
.org 0x2cfc2
	adds r6, #28	@ 0002cfc2 1c36
.org 0x2cfc4
	adds r0, r6, #0	@ 0002cfc4 301c
.org 0x2cfc6
	ands r1, r0	@ 0002cfc6 0140
.org 0x2cfc8
	str r2, [sp, #28]	@ 0002cfc8 0792
.org 0x2cfca
	cmp r1, #0	@ 0002cfca 0029
.org 0x2cfcc
	beq.n 0x2cfd6	@ 0002cfcc 03d0
.org 0x2cfce
	ldr r0, [pc, #148]	@ 0002cfce 2548
.org 0x2cfd0
	adds r1, r7, r0	@ 0002cfd0 3918
.org 0x2cfd2
	movs r0, #1	@ 0002cfd2 0120
.org 0x2cfd4
	strb r0, [r1, #0]	@ 0002cfd4 0870
.org 0x2cfd6
	ldrh r0, [r5, #0]	@ 0002cfd6 2888
.org 0x2cfd8
	ldr r1, [pc, #140]	@ 0002cfd8 2349
.org 0x2cfda
	adds r2, r1, #0	@ 0002cfda 0a1c
.org 0x2cfdc
	ands r2, r0	@ 0002cfdc 0240
.org 0x2cfde
	cmp r2, #15	@ 0002cfde 0f2a
.org 0x2cfe0
	bne.n 0x2cfe4	@ 0002cfe0 00d1
.org 0x2cfe2
	b.n 0x2d2a2	@ 0002cfe2 5ee1
.org 0x2cfe4
	cmp r2, r1	@ 0002cfe4 8a42
.org 0x2cfe6
	bne.n 0x2d020	@ 0002cfe6 1bd1
.org 0x2cfe8
	ldr r1, [sp, #32]	@ 0002cfe8 0899
.org 0x2cfea
	movs r2, #240	@ 0002cfea f022
.org 0x2cfec
	lsls r2, r2, #1	@ 0002cfec 5200
.org 0x2cfee
	adds r0, r1, r2	@ 0002cfee 8818
.org 0x2cff0
	adds r0, r3, r0	@ 0002cff0 1818
.org 0x2cff2
	movs r5, #244	@ 0002cff2 f425
.org 0x2cff4
	lsls r5, r5, #1	@ 0002cff4 6d00
.org 0x2cff6
	adds r1, r1, r5	@ 0002cff6 4919
.org 0x2cff8
	adds r1, r3, r1	@ 0002cff8 5918
.org 0x2cffa
	ldr r2, [r0, #0]	@ 0002cffa 0268
.org 0x2cffc
	ldr r0, [r1, #0]	@ 0002cffc 0868
.org 0x2cffe
	cmp r2, r0	@ 0002cffe 8242
.org 0x2d000
	bne.n 0x2d020	@ 0002d000 0ed1
.org 0x2d002
	ldr r6, [pc, #104]	@ 0002d002 1a4e
.org 0x2d004
	adds r0, r7, r6	@ 0002d004 b819
.org 0x2d006
	ldrb r0, [r0, #0]	@ 0002d006 0078
.org 0x2d008
	cmp r0, #0	@ 0002d008 0028
.org 0x2d00a
	bne.n 0x2d00e	@ 0002d00a 00d1
.org 0x2d00c
	b.n 0x2d2a2	@ 0002d00c 49e1
.org 0x2d00e
	movs r0, #237	@ 0002d00e ed20
.org 0x2d010
	lsls r0, r0, #1	@ 0002d010 4000
.org 0x2d012
	add r0, r9	@ 0002d012 4844
.org 0x2d014
	ldrh r0, [r0, #0]	@ 0002d014 0088
.org 0x2d016
	subs r0, r2, r0	@ 0002d016 101a
.org 0x2d018
	ldr r1, [r7, #88]	@ 0002d018 b96d
.org 0x2d01a
	cmp r1, r0	@ 0002d01a 8142
.org 0x2d01c
	ble.n 0x2d020	@ 0002d01c 00dd
.org 0x2d01e
	b.n 0x2d2a2	@ 0002d01e 40e1
.org 0x2d020
	cmp r4, #0	@ 0002d020 002c
.org 0x2d022
	bne.n 0x2d026	@ 0002d022 00d1
.org 0x2d024
	b.n 0x2d268	@ 0002d024 20e1
.org 0x2d026
	adds r1, r4, #0	@ 0002d026 211c
.org 0x2d028
	cmp r4, #0	@ 0002d028 002c
.org 0x2d02a
	bge.n 0x2d02e	@ 0002d02a 00da
.org 0x2d02c
	negs r1, r4	@ 0002d02c 6142
.org 0x2d02e
	ldr r0, [pc, #64]	@ 0002d02e 1048
.org 0x2d030
	cmp r1, r0	@ 0002d030 8142
.org 0x2d032
	ble.n 0x2d036	@ 0002d032 00dd
.org 0x2d034
	b.n 0x2d268	@ 0002d034 18e1
.org 0x2d036
	ldr r0, [r7, #84]	@ 0002d036 786d
.org 0x2d038
	adds r2, r0, r4	@ 0002d038 0219
.org 0x2d03a
	str r2, [r7, #84]	@ 0002d03a 7a65
.org 0x2d03c
	cmp r4, #0	@ 0002d03c 002c
.org 0x2d03e
	ble.n 0x2d08c	@ 0002d03e 25dd
.org 0x2d040
	ldrb r1, [r7, #10]	@ 0002d040 b97a
.org 0x2d042
	movs r0, #16	@ 0002d042 1020
.org 0x2d044
	ands r0, r1	@ 0002d044 0840
.org 0x2d046
	cmp r0, #0	@ 0002d046 0028
.org 0x2d048
	beq.n 0x2d07a	@ 0002d048 17d0
.org 0x2d04a
	mov r0, r8	@ 0002d04a 4046
.org 0x2d04c
	movs r3, #0	@ 0002d04c 0023
.org 0x2d04e
	ldrsh r1, [r0, r3]	@ 0002d04e c15e
.org 0x2d050
	subs r1, r2, r1	@ 0002d050 511a
.org 0x2d052
	ldrh r0, [r0, #4]	@ 0002d052 8088
.org 0x2d054
	b.n 0x2d084	@ 0002d054 16e0
.org 0x2d056
	.byte 0x00	@ 0002d056 data
.org 0x2d057
	.byte 0x00	@ 0002d057 data
.org 0x2d058
	.byte 0xff,0xff,0x00,0x00	@ 0002d058 data
.org 0x2d05c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002d05c data
.org 0x2d060
	.byte 0x82,0x0c,0x00,0x02	@ 0002d060 data
.org 0x2d064
	.byte 0xcf,0x01,0x00,0x00	@ 0002d064 data
.org 0x2d068
	.byte 0x0f,0x80,0x00,0x00	@ 0002d068 data
.org 0x2d06c
	.byte 0xb9,0x01,0x00,0x00	@ 0002d06c data
.org 0x2d070
	.byte 0xff,0x0f,0x00,0x00	@ 0002d070 data
.org 0x2d074
	movs r4, #0	@ 0002d074 0024
.org 0x2d076
	mov ip, r4	@ 0002d076 a446
.org 0x2d078
	b.n 0x2cf86	@ 0002d078 85e7
.org 0x2d07a
	mov r5, r8	@ 0002d07a 4546
.org 0x2d07c
	movs r6, #0	@ 0002d07c 0026
.org 0x2d07e
	ldrsh r1, [r5, r6]	@ 0002d07e a95f
.org 0x2d080
	adds r1, r2, r1	@ 0002d080 5118
.org 0x2d082
	ldrh r0, [r5, #4]	@ 0002d082 a888
.org 0x2d084
	lsls r0, r0, #16	@ 0002d084 0004
.org 0x2d086
	asrs r0, r0, #17	@ 0002d086 4014
.org 0x2d088
	adds r5, r1, r0	@ 0002d088 0d18
.org 0x2d08a
	b.n 0x2d0b2	@ 0002d08a 12e0
.org 0x2d08c
	ldrb r1, [r7, #10]	@ 0002d08c b97a
.org 0x2d08e
	movs r0, #16	@ 0002d08e 1020
.org 0x2d090
	ands r0, r1	@ 0002d090 0840
.org 0x2d092
	cmp r0, #0	@ 0002d092 0028
.org 0x2d094
	beq.n 0x2d0a2	@ 0002d094 05d0
.org 0x2d096
	mov r0, r8	@ 0002d096 4046
.org 0x2d098
	movs r3, #0	@ 0002d098 0023
.org 0x2d09a
	ldrsh r1, [r0, r3]	@ 0002d09a c15e
.org 0x2d09c
	subs r1, r2, r1	@ 0002d09c 511a
.org 0x2d09e
	ldrh r0, [r0, #4]	@ 0002d09e 8088
.org 0x2d0a0
	b.n 0x2d0ac	@ 0002d0a0 04e0
.org 0x2d0a2
	mov r5, r8	@ 0002d0a2 4546
.org 0x2d0a4
	movs r6, #0	@ 0002d0a4 0026
.org 0x2d0a6
	ldrsh r1, [r5, r6]	@ 0002d0a6 a95f
.org 0x2d0a8
	adds r1, r2, r1	@ 0002d0a8 5118
.org 0x2d0aa
	ldrh r0, [r5, #4]	@ 0002d0aa a888
.org 0x2d0ac
	lsls r0, r0, #16	@ 0002d0ac 0004
.org 0x2d0ae
	asrs r0, r0, #17	@ 0002d0ae 4014
.org 0x2d0b0
	subs r5, r1, r0	@ 0002d0b0 0d1a
.org 0x2d0b2
	ldrb r0, [r7, #13]	@ 0002d0b2 787b
.org 0x2d0b4
	cmp r0, #2	@ 0002d0b4 0228
.org 0x2d0b6
	bne.n 0x2d194	@ 0002d0b6 6dd1
.org 0x2d0b8
	ldr r0, [sp, #28]	@ 0002d0b8 0798
.org 0x2d0ba
	add r0, sl	@ 0002d0ba 5044
.org 0x2d0bc
	lsls r0, r0, #3	@ 0002d0bc c000
.org 0x2d0be
	ldr r1, [sp, #32]	@ 0002d0be 0899
.org 0x2d0c0
	adds r0, r0, r1	@ 0002d0c0 4018
.org 0x2d0c2
	movs r2, #235	@ 0002d0c2 eb22
.org 0x2d0c4
	lsls r2, r2, #1	@ 0002d0c4 5200
.org 0x2d0c6
	adds r0, r0, r2	@ 0002d0c6 8018
.org 0x2d0c8
	ldrh r0, [r0, #0]	@ 0002d0c8 0088
.org 0x2d0ca
	movs r3, #128	@ 0002d0ca 8023
.org 0x2d0cc
	lsls r3, r3, #2	@ 0002d0cc 9b00
.org 0x2d0ce
	adds r1, r3, #0	@ 0002d0ce 191c
.org 0x2d0d0
	ands r0, r1	@ 0002d0d0 0840
.org 0x2d0d2
	cmp r0, #0	@ 0002d0d2 0028
.org 0x2d0d4
	bne.n 0x2d194	@ 0002d0d4 5ed1
.org 0x2d0d6
	ldr r0, [r7, #84]	@ 0002d0d6 786d
.org 0x2d0d8
	cmp r0, r5	@ 0002d0d8 a842
.org 0x2d0da
	ble.n 0x2d0e6	@ 0002d0da 04dd
.org 0x2d0dc
	mov r6, r8	@ 0002d0dc 4646
.org 0x2d0de
	movs r1, #4	@ 0002d0de 0421
.org 0x2d0e0
	ldrsh r0, [r6, r1]	@ 0002d0e0 705e
.org 0x2d0e2
	adds r0, r0, r5	@ 0002d0e2 4019
.org 0x2d0e4
	b.n 0x2d0ee	@ 0002d0e4 03e0
.org 0x2d0e6
	mov r2, r8	@ 0002d0e6 4246
.org 0x2d0e8
	movs r3, #4	@ 0002d0e8 0423
.org 0x2d0ea
	ldrsh r0, [r2, r3]	@ 0002d0ea d05e
.org 0x2d0ec
	subs r0, r5, r0	@ 0002d0ec 281a
.org 0x2d0ee
	mov r9, r0	@ 0002d0ee 8146
.org 0x2d0f0
	mov r6, r8	@ 0002d0f0 4646
.org 0x2d0f2
	movs r1, #2	@ 0002d0f2 0221
.org 0x2d0f4
	ldrsh r0, [r6, r1]	@ 0002d0f4 705e
.org 0x2d0f6
	ldr r1, [r7, #88]	@ 0002d0f6 b96d
.org 0x2d0f8
	adds r1, r1, r0	@ 0002d0f8 0918
.org 0x2d0fa
	ldrh r0, [r6, #6]	@ 0002d0fa f088
.org 0x2d0fc
	lsls r0, r0, #16	@ 0002d0fc 0004
.org 0x2d0fe
	asrs r0, r0, #17	@ 0002d0fe 4014
.org 0x2d100
	adds r6, r1, r0	@ 0002d100 0e18
.org 0x2d102
	adds r0, r5, #0	@ 0002d102 281c
.org 0x2d104
	adds r1, r6, #0	@ 0002d104 311c
.org 0x2d106
	bl 0x7d28	@ 0002d106 daf70ffe
.org 0x2d10a
	lsls r0, r0, #16	@ 0002d10a 0004
.org 0x2d10c
	cmp r0, #0	@ 0002d10c 0028
.org 0x2d10e
	bne.n 0x2d120	@ 0002d10e 07d1
.org 0x2d110
	adds r0, r7, #0	@ 0002d110 381c
.org 0x2d112
	adds r1, r5, #0	@ 0002d112 291c
.org 0x2d114
	adds r2, r6, #0	@ 0002d114 321c
.org 0x2d116
	bl 0x2e2d0	@ 0002d116 01f0dbf8
.org 0x2d11a
	lsls r0, r0, #16	@ 0002d11a 0004
.org 0x2d11c
	cmp r0, #0	@ 0002d11c 0028
.org 0x2d11e
	beq.n 0x2d142	@ 0002d11e 10d0
.org 0x2d120
	mov r0, r9	@ 0002d120 4846
.org 0x2d122
	adds r1, r6, #0	@ 0002d122 311c
.org 0x2d124
	bl 0x7d28	@ 0002d124 daf700fe
.org 0x2d128
	lsls r0, r0, #16	@ 0002d128 0004
.org 0x2d12a
	cmp r0, #0	@ 0002d12a 0028
.org 0x2d12c
	beq.n 0x2d130	@ 0002d12c 00d0
.org 0x2d12e
	b.n 0x2d600	@ 0002d12e 67e2
.org 0x2d130
	adds r0, r7, #0	@ 0002d130 381c
.org 0x2d132
	mov r1, r9	@ 0002d132 4946
.org 0x2d134
	adds r2, r6, #0	@ 0002d134 321c
.org 0x2d136
	bl 0x2e2d0	@ 0002d136 01f0cbf8
.org 0x2d13a
	lsls r0, r0, #16	@ 0002d13a 0004
.org 0x2d13c
	cmp r0, #0	@ 0002d13c 0028
.org 0x2d13e
	beq.n 0x2d142	@ 0002d13e 00d0
.org 0x2d140
	b.n 0x2d600	@ 0002d140 5ee2
.org 0x2d142
	mov r2, r8	@ 0002d142 4246
.org 0x2d144
	movs r3, #2	@ 0002d144 0223
.org 0x2d146
	ldrsh r0, [r2, r3]	@ 0002d146 d05e
.org 0x2d148
	ldr r1, [r7, #88]	@ 0002d148 b96d
.org 0x2d14a
	adds r1, r1, r0	@ 0002d14a 0918
.org 0x2d14c
	ldrh r0, [r2, #6]	@ 0002d14c d088
.org 0x2d14e
	lsls r0, r0, #16	@ 0002d14e 0004
.org 0x2d150
	asrs r0, r0, #17	@ 0002d150 4014
.org 0x2d152
	subs r6, r1, r0	@ 0002d152 0e1a
.org 0x2d154
	adds r0, r5, #0	@ 0002d154 281c
.org 0x2d156
	adds r1, r6, #0	@ 0002d156 311c
.org 0x2d158
	bl 0x7d28	@ 0002d158 daf7e6fd
.org 0x2d15c
	lsls r0, r0, #16	@ 0002d15c 0004
.org 0x2d15e
	cmp r0, #0	@ 0002d15e 0028
.org 0x2d160
	bne.n 0x2d172	@ 0002d160 07d1
.org 0x2d162
	adds r0, r7, #0	@ 0002d162 381c
.org 0x2d164
	adds r1, r5, #0	@ 0002d164 291c
.org 0x2d166
	adds r2, r6, #0	@ 0002d166 321c
.org 0x2d168
	bl 0x2e2d0	@ 0002d168 01f0b2f8
.org 0x2d16c
	lsls r0, r0, #16	@ 0002d16c 0004
.org 0x2d16e
	cmp r0, #0	@ 0002d16e 0028
.org 0x2d170
	beq.n 0x2d194	@ 0002d170 10d0
.org 0x2d172
	mov r0, r9	@ 0002d172 4846
.org 0x2d174
	adds r1, r6, #0	@ 0002d174 311c
.org 0x2d176
	bl 0x7d28	@ 0002d176 daf7d7fd
.org 0x2d17a
	lsls r0, r0, #16	@ 0002d17a 0004
.org 0x2d17c
	cmp r0, #0	@ 0002d17c 0028
.org 0x2d17e
	beq.n 0x2d182	@ 0002d17e 00d0
.org 0x2d180
	b.n 0x2d600	@ 0002d180 3ee2
.org 0x2d182
	adds r0, r7, #0	@ 0002d182 381c
.org 0x2d184
	mov r1, r9	@ 0002d184 4946
.org 0x2d186
	adds r2, r6, #0	@ 0002d186 321c
.org 0x2d188
	bl 0x2e2d0	@ 0002d188 01f0a2f8
.org 0x2d18c
	lsls r0, r0, #16	@ 0002d18c 0004
.org 0x2d18e
	cmp r0, #0	@ 0002d18e 0028
.org 0x2d190
	beq.n 0x2d194	@ 0002d190 00d0
.org 0x2d192
	b.n 0x2d600	@ 0002d192 35e2
.org 0x2d194
	cmp r4, #0	@ 0002d194 002c
.org 0x2d196
	ble.n 0x2d1fe	@ 0002d196 32dd
.org 0x2d198
	mov r4, r8	@ 0002d198 4446
.org 0x2d19a
	movs r6, #2	@ 0002d19a 0226
.org 0x2d19c
	ldrsh r0, [r4, r6]	@ 0002d19c a05f
.org 0x2d19e
	ldr r1, [r7, #88]	@ 0002d19e b96d
.org 0x2d1a0
	adds r1, r1, r0	@ 0002d1a0 0918
.org 0x2d1a2
	ldrh r0, [r4, #6]	@ 0002d1a2 e088
.org 0x2d1a4
	lsls r0, r0, #16	@ 0002d1a4 0004
.org 0x2d1a6
	asrs r0, r0, #17	@ 0002d1a6 4014
.org 0x2d1a8
	adds r6, r1, r0	@ 0002d1a8 0e18
.org 0x2d1aa
	adds r0, r5, #0	@ 0002d1aa 281c
.org 0x2d1ac
	adds r1, r6, #0	@ 0002d1ac 311c
.org 0x2d1ae
	bl 0x8264	@ 0002d1ae dbf759f8
.org 0x2d1b2
	adds r4, r0, #0	@ 0002d1b2 041c
.org 0x2d1b4
	cmp r4, #0	@ 0002d1b4 002c
.org 0x2d1b6
	bge.n 0x2d1be	@ 0002d1b6 02da
.org 0x2d1b8
	ldr r0, [r7, #84]	@ 0002d1b8 786d
.org 0x2d1ba
	adds r0, r0, r4	@ 0002d1ba 0019
.org 0x2d1bc
	str r0, [r7, #84]	@ 0002d1bc 7865
.org 0x2d1be
	mov r0, r8	@ 0002d1be 4046
.org 0x2d1c0
	movs r2, #2	@ 0002d1c0 0222
.org 0x2d1c2
	ldrsh r1, [r0, r2]	@ 0002d1c2 815e
.org 0x2d1c4
	ldr r0, [r7, #88]	@ 0002d1c4 b86d
.org 0x2d1c6
	adds r6, r0, r1	@ 0002d1c6 4618
.org 0x2d1c8
	adds r0, r5, #0	@ 0002d1c8 281c
.org 0x2d1ca
	adds r1, r6, #0	@ 0002d1ca 311c
.org 0x2d1cc
	bl 0x8264	@ 0002d1cc dbf74af8
.org 0x2d1d0
	adds r4, r0, #0	@ 0002d1d0 041c
.org 0x2d1d2
	cmp r4, #0	@ 0002d1d2 002c
.org 0x2d1d4
	bge.n 0x2d1dc	@ 0002d1d4 02da
.org 0x2d1d6
	ldr r0, [r7, #84]	@ 0002d1d6 786d
.org 0x2d1d8
	adds r0, r0, r4	@ 0002d1d8 0019
.org 0x2d1da
	str r0, [r7, #84]	@ 0002d1da 7865
.org 0x2d1dc
	mov r3, r8	@ 0002d1dc 4346
.org 0x2d1de
	movs r4, #2	@ 0002d1de 0224
.org 0x2d1e0
	ldrsh r0, [r3, r4]	@ 0002d1e0 185f
.org 0x2d1e2
	ldr r1, [r7, #88]	@ 0002d1e2 b96d
.org 0x2d1e4
	adds r1, r1, r0	@ 0002d1e4 0918
.org 0x2d1e6
	ldrh r0, [r3, #6]	@ 0002d1e6 d888
.org 0x2d1e8
	lsls r0, r0, #16	@ 0002d1e8 0004
.org 0x2d1ea
	asrs r0, r0, #17	@ 0002d1ea 4014
.org 0x2d1ec
	subs r6, r1, r0	@ 0002d1ec 0e1a
.org 0x2d1ee
	adds r0, r5, #0	@ 0002d1ee 281c
.org 0x2d1f0
	adds r1, r6, #0	@ 0002d1f0 311c
.org 0x2d1f2
	bl 0x8264	@ 0002d1f2 dbf737f8
.org 0x2d1f6
	adds r4, r0, #0	@ 0002d1f6 041c
.org 0x2d1f8
	cmp r4, #0	@ 0002d1f8 002c
.org 0x2d1fa
	bge.n 0x2d268	@ 0002d1fa 35da
.org 0x2d1fc
	b.n 0x2d262	@ 0002d1fc 31e0
.org 0x2d1fe
	mov r6, r8	@ 0002d1fe 4646
.org 0x2d200
	movs r1, #2	@ 0002d200 0221
.org 0x2d202
	ldrsh r0, [r6, r1]	@ 0002d202 705e
.org 0x2d204
	ldr r1, [r7, #88]	@ 0002d204 b96d
.org 0x2d206
	adds r1, r1, r0	@ 0002d206 0918
.org 0x2d208
	ldrh r0, [r6, #6]	@ 0002d208 f088
.org 0x2d20a
	lsls r0, r0, #16	@ 0002d20a 0004
.org 0x2d20c
	asrs r0, r0, #17	@ 0002d20c 4014
.org 0x2d20e
	adds r6, r1, r0	@ 0002d20e 0e18
.org 0x2d210
	adds r0, r5, #0	@ 0002d210 281c
.org 0x2d212
	adds r1, r6, #0	@ 0002d212 311c
.org 0x2d214
	bl 0x8448	@ 0002d214 dbf718f9
.org 0x2d218
	adds r4, r0, #0	@ 0002d218 041c
.org 0x2d21a
	cmp r4, #0	@ 0002d21a 002c
.org 0x2d21c
	ble.n 0x2d224	@ 0002d21c 02dd
.org 0x2d21e
	ldr r0, [r7, #84]	@ 0002d21e 786d
.org 0x2d220
	adds r0, r0, r4	@ 0002d220 0019
.org 0x2d222
	str r0, [r7, #84]	@ 0002d222 7865
.org 0x2d224
	mov r2, r8	@ 0002d224 4246
.org 0x2d226
	movs r3, #2	@ 0002d226 0223
.org 0x2d228
	ldrsh r1, [r2, r3]	@ 0002d228 d15e
.org 0x2d22a
	ldr r0, [r7, #88]	@ 0002d22a b86d
.org 0x2d22c
	adds r6, r0, r1	@ 0002d22c 4618
.org 0x2d22e
	adds r0, r5, #0	@ 0002d22e 281c
.org 0x2d230
	adds r1, r6, #0	@ 0002d230 311c
.org 0x2d232
	bl 0x8448	@ 0002d232 dbf709f9
.org 0x2d236
	adds r4, r0, #0	@ 0002d236 041c
.org 0x2d238
	cmp r4, #0	@ 0002d238 002c
.org 0x2d23a
	ble.n 0x2d242	@ 0002d23a 02dd
.org 0x2d23c
	ldr r0, [r7, #84]	@ 0002d23c 786d
.org 0x2d23e
	adds r0, r0, r4	@ 0002d23e 0019
.org 0x2d240
	str r0, [r7, #84]	@ 0002d240 7865
.org 0x2d242
	mov r4, r8	@ 0002d242 4446
.org 0x2d244
	movs r6, #2	@ 0002d244 0226
.org 0x2d246
	ldrsh r0, [r4, r6]	@ 0002d246 a05f
.org 0x2d248
	ldr r1, [r7, #88]	@ 0002d248 b96d
.org 0x2d24a
	adds r1, r1, r0	@ 0002d24a 0918
.org 0x2d24c
	ldrh r0, [r4, #6]	@ 0002d24c e088
.org 0x2d24e
	lsls r0, r0, #16	@ 0002d24e 0004
.org 0x2d250
	asrs r0, r0, #17	@ 0002d250 4014
.org 0x2d252
	subs r6, r1, r0	@ 0002d252 0e1a
.org 0x2d254
	adds r0, r5, #0	@ 0002d254 281c
.org 0x2d256
	adds r1, r6, #0	@ 0002d256 311c
.org 0x2d258
	bl 0x8448	@ 0002d258 dbf7f6f8
.org 0x2d25c
	adds r4, r0, #0	@ 0002d25c 041c
.org 0x2d25e
	cmp r4, #0	@ 0002d25e 002c
.org 0x2d260
	ble.n 0x2d268	@ 0002d260 02dd
.org 0x2d262
	ldr r0, [r7, #84]	@ 0002d262 786d
.org 0x2d264
	adds r0, r0, r4	@ 0002d264 0019
.org 0x2d266
	str r0, [r7, #84]	@ 0002d266 7865
.org 0x2d268
	ldr r1, [sp, #28]	@ 0002d268 0799
.org 0x2d26a
	add r1, sl	@ 0002d26a 5144
.org 0x2d26c
	lsls r1, r1, #3	@ 0002d26c c900
.org 0x2d26e
	ldr r0, [sp, #24]	@ 0002d26e 0698
.org 0x2d270
	movs r3, #240	@ 0002d270 f023
.org 0x2d272
	lsls r3, r3, #1	@ 0002d272 5b00
.org 0x2d274
	adds r2, r0, r3	@ 0002d274 c218
.org 0x2d276
	adds r2, r1, r2	@ 0002d276 8a18
.org 0x2d278
	movs r4, #244	@ 0002d278 f424
.org 0x2d27a
	lsls r4, r4, #1	@ 0002d27a 6400
.org 0x2d27c
	adds r0, r0, r4	@ 0002d27c 0019
.org 0x2d27e
	adds r1, r1, r0	@ 0002d27e 0918
.org 0x2d280
	ldr r2, [r2, #0]	@ 0002d280 1268
.org 0x2d282
	ldr r0, [r1, #0]	@ 0002d282 0868
.org 0x2d284
	subs r4, r2, r0	@ 0002d284 141a
.org 0x2d286
	cmp r4, #0	@ 0002d286 002c
.org 0x2d288
	beq.n 0x2d2a2	@ 0002d288 0bd0
.org 0x2d28a
	ldrb r0, [r7, #13]	@ 0002d28a 787b
.org 0x2d28c
	cmp r0, #2	@ 0002d28c 0228
.org 0x2d28e
	beq.n 0x2d296	@ 0002d28e 02d0
.org 0x2d290
	ldr r0, [r7, #88]	@ 0002d290 b86d
.org 0x2d292
	cmp r0, r2	@ 0002d292 9042
.org 0x2d294
	bgt.n 0x2d2a2	@ 0002d294 05dc
.org 0x2d296
	ldr r5, [sp, #0]	@ 0002d296 009d
.org 0x2d298
	cmp r5, #0	@ 0002d298 002d
.org 0x2d29a
	beq.n 0x2d2a0	@ 0002d29a 01d0
.org 0x2d29c
	cmp r5, r4	@ 0002d29c a542
.org 0x2d29e
	ble.n 0x2d2a2	@ 0002d29e 00dd
.org 0x2d2a0
	str r4, [sp, #0]	@ 0002d2a0 0094
.org 0x2d2a2
	ldr r0, [sp, #4]	@ 0002d2a2 0198
.org 0x2d2a4
	adds r0, #1	@ 0002d2a4 0130
.org 0x2d2a6
	lsls r0, r0, #24	@ 0002d2a6 0006
.org 0x2d2a8
	lsrs r0, r0, #24	@ 0002d2a8 000e
.org 0x2d2aa
	str r0, [sp, #4]	@ 0002d2aa 0190
.org 0x2d2ac
	cmp r0, #15	@ 0002d2ac 0f28
.org 0x2d2ae
	bhi.n 0x2d2c0	@ 0002d2ae 07d8
.org 0x2d2b0
	lsls r0, r0, #1	@ 0002d2b0 4000
.org 0x2d2b2
	ldr r6, [sp, #36]	@ 0002d2b2 099e
.org 0x2d2b4
	adds r0, r6, r0	@ 0002d2b4 3018
.org 0x2d2b6
	ldrh r0, [r0, #0]	@ 0002d2b6 0088
.org 0x2d2b8
	ldr r1, [pc, #148]	@ 0002d2b8 2549
.org 0x2d2ba
	cmp r0, r1	@ 0002d2ba 8842
.org 0x2d2bc
	beq.n 0x2d2c0	@ 0002d2bc 00d0
.org 0x2d2be
	b.n 0x2cf46	@ 0002d2be 42e6
.org 0x2d2c0
	ldr r2, [sp, #0]	@ 0002d2c0 009a
.org 0x2d2c2
	cmp r2, #0	@ 0002d2c2 002a
.org 0x2d2c4
	bne.n 0x2d2c8	@ 0002d2c4 00d1
.org 0x2d2c6
	b.n 0x2d7c6	@ 0002d2c6 7ee2
.org 0x2d2c8
	adds r1, r2, #0	@ 0002d2c8 111c
.org 0x2d2ca
	cmp r2, #0	@ 0002d2ca 002a
.org 0x2d2cc
	bge.n 0x2d2d0	@ 0002d2cc 00da
.org 0x2d2ce
	negs r1, r2	@ 0002d2ce 5142
.org 0x2d2d0
	ldr r0, [pc, #128]	@ 0002d2d0 2048
.org 0x2d2d2
	cmp r1, r0	@ 0002d2d2 8142
.org 0x2d2d4
	ble.n 0x2d2d8	@ 0002d2d4 00dd
.org 0x2d2d6
	b.n 0x2d7c6	@ 0002d2d6 76e2
.org 0x2d2d8
	ldr r0, [r7, #88]	@ 0002d2d8 b86d
.org 0x2d2da
	ldr r3, [sp, #0]	@ 0002d2da 009b
.org 0x2d2dc
	adds r2, r0, r3	@ 0002d2dc c218
.org 0x2d2de
	str r2, [r7, #88]	@ 0002d2de ba65
.org 0x2d2e0
	ldr r4, [pc, #116]	@ 0002d2e0 1d4c
.org 0x2d2e2
	adds r0, r7, r4	@ 0002d2e2 3819
.org 0x2d2e4
	ldrb r0, [r0, #0]	@ 0002d2e4 0078
.org 0x2d2e6
	cmp r0, #0	@ 0002d2e6 0028
.org 0x2d2e8
	bne.n 0x2d2ec	@ 0002d2e8 00d1
.org 0x2d2ea
	b.n 0x2d604	@ 0002d2ea 8be1
.org 0x2d2ec
	cmp r3, #0	@ 0002d2ec 002b
.org 0x2d2ee
	bgt.n 0x2d2f2	@ 0002d2ee 00dc
.org 0x2d2f0
	b.n 0x2d4f4	@ 0002d2f0 00e1
.org 0x2d2f2
	ldr r0, [r7, #84]	@ 0002d2f2 786d
.org 0x2d2f4
	adds r1, r2, #0	@ 0002d2f4 111c
.org 0x2d2f6
	bl 0x7d28	@ 0002d2f6 daf717fd
.org 0x2d2fa
	movs r1, #128	@ 0002d2fa 8021
.org 0x2d2fc
	lsls r1, r1, #8	@ 0002d2fc 0902
.org 0x2d2fe
	ands r1, r0	@ 0002d2fe 0140
.org 0x2d300
	cmp r1, #0	@ 0002d300 0029
.org 0x2d302
	beq.n 0x2d326	@ 0002d302 10d0
.org 0x2d304
	ldr r0, [r7, #84]	@ 0002d304 786d
.org 0x2d306
	ldr r1, [r7, #88]	@ 0002d306 b96d
.org 0x2d308
	bl 0x7d28	@ 0002d308 daf70efd
.org 0x2d30c
	movs r4, #15	@ 0002d30c 0f24
.org 0x2d30e
	adds r1, r4, #0	@ 0002d30e 211c
.org 0x2d310
	ands r1, r0	@ 0002d310 0140
.org 0x2d312
	cmp r1, #0	@ 0002d312 0029
.org 0x2d314
	beq.n 0x2d326	@ 0002d314 07d0
.org 0x2d316
	ldr r0, [r7, #84]	@ 0002d316 786d
.org 0x2d318
	ldr r1, [r7, #88]	@ 0002d318 b96d
.org 0x2d31a
	bl 0x7d28	@ 0002d31a daf705fd
.org 0x2d31e
	adds r1, r4, #0	@ 0002d31e 211c
.org 0x2d320
	ands r1, r0	@ 0002d320 0140
.org 0x2d322
	cmp r1, #14	@ 0002d322 0e29
.org 0x2d324
	bls.n 0x2d330	@ 0002d324 04d9
.org 0x2d326
	ldr r0, [r7, #84]	@ 0002d326 786d
.org 0x2d328
	ldr r1, [r7, #88]	@ 0002d328 b96d
.org 0x2d32a
	bl 0x7e98	@ 0002d32a daf7b5fd
.org 0x2d32e
	str r0, [sp, #0]	@ 0002d32e 0090
.org 0x2d330
	ldrb r1, [r7, #10]	@ 0002d330 b97a
.org 0x2d332
	movs r0, #16	@ 0002d332 1020
.org 0x2d334
	ands r0, r1	@ 0002d334 0840
.org 0x2d336
	cmp r0, #0	@ 0002d336 0028
.org 0x2d338
	beq.n 0x2d35c	@ 0002d338 10d0
.org 0x2d33a
	mov r5, r8	@ 0002d33a 4546
.org 0x2d33c
	movs r6, #0	@ 0002d33c 0026
.org 0x2d33e
	ldrsh r0, [r5, r6]	@ 0002d33e a85f
.org 0x2d340
	ldr r1, [r7, #84]	@ 0002d340 796d
.org 0x2d342
	subs r1, r1, r0	@ 0002d342 091a
.org 0x2d344
	ldrh r0, [r5, #4]	@ 0002d344 a888
.org 0x2d346
	lsls r0, r0, #16	@ 0002d346 0004
.org 0x2d348
	asrs r0, r0, #17	@ 0002d348 4014
.org 0x2d34a
	adds r5, r1, r0	@ 0002d34a 0d18
.org 0x2d34c
	b.n 0x2d370	@ 0002d34c 10e0
.org 0x2d34e
	.byte 0x00	@ 0002d34e data
.org 0x2d34f
	.byte 0x00	@ 0002d34f data
.org 0x2d350
	.byte 0xff,0xff,0x00,0x00	@ 0002d350 data
.org 0x2d354
	.byte 0xff,0x0f,0x00,0x00	@ 0002d354 data
.org 0x2d358
	.byte 0xb9,0x01,0x00,0x00	@ 0002d358 data
.org 0x2d35c
	mov r1, r8	@ 0002d35c 4146
.org 0x2d35e
	movs r2, #0	@ 0002d35e 0022
.org 0x2d360
	ldrsh r0, [r1, r2]	@ 0002d360 885e
.org 0x2d362
	ldr r1, [r7, #84]	@ 0002d362 796d
.org 0x2d364
	adds r1, r1, r0	@ 0002d364 0918
.org 0x2d366
	mov r3, r8	@ 0002d366 4346
.org 0x2d368
	ldrh r0, [r3, #4]	@ 0002d368 9888
.org 0x2d36a
	lsls r0, r0, #16	@ 0002d36a 0004
.org 0x2d36c
	asrs r0, r0, #17	@ 0002d36c 4014
.org 0x2d36e
	subs r5, r1, r0	@ 0002d36e 0d1a
.org 0x2d370
	ldr r1, [r7, #88]	@ 0002d370 b96d
.org 0x2d372
	adds r0, r5, #0	@ 0002d372 281c
.org 0x2d374
	bl 0x7d28	@ 0002d374 daf7d8fc
.org 0x2d378
	movs r1, #128	@ 0002d378 8021
.org 0x2d37a
	lsls r1, r1, #8	@ 0002d37a 0902
.org 0x2d37c
	ands r1, r0	@ 0002d37c 0140
.org 0x2d37e
	cmp r1, #0	@ 0002d37e 0029
.org 0x2d380
	beq.n 0x2d3a4	@ 0002d380 10d0
.org 0x2d382
	ldr r1, [r7, #88]	@ 0002d382 b96d
.org 0x2d384
	adds r0, r5, #0	@ 0002d384 281c
.org 0x2d386
	bl 0x7d28	@ 0002d386 daf7cffc
.org 0x2d38a
	movs r4, #15	@ 0002d38a 0f24
.org 0x2d38c
	adds r1, r4, #0	@ 0002d38c 211c
.org 0x2d38e
	ands r1, r0	@ 0002d38e 0140
.org 0x2d390
	cmp r1, #0	@ 0002d390 0029
.org 0x2d392
	beq.n 0x2d3a4	@ 0002d392 07d0
.org 0x2d394
	ldr r1, [r7, #88]	@ 0002d394 b96d
.org 0x2d396
	adds r0, r5, #0	@ 0002d396 281c
.org 0x2d398
	bl 0x7d28	@ 0002d398 daf7c6fc
.org 0x2d39c
	adds r1, r4, #0	@ 0002d39c 211c
.org 0x2d39e
	ands r1, r0	@ 0002d39e 0140
.org 0x2d3a0
	cmp r1, #14	@ 0002d3a0 0e29
.org 0x2d3a2
	bls.n 0x2d3b6	@ 0002d3a2 08d9
.org 0x2d3a4
	ldr r1, [r7, #88]	@ 0002d3a4 b96d
.org 0x2d3a6
	adds r0, r5, #0	@ 0002d3a6 281c
.org 0x2d3a8
	bl 0x7e98	@ 0002d3a8 daf776fd
.org 0x2d3ac
	adds r4, r0, #0	@ 0002d3ac 041c
.org 0x2d3ae
	ldr r5, [sp, #0]	@ 0002d3ae 009d
.org 0x2d3b0
	cmp r5, r4	@ 0002d3b0 a542
.org 0x2d3b2
	ble.n 0x2d3b6	@ 0002d3b2 00dd
.org 0x2d3b4
	str r4, [sp, #0]	@ 0002d3b4 0094
.org 0x2d3b6
	ldrb r1, [r7, #10]	@ 0002d3b6 b97a
.org 0x2d3b8
	movs r0, #16	@ 0002d3b8 1020
.org 0x2d3ba
	ands r0, r1	@ 0002d3ba 0840
.org 0x2d3bc
	cmp r0, #0	@ 0002d3bc 0028
.org 0x2d3be
	beq.n 0x2d3d4	@ 0002d3be 09d0
.org 0x2d3c0
	mov r6, r8	@ 0002d3c0 4646
.org 0x2d3c2
	movs r1, #0	@ 0002d3c2 0021
.org 0x2d3c4
	ldrsh r0, [r6, r1]	@ 0002d3c4 705e
.org 0x2d3c6
	ldr r1, [r7, #84]	@ 0002d3c6 796d
.org 0x2d3c8
	subs r1, r1, r0	@ 0002d3c8 091a
.org 0x2d3ca
	ldrh r0, [r6, #4]	@ 0002d3ca b088
.org 0x2d3cc
	lsls r0, r0, #16	@ 0002d3cc 0004
.org 0x2d3ce
	asrs r0, r0, #17	@ 0002d3ce 4014
.org 0x2d3d0
	subs r5, r1, r0	@ 0002d3d0 0d1a
.org 0x2d3d2
	b.n 0x2d3e6	@ 0002d3d2 08e0
.org 0x2d3d4
	mov r2, r8	@ 0002d3d4 4246
.org 0x2d3d6
	movs r3, #0	@ 0002d3d6 0023
.org 0x2d3d8
	ldrsh r0, [r2, r3]	@ 0002d3d8 d05e
.org 0x2d3da
	ldr r1, [r7, #84]	@ 0002d3da 796d
.org 0x2d3dc
	adds r1, r1, r0	@ 0002d3dc 0918
.org 0x2d3de
	ldrh r0, [r2, #4]	@ 0002d3de 9088
.org 0x2d3e0
	lsls r0, r0, #16	@ 0002d3e0 0004
.org 0x2d3e2
	asrs r0, r0, #17	@ 0002d3e2 4014
.org 0x2d3e4
	adds r5, r1, r0	@ 0002d3e4 0d18
.org 0x2d3e6
	ldr r1, [r7, #88]	@ 0002d3e6 b96d
.org 0x2d3e8
	adds r0, r5, #0	@ 0002d3e8 281c
.org 0x2d3ea
	bl 0x7d28	@ 0002d3ea daf79dfc
.org 0x2d3ee
	movs r1, #128	@ 0002d3ee 8021
.org 0x2d3f0
	lsls r1, r1, #8	@ 0002d3f0 0902
.org 0x2d3f2
	ands r1, r0	@ 0002d3f2 0140
.org 0x2d3f4
	cmp r1, #0	@ 0002d3f4 0029
.org 0x2d3f6
	beq.n 0x2d41a	@ 0002d3f6 10d0
.org 0x2d3f8
	ldr r1, [r7, #88]	@ 0002d3f8 b96d
.org 0x2d3fa
	adds r0, r5, #0	@ 0002d3fa 281c
.org 0x2d3fc
	bl 0x7d28	@ 0002d3fc daf794fc
.org 0x2d400
	movs r4, #15	@ 0002d400 0f24
.org 0x2d402
	adds r1, r4, #0	@ 0002d402 211c
.org 0x2d404
	ands r1, r0	@ 0002d404 0140
.org 0x2d406
	cmp r1, #0	@ 0002d406 0029
.org 0x2d408
	beq.n 0x2d41a	@ 0002d408 07d0
.org 0x2d40a
	ldr r1, [r7, #88]	@ 0002d40a b96d
.org 0x2d40c
	adds r0, r5, #0	@ 0002d40c 281c
.org 0x2d40e
	bl 0x7d28	@ 0002d40e daf78bfc
.org 0x2d412
	adds r1, r4, #0	@ 0002d412 211c
.org 0x2d414
	ands r1, r0	@ 0002d414 0140
.org 0x2d416
	cmp r1, #14	@ 0002d416 0e29
.org 0x2d418
	bls.n 0x2d42c	@ 0002d418 08d9
.org 0x2d41a
	ldr r1, [r7, #88]	@ 0002d41a b96d
.org 0x2d41c
	adds r0, r5, #0	@ 0002d41c 281c
.org 0x2d41e
	bl 0x7e98	@ 0002d41e daf73bfd
.org 0x2d422
	adds r4, r0, #0	@ 0002d422 041c
.org 0x2d424
	ldr r5, [sp, #0]	@ 0002d424 009d
.org 0x2d426
	cmp r5, r4	@ 0002d426 a542
.org 0x2d428
	ble.n 0x2d42c	@ 0002d428 00dd
.org 0x2d42a
	str r4, [sp, #0]	@ 0002d42a 0094
.org 0x2d42c
	ldr r6, [sp, #0]	@ 0002d42c 009e
.org 0x2d42e
	cmp r6, #0	@ 0002d42e 002e
.org 0x2d430
	blt.n 0x2d434	@ 0002d430 00db
.org 0x2d432
	b.n 0x2d7c6	@ 0002d432 c8e1
.org 0x2d434
	ldr r1, [sp, #16]	@ 0002d434 0499
.org 0x2d436
	adds r1, #1	@ 0002d436 0131
.org 0x2d438
	ldr r0, [sp, #12]	@ 0002d438 0398
.org 0x2d43a
	bl 0x7e98	@ 0002d43a daf72dfd
.org 0x2d43e
	movs r1, #1	@ 0002d43e 0121
.org 0x2d440
	negs r1, r1	@ 0002d440 4942
.org 0x2d442
	cmp r0, r1	@ 0002d442 8842
.org 0x2d444
	bne.n 0x2d4ec	@ 0002d444 52d1
.org 0x2d446
	mov r1, r8	@ 0002d446 4146
.org 0x2d448
	movs r2, #2	@ 0002d448 0222
.org 0x2d44a
	ldrsh r0, [r1, r2]	@ 0002d44a 885e
.org 0x2d44c
	ldr r1, [r7, #88]	@ 0002d44c b96d
.org 0x2d44e
	adds r1, r1, r0	@ 0002d44e 0918
.org 0x2d450
	mov r3, r8	@ 0002d450 4346
.org 0x2d452
	ldrh r0, [r3, #6]	@ 0002d452 d888
.org 0x2d454
	lsls r0, r0, #16	@ 0002d454 0004
.org 0x2d456
	asrs r0, r0, #17	@ 0002d456 4014
.org 0x2d458
	subs r6, r1, r0	@ 0002d458 0e1a
.org 0x2d45a
	ldrb r1, [r7, #10]	@ 0002d45a b97a
.org 0x2d45c
	movs r0, #16	@ 0002d45c 1020
.org 0x2d45e
	ands r0, r1	@ 0002d45e 0840
.org 0x2d460
	cmp r0, #0	@ 0002d460 0028
.org 0x2d462
	beq.n 0x2d476	@ 0002d462 08d0
.org 0x2d464
	movs r4, #0	@ 0002d464 0024
.org 0x2d466
	ldrsh r0, [r3, r4]	@ 0002d466 185f
.org 0x2d468
	ldr r1, [r7, #84]	@ 0002d468 796d
.org 0x2d46a
	subs r1, r1, r0	@ 0002d46a 091a
.org 0x2d46c
	ldrh r0, [r3, #4]	@ 0002d46c 9888
.org 0x2d46e
	lsls r0, r0, #16	@ 0002d46e 0004
.org 0x2d470
	asrs r0, r0, #17	@ 0002d470 4014
.org 0x2d472
	adds r5, r1, r0	@ 0002d472 0d18
.org 0x2d474
	b.n 0x2d488	@ 0002d474 08e0
.org 0x2d476
	mov r5, r8	@ 0002d476 4546
.org 0x2d478
	movs r1, #0	@ 0002d478 0021
.org 0x2d47a
	ldrsh r0, [r5, r1]	@ 0002d47a 685e
.org 0x2d47c
	ldr r1, [r7, #84]	@ 0002d47c 796d
.org 0x2d47e
	adds r1, r1, r0	@ 0002d47e 0918
.org 0x2d480
	ldrh r0, [r5, #4]	@ 0002d480 a888
.org 0x2d482
	lsls r0, r0, #16	@ 0002d482 0004
.org 0x2d484
	asrs r0, r0, #17	@ 0002d484 4014
.org 0x2d486
	subs r5, r1, r0	@ 0002d486 0d1a
.org 0x2d488
	adds r0, r7, #0	@ 0002d488 381c
.org 0x2d48a
	adds r1, r5, #0	@ 0002d48a 291c
.org 0x2d48c
	adds r2, r6, #0	@ 0002d48c 321c
.org 0x2d48e
	bl 0x2e1f0	@ 0002d48e 00f0affe
.org 0x2d492
	lsls r0, r0, #16	@ 0002d492 0004
.org 0x2d494
	cmp r0, #0	@ 0002d494 0028
.org 0x2d496
	beq.n 0x2d49a	@ 0002d496 00d0
.org 0x2d498
	b.n 0x2d600	@ 0002d498 b2e0
.org 0x2d49a
	mov r2, r8	@ 0002d49a 4246
.org 0x2d49c
	movs r3, #2	@ 0002d49c 0223
.org 0x2d49e
	ldrsh r0, [r2, r3]	@ 0002d49e d05e
.org 0x2d4a0
	ldr r1, [r7, #88]	@ 0002d4a0 b96d
.org 0x2d4a2
	adds r1, r1, r0	@ 0002d4a2 0918
.org 0x2d4a4
	ldrh r0, [r2, #6]	@ 0002d4a4 d088
.org 0x2d4a6
	lsls r0, r0, #16	@ 0002d4a6 0004
.org 0x2d4a8
	asrs r0, r0, #17	@ 0002d4a8 4014
.org 0x2d4aa
	subs r6, r1, r0	@ 0002d4aa 0e1a
.org 0x2d4ac
	ldrb r1, [r7, #10]	@ 0002d4ac b97a
.org 0x2d4ae
	movs r0, #16	@ 0002d4ae 1020
.org 0x2d4b0
	ands r0, r1	@ 0002d4b0 0840
.org 0x2d4b2
	cmp r0, #0	@ 0002d4b2 0028
.org 0x2d4b4
	beq.n 0x2d4c8	@ 0002d4b4 08d0
.org 0x2d4b6
	movs r4, #0	@ 0002d4b6 0024
.org 0x2d4b8
	ldrsh r0, [r2, r4]	@ 0002d4b8 105f
.org 0x2d4ba
	ldr r1, [r7, #84]	@ 0002d4ba 796d
.org 0x2d4bc
	subs r1, r1, r0	@ 0002d4bc 091a
.org 0x2d4be
	ldrh r0, [r2, #4]	@ 0002d4be 9088
.org 0x2d4c0
	lsls r0, r0, #16	@ 0002d4c0 0004
.org 0x2d4c2
	asrs r0, r0, #17	@ 0002d4c2 4014
.org 0x2d4c4
	subs r5, r1, r0	@ 0002d4c4 0d1a
.org 0x2d4c6
	b.n 0x2d4da	@ 0002d4c6 08e0
.org 0x2d4c8
	mov r5, r8	@ 0002d4c8 4546
.org 0x2d4ca
	movs r1, #0	@ 0002d4ca 0021
.org 0x2d4cc
	ldrsh r0, [r5, r1]	@ 0002d4cc 685e
.org 0x2d4ce
	ldr r1, [r7, #84]	@ 0002d4ce 796d
.org 0x2d4d0
	adds r1, r1, r0	@ 0002d4d0 0918
.org 0x2d4d2
	ldrh r0, [r5, #4]	@ 0002d4d2 a888
.org 0x2d4d4
	lsls r0, r0, #16	@ 0002d4d4 0004
.org 0x2d4d6
	asrs r0, r0, #17	@ 0002d4d6 4014
.org 0x2d4d8
	adds r5, r1, r0	@ 0002d4d8 0d18
.org 0x2d4da
	adds r0, r7, #0	@ 0002d4da 381c
.org 0x2d4dc
	adds r1, r5, #0	@ 0002d4dc 291c
.org 0x2d4de
	adds r2, r6, #0	@ 0002d4de 321c
.org 0x2d4e0
	bl 0x2e1f0	@ 0002d4e0 00f086fe
.org 0x2d4e4
	lsls r0, r0, #16	@ 0002d4e4 0004
.org 0x2d4e6
	cmp r0, #0	@ 0002d4e6 0028
.org 0x2d4e8
	beq.n 0x2d4ec	@ 0002d4e8 00d0
.org 0x2d4ea
	b.n 0x2d600	@ 0002d4ea 89e0
.org 0x2d4ec
	ldr r0, [r7, #88]	@ 0002d4ec b86d
.org 0x2d4ee
	ldr r2, [sp, #0]	@ 0002d4ee 009a
.org 0x2d4f0
	adds r0, r0, r2	@ 0002d4f0 8018
.org 0x2d4f2
	b.n 0x2d7c4	@ 0002d4f2 67e1
.org 0x2d4f4
	ldr r3, [sp, #0]	@ 0002d4f4 009b
.org 0x2d4f6
	cmp r3, #0	@ 0002d4f6 002b
.org 0x2d4f8
	blt.n 0x2d4fc	@ 0002d4f8 00db
.org 0x2d4fa
	b.n 0x2d7c6	@ 0002d4fa 64e1
.org 0x2d4fc
	ldr r4, [pc, #52]	@ 0002d4fc 0d4c
.org 0x2d4fe
	adds r0, r7, r4	@ 0002d4fe 3819
.org 0x2d500
	ldrb r0, [r0, #0]	@ 0002d500 0078
.org 0x2d502
	cmp r0, #0	@ 0002d502 0028
.org 0x2d504
	beq.n 0x2d508	@ 0002d504 00d0
.org 0x2d506
	b.n 0x2d7c6	@ 0002d506 5ee1
.org 0x2d508
	mov r5, r8	@ 0002d508 4546
.org 0x2d50a
	movs r6, #2	@ 0002d50a 0226
.org 0x2d50c
	ldrsh r1, [r5, r6]	@ 0002d50c a95f
.org 0x2d50e
	adds r1, r2, r1	@ 0002d50e 5118
.org 0x2d510
	ldrh r0, [r5, #6]	@ 0002d510 e888
.org 0x2d512
	lsls r0, r0, #16	@ 0002d512 0004
.org 0x2d514
	asrs r0, r0, #17	@ 0002d514 4014
.org 0x2d516
	subs r6, r1, r0	@ 0002d516 0e1a
.org 0x2d518
	ldrb r1, [r7, #10]	@ 0002d518 b97a
.org 0x2d51a
	movs r0, #16	@ 0002d51a 1020
.org 0x2d51c
	ands r0, r1	@ 0002d51c 0840
.org 0x2d51e
	cmp r0, #0	@ 0002d51e 0028
.org 0x2d520
	beq.n 0x2d538	@ 0002d520 0ad0
.org 0x2d522
	movs r1, #0	@ 0002d522 0021
.org 0x2d524
	ldrsh r0, [r5, r1]	@ 0002d524 685e
.org 0x2d526
	ldr r1, [r7, #84]	@ 0002d526 796d
.org 0x2d528
	subs r1, r1, r0	@ 0002d528 091a
.org 0x2d52a
	ldrh r0, [r5, #4]	@ 0002d52a a888
.org 0x2d52c
	lsls r0, r0, #16	@ 0002d52c 0004
.org 0x2d52e
	asrs r0, r0, #17	@ 0002d52e 4014
.org 0x2d530
	adds r5, r1, r0	@ 0002d530 0d18
.org 0x2d532
	b.n 0x2d54a	@ 0002d532 0ae0
.org 0x2d534
	.byte 0xcf,0x01,0x00,0x00	@ 0002d534 data
.org 0x2d538
	mov r2, r8	@ 0002d538 4246
.org 0x2d53a
	movs r3, #0	@ 0002d53a 0023
.org 0x2d53c
	ldrsh r0, [r2, r3]	@ 0002d53c d05e
.org 0x2d53e
	ldr r1, [r7, #84]	@ 0002d53e 796d
.org 0x2d540
	adds r1, r1, r0	@ 0002d540 0918
.org 0x2d542
	ldrh r0, [r2, #4]	@ 0002d542 9088
.org 0x2d544
	lsls r0, r0, #16	@ 0002d544 0004
.org 0x2d546
	asrs r0, r0, #17	@ 0002d546 4014
.org 0x2d548
	subs r5, r1, r0	@ 0002d548 0d1a
.org 0x2d54a
	adds r0, r5, #0	@ 0002d54a 281c
.org 0x2d54c
	adds r1, r6, #0	@ 0002d54c 311c
.org 0x2d54e
	bl 0x7d28	@ 0002d54e daf7ebfb
.org 0x2d552
	movs r1, #128	@ 0002d552 8021
.org 0x2d554
	lsls r1, r1, #8	@ 0002d554 0902
.org 0x2d556
	ands r1, r0	@ 0002d556 0140
.org 0x2d558
	cmp r1, #0	@ 0002d558 0029
.org 0x2d55a
	beq.n 0x2d57e	@ 0002d55a 10d0
.org 0x2d55c
	adds r0, r5, #0	@ 0002d55c 281c
.org 0x2d55e
	adds r1, r6, #0	@ 0002d55e 311c
.org 0x2d560
	bl 0x7d28	@ 0002d560 daf7e2fb
.org 0x2d564
	movs r4, #15	@ 0002d564 0f24
.org 0x2d566
	adds r1, r4, #0	@ 0002d566 211c
.org 0x2d568
	ands r1, r0	@ 0002d568 0140
.org 0x2d56a
	cmp r1, #0	@ 0002d56a 0029
.org 0x2d56c
	beq.n 0x2d57e	@ 0002d56c 07d0
.org 0x2d56e
	adds r0, r5, #0	@ 0002d56e 281c
.org 0x2d570
	adds r1, r6, #0	@ 0002d570 311c
.org 0x2d572
	bl 0x7d28	@ 0002d572 daf7d9fb
.org 0x2d576
	adds r1, r4, #0	@ 0002d576 211c
.org 0x2d578
	ands r1, r0	@ 0002d578 0140
.org 0x2d57a
	cmp r1, #14	@ 0002d57a 0e29
.org 0x2d57c
	bls.n 0x2d58a	@ 0002d57c 05d9
.org 0x2d57e
	adds r0, r5, #0	@ 0002d57e 281c
.org 0x2d580
	adds r1, r6, #0	@ 0002d580 311c
.org 0x2d582
	bl 0x8080	@ 0002d582 daf77dfd
.org 0x2d586
	cmp r0, #0	@ 0002d586 0028
.org 0x2d588
	bgt.n 0x2d600	@ 0002d588 3adc
.org 0x2d58a
	ldrb r1, [r7, #10]	@ 0002d58a b97a
.org 0x2d58c
	movs r0, #16	@ 0002d58c 1020
.org 0x2d58e
	ands r0, r1	@ 0002d58e 0840
.org 0x2d590
	cmp r0, #0	@ 0002d590 0028
.org 0x2d592
	beq.n 0x2d5a8	@ 0002d592 09d0
.org 0x2d594
	mov r4, r8	@ 0002d594 4446
.org 0x2d596
	movs r5, #0	@ 0002d596 0025
.org 0x2d598
	ldrsh r0, [r4, r5]	@ 0002d598 605f
.org 0x2d59a
	ldr r1, [r7, #84]	@ 0002d59a 796d
.org 0x2d59c
	subs r1, r1, r0	@ 0002d59c 091a
.org 0x2d59e
	ldrh r0, [r4, #4]	@ 0002d59e a088
.org 0x2d5a0
	lsls r0, r0, #16	@ 0002d5a0 0004
.org 0x2d5a2
	asrs r0, r0, #17	@ 0002d5a2 4014
.org 0x2d5a4
	subs r5, r1, r0	@ 0002d5a4 0d1a
.org 0x2d5a6
	b.n 0x2d5bc	@ 0002d5a6 09e0
.org 0x2d5a8
	mov r1, r8	@ 0002d5a8 4146
.org 0x2d5aa
	movs r2, #0	@ 0002d5aa 0022
.org 0x2d5ac
	ldrsh r0, [r1, r2]	@ 0002d5ac 885e
.org 0x2d5ae
	ldr r1, [r7, #84]	@ 0002d5ae 796d
.org 0x2d5b0
	adds r1, r1, r0	@ 0002d5b0 0918
.org 0x2d5b2
	mov r3, r8	@ 0002d5b2 4346
.org 0x2d5b4
	ldrh r0, [r3, #4]	@ 0002d5b4 9888
.org 0x2d5b6
	lsls r0, r0, #16	@ 0002d5b6 0004
.org 0x2d5b8
	asrs r0, r0, #17	@ 0002d5b8 4014
.org 0x2d5ba
	adds r5, r1, r0	@ 0002d5ba 0d18
.org 0x2d5bc
	adds r0, r5, #0	@ 0002d5bc 281c
.org 0x2d5be
	adds r1, r6, #0	@ 0002d5be 311c
.org 0x2d5c0
	bl 0x7d28	@ 0002d5c0 daf7b2fb
.org 0x2d5c4
	movs r1, #128	@ 0002d5c4 8021
.org 0x2d5c6
	lsls r1, r1, #8	@ 0002d5c6 0902
.org 0x2d5c8
	ands r1, r0	@ 0002d5c8 0140
.org 0x2d5ca
	cmp r1, #0	@ 0002d5ca 0029
.org 0x2d5cc
	beq.n 0x2d5f2	@ 0002d5cc 11d0
.org 0x2d5ce
	adds r0, r5, #0	@ 0002d5ce 281c
.org 0x2d5d0
	adds r1, r6, #0	@ 0002d5d0 311c
.org 0x2d5d2
	bl 0x7d28	@ 0002d5d2 daf7a9fb
.org 0x2d5d6
	movs r4, #15	@ 0002d5d6 0f24
.org 0x2d5d8
	adds r1, r4, #0	@ 0002d5d8 211c
.org 0x2d5da
	ands r1, r0	@ 0002d5da 0140
.org 0x2d5dc
	cmp r1, #0	@ 0002d5dc 0029
.org 0x2d5de
	beq.n 0x2d5f2	@ 0002d5de 08d0
.org 0x2d5e0
	adds r0, r5, #0	@ 0002d5e0 281c
.org 0x2d5e2
	adds r1, r6, #0	@ 0002d5e2 311c
.org 0x2d5e4
	bl 0x7d28	@ 0002d5e4 daf7a0fb
.org 0x2d5e8
	adds r1, r4, #0	@ 0002d5e8 211c
.org 0x2d5ea
	ands r1, r0	@ 0002d5ea 0140
.org 0x2d5ec
	cmp r1, #14	@ 0002d5ec 0e29
.org 0x2d5ee
	bhi.n 0x2d5f2	@ 0002d5ee 00d8
.org 0x2d5f0
	b.n 0x2d7c6	@ 0002d5f0 e9e0
.org 0x2d5f2
	adds r0, r5, #0	@ 0002d5f2 281c
.org 0x2d5f4
	adds r1, r6, #0	@ 0002d5f4 311c
.org 0x2d5f6
	bl 0x8080	@ 0002d5f6 daf743fd
.org 0x2d5fa
	cmp r0, #0	@ 0002d5fa 0028
.org 0x2d5fc
	bgt.n 0x2d600	@ 0002d5fc 00dc
.org 0x2d5fe
	b.n 0x2d7c6	@ 0002d5fe e2e0
.org 0x2d600
	movs r0, #1	@ 0002d600 0120
.org 0x2d602
	b.n 0x2d7e0	@ 0002d602 ede0
.org 0x2d604
	ldrb r0, [r7, #13]	@ 0002d604 787b
.org 0x2d606
	cmp r0, #2	@ 0002d606 0228
.org 0x2d608
	beq.n 0x2d60c	@ 0002d608 00d0
.org 0x2d60a
	b.n 0x2d71c	@ 0002d60a 87e0
.org 0x2d60c
	ldr r4, [sp, #0]	@ 0002d60c 009c
.org 0x2d60e
	cmp r4, #0	@ 0002d60e 002c
.org 0x2d610
	ble.n 0x2d6d8	@ 0002d610 62dd
.org 0x2d612
	ldr r0, [r7, #84]	@ 0002d612 786d
.org 0x2d614
	adds r1, r2, #0	@ 0002d614 111c
.org 0x2d616
	bl 0x7e98	@ 0002d616 daf73ffc
.org 0x2d61a
	str r0, [sp, #0]	@ 0002d61a 0090
.org 0x2d61c
	ldrb r1, [r7, #10]	@ 0002d61c b97a
.org 0x2d61e
	movs r0, #16	@ 0002d61e 1020
.org 0x2d620
	ands r0, r1	@ 0002d620 0840
.org 0x2d622
	cmp r0, #0	@ 0002d622 0028
.org 0x2d624
	beq.n 0x2d63a	@ 0002d624 09d0
.org 0x2d626
	mov r5, r8	@ 0002d626 4546
.org 0x2d628
	movs r6, #0	@ 0002d628 0026
.org 0x2d62a
	ldrsh r0, [r5, r6]	@ 0002d62a a85f
.org 0x2d62c
	ldr r1, [r7, #84]	@ 0002d62c 796d
.org 0x2d62e
	subs r1, r1, r0	@ 0002d62e 091a
.org 0x2d630
	ldrh r0, [r5, #4]	@ 0002d630 a888
.org 0x2d632
	lsls r0, r0, #16	@ 0002d632 0004
.org 0x2d634
	asrs r0, r0, #17	@ 0002d634 4014
.org 0x2d636
	adds r5, r1, r0	@ 0002d636 0d18
.org 0x2d638
	b.n 0x2d64e	@ 0002d638 09e0
.org 0x2d63a
	mov r1, r8	@ 0002d63a 4146
.org 0x2d63c
	movs r2, #0	@ 0002d63c 0022
.org 0x2d63e
	ldrsh r0, [r1, r2]	@ 0002d63e 885e
.org 0x2d640
	ldr r1, [r7, #84]	@ 0002d640 796d
.org 0x2d642
	adds r1, r1, r0	@ 0002d642 0918
.org 0x2d644
	mov r3, r8	@ 0002d644 4346
.org 0x2d646
	ldrh r0, [r3, #4]	@ 0002d646 9888
.org 0x2d648
	lsls r0, r0, #16	@ 0002d648 0004
.org 0x2d64a
	asrs r0, r0, #17	@ 0002d64a 4014
.org 0x2d64c
	subs r5, r1, r0	@ 0002d64c 0d1a
.org 0x2d64e
	ldr r1, [r7, #88]	@ 0002d64e b96d
.org 0x2d650
	adds r0, r5, #0	@ 0002d650 281c
.org 0x2d652
	bl 0x7e98	@ 0002d652 daf721fc
.org 0x2d656
	adds r4, r0, #0	@ 0002d656 041c
.org 0x2d658
	ldr r6, [sp, #0]	@ 0002d658 009e
.org 0x2d65a
	cmp r6, r4	@ 0002d65a a642
.org 0x2d65c
	ble.n 0x2d660	@ 0002d65c 00dd
.org 0x2d65e
	str r4, [sp, #0]	@ 0002d65e 0094
.org 0x2d660
	ldr r2, [r7, #88]	@ 0002d660 ba6d
.org 0x2d662
	adds r0, r7, #0	@ 0002d662 381c
.org 0x2d664
	adds r1, r5, #0	@ 0002d664 291c
.org 0x2d666
	bl 0x2df78	@ 0002d666 00f087fc
.org 0x2d66a
	adds r4, r0, #0	@ 0002d66a 041c
.org 0x2d66c
	ldr r0, [sp, #0]	@ 0002d66c 0098
.org 0x2d66e
	cmp r0, r4	@ 0002d66e a042
.org 0x2d670
	ble.n 0x2d674	@ 0002d670 00dd
.org 0x2d672
	str r4, [sp, #0]	@ 0002d672 0094
.org 0x2d674
	ldrb r1, [r7, #10]	@ 0002d674 b97a
.org 0x2d676
	movs r0, #16	@ 0002d676 1020
.org 0x2d678
	ands r0, r1	@ 0002d678 0840
.org 0x2d67a
	cmp r0, #0	@ 0002d67a 0028
.org 0x2d67c
	beq.n 0x2d694	@ 0002d67c 0ad0
.org 0x2d67e
	mov r1, r8	@ 0002d67e 4146
.org 0x2d680
	movs r2, #0	@ 0002d680 0022
.org 0x2d682
	ldrsh r0, [r1, r2]	@ 0002d682 885e
.org 0x2d684
	ldr r1, [r7, #84]	@ 0002d684 796d
.org 0x2d686
	subs r1, r1, r0	@ 0002d686 091a
.org 0x2d688
	mov r3, r8	@ 0002d688 4346
.org 0x2d68a
	ldrh r0, [r3, #4]	@ 0002d68a 9888
.org 0x2d68c
	lsls r0, r0, #16	@ 0002d68c 0004
.org 0x2d68e
	asrs r0, r0, #17	@ 0002d68e 4014
.org 0x2d690
	subs r5, r1, r0	@ 0002d690 0d1a
.org 0x2d692
	b.n 0x2d6a6	@ 0002d692 08e0
.org 0x2d694
	mov r4, r8	@ 0002d694 4446
.org 0x2d696
	movs r5, #0	@ 0002d696 0025
.org 0x2d698
	ldrsh r0, [r4, r5]	@ 0002d698 605f
.org 0x2d69a
	ldr r1, [r7, #84]	@ 0002d69a 796d
.org 0x2d69c
	adds r1, r1, r0	@ 0002d69c 0918
.org 0x2d69e
	ldrh r0, [r4, #4]	@ 0002d69e a088
.org 0x2d6a0
	lsls r0, r0, #16	@ 0002d6a0 0004
.org 0x2d6a2
	asrs r0, r0, #17	@ 0002d6a2 4014
.org 0x2d6a4
	adds r5, r1, r0	@ 0002d6a4 0d18
.org 0x2d6a6
	ldr r1, [r7, #88]	@ 0002d6a6 b96d
.org 0x2d6a8
	adds r0, r5, #0	@ 0002d6a8 281c
.org 0x2d6aa
	bl 0x7e98	@ 0002d6aa daf7f5fb
.org 0x2d6ae
	adds r4, r0, #0	@ 0002d6ae 041c
.org 0x2d6b0
	ldr r6, [sp, #0]	@ 0002d6b0 009e
.org 0x2d6b2
	cmp r6, r4	@ 0002d6b2 a642
.org 0x2d6b4
	ble.n 0x2d6b8	@ 0002d6b4 00dd
.org 0x2d6b6
	str r4, [sp, #0]	@ 0002d6b6 0094
.org 0x2d6b8
	ldr r2, [r7, #88]	@ 0002d6b8 ba6d
.org 0x2d6ba
	adds r0, r7, #0	@ 0002d6ba 381c
.org 0x2d6bc
	adds r1, r5, #0	@ 0002d6bc 291c
.org 0x2d6be
	bl 0x2df78	@ 0002d6be 00f05bfc
.org 0x2d6c2
	adds r4, r0, #0	@ 0002d6c2 041c
.org 0x2d6c4
	ldr r0, [sp, #0]	@ 0002d6c4 0098
.org 0x2d6c6
	cmp r0, r4	@ 0002d6c6 a042
.org 0x2d6c8
	ble.n 0x2d6cc	@ 0002d6c8 00dd
.org 0x2d6ca
	str r4, [sp, #0]	@ 0002d6ca 0094
.org 0x2d6cc
	ldr r1, [sp, #0]	@ 0002d6cc 0099
.org 0x2d6ce
	cmp r1, #0	@ 0002d6ce 0029
.org 0x2d6d0
	bge.n 0x2d7c6	@ 0002d6d0 79da
.org 0x2d6d2
	ldr r0, [r7, #88]	@ 0002d6d2 b86d
.org 0x2d6d4
	adds r0, r0, r1	@ 0002d6d4 4018
.org 0x2d6d6
	b.n 0x2d7c4	@ 0002d6d6 75e0
.org 0x2d6d8
	ldr r3, [sp, #0]	@ 0002d6d8 009b
.org 0x2d6da
	cmp r3, #0	@ 0002d6da 002b
.org 0x2d6dc
	bge.n 0x2d7c6	@ 0002d6dc 73da
.org 0x2d6de
	ldr r0, [r7, #84]	@ 0002d6de 786d
.org 0x2d6e0
	ldr r4, [pc, #52]	@ 0002d6e0 0d4c
.org 0x2d6e2
	adds r1, r2, r4	@ 0002d6e2 1119
.org 0x2d6e4
	bl 0x7d28	@ 0002d6e4 daf720fb
.org 0x2d6e8
	lsls r0, r0, #16	@ 0002d6e8 0004
.org 0x2d6ea
	lsrs r5, r0, #16	@ 0002d6ea 050c
.org 0x2d6ec
	cmp r5, #0	@ 0002d6ec 002d
.org 0x2d6ee
	beq.n 0x2d7c6	@ 0002d6ee 6ad0
.org 0x2d6f0
	ldr r0, [r7, #84]	@ 0002d6f0 786d
.org 0x2d6f2
	ldr r1, [r7, #88]	@ 0002d6f2 b96d
.org 0x2d6f4
	adds r1, r1, r4	@ 0002d6f4 0919
.org 0x2d6f6
	bl 0x8080	@ 0002d6f6 daf7c3fc
.org 0x2d6fa
	adds r4, r0, #0	@ 0002d6fa 041c
.org 0x2d6fc
	cmp r4, #0	@ 0002d6fc 002c
.org 0x2d6fe
	ble.n 0x2d708	@ 0002d6fe 03dd
.org 0x2d700
	ldr r0, [r7, #88]	@ 0002d700 b86d
.org 0x2d702
	adds r0, #1	@ 0002d702 0130
.org 0x2d704
	adds r0, r0, r4	@ 0002d704 0019
.org 0x2d706
	str r0, [r7, #88]	@ 0002d706 b865
.org 0x2d708
	movs r0, #16	@ 0002d708 1020
.org 0x2d70a
	ands r0, r5	@ 0002d70a 2840
.org 0x2d70c
	cmp r0, #0	@ 0002d70c 0028
.org 0x2d70e
	beq.n 0x2d7c6	@ 0002d70e 5ad0
.org 0x2d710
	movs r5, #2	@ 0002d710 0225
.org 0x2d712
	str r5, [sp, #8]	@ 0002d712 0295
.org 0x2d714
	b.n 0x2d7c6	@ 0002d714 57e0
.org 0x2d716
	.byte 0x00	@ 0002d716 data
.org 0x2d717
	.byte 0x00	@ 0002d717 data
.org 0x2d718
	.byte 0x00,0xe2,0xff,0xff	@ 0002d718 data
.org 0x2d71c
	ldr r6, [sp, #0]	@ 0002d71c 009e
.org 0x2d71e
	cmp r6, #0	@ 0002d71e 002e
.org 0x2d720
	bge.n 0x2d776	@ 0002d720 29da
.org 0x2d722
	ldr r0, [r7, #84]	@ 0002d722 786d
.org 0x2d724
	ldr r5, [pc, #200]	@ 0002d724 324d
.org 0x2d726
	adds r1, r2, r5	@ 0002d726 5119
.org 0x2d728
	bl 0x7d28	@ 0002d728 daf7fefa
.org 0x2d72c
	movs r1, #128	@ 0002d72c 8021
.org 0x2d72e
	lsls r1, r1, #8	@ 0002d72e 0902
.org 0x2d730
	ands r1, r0	@ 0002d730 0140
.org 0x2d732
	cmp r1, #0	@ 0002d732 0029
.org 0x2d734
	beq.n 0x2d75c	@ 0002d734 12d0
.org 0x2d736
	ldr r0, [r7, #84]	@ 0002d736 786d
.org 0x2d738
	ldr r1, [r7, #88]	@ 0002d738 b96d
.org 0x2d73a
	adds r1, r1, r5	@ 0002d73a 4919
.org 0x2d73c
	bl 0x7d28	@ 0002d73c daf7f4fa
.org 0x2d740
	movs r4, #15	@ 0002d740 0f24
.org 0x2d742
	adds r1, r4, #0	@ 0002d742 211c
.org 0x2d744
	ands r1, r0	@ 0002d744 0140
.org 0x2d746
	cmp r1, #0	@ 0002d746 0029
.org 0x2d748
	beq.n 0x2d75c	@ 0002d748 08d0
.org 0x2d74a
	ldr r0, [r7, #84]	@ 0002d74a 786d
.org 0x2d74c
	ldr r1, [r7, #88]	@ 0002d74c b96d
.org 0x2d74e
	adds r1, r1, r5	@ 0002d74e 4919
.org 0x2d750
	bl 0x7d28	@ 0002d750 daf7eafa
.org 0x2d754
	adds r1, r4, #0	@ 0002d754 211c
.org 0x2d756
	ands r1, r0	@ 0002d756 0140
.org 0x2d758
	cmp r1, #14	@ 0002d758 0e29
.org 0x2d75a
	bls.n 0x2d776	@ 0002d75a 0cd9
.org 0x2d75c
	ldr r0, [r7, #84]	@ 0002d75c 786d
.org 0x2d75e
	ldr r1, [r7, #88]	@ 0002d75e b96d
.org 0x2d760
	ldr r2, [pc, #140]	@ 0002d760 234a
.org 0x2d762
	adds r1, r1, r2	@ 0002d762 8918
.org 0x2d764
	bl 0x8080	@ 0002d764 daf78cfc
.org 0x2d768
	adds r4, r0, #0	@ 0002d768 041c
.org 0x2d76a
	cmp r4, #0	@ 0002d76a 002c
.org 0x2d76c
	ble.n 0x2d776	@ 0002d76c 03dd
.org 0x2d76e
	ldr r0, [r7, #88]	@ 0002d76e b86d
.org 0x2d770
	adds r0, #1	@ 0002d770 0130
.org 0x2d772
	adds r0, r0, r4	@ 0002d772 0019
.org 0x2d774
	str r0, [r7, #88]	@ 0002d774 b865
.org 0x2d776
	ldr r3, [sp, #0]	@ 0002d776 009b
.org 0x2d778
	cmp r3, #0	@ 0002d778 002b
.org 0x2d77a
	ble.n 0x2d7c6	@ 0002d77a 24dd
.org 0x2d77c
	ldr r0, [r7, #84]	@ 0002d77c 786d
.org 0x2d77e
	ldr r1, [r7, #88]	@ 0002d77e b96d
.org 0x2d780
	bl 0x7d28	@ 0002d780 daf7d2fa
.org 0x2d784
	movs r1, #128	@ 0002d784 8021
.org 0x2d786
	lsls r1, r1, #8	@ 0002d786 0902
.org 0x2d788
	ands r1, r0	@ 0002d788 0140
.org 0x2d78a
	cmp r1, #0	@ 0002d78a 0029
.org 0x2d78c
	beq.n 0x2d7b0	@ 0002d78c 10d0
.org 0x2d78e
	ldr r0, [r7, #84]	@ 0002d78e 786d
.org 0x2d790
	ldr r1, [r7, #88]	@ 0002d790 b96d
.org 0x2d792
	bl 0x7d28	@ 0002d792 daf7c9fa
