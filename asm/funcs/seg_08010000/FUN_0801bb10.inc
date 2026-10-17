@ FUN_0801bb10  entry 0x0801bb10  size 456
.thumb
.org 0x1bb10
FUN_0801bb10:
	push {r4, r5, r6, r7, lr}	@ 0001bb10 f0b5
.org 0x1bb12
	mov r7, sl	@ 0001bb12 5746
.org 0x1bb14
	mov r6, r9	@ 0001bb14 4e46
.org 0x1bb16
	mov r5, r8	@ 0001bb16 4546
.org 0x1bb18
	push {r5, r6, r7}	@ 0001bb18 e0b4
.org 0x1bb1a
	sub sp, #8	@ 0001bb1a 82b0
.org 0x1bb1c
	adds r7, r0, #0	@ 0001bb1c 071c
.org 0x1bb1e
	ldr r0, [r7, #92]	@ 0001bb1e f86d
.org 0x1bb20
	lsls r0, r0, #16	@ 0001bb20 0004
.org 0x1bb22
	lsrs r4, r0, #16	@ 0001bb22 040c
.org 0x1bb24
	ldr r1, [pc, #40]	@ 0001bb24 0a49
.org 0x1bb26
	ldr r2, [pc, #44]	@ 0001bb26 0b4a
.org 0x1bb28
	adds r0, r1, r2	@ 0001bb28 8818
.org 0x1bb2a
	ldrh r0, [r0, #0]	@ 0001bb2a 0088
.org 0x1bb2c
	cmp r0, #0	@ 0001bb2c 0028
.org 0x1bb2e
	beq.n 0x1bb70	@ 0001bb2e 1fd0
.org 0x1bb30
	ldr r3, [pc, #36]	@ 0001bb30 094b
.org 0x1bb32
	adds r0, r1, r3	@ 0001bb32 c818
.org 0x1bb34
	ldrb r2, [r0, #0]	@ 0001bb34 0278
.org 0x1bb36
	cmp r2, #0	@ 0001bb36 002a
.org 0x1bb38
	beq.n 0x1bb60	@ 0001bb38 12d0
.org 0x1bb3a
	lsls r0, r4, #24	@ 0001bb3a 2006
.org 0x1bb3c
	lsrs r0, r0, #24	@ 0001bb3c 000e
.org 0x1bb3e
	ldr r1, [pc, #28]	@ 0001bb3e 0749
.org 0x1bb40
	movs r2, #0	@ 0001bb40 0022
.org 0x1bb42
	str r2, [sp, #0]	@ 0001bb42 0092
.org 0x1bb44
	movs r2, #89	@ 0001bb44 5922
.org 0x1bb46
	movs r3, #0	@ 0001bb46 0023
.org 0x1bb48
	bl 0x2734	@ 0001bb48 e6f7f4fd
.org 0x1bb4c
	b.n 0x1bb70	@ 0001bb4c 10e0
.org 0x1bb4e
	.byte 0x00	@ 0001bb4e data
.org 0x1bb4f
	.byte 0x00	@ 0001bb4f data
.org 0x1bb50
	.byte 0xb0,0x0a,0x00,0x02	@ 0001bb50 data
.org 0x1bb54
	.byte 0x02,0xc0,0x02,0x00	@ 0001bb54 data
.org 0x1bb58
	.byte 0x24,0xd0,0x02,0x00	@ 0001bb58 data
.org 0x1bb5c
	.byte 0x00,0xc0,0xb2,0x08	@ 0001bb5c data
.org 0x1bb60
	lsls r0, r4, #24	@ 0001bb60 2006
.org 0x1bb62
	lsrs r0, r0, #24	@ 0001bb62 000e
.org 0x1bb64
	ldr r1, [pc, #88]	@ 0001bb64 1649
.org 0x1bb66
	str r2, [sp, #0]	@ 0001bb66 0092
.org 0x1bb68
	movs r2, #99	@ 0001bb68 6322
.org 0x1bb6a
	movs r3, #0	@ 0001bb6a 0023
.org 0x1bb6c
	bl 0x2734	@ 0001bb6c e6f7e2fd
.org 0x1bb70
	ldr r1, [pc, #80]	@ 0001bb70 1449
.org 0x1bb72
	ldr r6, [pc, #84]	@ 0001bb72 154e
.org 0x1bb74
	adds r0, r1, r6	@ 0001bb74 8819
.org 0x1bb76
	ldr r3, [r0, #0]	@ 0001bb76 0368
.org 0x1bb78
	adds r5, r1, #0	@ 0001bb78 0d1c
.org 0x1bb7a
	cmp r3, #0	@ 0001bb7a 002b
.org 0x1bb7c
	beq.n 0x1bbaa	@ 0001bb7c 15d0
.org 0x1bb7e
	ldr r0, [pc, #76]	@ 0001bb7e 1348
.org 0x1bb80
	ldrb r1, [r3, #29]	@ 0001bb80 597f
.org 0x1bb82
	lsrs r2, r1, #5	@ 0001bb82 4a09
.org 0x1bb84
	lsls r2, r2, #2	@ 0001bb84 9200
.org 0x1bb86
	adds r2, r2, r0	@ 0001bb86 1218
.org 0x1bb88
	movs r0, #31	@ 0001bb88 1f20
.org 0x1bb8a
	ands r0, r1	@ 0001bb8a 0840
.org 0x1bb8c
	movs r1, #1	@ 0001bb8c 0121
.org 0x1bb8e
	lsls r1, r0	@ 0001bb8e 8140
.org 0x1bb90
	ldr r0, [r2, #0]	@ 0001bb90 1068
.org 0x1bb92
	ands r0, r1	@ 0001bb92 0840
.org 0x1bb94
	cmp r0, #0	@ 0001bb94 0028
.org 0x1bb96
	beq.n 0x1bbaa	@ 0001bb96 08d0
.org 0x1bb98
	ldr r1, [pc, #52]	@ 0001bb98 0d49
.org 0x1bb9a
	ldr r0, [pc, #56]	@ 0001bb9a 0e48
.org 0x1bb9c
	adds r2, r1, r0	@ 0001bb9c 0a18
.org 0x1bb9e
	movs r0, #64	@ 0001bb9e 4020
.org 0x1bba0
	strh r0, [r2, #0]	@ 0001bba0 1080
.org 0x1bba2
	ldr r2, [pc, #52]	@ 0001bba2 0d4a
.org 0x1bba4
	adds r1, r1, r2	@ 0001bba4 8918
.org 0x1bba6
	movs r0, #96	@ 0001bba6 6020
.org 0x1bba8
	strh r0, [r1, #0]	@ 0001bba8 0880
.org 0x1bbaa
	ldr r3, [pc, #48]	@ 0001bbaa 0c4b
.org 0x1bbac
	adds r0, r5, r3	@ 0001bbac e818
.org 0x1bbae
	ldrb r0, [r0, #0]	@ 0001bbae 0078
.org 0x1bbb0
	cmp r0, #1	@ 0001bbb0 0128
.org 0x1bbb2
	beq.n 0x1bbe4	@ 0001bbb2 17d0
.org 0x1bbb4
	ldr r0, [pc, #40]	@ 0001bbb4 0a48
.org 0x1bbb6
	lsls r1, r4, #8	@ 0001bbb6 2102
.org 0x1bbb8
	ldrh r2, [r0, #0]	@ 0001bbb8 0288
.org 0x1bbba
	orrs r1, r2	@ 0001bbba 1143
.org 0x1bbbc
	strh r1, [r0, #0]	@ 0001bbbc 0180
.org 0x1bbbe
	b.n 0x1bbee	@ 0001bbbe 16e0
.org 0x1bbc0
	.byte 0x00,0xc0,0xb2,0x08	@ 0001bbc0 data
.org 0x1bbc4
	.byte 0xb0,0x0a,0x00,0x02	@ 0001bbc4 data
.org 0x1bbc8
	.byte 0x38,0xd0,0x02,0x00	@ 0001bbc8 data
.org 0x1bbcc
	.byte 0x10,0xdc,0x02,0x02	@ 0001bbcc data
.org 0x1bbd0
	.byte 0xc0,0x2a,0x00,0x03	@ 0001bbd0 data
.org 0x1bbd4
	.byte 0x04,0x04,0x00,0x00	@ 0001bbd4 data
.org 0x1bbd8
	.byte 0x06,0x04,0x00,0x00	@ 0001bbd8 data
.org 0x1bbdc
	.byte 0x29,0xd0,0x02,0x00	@ 0001bbdc data
.org 0x1bbe0
	.byte 0x00,0x0a,0x00,0x02	@ 0001bbe0 data
.org 0x1bbe4
	ldr r2, [pc, #296]	@ 0001bbe4 4a4a
.org 0x1bbe6
	lsls r1, r4, #8	@ 0001bbe6 2102
.org 0x1bbe8
	ldrh r0, [r2, #0]	@ 0001bbe8 1088
.org 0x1bbea
	bics r0, r1	@ 0001bbea 8843
.org 0x1bbec
	strh r0, [r2, #0]	@ 0001bbec 1080
.org 0x1bbee
	lsrs r3, r4, #4	@ 0001bbee 2309
.org 0x1bbf0
	lsls r3, r3, #2	@ 0001bbf0 9b00
.org 0x1bbf2
	ldr r2, [pc, #288]	@ 0001bbf2 484a
.org 0x1bbf4
	adds r4, r3, r2	@ 0001bbf4 9c18
.org 0x1bbf6
	ldr r1, [r7, #52]	@ 0001bbf6 796b
.org 0x1bbf8
	ldr r6, [pc, #284]	@ 0001bbf8 474e
.org 0x1bbfa
	adds r0, r5, r6	@ 0001bbfa a819
.org 0x1bbfc
	ldr r0, [r0, #0]	@ 0001bbfc 0068
.org 0x1bbfe
	asrs r0, r0, #8	@ 0001bbfe 0012
.org 0x1bc00
	subs r1, r1, r0	@ 0001bc00 091a
.org 0x1bc02
	adds r6, #8	@ 0001bc02 0836
.org 0x1bc04
	adds r0, r5, r6	@ 0001bc04 a819
.org 0x1bc06
	adds r1, #80	@ 0001bc06 5031
.org 0x1bc08
	ldrh r0, [r0, #0]	@ 0001bc08 0088
.org 0x1bc0a
	adds r1, r1, r0	@ 0001bc0a 0918
.org 0x1bc0c
	ldr r0, [r7, #44]	@ 0001bc0c f86a
.org 0x1bc0e
	asrs r0, r0, #8	@ 0001bc0e 0012
.org 0x1bc10
	adds r1, r1, r0	@ 0001bc10 0918
.org 0x1bc12
	strh r1, [r4, #0]	@ 0001bc12 2180
.org 0x1bc14
	adds r2, #2	@ 0001bc14 0232
.org 0x1bc16
	adds r3, r3, r2	@ 0001bc16 9b18
.org 0x1bc18
	ldr r1, [r7, #56]	@ 0001bc18 b96b
.org 0x1bc1a
	ldr r2, [pc, #256]	@ 0001bc1a 404a
.org 0x1bc1c
	adds r0, r5, r2	@ 0001bc1c a818
.org 0x1bc1e
	ldr r0, [r0, #0]	@ 0001bc1e 0068
.org 0x1bc20
	asrs r0, r0, #8	@ 0001bc20 0012
.org 0x1bc22
	adds r6, #2	@ 0001bc22 0236
.org 0x1bc24
	adds r2, r5, r6	@ 0001bc24 aa19
.org 0x1bc26
	subs r1, r1, r0	@ 0001bc26 091a
.org 0x1bc28
	ldrh r2, [r2, #0]	@ 0001bc28 1288
.org 0x1bc2a
	adds r1, r1, r2	@ 0001bc2a 8918
.org 0x1bc2c
	ldr r0, [r7, #48]	@ 0001bc2c 386b
.org 0x1bc2e
	asrs r0, r0, #8	@ 0001bc2e 0012
.org 0x1bc30
	adds r1, r1, r0	@ 0001bc30 0918
.org 0x1bc32
	strh r1, [r3, #0]	@ 0001bc32 1980
.org 0x1bc34
	movs r5, #0	@ 0001bc34 0025
.org 0x1bc36
	mov sl, r5	@ 0001bc36 aa46
.org 0x1bc38
	ldrh r4, [r4, #0]	@ 0001bc38 2488
.org 0x1bc3a
	str r4, [sp, #4]	@ 0001bc3a 0194
.org 0x1bc3c
	ldrh r3, [r3, #0]	@ 0001bc3c 1b88
.org 0x1bc3e
	mov r8, r3	@ 0001bc3e 9846
.org 0x1bc40
	movs r0, #160	@ 0001bc40 a020
.org 0x1bc42
	lsls r0, r0, #2	@ 0001bc42 8000
.org 0x1bc44
	bl 0xa70	@ 0001bc44 e4f714ff
.org 0x1bc48
	adds r6, r0, #0	@ 0001bc48 061c
.org 0x1bc4a
	cmp r6, #0	@ 0001bc4a 002e
.org 0x1bc4c
	beq.n 0x1bcfe	@ 0001bc4c 57d0
.org 0x1bc4e
	ldr r2, [pc, #208]	@ 0001bc4e 344a
.org 0x1bc50
	movs r1, #186	@ 0001bc50 ba21
.org 0x1bc52
	lsls r1, r1, #1	@ 0001bc52 4900
.org 0x1bc54
	adds r0, r2, r1	@ 0001bc54 5018
.org 0x1bc56
	str r6, [r0, #0]	@ 0001bc56 0660
.org 0x1bc58
	movs r3, #188	@ 0001bc58 bc23
.org 0x1bc5a
	lsls r3, r3, #1	@ 0001bc5a 5b00
.org 0x1bc5c
	adds r1, r2, r3	@ 0001bc5c d118
.org 0x1bc5e
	ldr r0, [pc, #196]	@ 0001bc5e 3148
.org 0x1bc60
	str r0, [r1, #0]	@ 0001bc60 0860
.org 0x1bc62
	movs r0, #190	@ 0001bc62 be20
.org 0x1bc64
	lsls r0, r0, #1	@ 0001bc64 4000
.org 0x1bc66
	adds r1, r2, r0	@ 0001bc66 1118
.org 0x1bc68
	ldr r0, [pc, #188]	@ 0001bc68 2f48
.org 0x1bc6a
	str r0, [r1, #0]	@ 0001bc6a 0860
.org 0x1bc6c
	mov r1, r8	@ 0001bc6c 4146
.org 0x1bc6e
	lsls r3, r1, #16	@ 0001bc6e 0b04
.org 0x1bc70
	asrs r0, r3, #16	@ 0001bc70 1814
.org 0x1bc72
	negs r0, r0	@ 0001bc72 4042
.org 0x1bc74
	mov r9, r3	@ 0001bc74 9946
.org 0x1bc76
	cmp r0, #160	@ 0001bc76 a028
.org 0x1bc78
	ble.n 0x1bca0	@ 0001bc78 12dd
.org 0x1bc7a
	ldr r4, [sp, #4]	@ 0001bc7a 019c
.org 0x1bc7c
	lsls r1, r5, #16	@ 0001bc7c 2904
.org 0x1bc7e
	asrs r1, r1, #16	@ 0001bc7e 0914
.org 0x1bc80
	lsls r2, r1, #2	@ 0001bc80 8a00
.org 0x1bc82
	adds r2, r2, r6	@ 0001bc82 9219
.org 0x1bc84
	adds r0, r3, #0	@ 0001bc84 181c
.org 0x1bc86
	orrs r0, r4	@ 0001bc86 2043
.org 0x1bc88
	str r0, [r2, #0]	@ 0001bc88 1060
.org 0x1bc8a
	adds r1, #1	@ 0001bc8a 0131
.org 0x1bc8c
	lsls r1, r1, #16	@ 0001bc8c 0904
.org 0x1bc8e
	lsrs r5, r1, #16	@ 0001bc8e 0d0c
.org 0x1bc90
	asrs r2, r1, #16	@ 0001bc90 0a14
.org 0x1bc92
	adds r1, r2, #0	@ 0001bc92 111c
.org 0x1bc94
	adds r1, #160	@ 0001bc94 a031
.org 0x1bc96
	asrs r0, r3, #16	@ 0001bc96 1814
.org 0x1bc98
	cmn r1, r0	@ 0001bc98 c142
.org 0x1bc9a
	bge.n 0x1bca0	@ 0001bc9a 01da
.org 0x1bc9c
	cmp r2, #159	@ 0001bc9c 9f2a
.org 0x1bc9e
	ble.n 0x1bc7c	@ 0001bc9e eddd
.org 0x1bca0
	lsls r2, r5, #16	@ 0001bca0 2a04
.org 0x1bca2
	asrs r0, r2, #16	@ 0001bca2 1014
.org 0x1bca4
	cmp r0, #159	@ 0001bca4 9f28
.org 0x1bca6
	bgt.n 0x1bcfe	@ 0001bca6 2adc
.org 0x1bca8
	ldr r3, [sp, #4]	@ 0001bca8 019b
.org 0x1bcaa
	lsls r0, r3, #16	@ 0001bcaa 1804
.org 0x1bcac
	asrs r0, r0, #16	@ 0001bcac 0014
.org 0x1bcae
	mov ip, r0	@ 0001bcae 8446
.org 0x1bcb0
	asrs r4, r2, #16	@ 0001bcb0 1414
.org 0x1bcb2
	lsls r2, r4, #2	@ 0001bcb2 a200
.org 0x1bcb4
	adds r2, r2, r6	@ 0001bcb4 9219
.org 0x1bcb6
	mov r1, r8	@ 0001bcb6 4146
.org 0x1bcb8
	adds r0, r1, r5	@ 0001bcb8 4819
.org 0x1bcba
	lsls r0, r0, #1	@ 0001bcba 4000
.org 0x1bcbc
	ldrb r3, [r7, #18]	@ 0001bcbc bb7c
.org 0x1bcbe
	adds r0, r0, r3	@ 0001bcbe c018
.org 0x1bcc0
	lsls r0, r0, #24	@ 0001bcc0 0006
.org 0x1bcc2
	lsrs r0, r0, #23	@ 0001bcc2 c00d
.org 0x1bcc4
	ldr r1, [pc, #100]	@ 0001bcc4 1949
.org 0x1bcc6
	adds r0, r0, r1	@ 0001bcc6 4018
.org 0x1bcc8
	movs r3, #0	@ 0001bcc8 0023
.org 0x1bcca
	ldrsh r1, [r0, r3]	@ 0001bcca c15e
.org 0x1bccc
	mov r3, sl	@ 0001bccc 5346
.org 0x1bcce
	lsls r0, r3, #16	@ 0001bcce 1804
.org 0x1bcd0
	asrs r3, r0, #16	@ 0001bcd0 0314
.org 0x1bcd2
	adds r0, r1, #0	@ 0001bcd2 081c
.org 0x1bcd4
	muls r0, r3	@ 0001bcd4 5843
.org 0x1bcd6
	asrs r0, r0, #12	@ 0001bcd6 0013
