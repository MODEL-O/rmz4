@ FUN_0804e094  entry 0x0804e094  size 966
.thumb
.org 0x4e094
FUN_0804e094:
	push {r4, r5, r6, r7, lr}	@ 0004e094 f0b5
.org 0x4e096
	mov r7, r8	@ 0004e096 4746
.org 0x4e098
	push {r7}	@ 0004e098 80b4
.org 0x4e09a
	sub sp, #16	@ 0004e09a 84b0
.org 0x4e09c
	adds r6, r0, #0	@ 0004e09c 061c
.org 0x4e09e
	ldr r7, [r6, #40]	@ 0004e09e b76a
.org 0x4e0a0
	bl 0x1cff0	@ 0004e0a0 cef7a6ff
.org 0x4e0a4
	ldrb r5, [r6, #13]	@ 0004e0a4 757b
.org 0x4e0a6
	cmp r5, #0	@ 0004e0a6 002d
.org 0x4e0a8
	beq.n 0x4e0ac	@ 0004e0a8 00d0
.org 0x4e0aa
	b.n 0x4e1fa	@ 0004e0aa a6e0
.org 0x4e0ac
	ldrb r0, [r6, #18]	@ 0004e0ac b07c
.org 0x4e0ae
	subs r0, #1	@ 0004e0ae 0138
.org 0x4e0b0
	movs r1, #0	@ 0004e0b0 0021
.org 0x4e0b2
	mov r8, r1	@ 0004e0b2 8846
.org 0x4e0b4
	strb r0, [r6, #18]	@ 0004e0b4 b074
.org 0x4e0b6
	lsls r0, r0, #24	@ 0004e0b6 0006
.org 0x4e0b8
	lsrs r0, r0, #24	@ 0004e0b8 000e
.org 0x4e0ba
	cmp r0, #255	@ 0004e0ba ff28
.org 0x4e0bc
	beq.n 0x4e0c0	@ 0004e0bc 00d0
.org 0x4e0be
	b.n 0x4e46c	@ 0004e0be d5e1
.org 0x4e0c0
	adds r4, r6, #0	@ 0004e0c0 341c
.org 0x4e0c2
	adds r4, #84	@ 0004e0c2 5434
.org 0x4e0c4
	adds r0, r7, #0	@ 0004e0c4 381c
.org 0x4e0c6
	adds r1, r4, #0	@ 0004e0c6 211c
.org 0x4e0c8
	bl 0x41318	@ 0004e0c8 f3f726f9
.org 0x4e0cc
	lsls r0, r0, #24	@ 0004e0cc 0006
.org 0x4e0ce
	lsrs r3, r0, #24	@ 0004e0ce 030e
.org 0x4e0d0
	mov ip, r4	@ 0004e0d0 a446
.org 0x4e0d2
	cmp r3, #0	@ 0004e0d2 002b
.org 0x4e0d4
	beq.n 0x4e110	@ 0004e0d4 1cd0
.org 0x4e0d6
	ldrb r1, [r6, #10]	@ 0004e0d6 b17a
.org 0x4e0d8
	movs r0, #254	@ 0004e0d8 fe20
.org 0x4e0da
	ands r0, r1	@ 0004e0da 0840
.org 0x4e0dc
	movs r1, #253	@ 0004e0dc fd21
.org 0x4e0de
	ands r0, r1	@ 0004e0de 0840
.org 0x4e0e0
	strb r0, [r6, #10]	@ 0004e0e0 b072
.org 0x4e0e2
	adds r0, r6, #0	@ 0004e0e2 301c
.org 0x4e0e4
	adds r0, #140	@ 0004e0e4 8c30
.org 0x4e0e6
	str r5, [r0, #0]	@ 0004e0e6 0560
.org 0x4e0e8
	adds r0, #4	@ 0004e0e8 0430
.org 0x4e0ea
	str r5, [r0, #0]	@ 0004e0ea 0560
.org 0x4e0ec
	adds r0, #4	@ 0004e0ec 0430
.org 0x4e0ee
	strb r5, [r0, #0]	@ 0004e0ee 0570
.org 0x4e0f0
	ldrb r1, [r6, #10]	@ 0004e0f0 b17a
.org 0x4e0f2
	movs r0, #251	@ 0004e0f2 fb20
.org 0x4e0f4
	ands r0, r1	@ 0004e0f4 0840
.org 0x4e0f6
	strb r0, [r6, #10]	@ 0004e0f6 b072
.org 0x4e0f8
	ldr r1, [pc, #16]	@ 0004e0f8 0449
.org 0x4e0fa
	ldrb r0, [r6, #9]	@ 0004e0fa 707a
.org 0x4e0fc
	lsls r0, r0, #2	@ 0004e0fc 8000
.org 0x4e0fe
	adds r0, r0, r1	@ 0004e0fe 4018
.org 0x4e100
	movs r1, #3	@ 0004e100 0321
.org 0x4e102
	str r1, [r6, #12]	@ 0004e102 f160
.org 0x4e104
	ldr r0, [r0, #0]	@ 0004e104 0068
.org 0x4e106
	ldr r0, [r0, #12]	@ 0004e106 c068
.org 0x4e108
	str r0, [r6, #20]	@ 0004e108 7061
.org 0x4e10a
	b.n 0x4e46c	@ 0004e10a afe1
.org 0x4e10c
	.byte 0xf8,0x39,0x85,0x08	@ 0004e10c data
.org 0x4e110
	ldrb r2, [r6, #16]	@ 0004e110 327c
.org 0x4e112
	cmp r2, #0	@ 0004e112 002a
.org 0x4e114
	bne.n 0x4e174	@ 0004e114 2ed1
.org 0x4e116
	ldr r1, [r6, #84]	@ 0004e116 716d
.org 0x4e118
	ldr r0, [r7, #84]	@ 0004e118 786d
.org 0x4e11a
	cmp r1, r0	@ 0004e11a 8142
.org 0x4e11c
	ble.n 0x4e148	@ 0004e11c 14dd
.org 0x4e11e
	movs r0, #192	@ 0004e11e c020
.org 0x4e120
	lsls r0, r0, #1	@ 0004e120 4000
.org 0x4e122
	str r0, [r6, #92]	@ 0004e122 f065
.org 0x4e124
	movs r2, #1	@ 0004e124 0122
.org 0x4e126
	ldrb r0, [r6, #10]	@ 0004e126 b07a
.org 0x4e128
	movs r1, #16	@ 0004e128 1021
.org 0x4e12a
	orrs r0, r1	@ 0004e12a 0843
.org 0x4e12c
	strb r0, [r6, #10]	@ 0004e12c b072
.org 0x4e12e
	adds r0, r6, #0	@ 0004e12e 301c
.org 0x4e130
	adds r0, #76	@ 0004e130 4c30
.org 0x4e132
	strb r2, [r0, #0]	@ 0004e132 0270
.org 0x4e134
	adds r3, r6, #0	@ 0004e134 331c
.org 0x4e136
	adds r3, #74	@ 0004e136 4a33
.org 0x4e138
	movs r2, #16	@ 0004e138 1022
.org 0x4e13a
	ldrb r1, [r3, #0]	@ 0004e13a 1978
.org 0x4e13c
	movs r0, #17	@ 0004e13c 1120
.org 0x4e13e
	negs r0, r0	@ 0004e13e 4042
.org 0x4e140
	ands r0, r1	@ 0004e140 0840
.org 0x4e142
	orrs r0, r2	@ 0004e142 1043
.org 0x4e144
	strb r0, [r3, #0]	@ 0004e144 1870
.org 0x4e146
	b.n 0x4e168	@ 0004e146 0fe0
.org 0x4e148
	ldr r0, [pc, #32]	@ 0004e148 0848
.org 0x4e14a
	str r0, [r6, #92]	@ 0004e14a f065
.org 0x4e14c
	ldrb r1, [r6, #10]	@ 0004e14c b17a
.org 0x4e14e
	movs r0, #239	@ 0004e14e ef20
.org 0x4e150
	ands r0, r1	@ 0004e150 0840
.org 0x4e152
	strb r0, [r6, #10]	@ 0004e152 b072
.org 0x4e154
	adds r0, r6, #0	@ 0004e154 301c
.org 0x4e156
	adds r0, #76	@ 0004e156 4c30
.org 0x4e158
	strb r2, [r0, #0]	@ 0004e158 0270
.org 0x4e15a
	adds r2, r6, #0	@ 0004e15a 321c
.org 0x4e15c
	adds r2, #74	@ 0004e15c 4a32
.org 0x4e15e
	ldrb r1, [r2, #0]	@ 0004e15e 1178
.org 0x4e160
	movs r0, #17	@ 0004e160 1120
.org 0x4e162
	negs r0, r0	@ 0004e162 4042
.org 0x4e164
	ands r0, r1	@ 0004e164 0840
.org 0x4e166
	strb r0, [r2, #0]	@ 0004e166 1070
.org 0x4e168
	ldr r0, [pc, #4]	@ 0004e168 0148
.org 0x4e16a
	b.n 0x4e1c2	@ 0004e16a 2ae0
.org 0x4e16c
	.byte 0x80,0xfe,0xff,0xff	@ 0004e16c data
.org 0x4e170
	.byte 0x00,0xfa,0xff,0xff	@ 0004e170 data
.org 0x4e174
	ldr r1, [r6, #84]	@ 0004e174 716d
.org 0x4e176
	ldr r0, [r7, #84]	@ 0004e176 786d
.org 0x4e178
	cmp r1, r0	@ 0004e178 8142
.org 0x4e17a
	ble.n 0x4e1a0	@ 0004e17a 11dd
.org 0x4e17c
	movs r2, #1	@ 0004e17c 0122
.org 0x4e17e
	ldrb r0, [r6, #10]	@ 0004e17e b07a
.org 0x4e180
	movs r1, #16	@ 0004e180 1021
.org 0x4e182
	orrs r0, r1	@ 0004e182 0843
.org 0x4e184
	strb r0, [r6, #10]	@ 0004e184 b072
.org 0x4e186
	adds r0, r6, #0	@ 0004e186 301c
.org 0x4e188
	adds r0, #76	@ 0004e188 4c30
.org 0x4e18a
	strb r2, [r0, #0]	@ 0004e18a 0270
.org 0x4e18c
	adds r3, r6, #0	@ 0004e18c 331c
.org 0x4e18e
	adds r3, #74	@ 0004e18e 4a33
.org 0x4e190
	movs r2, #16	@ 0004e190 1022
.org 0x4e192
	ldrb r1, [r3, #0]	@ 0004e192 1978
.org 0x4e194
	movs r0, #17	@ 0004e194 1120
.org 0x4e196
	negs r0, r0	@ 0004e196 4042
.org 0x4e198
	ands r0, r1	@ 0004e198 0840
.org 0x4e19a
	orrs r0, r2	@ 0004e19a 1043
.org 0x4e19c
	strb r0, [r3, #0]	@ 0004e19c 1870
.org 0x4e19e
	b.n 0x4e1bc	@ 0004e19e 0de0
.org 0x4e1a0
	ldrb r1, [r6, #10]	@ 0004e1a0 b17a
.org 0x4e1a2
	movs r0, #239	@ 0004e1a2 ef20
.org 0x4e1a4
	ands r0, r1	@ 0004e1a4 0840
.org 0x4e1a6
	strb r0, [r6, #10]	@ 0004e1a6 b072
.org 0x4e1a8
	adds r0, r6, #0	@ 0004e1a8 301c
.org 0x4e1aa
	adds r0, #76	@ 0004e1aa 4c30
.org 0x4e1ac
	strb r3, [r0, #0]	@ 0004e1ac 0370
.org 0x4e1ae
	adds r2, r6, #0	@ 0004e1ae 321c
.org 0x4e1b0
	adds r2, #74	@ 0004e1b0 4a32
.org 0x4e1b2
	ldrb r1, [r2, #0]	@ 0004e1b2 1178
.org 0x4e1b4
	movs r0, #17	@ 0004e1b4 1120
.org 0x4e1b6
	negs r0, r0	@ 0004e1b6 4042
.org 0x4e1b8
	ands r0, r1	@ 0004e1b8 0840
.org 0x4e1ba
	strb r0, [r2, #0]	@ 0004e1ba 1070
.org 0x4e1bc
	movs r0, #0	@ 0004e1bc 0020
.org 0x4e1be
	str r0, [r6, #92]	@ 0004e1be f065
.org 0x4e1c0
	ldr r0, [pc, #120]	@ 0004e1c0 1e48
.org 0x4e1c2
	str r0, [r6, #96]	@ 0004e1c2 3066
.org 0x4e1c4
	ldrb r1, [r6, #10]	@ 0004e1c4 b17a
.org 0x4e1c6
	movs r0, #4	@ 0004e1c6 0420
.org 0x4e1c8
	orrs r0, r1	@ 0004e1c8 0843
.org 0x4e1ca
	strb r0, [r6, #10]	@ 0004e1ca b072
.org 0x4e1cc
	adds r4, r6, #0	@ 0004e1cc 341c
.org 0x4e1ce
	adds r4, #116	@ 0004e1ce 7434
.org 0x4e1d0
	ldr r1, [pc, #108]	@ 0004e1d0 1b49
.org 0x4e1d2
	adds r0, r4, #0	@ 0004e1d2 201c
.org 0x4e1d4
	mov r2, ip	@ 0004e1d4 6246
.org 0x4e1d6
	movs r3, #8	@ 0004e1d6 0823
.org 0x4e1d8
	bl 0x5760	@ 0004e1d8 b7f7c2fa
.org 0x4e1dc
	str r6, [r4, #44]	@ 0004e1dc e662
.org 0x4e1de
	ldr r0, [pc, #100]	@ 0004e1de 1948
.org 0x4e1e0
	str r0, [r4, #36]	@ 0004e1e0 6062
.org 0x4e1e2
	ldrb r1, [r6, #10]	@ 0004e1e2 b17a
.org 0x4e1e4
	movs r0, #1	@ 0004e1e4 0120
.org 0x4e1e6
	orrs r0, r1	@ 0004e1e6 0843
.org 0x4e1e8
	strb r0, [r6, #10]	@ 0004e1e8 b072
.org 0x4e1ea
	adds r0, r7, #0	@ 0004e1ea 381c
.org 0x4e1ec
	bl 0x3aa4c	@ 0004e1ec ecf72efc
.org 0x4e1f0
	adds r1, r6, #0	@ 0004e1f0 311c
.org 0x4e1f2
	adds r1, #189	@ 0004e1f2 bd31
.org 0x4e1f4
	movs r0, #1	@ 0004e1f4 0120
.org 0x4e1f6
	strb r0, [r1, #0]	@ 0004e1f6 0870
.org 0x4e1f8
	strb r0, [r6, #13]	@ 0004e1f8 7073
.org 0x4e1fa
	ldr r0, [r6, #84]	@ 0004e1fa 706d
.org 0x4e1fc
	ldr r1, [r6, #92]	@ 0004e1fc f16d
.org 0x4e1fe
	adds r0, r0, r1	@ 0004e1fe 4018
.org 0x4e200
	str r0, [r6, #84]	@ 0004e200 7065
.org 0x4e202
	ldr r0, [r6, #96]	@ 0004e202 306e
.org 0x4e204
	adds r0, #64	@ 0004e204 4030
.org 0x4e206
	str r0, [r6, #96]	@ 0004e206 3066
.org 0x4e208
	movs r1, #224	@ 0004e208 e021
.org 0x4e20a
	lsls r1, r1, #3	@ 0004e20a c900
.org 0x4e20c
	cmp r0, r1	@ 0004e20c 8842
.org 0x4e20e
	ble.n 0x4e212	@ 0004e20e 00dd
.org 0x4e210
	str r1, [r6, #96]	@ 0004e210 3166
.org 0x4e212
	ldr r1, [r6, #88]	@ 0004e212 b16d
.org 0x4e214
	ldr r0, [r6, #96]	@ 0004e214 306e
.org 0x4e216
	adds r1, r1, r0	@ 0004e216 0918
.org 0x4e218
	str r1, [r6, #88]	@ 0004e218 b165
.org 0x4e21a
	ldr r0, [r6, #84]	@ 0004e21a 706d
.org 0x4e21c
	bl 0x4e504	@ 0004e21c 00f072f9
.org 0x4e220
	lsls r0, r0, #16	@ 0004e220 0004
.org 0x4e222
	lsrs r3, r0, #16	@ 0004e222 030c
.org 0x4e224
	cmp r3, #0	@ 0004e224 002b
.org 0x4e226
	beq.n 0x4e248	@ 0004e226 0fd0
.org 0x4e228
	ldr r0, [r6, #84]	@ 0004e228 706d
.org 0x4e22a
	ldr r1, [r6, #92]	@ 0004e22a f16d
.org 0x4e22c
	subs r0, r0, r1	@ 0004e22c 401a
.org 0x4e22e
	str r0, [r6, #84]	@ 0004e22e 7065
.org 0x4e230
	ldr r0, [r6, #88]	@ 0004e230 b06d
.org 0x4e232
	ldr r1, [r6, #96]	@ 0004e232 316e
.org 0x4e234
	subs r0, r0, r1	@ 0004e234 401a
.org 0x4e236
	str r0, [r6, #88]	@ 0004e236 b065
.org 0x4e238
	b.n 0x4e258	@ 0004e238 0ee0
.org 0x4e23a
	.byte 0x00	@ 0004e23a data
.org 0x4e23b
	.byte 0x00	@ 0004e23b data
.org 0x4e23c
	.byte 0x00,0xfd,0xff,0xff	@ 0004e23c data
.org 0x4e240
	.byte 0x08,0x7b,0x85,0x08	@ 0004e240 data
.org 0x4e244
	.byte 0xd9,0xe4,0x04,0x08	@ 0004e244 data
.org 0x4e248
	adds r0, r6, #0	@ 0004e248 301c
.org 0x4e24a
	adds r0, #140	@ 0004e24a 8c30
.org 0x4e24c
	ldr r0, [r0, #0]	@ 0004e24c 0068
.org 0x4e24e
	ldr r1, [pc, #112]	@ 0004e24e 1c49
.org 0x4e250
	ands r0, r1	@ 0004e250 0840
.org 0x4e252
	cmp r0, #0	@ 0004e252 0028
.org 0x4e254
	bne.n 0x4e258	@ 0004e254 00d1
.org 0x4e256
	b.n 0x4e46c	@ 0004e256 09e1
.org 0x4e258
	ldr r5, [r6, #96]	@ 0004e258 356e
.org 0x4e25a
	movs r4, #0	@ 0004e25a 0024
.org 0x4e25c
	str r4, [r6, #96]	@ 0004e25c 3466
.org 0x4e25e
	str r4, [r6, #92]	@ 0004e25e f465
.org 0x4e260
	ldrb r1, [r6, #10]	@ 0004e260 b17a
.org 0x4e262
	movs r0, #239	@ 0004e262 ef20
.org 0x4e264
	ands r0, r1	@ 0004e264 0840
.org 0x4e266
	mov ip, r4	@ 0004e266 a446
.org 0x4e268
	strb r0, [r6, #10]	@ 0004e268 b072
.org 0x4e26a
	adds r0, r6, #0	@ 0004e26a 301c
.org 0x4e26c
	adds r0, #76	@ 0004e26c 4c30
.org 0x4e26e
	mov r1, ip	@ 0004e26e 6146
.org 0x4e270
	strb r1, [r0, #0]	@ 0004e270 0170
.org 0x4e272
	adds r2, r6, #0	@ 0004e272 321c
.org 0x4e274
	adds r2, #74	@ 0004e274 4a32
.org 0x4e276
	ldrb r1, [r2, #0]	@ 0004e276 1178
.org 0x4e278
	movs r0, #17	@ 0004e278 1120
.org 0x4e27a
	negs r0, r0	@ 0004e27a 4042
.org 0x4e27c
	ands r0, r1	@ 0004e27c 0840
.org 0x4e27e
	strb r0, [r2, #0]	@ 0004e27e 1070
.org 0x4e280
	cmp r3, #1	@ 0004e280 012b
.org 0x4e282
	bhi.n 0x4e2fc	@ 0004e282 3bd8
.org 0x4e284
	cmp r5, #0	@ 0004e284 002d
.org 0x4e286
	ble.n 0x4e2c4	@ 0004e286 1ddd
.org 0x4e288
	movs r5, #128	@ 0004e288 8025
.org 0x4e28a
	lsls r5, r5, #3	@ 0004e28a ed00
.org 0x4e28c
	str r5, [sp, #0]	@ 0004e28c 0095
.org 0x4e28e
	mov r0, ip	@ 0004e28e 6046
.org 0x4e290
	str r0, [sp, #4]	@ 0004e290 0190
.org 0x4e292
	movs r4, #2	@ 0004e292 0224
.org 0x4e294
	str r4, [sp, #8]	@ 0004e294 0294
.org 0x4e296
	str r4, [sp, #12]	@ 0004e296 0394
.org 0x4e298
	adds r0, r7, #0	@ 0004e298 381c
.org 0x4e29a
	adds r1, r6, #0	@ 0004e29a 311c
.org 0x4e29c
	movs r2, #0	@ 0004e29c 0022
.org 0x4e29e
	movs r3, #0	@ 0004e29e 0023
.org 0x4e2a0
	bl 0x3f000	@ 0004e2a0 f0f7aefe
.org 0x4e2a4
	str r5, [sp, #0]	@ 0004e2a4 0095
.org 0x4e2a6
	movs r0, #208	@ 0004e2a6 d020
.org 0x4e2a8
	str r0, [sp, #4]	@ 0004e2a8 0190
.org 0x4e2aa
	str r4, [sp, #8]	@ 0004e2aa 0294
.org 0x4e2ac
	str r4, [sp, #12]	@ 0004e2ac 0394
.org 0x4e2ae
	adds r0, r7, #0	@ 0004e2ae 381c
.org 0x4e2b0
	adds r1, r6, #0	@ 0004e2b0 311c
.org 0x4e2b2
	movs r2, #0	@ 0004e2b2 0022
.org 0x4e2b4
	movs r3, #0	@ 0004e2b4 0023
.org 0x4e2b6
	bl 0x3f000	@ 0004e2b6 f0f7a3fe
.org 0x4e2ba
	str r5, [sp, #0]	@ 0004e2ba 0095
.org 0x4e2bc
	movs r0, #48	@ 0004e2bc 3020
.org 0x4e2be
	b.n 0x4e3ea	@ 0004e2be 94e0
.org 0x4e2c0
	.byte 0x04,0x10,0x00,0x00	@ 0004e2c0 data
.org 0x4e2c4
	movs r5, #128	@ 0004e2c4 8025
.org 0x4e2c6
	lsls r5, r5, #3	@ 0004e2c6 ed00
.org 0x4e2c8
	str r5, [sp, #0]	@ 0004e2c8 0095
.org 0x4e2ca
	movs r0, #128	@ 0004e2ca 8020
.org 0x4e2cc
	str r0, [sp, #4]	@ 0004e2cc 0190
.org 0x4e2ce
	movs r4, #2	@ 0004e2ce 0224
.org 0x4e2d0
	str r4, [sp, #8]	@ 0004e2d0 0294
.org 0x4e2d2
	str r4, [sp, #12]	@ 0004e2d2 0394
.org 0x4e2d4
	adds r0, r7, #0	@ 0004e2d4 381c
.org 0x4e2d6
	adds r1, r6, #0	@ 0004e2d6 311c
.org 0x4e2d8
	movs r2, #0	@ 0004e2d8 0022
.org 0x4e2da
	movs r3, #0	@ 0004e2da 0023
.org 0x4e2dc
	bl 0x3f000	@ 0004e2dc f0f790fe
.org 0x4e2e0
	str r5, [sp, #0]	@ 0004e2e0 0095
.org 0x4e2e2
	movs r0, #80	@ 0004e2e2 5020
.org 0x4e2e4
	str r0, [sp, #4]	@ 0004e2e4 0190
.org 0x4e2e6
	str r4, [sp, #8]	@ 0004e2e6 0294
.org 0x4e2e8
	str r4, [sp, #12]	@ 0004e2e8 0394
.org 0x4e2ea
	adds r0, r7, #0	@ 0004e2ea 381c
.org 0x4e2ec
	adds r1, r6, #0	@ 0004e2ec 311c
.org 0x4e2ee
	movs r2, #0	@ 0004e2ee 0022
.org 0x4e2f0
	movs r3, #0	@ 0004e2f0 0023
.org 0x4e2f2
	bl 0x3f000	@ 0004e2f2 f0f785fe
.org 0x4e2f6
	str r5, [sp, #0]	@ 0004e2f6 0095
.org 0x4e2f8
	movs r0, #176	@ 0004e2f8 b020
.org 0x4e2fa
	b.n 0x4e3ea	@ 0004e2fa 76e0
.org 0x4e2fc
	cmp r3, #3	@ 0004e2fc 032b
.org 0x4e2fe
	bhi.n 0x4e338	@ 0004e2fe 1bd8
.org 0x4e300
	movs r5, #128	@ 0004e300 8025
.org 0x4e302
	lsls r5, r5, #3	@ 0004e302 ed00
.org 0x4e304
	str r5, [sp, #0]	@ 0004e304 0095
.org 0x4e306
	movs r0, #16	@ 0004e306 1020
.org 0x4e308
	str r0, [sp, #4]	@ 0004e308 0190
.org 0x4e30a
	movs r4, #2	@ 0004e30a 0224
.org 0x4e30c
	str r4, [sp, #8]	@ 0004e30c 0294
.org 0x4e30e
	str r4, [sp, #12]	@ 0004e30e 0394
.org 0x4e310
	adds r0, r7, #0	@ 0004e310 381c
.org 0x4e312
	adds r1, r6, #0	@ 0004e312 311c
.org 0x4e314
	movs r2, #0	@ 0004e314 0022
.org 0x4e316
	movs r3, #0	@ 0004e316 0023
.org 0x4e318
	bl 0x3f000	@ 0004e318 f0f772fe
.org 0x4e31c
	str r5, [sp, #0]	@ 0004e31c 0095
.org 0x4e31e
	movs r0, #224	@ 0004e31e e020
.org 0x4e320
	str r0, [sp, #4]	@ 0004e320 0190
.org 0x4e322
	str r4, [sp, #8]	@ 0004e322 0294
.org 0x4e324
	str r4, [sp, #12]	@ 0004e324 0394
.org 0x4e326
	adds r0, r7, #0	@ 0004e326 381c
.org 0x4e328
	adds r1, r6, #0	@ 0004e328 311c
.org 0x4e32a
	movs r2, #0	@ 0004e32a 0022
.org 0x4e32c
	movs r3, #0	@ 0004e32c 0023
.org 0x4e32e
	bl 0x3f000	@ 0004e32e f0f767fe
.org 0x4e332
	str r5, [sp, #0]	@ 0004e332 0095
.org 0x4e334
	movs r0, #64	@ 0004e334 4020
.org 0x4e336
	b.n 0x4e3ea	@ 0004e336 58e0
.org 0x4e338
	cmp r3, #7	@ 0004e338 072b
.org 0x4e33a
	bhi.n 0x4e374	@ 0004e33a 1bd8
.org 0x4e33c
	movs r5, #128	@ 0004e33c 8025
.org 0x4e33e
	lsls r5, r5, #3	@ 0004e33e ed00
.org 0x4e340
	str r5, [sp, #0]	@ 0004e340 0095
.org 0x4e342
	movs r0, #8	@ 0004e342 0820
.org 0x4e344
	str r0, [sp, #4]	@ 0004e344 0190
.org 0x4e346
	movs r4, #2	@ 0004e346 0224
.org 0x4e348
	str r4, [sp, #8]	@ 0004e348 0294
.org 0x4e34a
	str r4, [sp, #12]	@ 0004e34a 0394
.org 0x4e34c
	adds r0, r7, #0	@ 0004e34c 381c
.org 0x4e34e
	adds r1, r6, #0	@ 0004e34e 311c
.org 0x4e350
	movs r2, #0	@ 0004e350 0022
.org 0x4e352
	movs r3, #0	@ 0004e352 0023
.org 0x4e354
	bl 0x3f000	@ 0004e354 f0f754fe
.org 0x4e358
	str r5, [sp, #0]	@ 0004e358 0095
.org 0x4e35a
	movs r0, #216	@ 0004e35a d820
.org 0x4e35c
	str r0, [sp, #4]	@ 0004e35c 0190
.org 0x4e35e
	str r4, [sp, #8]	@ 0004e35e 0294
.org 0x4e360
	str r4, [sp, #12]	@ 0004e360 0394
.org 0x4e362
	adds r0, r7, #0	@ 0004e362 381c
.org 0x4e364
	adds r1, r6, #0	@ 0004e364 311c
.org 0x4e366
	movs r2, #0	@ 0004e366 0022
.org 0x4e368
	movs r3, #0	@ 0004e368 0023
.org 0x4e36a
	bl 0x3f000	@ 0004e36a f0f749fe
.org 0x4e36e
	str r5, [sp, #0]	@ 0004e36e 0095
.org 0x4e370
	movs r0, #56	@ 0004e370 3820
.org 0x4e372
	b.n 0x4e3ea	@ 0004e372 3ae0
.org 0x4e374
	cmp r3, #9	@ 0004e374 092b
.org 0x4e376
	bhi.n 0x4e3b0	@ 0004e376 1bd8
.org 0x4e378
	movs r5, #128	@ 0004e378 8025
.org 0x4e37a
	lsls r5, r5, #3	@ 0004e37a ed00
.org 0x4e37c
	str r5, [sp, #0]	@ 0004e37c 0095
.org 0x4e37e
	movs r0, #240	@ 0004e37e f020
.org 0x4e380
	str r0, [sp, #4]	@ 0004e380 0190
.org 0x4e382
	movs r4, #2	@ 0004e382 0224
.org 0x4e384
	str r4, [sp, #8]	@ 0004e384 0294
.org 0x4e386
	str r4, [sp, #12]	@ 0004e386 0394
.org 0x4e388
	adds r0, r7, #0	@ 0004e388 381c
.org 0x4e38a
	adds r1, r6, #0	@ 0004e38a 311c
.org 0x4e38c
	movs r2, #0	@ 0004e38c 0022
.org 0x4e38e
	movs r3, #0	@ 0004e38e 0023
.org 0x4e390
	bl 0x3f000	@ 0004e390 f0f736fe
.org 0x4e394
	str r5, [sp, #0]	@ 0004e394 0095
.org 0x4e396
	movs r0, #192	@ 0004e396 c020
.org 0x4e398
	str r0, [sp, #4]	@ 0004e398 0190
.org 0x4e39a
	str r4, [sp, #8]	@ 0004e39a 0294
.org 0x4e39c
	str r4, [sp, #12]	@ 0004e39c 0394
.org 0x4e39e
	adds r0, r7, #0	@ 0004e39e 381c
.org 0x4e3a0
	adds r1, r6, #0	@ 0004e3a0 311c
.org 0x4e3a2
	movs r2, #0	@ 0004e3a2 0022
.org 0x4e3a4
	movs r3, #0	@ 0004e3a4 0023
.org 0x4e3a6
	bl 0x3f000	@ 0004e3a6 f0f72bfe
.org 0x4e3aa
	str r5, [sp, #0]	@ 0004e3aa 0095
.org 0x4e3ac
	movs r0, #32	@ 0004e3ac 2020
.org 0x4e3ae
	b.n 0x4e3ea	@ 0004e3ae 1ce0
.org 0x4e3b0
	cmp r3, #13	@ 0004e3b0 0d2b
.org 0x4e3b2
	bhi.n 0x4e3fe	@ 0004e3b2 24d8
.org 0x4e3b4
	movs r5, #128	@ 0004e3b4 8025
.org 0x4e3b6
	lsls r5, r5, #3	@ 0004e3b6 ed00
.org 0x4e3b8
	str r5, [sp, #0]	@ 0004e3b8 0095
.org 0x4e3ba
	movs r0, #248	@ 0004e3ba f820
.org 0x4e3bc
	str r0, [sp, #4]	@ 0004e3bc 0190
.org 0x4e3be
	movs r4, #2	@ 0004e3be 0224
.org 0x4e3c0
	str r4, [sp, #8]	@ 0004e3c0 0294
.org 0x4e3c2
	str r4, [sp, #12]	@ 0004e3c2 0394
.org 0x4e3c4
	adds r0, r7, #0	@ 0004e3c4 381c
.org 0x4e3c6
	adds r1, r6, #0	@ 0004e3c6 311c
.org 0x4e3c8
	movs r2, #0	@ 0004e3c8 0022
.org 0x4e3ca
	movs r3, #0	@ 0004e3ca 0023
.org 0x4e3cc
	bl 0x3f000	@ 0004e3cc f0f718fe
.org 0x4e3d0
	str r5, [sp, #0]	@ 0004e3d0 0095
.org 0x4e3d2
	movs r0, #200	@ 0004e3d2 c820
.org 0x4e3d4
	str r0, [sp, #4]	@ 0004e3d4 0190
.org 0x4e3d6
	str r4, [sp, #8]	@ 0004e3d6 0294
.org 0x4e3d8
	str r4, [sp, #12]	@ 0004e3d8 0394
.org 0x4e3da
	adds r0, r7, #0	@ 0004e3da 381c
.org 0x4e3dc
	adds r1, r6, #0	@ 0004e3dc 311c
.org 0x4e3de
	movs r2, #0	@ 0004e3de 0022
.org 0x4e3e0
	movs r3, #0	@ 0004e3e0 0023
.org 0x4e3e2
	bl 0x3f000	@ 0004e3e2 f0f70dfe
.org 0x4e3e6
	str r5, [sp, #0]	@ 0004e3e6 0095
.org 0x4e3e8
	movs r0, #40	@ 0004e3e8 2820
.org 0x4e3ea
	str r0, [sp, #4]	@ 0004e3ea 0190
.org 0x4e3ec
	str r4, [sp, #8]	@ 0004e3ec 0294
.org 0x4e3ee
	str r4, [sp, #12]	@ 0004e3ee 0394
.org 0x4e3f0
	adds r0, r7, #0	@ 0004e3f0 381c
.org 0x4e3f2
	adds r1, r6, #0	@ 0004e3f2 311c
.org 0x4e3f4
	movs r2, #0	@ 0004e3f4 0022
.org 0x4e3f6
	movs r3, #0	@ 0004e3f6 0023
.org 0x4e3f8
	bl 0x3f000	@ 0004e3f8 f0f702fe
.org 0x4e3fc
	b.n 0x4e444	@ 0004e3fc 22e0
.org 0x4e3fe
	movs r5, #128	@ 0004e3fe 8025
.org 0x4e400
	lsls r5, r5, #3	@ 0004e400 ed00
.org 0x4e402
	str r5, [sp, #0]	@ 0004e402 0095
.org 0x4e404
	str r4, [sp, #4]	@ 0004e404 0194
.org 0x4e406
	movs r4, #2	@ 0004e406 0224
.org 0x4e408
	str r4, [sp, #8]	@ 0004e408 0294
.org 0x4e40a
	str r4, [sp, #12]	@ 0004e40a 0394
.org 0x4e40c
	adds r0, r7, #0	@ 0004e40c 381c
.org 0x4e40e
	adds r1, r6, #0	@ 0004e40e 311c
.org 0x4e410
	movs r2, #0	@ 0004e410 0022
.org 0x4e412
	movs r3, #0	@ 0004e412 0023
.org 0x4e414
	bl 0x3f000	@ 0004e414 f0f7f4fd
.org 0x4e418
	str r5, [sp, #0]	@ 0004e418 0095
.org 0x4e41a
	movs r0, #208	@ 0004e41a d020
.org 0x4e41c
	str r0, [sp, #4]	@ 0004e41c 0190
.org 0x4e41e
	str r4, [sp, #8]	@ 0004e41e 0294
.org 0x4e420
	str r4, [sp, #12]	@ 0004e420 0394
.org 0x4e422
	adds r0, r7, #0	@ 0004e422 381c
.org 0x4e424
	adds r1, r6, #0	@ 0004e424 311c
.org 0x4e426
	movs r2, #0	@ 0004e426 0022
.org 0x4e428
	movs r3, #0	@ 0004e428 0023
.org 0x4e42a
	bl 0x3f000	@ 0004e42a f0f7e9fd
.org 0x4e42e
	str r5, [sp, #0]	@ 0004e42e 0095
.org 0x4e430
	movs r0, #48	@ 0004e430 3020
.org 0x4e432
	str r0, [sp, #4]	@ 0004e432 0190
.org 0x4e434
	str r4, [sp, #8]	@ 0004e434 0294
.org 0x4e436
	str r4, [sp, #12]	@ 0004e436 0394
.org 0x4e438
	adds r0, r7, #0	@ 0004e438 381c
.org 0x4e43a
	adds r1, r6, #0	@ 0004e43a 311c
.org 0x4e43c
	movs r2, #0	@ 0004e43c 0022
.org 0x4e43e
	movs r3, #0	@ 0004e43e 0023
.org 0x4e440
	bl 0x3f000	@ 0004e440 f0f7defd
.org 0x4e444
	adds r1, r6, #0	@ 0004e444 311c
.org 0x4e446
	adds r1, #84	@ 0004e446 5431
.org 0x4e448
	movs r0, #2	@ 0004e448 0220
.org 0x4e44a
	bl 0xd0c88	@ 0004e44a 82f01dfc
.org 0x4e44e
	movs r0, #53	@ 0004e44e 3520
.org 0x4e450
	bl 0x2b10	@ 0004e450 b4f75efb
.org 0x4e454
	ldr r1, [pc, #32]	@ 0004e454 0849
.org 0x4e456
	ldrb r0, [r6, #9]	@ 0004e456 707a
.org 0x4e458
	lsls r0, r0, #2	@ 0004e458 8000
