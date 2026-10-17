@ FUN_080ae1a4  entry 0x080ae1a4  size 146
.thumb
.org 0xae1a4
FUN_080ae1a4:
	push {r4, r5, r6, lr}	@ 000ae1a4 70b5
.org 0xae1a6
	adds r5, r0, #0	@ 000ae1a6 051c
.org 0xae1a8
	ldrb r1, [r5, #10]	@ 000ae1a8 a97a
.org 0xae1aa
	movs r0, #2	@ 000ae1aa 0220
.org 0xae1ac
	movs r4, #0	@ 000ae1ac 0024
.org 0xae1ae
	orrs r0, r1	@ 000ae1ae 0843
.org 0xae1b0
	movs r1, #239	@ 000ae1b0 ef21
.org 0xae1b2
	ands r0, r1	@ 000ae1b2 0840
.org 0xae1b4
	movs r6, #0	@ 000ae1b4 0026
.org 0xae1b6
	strb r0, [r5, #10]	@ 000ae1b6 a872
.org 0xae1b8
	movs r2, #1	@ 000ae1b8 0122
.org 0xae1ba
	adds r0, r5, #0	@ 000ae1ba 281c
.org 0xae1bc
	adds r0, #76	@ 000ae1bc 4c30
.org 0xae1be
	strb r6, [r0, #0]	@ 000ae1be 0670
.org 0xae1c0
	adds r3, r5, #0	@ 000ae1c0 2b1c
.org 0xae1c2
	adds r3, #74	@ 000ae1c2 4a33
.org 0xae1c4
	ldrb r1, [r3, #0]	@ 000ae1c4 1978
.org 0xae1c6
	movs r0, #17	@ 000ae1c6 1120
.org 0xae1c8
	negs r0, r0	@ 000ae1c8 4042
.org 0xae1ca
	ands r0, r1	@ 000ae1ca 0840
.org 0xae1cc
	strb r0, [r3, #0]	@ 000ae1cc 1870
.org 0xae1ce
	ldr r1, [pc, #56]	@ 000ae1ce 0e49
.org 0xae1d0
	ldrb r0, [r5, #9]	@ 000ae1d0 687a
.org 0xae1d2
	lsls r0, r0, #2	@ 000ae1d2 8000
.org 0xae1d4
	adds r0, r0, r1	@ 000ae1d4 4018
.org 0xae1d6
	str r2, [r5, #12]	@ 000ae1d6 ea60
.org 0xae1d8
	ldr r0, [r0, #0]	@ 000ae1d8 0068
.org 0xae1da
	ldr r0, [r0, #4]	@ 000ae1da 4068
.org 0xae1dc
	str r0, [r5, #20]	@ 000ae1dc 6861
.org 0xae1de
	ldrb r0, [r5, #16]	@ 000ae1de 287c
.org 0xae1e0
	cmp r0, #0	@ 000ae1e0 0028
.org 0xae1e2
	bne.n 0xae210	@ 000ae1e2 15d1
.org 0xae1e4
	ldrb r0, [r5, #10]	@ 000ae1e4 a87a
.org 0xae1e6
	movs r1, #4	@ 000ae1e6 0421
.org 0xae1e8
	orrs r0, r1	@ 000ae1e8 0843
.org 0xae1ea
	strb r0, [r5, #10]	@ 000ae1ea a872
.org 0xae1ec
	adds r4, r5, #0	@ 000ae1ec 2c1c
.org 0xae1ee
	adds r4, #116	@ 000ae1ee 7434
.org 0xae1f0
	ldr r1, [pc, #24]	@ 000ae1f0 0649
.org 0xae1f2
	adds r2, r5, #0	@ 000ae1f2 2a1c
.org 0xae1f4
	adds r2, #84	@ 000ae1f4 5432
.org 0xae1f6
	adds r0, r4, #0	@ 000ae1f6 201c
.org 0xae1f8
	movs r3, #100	@ 000ae1f8 6423
.org 0xae1fa
	bl 0x5760	@ 000ae1fa 57f7b1fa
.org 0xae1fe
	str r5, [r4, #44]	@ 000ae1fe e562
.org 0xae200
	str r6, [r4, #36]	@ 000ae200 6662
.org 0xae202
	strb r6, [r5, #13]	@ 000ae202 6e73
.org 0xae204
	b.n 0xae234	@ 000ae204 16e0
.org 0xae206
	.byte 0x00	@ 000ae206 data
.org 0xae207
	.byte 0x00	@ 000ae207 data
.org 0xae208
	.byte 0x40,0xdb,0x85,0x08	@ 000ae208 data
.org 0xae20c
	.byte 0xe8,0x2e,0x86,0x08	@ 000ae20c data
.org 0xae210
	ldrb r0, [r5, #10]	@ 000ae210 a87a
.org 0xae212
	movs r1, #4	@ 000ae212 0421
.org 0xae214
	orrs r0, r1	@ 000ae214 0843
.org 0xae216
	strb r0, [r5, #10]	@ 000ae216 a872
.org 0xae218
	adds r4, r5, #0	@ 000ae218 2c1c
.org 0xae21a
	adds r4, #116	@ 000ae21a 7434
.org 0xae21c
	ldr r1, [pc, #32]	@ 000ae21c 0849
.org 0xae21e
	adds r2, r5, #0	@ 000ae21e 2a1c
.org 0xae220
	adds r2, #84	@ 000ae220 5432
.org 0xae222
	adds r0, r4, #0	@ 000ae222 201c
.org 0xae224
	movs r3, #100	@ 000ae224 6423
.org 0xae226
	bl 0x5760	@ 000ae226 57f79bfa
.org 0xae22a
	str r5, [r4, #44]	@ 000ae22a e562
.org 0xae22c
	movs r0, #0	@ 000ae22c 0020
.org 0xae22e
	str r0, [r4, #36]	@ 000ae22e 6062
.org 0xae230
	movs r0, #2	@ 000ae230 0220
.org 0xae232
	strb r0, [r5, #13]	@ 000ae232 6873
.org 0xae234
	adds r0, r5, #0	@ 000ae234 281c
