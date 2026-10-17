@ FUN_0806a028  entry 0x0806a028  size 1396
.thumb
.org 0x6a028
FUN_0806a028:
	push {r4, r5, r6, r7, lr}	@ 0006a028 f0b5
.org 0x6a02a
	mov r7, sl	@ 0006a02a 5746
.org 0x6a02c
	mov r6, r9	@ 0006a02c 4e46
.org 0x6a02e
	mov r5, r8	@ 0006a02e 4546
.org 0x6a030
	push {r5, r6, r7}	@ 0006a030 e0b4
.org 0x6a032
	sub sp, #84	@ 0006a032 95b0
.org 0x6a034
	adds r7, r0, #0	@ 0006a034 071c
.org 0x6a036
	adds r6, r1, #0	@ 0006a036 0e1c
.org 0x6a038
	ldr r1, [pc, #380]	@ 0006a038 5f49
.org 0x6a03a
	mov r0, sp	@ 0006a03a 6846
.org 0x6a03c
	movs r2, #4	@ 0006a03c 0422
.org 0x6a03e
	bl 0x129258	@ 0006a03e bff00bf9
.org 0x6a042
	add r5, sp, #4	@ 0006a042 01ad
.org 0x6a044
	ldr r1, [pc, #372]	@ 0006a044 5d49
.org 0x6a046
	adds r0, r5, #0	@ 0006a046 281c
.org 0x6a048
	movs r2, #4	@ 0006a048 0422
.org 0x6a04a
	bl 0x129258	@ 0006a04a bff005f9
.org 0x6a04e
	adds r0, r7, #0	@ 0006a04e 381c
.org 0x6a050
	adds r0, #180	@ 0006a050 b430
.org 0x6a052
	ldr r0, [r0, #0]	@ 0006a052 0068
.org 0x6a054
	str r0, [sp, #32]	@ 0006a054 0890
.org 0x6a056
	adds r0, r7, #0	@ 0006a056 381c
.org 0x6a058
	adds r0, #184	@ 0006a058 b830
.org 0x6a05a
	ldr r0, [r0, #0]	@ 0006a05a 0068
.org 0x6a05c
	str r0, [sp, #36]	@ 0006a05c 0990
.org 0x6a05e
	adds r0, r7, #0	@ 0006a05e 381c
.org 0x6a060
	adds r0, #188	@ 0006a060 bc30
.org 0x6a062
	ldr r0, [r0, #0]	@ 0006a062 0068
.org 0x6a064
	str r0, [sp, #40]	@ 0006a064 0a90
.org 0x6a066
	adds r0, r7, #0	@ 0006a066 381c
.org 0x6a068
	adds r0, #192	@ 0006a068 c030
.org 0x6a06a
	ldr r0, [r0, #0]	@ 0006a06a 0068
.org 0x6a06c
	str r0, [sp, #44]	@ 0006a06c 0b90
.org 0x6a06e
	ldrb r0, [r7, #10]	@ 0006a06e b87a
.org 0x6a070
	lsrs r0, r0, #4	@ 0006a070 0009
.org 0x6a072
	str r0, [sp, #48]	@ 0006a072 0c90
.org 0x6a074
	movs r0, #1	@ 0006a074 0120
.org 0x6a076
	ldr r1, [sp, #48]	@ 0006a076 0c99
.org 0x6a078
	ands r1, r0	@ 0006a078 0140
.org 0x6a07a
	str r1, [sp, #48]	@ 0006a07a 0c91
.org 0x6a07c
	adds r0, r7, #0	@ 0006a07c 381c
.org 0x6a07e
	adds r0, #196	@ 0006a07e c430
.org 0x6a080
	ldrb r0, [r0, #0]	@ 0006a080 0078
.org 0x6a082
	str r0, [sp, #64]	@ 0006a082 1090
.org 0x6a084
	ldr r0, [r7, #84]	@ 0006a084 786d
.org 0x6a086
	ldr r1, [r7, #88]	@ 0006a086 b96d
.org 0x6a088
	str r0, [sp, #8]	@ 0006a088 0290
.org 0x6a08a
	str r1, [sp, #12]	@ 0006a08a 0391
.org 0x6a08c
	add r4, sp, #8	@ 0006a08c 02ac
.org 0x6a08e
	adds r0, r7, #0	@ 0006a08e 381c
.org 0x6a090
	adds r1, r4, #0	@ 0006a090 211c
.org 0x6a092
	adds r2, r6, #0	@ 0006a092 321c
.org 0x6a094
	ldr r3, [sp, #64]	@ 0006a094 109b
.org 0x6a096
	bl 0x69f00	@ 0006a096 fff733ff
.org 0x6a09a
	cmp r0, #0	@ 0006a09a 0028
.org 0x6a09c
	beq.n 0x6a0b0	@ 0006a09c 08d0
.org 0x6a09e
	ldr r2, [sp, #48]	@ 0006a09e 0c9a
.org 0x6a0a0
	lsls r0, r2, #1	@ 0006a0a0 5000
.org 0x6a0a2
	subs r6, r0, #1	@ 0006a0a2 461e
.org 0x6a0a4
	lsls r0, r6, #6	@ 0006a0a4 b001
.org 0x6a0a6
	ldr r3, [sp, #64]	@ 0006a0a6 109b
.org 0x6a0a8
	subs r0, r3, r0	@ 0006a0a8 181a
.org 0x6a0aa
	lsls r0, r0, #24	@ 0006a0aa 0006
.org 0x6a0ac
	lsrs r0, r0, #24	@ 0006a0ac 000e
.org 0x6a0ae
	str r0, [sp, #64]	@ 0006a0ae 1090
.org 0x6a0b0
	ldr r2, [pc, #268]	@ 0006a0b0 434a
.org 0x6a0b2
	ldr r4, [sp, #64]	@ 0006a0b2 109c
.org 0x6a0b4
	adds r4, #64	@ 0006a0b4 4034
.org 0x6a0b6
	str r4, [sp, #68]	@ 0006a0b6 1194
.org 0x6a0b8
	lsls r0, r4, #24	@ 0006a0b8 2006
.org 0x6a0ba
	lsrs r0, r0, #23	@ 0006a0ba c00d
.org 0x6a0bc
	adds r0, r0, r2	@ 0006a0bc 8018
.org 0x6a0be
	movs r5, #0	@ 0006a0be 0025
.org 0x6a0c0
	ldrsh r0, [r0, r5]	@ 0006a0c0 405f
.org 0x6a0c2
	lsls r1, r0, #2	@ 0006a0c2 8100
.org 0x6a0c4
	adds r1, r1, r0	@ 0006a0c4 0918
.org 0x6a0c6
	lsls r1, r1, #2	@ 0006a0c6 8900
.org 0x6a0c8
	ldr r0, [sp, #8]	@ 0006a0c8 0298
.org 0x6a0ca
	adds r0, r0, r1	@ 0006a0ca 4018
.org 0x6a0cc
	str r0, [sp, #16]	@ 0006a0cc 0490
.org 0x6a0ce
	ldr r0, [sp, #64]	@ 0006a0ce 1098
.org 0x6a0d0
	lsls r0, r0, #1	@ 0006a0d0 4000
.org 0x6a0d2
	mov sl, r0	@ 0006a0d2 8246
.org 0x6a0d4
	add r2, sl	@ 0006a0d4 5244
.org 0x6a0d6
	movs r3, #0	@ 0006a0d6 0023
.org 0x6a0d8
	ldrsh r1, [r2, r3]	@ 0006a0d8 d15e
.org 0x6a0da
	lsls r0, r1, #2	@ 0006a0da 8800
.org 0x6a0dc
	adds r0, r0, r1	@ 0006a0dc 4018
.org 0x6a0de
	lsls r0, r0, #2	@ 0006a0de 8000
.org 0x6a0e0
	ldr r1, [sp, #12]	@ 0006a0e0 0399
.org 0x6a0e2
	adds r1, r1, r0	@ 0006a0e2 0918
.org 0x6a0e4
	add r4, sp, #16	@ 0006a0e4 04ac
.org 0x6a0e6
	str r1, [r4, #4]	@ 0006a0e6 6160
.org 0x6a0e8
	ldr r5, [sp, #64]	@ 0006a0e8 109d
.org 0x6a0ea
	str r5, [sp, #60]	@ 0006a0ea 0f95
.org 0x6a0ec
	adds r0, r7, #0	@ 0006a0ec 381c
.org 0x6a0ee
	movs r1, #1	@ 0006a0ee 0121
.org 0x6a0f0
	bl 0x6a7c8	@ 0006a0f0 00f06afb
.org 0x6a0f4
	adds r4, r0, #0	@ 0006a0f4 041c
.org 0x6a0f6
	adds r0, r7, #0	@ 0006a0f6 381c
.org 0x6a0f8
	movs r1, #0	@ 0006a0f8 0021
.org 0x6a0fa
	bl 0x6a7c8	@ 0006a0fa 00f065fb
.org 0x6a0fe
	movs r1, #216	@ 0006a0fe d821
.org 0x6a100
	adds r1, r1, r7	@ 0006a100 c919
.org 0x6a102
	mov r8, r1	@ 0006a102 8846
.org 0x6a104
	ldr r1, [sp, #16]	@ 0006a104 0499
.org 0x6a106
	ldr r2, [pc, #188]	@ 0006a106 2f4a
.org 0x6a108
	adds r1, r1, r2	@ 0006a108 8918
.org 0x6a10a
	mov r3, r8	@ 0006a10a 4346
.org 0x6a10c
	ldr r5, [r3, #0]	@ 0006a10c 1d68
.org 0x6a10e
	subs r5, r5, r1	@ 0006a10e 6d1a
.org 0x6a110
	ldr r6, [pc, #180]	@ 0006a110 2d4e
.org 0x6a112
	adds r5, r5, r6	@ 0006a112 ad19
.org 0x6a114
	subs r4, r4, r0	@ 0006a114 241a
.org 0x6a116
	adds r4, #1	@ 0006a116 0134
.org 0x6a118
	lsrs r0, r4, #31	@ 0006a118 e00f
.org 0x6a11a
	adds r4, r4, r0	@ 0006a11a 2418
.org 0x6a11c
	asrs r4, r4, #1	@ 0006a11c 6410
.org 0x6a11e
	adds r5, r5, r4	@ 0006a11e 2d19
.org 0x6a120
	adds r0, r7, #0	@ 0006a120 381c
.org 0x6a122
	movs r1, #1	@ 0006a122 0121
.org 0x6a124
	bl 0x6a7c8	@ 0006a124 00f050fb
.org 0x6a128
	adds r4, r0, #0	@ 0006a128 041c
.org 0x6a12a
	adds r0, r7, #0	@ 0006a12a 381c
.org 0x6a12c
	movs r1, #0	@ 0006a12c 0021
.org 0x6a12e
	bl 0x6a7c8	@ 0006a12e 00f04bfb
.org 0x6a132
	subs r4, r4, r0	@ 0006a132 241a
.org 0x6a134
	adds r4, #1	@ 0006a134 0134
.org 0x6a136
	lsrs r0, r4, #31	@ 0006a136 e00f
.org 0x6a138
	adds r4, r4, r0	@ 0006a138 2418
.org 0x6a13a
	asrs r4, r4, #1	@ 0006a13a 6410
.org 0x6a13c
	adds r4, r4, r6	@ 0006a13c a419
.org 0x6a13e
	lsls r4, r4, #1	@ 0006a13e 6400
.org 0x6a140
	ldr r0, [sp, #68]	@ 0006a140 1198
.org 0x6a142
	str r0, [sp, #72]	@ 0006a142 1290
.org 0x6a144
	mov r1, sl	@ 0006a144 5146
.org 0x6a146
	str r1, [sp, #80]	@ 0006a146 1491
.org 0x6a148
	mov r2, r8	@ 0006a148 4246
.org 0x6a14a
	str r2, [sp, #76]	@ 0006a14a 1392
.org 0x6a14c
	cmp r5, r4	@ 0006a14c a542
.org 0x6a14e
	bls.n 0x6a1cc	@ 0006a14e 3dd9
.org 0x6a150
	ldr r3, [sp, #48]	@ 0006a150 0c9b
.org 0x6a152
	lsls r0, r3, #1	@ 0006a152 5800
.org 0x6a154
	subs r6, r0, #1	@ 0006a154 461e
.org 0x6a156
	ldr r4, [sp, #60]	@ 0006a156 0f9c
.org 0x6a158
	lsrs r5, r4, #6	@ 0006a158 a509
.org 0x6a15a
	movs r4, #3	@ 0006a15a 0324
.org 0x6a15c
	ands r5, r4	@ 0006a15c 2540
.org 0x6a15e
	mov r1, sp	@ 0006a15e 6946
.org 0x6a160
	adds r0, r1, r5	@ 0006a160 4819
.org 0x6a162
	ldrb r1, [r0, #0]	@ 0006a162 0178
.org 0x6a164
	adds r0, r7, #0	@ 0006a164 381c
.org 0x6a166
	bl 0x6a7c8	@ 0006a166 00f02ffb
.org 0x6a16a
	mov r1, sp	@ 0006a16a 6946
.org 0x6a16c
	adds r1, r1, r5	@ 0006a16c 4919
.org 0x6a16e
	adds r1, #4	@ 0006a16e 0431
.org 0x6a170
	movs r2, #0	@ 0006a170 0022
.org 0x6a172
	ldrsb r2, [r1, r2]	@ 0006a172 8a56
.org 0x6a174
	lsls r1, r2, #1	@ 0006a174 5100
.org 0x6a176
	adds r1, r1, r2	@ 0006a176 8918
.org 0x6a178
	lsls r1, r1, #11	@ 0006a178 c902
.org 0x6a17a
	subs r0, r0, r1	@ 0006a17a 401a
.org 0x6a17c
	str r0, [sp, #16]	@ 0006a17c 0490
.org 0x6a17e
	lsls r1, r6, #6	@ 0006a17e b101
.org 0x6a180
	ldr r2, [sp, #60]	@ 0006a180 0f9a
.org 0x6a182
	subs r1, r2, r1	@ 0006a182 511a
.org 0x6a184
	lsls r1, r1, #24	@ 0006a184 0906
.org 0x6a186
	lsrs r5, r1, #30	@ 0006a186 8d0f
.org 0x6a188
	ands r5, r4	@ 0006a188 2540
.org 0x6a18a
	ldr r1, [sp, #8]	@ 0006a18a 0299
.org 0x6a18c
	subs r4, r1, r0	@ 0006a18c 0c1a
.org 0x6a18e
	adds r1, r4, #0	@ 0006a18e 211c
.org 0x6a190
	muls r1, r4	@ 0006a190 6143
.org 0x6a192
	movs r0, #200	@ 0006a192 c820
.org 0x6a194
	lsls r0, r0, #17	@ 0006a194 4004
.org 0x6a196
	subs r0, r0, r1	@ 0006a196 401a
.org 0x6a198
	bl 0x128bf4	@ 0006a198 bef02cfd
.org 0x6a19c
	lsls r0, r0, #16	@ 0006a19c 0004
.org 0x6a19e
	lsrs r0, r0, #16	@ 0006a19e 000c
.org 0x6a1a0
	mov r1, sp	@ 0006a1a0 6946
.org 0x6a1a2
	adds r1, r1, r5	@ 0006a1a2 4919
.org 0x6a1a4
	adds r1, #4	@ 0006a1a4 0431
.org 0x6a1a6
	ldrb r1, [r1, #0]	@ 0006a1a6 0978
.org 0x6a1a8
	lsls r1, r1, #24	@ 0006a1a8 0906
.org 0x6a1aa
	asrs r1, r1, #24	@ 0006a1aa 0916
.org 0x6a1ac
	muls r1, r0	@ 0006a1ac 4143
.org 0x6a1ae
	ldr r0, [sp, #12]	@ 0006a1ae 0398
.org 0x6a1b0
	adds r0, r0, r1	@ 0006a1b0 4018
.org 0x6a1b2
	str r0, [sp, #20]	@ 0006a1b2 0590
.org 0x6a1b4
	b.n 0x6a284	@ 0006a1b4 66e0
.org 0x6a1b6
	.byte 0x00	@ 0006a1b6 data
.org 0x6a1b7
	.byte 0x00	@ 0006a1b7 data
.org 0x6a1b8
	.byte 0xf2,0x98,0x12,0x08	@ 0006a1b8 data
.org 0x6a1bc
	.byte 0xf6,0x98,0x12,0x08	@ 0006a1bc data
.org 0x6a1c0
	.byte 0x0c,0x93,0x12,0x08	@ 0006a1c0 data
.org 0x6a1c4
	.byte 0x00,0x98,0xff,0xff	@ 0006a1c4 data
.org 0x6a1c8
	.byte 0x00,0xe8,0xff,0xff	@ 0006a1c8 data
.org 0x6a1cc
	adds r0, r7, #0	@ 0006a1cc 381c
.org 0x6a1ce
	movs r1, #3	@ 0006a1ce 0321
.org 0x6a1d0
	bl 0x6a7c8	@ 0006a1d0 00f0fafa
.org 0x6a1d4
	adds r4, r0, #0	@ 0006a1d4 041c
.org 0x6a1d6
	adds r0, r7, #0	@ 0006a1d6 381c
.org 0x6a1d8
	movs r1, #2	@ 0006a1d8 0221
.org 0x6a1da
	bl 0x6a7c8	@ 0006a1da 00f0f5fa
.org 0x6a1de
	adds r1, r7, #0	@ 0006a1de 391c
.org 0x6a1e0
	adds r1, #220	@ 0006a1e0 dc31
.org 0x6a1e2
	ldr r2, [sp, #20]	@ 0006a1e2 059a
.org 0x6a1e4
	ldr r5, [r1, #0]	@ 0006a1e4 0d68
.org 0x6a1e6
	subs r5, r5, r2	@ 0006a1e6 ad1a
.org 0x6a1e8
	movs r1, #160	@ 0006a1e8 a021
.org 0x6a1ea
	lsls r1, r1, #6	@ 0006a1ea 8901
.org 0x6a1ec
	adds r5, r5, r1	@ 0006a1ec 6d18
.org 0x6a1ee
	subs r4, r4, r0	@ 0006a1ee 241a
.org 0x6a1f0
	adds r4, #1	@ 0006a1f0 0134
.org 0x6a1f2
	lsrs r0, r4, #31	@ 0006a1f2 e00f
.org 0x6a1f4
	adds r4, r4, r0	@ 0006a1f4 2418
.org 0x6a1f6
	asrs r4, r4, #1	@ 0006a1f6 6410
.org 0x6a1f8
	adds r5, r5, r4	@ 0006a1f8 2d19
.org 0x6a1fa
	adds r0, r7, #0	@ 0006a1fa 381c
.org 0x6a1fc
	movs r1, #3	@ 0006a1fc 0321
.org 0x6a1fe
	bl 0x6a7c8	@ 0006a1fe 00f0e3fa
.org 0x6a202
	adds r4, r0, #0	@ 0006a202 041c
.org 0x6a204
	adds r0, r7, #0	@ 0006a204 381c
.org 0x6a206
	movs r1, #2	@ 0006a206 0221
.org 0x6a208
	bl 0x6a7c8	@ 0006a208 00f0defa
.org 0x6a20c
	subs r4, r4, r0	@ 0006a20c 241a
.org 0x6a20e
	adds r4, #1	@ 0006a20e 0134
.org 0x6a210
	lsrs r0, r4, #31	@ 0006a210 e00f
.org 0x6a212
	adds r4, r4, r0	@ 0006a212 2418
.org 0x6a214
	asrs r4, r4, #1	@ 0006a214 6410
.org 0x6a216
	ldr r2, [pc, #416]	@ 0006a216 684a
.org 0x6a218
	adds r4, r4, r2	@ 0006a218 a418
.org 0x6a21a
	lsls r4, r4, #1	@ 0006a21a 6400
.org 0x6a21c
	cmp r5, r4	@ 0006a21c a542
.org 0x6a21e
	bls.n 0x6a2a6	@ 0006a21e 42d9
.org 0x6a220
	ldr r3, [sp, #48]	@ 0006a220 0c9b
.org 0x6a222
	lsls r0, r3, #1	@ 0006a222 5800
.org 0x6a224
	subs r6, r0, #1	@ 0006a224 461e
.org 0x6a226
	ldr r4, [sp, #60]	@ 0006a226 0f9c
.org 0x6a228
	lsrs r5, r4, #6	@ 0006a228 a509
.org 0x6a22a
	movs r4, #3	@ 0006a22a 0324
.org 0x6a22c
	ands r5, r4	@ 0006a22c 2540
.org 0x6a22e
	mov r1, sp	@ 0006a22e 6946
.org 0x6a230
	adds r0, r1, r5	@ 0006a230 4819
.org 0x6a232
	ldrb r1, [r0, #0]	@ 0006a232 0178
.org 0x6a234
	adds r0, r7, #0	@ 0006a234 381c
.org 0x6a236
	bl 0x6a7c8	@ 0006a236 00f0c7fa
.org 0x6a23a
	mov r1, sp	@ 0006a23a 6946
.org 0x6a23c
	adds r1, r1, r5	@ 0006a23c 4919
.org 0x6a23e
	adds r1, #4	@ 0006a23e 0431
.org 0x6a240
	movs r2, #0	@ 0006a240 0022
.org 0x6a242
	ldrsb r2, [r1, r2]	@ 0006a242 8a56
.org 0x6a244
	lsls r1, r2, #1	@ 0006a244 5100
.org 0x6a246
	adds r1, r1, r2	@ 0006a246 8918
.org 0x6a248
	lsls r1, r1, #11	@ 0006a248 c902
.org 0x6a24a
	subs r0, r0, r1	@ 0006a24a 401a
.org 0x6a24c
	str r0, [sp, #20]	@ 0006a24c 0590
.org 0x6a24e
	lsls r1, r6, #6	@ 0006a24e b101
.org 0x6a250
	ldr r2, [sp, #60]	@ 0006a250 0f9a
.org 0x6a252
	subs r1, r2, r1	@ 0006a252 511a
.org 0x6a254
	lsls r1, r1, #24	@ 0006a254 0906
.org 0x6a256
	lsrs r5, r1, #30	@ 0006a256 8d0f
.org 0x6a258
	ands r5, r4	@ 0006a258 2540
.org 0x6a25a
	ldr r1, [sp, #12]	@ 0006a25a 0399
.org 0x6a25c
	subs r4, r1, r0	@ 0006a25c 0c1a
.org 0x6a25e
	adds r1, r4, #0	@ 0006a25e 211c
.org 0x6a260
	muls r1, r4	@ 0006a260 6143
.org 0x6a262
	movs r0, #200	@ 0006a262 c820
.org 0x6a264
	lsls r0, r0, #17	@ 0006a264 4004
.org 0x6a266
	subs r0, r0, r1	@ 0006a266 401a
.org 0x6a268
	bl 0x128bf4	@ 0006a268 bef0c4fc
.org 0x6a26c
	lsls r0, r0, #16	@ 0006a26c 0004
.org 0x6a26e
	lsrs r0, r0, #16	@ 0006a26e 000c
.org 0x6a270
	mov r1, sp	@ 0006a270 6946
.org 0x6a272
	adds r1, r1, r5	@ 0006a272 4919
.org 0x6a274
	adds r1, #4	@ 0006a274 0431
.org 0x6a276
	ldrb r1, [r1, #0]	@ 0006a276 0978
.org 0x6a278
	lsls r1, r1, #24	@ 0006a278 0906
.org 0x6a27a
	asrs r1, r1, #24	@ 0006a27a 0916
.org 0x6a27c
	muls r1, r0	@ 0006a27c 4143
.org 0x6a27e
	ldr r0, [sp, #8]	@ 0006a27e 0298
.org 0x6a280
	adds r0, r0, r1	@ 0006a280 4018
.org 0x6a282
	str r0, [sp, #16]	@ 0006a282 0490
.org 0x6a284
	adds r0, r4, #0	@ 0006a284 201c
.org 0x6a286
	cmp r4, #0	@ 0006a286 002c
.org 0x6a288
	bge.n 0x6a28c	@ 0006a288 00da
.org 0x6a28a
	negs r0, r4	@ 0006a28a 6042
.org 0x6a28c
	movs r1, #160	@ 0006a28c a021
.org 0x6a28e
	lsls r1, r1, #5	@ 0006a28e 4901
.org 0x6a290
	subs r0, r1, r0	@ 0006a290 081a
.org 0x6a292
	lsls r0, r0, #6	@ 0006a292 8001
.org 0x6a294
	negs r0, r0	@ 0006a294 4042
.org 0x6a296
	bl 0x128fb8	@ 0006a296 bef08ffe
.org 0x6a29a
	muls r0, r6	@ 0006a29a 7043
.org 0x6a29c
	ldr r3, [sp, #60]	@ 0006a29c 0f9b
.org 0x6a29e
	adds r0, r3, r0	@ 0006a29e 1818
.org 0x6a2a0
	lsls r0, r0, #24	@ 0006a2a0 0006
.org 0x6a2a2
	lsrs r0, r0, #24	@ 0006a2a2 000e
.org 0x6a2a4
	str r0, [sp, #60]	@ 0006a2a4 0f90
.org 0x6a2a6
	ldr r2, [pc, #276]	@ 0006a2a6 454a
.org 0x6a2a8
	ldr r4, [sp, #72]	@ 0006a2a8 129c
.org 0x6a2aa
	lsls r0, r4, #24	@ 0006a2aa 2006
.org 0x6a2ac
	lsrs r0, r0, #23	@ 0006a2ac c00d
.org 0x6a2ae
	adds r0, r0, r2	@ 0006a2ae 8018
.org 0x6a2b0
	movs r5, #0	@ 0006a2b0 0025
.org 0x6a2b2
	ldrsh r1, [r0, r5]	@ 0006a2b2 415f
.org 0x6a2b4
	lsls r0, r1, #2	@ 0006a2b4 8800
.org 0x6a2b6
	adds r0, r0, r1	@ 0006a2b6 4018
.org 0x6a2b8
	lsls r0, r0, #10	@ 0006a2b8 8002
.org 0x6a2ba
	negs r0, r0	@ 0006a2ba 4042
.org 0x6a2bc
	cmp r0, #0	@ 0006a2bc 0028
.org 0x6a2be
	bge.n 0x6a2c2	@ 0006a2be 00da
.org 0x6a2c0
	adds r0, #255	@ 0006a2c0 ff30
.org 0x6a2c2
	asrs r1, r0, #8	@ 0006a2c2 0112
.org 0x6a2c4
	ldr r0, [sp, #8]	@ 0006a2c4 0298
.org 0x6a2c6
	adds r0, r0, r1	@ 0006a2c6 4018
.org 0x6a2c8
	str r0, [sp, #24]	@ 0006a2c8 0690
.org 0x6a2ca
	add r0, sp, #8	@ 0006a2ca 02a8
.org 0x6a2cc
	mov sl, r0	@ 0006a2cc 8246
.org 0x6a2ce
	ldr r1, [sp, #80]	@ 0006a2ce 1499
.org 0x6a2d0
	adds r0, r1, r2	@ 0006a2d0 8818
.org 0x6a2d2
	movs r2, #0	@ 0006a2d2 0022
.org 0x6a2d4
	ldrsh r1, [r0, r2]	@ 0006a2d4 815e
.org 0x6a2d6
	lsls r0, r1, #2	@ 0006a2d6 8800
.org 0x6a2d8
	adds r0, r0, r1	@ 0006a2d8 4018
.org 0x6a2da
	lsls r0, r0, #10	@ 0006a2da 8002
.org 0x6a2dc
	negs r0, r0	@ 0006a2dc 4042
.org 0x6a2de
	cmp r0, #0	@ 0006a2de 0028
.org 0x6a2e0
	bge.n 0x6a2e4	@ 0006a2e0 00da
.org 0x6a2e2
	adds r0, #255	@ 0006a2e2 ff30
.org 0x6a2e4
	asrs r1, r0, #8	@ 0006a2e4 0112
.org 0x6a2e6
	mov r3, sl	@ 0006a2e6 5346
.org 0x6a2e8
	ldr r0, [r3, #4]	@ 0006a2e8 5868
.org 0x6a2ea
	adds r0, r0, r1	@ 0006a2ea 4018
.org 0x6a2ec
	add r4, sp, #24	@ 0006a2ec 06ac
.org 0x6a2ee
	mov r8, r4	@ 0006a2ee a046
.org 0x6a2f0
	str r0, [r4, #4]	@ 0006a2f0 6060
.org 0x6a2f2
	ldr r5, [sp, #64]	@ 0006a2f2 109d
.org 0x6a2f4
	mov r9, r5	@ 0006a2f4 a946
.org 0x6a2f6
	adds r0, r7, #0	@ 0006a2f6 381c
.org 0x6a2f8
	movs r1, #1	@ 0006a2f8 0121
.org 0x6a2fa
	bl 0x6a7c8	@ 0006a2fa 00f065fa
.org 0x6a2fe
	adds r4, r0, #0	@ 0006a2fe 041c
.org 0x6a300
	adds r0, r7, #0	@ 0006a300 381c
.org 0x6a302
	movs r1, #0	@ 0006a302 0021
.org 0x6a304
	bl 0x6a7c8	@ 0006a304 00f060fa
.org 0x6a308
	ldr r1, [sp, #24]	@ 0006a308 0699
.org 0x6a30a
	ldr r2, [pc, #180]	@ 0006a30a 2d4a
.org 0x6a30c
	adds r1, r1, r2	@ 0006a30c 8918
.org 0x6a30e
	ldr r3, [sp, #76]	@ 0006a30e 139b
.org 0x6a310
	ldr r5, [r3, #0]	@ 0006a310 1d68
.org 0x6a312
	subs r5, r5, r1	@ 0006a312 6d1a
.org 0x6a314
	ldr r6, [pc, #160]	@ 0006a314 284e
.org 0x6a316
	adds r5, r5, r6	@ 0006a316 ad19
.org 0x6a318
	subs r4, r4, r0	@ 0006a318 241a
.org 0x6a31a
	adds r4, #1	@ 0006a31a 0134
.org 0x6a31c
	lsrs r0, r4, #31	@ 0006a31c e00f
.org 0x6a31e
	adds r4, r4, r0	@ 0006a31e 2418
.org 0x6a320
	asrs r4, r4, #1	@ 0006a320 6410
.org 0x6a322
	adds r5, r5, r4	@ 0006a322 2d19
.org 0x6a324
	adds r0, r7, #0	@ 0006a324 381c
.org 0x6a326
	movs r1, #1	@ 0006a326 0121
.org 0x6a328
	bl 0x6a7c8	@ 0006a328 00f04efa
.org 0x6a32c
	adds r4, r0, #0	@ 0006a32c 041c
.org 0x6a32e
	adds r0, r7, #0	@ 0006a32e 381c
.org 0x6a330
	movs r1, #0	@ 0006a330 0021
.org 0x6a332
	bl 0x6a7c8	@ 0006a332 00f049fa
.org 0x6a336
	subs r4, r4, r0	@ 0006a336 241a
.org 0x6a338
	adds r4, #1	@ 0006a338 0134
.org 0x6a33a
	lsrs r0, r4, #31	@ 0006a33a e00f
.org 0x6a33c
	adds r4, r4, r0	@ 0006a33c 2418
.org 0x6a33e
	asrs r4, r4, #1	@ 0006a33e 6410
.org 0x6a340
	adds r4, r4, r6	@ 0006a340 a419
.org 0x6a342
	lsls r4, r4, #1	@ 0006a342 6400
.org 0x6a344
	cmp r5, r4	@ 0006a344 a542
.org 0x6a346
	bls.n 0x6a3c4	@ 0006a346 3dd9
.org 0x6a348
	ldr r4, [sp, #48]	@ 0006a348 0c9c
.org 0x6a34a
	lsls r0, r4, #1	@ 0006a34a 6000
.org 0x6a34c
	subs r6, r0, #1	@ 0006a34c 461e
.org 0x6a34e
	mov r0, r9	@ 0006a34e 4846
.org 0x6a350
	adds r0, #128	@ 0006a350 8030
.org 0x6a352
	lsls r0, r0, #24	@ 0006a352 0006
.org 0x6a354
	lsrs r5, r0, #30	@ 0006a354 850f
.org 0x6a356
	mov r1, sp	@ 0006a356 6946
.org 0x6a358
	adds r0, r1, r5	@ 0006a358 4819
.org 0x6a35a
	ldrb r1, [r0, #0]	@ 0006a35a 0178
.org 0x6a35c
	adds r0, r7, #0	@ 0006a35c 381c
.org 0x6a35e
	bl 0x6a7c8	@ 0006a35e 00f033fa
.org 0x6a362
	mov r1, sp	@ 0006a362 6946
.org 0x6a364
	adds r1, r1, r5	@ 0006a364 4919
.org 0x6a366
	adds r1, #4	@ 0006a366 0431
.org 0x6a368
	movs r2, #0	@ 0006a368 0022
.org 0x6a36a
	ldrsb r2, [r1, r2]	@ 0006a36a 8a56
.org 0x6a36c
	lsls r1, r2, #1	@ 0006a36c 5100
.org 0x6a36e
	adds r1, r1, r2	@ 0006a36e 8918
.org 0x6a370
	lsls r1, r1, #11	@ 0006a370 c902
.org 0x6a372
	subs r0, r0, r1	@ 0006a372 401a
.org 0x6a374
	str r0, [sp, #24]	@ 0006a374 0690
.org 0x6a376
	lsls r1, r6, #6	@ 0006a376 b101
.org 0x6a378
	add r1, r9	@ 0006a378 4944
.org 0x6a37a
	lsls r1, r1, #24	@ 0006a37a 0906
.org 0x6a37c
	lsrs r5, r1, #30	@ 0006a37c 8d0f
.org 0x6a37e
	ldr r1, [sp, #8]	@ 0006a37e 0299
.org 0x6a380
	subs r4, r1, r0	@ 0006a380 0c1a
.org 0x6a382
	adds r1, r4, #0	@ 0006a382 211c
.org 0x6a384
	muls r1, r4	@ 0006a384 6143
.org 0x6a386
	movs r0, #200	@ 0006a386 c820
.org 0x6a388
	lsls r0, r0, #17	@ 0006a388 4004
.org 0x6a38a
	subs r0, r0, r1	@ 0006a38a 401a
.org 0x6a38c
	bl 0x128bf4	@ 0006a38c bef032fc
.org 0x6a390
	lsls r0, r0, #16	@ 0006a390 0004
.org 0x6a392
	lsrs r0, r0, #16	@ 0006a392 000c
.org 0x6a394
	negs r0, r0	@ 0006a394 4042
.org 0x6a396
	mov r1, sp	@ 0006a396 6946
.org 0x6a398
	adds r1, r1, r5	@ 0006a398 4919
.org 0x6a39a
	adds r1, #4	@ 0006a39a 0431
.org 0x6a39c
	ldrb r1, [r1, #0]	@ 0006a39c 0978
.org 0x6a39e
	lsls r1, r1, #24	@ 0006a39e 0906
.org 0x6a3a0
	asrs r1, r1, #24	@ 0006a3a0 0916
.org 0x6a3a2
	muls r1, r0	@ 0006a3a2 4143
.org 0x6a3a4
	mov r2, sl	@ 0006a3a4 5246
.org 0x6a3a6
	ldr r0, [r2, #4]	@ 0006a3a6 5068
.org 0x6a3a8
	adds r0, r0, r1	@ 0006a3a8 4018
.org 0x6a3aa
	mov r3, r8	@ 0006a3aa 4346
.org 0x6a3ac
	str r0, [r3, #4]	@ 0006a3ac 5860
.org 0x6a3ae
	adds r1, r4, #0	@ 0006a3ae 211c
.org 0x6a3b0
	cmp r4, #0	@ 0006a3b0 002c
.org 0x6a3b2
	bge.n 0x6a486	@ 0006a3b2 68da
.org 0x6a3b4
	negs r1, r4	@ 0006a3b4 6142
.org 0x6a3b6
	b.n 0x6a486	@ 0006a3b6 66e0
.org 0x6a3b8
	.byte 0x00,0xe8,0xff,0xff	@ 0006a3b8 data
.org 0x6a3bc
	.byte 0x0c,0x93,0x12,0x08	@ 0006a3bc data
.org 0x6a3c0
	.byte 0x00,0x98,0xff,0xff	@ 0006a3c0 data
.org 0x6a3c4
	adds r0, r7, #0	@ 0006a3c4 381c
.org 0x6a3c6
	movs r1, #3	@ 0006a3c6 0321
.org 0x6a3c8
	bl 0x6a7c8	@ 0006a3c8 00f0fef9
.org 0x6a3cc
	adds r4, r0, #0	@ 0006a3cc 041c
.org 0x6a3ce
	adds r0, r7, #0	@ 0006a3ce 381c
.org 0x6a3d0
	movs r1, #2	@ 0006a3d0 0221
.org 0x6a3d2
	bl 0x6a7c8	@ 0006a3d2 00f0f9f9
.org 0x6a3d6
	adds r1, r7, #0	@ 0006a3d6 391c
.org 0x6a3d8
	adds r1, #220	@ 0006a3d8 dc31
.org 0x6a3da
	mov r5, r8	@ 0006a3da 4546
.org 0x6a3dc
	ldr r2, [r5, #4]	@ 0006a3dc 6a68
.org 0x6a3de
	ldr r5, [r1, #0]	@ 0006a3de 0d68
.org 0x6a3e0
	subs r5, r5, r2	@ 0006a3e0 ad1a
.org 0x6a3e2
	movs r1, #160	@ 0006a3e2 a021
.org 0x6a3e4
	lsls r1, r1, #6	@ 0006a3e4 8901
.org 0x6a3e6
	adds r5, r5, r1	@ 0006a3e6 6d18
.org 0x6a3e8
	subs r4, r4, r0	@ 0006a3e8 241a
.org 0x6a3ea
	adds r4, #1	@ 0006a3ea 0134
.org 0x6a3ec
	lsrs r0, r4, #31	@ 0006a3ec e00f
.org 0x6a3ee
	adds r4, r4, r0	@ 0006a3ee 2418
.org 0x6a3f0
	asrs r4, r4, #1	@ 0006a3f0 6410
.org 0x6a3f2
	adds r5, r5, r4	@ 0006a3f2 2d19
.org 0x6a3f4
	adds r0, r7, #0	@ 0006a3f4 381c
.org 0x6a3f6
	movs r1, #3	@ 0006a3f6 0321
.org 0x6a3f8
	bl 0x6a7c8	@ 0006a3f8 00f0e6f9
.org 0x6a3fc
	adds r4, r0, #0	@ 0006a3fc 041c
.org 0x6a3fe
	adds r0, r7, #0	@ 0006a3fe 381c
.org 0x6a400
	movs r1, #2	@ 0006a400 0221
.org 0x6a402
	bl 0x6a7c8	@ 0006a402 00f0e1f9
.org 0x6a406
	subs r4, r4, r0	@ 0006a406 241a
.org 0x6a408
	adds r4, #1	@ 0006a408 0134
.org 0x6a40a
	lsrs r0, r4, #31	@ 0006a40a e00f
.org 0x6a40c
	adds r4, r4, r0	@ 0006a40c 2418
.org 0x6a40e
	asrs r4, r4, #1	@ 0006a40e 6410
.org 0x6a410
	ldr r2, [pc, #428]	@ 0006a410 6b4a
.org 0x6a412
	adds r4, r4, r2	@ 0006a412 a418
.org 0x6a414
	lsls r4, r4, #1	@ 0006a414 6400
.org 0x6a416
	cmp r5, r4	@ 0006a416 a542
.org 0x6a418
	bls.n 0x6a49c	@ 0006a418 40d9
.org 0x6a41a
	ldr r3, [sp, #48]	@ 0006a41a 0c9b
.org 0x6a41c
	lsls r0, r3, #1	@ 0006a41c 5800
.org 0x6a41e
	subs r6, r0, #1	@ 0006a41e 461e
.org 0x6a420
	mov r0, r9	@ 0006a420 4846
.org 0x6a422
	adds r0, #128	@ 0006a422 8030
.org 0x6a424
	lsls r0, r0, #24	@ 0006a424 0006
.org 0x6a426
	lsrs r5, r0, #30	@ 0006a426 850f
.org 0x6a428
	mov r4, sp	@ 0006a428 6c46
.org 0x6a42a
	adds r0, r4, r5	@ 0006a42a 6019
.org 0x6a42c
	ldrb r1, [r0, #0]	@ 0006a42c 0178
.org 0x6a42e
	adds r0, r7, #0	@ 0006a42e 381c
.org 0x6a430
	bl 0x6a7c8	@ 0006a430 00f0caf9
.org 0x6a434
	mov r1, sp	@ 0006a434 6946
.org 0x6a436
	adds r1, r1, r5	@ 0006a436 4919
.org 0x6a438
	adds r1, #4	@ 0006a438 0431
.org 0x6a43a
	movs r2, #0	@ 0006a43a 0022
.org 0x6a43c
	ldrsb r2, [r1, r2]	@ 0006a43c 8a56
.org 0x6a43e
	lsls r1, r2, #1	@ 0006a43e 5100
.org 0x6a440
	adds r1, r1, r2	@ 0006a440 8918
.org 0x6a442
	lsls r1, r1, #11	@ 0006a442 c902
.org 0x6a444
	subs r0, r0, r1	@ 0006a444 401a
.org 0x6a446
	mov r5, r8	@ 0006a446 4546
.org 0x6a448
	str r0, [r5, #4]	@ 0006a448 6860
.org 0x6a44a
	lsls r1, r6, #6	@ 0006a44a b101
.org 0x6a44c
	add r1, r9	@ 0006a44c 4944
.org 0x6a44e
	lsls r1, r1, #24	@ 0006a44e 0906
.org 0x6a450
	lsrs r5, r1, #30	@ 0006a450 8d0f
.org 0x6a452
	ldr r1, [sp, #12]	@ 0006a452 0399
.org 0x6a454
	subs r4, r1, r0	@ 0006a454 0c1a
.org 0x6a456
	adds r1, r4, #0	@ 0006a456 211c
.org 0x6a458
	muls r1, r4	@ 0006a458 6143
.org 0x6a45a
	movs r0, #200	@ 0006a45a c820
.org 0x6a45c
	lsls r0, r0, #17	@ 0006a45c 4004
.org 0x6a45e
	subs r0, r0, r1	@ 0006a45e 401a
.org 0x6a460
	bl 0x128bf4	@ 0006a460 bef0c8fb
.org 0x6a464
	lsls r0, r0, #16	@ 0006a464 0004
.org 0x6a466
	lsrs r0, r0, #16	@ 0006a466 000c
.org 0x6a468
	negs r0, r0	@ 0006a468 4042
.org 0x6a46a
	mov r1, sp	@ 0006a46a 6946
.org 0x6a46c
	adds r1, r1, r5	@ 0006a46c 4919
.org 0x6a46e
	adds r1, #4	@ 0006a46e 0431
.org 0x6a470
	ldrb r1, [r1, #0]	@ 0006a470 0978
.org 0x6a472
	lsls r1, r1, #24	@ 0006a472 0906
.org 0x6a474
	asrs r1, r1, #24	@ 0006a474 0916
.org 0x6a476
	muls r1, r0	@ 0006a476 4143
.org 0x6a478
	ldr r0, [sp, #8]	@ 0006a478 0298
.org 0x6a47a
	adds r0, r0, r1	@ 0006a47a 4018
.org 0x6a47c
	str r0, [sp, #24]	@ 0006a47c 0690
.org 0x6a47e
	adds r1, r4, #0	@ 0006a47e 211c
.org 0x6a480
	cmp r1, #0	@ 0006a480 0029
.org 0x6a482
	bge.n 0x6a486	@ 0006a482 00da
.org 0x6a484
	negs r1, r1	@ 0006a484 4942
.org 0x6a486
	movs r0, #160	@ 0006a486 a020
.org 0x6a488
	lsls r0, r0, #5	@ 0006a488 4001
.org 0x6a48a
	subs r0, r0, r1	@ 0006a48a 401a
.org 0x6a48c
	movs r1, #80	@ 0006a48c 5021
.org 0x6a48e
	bl 0x128fb8	@ 0006a48e bef093fd
.org 0x6a492
	muls r0, r6	@ 0006a492 7043
.org 0x6a494
	add r0, r9	@ 0006a494 4844
.org 0x6a496
	lsls r0, r0, #24	@ 0006a496 0006
.org 0x6a498
	lsrs r0, r0, #24	@ 0006a498 000e
.org 0x6a49a
	mov r9, r0	@ 0006a49a 8146
.org 0x6a49c
	ldr r4, [pc, #292]	@ 0006a49c 494c
.org 0x6a49e
	ldr r0, [sp, #60]	@ 0006a49e 0f98
.org 0x6a4a0
	adds r0, #192	@ 0006a4a0 c030
.org 0x6a4a2
	lsls r0, r0, #24	@ 0006a4a2 0006
.org 0x6a4a4
	lsrs r0, r0, #23	@ 0006a4a4 c00d
.org 0x6a4a6
	adds r0, r0, r4	@ 0006a4a6 0019
.org 0x6a4a8
	movs r2, #0	@ 0006a4a8 0022
.org 0x6a4aa
	ldrsh r1, [r0, r2]	@ 0006a4aa 815e
.org 0x6a4ac
	lsls r0, r1, #1	@ 0006a4ac 4800
.org 0x6a4ae
	adds r0, r0, r1	@ 0006a4ae 4018
.org 0x6a4b0
	lsls r0, r0, #2	@ 0006a4b0 8000
.org 0x6a4b2
	ldr r2, [sp, #16]	@ 0006a4b2 049a
.org 0x6a4b4
	adds r2, r2, r0	@ 0006a4b4 1218
.org 0x6a4b6
	mov r0, r9	@ 0006a4b6 4846
.org 0x6a4b8
	adds r0, #64	@ 0006a4b8 4030
.org 0x6a4ba
	lsls r0, r0, #24	@ 0006a4ba 0006
.org 0x6a4bc
	lsrs r0, r0, #23	@ 0006a4bc c00d
.org 0x6a4be
	adds r0, r0, r4	@ 0006a4be 0019
.org 0x6a4c0
	movs r3, #0	@ 0006a4c0 0023
.org 0x6a4c2
	ldrsh r0, [r0, r3]	@ 0006a4c2 c05e
.org 0x6a4c4
	lsls r1, r0, #1	@ 0006a4c4 4100
.org 0x6a4c6
	adds r1, r1, r0	@ 0006a4c6 0918
.org 0x6a4c8
	lsls r1, r1, #2	@ 0006a4c8 8900
.org 0x6a4ca
	ldr r0, [sp, #24]	@ 0006a4ca 0698
.org 0x6a4cc
	adds r0, r0, r1	@ 0006a4cc 4018
.org 0x6a4ce
	subs r1, r0, r2	@ 0006a4ce 811a
.org 0x6a4d0
	lsrs r3, r1, #31	@ 0006a4d0 cb0f
.org 0x6a4d2
	adds r1, r1, r3	@ 0006a4d2 c918
.org 0x6a4d4
	asrs r1, r1, #1	@ 0006a4d4 4910
.org 0x6a4d6
	adds r1, r2, r1	@ 0006a4d6 5118
.org 0x6a4d8
	str r1, [sp, #52]	@ 0006a4d8 0d91
.org 0x6a4da
	ldr r1, [sp, #60]	@ 0006a4da 0f99
.org 0x6a4dc
	adds r1, #128	@ 0006a4dc 8031
.org 0x6a4de
	lsls r1, r1, #24	@ 0006a4de 0906
.org 0x6a4e0
	lsrs r1, r1, #23	@ 0006a4e0 c90d
.org 0x6a4e2
	adds r1, r1, r4	@ 0006a4e2 0919
.org 0x6a4e4
	movs r5, #0	@ 0006a4e4 0025
.org 0x6a4e6
	ldrsh r3, [r1, r5]	@ 0006a4e6 4b5f
.org 0x6a4e8
	lsls r1, r3, #1	@ 0006a4e8 5900
.org 0x6a4ea
	adds r1, r1, r3	@ 0006a4ea c918
.org 0x6a4ec
	lsls r1, r1, #2	@ 0006a4ec 8900
.org 0x6a4ee
	ldr r3, [sp, #20]	@ 0006a4ee 059b
.org 0x6a4f0
	adds r3, r3, r1	@ 0006a4f0 5b18
.org 0x6a4f2
	mov r5, r9	@ 0006a4f2 4d46
.org 0x6a4f4
	lsls r1, r5, #1	@ 0006a4f4 6900
.org 0x6a4f6
	adds r1, r1, r4	@ 0006a4f6 0919
.org 0x6a4f8
	movs r4, #0	@ 0006a4f8 0024
.org 0x6a4fa
	ldrsh r1, [r1, r4]	@ 0006a4fa 095f
.org 0x6a4fc
	lsls r4, r1, #1	@ 0006a4fc 4c00
.org 0x6a4fe
	adds r4, r4, r1	@ 0006a4fe 6418
.org 0x6a500
	lsls r4, r4, #2	@ 0006a500 a400
.org 0x6a502
	mov r5, r8	@ 0006a502 4546
.org 0x6a504
	ldr r1, [r5, #4]	@ 0006a504 6968
.org 0x6a506
	adds r1, r1, r4	@ 0006a506 0919
.org 0x6a508
	subs r4, r1, r3	@ 0006a508 cc1a
.org 0x6a50a
	lsrs r5, r4, #31	@ 0006a50a e50f
.org 0x6a50c
	adds r4, r4, r5	@ 0006a50c 6419
.org 0x6a50e
	asrs r4, r4, #1	@ 0006a50e 6410
.org 0x6a510
	adds r4, r3, r4	@ 0006a510 1c19
.org 0x6a512
	str r4, [sp, #56]	@ 0006a512 0e94
.org 0x6a514
	bl 0x10d398	@ 0006a514 a2f040ff
.org 0x6a518
	adds r4, r0, #0	@ 0006a518 041c
.org 0x6a51a
	lsls r4, r4, #24	@ 0006a51a 2406
.org 0x6a51c
	lsrs r4, r4, #24	@ 0006a51c 240e
.org 0x6a51e
	adds r0, r7, #0	@ 0006a51e 381c
.org 0x6a520
	adds r0, #196	@ 0006a520 c430
.org 0x6a522
	add r1, sp, #64	@ 0006a522 10a9
.org 0x6a524
	ldrb r1, [r1, #0]	@ 0006a524 0978
.org 0x6a526
	strb r1, [r0, #0]	@ 0006a526 0170
.org 0x6a528
	ldr r0, [sp, #8]	@ 0006a528 0298
.org 0x6a52a
	ldr r1, [sp, #12]	@ 0006a52a 0399
.org 0x6a52c
	str r0, [r7, #84]	@ 0006a52c 7865
.org 0x6a52e
	str r1, [r7, #88]	@ 0006a52e b965
.org 0x6a530
	ldr r0, [sp, #52]	@ 0006a530 0d98
.org 0x6a532
	ldr r1, [sp, #56]	@ 0006a532 0e99
.org 0x6a534
	ldr r2, [sp, #32]	@ 0006a534 089a
.org 0x6a536
	str r0, [r2, #84]	@ 0006a536 5065
.org 0x6a538
	str r1, [r2, #88]	@ 0006a538 9165
.org 0x6a53a
	ldr r0, [sp, #16]	@ 0006a53a 0498
.org 0x6a53c
	ldr r1, [sp, #20]	@ 0006a53c 0599
.org 0x6a53e
	ldr r3, [sp, #36]	@ 0006a53e 099b
.org 0x6a540
	str r0, [r3, #84]	@ 0006a540 5865
.org 0x6a542
	str r1, [r3, #88]	@ 0006a542 9965
.org 0x6a544
	ldr r0, [sp, #24]	@ 0006a544 0698
.org 0x6a546
	ldr r1, [sp, #28]	@ 0006a546 0799
.org 0x6a548
	ldr r5, [sp, #44]	@ 0006a548 0b9d
.org 0x6a54a
	str r0, [r5, #84]	@ 0006a54a 6865
.org 0x6a54c
	str r1, [r5, #88]	@ 0006a54c a965
.org 0x6a54e
	ldr r2, [sp, #40]	@ 0006a54e 0a9a
.org 0x6a550
	str r0, [r2, #84]	@ 0006a550 5065
.org 0x6a552
	str r1, [r2, #88]	@ 0006a552 9165
.org 0x6a554
	ldr r0, [sp, #32]	@ 0006a554 0898
.org 0x6a556
	adds r0, #180	@ 0006a556 b430
.org 0x6a558
	strb r4, [r0, #0]	@ 0006a558 0470
.org 0x6a55a
	adds r0, r3, #0	@ 0006a55a 181c
.org 0x6a55c
	adds r0, #180	@ 0006a55c b430
.org 0x6a55e
	add r3, sp, #60	@ 0006a55e 0fab
.org 0x6a560
	ldrb r3, [r3, #0]	@ 0006a560 1b78
.org 0x6a562
	strb r3, [r0, #0]	@ 0006a562 0370
.org 0x6a564
	adds r0, r5, #0	@ 0006a564 281c
.org 0x6a566
	adds r0, #180	@ 0006a566 b430
.org 0x6a568
	mov r5, r9	@ 0006a568 4d46
.org 0x6a56a
	strb r5, [r0, #0]	@ 0006a56a 0570
.org 0x6a56c
	adds r0, r2, #0	@ 0006a56c 101c
.org 0x6a56e
	adds r0, #180	@ 0006a56e b430
.org 0x6a570
	strb r5, [r0, #0]	@ 0006a570 0570
.org 0x6a572
	adds r0, r7, #0	@ 0006a572 381c
.org 0x6a574
	ldr r1, [sp, #64]	@ 0006a574 1099
.org 0x6a576
	ldr r2, [sp, #48]	@ 0006a576 0c9a
.org 0x6a578
	movs r3, #0	@ 0006a578 0023
.org 0x6a57a
	bl 0x6a7fc	@ 0006a57a 00f03ff9
.org 0x6a57e
	ldr r0, [sp, #32]	@ 0006a57e 0898
.org 0x6a580
	adds r1, r4, #0	@ 0006a580 211c
.org 0x6a582
	ldr r2, [sp, #48]	@ 0006a582 0c9a
.org 0x6a584
	movs r3, #0	@ 0006a584 0023
.org 0x6a586
	bl 0x6aaf8	@ 0006a586 00f0b7fa
.org 0x6a58a
	ldr r0, [sp, #36]	@ 0006a58a 0998
.org 0x6a58c
	ldr r1, [sp, #60]	@ 0006a58c 0f99
.org 0x6a58e
	ldr r2, [sp, #48]	@ 0006a58e 0c9a
.org 0x6a590
	movs r3, #0	@ 0006a590 0023
.org 0x6a592
	bl 0x6a8c4	@ 0006a592 00f097f9
.org 0x6a596
	ldr r0, [sp, #40]	@ 0006a596 0a98
.org 0x6a598
	mov r1, r9	@ 0006a598 4946
.org 0x6a59a
	ldr r2, [sp, #48]	@ 0006a59a 0c9a
