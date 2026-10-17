@ FUN_0808f16c  entry 0x0808f16c  size 218
.thumb
.org 0x8f16c
FUN_0808f16c:
	push {r4, r5, r6, r7, lr}	@ 0008f16c f0b5
.org 0x8f16e
	sub sp, #4	@ 0008f16e 81b0
.org 0x8f170
	adds r4, r0, #0	@ 0008f170 041c
.org 0x8f172
	ldr r1, [pc, #152]	@ 0008f172 2649
.org 0x8f174
	mov r0, sp	@ 0008f174 6846
.org 0x8f176
	movs r2, #2	@ 0008f176 0222
.org 0x8f178
	bl 0x129258	@ 0008f178 9af06ef8
.org 0x8f17c
	ldrb r0, [r4, #10]	@ 0008f17c a07a
.org 0x8f17e
	lsrs r6, r0, #4	@ 0008f17e 0609
.org 0x8f180
	movs r7, #1	@ 0008f180 0127
.org 0x8f182
	ands r6, r7	@ 0008f182 3e40
.org 0x8f184
	ldrb r0, [r4, #15]	@ 0008f184 e07b
.org 0x8f186
	cmp r0, #0	@ 0008f186 0028
.org 0x8f188
	bne.n 0x8f1a0	@ 0008f188 0ad1
.org 0x8f18a
	adds r0, r4, #0	@ 0008f18a 201c
.org 0x8f18c
	bl 0x8fd34	@ 0008f18c 00f0d2fd
.org 0x8f190
	ldr r1, [pc, #124]	@ 0008f190 1f49
.org 0x8f192
	adds r0, r4, #0	@ 0008f192 201c
.org 0x8f194
	bl 0x1cf00	@ 0008f194 8df7b4fe
.org 0x8f198
	strb r7, [r4, #18]	@ 0008f198 a774
.org 0x8f19a
	ldrb r0, [r4, #15]	@ 0008f19a e07b
.org 0x8f19c
	adds r0, #1	@ 0008f19c 0130
.org 0x8f19e
	strb r0, [r4, #15]	@ 0008f19e e073
.org 0x8f1a0
	adds r0, r4, #0	@ 0008f1a0 201c
.org 0x8f1a2
	bl 0x1cff0	@ 0008f1a2 8df725ff
.org 0x8f1a6
	adds r0, r4, #0	@ 0008f1a6 201c
.org 0x8f1a8
	adds r0, #116	@ 0008f1a8 7430
.org 0x8f1aa
	ldr r3, [pc, #104]	@ 0008f1aa 1a4b
.org 0x8f1ac
	ldrb r1, [r4, #30]	@ 0008f1ac a17f
.org 0x8f1ae
	lsls r1, r1, #8	@ 0008f1ae 0902
.org 0x8f1b0
	adds r2, r4, #0	@ 0008f1b0 221c
.org 0x8f1b2
	adds r2, #112	@ 0008f1b2 7032
.org 0x8f1b4
	ldrb r2, [r2, #0]	@ 0008f1b4 1278
.org 0x8f1b6
	orrs r1, r2	@ 0008f1b6 1143
.org 0x8f1b8
	ldr r2, [pc, #92]	@ 0008f1b8 174a
.org 0x8f1ba
	adds r1, r1, r2	@ 0008f1ba 8918
.org 0x8f1bc
	lsls r1, r1, #2	@ 0008f1bc 8900
.org 0x8f1be
	adds r1, r1, r3	@ 0008f1be c918
.org 0x8f1c0
	adds r5, r4, #0	@ 0008f1c0 251c
.org 0x8f1c2
	adds r5, #113	@ 0008f1c2 7135
.org 0x8f1c4
	movs r2, #0	@ 0008f1c4 0022
.org 0x8f1c6
	ldrsb r2, [r5, r2]	@ 0008f1c6 aa56
.org 0x8f1c8
	ldr r1, [r1, #0]	@ 0008f1c8 0968
.org 0x8f1ca
	lsls r2, r2, #2	@ 0008f1ca 9200
.org 0x8f1cc
	adds r2, r2, r1	@ 0008f1cc 5218
.org 0x8f1ce
	ldr r1, [r2, #0]	@ 0008f1ce 1168
.org 0x8f1d0
	ldrb r2, [r1, #0]	@ 0008f1d0 0a78
.org 0x8f1d2
	lsls r1, r2, #1	@ 0008f1d2 5100
.org 0x8f1d4
	adds r1, r1, r2	@ 0008f1d4 8918
.org 0x8f1d6
	lsls r1, r1, #3	@ 0008f1d6 c900
.org 0x8f1d8
	ldr r2, [pc, #64]	@ 0008f1d8 104a
.org 0x8f1da
	adds r1, r1, r2	@ 0008f1da 8918
.org 0x8f1dc
	bl 0x5784	@ 0008f1dc 76f7d2fa
.org 0x8f1e0
	ldrb r1, [r4, #18]	@ 0008f1e0 a17c
.org 0x8f1e2
	cmp r1, #0	@ 0008f1e2 0029
.org 0x8f1e4
	beq.n 0x8f23e	@ 0008f1e4 2bd0
.org 0x8f1e6
	movs r0, #0	@ 0008f1e6 0020
.org 0x8f1e8
	ldrsb r0, [r5, r0]	@ 0008f1e8 2856
.org 0x8f1ea
	cmp r0, #2	@ 0008f1ea 0228
.org 0x8f1ec
	bne.n 0x8f252	@ 0008f1ec 31d1
.org 0x8f1ee
	adds r1, r4, #0	@ 0008f1ee 211c
.org 0x8f1f0
	adds r1, #84	@ 0008f1f0 5431
.org 0x8f1f2
	adds r0, r4, #0	@ 0008f1f2 201c
.org 0x8f1f4
	movs r2, #0	@ 0008f1f4 0022
.org 0x8f1f6
	movs r3, #0	@ 0008f1f6 0023
.org 0x8f1f8
	bl 0x8ff04	@ 0008f1f8 00f084fe
.org 0x8f1fc
	adds r1, r0, #0	@ 0008f1fc 011c
.org 0x8f1fe
	adds r3, r4, #0	@ 0008f1fe 231c
.org 0x8f200
	adds r3, #192	@ 0008f200 c033
.org 0x8f202
	str r1, [r3, #0]	@ 0008f202 1960
.org 0x8f204
	cmp r1, #0	@ 0008f204 0029
.org 0x8f206
	bne.n 0x8f220	@ 0008f206 0bd1
.org 0x8f208
	movs r0, #3	@ 0008f208 0320
.org 0x8f20a
	b.n 0x8f24e	@ 0008f20a 20e0
.org 0x8f20c
	.byte 0xa0,0x9b,0x12,0x08	@ 0008f20c data
.org 0x8f210
	.byte 0x02,0x39,0x00,0x00	@ 0008f210 data
.org 0x8f214
	.byte 0xac,0xff,0x85,0x08	@ 0008f214 data
.org 0x8f218
	.byte 0x00,0xc7,0xff,0xff	@ 0008f218 data
.org 0x8f21c
	.byte 0xd8,0xfb,0x85,0x08	@ 0008f21c data
.org 0x8f220
	adds r0, r1, #0	@ 0008f220 081c
.org 0x8f222
	adds r0, #180	@ 0008f222 b430
.org 0x8f224
	movs r2, #0	@ 0008f224 0022
.org 0x8f226
	strb r7, [r0, #0]	@ 0008f226 0770
.org 0x8f228
	ldr r0, [r3, #0]	@ 0008f228 1868
.org 0x8f22a
	adds r0, #181	@ 0008f22a b530
.org 0x8f22c
	strb r2, [r0, #0]	@ 0008f22c 0270
.org 0x8f22e
	ldr r0, [r3, #0]	@ 0008f22e 1868
.org 0x8f230
	mov r3, sp	@ 0008f230 6b46
.org 0x8f232
	adds r1, r3, r6	@ 0008f232 9919
.org 0x8f234
	ldrb r1, [r1, #0]	@ 0008f234 0978
.org 0x8f236
	adds r0, #183	@ 0008f236 b730
.org 0x8f238
	strb r1, [r0, #0]	@ 0008f238 0170
.org 0x8f23a
	strb r2, [r4, #18]	@ 0008f23a a274
.org 0x8f23c
	b.n 0x8f252	@ 0008f23c 09e0
.org 0x8f23e
	adds r0, r4, #0	@ 0008f23e 201c
.org 0x8f240
	adds r0, #192	@ 0008f240 c030
.org 0x8f242
	ldr r0, [r0, #0]	@ 0008f242 0068
.org 0x8f244
	adds r0, #181	@ 0008f244 b530
