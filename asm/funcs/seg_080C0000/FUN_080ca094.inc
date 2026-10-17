@ FUN_080ca094  entry 0x080ca094  size 446
.thumb
.org 0xca094
FUN_080ca094:
	push {r4, r5, r6, r7, lr}	@ 000ca094 f0b5
.org 0xca096
	mov r7, r8	@ 000ca096 4746
.org 0xca098
	push {r7}	@ 000ca098 80b4
.org 0xca09a
	adds r4, r0, #0	@ 000ca09a 041c
.org 0xca09c
	ldrb r5, [r4, #14]	@ 000ca09c a57b
.org 0xca09e
	cmp r5, #0	@ 000ca09e 002d
.org 0xca0a0
	bne.n 0xca114	@ 000ca0a0 38d1
.org 0xca0a2
	ldrb r1, [r4, #10]	@ 000ca0a2 a17a
.org 0xca0a4
	movs r0, #1	@ 000ca0a4 0120
.org 0xca0a6
	orrs r0, r1	@ 000ca0a6 0843
.org 0xca0a8
	strb r0, [r4, #10]	@ 000ca0a8 a072
.org 0xca0aa
	adds r1, r4, #0	@ 000ca0aa 211c
.org 0xca0ac
	adds r1, #181	@ 000ca0ac b531
.org 0xca0ae
	movs r0, #1	@ 000ca0ae 0120
.org 0xca0b0
	strb r0, [r1, #0]	@ 000ca0b0 0870
.org 0xca0b2
	ldrb r0, [r4, #17]	@ 000ca0b2 607c
.org 0xca0b4
	cmp r0, #3	@ 000ca0b4 0328
.org 0xca0b6
	beq.n 0xca10e	@ 000ca0b6 2ad0
.org 0xca0b8
	ldr r0, [r4, #44]	@ 000ca0b8 e06a
.org 0xca0ba
	cmp r0, #0	@ 000ca0ba 0028
.org 0xca0bc
	beq.n 0xca10e	@ 000ca0bc 27d0
.org 0xca0be
	adds r1, #1	@ 000ca0be 0131
.org 0xca0c0
	ldrb r1, [r1, #0]	@ 000ca0c0 0978
.org 0xca0c2
	adds r0, #182	@ 000ca0c2 b630
.org 0xca0c4
	strb r1, [r0, #0]	@ 000ca0c4 0170
.org 0xca0c6
	ldr r0, [r4, #44]	@ 000ca0c6 e06a
.org 0xca0c8
	adds r0, #184	@ 000ca0c8 b830
.org 0xca0ca
	adds r1, r4, #0	@ 000ca0ca 211c
.org 0xca0cc
	adds r1, #184	@ 000ca0cc b831
.org 0xca0ce
	ldr r1, [r1, #0]	@ 000ca0ce 0968
.org 0xca0d0
	str r1, [r0, #0]	@ 000ca0d0 0160
.org 0xca0d2
	ldr r0, [r4, #44]	@ 000ca0d2 e06a
.org 0xca0d4
	adds r0, #188	@ 000ca0d4 bc30
.org 0xca0d6
	adds r1, r4, #0	@ 000ca0d6 211c
.org 0xca0d8
	adds r1, #188	@ 000ca0d8 bc31
.org 0xca0da
	ldr r1, [r1, #0]	@ 000ca0da 0968
.org 0xca0dc
	str r1, [r0, #0]	@ 000ca0dc 0160
.org 0xca0de
	ldr r1, [r4, #44]	@ 000ca0de e16a
.org 0xca0e0
	movs r0, #2	@ 000ca0e0 0220
.org 0xca0e2
	strb r0, [r1, #13]	@ 000ca0e2 4873
.org 0xca0e4
	ldr r0, [r4, #44]	@ 000ca0e4 e06a
.org 0xca0e6
	strb r5, [r0, #14]	@ 000ca0e6 8573
.org 0xca0e8
	adds r0, r4, #0	@ 000ca0e8 201c
.org 0xca0ea
	adds r0, #193	@ 000ca0ea c130
.org 0xca0ec
	ldrb r1, [r0, #0]	@ 000ca0ec 0178
.org 0xca0ee
	cmp r1, #1	@ 000ca0ee 0129
.org 0xca0f0
	bne.n 0xca0f8	@ 000ca0f0 02d1
.org 0xca0f2
	ldr r0, [r4, #44]	@ 000ca0f2 e06a
.org 0xca0f4
	adds r0, #193	@ 000ca0f4 c130
.org 0xca0f6
	strb r1, [r0, #0]	@ 000ca0f6 0170
.org 0xca0f8
	ldr r1, [r4, #44]	@ 000ca0f8 e16a
.org 0xca0fa
	ldr r0, [r1, #40]	@ 000ca0fa 886a
.org 0xca0fc
	cmp r0, #0	@ 000ca0fc 0028
.org 0xca0fe
	beq.n 0xca106	@ 000ca0fe 02d0
.org 0xca100
	adds r0, r1, #0	@ 000ca100 081c
.org 0xca102
	bl 0xca468	@ 000ca102 00f0b1f9
.org 0xca106
	ldr r1, [r4, #44]	@ 000ca106 e16a
.org 0xca108
	ldr r0, [r4, #40]	@ 000ca108 a06a
.org 0xca10a
	str r0, [r1, #40]	@ 000ca10a 8862
.org 0xca10c
	str r5, [r4, #40]	@ 000ca10c a562
.org 0xca10e
	ldrb r0, [r4, #14]	@ 000ca10e a07b
.org 0xca110
	adds r0, #1	@ 000ca110 0130
.org 0xca112
	strb r0, [r4, #14]	@ 000ca112 a073
.org 0xca114
	adds r0, r4, #0	@ 000ca114 201c
.org 0xca116
	bl 0xca024	@ 000ca116 fff785ff
.org 0xca11a
	adds r0, r4, #0	@ 000ca11a 201c
.org 0xca11c
	bl 0xca298	@ 000ca11c 00f0bcf8
.org 0xca120
	lsls r0, r0, #24	@ 000ca120 0006
.org 0xca122
	cmp r0, #0	@ 000ca122 0028
.org 0xca124
	bne.n 0xca128	@ 000ca124 00d1
.org 0xca126
	b.n 0xca258	@ 000ca126 97e0
.org 0xca128
	adds r0, r4, #0	@ 000ca128 201c
.org 0xca12a
	adds r0, #193	@ 000ca12a c130
.org 0xca12c
	ldrb r0, [r0, #0]	@ 000ca12c 0078
.org 0xca12e
	cmp r0, #1	@ 000ca12e 0128
.org 0xca130
	bne.n 0xca14c	@ 000ca130 0cd1
.org 0xca132
	ldr r1, [pc, #20]	@ 000ca132 0549
.org 0xca134
	ldrb r0, [r4, #9]	@ 000ca134 607a
.org 0xca136
	lsls r0, r0, #2	@ 000ca136 8000
.org 0xca138
	adds r0, r0, r1	@ 000ca138 4018
.org 0xca13a
	movs r1, #2	@ 000ca13a 0221
.org 0xca13c
	str r1, [r4, #12]	@ 000ca13c e160
.org 0xca13e
	ldr r0, [r0, #0]	@ 000ca13e 0068
.org 0xca140
	ldr r0, [r0, #8]	@ 000ca140 8068
.org 0xca142
	str r0, [r4, #20]	@ 000ca142 6061
.org 0xca144
	b.n 0xca258	@ 000ca144 88e0
.org 0xca146
	.byte 0x00	@ 000ca146 data
.org 0xca147
	.byte 0x00	@ 000ca147 data
.org 0xca148
	.byte 0xf4,0x49,0x86,0x08	@ 000ca148 data
.org 0xca14c
	adds r0, r4, #0	@ 000ca14c 201c
.org 0xca14e
	adds r0, #184	@ 000ca14e b830
.org 0xca150
	ldr r0, [r0, #0]	@ 000ca150 0068
.org 0xca152
	str r0, [r4, #84]	@ 000ca152 6065
.org 0xca154
	adds r0, r4, #0	@ 000ca154 201c
.org 0xca156
	adds r0, #188	@ 000ca156 bc30
.org 0xca158
	ldr r0, [r0, #0]	@ 000ca158 0068
.org 0xca15a
	str r0, [r4, #88]	@ 000ca15a a065
.org 0xca15c
	adds r1, r4, #0	@ 000ca15c 211c
.org 0xca15e
	adds r1, #180	@ 000ca15e b431
.org 0xca160
	movs r2, #0	@ 000ca160 0022
.org 0xca162
	movs r0, #1	@ 000ca162 0120
.org 0xca164
	strb r0, [r1, #0]	@ 000ca164 0870
.org 0xca166
	ldrb r0, [r4, #17]	@ 000ca166 607c
.org 0xca168
	cmp r0, #0	@ 000ca168 0028
.org 0xca16a
	beq.n 0xca17a	@ 000ca16a 06d0
.org 0xca16c
	ldrb r1, [r4, #10]	@ 000ca16c a17a
.org 0xca16e
	movs r0, #254	@ 000ca16e fe20
.org 0xca170
	ands r0, r1	@ 000ca170 0840
.org 0xca172
	strb r0, [r4, #10]	@ 000ca172 a072
.org 0xca174
	adds r0, r4, #0	@ 000ca174 201c
.org 0xca176
	adds r0, #181	@ 000ca176 b530
.org 0xca178
	strb r2, [r0, #0]	@ 000ca178 0270
.org 0xca17a
	str r2, [r4, #92]	@ 000ca17a e265
.org 0xca17c
	movs r0, #128	@ 000ca17c 8020
.org 0xca17e
	lsls r0, r0, #2	@ 000ca17e 8000
.org 0xca180
	str r0, [r4, #96]	@ 000ca180 2066
.org 0xca182
	ldrb r1, [r4, #10]	@ 000ca182 a17a
.org 0xca184
	movs r0, #239	@ 000ca184 ef20
.org 0xca186
	ands r0, r1	@ 000ca186 0840
.org 0xca188
	strb r0, [r4, #10]	@ 000ca188 a072
.org 0xca18a
	adds r0, r4, #0	@ 000ca18a 201c
.org 0xca18c
	adds r0, #76	@ 000ca18c 4c30
.org 0xca18e
	strb r2, [r0, #0]	@ 000ca18e 0270
.org 0xca190
	adds r1, r4, #0	@ 000ca190 211c
.org 0xca192
	adds r1, #74	@ 000ca192 4a31
.org 0xca194
	ldrb r2, [r1, #0]	@ 000ca194 0a78
.org 0xca196
	movs r0, #17	@ 000ca196 1120
.org 0xca198
	negs r0, r0	@ 000ca198 4042
.org 0xca19a
	ands r0, r2	@ 000ca19a 1040
.org 0xca19c
	strb r0, [r1, #0]	@ 000ca19c 0870
.org 0xca19e
	adds r0, r4, #0	@ 000ca19e 201c
.org 0xca1a0
	adds r0, #182	@ 000ca1a0 b630
.org 0xca1a2
	ldrb r2, [r0, #0]	@ 000ca1a2 0278
.org 0xca1a4
	mov r8, r0	@ 000ca1a4 8046
.org 0xca1a6
	adds r5, r1, #0	@ 000ca1a6 0d1c
.org 0xca1a8
	cmp r2, #0	@ 000ca1a8 002a
.org 0xca1aa
	beq.n 0xca1b4	@ 000ca1aa 03d0
.org 0xca1ac
	ldrb r0, [r4, #10]	@ 000ca1ac a07a
.org 0xca1ae
	movs r1, #32	@ 000ca1ae 2021
.org 0xca1b0
	orrs r0, r1	@ 000ca1b0 0843
.org 0xca1b2
	b.n 0xca1ba	@ 000ca1b2 02e0
.org 0xca1b4
	ldrb r1, [r4, #10]	@ 000ca1b4 a17a
.org 0xca1b6
	movs r0, #223	@ 000ca1b6 df20
.org 0xca1b8
	ands r0, r1	@ 000ca1b8 0840
.org 0xca1ba
	strb r0, [r4, #10]	@ 000ca1ba a072
.org 0xca1bc
	movs r7, #1	@ 000ca1bc 0127
.org 0xca1be
	adds r1, r7, #0	@ 000ca1be 391c
.org 0xca1c0
	ands r1, r2	@ 000ca1c0 1140
.org 0xca1c2
	adds r3, r4, #0	@ 000ca1c2 231c
.org 0xca1c4
	adds r3, #77	@ 000ca1c4 4d33
.org 0xca1c6
	strb r1, [r3, #0]	@ 000ca1c6 1970
.org 0xca1c8
	lsls r1, r1, #5	@ 000ca1c8 4901
.org 0xca1ca
	ldrb r2, [r5, #0]	@ 000ca1ca 2a78
.org 0xca1cc
	movs r0, #33	@ 000ca1cc 2120
.org 0xca1ce
	negs r0, r0	@ 000ca1ce 4042
.org 0xca1d0
	ands r0, r2	@ 000ca1d0 1040
.org 0xca1d2
	orrs r0, r1	@ 000ca1d2 0843
.org 0xca1d4
	strb r0, [r5, #0]	@ 000ca1d4 2870
.org 0xca1d6
	ldrb r0, [r4, #17]	@ 000ca1d6 607c
.org 0xca1d8
	adds r6, r3, #0	@ 000ca1d8 1e1c
.org 0xca1da
	cmp r0, #0	@ 000ca1da 0028
.org 0xca1dc
	bne.n 0xca1ec	@ 000ca1dc 06d1
.org 0xca1de
	ldr r1, [pc, #8]	@ 000ca1de 0249
.org 0xca1e0
	adds r0, r4, #0	@ 000ca1e0 201c
.org 0xca1e2
	bl 0x1cf00	@ 000ca1e2 52f78dfe
.org 0xca1e6
	b.n 0xca232	@ 000ca1e6 24e0
.org 0xca1e8
	.byte 0x0b,0x75,0x00,0x00	@ 000ca1e8 data
.org 0xca1ec
	cmp r0, #3	@ 000ca1ec 0328
.org 0xca1ee
	bne.n 0xca22a	@ 000ca1ee 1cd1
.org 0xca1f0
	ldr r1, [pc, #24]	@ 000ca1f0 0649
.org 0xca1f2
	adds r0, r4, #0	@ 000ca1f2 201c
.org 0xca1f4
	bl 0x1cf00	@ 000ca1f4 52f784fe
.org 0xca1f8
	ldrb r2, [r4, #10]	@ 000ca1f8 a27a
.org 0xca1fa
	lsrs r0, r2, #5	@ 000ca1fa 5009
.org 0xca1fc
	adds r1, r7, #0	@ 000ca1fc 391c
.org 0xca1fe
	bics r1, r0	@ 000ca1fe 8143
.org 0xca200
	cmp r1, #0	@ 000ca200 0029
.org 0xca202
	beq.n 0xca210	@ 000ca202 05d0
.org 0xca204
	movs r0, #32	@ 000ca204 2020
.org 0xca206
	orrs r0, r2	@ 000ca206 1043
.org 0xca208
	b.n 0xca214	@ 000ca208 04e0
.org 0xca20a
	.byte 0x00	@ 000ca20a data
.org 0xca20b
	.byte 0x00	@ 000ca20b data
.org 0xca20c
	.byte 0x0b,0x75,0x00,0x00	@ 000ca20c data
.org 0xca210
	movs r0, #223	@ 000ca210 df20
.org 0xca212
	ands r0, r2	@ 000ca212 1040
.org 0xca214
	strb r0, [r4, #10]	@ 000ca214 a072
.org 0xca216
	adds r0, r1, #0	@ 000ca216 081c
.org 0xca218
	strb r0, [r6, #0]	@ 000ca218 3070
.org 0xca21a
	lsls r0, r0, #5	@ 000ca21a 4001
.org 0xca21c
	ldrb r2, [r5, #0]	@ 000ca21c 2a78
.org 0xca21e
	movs r1, #33	@ 000ca21e 2121
.org 0xca220
	negs r1, r1	@ 000ca220 4942
.org 0xca222
	ands r1, r2	@ 000ca222 1140
.org 0xca224
	orrs r1, r0	@ 000ca224 0143
.org 0xca226
	strb r1, [r5, #0]	@ 000ca226 2970
.org 0xca228
	b.n 0xca232	@ 000ca228 03e0
.org 0xca22a
	ldr r1, [pc, #56]	@ 000ca22a 0e49
.org 0xca22c
	adds r0, r4, #0	@ 000ca22c 201c
.org 0xca22e
	bl 0x1cf00	@ 000ca22e 52f767fe
.org 0xca232
	adds r0, r4, #0	@ 000ca232 201c
.org 0xca234
	bl 0xca2ec	@ 000ca234 00f05af8
.org 0xca238
	mov r1, r8	@ 000ca238 4146
.org 0xca23a
	ldrb r0, [r1, #0]	@ 000ca23a 0878
.org 0xca23c
	cmp r0, #0	@ 000ca23c 0028
.org 0xca23e
	bne.n 0xca250	@ 000ca23e 07d1
.org 0xca240
	ldr r0, [r4, #96]	@ 000ca240 206e
.org 0xca242
	lsls r0, r0, #8	@ 000ca242 0002
.org 0xca244
	negs r0, r0	@ 000ca244 4042
.org 0xca246
	cmp r0, #0	@ 000ca246 0028
.org 0xca248
	bge.n 0xca24c	@ 000ca248 00da
.org 0xca24a
	adds r0, #255	@ 000ca24a ff30
.org 0xca24c
	asrs r0, r0, #8	@ 000ca24c 0012
.org 0xca24e
	str r0, [r4, #96]	@ 000ca24e 2066
.org 0xca250
	movs r1, #0	@ 000ca250 0021
