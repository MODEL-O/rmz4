@ FUN_080a9028  entry 0x080a9028  size 456
.thumb
.org 0xa9028
FUN_080a9028:
	push {r4, r5, r6, r7, lr}	@ 000a9028 f0b5
.org 0xa902a
	adds r6, r0, #0	@ 000a902a 061c
.org 0xa902c
	ldr r7, [r6, #40]	@ 000a902c b76a
.org 0xa902e
	adds r0, r7, #0	@ 000a902e 381c
.org 0xa9030
	adds r0, #140	@ 000a9030 8c30
.org 0xa9032
	ldr r0, [r0, #0]	@ 000a9032 0068
.org 0xa9034
	movs r1, #128	@ 000a9034 8021
.org 0xa9036
	lsls r1, r1, #2	@ 000a9036 8900
.org 0xa9038
	ands r0, r1	@ 000a9038 0840
.org 0xa903a
	cmp r0, #0	@ 000a903a 0028
.org 0xa903c
	bne.n 0xa904a	@ 000a903c 05d1
.org 0xa903e
	adds r0, r7, #0	@ 000a903e 381c
.org 0xa9040
	adds r0, #164	@ 000a9040 a430
.org 0xa9042
	movs r1, #0	@ 000a9042 0021
.org 0xa9044
	ldrsh r0, [r0, r1]	@ 000a9044 405e
.org 0xa9046
	cmp r0, #0	@ 000a9046 0028
.org 0xa9048
	bne.n 0xa9056	@ 000a9048 05d1
.org 0xa904a
	ldr r0, [pc, #40]	@ 000a904a 0a48
.org 0xa904c
	ldrh r1, [r0, #8]	@ 000a904c 0189
.org 0xa904e
	movs r0, #8	@ 000a904e 0820
.org 0xa9050
	ands r0, r1	@ 000a9050 0840
.org 0xa9052
	cmp r0, #0	@ 000a9052 0028
.org 0xa9054
	beq.n 0xa905c	@ 000a9054 02d0
.org 0xa9056
	ldrb r0, [r7, #12]	@ 000a9056 387b
.org 0xa9058
	cmp r0, #1	@ 000a9058 0128
.org 0xa905a
	bls.n 0xa90f8	@ 000a905a 4dd9
.org 0xa905c
	adds r0, r6, #0	@ 000a905c 301c
.org 0xa905e
	bl 0x1cff0	@ 000a905e 73f7c7ff
.org 0xa9062
	ldrb r4, [r6, #15]	@ 000a9062 f47b
.org 0xa9064
	cmp r4, #1	@ 000a9064 012c
.org 0xa9066
	beq.n 0xa90aa	@ 000a9066 20d0
.org 0xa9068
	cmp r4, #1	@ 000a9068 012c
.org 0xa906a
	bgt.n 0xa9078	@ 000a906a 05dc
.org 0xa906c
	cmp r4, #0	@ 000a906c 002c
.org 0xa906e
	beq.n 0xa907e	@ 000a906e 06d0
.org 0xa9070
	b.n 0xa920e	@ 000a9070 cde0
.org 0xa9072
	.byte 0x00	@ 000a9072 data
.org 0xa9073
	.byte 0x00	@ 000a9073 data
.org 0xa9074
	.byte 0x10,0xe9,0x02,0x02	@ 000a9074 data
.org 0xa9078
	cmp r4, #2	@ 000a9078 022c
.org 0xa907a
	beq.n 0xa90cc	@ 000a907a 27d0
.org 0xa907c
	b.n 0xa920e	@ 000a907c c7e0
.org 0xa907e
	adds r0, r6, #0	@ 000a907e 301c
.org 0xa9080
	adds r0, #140	@ 000a9080 8c30
.org 0xa9082
	str r4, [r0, #0]	@ 000a9082 0460
.org 0xa9084
	adds r0, #4	@ 000a9084 0430
.org 0xa9086
	str r4, [r0, #0]	@ 000a9086 0460
.org 0xa9088
	adds r0, #4	@ 000a9088 0430
.org 0xa908a
	strb r4, [r0, #0]	@ 000a908a 0470
.org 0xa908c
	ldrb r1, [r6, #10]	@ 000a908c b17a
.org 0xa908e
	movs r0, #251	@ 000a908e fb20
.org 0xa9090
	ands r0, r1	@ 000a9090 0840
.org 0xa9092
	strb r0, [r6, #10]	@ 000a9092 b072
.org 0xa9094
	adds r0, r7, #0	@ 000a9094 381c
.org 0xa9096
	adds r0, #212	@ 000a9096 d430
.org 0xa9098
	ldrb r3, [r6, #16]	@ 000a9098 337c
.org 0xa909a
	adds r0, r0, r3	@ 000a909a c018
.org 0xa909c
	ldrb r0, [r0, #0]	@ 000a909c 0078
.org 0xa909e
	lsls r0, r0, #4	@ 000a909e 0001
.org 0xa90a0
	adds r1, r6, #0	@ 000a90a0 311c
.org 0xa90a2
	adds r1, #190	@ 000a90a2 be31
.org 0xa90a4
	strh r0, [r1, #0]	@ 000a90a4 0880
.org 0xa90a6
	str r4, [r6, #96]	@ 000a90a6 3466
.org 0xa90a8
	b.n 0xa90be	@ 000a90a8 09e0
.org 0xa90aa
	adds r1, r6, #0	@ 000a90aa 311c
.org 0xa90ac
	adds r1, #190	@ 000a90ac be31
.org 0xa90ae
	ldrh r0, [r1, #0]	@ 000a90ae 0888
.org 0xa90b0
	subs r0, #1	@ 000a90b0 0138
.org 0xa90b2
	strh r0, [r1, #0]	@ 000a90b2 0880
.org 0xa90b4
	lsls r0, r0, #16	@ 000a90b4 0004
.org 0xa90b6
	ldr r1, [pc, #16]	@ 000a90b6 0449
.org 0xa90b8
	cmp r0, r1	@ 000a90b8 8842
.org 0xa90ba
	beq.n 0xa90be	@ 000a90ba 00d0
.org 0xa90bc
	b.n 0xa920e	@ 000a90bc a7e0
.org 0xa90be
	ldrb r0, [r6, #15]	@ 000a90be f07b
.org 0xa90c0
	adds r0, #1	@ 000a90c0 0130
.org 0xa90c2
	strb r0, [r6, #15]	@ 000a90c2 f073
.org 0xa90c4
	b.n 0xa920e	@ 000a90c4 a3e0
.org 0xa90c6
	.byte 0x00	@ 000a90c6 data
.org 0xa90c7
	.byte 0x00	@ 000a90c7 data
.org 0xa90c8
	.byte 0x00,0x00,0xff,0xff	@ 000a90c8 data
.org 0xa90cc
	ldr r1, [r6, #88]	@ 000a90cc b16d
.org 0xa90ce
	ldr r0, [r6, #96]	@ 000a90ce 306e
.org 0xa90d0
	adds r1, r1, r0	@ 000a90d0 0918
.org 0xa90d2
	str r1, [r6, #88]	@ 000a90d2 b165
.org 0xa90d4
	adds r0, #64	@ 000a90d4 4030
.org 0xa90d6
	str r0, [r6, #96]	@ 000a90d6 3066
.org 0xa90d8
	ldr r0, [r6, #84]	@ 000a90d8 706d
.org 0xa90da
	bl 0x7c7c	@ 000a90da 5ef7cffd
.org 0xa90de
	lsls r0, r0, #16	@ 000a90de 0004
.org 0xa90e0
	cmp r0, #0	@ 000a90e0 0028
.org 0xa90e2
	bne.n 0xa90e6	@ 000a90e2 00d1
.org 0xa90e4
	b.n 0xa920e	@ 000a90e4 93e0
.org 0xa90e6
	ldr r1, [pc, #12]	@ 000a90e6 0349
.org 0xa90e8
	ldrb r0, [r6, #9]	@ 000a90e8 707a
.org 0xa90ea
	lsls r0, r0, #2	@ 000a90ea 8000
.org 0xa90ec
	adds r0, r0, r1	@ 000a90ec 4018
.org 0xa90ee
	str r4, [r6, #12]	@ 000a90ee f460
.org 0xa90f0
	b.n 0xa9114	@ 000a90f0 10e0
.org 0xa90f2
	.byte 0x00	@ 000a90f2 data
.org 0xa90f3
	.byte 0x00	@ 000a90f3 data
.org 0xa90f4
	.byte 0x40,0xdb,0x85,0x08	@ 000a90f4 data
.org 0xa90f8
	adds r0, r6, #0	@ 000a90f8 301c
.org 0xa90fa
	adds r0, #140	@ 000a90fa 8c30
.org 0xa90fc
	ldr r2, [r0, #0]	@ 000a90fc 0268
.org 0xa90fe
	movs r0, #128	@ 000a90fe 8020
.org 0xa9100
	lsls r0, r0, #2	@ 000a9100 8000
.org 0xa9102
	ands r0, r2	@ 000a9102 1040
.org 0xa9104
	cmp r0, #0	@ 000a9104 0028
.org 0xa9106
	beq.n 0xa9128	@ 000a9106 0fd0
.org 0xa9108
	ldr r1, [pc, #24]	@ 000a9108 0649
.org 0xa910a
	ldrb r0, [r6, #9]	@ 000a910a 707a
.org 0xa910c
	lsls r0, r0, #2	@ 000a910c 8000
.org 0xa910e
	adds r0, r0, r1	@ 000a910e 4018
.org 0xa9110
	movs r1, #2	@ 000a9110 0221
.org 0xa9112
	str r1, [r6, #12]	@ 000a9112 f160
.org 0xa9114
	ldr r0, [r0, #0]	@ 000a9114 0068
.org 0xa9116
	ldr r0, [r0, #8]	@ 000a9116 8068
.org 0xa9118
	str r0, [r6, #20]	@ 000a9118 7061
.org 0xa911a
	adds r0, r6, #0	@ 000a911a 301c
.org 0xa911c
	bl 0xa9218	@ 000a911c 00f07cf8
.org 0xa9120
	b.n 0xa920e	@ 000a9120 75e0
.org 0xa9122
	.byte 0x00	@ 000a9122 data
.org 0xa9123
	.byte 0x00	@ 000a9123 data
.org 0xa9124
	.byte 0x40,0xdb,0x85,0x08	@ 000a9124 data
.org 0xa9128
	adds r0, r6, #0	@ 000a9128 301c
.org 0xa912a
	adds r0, #192	@ 000a912a c030
.org 0xa912c
	ldr r1, [r0, #0]	@ 000a912c 0168
.org 0xa912e
	adds r4, r0, #0	@ 000a912e 041c
.org 0xa9130
	cmp r1, #0	@ 000a9130 0029
.org 0xa9132
	bne.n 0xa914e	@ 000a9132 0cd1
.org 0xa9134
	movs r0, #1	@ 000a9134 0120
.org 0xa9136
	ands r2, r0	@ 000a9136 0240
.org 0xa9138
	cmp r2, #0	@ 000a9138 002a
.org 0xa913a
	beq.n 0xa9148	@ 000a913a 05d0
.org 0xa913c
	ldr r2, [pc, #120]	@ 000a913c 1e4a
.org 0xa913e
	movs r0, #0	@ 000a913e 0020
.org 0xa9140
	adds r1, r6, #0	@ 000a9140 311c
.org 0xa9142
	bl 0x2adac	@ 000a9142 81f733fe
.org 0xa9146
	str r0, [r4, #0]	@ 000a9146 2060
.org 0xa9148
	ldr r0, [r4, #0]	@ 000a9148 2068
.org 0xa914a
	cmp r0, #0	@ 000a914a 0028
.org 0xa914c
	beq.n 0xa915c	@ 000a914c 06d0
.org 0xa914e
	ldr r0, [r4, #0]	@ 000a914e 2068
.org 0xa9150
	bl 0x2b3e4	@ 000a9150 82f748f9
.org 0xa9154
	cmp r0, #0	@ 000a9154 0028
.org 0xa9156
	beq.n 0xa915c	@ 000a9156 01d0
.org 0xa9158
	movs r0, #0	@ 000a9158 0020
.org 0xa915a
	str r0, [r4, #0]	@ 000a915a 2060
.org 0xa915c
	ldr r1, [pc, #92]	@ 000a915c 1749
.org 0xa915e
	ldrb r0, [r6, #13]	@ 000a915e 707b
.org 0xa9160
	lsls r0, r0, #2	@ 000a9160 8000
.org 0xa9162
	adds r0, r0, r1	@ 000a9162 4018
.org 0xa9164
	ldr r1, [r0, #0]	@ 000a9164 0168
.org 0xa9166
	adds r0, r6, #0	@ 000a9166 301c
.org 0xa9168
	bl 0x128f80	@ 000a9168 7ff00aff
.org 0xa916c
	ldrb r3, [r6, #16]	@ 000a916c 337c
.org 0xa916e
	movs r0, #1	@ 000a916e 0120
.org 0xa9170
	ands r0, r3	@ 000a9170 1840
.org 0xa9172
	cmp r0, #0	@ 000a9172 0028
.org 0xa9174
	bne.n 0xa91c4	@ 000a9174 26d1
.org 0xa9176
	ldr r5, [pc, #72]	@ 000a9176 124d
.org 0xa9178
	adds r2, r7, #0	@ 000a9178 3a1c
.org 0xa917a
	adds r2, #180	@ 000a917a b432
.org 0xa917c
	ldrh r0, [r2, #16]	@ 000a917c 108a
.org 0xa917e
	lsrs r0, r0, #8	@ 000a917e 000a
.org 0xa9180
	lsls r3, r3, #5	@ 000a9180 5b01
.org 0xa9182
	adds r0, r0, r3	@ 000a9182 c018
.org 0xa9184
	adds r0, #64	@ 000a9184 4030
.org 0xa9186
	lsls r0, r0, #24	@ 000a9186 0006
.org 0xa9188
	lsrs r0, r0, #23	@ 000a9188 c00d
.org 0xa918a
	adds r0, r0, r5	@ 000a918a 4019
.org 0xa918c
	movs r4, #0	@ 000a918c 0024
.org 0xa918e
	ldrsh r1, [r0, r4]	@ 000a918e 015f
.org 0xa9190
	movs r4, #12	@ 000a9190 0c24
.org 0xa9192
	ldrsh r0, [r2, r4]	@ 000a9192 105f
.org 0xa9194
	muls r1, r0	@ 000a9194 4143
.org 0xa9196
	asrs r1, r1, #8	@ 000a9196 0912
.org 0xa9198
	ldr r0, [r7, #84]	@ 000a9198 786d
.org 0xa919a
	adds r0, r0, r1	@ 000a919a 4018
.org 0xa919c
	str r0, [r6, #84]	@ 000a919c 7065
.org 0xa919e
	adds r4, r6, #0	@ 000a919e 341c
.org 0xa91a0
	adds r4, #184	@ 000a91a0 b834
.org 0xa91a2
	ldrh r0, [r2, #16]	@ 000a91a2 108a
.org 0xa91a4
	lsrs r0, r0, #8	@ 000a91a4 000a
.org 0xa91a6
	adds r0, r0, r3	@ 000a91a6 c018
.org 0xa91a8
	lsls r0, r0, #24	@ 000a91a8 0006
.org 0xa91aa
	lsrs r0, r0, #23	@ 000a91aa c00d
.org 0xa91ac
	adds r0, r0, r5	@ 000a91ac 4019
.org 0xa91ae
	movs r3, #0	@ 000a91ae 0023
.org 0xa91b0
	ldrsh r1, [r0, r3]	@ 000a91b0 c15e
.org 0xa91b2
	movs r3, #12	@ 000a91b2 0c23
.org 0xa91b4
	ldrsh r0, [r2, r3]	@ 000a91b4 d05e
.org 0xa91b6
	b.n 0xa9204	@ 000a91b6 25e0
.org 0xa91b8
	.byte 0x3c,0x29,0x86,0x08	@ 000a91b8 data
.org 0xa91bc
	.byte 0xf8,0x27,0x86,0x08	@ 000a91bc data
.org 0xa91c0
	.byte 0x0c,0x93,0x12,0x08	@ 000a91c0 data
.org 0xa91c4
	ldr r5, [pc, #76]	@ 000a91c4 134d
.org 0xa91c6
	adds r2, r7, #0	@ 000a91c6 3a1c
.org 0xa91c8
	adds r2, #180	@ 000a91c8 b432
.org 0xa91ca
	ldrh r0, [r2, #18]	@ 000a91ca 508a
.org 0xa91cc
	lsrs r0, r0, #8	@ 000a91cc 000a
.org 0xa91ce
	lsls r3, r3, #5	@ 000a91ce 5b01
.org 0xa91d0
	adds r0, r0, r3	@ 000a91d0 c018
.org 0xa91d2
	adds r0, #64	@ 000a91d2 4030
.org 0xa91d4
	lsls r0, r0, #24	@ 000a91d4 0006
.org 0xa91d6
	lsrs r0, r0, #23	@ 000a91d6 c00d
.org 0xa91d8
	adds r0, r0, r5	@ 000a91d8 4019
.org 0xa91da
	movs r4, #0	@ 000a91da 0024
.org 0xa91dc
	ldrsh r1, [r0, r4]	@ 000a91dc 015f
.org 0xa91de
	movs r4, #14	@ 000a91de 0e24
.org 0xa91e0
	ldrsh r0, [r2, r4]	@ 000a91e0 105f
.org 0xa91e2
	muls r1, r0	@ 000a91e2 4143
.org 0xa91e4
	asrs r1, r1, #8	@ 000a91e4 0912
.org 0xa91e6
	ldr r0, [r7, #84]	@ 000a91e6 786d
.org 0xa91e8
	adds r0, r0, r1	@ 000a91e8 4018
.org 0xa91ea
	str r0, [r6, #84]	@ 000a91ea 7065
.org 0xa91ec
	adds r4, r6, #0	@ 000a91ec 341c
.org 0xa91ee
	adds r4, #184	@ 000a91ee b834
