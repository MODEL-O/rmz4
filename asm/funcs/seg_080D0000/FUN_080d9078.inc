@ FUN_080d9078  entry 0x080d9078  size 274
.thumb
.org 0xd9078
FUN_080d9078:
	push {r4, r5, r6, r7, lr}	@ 000d9078 f0b5
.org 0xd907a
	sub sp, #12	@ 000d907a 83b0
.org 0xd907c
	adds r6, r0, #0	@ 000d907c 061c
.org 0xd907e
	ldr r0, [r6, #84]	@ 000d907e 706d
.org 0xd9080
	ldr r1, [r6, #92]	@ 000d9080 f16d
.org 0xd9082
	adds r0, r0, r1	@ 000d9082 4018
.org 0xd9084
	str r0, [r6, #84]	@ 000d9084 7065
.org 0xd9086
	lsls r0, r1, #3	@ 000d9086 c800
.org 0xd9088
	subs r0, r0, r1	@ 000d9088 401a
.org 0xd908a
	lsls r0, r0, #5	@ 000d908a 4001
.org 0xd908c
	adds r0, r0, r1	@ 000d908c 4018
.org 0xd908e
	cmp r0, #0	@ 000d908e 0028
.org 0xd9090
	bge.n 0xd9094	@ 000d9090 00da
.org 0xd9092
	adds r0, #255	@ 000d9092 ff30
.org 0xd9094
	asrs r0, r0, #8	@ 000d9094 0012
.org 0xd9096
	str r0, [r6, #92]	@ 000d9096 f065
.org 0xd9098
	ldr r0, [r6, #88]	@ 000d9098 b06d
.org 0xd909a
	ldr r1, [r6, #96]	@ 000d909a 316e
.org 0xd909c
	adds r0, r0, r1	@ 000d909c 4018
.org 0xd909e
	str r0, [r6, #88]	@ 000d909e b065
.org 0xd90a0
	ldrb r0, [r6, #19]	@ 000d90a0 f07c
.org 0xd90a2
	cmp r0, #0	@ 000d90a2 0028
.org 0xd90a4
	beq.n 0xd90b6	@ 000d90a4 07d0
.org 0xd90a6
	adds r0, r1, #0	@ 000d90a6 081c
.org 0xd90a8
	adds r0, #32	@ 000d90a8 2030
.org 0xd90aa
	str r0, [r6, #96]	@ 000d90aa 3066
.org 0xd90ac
	movs r1, #224	@ 000d90ac e021
.org 0xd90ae
	lsls r1, r1, #3	@ 000d90ae c900
.org 0xd90b0
	cmp r0, r1	@ 000d90b0 8842
.org 0xd90b2
	ble.n 0xd90b6	@ 000d90b2 00dd
.org 0xd90b4
	str r1, [r6, #96]	@ 000d90b4 3166
.org 0xd90b6
	adds r0, r6, #0	@ 000d90b6 301c
.org 0xd90b8
	bl 0x1cff0	@ 000d90b8 43f79aff
.org 0xd90bc
	ldrb r0, [r6, #18]	@ 000d90bc b07c
.org 0xd90be
	subs r0, #1	@ 000d90be 0138
.org 0xd90c0
	strb r0, [r6, #18]	@ 000d90c0 b074
.org 0xd90c2
	ldrb r0, [r6, #19]	@ 000d90c2 f07c
.org 0xd90c4
	cmp r0, #0	@ 000d90c4 0028
.org 0xd90c6
	beq.n 0xd90f8	@ 000d90c6 17d0
.org 0xd90c8
	ldr r4, [r6, #84]	@ 000d90c8 746d
.org 0xd90ca
	ldr r2, [r6, #88]	@ 000d90ca b26d
.org 0xd90cc
	ldr r0, [pc, #36]	@ 000d90cc 0948
.org 0xd90ce
	adds r3, r2, r0	@ 000d90ce 1318
.org 0xd90d0
	ldrb r1, [r6, #10]	@ 000d90d0 b17a
.org 0xd90d2
	movs r0, #32	@ 000d90d2 2020
.org 0xd90d4
	ands r0, r1	@ 000d90d4 0840
.org 0xd90d6
	cmp r0, #0	@ 000d90d6 0028
.org 0xd90d8
	beq.n 0xd90e0	@ 000d90d8 02d0
.org 0xd90da
	movs r0, #128	@ 000d90da 8020
.org 0xd90dc
	lsls r0, r0, #2	@ 000d90dc 8000
.org 0xd90de
	adds r3, r2, r0	@ 000d90de 1318
.org 0xd90e0
	adds r0, r4, #0	@ 000d90e0 201c
.org 0xd90e2
	adds r1, r3, #0	@ 000d90e2 191c
.org 0xd90e4
	bl 0x7c7c	@ 000d90e4 2ef7cafd
.org 0xd90e8
	lsls r0, r0, #16	@ 000d90e8 0004
.org 0xd90ea
	cmp r0, #0	@ 000d90ea 0028
.org 0xd90ec
	beq.n 0xd910a	@ 000d90ec 0dd0
.org 0xd90ee
	movs r0, #0	@ 000d90ee 0020
.org 0xd90f0
	strb r0, [r6, #18]	@ 000d90f0 b074
.org 0xd90f2
	b.n 0xd910a	@ 000d90f2 0ae0
.org 0xd90f4
	.byte 0x00,0xfe,0xff,0xff	@ 000d90f4 data
.org 0xd90f8
	ldr r0, [r6, #84]	@ 000d90f8 706d
.org 0xd90fa
	ldr r1, [r6, #88]	@ 000d90fa b16d
.org 0xd90fc
	bl 0x8534	@ 000d90fc 2ff71afa
.org 0xd9100
	adds r1, r0, #0	@ 000d9100 011c
.org 0xd9102
	ldr r0, [r6, #88]	@ 000d9102 b06d
.org 0xd9104
	cmp r0, r1	@ 000d9104 8842
.org 0xd9106
	ble.n 0xd910a	@ 000d9106 00dd
.org 0xd9108
	str r1, [r6, #88]	@ 000d9108 b165
.org 0xd910a
	ldrb r7, [r6, #18]	@ 000d910a b77c
.org 0xd910c
	cmp r7, #0	@ 000d910c 002f
.org 0xd910e
	bne.n 0xd9186	@ 000d910e 3ad1
.org 0xd9110
	adds r1, r6, #0	@ 000d9110 311c
.org 0xd9112
	adds r1, #84	@ 000d9112 5431
.org 0xd9114
	movs r0, #2	@ 000d9114 0220
.org 0xd9116
	bl 0xd0c88	@ 000d9116 f7f7b7fd
.org 0xd911a
	ldr r2, [pc, #116]	@ 000d911a 1d4a
.org 0xd911c
	ldr r1, [r2, #0]	@ 000d911c 1168
.org 0xd911e
	ldr r0, [pc, #116]	@ 000d911e 1d48
.org 0xd9120
	adds r4, r1, #0	@ 000d9120 0c1c
.org 0xd9122
	muls r4, r0	@ 000d9122 4443
.org 0xd9124
	ldr r0, [pc, #112]	@ 000d9124 1c48
.org 0xd9126
	adds r4, r4, r0	@ 000d9126 2418
.org 0xd9128
	lsls r4, r4, #1	@ 000d9128 6400
.org 0xd912a
	lsrs r0, r4, #1	@ 000d912a 6008
.org 0xd912c
	str r0, [r2, #0]	@ 000d912c 1060
.org 0xd912e
	lsrs r4, r4, #17	@ 000d912e 640c
.org 0xd9130
	movs r0, #3	@ 000d9130 0320
.org 0xd9132
	ands r4, r0	@ 000d9132 0440
.org 0xd9134
	ldr r0, [r6, #84]	@ 000d9134 706d
.org 0xd9136
	str r0, [sp, #4]	@ 000d9136 0190
.org 0xd9138
	ldr r0, [r6, #88]	@ 000d9138 b06d
.org 0xd913a
	str r0, [sp, #8]	@ 000d913a 0290
.org 0xd913c
	ldrb r1, [r6, #10]	@ 000d913c b17a
.org 0xd913e
	lsrs r1, r1, #4	@ 000d913e 0909
.org 0xd9140
	movs r5, #1	@ 000d9140 0125
.org 0xd9142
	ands r1, r5	@ 000d9142 2940
.org 0xd9144
	ldr r2, [pc, #84]	@ 000d9144 154a
.org 0xd9146
	str r7, [sp, #0]	@ 000d9146 0097
.org 0xd9148
	add r0, sp, #4	@ 000d9148 01a8
.org 0xd914a
	adds r3, r4, #0	@ 000d914a 231c
.org 0xd914c
	bl 0xd8ef8	@ 000d914c fff7d4fe
.org 0xd9150
	ldrb r1, [r6, #10]	@ 000d9150 b17a
.org 0xd9152
	lsrs r1, r1, #4	@ 000d9152 0909
.org 0xd9154
	ands r1, r5	@ 000d9154 2940
.org 0xd9156
	ldr r2, [pc, #72]	@ 000d9156 124a
.org 0xd9158
	str r7, [sp, #0]	@ 000d9158 0097
.org 0xd915a
	add r0, sp, #4	@ 000d915a 01a8
.org 0xd915c
	adds r3, r4, #0	@ 000d915c 231c
.org 0xd915e
	bl 0xd8ef8	@ 000d915e fff7cbfe
.org 0xd9162
	ldrb r1, [r6, #10]	@ 000d9162 b17a
.org 0xd9164
	lsrs r1, r1, #4	@ 000d9164 0909
.org 0xd9166
	ands r1, r5	@ 000d9166 2940
.org 0xd9168
	ldr r2, [pc, #56]	@ 000d9168 0e4a
.org 0xd916a
	str r7, [sp, #0]	@ 000d916a 0097
.org 0xd916c
	add r0, sp, #4	@ 000d916c 01a8
.org 0xd916e
	adds r3, r4, #0	@ 000d916e 231c
.org 0xd9170
	bl 0xd8ef8	@ 000d9170 fff7c2fe
.org 0xd9174
	ldr r1, [pc, #48]	@ 000d9174 0c49
.org 0xd9176
	ldrb r0, [r6, #9]	@ 000d9176 707a
.org 0xd9178
	lsls r0, r0, #2	@ 000d9178 8000
.org 0xd917a
	adds r0, r0, r1	@ 000d917a 4018
.org 0xd917c
	movs r1, #2	@ 000d917c 0221
.org 0xd917e
	str r1, [r6, #12]	@ 000d917e f160
.org 0xd9180
	ldr r0, [r0, #0]	@ 000d9180 0068
.org 0xd9182
	ldr r0, [r0, #8]	@ 000d9182 8068
.org 0xd9184
	str r0, [r6, #20]	@ 000d9184 7061
.org 0xd9186
	add sp, #12	@ 000d9186 03b0
.org 0xd9188
	pop {r4, r5, r6, r7}	@ 000d9188 f0bc
