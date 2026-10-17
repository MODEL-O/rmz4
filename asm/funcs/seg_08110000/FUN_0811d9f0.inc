@ FUN_0811d9f0  entry 0x0811d9f0  size 538
.thumb
.org 0x11d9f0
FUN_0811d9f0:
	push {r4, r5, r6, r7, lr}	@ 0011d9f0 f0b5
.org 0x11d9f2
	mov r7, sl	@ 0011d9f2 5746
.org 0x11d9f4
	mov r6, r9	@ 0011d9f4 4e46
.org 0x11d9f6
	mov r5, r8	@ 0011d9f6 4546
.org 0x11d9f8
	push {r5, r6, r7}	@ 0011d9f8 e0b4
.org 0x11d9fa
	sub sp, #4	@ 0011d9fa 81b0
.org 0x11d9fc
	adds r7, r0, #0	@ 0011d9fc 071c
.org 0x11d9fe
	movs r4, #0	@ 0011d9fe 0024
.org 0x11da00
	movs r0, #0	@ 0011da00 0020
.org 0x11da02
	mov r9, r0	@ 0011da02 8146
.org 0x11da04
	mov r1, r9	@ 0011da04 4946
.org 0x11da06
	strh r1, [r7, #4]	@ 0011da06 b980
.org 0x11da08
	ldr r2, [pc, #248]	@ 0011da08 3e4a
.org 0x11da0a
	adds r5, r7, r2	@ 0011da0a bd18
.org 0x11da0c
	strb r4, [r5, #0]	@ 0011da0c 2c70
.org 0x11da0e
	adds r0, r7, #0	@ 0011da0e 381c
.org 0x11da10
	bl 0x11ea70	@ 0011da10 01f02ef8
.org 0x11da14
	ldr r6, [pc, #240]	@ 0011da14 3c4e
.org 0x11da16
	ldrh r1, [r6, #0]	@ 0011da16 3188
.org 0x11da18
	ldr r0, [pc, #240]	@ 0011da18 3c48
.org 0x11da1a
	ands r0, r1	@ 0011da1a 0840
.org 0x11da1c
	ldr r1, [pc, #240]	@ 0011da1c 3c49
.org 0x11da1e
	ands r0, r1	@ 0011da1e 0840
.org 0x11da20
	movs r2, #152	@ 0011da20 9822
.org 0x11da22
	lsls r2, r2, #5	@ 0011da22 5201
.org 0x11da24
	adds r1, r2, #0	@ 0011da24 111c
.org 0x11da26
	orrs r0, r1	@ 0011da26 0843
.org 0x11da28
	strh r0, [r6, #0]	@ 0011da28 3080
.org 0x11da2a
	ldr r1, [pc, #232]	@ 0011da2a 3a49
.org 0x11da2c
	adds r0, r1, #0	@ 0011da2c 081c
.org 0x11da2e
	strh r0, [r6, #6]	@ 0011da2e f080
.org 0x11da30
	mov r2, r9	@ 0011da30 4a46
.org 0x11da32
	str r2, [r6, #16]	@ 0011da32 3261
.org 0x11da34
	movs r0, #63	@ 0011da34 3f20
.org 0x11da36
	movs r1, #0	@ 0011da36 0021
.org 0x11da38
	bl 0x249c	@ 0011da38 e4f630fd
.org 0x11da3c
	movs r0, #64	@ 0011da3c 4020
.org 0x11da3e
	movs r1, #0	@ 0011da3e 0021
.org 0x11da40
	bl 0x249c	@ 0011da40 e4f62cfd
.org 0x11da44
	strb r4, [r5, #4]	@ 0011da44 2c71
.org 0x11da46
	ldr r3, [pc, #208]	@ 0011da46 344b
.org 0x11da48
	ldrb r1, [r3, #5]	@ 0011da48 5979
.org 0x11da4a
	movs r4, #32	@ 0011da4a 2024
.org 0x11da4c
	adds r0, r4, #0	@ 0011da4c 201c
.org 0x11da4e
	ands r0, r1	@ 0011da4e 0840
.org 0x11da50
	cmp r0, #0	@ 0011da50 0028
.org 0x11da52
	beq.n 0x11da58	@ 0011da52 01d0
.org 0x11da54
	movs r0, #1	@ 0011da54 0120
.org 0x11da56
	strb r0, [r5, #4]	@ 0011da56 2871
.org 0x11da58
	ldrb r1, [r3, #6]	@ 0011da58 9979
.org 0x11da5a
	movs r0, #1	@ 0011da5a 0120
.org 0x11da5c
	mov r8, r0	@ 0011da5c 8046
.org 0x11da5e
	ands r0, r1	@ 0011da5e 0840
.org 0x11da60
	adds r2, r1, #0	@ 0011da60 0a1c
.org 0x11da62
	cmp r0, #0	@ 0011da62 0028
.org 0x11da64
	beq.n 0x11da6c	@ 0011da64 02d0
.org 0x11da66
	ldrb r0, [r5, #4]	@ 0011da66 2879
.org 0x11da68
	adds r0, #1	@ 0011da68 0130
.org 0x11da6a
	strb r0, [r5, #4]	@ 0011da6a 2871
.org 0x11da6c
	adds r0, r4, #0	@ 0011da6c 201c
.org 0x11da6e
	ands r0, r2	@ 0011da6e 1040
.org 0x11da70
	cmp r0, #0	@ 0011da70 0028
.org 0x11da72
	beq.n 0x11da7a	@ 0011da72 02d0
.org 0x11da74
	ldrb r0, [r5, #4]	@ 0011da74 2879
.org 0x11da76
	adds r0, #1	@ 0011da76 0130
.org 0x11da78
	strb r0, [r5, #4]	@ 0011da78 2871
.org 0x11da7a
	movs r0, #64	@ 0011da7a 4020
.org 0x11da7c
	ands r0, r2	@ 0011da7c 1040
.org 0x11da7e
	cmp r0, #0	@ 0011da7e 0028
.org 0x11da80
	beq.n 0x11da88	@ 0011da80 02d0
.org 0x11da82
	ldrb r0, [r5, #4]	@ 0011da82 2879
.org 0x11da84
	adds r0, #1	@ 0011da84 0130
.org 0x11da86
	strb r0, [r5, #4]	@ 0011da86 2871
.org 0x11da88
	movs r0, #128	@ 0011da88 8020
.org 0x11da8a
	ands r0, r1	@ 0011da8a 0840
.org 0x11da8c
	cmp r0, #0	@ 0011da8c 0028
.org 0x11da8e
	beq.n 0x11da96	@ 0011da8e 02d0
.org 0x11da90
	ldrb r0, [r5, #4]	@ 0011da90 2879
.org 0x11da92
	adds r0, #1	@ 0011da92 0130
.org 0x11da94
	strb r0, [r5, #4]	@ 0011da94 2871
.org 0x11da96
	ldrb r1, [r3, #7]	@ 0011da96 d979
.org 0x11da98
	mov r0, r8	@ 0011da98 4046
.org 0x11da9a
	ands r0, r1	@ 0011da9a 0840
.org 0x11da9c
	adds r2, r1, #0	@ 0011da9c 0a1c
.org 0x11da9e
	cmp r0, #0	@ 0011da9e 0028
.org 0x11daa0
	beq.n 0x11daa8	@ 0011daa0 02d0
.org 0x11daa2
	ldrb r0, [r5, #4]	@ 0011daa2 2879
.org 0x11daa4
	adds r0, #1	@ 0011daa4 0130
.org 0x11daa6
	strb r0, [r5, #4]	@ 0011daa6 2871
.org 0x11daa8
	movs r0, #2	@ 0011daa8 0220
.org 0x11daaa
	ands r0, r2	@ 0011daaa 1040
.org 0x11daac
	cmp r0, #0	@ 0011daac 0028
.org 0x11daae
	beq.n 0x11dab6	@ 0011daae 02d0
.org 0x11dab0
	ldrb r0, [r5, #4]	@ 0011dab0 2879
.org 0x11dab2
	adds r0, #1	@ 0011dab2 0130
.org 0x11dab4
	strb r0, [r5, #4]	@ 0011dab4 2871
.org 0x11dab6
	movs r0, #4	@ 0011dab6 0420
.org 0x11dab8
	ands r0, r2	@ 0011dab8 1040
.org 0x11daba
	cmp r0, #0	@ 0011daba 0028
.org 0x11dabc
	beq.n 0x11dac4	@ 0011dabc 02d0
.org 0x11dabe
	ldrb r0, [r5, #4]	@ 0011dabe 2879
.org 0x11dac0
	adds r0, #1	@ 0011dac0 0130
.org 0x11dac2
	strb r0, [r5, #4]	@ 0011dac2 2871
.org 0x11dac4
	movs r0, #8	@ 0011dac4 0820
.org 0x11dac6
	ands r0, r1	@ 0011dac6 0840
.org 0x11dac8
	cmp r0, #0	@ 0011dac8 0028
.org 0x11daca
	beq.n 0x11dad2	@ 0011daca 02d0
.org 0x11dacc
	ldrb r0, [r5, #4]	@ 0011dacc 2879
.org 0x11dace
	adds r0, #1	@ 0011dace 0130
.org 0x11dad0
	strb r0, [r5, #4]	@ 0011dad0 2871
.org 0x11dad2
	ldr r0, [pc, #72]	@ 0011dad2 1248
.org 0x11dad4
	ldrh r2, [r6, #6]	@ 0011dad4 f288
.org 0x11dad6
	movs r1, #12	@ 0011dad6 0c21
.org 0x11dad8
	ands r1, r2	@ 0011dad8 1140
.org 0x11dada
	lsls r1, r1, #12	@ 0011dada 0903
.org 0x11dadc
	bl 0x1d30	@ 0011dadc e4f628f9
.org 0x11dae0
	ldr r0, [pc, #60]	@ 0011dae0 0f48
.org 0x11dae2
	movs r1, #0	@ 0011dae2 0021
.org 0x11dae4
	bl 0x2208	@ 0011dae4 e4f690fb
.org 0x11dae8
	ldrb r0, [r5, #4]	@ 0011dae8 2879
.org 0x11daea
	cmp r0, #5	@ 0011daea 0528
.org 0x11daec
	bhi.n 0x11db2c	@ 0011daec 1ed8
.org 0x11daee
	ldr r1, [pc, #52]	@ 0011daee 0d49
.org 0x11daf0
	adds r0, r7, r1	@ 0011daf0 7818
.org 0x11daf2
	ldr r1, [pc, #52]	@ 0011daf2 0d49
.org 0x11daf4
	mov r2, r9	@ 0011daf4 4a46
.org 0x11daf6
	str r2, [sp, #0]	@ 0011daf6 0092
.org 0x11daf8
	movs r2, #33	@ 0011daf8 2122
.org 0x11dafa
	movs r3, #0	@ 0011dafa 0023
.org 0x11dafc
	bl 0x27b8	@ 0011dafc e4f65cfe
.org 0x11db00
	b.n 0x11db3e	@ 0011db00 1de0
.org 0x11db02
	.byte 0x00	@ 0011db02 data
.org 0x11db03
	.byte 0x00	@ 0011db03 data
.org 0x11db04
	.byte 0xcc,0x0d,0x00,0x00	@ 0011db04 data
.org 0x11db08
	.byte 0x00,0x0a,0x00,0x02	@ 0011db08 data
.org 0x11db0c
	.byte 0xf8,0xff,0x00,0x00	@ 0011db0c data
.org 0x11db10
	.byte 0xff,0xf0,0x00,0x00	@ 0011db10 data
.org 0x11db14
	.byte 0x06,0x42,0x00,0x00	@ 0011db14 data
.org 0x11db18
	.byte 0xb0,0xe8,0x02,0x02	@ 0011db18 data
.org 0x11db1c
	.byte 0x1c,0xc2,0xb6,0x08	@ 0011db1c data
.org 0x11db20
	.byte 0x28,0xc2,0xb6,0x08	@ 0011db20 data
.org 0x11db24
	.byte 0xd8,0x0e,0x00,0x00	@ 0011db24 data
.org 0x11db28
	.byte 0x00,0xc0,0xb2,0x08	@ 0011db28 data
.org 0x11db2c
	ldr r1, [pc, #212]	@ 0011db2c 3549
.org 0x11db2e
	adds r0, r7, r1	@ 0011db2e 7818
.org 0x11db30
	ldr r1, [pc, #212]	@ 0011db30 3549
.org 0x11db32
	movs r2, #0	@ 0011db32 0022
.org 0x11db34
	str r2, [sp, #0]	@ 0011db34 0092
.org 0x11db36
	movs r2, #34	@ 0011db36 2222
.org 0x11db38
	movs r3, #0	@ 0011db38 0023
.org 0x11db3a
	bl 0x27b8	@ 0011db3a e4f63dfe
.org 0x11db3e
	ldr r2, [pc, #196]	@ 0011db3e 314a
.org 0x11db40
	adds r0, r7, r2	@ 0011db40 b818
.org 0x11db42
	ldr r1, [pc, #200]	@ 0011db42 3249
.org 0x11db44
	ldrh r2, [r1, #0]	@ 0011db44 0a88
.org 0x11db46
	movs r1, #248	@ 0011db46 f821
.org 0x11db48
	lsls r1, r1, #5	@ 0011db48 4901
.org 0x11db4a
	ands r1, r2	@ 0011db4a 1140
.org 0x11db4c
	lsls r1, r1, #3	@ 0011db4c c900
.org 0x11db4e
	movs r2, #128	@ 0011db4e 8022
.org 0x11db50
	lsls r2, r2, #5	@ 0011db50 5201
.org 0x11db52
	bl 0x1f1c	@ 0011db52 e4f6e3f9
.org 0x11db56
	ldr r4, [pc, #184]	@ 0011db56 2e4c
.org 0x11db58
	ldr r0, [pc, #184]	@ 0011db58 2e48
.org 0x11db5a
	mov r8, r0	@ 0011db5a 8046
.org 0x11db5c
	adds r0, r4, r0	@ 0011db5c 2018
.org 0x11db5e
	ldr r6, [pc, #184]	@ 0011db5e 2e4e
.org 0x11db60
	adds r1, r6, #0	@ 0011db60 311c
.org 0x11db62
	adds r1, #202	@ 0011db62 ca31
.org 0x11db64
	ldrh r1, [r1, #0]	@ 0011db64 0988
.org 0x11db66
	ldrh r2, [r0, #6]	@ 0011db66 c288
.org 0x11db68
	lsrs r2, r2, #6	@ 0011db68 9209
.org 0x11db6a
	subs r1, r1, r2	@ 0011db6a 891a
.org 0x11db6c
	lsls r1, r1, #5	@ 0011db6c 4901
.org 0x11db6e
	movs r2, #128	@ 0011db6e 8022
.org 0x11db70
	lsls r2, r2, #9	@ 0011db70 5202
.org 0x11db72
	adds r1, r1, r2	@ 0011db72 8918
.org 0x11db74
	bl 0x1d30	@ 0011db74 e4f6dcf8
.org 0x11db78
	ldr r0, [pc, #160]	@ 0011db78 2848
.org 0x11db7a
	mov sl, r0	@ 0011db7a 8246
.org 0x11db7c
	add r4, sl	@ 0011db7c 5444
.org 0x11db7e
	ldr r5, [pc, #160]	@ 0011db7e 284d
.org 0x11db80
	adds r0, r5, #0	@ 0011db80 281c
.org 0x11db82
	adds r0, #202	@ 0011db82 ca30
.org 0x11db84
	ldrh r1, [r0, #0]	@ 0011db84 0188
.org 0x11db86
	ldrb r0, [r4, #7]	@ 0011db86 e079
.org 0x11db88
	subs r1, r1, r0	@ 0011db88 091a
.org 0x11db8a
	lsls r1, r1, #5	@ 0011db8a 4901
.org 0x11db8c
	movs r2, #128	@ 0011db8c 8022
.org 0x11db8e
	lsls r2, r2, #2	@ 0011db8e 9200
.org 0x11db90
	mov r9, r2	@ 0011db90 9146
.org 0x11db92
	add r1, r9	@ 0011db92 4944
.org 0x11db94
	adds r0, r4, #0	@ 0011db94 201c
.org 0x11db96
	bl 0x2208	@ 0011db96 e4f637fb
.org 0x11db9a
	movs r4, #255	@ 0011db9a ff24
.org 0x11db9c
	lsls r4, r4, #3	@ 0011db9c e400
.org 0x11db9e
	add r8, r4	@ 0011db9e a044
.org 0x11dba0
	adds r6, #204	@ 0011dba0 cc36
.org 0x11dba2
	ldrh r1, [r6, #0]	@ 0011dba2 3188
.org 0x11dba4
	mov r2, r8	@ 0011dba4 4246
.org 0x11dba6
	ldrh r0, [r2, #6]	@ 0011dba6 d088
.org 0x11dba8
	lsrs r0, r0, #6	@ 0011dba8 8009
.org 0x11dbaa
	subs r1, r1, r0	@ 0011dbaa 091a
.org 0x11dbac
	lsls r1, r1, #5	@ 0011dbac 4901
.org 0x11dbae
	movs r0, #128	@ 0011dbae 8020
.org 0x11dbb0
	lsls r0, r0, #9	@ 0011dbb0 4002
.org 0x11dbb2
	adds r1, r1, r0	@ 0011dbb2 0918
.org 0x11dbb4
	mov r0, r8	@ 0011dbb4 4046
.org 0x11dbb6
	bl 0x1d30	@ 0011dbb6 e4f6bbf8
.org 0x11dbba
	add r4, sl	@ 0011dbba 5444
.org 0x11dbbc
	adds r5, #204	@ 0011dbbc cc35
.org 0x11dbbe
	ldrh r1, [r5, #0]	@ 0011dbbe 2988
.org 0x11dbc0
	ldrb r0, [r4, #7]	@ 0011dbc0 e079
.org 0x11dbc2
	subs r1, r1, r0	@ 0011dbc2 091a
.org 0x11dbc4
	lsls r1, r1, #5	@ 0011dbc4 4901
.org 0x11dbc6
	add r1, r9	@ 0011dbc6 4944
.org 0x11dbc8
	adds r0, r4, #0	@ 0011dbc8 201c
.org 0x11dbca
	bl 0x2208	@ 0011dbca e4f61dfb
.org 0x11dbce
	adds r0, r7, #0	@ 0011dbce 381c
.org 0x11dbd0
	movs r1, #0	@ 0011dbd0 0021
.org 0x11dbd2
	movs r2, #0	@ 0011dbd2 0022
.org 0x11dbd4
	bl 0x10bc7c	@ 0011dbd4 eef752f8
.org 0x11dbd8
	adds r0, r7, #0	@ 0011dbd8 381c
.org 0x11dbda
	movs r1, #1	@ 0011dbda 0121
.org 0x11dbdc
	movs r2, #0	@ 0011dbdc 0022
.org 0x11dbde
	bl 0x10bc7c	@ 0011dbde eef74df8
.org 0x11dbe2
	adds r0, r7, #0	@ 0011dbe2 381c
.org 0x11dbe4
	movs r1, #3	@ 0011dbe4 0321
.org 0x11dbe6
	movs r2, #0	@ 0011dbe6 0022
.org 0x11dbe8
	bl 0x10bc7c	@ 0011dbe8 eef748f8
.org 0x11dbec
	ldr r1, [pc, #52]	@ 0011dbec 0d49
.org 0x11dbee
	adds r0, r7, r1	@ 0011dbee 7818
.org 0x11dbf0
	ldrb r0, [r0, #4]	@ 0011dbf0 0079
.org 0x11dbf2
	subs r0, #1	@ 0011dbf2 0138
.org 0x11dbf4
	cmp r0, #8	@ 0011dbf4 0828
.org 0x11dbf6
	bls.n 0x11dbfa	@ 0011dbf6 00d9
.org 0x11dbf8
	b.n 0x11deca	@ 0011dbf8 67e1
.org 0x11dbfa
	lsls r0, r0, #2	@ 0011dbfa 8000
.org 0x11dbfc
	ldr r1, [pc, #40]	@ 0011dbfc 0a49
.org 0x11dbfe
	adds r0, r0, r1	@ 0011dbfe 4018
.org 0x11dc00
	ldr r0, [r0, #0]	@ 0011dc00 0068
.org 0x11dc02
	mov pc, r0	@ 0011dc02 8746
.org 0x11dc04
	.byte 0xd8,0x0e,0x00,0x00	@ 0011dc04 data
.org 0x11dc08
	.byte 0x00,0xc0,0xb2,0x08	@ 0011dc08 data
