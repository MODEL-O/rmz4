@ FUN_0811d090  entry 0x0811d090  size 610
.thumb
.org 0x11d090
FUN_0811d090:
	push {r4, r5, r6, r7, lr}	@ 0011d090 f0b5
.org 0x11d092
	mov r7, sl	@ 0011d092 5746
.org 0x11d094
	mov r6, r9	@ 0011d094 4e46
.org 0x11d096
	mov r5, r8	@ 0011d096 4546
.org 0x11d098
	push {r5, r6, r7}	@ 0011d098 e0b4
.org 0x11d09a
	adds r6, r0, #0	@ 0011d09a 061c
.org 0x11d09c
	bl 0x11d468	@ 0011d09c 00f0e4f9
.org 0x11d0a0
	movs r5, #0	@ 0011d0a0 0025
.org 0x11d0a2
	ldr r7, [pc, #12]	@ 0011d0a2 034f
.org 0x11d0a4
	ldr r0, [pc, #12]	@ 0011d0a4 0348
.org 0x11d0a6
	adds r0, r0, r7	@ 0011d0a6 c019
.org 0x11d0a8
	mov r8, r0	@ 0011d0a8 8046
.org 0x11d0aa
	ldr r4, [pc, #12]	@ 0011d0aa 034c
.org 0x11d0ac
	b.n 0x11d0dc	@ 0011d0ac 16e0
.org 0x11d0ae
	.byte 0x00	@ 0011d0ae data
.org 0x11d0af
	.byte 0x00	@ 0011d0af data
.org 0x11d0b0
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d0b0 data
.org 0x11d0b4
	.byte 0xbe,0x03,0x00,0x00	@ 0011d0b4 data
.org 0x11d0b8
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d0b8 data
.org 0x11d0bc
	ldrb r0, [r1, #0]	@ 0011d0bc 0878
.org 0x11d0be
	movs r1, #200	@ 0011d0be c821
.org 0x11d0c0
	lsls r1, r1, #1	@ 0011d0c0 4900
.org 0x11d0c2
	adds r0, r0, r1	@ 0011d0c2 4018
.org 0x11d0c4
	lsls r0, r0, #1	@ 0011d0c4 4000
.org 0x11d0c6
	adds r0, r0, r7	@ 0011d0c6 c019
.org 0x11d0c8
	ldrh r0, [r0, #0]	@ 0011d0c8 0088
.org 0x11d0ca
	adds r0, r0, r4	@ 0011d0ca 0019
.org 0x11d0cc
	lsls r2, r5, #1	@ 0011d0cc 6a00
.org 0x11d0ce
	adds r2, #2	@ 0011d0ce 0232
.org 0x11d0d0
	movs r1, #2	@ 0011d0d0 0221
.org 0x11d0d2
	bl 0x10d85c	@ 0011d0d2 f0f7c3fb
.org 0x11d0d6
	adds r0, r5, #1	@ 0011d0d6 681c
.org 0x11d0d8
	lsls r0, r0, #24	@ 0011d0d8 0006
.org 0x11d0da
	lsrs r5, r0, #24	@ 0011d0da 050e
.org 0x11d0dc
	cmp r5, #6	@ 0011d0dc 062d
.org 0x11d0de
	bhi.n 0x11d0fe	@ 0011d0de 0ed8
.org 0x11d0e0
	ldr r2, [pc, #84]	@ 0011d0e0 154a
.org 0x11d0e2
	adds r0, r6, r2	@ 0011d0e2 b018
.org 0x11d0e4
	adds r1, r0, r5	@ 0011d0e4 4119
.org 0x11d0e6
	ldrb r0, [r1, #0]	@ 0011d0e6 0878
.org 0x11d0e8
	cmp r0, #255	@ 0011d0e8 ff28
.org 0x11d0ea
	bne.n 0x11d0bc	@ 0011d0ea e7d1
.org 0x11d0ec
	cmp r5, #0	@ 0011d0ec 002d
.org 0x11d0ee
	bne.n 0x11d0fe	@ 0011d0ee 06d1
.org 0x11d0f0
	mov r1, r8	@ 0011d0f0 4146
.org 0x11d0f2
	ldrh r0, [r1, #0]	@ 0011d0f2 0888
.org 0x11d0f4
	adds r0, r0, r4	@ 0011d0f4 0019
.org 0x11d0f6
	movs r1, #2	@ 0011d0f6 0221
.org 0x11d0f8
	movs r2, #2	@ 0011d0f8 0222
.org 0x11d0fa
	bl 0x10d85c	@ 0011d0fa f0f7affb
.org 0x11d0fe
	ldrb r0, [r6, #3]	@ 0011d0fe f078
.org 0x11d100
	cmp r0, #1	@ 0011d100 0128
.org 0x11d102
	bne.n 0x11d148	@ 0011d102 21d1
.org 0x11d104
	movs r5, #0	@ 0011d104 0025
.org 0x11d106
	ldr r6, [pc, #52]	@ 0011d106 0d4e
.org 0x11d108
	ldrh r0, [r6, #0]	@ 0011d108 3088
.org 0x11d10a
	ldr r4, [pc, #52]	@ 0011d10a 0d4c
.org 0x11d10c
	adds r0, r0, r4	@ 0011d10c 0019
.org 0x11d10e
	lsls r2, r5, #1	@ 0011d10e 6a00
.org 0x11d110
	adds r2, #6	@ 0011d110 0632
.org 0x11d112
	movs r1, #17	@ 0011d112 1121
.org 0x11d114
	bl 0x10d85c	@ 0011d114 f0f7a2fb
.org 0x11d118
	adds r0, r5, #1	@ 0011d118 681c
.org 0x11d11a
	lsls r0, r0, #24	@ 0011d11a 0006
.org 0x11d11c
	lsrs r5, r0, #24	@ 0011d11c 050e
.org 0x11d11e
	cmp r5, #3	@ 0011d11e 032d
.org 0x11d120
	bls.n 0x11d108	@ 0011d120 f2d9
.org 0x11d122
	ldr r0, [pc, #32]	@ 0011d122 0848
.org 0x11d124
	movs r2, #243	@ 0011d124 f322
.org 0x11d126
	lsls r2, r2, #2	@ 0011d126 9200
.org 0x11d128
	adds r0, r0, r2	@ 0011d128 8018
.org 0x11d12a
	ldrh r0, [r0, #0]	@ 0011d12a 0088
.org 0x11d12c
	adds r0, r0, r4	@ 0011d12c 0019
.org 0x11d12e
	movs r1, #1	@ 0011d12e 0121
.org 0x11d130
	movs r2, #18	@ 0011d130 1222
.org 0x11d132
	bl 0x10d85c	@ 0011d132 f0f793fb
.org 0x11d136
	b.n 0x11d36a	@ 0011d136 18e1
.org 0x11d138
	.byte 0xd2,0x0d,0x00,0x00	@ 0011d138 data
.org 0x11d13c
	.byte 0xb6,0xd3,0x86,0x08	@ 0011d13c data
.org 0x11d140
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d140 data
.org 0x11d144
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d144 data
.org 0x11d148
	cmp r0, #4	@ 0011d148 0428
.org 0x11d14a
	bne.n 0x11d15c	@ 0011d14a 07d1
.org 0x11d14c
	ldr r0, [pc, #4]	@ 0011d14c 0148
.org 0x11d14e
	ldr r1, [pc, #8]	@ 0011d14e 0249
.org 0x11d150
	adds r0, r0, r1	@ 0011d150 4018
.org 0x11d152
	b.n 0x11d166	@ 0011d152 08e0
.org 0x11d154
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d154 data
.org 0x11d158
	.byte 0xda,0x03,0x00,0x00	@ 0011d158 data
.org 0x11d15c
	cmp r0, #2	@ 0011d15c 0228
.org 0x11d15e
	bne.n 0x11d184	@ 0011d15e 11d1
.org 0x11d160
	ldr r0, [pc, #20]	@ 0011d160 0548
.org 0x11d162
	ldr r2, [pc, #24]	@ 0011d162 064a
.org 0x11d164
	adds r0, r0, r2	@ 0011d164 8018
.org 0x11d166
	ldrh r0, [r0, #0]	@ 0011d166 0088
.org 0x11d168
	ldr r1, [pc, #20]	@ 0011d168 0549
.org 0x11d16a
	adds r0, r0, r1	@ 0011d16a 4018
.org 0x11d16c
	movs r1, #1	@ 0011d16c 0121
.org 0x11d16e
	movs r2, #18	@ 0011d16e 1222
.org 0x11d170
	bl 0x10d85c	@ 0011d170 f0f774fb
.org 0x11d174
	b.n 0x11d19a	@ 0011d174 11e0
.org 0x11d176
	.byte 0x00	@ 0011d176 data
.org 0x11d177
	.byte 0x00	@ 0011d177 data
.org 0x11d178
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d178 data
.org 0x11d17c
	.byte 0xd2,0x03,0x00,0x00	@ 0011d17c data
.org 0x11d180
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d180 data
.org 0x11d184
	ldr r0, [pc, #60]	@ 0011d184 0f48
.org 0x11d186
	movs r1, #245	@ 0011d186 f521
.org 0x11d188
	lsls r1, r1, #2	@ 0011d188 8900
.org 0x11d18a
	adds r0, r0, r1	@ 0011d18a 4018
.org 0x11d18c
	ldrh r0, [r0, #0]	@ 0011d18c 0088
.org 0x11d18e
	ldr r1, [pc, #56]	@ 0011d18e 0e49
.org 0x11d190
	adds r0, r0, r1	@ 0011d190 4018
.org 0x11d192
	movs r1, #1	@ 0011d192 0121
.org 0x11d194
	movs r2, #18	@ 0011d194 1222
.org 0x11d196
	bl 0x10d85c	@ 0011d196 f0f761fb
.org 0x11d19a
	ldr r2, [pc, #48]	@ 0011d19a 0c4a
.org 0x11d19c
	adds r0, r6, r2	@ 0011d19c b018
.org 0x11d19e
	ldrb r0, [r0, #2]	@ 0011d19e 8078
.org 0x11d1a0
	adds r2, #6	@ 0011d1a0 0632
.org 0x11d1a2
	adds r1, r6, r2	@ 0011d1a2 b118
.org 0x11d1a4
	adds r2, r1, r0	@ 0011d1a4 0a18
.org 0x11d1a6
	ldrb r0, [r2, #0]	@ 0011d1a6 1078
.org 0x11d1a8
	mov sl, r1	@ 0011d1a8 8a46
.org 0x11d1aa
	cmp r0, #255	@ 0011d1aa ff28
.org 0x11d1ac
	bne.n 0x11d1d4	@ 0011d1ac 12d1
.org 0x11d1ae
	ldr r0, [pc, #20]	@ 0011d1ae 0548
.org 0x11d1b0
	ldr r1, [pc, #28]	@ 0011d1b0 0749
.org 0x11d1b2
	adds r0, r0, r1	@ 0011d1b2 4018
.org 0x11d1b4
	ldrh r0, [r0, #0]	@ 0011d1b4 0088
.org 0x11d1b6
	ldr r1, [pc, #16]	@ 0011d1b6 0449
.org 0x11d1b8
	adds r0, r0, r1	@ 0011d1b8 4018
.org 0x11d1ba
	movs r1, #17	@ 0011d1ba 1121
.org 0x11d1bc
	movs r2, #6	@ 0011d1bc 0622
.org 0x11d1be
	bl 0x10d85c	@ 0011d1be f0f74dfb
.org 0x11d1c2
	b.n 0x11d280	@ 0011d1c2 5de0
.org 0x11d1c4
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d1c4 data
.org 0x11d1c8
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d1c8 data
.org 0x11d1cc
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d1cc data
.org 0x11d1d0
	.byte 0xbe,0x03,0x00,0x00	@ 0011d1d0 data
.org 0x11d1d4
	ldrb r2, [r2, #0]	@ 0011d1d4 1278
.org 0x11d1d6
	mov r9, r2	@ 0011d1d6 9146
.org 0x11d1d8
	movs r5, #0	@ 0011d1d8 0025
.org 0x11d1da
	ldr r2, [pc, #40]	@ 0011d1da 0a4a
.org 0x11d1dc
	mov r8, r2	@ 0011d1dc 9046
.org 0x11d1de
	ldr r7, [pc, #40]	@ 0011d1de 0a4f
.org 0x11d1e0
	ldr r0, [pc, #40]	@ 0011d1e0 0a48
.org 0x11d1e2
	mov r2, r9	@ 0011d1e2 4a46
.org 0x11d1e4
	lsls r1, r2, #2	@ 0011d1e4 9100
.org 0x11d1e6
	adds r1, r5, r1	@ 0011d1e6 6918
.org 0x11d1e8
	adds r1, r1, r0	@ 0011d1e8 0918
.org 0x11d1ea
	ldrb r0, [r1, #0]	@ 0011d1ea 0878
.org 0x11d1ec
	cmp r0, #255	@ 0011d1ec ff28
.org 0x11d1ee
	bne.n 0x11d214	@ 0011d1ee 11d1
.org 0x11d1f0
	ldr r1, [pc, #28]	@ 0011d1f0 0749
.org 0x11d1f2
	ldrh r0, [r1, #0]	@ 0011d1f2 0888
.org 0x11d1f4
	adds r0, r0, r7	@ 0011d1f4 c019
.org 0x11d1f6
	lsls r2, r5, #1	@ 0011d1f6 6a00
.org 0x11d1f8
	adds r2, #6	@ 0011d1f8 0632
.org 0x11d1fa
	movs r1, #17	@ 0011d1fa 1121
.org 0x11d1fc
	bl 0x10d85c	@ 0011d1fc f0f72efb
.org 0x11d200
	b.n 0x11d270	@ 0011d200 36e0
.org 0x11d202
	.byte 0x00	@ 0011d202 data
.org 0x11d203
	.byte 0x00	@ 0011d203 data
.org 0x11d204
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d204 data
.org 0x11d208
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d208 data
.org 0x11d20c
	.byte 0x40,0xc8,0x86,0x08	@ 0011d20c data
.org 0x11d210
	.byte 0xb6,0xd3,0x86,0x08	@ 0011d210 data
.org 0x11d214
	ldrb r4, [r1, #0]	@ 0011d214 0c78
.org 0x11d216
	ldr r0, [pc, #60]	@ 0011d216 0f48
.org 0x11d218
	ldr r0, [r0, #0]	@ 0011d218 0068
.org 0x11d21a
	lsrs r1, r4, #1	@ 0011d21a 6108
.org 0x11d21c
	adds r0, r0, r1	@ 0011d21c 4018
.org 0x11d21e
	ldrb r1, [r0, #0]	@ 0011d21e 0178
.org 0x11d220
	movs r0, #1	@ 0011d220 0120
.org 0x11d222
	ands r0, r4	@ 0011d222 2040
.org 0x11d224
	lsls r0, r0, #2	@ 0011d224 8000
.org 0x11d226
	asrs r1, r0	@ 0011d226 0141
.org 0x11d228
	movs r0, #15	@ 0011d228 0f20
.org 0x11d22a
	ands r1, r0	@ 0011d22a 0140
.org 0x11d22c
	cmp r1, #0	@ 0011d22c 0029
.org 0x11d22e
	beq.n 0x11d258	@ 0011d22e 13d0
.org 0x11d230
	movs r2, #140	@ 0011d230 8c22
.org 0x11d232
	lsls r2, r2, #1	@ 0011d232 5200
.org 0x11d234
	adds r0, r4, r2	@ 0011d234 a018
.org 0x11d236
	lsls r0, r0, #1	@ 0011d236 4000
.org 0x11d238
	add r0, r8	@ 0011d238 4044
.org 0x11d23a
	ldrh r0, [r0, #0]	@ 0011d23a 0088
.org 0x11d23c
	adds r0, r0, r7	@ 0011d23c c019
.org 0x11d23e
	lsls r2, r5, #1	@ 0011d23e 6a00
.org 0x11d240
	adds r2, #6	@ 0011d240 0632
.org 0x11d242
	movs r1, #17	@ 0011d242 1121
.org 0x11d244
	bl 0x10d85c	@ 0011d244 f0f70afb
.org 0x11d248
	adds r0, r6, #0	@ 0011d248 301c
.org 0x11d24a
	adds r1, r4, #0	@ 0011d24a 211c
.org 0x11d24c
	bl 0x11d5cc	@ 0011d24c 00f0bef9
.org 0x11d250
	b.n 0x11d270	@ 0011d250 0ee0
.org 0x11d252
	.byte 0x00	@ 0011d252 data
.org 0x11d253
	.byte 0x00	@ 0011d253 data
.org 0x11d254
	.byte 0xa8,0xed,0x02,0x02	@ 0011d254 data
.org 0x11d258
	movs r1, #170	@ 0011d258 aa21
.org 0x11d25a
	lsls r1, r1, #1	@ 0011d25a 4900
.org 0x11d25c
	adds r0, r4, r1	@ 0011d25c 6018
.org 0x11d25e
	lsls r0, r0, #1	@ 0011d25e 4000
.org 0x11d260
	add r0, r8	@ 0011d260 4044
.org 0x11d262
	ldrh r0, [r0, #0]	@ 0011d262 0088
.org 0x11d264
	adds r0, r0, r7	@ 0011d264 c019
.org 0x11d266
	lsls r2, r5, #1	@ 0011d266 6a00
.org 0x11d268
	adds r2, #6	@ 0011d268 0632
.org 0x11d26a
	movs r1, #17	@ 0011d26a 1121
.org 0x11d26c
	bl 0x10d85c	@ 0011d26c f0f7f6fa
.org 0x11d270
	adds r0, r5, #1	@ 0011d270 681c
.org 0x11d272
	lsls r0, r0, #24	@ 0011d272 0006
.org 0x11d274
	lsrs r5, r0, #24	@ 0011d274 050e
.org 0x11d276
	cmp r5, #3	@ 0011d276 032d
.org 0x11d278
	bls.n 0x11d1e0	@ 0011d278 b2d9
.org 0x11d27a
	adds r0, r6, #0	@ 0011d27a 301c
.org 0x11d27c
	bl 0x11d6c0	@ 0011d27c 00f020fa
.org 0x11d280
	ldr r2, [pc, #72]	@ 0011d280 124a
.org 0x11d282
	adds r5, r6, r2	@ 0011d282 b518
.org 0x11d284
	ldrb r0, [r5, #2]	@ 0011d284 a878
.org 0x11d286
	mov r1, sl	@ 0011d286 5146
.org 0x11d288
	adds r2, r1, r0	@ 0011d288 0a18
.org 0x11d28a
	ldrb r0, [r2, #0]	@ 0011d28a 1078
.org 0x11d28c
	cmp r0, #255	@ 0011d28c ff28
.org 0x11d28e
	beq.n 0x11d2aa	@ 0011d28e 0cd0
.org 0x11d290
	ldr r1, [pc, #60]	@ 0011d290 0f49
.org 0x11d292
	movs r2, #200	@ 0011d292 c822
.org 0x11d294
	lsls r2, r2, #1	@ 0011d294 5200
.org 0x11d296
	adds r0, r0, r2	@ 0011d296 8018
.org 0x11d298
	lsls r0, r0, #1	@ 0011d298 4000
.org 0x11d29a
	adds r0, r0, r1	@ 0011d29a 4018
.org 0x11d29c
	ldrh r0, [r0, #0]	@ 0011d29c 0088
.org 0x11d29e
	ldr r1, [pc, #52]	@ 0011d29e 0d49
.org 0x11d2a0
	adds r0, r0, r1	@ 0011d2a0 4018
.org 0x11d2a2
	movs r1, #17	@ 0011d2a2 1121
.org 0x11d2a4
	movs r2, #1	@ 0011d2a4 0122
.org 0x11d2a6
	bl 0x10d85c	@ 0011d2a6 f0f7d9fa
.org 0x11d2aa
	ldrb r0, [r6, #3]	@ 0011d2aa f078
.org 0x11d2ac
	cmp r0, #4	@ 0011d2ac 0428
.org 0x11d2ae
	bne.n 0x11d2dc	@ 0011d2ae 15d1
.org 0x11d2b0
	ldr r0, [pc, #28]	@ 0011d2b0 0748
.org 0x11d2b2
	ldr r1, [pc, #36]	@ 0011d2b2 0949
.org 0x11d2b4
	adds r0, r0, r1	@ 0011d2b4 4018
.org 0x11d2b6
	ldrh r0, [r0, #0]	@ 0011d2b6 0088
.org 0x11d2b8
	ldr r1, [pc, #24]	@ 0011d2b8 0649
.org 0x11d2ba
	adds r0, r0, r1	@ 0011d2ba 4018
.org 0x11d2bc
	movs r1, #17	@ 0011d2bc 1121
.org 0x11d2be
	movs r2, #15	@ 0011d2be 0f22
.org 0x11d2c0
	bl 0x10d85c	@ 0011d2c0 f0f7ccfa
.org 0x11d2c4
	movs r0, #1	@ 0011d2c4 0120
.org 0x11d2c6
	strb r0, [r5, #25]	@ 0011d2c6 6876
.org 0x11d2c8
	b.n 0x11d36a	@ 0011d2c8 4fe0
.org 0x11d2ca
	.byte 0x00	@ 0011d2ca data
.org 0x11d2cb
	.byte 0x00	@ 0011d2cb data
.org 0x11d2cc
	.byte 0xcc,0x0d,0x00,0x00	@ 0011d2cc data
.org 0x11d2d0
	.byte 0xf8,0xcf,0x86,0x08	@ 0011d2d0 data
.org 0x11d2d4
	.byte 0x5f,0x0e,0x01,0x09	@ 0011d2d4 data
.org 0x11d2d8
	.byte 0xc6,0x03,0x00,0x00	@ 0011d2d8 data
.org 0x11d2dc
	ldrb r0, [r5, #2]	@ 0011d2dc a878
.org 0x11d2de
	add r0, sl	@ 0011d2de 5044
.org 0x11d2e0
	ldrb r4, [r0, #0]	@ 0011d2e0 0478
.org 0x11d2e2
	cmp r4, #255	@ 0011d2e2 ff2c
.org 0x11d2e4
	beq.n 0x11d36a	@ 0011d2e4 41d0
.org 0x11d2e6
	ldr r0, [pc, #48]	@ 0011d2e6 0c48
.org 0x11d2e8
	ldr r0, [r0, #0]	@ 0011d2e8 0068
.org 0x11d2ea
	lsrs r1, r4, #2	@ 0011d2ea a108
.org 0x11d2ec
	adds r0, r0, r1	@ 0011d2ec 4018
.org 0x11d2ee
	ldrb r1, [r0, #0]	@ 0011d2ee 0178
.org 0x11d2f0
	movs r0, #3	@ 0011d2f0 0320
