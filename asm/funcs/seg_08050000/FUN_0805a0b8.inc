@ FUN_0805a0b8  entry 0x0805a0b8  size 246
.thumb
.org 0x5a0b8
FUN_0805a0b8:
	push {r4, r5, lr}	@ 0005a0b8 30b5
.org 0x5a0ba
	sub sp, #8	@ 0005a0ba 82b0
.org 0x5a0bc
	adds r5, r0, #0	@ 0005a0bc 051c
.org 0x5a0be
	ldr r0, [pc, #212]	@ 0005a0be 3548
.org 0x5a0c0
	ldr r1, [r0, #4]	@ 0005a0c0 4168
.org 0x5a0c2
	ldr r0, [r0, #0]	@ 0005a0c2 0068
.org 0x5a0c4
	str r0, [sp, #0]	@ 0005a0c4 0090
.org 0x5a0c6
	str r1, [sp, #4]	@ 0005a0c6 0191
.org 0x5a0c8
	ldrb r0, [r5, #15]	@ 0005a0c8 e87b
.org 0x5a0ca
	cmp r0, #0	@ 0005a0ca 0028
.org 0x5a0cc
	bne.n 0x5a14e	@ 0005a0cc 3fd1
.org 0x5a0ce
	ldr r0, [pc, #200]	@ 0005a0ce 3248
.org 0x5a0d0
	ldrh r0, [r0, #0]	@ 0005a0d0 0088
.org 0x5a0d2
	movs r1, #0	@ 0005a0d2 0021
.org 0x5a0d4
	cmp r0, #16	@ 0005a0d4 1028
.org 0x5a0d6
	bne.n 0x5a0da	@ 0005a0d6 00d1
.org 0x5a0d8
	movs r1, #4	@ 0005a0d8 0421
.org 0x5a0da
	mov r2, sp	@ 0005a0da 6a46
.org 0x5a0dc
	adds r0, r1, r2	@ 0005a0dc 8818
.org 0x5a0de
	ldrh r0, [r0, #0]	@ 0005a0de 0088
.org 0x5a0e0
	bl 0x2b10	@ 0005a0e0 a8f716fd
.org 0x5a0e4
	adds r0, r5, #0	@ 0005a0e4 281c
.org 0x5a0e6
	adds r0, #116	@ 0005a0e6 7430
.org 0x5a0e8
	ldr r1, [pc, #176]	@ 0005a0e8 2c49
.org 0x5a0ea
	bl 0x5784	@ 0005a0ea abf74bfb
.org 0x5a0ee
	ldrb r0, [r5, #30]	@ 0005a0ee a87f
.org 0x5a0f0
	lsls r0, r0, #8	@ 0005a0f0 0002
.org 0x5a0f2
	adds r1, r5, #0	@ 0005a0f2 291c
.org 0x5a0f4
	adds r1, #112	@ 0005a0f4 7031
.org 0x5a0f6
	ldrb r1, [r1, #0]	@ 0005a0f6 0978
.org 0x5a0f8
	orrs r0, r1	@ 0005a0f8 0843
.org 0x5a0fa
	ldr r1, [pc, #164]	@ 0005a0fa 2949
.org 0x5a0fc
	cmp r0, r1	@ 0005a0fc 8842
.org 0x5a0fe
	beq.n 0x5a10e	@ 0005a0fe 06d0
.org 0x5a100
	adds r0, r5, #0	@ 0005a100 281c
.org 0x5a102
	bl 0x1cf00	@ 0005a102 c2f7fdfe
.org 0x5a106
	adds r1, r5, #0	@ 0005a106 291c
.org 0x5a108
	adds r1, #189	@ 0005a108 bd31
.org 0x5a10a
	movs r0, #1	@ 0005a10a 0120
.org 0x5a10c
	strb r0, [r1, #0]	@ 0005a10c 0870
.org 0x5a10e
	adds r0, r5, #0	@ 0005a10e 281c
.org 0x5a110
	bl 0x5c3a8	@ 0005a110 02f04af9
.org 0x5a114
	movs r1, #208	@ 0005a114 d021
.org 0x5a116
	lsls r1, r1, #8	@ 0005a116 0902
.org 0x5a118
	adds r0, r0, r1	@ 0005a118 4018
.org 0x5a11a
	str r0, [r5, #92]	@ 0005a11a e865
.org 0x5a11c
	adds r4, r5, #0	@ 0005a11c 2c1c
.org 0x5a11e
	adds r4, #180	@ 0005a11e b434
.org 0x5a120
	ldr r0, [r4, #0]	@ 0005a120 2068
.org 0x5a122
	ldr r2, [pc, #128]	@ 0005a122 204a
.org 0x5a124
	adds r0, r0, r2	@ 0005a124 8018
.org 0x5a126
	str r0, [r5, #96]	@ 0005a126 2866
.org 0x5a128
	adds r0, r5, #0	@ 0005a128 281c
.org 0x5a12a
	bl 0x5c3a8	@ 0005a12a 02f03df9
.org 0x5a12e
	ldr r1, [r5, #84]	@ 0005a12e 696d
.org 0x5a130
	ldr r2, [pc, #116]	@ 0005a130 1d4a
.org 0x5a132
	adds r1, r1, r2	@ 0005a132 8918
.org 0x5a134
	subs r0, r0, r1	@ 0005a134 401a
.org 0x5a136
	str r0, [r5, #100]	@ 0005a136 6866
.org 0x5a138
	ldr r1, [r5, #88]	@ 0005a138 a96d
.org 0x5a13a
	ldr r0, [pc, #112]	@ 0005a13a 1c48
.org 0x5a13c
	adds r1, r1, r0	@ 0005a13c 0918
.org 0x5a13e
	ldr r0, [r4, #0]	@ 0005a13e 2068
.org 0x5a140
	subs r0, r0, r1	@ 0005a140 401a
.org 0x5a142
	str r0, [r5, #104]	@ 0005a142 a866
.org 0x5a144
	movs r0, #64	@ 0005a144 4020
.org 0x5a146
	strb r0, [r5, #18]	@ 0005a146 a874
.org 0x5a148
	ldrb r0, [r5, #15]	@ 0005a148 e87b
.org 0x5a14a
	adds r0, #1	@ 0005a14a 0130
.org 0x5a14c
	strb r0, [r5, #15]	@ 0005a14c e873
.org 0x5a14e
	adds r0, r5, #0	@ 0005a14e 281c
.org 0x5a150
	bl 0x1cff0	@ 0005a150 c2f74eff
.org 0x5a154
	ldrb r0, [r5, #18]	@ 0005a154 a87c
.org 0x5a156
	cmp r0, #0	@ 0005a156 0028
.org 0x5a158
	beq.n 0x5a1b4	@ 0005a158 2cd0
.org 0x5a15a
	subs r0, #1	@ 0005a15a 0138
.org 0x5a15c
	strb r0, [r5, #18]	@ 0005a15c a874
.org 0x5a15e
	ldrb r3, [r5, #18]	@ 0005a15e ab7c
.org 0x5a160
	ldr r0, [r5, #100]	@ 0005a160 686e
.org 0x5a162
	negs r0, r0	@ 0005a162 4042
.org 0x5a164
	muls r0, r3	@ 0005a164 5843
.org 0x5a166
	cmp r0, #0	@ 0005a166 0028
.org 0x5a168
	bge.n 0x5a16c	@ 0005a168 00da
.org 0x5a16a
	adds r0, #63	@ 0005a16a 3f30
.org 0x5a16c
	asrs r1, r0, #6	@ 0005a16c 8111
.org 0x5a16e
	ldr r0, [r5, #92]	@ 0005a16e e86d
.org 0x5a170
	adds r0, r0, r1	@ 0005a170 4018
.org 0x5a172
	str r0, [r5, #84]	@ 0005a172 6865
.org 0x5a174
	ldr r1, [r5, #104]	@ 0005a174 a96e
.org 0x5a176
	negs r1, r1	@ 0005a176 4942
.org 0x5a178
	ldr r2, [pc, #52]	@ 0005a178 0d4a
.org 0x5a17a
	lsls r0, r3, #1	@ 0005a17a 5800
.org 0x5a17c
	adds r0, r0, r2	@ 0005a17c 8018
.org 0x5a17e
	movs r2, #0	@ 0005a17e 0022
.org 0x5a180
	ldrsh r0, [r0, r2]	@ 0005a180 805e
.org 0x5a182
	muls r0, r1	@ 0005a182 4843
.org 0x5a184
	cmp r0, #0	@ 0005a184 0028
.org 0x5a186
	bge.n 0x5a18a	@ 0005a186 00da
.org 0x5a188
	adds r0, #255	@ 0005a188 ff30
.org 0x5a18a
	asrs r1, r0, #8	@ 0005a18a 0112
.org 0x5a18c
	ldr r0, [r5, #96]	@ 0005a18c 286e
.org 0x5a18e
	adds r0, r0, r1	@ 0005a18e 4018
.org 0x5a190
	str r0, [r5, #88]	@ 0005a190 a865
.org 0x5a192
	b.n 0x5a1c6	@ 0005a192 18e0
.org 0x5a194
	.byte 0xc8,0x96,0x12,0x08	@ 0005a194 data
.org 0x5a198
	.byte 0x10,0xe9,0x02,0x02	@ 0005a198 data
.org 0x5a19c
	.byte 0xe4,0x88,0x85,0x08	@ 0005a19c data
.org 0x5a1a0
	.byte 0x01,0xa3,0x00,0x00	@ 0005a1a0 data
.org 0x5a1a4
	.byte 0x01,0xb8,0xff,0xff	@ 0005a1a4 data
.org 0x5a1a8
	.byte 0x00,0x30,0xff,0xff	@ 0005a1a8 data
.org 0x5a1ac
	.byte 0xff,0x47,0x00,0x00	@ 0005a1ac data
