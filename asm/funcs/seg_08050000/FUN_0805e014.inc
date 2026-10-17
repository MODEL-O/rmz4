@ FUN_0805e014  entry 0x0805e014  size 486
.thumb
.org 0x5e014
FUN_0805e014:
	push {r4, r5, r6, r7, lr}	@ 0005e014 f0b5
.org 0x5e016
	mov r7, r8	@ 0005e016 4746
.org 0x5e018
	push {r7}	@ 0005e018 80b4
.org 0x5e01a
	sub sp, #16	@ 0005e01a 84b0
.org 0x5e01c
	adds r5, r0, #0	@ 0005e01c 051c
.org 0x5e01e
	ldr r0, [pc, #80]	@ 0005e01e 1448
.org 0x5e020
	ldr r0, [r0, #0]	@ 0005e020 0068
.org 0x5e022
	mov r8, r0	@ 0005e022 8046
.org 0x5e024
	ldrb r0, [r5, #10]	@ 0005e024 a87a
.org 0x5e026
	lsrs r6, r0, #4	@ 0005e026 0609
.org 0x5e028
	movs r0, #1	@ 0005e028 0120
.org 0x5e02a
	ands r6, r0	@ 0005e02a 0640
.org 0x5e02c
	ldrb r1, [r5, #15]	@ 0005e02c e97b
.org 0x5e02e
	adds r4, r1, #0	@ 0005e02e 0c1c
.org 0x5e030
	cmp r4, #0	@ 0005e030 002c
.org 0x5e032
	bne.n 0x5e078	@ 0005e032 21d1
.org 0x5e034
	adds r0, r5, #0	@ 0005e034 281c
.org 0x5e036
	movs r1, #0	@ 0005e036 0021
.org 0x5e038
	bl 0x5ee6c	@ 0005e038 00f018ff
.org 0x5e03c
	movs r0, #160	@ 0005e03c a020
.org 0x5e03e
	lsls r0, r0, #2	@ 0005e03e 8000
.org 0x5e040
	str r0, [r5, #96]	@ 0005e040 2866
.org 0x5e042
	movs r0, #32	@ 0005e042 2020
.org 0x5e044
	str r0, [r5, #104]	@ 0005e044 a866
.org 0x5e046
	movs r2, #0	@ 0005e046 0022
.org 0x5e048
	adds r0, r5, #0	@ 0005e048 281c
.org 0x5e04a
	adds r0, #180	@ 0005e04a b430
.org 0x5e04c
	ldr r0, [r0, #0]	@ 0005e04c 0068
.org 0x5e04e
	ldr r1, [pc, #36]	@ 0005e04e 0949
.org 0x5e050
	adds r0, r0, r1	@ 0005e050 4018
.org 0x5e052
	ldr r1, [r5, #88]	@ 0005e052 a96d
.org 0x5e054
	cmp r1, r0	@ 0005e054 8142
.org 0x5e056
	blt.n 0x5e05a	@ 0005e056 00db
.org 0x5e058
	movs r2, #1	@ 0005e058 0122
.org 0x5e05a
	str r2, [r5, #92]	@ 0005e05a ea65
.org 0x5e05c
	str r1, [r5, #100]	@ 0005e05c 6966
.org 0x5e05e
	strb r4, [r5, #18]	@ 0005e05e ac74
.org 0x5e060
	strb r4, [r5, #19]	@ 0005e060 ec74
.org 0x5e062
	ldrb r0, [r5, #15]	@ 0005e062 e87b
.org 0x5e064
	adds r0, #1	@ 0005e064 0130
.org 0x5e066
	strb r0, [r5, #15]	@ 0005e066 e873
.org 0x5e068
	adds r7, r5, #0	@ 0005e068 2f1c
.org 0x5e06a
	adds r7, #204	@ 0005e06a cc37
.org 0x5e06c
	b.n 0x5e0a2	@ 0005e06c 19e0
.org 0x5e06e
	.byte 0x00	@ 0005e06e data
.org 0x5e06f
	.byte 0x00	@ 0005e06f data
.org 0x5e070
	.byte 0xf0,0xdb,0x02,0x02	@ 0005e070 data
.org 0x5e074
	.byte 0x00,0xb0,0xff,0xff	@ 0005e074 data
.org 0x5e078
	adds r7, r5, #0	@ 0005e078 2f1c
.org 0x5e07a
	adds r7, #204	@ 0005e07a cc37
.org 0x5e07c
	cmp r4, #1	@ 0005e07c 012c
.org 0x5e07e
	bne.n 0x5e0a2	@ 0005e07e 10d1
.org 0x5e080
	ldr r0, [r7, #0]	@ 0005e080 3868
.org 0x5e082
	cmp r0, #0	@ 0005e082 0028
.org 0x5e084
	bne.n 0x5e08a	@ 0005e084 01d1
.org 0x5e086
	adds r0, r1, #1	@ 0005e086 481c
.org 0x5e088
	strb r0, [r5, #15]	@ 0005e088 e873
.org 0x5e08a
	ldr r0, [r7, #0]	@ 0005e08a 3868
.org 0x5e08c
	adds r0, #185	@ 0005e08c b930
.org 0x5e08e
	ldrb r0, [r0, #0]	@ 0005e08e 0078
.org 0x5e090
	cmp r0, #0	@ 0005e090 0028
.org 0x5e092
	beq.n 0x5e0a2	@ 0005e092 06d0
.org 0x5e094
	adds r0, r5, #0	@ 0005e094 281c
.org 0x5e096
	movs r1, #15	@ 0005e096 0f21
.org 0x5e098
	bl 0x5ee6c	@ 0005e098 00f0e8fe
.org 0x5e09c
	ldrb r0, [r5, #15]	@ 0005e09c e87b
.org 0x5e09e
	adds r0, #1	@ 0005e09e 0130
.org 0x5e0a0
	strb r0, [r5, #15]	@ 0005e0a0 e873
.org 0x5e0a2
	adds r0, r5, #0	@ 0005e0a2 281c
.org 0x5e0a4
	bl 0x1cff0	@ 0005e0a4 bef7a4ff
.org 0x5e0a8
	adds r0, r5, #0	@ 0005e0a8 281c
.org 0x5e0aa
	adds r0, #116	@ 0005e0aa 7430
.org 0x5e0ac
	ldr r4, [pc, #80]	@ 0005e0ac 144c
.org 0x5e0ae
	ldr r3, [pc, #84]	@ 0005e0ae 154b
.org 0x5e0b0
	adds r1, r5, #0	@ 0005e0b0 291c
.org 0x5e0b2
	adds r1, #184	@ 0005e0b2 b831
.org 0x5e0b4
	ldrb r2, [r1, #0]	@ 0005e0b4 0a78
.org 0x5e0b6
	lsls r1, r2, #1	@ 0005e0b6 5100
.org 0x5e0b8
	adds r1, r1, r3	@ 0005e0b8 c918
.org 0x5e0ba
	ldrh r1, [r1, #0]	@ 0005e0ba 0988
.org 0x5e0bc
	lsls r1, r1, #2	@ 0005e0bc 8900
.org 0x5e0be
	adds r1, r1, r4	@ 0005e0be 0919
.org 0x5e0c0
	adds r3, r5, #0	@ 0005e0c0 2b1c
.org 0x5e0c2
	adds r3, #113	@ 0005e0c2 7133
.org 0x5e0c4
	movs r4, #0	@ 0005e0c4 0024
.org 0x5e0c6
	ldrsb r4, [r3, r4]	@ 0005e0c6 1c57
.org 0x5e0c8
	ldr r1, [r1, #0]	@ 0005e0c8 0968
.org 0x5e0ca
	lsls r3, r4, #2	@ 0005e0ca a300
.org 0x5e0cc
	adds r3, r3, r1	@ 0005e0cc 5b18
.org 0x5e0ce
	ldr r1, [pc, #56]	@ 0005e0ce 0e49
.org 0x5e0d0
	lsls r2, r2, #2	@ 0005e0d0 9200
.org 0x5e0d2
	adds r2, r2, r1	@ 0005e0d2 5218
.org 0x5e0d4
	ldr r1, [r2, #0]	@ 0005e0d4 1168
.org 0x5e0d6
	adds r1, r1, r4	@ 0005e0d6 0919
.org 0x5e0d8
	ldrb r1, [r1, #0]	@ 0005e0d8 0978
.org 0x5e0da
	lsls r2, r1, #1	@ 0005e0da 4a00
.org 0x5e0dc
	adds r2, r2, r1	@ 0005e0dc 5218
.org 0x5e0de
	lsls r2, r2, #3	@ 0005e0de d200
.org 0x5e0e0
	ldr r1, [r3, #0]	@ 0005e0e0 1968
.org 0x5e0e2
	adds r1, r1, r2	@ 0005e0e2 8918
.org 0x5e0e4
	bl 0x5784	@ 0005e0e4 a7f74efb
.org 0x5e0e8
	ldrb r0, [r5, #18]	@ 0005e0e8 a87c
.org 0x5e0ea
	adds r0, #1	@ 0005e0ea 0130
.org 0x5e0ec
	movs r3, #0	@ 0005e0ec 0023
.org 0x5e0ee
	strb r0, [r5, #18]	@ 0005e0ee a874
.org 0x5e0f0
	ldr r2, [r7, #0]	@ 0005e0f0 3a68
.org 0x5e0f2
	cmp r2, #0	@ 0005e0f2 002a
.org 0x5e0f4
	beq.n 0x5e19a	@ 0005e0f4 51d0
.org 0x5e0f6
	ldrb r0, [r2, #12]	@ 0005e0f6 107b
.org 0x5e0f8
	cmp r0, #1	@ 0005e0f8 0128
.org 0x5e0fa
	bls.n 0x5e10c	@ 0005e0fa 07d9
.org 0x5e0fc
	str r3, [r7, #0]	@ 0005e0fc 3b60
.org 0x5e0fe
	b.n 0x5e19a	@ 0005e0fe 4ce0
.org 0x5e100
	.byte 0xa8,0xa7,0x85,0x08	@ 0005e100 data
.org 0x5e104
	.byte 0x10,0xa9,0x85,0x08	@ 0005e104 data
.org 0x5e108
	.byte 0x44,0xa8,0x85,0x08	@ 0005e108 data
.org 0x5e10c
	adds r0, r2, #0	@ 0005e10c 101c
.org 0x5e10e
	adds r0, #185	@ 0005e10e b930
.org 0x5e110
	ldrb r0, [r0, #0]	@ 0005e110 0078
.org 0x5e112
	cmp r0, #0	@ 0005e112 0028
.org 0x5e114
	beq.n 0x5e19a	@ 0005e114 41d0
.org 0x5e116
	ldr r0, [pc, #200]	@ 0005e116 3248
.org 0x5e118
	ldr r0, [r0, #0]	@ 0005e118 0068
.org 0x5e11a
	ldr r1, [r0, #84]	@ 0005e11a 416d
.org 0x5e11c
	ldr r0, [r2, #84]	@ 0005e11c 506d
.org 0x5e11e
	movs r2, #1	@ 0005e11e 0122
.org 0x5e120
	negs r2, r2	@ 0005e120 5242
.org 0x5e122
	cmp r1, r0	@ 0005e122 8142
.org 0x5e124
	bge.n 0x5e128	@ 0005e124 00da
.org 0x5e126
	movs r2, #1	@ 0005e126 0122
.org 0x5e128
	lsls r0, r2, #3	@ 0005e128 d000
.org 0x5e12a
	adds r0, r0, r2	@ 0005e12a 8018
.org 0x5e12c
	lsls r2, r0, #6	@ 0005e12c 8201
.org 0x5e12e
	str r2, [sp, #0]	@ 0005e12e 0092
.org 0x5e130
	str r3, [sp, #4]	@ 0005e130 0193
.org 0x5e132
	mov r0, r8	@ 0005e132 4046
.org 0x5e134
	cmp r0, #0	@ 0005e134 0028
.org 0x5e136
	beq.n 0x5e150	@ 0005e136 0bd0
.org 0x5e138
	ldr r0, [pc, #168]	@ 0005e138 2a48
.org 0x5e13a
	ldrh r1, [r0, #8]	@ 0005e13a 0189
.org 0x5e13c
	movs r0, #8	@ 0005e13c 0820
.org 0x5e13e
	ands r0, r1	@ 0005e13e 0840
.org 0x5e140
	cmp r0, #0	@ 0005e140 0028
.org 0x5e142
	bne.n 0x5e150	@ 0005e142 05d1
.org 0x5e144
	movs r1, #222	@ 0005e144 de21
.org 0x5e146
	lsls r1, r1, #1	@ 0005e146 4900
.org 0x5e148
	add r1, r8	@ 0005e148 4144
.org 0x5e14a
	ldr r0, [r1, #0]	@ 0005e14a 0868
.org 0x5e14c
	adds r0, r0, r2	@ 0005e14c 8018
.org 0x5e14e
	str r0, [r1, #0]	@ 0005e14e 0860
.org 0x5e150
	ldrb r1, [r5, #18]	@ 0005e150 a97c
.org 0x5e152
	movs r0, #3	@ 0005e152 0320
.org 0x5e154
	ands r0, r1	@ 0005e154 0840
.org 0x5e156
	cmp r0, #0	@ 0005e156 0028
.org 0x5e158
	bne.n 0x5e19a	@ 0005e158 1fd1
.org 0x5e15a
	lsls r0, r6, #1	@ 0005e15a 7000
.org 0x5e15c
	subs r0, #1	@ 0005e15c 0138
.org 0x5e15e
	lsls r0, r0, #15	@ 0005e15e c003
.org 0x5e160
	ldr r2, [r5, #84]	@ 0005e160 6a6d
.org 0x5e162
	adds r2, r2, r0	@ 0005e162 1218
.org 0x5e164
	ldr r3, [pc, #128]	@ 0005e164 204b
.org 0x5e166
	ldr r1, [r3, #0]	@ 0005e166 1968
.org 0x5e168
	ldr r0, [pc, #128]	@ 0005e168 2048
.org 0x5e16a
	muls r1, r0	@ 0005e16a 4143
.org 0x5e16c
	ldr r0, [pc, #128]	@ 0005e16c 2048
.org 0x5e16e
	adds r1, r1, r0	@ 0005e16e 0918
.org 0x5e170
	lsls r1, r1, #1	@ 0005e170 4900
.org 0x5e172
	lsrs r0, r1, #1	@ 0005e172 4808
.org 0x5e174
	str r0, [r3, #0]	@ 0005e174 1860
.org 0x5e176
	lsrs r1, r1, #17	@ 0005e176 490c
.org 0x5e178
	movs r0, #127	@ 0005e178 7f20
.org 0x5e17a
	ands r1, r0	@ 0005e17a 0140
.org 0x5e17c
	movs r0, #64	@ 0005e17c 4020
.org 0x5e17e
	subs r0, r0, r1	@ 0005e17e 401a
.org 0x5e180
	lsls r0, r0, #8	@ 0005e180 0002
.org 0x5e182
	adds r2, r2, r0	@ 0005e182 1218
.org 0x5e184
	str r2, [sp, #8]	@ 0005e184 0292
.org 0x5e186
	adds r0, r5, #0	@ 0005e186 281c
.org 0x5e188
	adds r0, #180	@ 0005e188 b430
.org 0x5e18a
	ldr r1, [r0, #0]	@ 0005e18a 0168
.org 0x5e18c
	add r0, sp, #8	@ 0005e18c 02a8
.org 0x5e18e
	str r1, [r0, #4]	@ 0005e18e 4160
.org 0x5e190
	mov r1, sp	@ 0005e190 6946
.org 0x5e192
	movs r2, #0	@ 0005e192 0022
.org 0x5e194
	movs r3, #0	@ 0005e194 0023
.org 0x5e196
	bl 0xde31c	@ 0005e196 80f0c1f8
.org 0x5e19a
	ldr r2, [r5, #88]	@ 0005e19a aa6d
.org 0x5e19c
	ldr r6, [r5, #92]	@ 0005e19c ee6d
.org 0x5e19e
	adds r1, r2, r6	@ 0005e19e 9119
.org 0x5e1a0
	ldr r0, [r5, #100]	@ 0005e1a0 686e
.org 0x5e1a2
	subs r0, r0, r1	@ 0005e1a2 401a
.org 0x5e1a4
	movs r3, #1	@ 0005e1a4 0123
.org 0x5e1a6
	lsrs r0, r0, #31	@ 0005e1a6 c00f
.org 0x5e1a8
	ldrb r1, [r5, #19]	@ 0005e1a8 e97c
.org 0x5e1aa
	adds r4, r0, r1	@ 0005e1aa 4418
.org 0x5e1ac
	ands r4, r3	@ 0005e1ac 1c40
.org 0x5e1ae
	lsls r0, r4, #1	@ 0005e1ae 6000
.org 0x5e1b0
	subs r0, #1	@ 0005e1b0 0138
.org 0x5e1b2
	ldr r3, [r5, #96]	@ 0005e1b2 2b6e
.org 0x5e1b4
	muls r0, r3	@ 0005e1b4 5843
.org 0x5e1b6
	adds r2, r2, r0	@ 0005e1b6 1218
.org 0x5e1b8
	str r2, [r5, #88]	@ 0005e1b8 aa65
.org 0x5e1ba
	lsls r1, r1, #24	@ 0005e1ba 0906
.org 0x5e1bc
	cmp r1, #0	@ 0005e1bc 0029
.org 0x5e1be
	beq.n 0x5e200	@ 0005e1be 1fd0
.org 0x5e1c0
	ldr r0, [r5, #104]	@ 0005e1c0 a86e
.org 0x5e1c2
	adds r0, r3, r0	@ 0005e1c2 1818
.org 0x5e1c4
	str r0, [r5, #96]	@ 0005e1c4 2866
.org 0x5e1c6
	movs r1, #160	@ 0005e1c6 a021
.org 0x5e1c8
	lsls r1, r1, #2	@ 0005e1c8 8900
.org 0x5e1ca
	cmp r0, r1	@ 0005e1ca 8842
.org 0x5e1cc
	ble.n 0x5e218	@ 0005e1cc 24dd
.org 0x5e1ce
	cmp r4, #0	@ 0005e1ce 002c
.org 0x5e1d0
	beq.n 0x5e1f4	@ 0005e1d0 10d0
.org 0x5e1d2
	ldr r0, [r7, #0]	@ 0005e1d2 3868
.org 0x5e1d4
	cmp r0, #0	@ 0005e1d4 0028
.org 0x5e1d6
	bne.n 0x5e1f4	@ 0005e1d6 0dd1
.org 0x5e1d8
	strb r0, [r5, #13]	@ 0005e1d8 6873
.org 0x5e1da
	strb r0, [r5, #14]	@ 0005e1da a873
.org 0x5e1dc
	strb r0, [r5, #15]	@ 0005e1dc e873
.org 0x5e1de
	b.n 0x5e218	@ 0005e1de 1be0
.org 0x5e1e0
	.byte 0xf0,0xdb,0x02,0x02	@ 0005e1e0 data
.org 0x5e1e4
	.byte 0x10,0xe9,0x02,0x02	@ 0005e1e4 data
.org 0x5e1e8
	.byte 0x38,0xdc,0x02,0x02	@ 0005e1e8 data
.org 0x5e1ec
	.byte 0xfd,0x43,0x03,0x00	@ 0005e1ec data
.org 0x5e1f0
	.byte 0xc3,0x9e,0x26,0x00	@ 0005e1f0 data
.org 0x5e1f4
	movs r0, #160	@ 0005e1f4 a020
.org 0x5e1f6
	lsls r0, r0, #2	@ 0005e1f6 8000
.org 0x5e1f8
	str r0, [r5, #96]	@ 0005e1f8 2866
