@ FUN_0800e074  entry 0x0800e074  size 622
.thumb
.org 0xe074
FUN_0800e074:
	push {r4, r5, r6, r7, lr}	@ 0000e074 f0b5
.org 0xe076
	mov r7, sl	@ 0000e076 5746
.org 0xe078
	mov r6, r9	@ 0000e078 4e46
.org 0xe07a
	mov r5, r8	@ 0000e07a 4546
.org 0xe07c
	push {r5, r6, r7}	@ 0000e07c e0b4
.org 0xe07e
	sub sp, #20	@ 0000e07e 85b0
.org 0xe080
	adds r7, r0, #0	@ 0000e080 071c
.org 0xe082
	ldr r0, [r7, #92]	@ 0000e082 f86d
.org 0xe084
	lsls r0, r0, #16	@ 0000e084 0004
.org 0xe086
	lsrs r1, r0, #16	@ 0000e086 010c
.org 0xe088
	str r1, [sp, #16]	@ 0000e088 0491
.org 0xe08a
	ldrb r5, [r7, #14]	@ 0000e08a bd7b
.org 0xe08c
	cmp r5, #0	@ 0000e08c 002d
.org 0xe08e
	bne.n 0xe16c	@ 0000e08e 6dd1
.org 0xe090
	lsrs r3, r0, #20	@ 0000e090 030d
.org 0xe092
	lsls r2, r3, #1	@ 0000e092 5a00
.org 0xe094
	ldr r4, [pc, #68]	@ 0000e094 114c
.org 0xe096
	adds r2, r2, r4	@ 0000e096 1219
.org 0xe098
	ldr r0, [r7, #100]	@ 0000e098 786e
.org 0xe09a
	ldr r6, [pc, #68]	@ 0000e09a 114e
.org 0xe09c
	adds r1, r6, #0	@ 0000e09c 311c
.org 0xe09e
	orrs r0, r1	@ 0000e09e 0843
.org 0xe0a0
	strh r0, [r2, #0]	@ 0000e0a0 1080
.org 0xe0a2
	lsls r3, r3, #2	@ 0000e0a2 9b00
.org 0xe0a4
	adds r0, r4, #0	@ 0000e0a4 201c
.org 0xe0a6
	adds r0, #8	@ 0000e0a6 0830
.org 0xe0a8
	adds r3, r3, r0	@ 0000e0a8 1b18
.org 0xe0aa
	str r5, [r3, #0]	@ 0000e0aa 1d60
.org 0xe0ac
	adds r0, r7, #0	@ 0000e0ac 381c
.org 0xe0ae
	adds r0, #104	@ 0000e0ae 6830
.org 0xe0b0
	strh r5, [r0, #0]	@ 0000e0b0 0580
.org 0xe0b2
	adds r0, #8	@ 0000e0b2 0830
.org 0xe0b4
	strh r5, [r0, #0]	@ 0000e0b4 0580
.org 0xe0b6
	ldr r1, [pc, #44]	@ 0000e0b6 0b49
.org 0xe0b8
	ldr r2, [pc, #44]	@ 0000e0b8 0b4a
.org 0xe0ba
	adds r0, r1, r2	@ 0000e0ba 8818
.org 0xe0bc
	ldrb r2, [r0, #0]	@ 0000e0bc 0278
.org 0xe0be
	adds r3, r1, #0	@ 0000e0be 0b1c
.org 0xe0c0
	cmp r2, #0	@ 0000e0c0 002a
.org 0xe0c2
	beq.n 0xe108	@ 0000e0c2 21d0
.org 0xe0c4
	ldr r6, [pc, #36]	@ 0000e0c4 094e
.org 0xe0c6
	adds r0, r3, r6	@ 0000e0c6 9819
.org 0xe0c8
	ldrb r1, [r0, #0]	@ 0000e0c8 0178
.org 0xe0ca
	movs r0, #15	@ 0000e0ca 0f20
.org 0xe0cc
	ands r0, r1	@ 0000e0cc 0840
.org 0xe0ce
	cmp r0, #3	@ 0000e0ce 0328
.org 0xe0d0
	bne.n 0xe0f0	@ 0000e0d0 0ed1
.org 0xe0d2
	adds r1, r7, #0	@ 0000e0d2 391c
.org 0xe0d4
	adds r1, #106	@ 0000e0d4 6a31
.org 0xe0d6
	movs r0, #254	@ 0000e0d6 fe20
.org 0xe0d8
	b.n 0xe0f6	@ 0000e0d8 0de0
.org 0xe0da
	.byte 0x00	@ 0000e0da data
.org 0xe0db
	.byte 0x00	@ 0000e0db data
.org 0xe0dc
	.byte 0x04,0x0a,0x00,0x02	@ 0000e0dc data
.org 0xe0e0
	.byte 0x45,0x40,0x00,0x00	@ 0000e0e0 data
.org 0xe0e4
	.byte 0xb0,0x0a,0x00,0x02	@ 0000e0e4 data
.org 0xe0e8
	.byte 0x24,0xd0,0x02,0x00	@ 0000e0e8 data
.org 0xe0ec
	.byte 0x10,0xc0,0x02,0x00	@ 0000e0ec data
.org 0xe0f0
	adds r1, r7, #0	@ 0000e0f0 391c
.org 0xe0f2
	adds r1, #106	@ 0000e0f2 6a31
.org 0xe0f4
	movs r0, #126	@ 0000e0f4 7e20
.org 0xe0f6
	strh r0, [r1, #0]	@ 0000e0f6 0880
.org 0xe0f8
	ldr r0, [pc, #8]	@ 0000e0f8 0248
.org 0xe0fa
	adds r1, r3, r0	@ 0000e0fa 1918
.org 0xe0fc
	movs r0, #0	@ 0000e0fc 0020
.org 0xe0fe
	strb r0, [r1, #0]	@ 0000e0fe 0870
.org 0xe100
	b.n 0xe10e	@ 0000e100 05e0
.org 0xe102
	.byte 0x00	@ 0000e102 data
.org 0xe103
	.byte 0x00	@ 0000e103 data
.org 0xe104
	.byte 0x24,0xd0,0x02,0x00	@ 0000e104 data
.org 0xe108
	adds r0, r7, #0	@ 0000e108 381c
.org 0xe10a
	adds r0, #106	@ 0000e10a 6a30
.org 0xe10c
	strh r2, [r0, #0]	@ 0000e10c 0280
.org 0xe10e
	movs r6, #0	@ 0000e10e 0026
.org 0xe110
	str r6, [r7, #108]	@ 0000e110 fe66
.org 0xe112
	ldr r1, [sp, #16]	@ 0000e112 0499
.org 0xe114
	lsrs r5, r1, #4	@ 0000e114 0d09
.org 0xe116
	lsls r5, r5, #1	@ 0000e116 6d00
.org 0xe118
	adds r5, r5, r4	@ 0000e118 2d19
.org 0xe11a
	ldrh r0, [r5, #0]	@ 0000e11a 2888
.org 0xe11c
	movs r4, #248	@ 0000e11c f824
.org 0xe11e
	lsls r4, r4, #5	@ 0000e11e 6401
.org 0xe120
	adds r1, r4, #0	@ 0000e120 211c
.org 0xe122
	ands r1, r0	@ 0000e122 0140
.org 0xe124
	lsls r1, r1, #3	@ 0000e124 c900
.org 0xe126
	movs r0, #192	@ 0000e126 c020
.org 0xe128
	lsls r0, r0, #19	@ 0000e128 c004
.org 0xe12a
	adds r1, r1, r0	@ 0000e12a 0918
.org 0xe12c
	str r6, [sp, #0]	@ 0000e12c 0096
.org 0xe12e
	ldr r2, [pc, #300]	@ 0000e12e 4b4a
.org 0xe130
	mov r0, sp	@ 0000e130 6846
.org 0xe132
	bl 0x128be0	@ 0000e132 1af155fd
.org 0xe136
	ldr r0, [pc, #296]	@ 0000e136 4a48
.org 0xe138
	ldr r0, [r0, #0]	@ 0000e138 0068
.org 0xe13a
	ldr r2, [pc, #296]	@ 0000e13a 4a4a
.org 0xe13c
	adds r0, r0, r2	@ 0000e13c 8018
.org 0xe13e
	ldrh r2, [r5, #0]	@ 0000e13e 2a88
.org 0xe140
	adds r1, r4, #0	@ 0000e140 211c
.org 0xe142
	ands r1, r2	@ 0000e142 1140
.org 0xe144
	lsls r1, r1, #3	@ 0000e144 c900
.org 0xe146
	ldr r3, [pc, #288]	@ 0000e146 484b
.org 0xe148
	adds r1, r1, r3	@ 0000e148 c918
.org 0xe14a
	movs r2, #160	@ 0000e14a a022
.org 0xe14c
	bl 0x128be0	@ 0000e14c 1af148fd
.org 0xe150
	ldrh r0, [r5, #0]	@ 0000e150 2888
.org 0xe152
	ands r4, r0	@ 0000e152 0440
.org 0xe154
	lsls r4, r4, #3	@ 0000e154 e400
.org 0xe156
	ldr r0, [pc, #276]	@ 0000e156 4548
.org 0xe158
	adds r4, r4, r0	@ 0000e158 2418
.org 0xe15a
	str r6, [sp, #4]	@ 0000e15a 0196
.org 0xe15c
	add r0, sp, #4	@ 0000e15c 01a8
.org 0xe15e
	ldr r2, [pc, #272]	@ 0000e15e 444a
.org 0xe160
	adds r1, r4, #0	@ 0000e160 211c
.org 0xe162
	bl 0x128be0	@ 0000e162 1af13dfd
.org 0xe166
	ldrb r0, [r7, #14]	@ 0000e166 b87b
.org 0xe168
	adds r0, #1	@ 0000e168 0130
.org 0xe16a
	strb r0, [r7, #14]	@ 0000e16a b873
.org 0xe16c
	adds r0, r7, #0	@ 0000e16c 381c
.org 0xe16e
	adds r0, #104	@ 0000e16e 6830
.org 0xe170
	ldrh r1, [r0, #0]	@ 0000e170 0188
.org 0xe172
	mov r8, r0	@ 0000e172 8046
.org 0xe174
	cmp r1, #0	@ 0000e174 0029
.org 0xe176
	bne.n 0xe17a	@ 0000e176 00d1
.org 0xe178
	b.n 0xe27c	@ 0000e178 80e0
.org 0xe17a
	movs r2, #128	@ 0000e17a 8022
.org 0xe17c
	lsls r2, r2, #17	@ 0000e17c 5204
.org 0xe17e
	mov sl, r2	@ 0000e17e 9246
.org 0xe180
	lsrs r4, r2, #16	@ 0000e180 140c
.org 0xe182
	cmp r1, r4	@ 0000e182 a142
.org 0xe184
	bne.n 0xe1a6	@ 0000e184 0fd1
.org 0xe186
	ldr r0, [r7, #52]	@ 0000e186 786b
.org 0xe188
	lsls r0, r0, #8	@ 0000e188 0002
.org 0xe18a
	movs r3, #192	@ 0000e18a c023
.org 0xe18c
	lsls r3, r3, #9	@ 0000e18c 5b02
.org 0xe18e
	adds r0, r0, r3	@ 0000e18e c018
.org 0xe190
	str r0, [sp, #8]	@ 0000e190 0290
.org 0xe192
	movs r1, #190	@ 0000e192 be21
.org 0xe194
	lsls r1, r1, #10	@ 0000e194 8902
.org 0xe196
	add r0, sp, #8	@ 0000e196 02a8
.org 0xe198
	str r1, [r0, #4]	@ 0000e198 4160
.org 0xe19a
	movs r1, #0	@ 0000e19a 0021
.org 0xe19c
	bl 0xf20c4	@ 0000e19c e3f092ff
.org 0xe1a0
	movs r0, #90	@ 0000e1a0 5a20
.org 0xe1a2
	bl 0x2b10	@ 0000e1a2 f4f7b5fc
.org 0xe1a6
	mov r6, r8	@ 0000e1a6 4646
.org 0xe1a8
	ldrh r0, [r6, #0]	@ 0000e1a8 3088
.org 0xe1aa
	adds r0, r0, r4	@ 0000e1aa 0019
.org 0xe1ac
	movs r1, #0	@ 0000e1ac 0021
.org 0xe1ae
	mov r9, r1	@ 0000e1ae 8946
.org 0xe1b0
	strh r0, [r6, #0]	@ 0000e1b0 3080
.org 0xe1b2
	ldrh r2, [r6, #0]	@ 0000e1b2 3288
.org 0xe1b4
	ldr r0, [r7, #108]	@ 0000e1b4 f86e
.org 0xe1b6
	ldr r1, [r7, #52]	@ 0000e1b6 796b
.org 0xe1b8
	subs r0, r0, r1	@ 0000e1b8 401a
.org 0xe1ba
	lsls r0, r0, #4	@ 0000e1ba 0001
.org 0xe1bc
	movs r3, #128	@ 0000e1bc 8023
.org 0xe1be
	lsls r3, r3, #7	@ 0000e1be db01
.org 0xe1c0
	adds r0, r0, r3	@ 0000e1c0 c018
.org 0xe1c2
	cmp r2, r0	@ 0000e1c2 8242
.org 0xe1c4
	bgt.n 0xe1c8	@ 0000e1c4 00dc
.org 0xe1c6
	b.n 0xe2ee	@ 0000e1c6 92e0
.org 0xe1c8
	ldr r6, [sp, #16]	@ 0000e1c8 049e
.org 0xe1ca
	lsrs r5, r6, #4	@ 0000e1ca 3509
.org 0xe1cc
	lsls r5, r5, #1	@ 0000e1cc 6d00
.org 0xe1ce
	ldr r0, [pc, #164]	@ 0000e1ce 2948
.org 0xe1d0
	adds r5, r5, r0	@ 0000e1d0 2d18
.org 0xe1d2
	ldrh r0, [r5, #0]	@ 0000e1d2 2888
.org 0xe1d4
	movs r4, #248	@ 0000e1d4 f824
.org 0xe1d6
	lsls r4, r4, #5	@ 0000e1d6 6401
.org 0xe1d8
	adds r1, r4, #0	@ 0000e1d8 211c
.org 0xe1da
	ands r1, r0	@ 0000e1da 0140
.org 0xe1dc
	lsls r1, r1, #3	@ 0000e1dc c900
.org 0xe1de
	movs r0, #192	@ 0000e1de c020
.org 0xe1e0
	lsls r0, r0, #19	@ 0000e1e0 c004
.org 0xe1e2
	adds r1, r1, r0	@ 0000e1e2 0918
.org 0xe1e4
	mov r0, r9	@ 0000e1e4 4846
.org 0xe1e6
	str r0, [sp, #4]	@ 0000e1e6 0190
.org 0xe1e8
	add r6, sp, #4	@ 0000e1e8 01ae
.org 0xe1ea
	movs r2, #128	@ 0000e1ea 8022
.org 0xe1ec
	lsls r2, r2, #2	@ 0000e1ec 9200
.org 0xe1ee
	mov r3, sl	@ 0000e1ee 5346
.org 0xe1f0
	orrs r2, r3	@ 0000e1f0 1a43
.org 0xe1f2
	adds r0, r6, #0	@ 0000e1f2 301c
.org 0xe1f4
	bl 0x128be0	@ 0000e1f4 1af1f4fc
.org 0xe1f8
	ldr r0, [pc, #100]	@ 0000e1f8 1948
.org 0xe1fa
	ldr r0, [r0, #0]	@ 0000e1fa 0068
.org 0xe1fc
	ldr r1, [pc, #100]	@ 0000e1fc 1949
.org 0xe1fe
	adds r0, r0, r1	@ 0000e1fe 4018
.org 0xe200
	ldrh r2, [r5, #0]	@ 0000e200 2a88
.org 0xe202
	adds r1, r4, #0	@ 0000e202 211c
.org 0xe204
	ands r1, r2	@ 0000e204 1140
.org 0xe206
	lsls r1, r1, #3	@ 0000e206 c900
.org 0xe208
	ldr r2, [pc, #92]	@ 0000e208 174a
.org 0xe20a
	adds r1, r1, r2	@ 0000e20a 8918
.org 0xe20c
	movs r2, #160	@ 0000e20c a022
.org 0xe20e
	bl 0x128be0	@ 0000e20e 1af1e7fc
.org 0xe212
	ldrh r0, [r5, #0]	@ 0000e212 2888
.org 0xe214
	ands r4, r0	@ 0000e214 0440
.org 0xe216
	lsls r4, r4, #3	@ 0000e216 e400
.org 0xe218
	ldr r3, [pc, #80]	@ 0000e218 144b
.org 0xe21a
	adds r4, r4, r3	@ 0000e21a e418
.org 0xe21c
	mov r0, r9	@ 0000e21c 4846
.org 0xe21e
	str r0, [sp, #4]	@ 0000e21e 0190
.org 0xe220
	movs r2, #176	@ 0000e220 b022
.org 0xe222
	lsls r2, r2, #1	@ 0000e222 5200
.org 0xe224
	mov r1, sl	@ 0000e224 5146
.org 0xe226
	orrs r2, r1	@ 0000e226 0a43
.org 0xe228
	adds r0, r6, #0	@ 0000e228 301c
.org 0xe22a
	adds r1, r4, #0	@ 0000e22a 211c
.org 0xe22c
	bl 0x128be0	@ 0000e22c 1af1d8fc
.org 0xe230
	mov r3, r9	@ 0000e230 4b46
.org 0xe232
	mov r2, r8	@ 0000e232 4246
.org 0xe234
	strh r3, [r2, #0]	@ 0000e234 1380
.org 0xe236
	adds r0, r7, #0	@ 0000e236 381c
.org 0xe238
	adds r0, #112	@ 0000e238 7030
.org 0xe23a
	strh r3, [r0, #0]	@ 0000e23a 0380
.org 0xe23c
	ldr r3, [pc, #56]	@ 0000e23c 0e4b
.org 0xe23e
	movs r6, #174	@ 0000e23e ae26
.org 0xe240
	lsls r6, r6, #1	@ 0000e240 7600
.org 0xe242
	adds r2, r3, r6	@ 0000e242 9a19
.org 0xe244
	ldrh r1, [r2, #0]	@ 0000e244 1188
.org 0xe246
	movs r0, #128	@ 0000e246 8020
.org 0xe248
	lsls r0, r0, #7	@ 0000e248 c001
.org 0xe24a
	orrs r0, r1	@ 0000e24a 0843
.org 0xe24c
	strh r0, [r2, #0]	@ 0000e24c 1080
.org 0xe24e
	movs r0, #175	@ 0000e24e af20
.org 0xe250
	lsls r0, r0, #1	@ 0000e250 4000
.org 0xe252
	adds r1, r3, r0	@ 0000e252 1918
.org 0xe254
	movs r0, #128	@ 0000e254 8020
.org 0xe256
	lsls r0, r0, #8	@ 0000e256 0002
.org 0xe258
	b.n 0xe2ec	@ 0000e258 48e0
.org 0xe25a
	.byte 0x00	@ 0000e25a data
.org 0xe25b
	.byte 0x00	@ 0000e25b data
.org 0xe25c
	.byte 0x00,0x02,0x00,0x01	@ 0000e25c data
.org 0xe260
	.byte 0xd8,0xc0,0xb2,0x08	@ 0000e260 data
.org 0xe264
	.byte 0xe0,0xc0,0xb2,0x08	@ 0000e264 data
.org 0xe268
	.byte 0x00,0x08,0x00,0x06	@ 0000e268 data
.org 0xe26c
	.byte 0x80,0x0a,0x00,0x06	@ 0000e26c data
.org 0xe270
	.byte 0x60,0x01,0x00,0x01	@ 0000e270 data
.org 0xe274
	.byte 0x04,0x0a,0x00,0x02	@ 0000e274 data
.org 0xe278
	.byte 0x10,0xe9,0x02,0x02	@ 0000e278 data
.org 0xe27c
	movs r4, #128	@ 0000e27c 8024
.org 0xe27e
	lsls r4, r4, #1	@ 0000e27e 6400
.org 0xe280
	ldr r0, [pc, #128]	@ 0000e280 2048
.org 0xe282
	ldr r1, [pc, #132]	@ 0000e282 2149
.org 0xe284
	adds r0, r0, r1	@ 0000e284 4018
.org 0xe286
	ldrb r1, [r0, #0]	@ 0000e286 0178
.org 0xe288
	movs r0, #15	@ 0000e288 0f20
.org 0xe28a
	ands r0, r1	@ 0000e28a 0840
.org 0xe28c
	cmp r0, #3	@ 0000e28c 0328
.org 0xe28e
	bne.n 0xe292	@ 0000e28e 00d1
.org 0xe290
	adds r4, #128	@ 0000e290 8034
.org 0xe292
	ldr r3, [pc, #120]	@ 0000e292 1e4b
.org 0xe294
	ldrh r1, [r3, #8]	@ 0000e294 1989
.org 0xe296
	movs r0, #8	@ 0000e296 0820
.org 0xe298
	ands r0, r1	@ 0000e298 0840
.org 0xe29a
	adds r2, r7, #0	@ 0000e29a 3a1c
.org 0xe29c
	adds r2, #106	@ 0000e29c 6a32
.org 0xe29e
	adds r5, r3, #0	@ 0000e29e 1d1c
.org 0xe2a0
	adds r3, r4, #0	@ 0000e2a0 231c
.org 0xe2a2
	subs r3, #120	@ 0000e2a2 783b
.org 0xe2a4
	cmp r0, #0	@ 0000e2a4 0028
.org 0xe2a6
	beq.n 0xe2ae	@ 0000e2a6 02d0
.org 0xe2a8
	ldrh r0, [r2, #0]	@ 0000e2a8 1088
.org 0xe2aa
	cmp r0, r3	@ 0000e2aa 9842
.org 0xe2ac
	blt.n 0xe2ee	@ 0000e2ac 1fdb
.org 0xe2ae
	ldrh r0, [r2, #0]	@ 0000e2ae 1088
.org 0xe2b0
	adds r0, #1	@ 0000e2b0 0130
.org 0xe2b2
	strh r0, [r2, #0]	@ 0000e2b2 1080
.org 0xe2b4
	ldrh r1, [r2, #0]	@ 0000e2b4 1188
.org 0xe2b6
	cmp r1, r3	@ 0000e2b6 9942
.org 0xe2b8
	beq.n 0xe2c2	@ 0000e2b8 03d0
.org 0xe2ba
	adds r0, r4, #0	@ 0000e2ba 201c
.org 0xe2bc
	subs r0, #60	@ 0000e2bc 3c38
.org 0xe2be
	cmp r1, r0	@ 0000e2be 8142
.org 0xe2c0
	bne.n 0xe2ce	@ 0000e2c0 05d1
.org 0xe2c2
	movs r3, #174	@ 0000e2c2 ae23
.org 0xe2c4
	lsls r3, r3, #1	@ 0000e2c4 5b00
.org 0xe2c6
	adds r1, r5, r3	@ 0000e2c6 e918
.org 0xe2c8
	movs r0, #128	@ 0000e2c8 8020
.org 0xe2ca
	lsls r0, r0, #8	@ 0000e2ca 0002
.org 0xe2cc
	strh r0, [r1, #0]	@ 0000e2cc 0880
.org 0xe2ce
	ldrh r0, [r2, #0]	@ 0000e2ce 1088
.org 0xe2d0
	cmp r0, r4	@ 0000e2d0 a042
.org 0xe2d2
	bcc.n 0xe2ee	@ 0000e2d2 0cd3
.org 0xe2d4
	movs r1, #0	@ 0000e2d4 0021
.org 0xe2d6
	movs r0, #128	@ 0000e2d6 8020
.org 0xe2d8
	lsls r0, r0, #1	@ 0000e2d8 4000
.org 0xe2da
	mov r6, r8	@ 0000e2da 4646
.org 0xe2dc
	strh r0, [r6, #0]	@ 0000e2dc 3080
.org 0xe2de
	ldr r0, [r7, #52]	@ 0000e2de 786b
.org 0xe2e0
	str r0, [r7, #108]	@ 0000e2e0 f866
