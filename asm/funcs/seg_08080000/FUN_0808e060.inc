@ FUN_0808e060  entry 0x0808e060  size 282
.thumb
.org 0x8e060
FUN_0808e060:
	push {r4, r5, r6, r7, lr}	@ 0008e060 f0b5
.org 0x8e062
	mov r7, sl	@ 0008e062 5746
.org 0x8e064
	mov r6, r9	@ 0008e064 4e46
.org 0x8e066
	mov r5, r8	@ 0008e066 4546
.org 0x8e068
	push {r5, r6, r7}	@ 0008e068 e0b4
.org 0x8e06a
	adds r7, r0, #0	@ 0008e06a 071c
.org 0x8e06c
	ldr r0, [r7, #40]	@ 0008e06c b86a
.org 0x8e06e
	mov r9, r0	@ 0008e06e 8146
.org 0x8e070
	ldrb r1, [r7, #17]	@ 0008e070 797c
.org 0x8e072
	mov sl, r1	@ 0008e072 8a46
.org 0x8e074
	ldrb r2, [r7, #13]	@ 0008e074 7a7b
.org 0x8e076
	ldrb r0, [r7, #15]	@ 0008e076 f87b
.org 0x8e078
	cmp r0, #0	@ 0008e078 0028
.org 0x8e07a
	bne.n 0x8e0c2	@ 0008e07a 22d1
.org 0x8e07c
	adds r3, r7, #0	@ 0008e07c 3b1c
.org 0x8e07e
	adds r3, #185	@ 0008e07e b933
.org 0x8e080
	ldrb r0, [r3, #0]	@ 0008e080 1878
.org 0x8e082
	strb r0, [r7, #18]	@ 0008e082 b874
.org 0x8e084
	adds r4, r7, #0	@ 0008e084 3c1c
.org 0x8e086
	adds r4, #186	@ 0008e086 ba34
.org 0x8e088
	ldrb r0, [r4, #0]	@ 0008e088 2078
.org 0x8e08a
	strb r0, [r7, #19]	@ 0008e08a f874
.org 0x8e08c
	ldr r1, [pc, #32]	@ 0008e08c 0849
.org 0x8e08e
	lsls r2, r2, #1	@ 0008e08e 5200
.org 0x8e090
	adds r0, r2, r1	@ 0008e090 5018
.org 0x8e092
	ldrb r0, [r0, #0]	@ 0008e092 0078
.org 0x8e094
	strb r0, [r3, #0]	@ 0008e094 1870
.org 0x8e096
	adds r1, #1	@ 0008e096 0131
.org 0x8e098
	adds r2, r2, r1	@ 0008e098 5218
.org 0x8e09a
	ldrb r0, [r2, #0]	@ 0008e09a 1078
.org 0x8e09c
	strb r0, [r4, #0]	@ 0008e09c 2070
.org 0x8e09e
	adds r2, r7, #0	@ 0008e09e 3a1c
.org 0x8e0a0
	adds r2, #188	@ 0008e0a0 bc32
.org 0x8e0a2
	movs r3, #0	@ 0008e0a2 0023
.org 0x8e0a4
	ldrsh r0, [r2, r3]	@ 0008e0a4 d05e
.org 0x8e0a6
	cmp r0, #0	@ 0008e0a6 0028
.org 0x8e0a8
	beq.n 0x8e0b4	@ 0008e0a8 04d0
.org 0x8e0aa
	adds r1, r7, #0	@ 0008e0aa 391c
.org 0x8e0ac
	adds r1, #192	@ 0008e0ac c031
.org 0x8e0ae
	b.n 0x8e0ba	@ 0008e0ae 04e0
.org 0x8e0b0
	.byte 0xf8,0xfa,0x85,0x08	@ 0008e0b0 data
.org 0x8e0b4
	adds r1, r7, #0	@ 0008e0b4 391c
.org 0x8e0b6
	adds r1, #192	@ 0008e0b6 c031
.org 0x8e0b8
	movs r0, #1	@ 0008e0b8 0120
.org 0x8e0ba
	str r0, [r1, #0]	@ 0008e0ba 0860
.org 0x8e0bc
	ldrb r0, [r7, #15]	@ 0008e0bc f87b
.org 0x8e0be
	adds r0, #1	@ 0008e0be 0130
.org 0x8e0c0
	strb r0, [r7, #15]	@ 0008e0c0 f873
.org 0x8e0c2
	adds r0, r7, #0	@ 0008e0c2 381c
.org 0x8e0c4
	bl 0x1cff0	@ 0008e0c4 8ef794ff
.org 0x8e0c8
	adds r1, r7, #0	@ 0008e0c8 391c
.org 0x8e0ca
	adds r1, #188	@ 0008e0ca bc31
.org 0x8e0cc
	ldrh r2, [r1, #0]	@ 0008e0cc 0a88
.org 0x8e0ce
	movs r3, #0	@ 0008e0ce 0023
.org 0x8e0d0
	ldrsh r0, [r1, r3]	@ 0008e0d0 c85e
.org 0x8e0d2
	cmp r0, #0	@ 0008e0d2 0028
.org 0x8e0d4
	beq.n 0x8e0da	@ 0008e0d4 01d0
.org 0x8e0d6
	subs r0, r2, #1	@ 0008e0d6 501e
.org 0x8e0d8
	strh r0, [r1, #0]	@ 0008e0d8 0880
.org 0x8e0da
	ldrh r6, [r1, #0]	@ 0008e0da 0e88
.org 0x8e0dc
	adds r0, r7, #0	@ 0008e0dc 381c
.org 0x8e0de
	adds r0, #192	@ 0008e0de c030
.org 0x8e0e0
	ldrh r0, [r0, #0]	@ 0008e0e0 0088
.org 0x8e0e2
	mov r8, r0	@ 0008e0e2 8046
.org 0x8e0e4
	adds r0, r7, #0	@ 0008e0e4 381c
.org 0x8e0e6
	adds r0, #185	@ 0008e0e6 b930
.org 0x8e0e8
	ldrb r4, [r0, #0]	@ 0008e0e8 0478
.org 0x8e0ea
	adds r1, r4, #0	@ 0008e0ea 211c
.org 0x8e0ec
	adds r1, #128	@ 0008e0ec 8031
.org 0x8e0ee
	lsls r1, r1, #24	@ 0008e0ee 0906
.org 0x8e0f0
	lsrs r1, r1, #24	@ 0008e0f0 090e
.org 0x8e0f2
	ldrb r0, [r7, #18]	@ 0008e0f2 b87c
.org 0x8e0f4
	adds r0, #128	@ 0008e0f4 8030
.org 0x8e0f6
	lsls r0, r0, #24	@ 0008e0f6 0006
.org 0x8e0f8
	lsrs r0, r0, #24	@ 0008e0f8 000e
.org 0x8e0fa
	subs r0, r1, r0	@ 0008e0fa 081a
.org 0x8e0fc
	muls r0, r6	@ 0008e0fc 7043
.org 0x8e0fe
	mov r1, r8	@ 0008e0fe 4146
.org 0x8e100
	bl 0x128fb8	@ 0008e100 9af05aff
.org 0x8e104
	subs r4, r4, r0	@ 0008e104 241a
.org 0x8e106
	lsls r4, r4, #24	@ 0008e106 2406
.org 0x8e108
	ldr r5, [pc, #116]	@ 0008e108 1d4d
.org 0x8e10a
	movs r0, #128	@ 0008e10a 8020
.org 0x8e10c
	lsls r0, r0, #23	@ 0008e10c c005
.org 0x8e10e
	adds r4, r4, r0	@ 0008e10e 2418
.org 0x8e110
	lsrs r4, r4, #23	@ 0008e110 e40d
.org 0x8e112
	adds r4, r4, r5	@ 0008e112 6419
.org 0x8e114
	movs r2, #0	@ 0008e114 0022
.org 0x8e116
	ldrsh r1, [r4, r2]	@ 0008e116 a15e
.org 0x8e118
	lsls r1, r1, #2	@ 0008e118 8900
.org 0x8e11a
	movs r3, #216	@ 0008e11a d823
.org 0x8e11c
	lsls r3, r3, #6	@ 0008e11c 9b01
.org 0x8e11e
	adds r1, r1, r3	@ 0008e11e c918
.org 0x8e120
	mov r2, sl	@ 0008e120 5246
.org 0x8e122
	lsls r0, r2, #1	@ 0008e122 5000
.org 0x8e124
	subs r0, #1	@ 0008e124 0138
.org 0x8e126
	muls r1, r0	@ 0008e126 4143
.org 0x8e128
	mov r3, r9	@ 0008e128 4b46
.org 0x8e12a
	ldr r0, [r3, #84]	@ 0008e12a 586d
.org 0x8e12c
	adds r0, r0, r1	@ 0008e12c 4018
.org 0x8e12e
	str r0, [r7, #84]	@ 0008e12e 7865
.org 0x8e130
	adds r0, r7, #0	@ 0008e130 381c
.org 0x8e132
	adds r0, #186	@ 0008e132 ba30
.org 0x8e134
	ldrb r4, [r0, #0]	@ 0008e134 0478
.org 0x8e136
	adds r1, r4, #0	@ 0008e136 211c
.org 0x8e138
	adds r1, #64	@ 0008e138 4031
.org 0x8e13a
	lsls r1, r1, #24	@ 0008e13a 0906
.org 0x8e13c
	lsrs r1, r1, #24	@ 0008e13c 090e
.org 0x8e13e
	ldrb r0, [r7, #19]	@ 0008e13e f87c
.org 0x8e140
	adds r0, #64	@ 0008e140 4030
.org 0x8e142
	lsls r0, r0, #24	@ 0008e142 0006
.org 0x8e144
	lsrs r0, r0, #24	@ 0008e144 000e
.org 0x8e146
	subs r0, r1, r0	@ 0008e146 081a
.org 0x8e148
	muls r0, r6	@ 0008e148 7043
.org 0x8e14a
	mov r1, r8	@ 0008e14a 4146
.org 0x8e14c
	bl 0x128fb8	@ 0008e14c 9af034ff
.org 0x8e150
	subs r4, r4, r0	@ 0008e150 241a
.org 0x8e152
	lsls r4, r4, #24	@ 0008e152 2406
.org 0x8e154
	mov r0, r9	@ 0008e154 4846
.org 0x8e156
	ldr r2, [r0, #88]	@ 0008e156 826d
.org 0x8e158
	movs r1, #192	@ 0008e158 c021
.org 0x8e15a
	lsls r1, r1, #4	@ 0008e15a 0901
.org 0x8e15c
	adds r2, r2, r1	@ 0008e15c 5218
.org 0x8e15e
	lsrs r4, r4, #23	@ 0008e15e e40d
.org 0x8e160
	adds r4, r4, r5	@ 0008e160 6419
.org 0x8e162
	movs r3, #0	@ 0008e162 0023
.org 0x8e164
	ldrsh r1, [r4, r3]	@ 0008e164 e15e
.org 0x8e166
	lsls r0, r1, #1	@ 0008e166 4800
.org 0x8e168
	adds r0, r0, r1	@ 0008e168 4018
.org 0x8e16a
	lsls r0, r0, #1	@ 0008e16a 4000
.org 0x8e16c
	adds r2, r2, r0	@ 0008e16c 1218
.org 0x8e16e
	str r2, [r7, #88]	@ 0008e16e ba65
.org 0x8e170
	pop {r3, r4, r5}	@ 0008e170 38bc
.org 0x8e172
	mov r8, r3	@ 0008e172 9846
.org 0x8e174
	mov r9, r4	@ 0008e174 a146
.org 0x8e176
	mov sl, r5	@ 0008e176 aa46
.org 0x8e178
	pop {r4, r5, r6, r7}	@ 0008e178 f0bc
