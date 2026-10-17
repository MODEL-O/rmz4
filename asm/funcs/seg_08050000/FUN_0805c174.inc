@ FUN_0805c174  entry 0x0805c174  size 190
.thumb
.org 0x5c174
FUN_0805c174:
	push {r4, r5, r6, lr}	@ 0005c174 70b5
.org 0x5c176
	sub sp, #4	@ 0005c176 81b0
.org 0x5c178
	adds r4, r0, #0	@ 0005c178 041c
.org 0x5c17a
	ldr r1, [pc, #72]	@ 0005c17a 1249
.org 0x5c17c
	mov r0, sp	@ 0005c17c 6846
.org 0x5c17e
	movs r2, #3	@ 0005c17e 0322
.org 0x5c180
	bl 0x129258	@ 0005c180 cdf06af8
.org 0x5c184
	ldr r0, [pc, #64]	@ 0005c184 1048
.org 0x5c186
	ldrh r1, [r0, #8]	@ 0005c186 0189
.org 0x5c188
	movs r0, #8	@ 0005c188 0820
.org 0x5c18a
	ands r0, r1	@ 0005c18a 0840
.org 0x5c18c
	cmp r0, #0	@ 0005c18c 0028
.org 0x5c18e
	bne.n 0x5c1b8	@ 0005c18e 13d1
.org 0x5c190
	adds r0, r4, #0	@ 0005c190 201c
.org 0x5c192
	adds r0, #200	@ 0005c192 c830
.org 0x5c194
	ldr r0, [r0, #0]	@ 0005c194 0068
.org 0x5c196
	cmp r0, #0	@ 0005c196 0028
.org 0x5c198
	beq.n 0x5c1cc	@ 0005c198 18d0
.org 0x5c19a
	adds r0, r4, #0	@ 0005c19a 201c
.org 0x5c19c
	adds r0, #191	@ 0005c19c bf30
.org 0x5c19e
	ldrb r1, [r0, #0]	@ 0005c19e 0178
.org 0x5c1a0
	subs r0, r1, #1	@ 0005c1a0 481e
.org 0x5c1a2
	lsls r0, r0, #24	@ 0005c1a2 0006
.org 0x5c1a4
	lsrs r0, r0, #24	@ 0005c1a4 000e
.org 0x5c1a6
	cmp r0, #1	@ 0005c1a6 0128
.org 0x5c1a8
	bls.n 0x5c1b8	@ 0005c1a8 06d9
.org 0x5c1aa
	adds r0, r1, #0	@ 0005c1aa 081c
.org 0x5c1ac
	cmp r0, #4	@ 0005c1ac 0428
.org 0x5c1ae
	beq.n 0x5c1b8	@ 0005c1ae 03d0
.org 0x5c1b0
	cmp r0, #5	@ 0005c1b0 0528
.org 0x5c1b2
	beq.n 0x5c1b8	@ 0005c1b2 01d0
.org 0x5c1b4
	cmp r0, #3	@ 0005c1b4 0328
.org 0x5c1b6
	bne.n 0x5c1cc	@ 0005c1b6 09d1
.org 0x5c1b8
	movs r1, #0	@ 0005c1b8 0021
.org 0x5c1ba
	movs r0, #11	@ 0005c1ba 0b20
.org 0x5c1bc
	strb r0, [r4, #13]	@ 0005c1bc 6073
.org 0x5c1be
	strb r1, [r4, #14]	@ 0005c1be a173
.org 0x5c1c0
	strb r1, [r4, #15]	@ 0005c1c0 e173
.org 0x5c1c2
	b.n 0x5c238	@ 0005c1c2 39e0
.org 0x5c1c4
	.byte 0x02,0x97,0x12,0x08	@ 0005c1c4 data
.org 0x5c1c8
	.byte 0x10,0xe9,0x02,0x02	@ 0005c1c8 data
.org 0x5c1cc
	mov r0, sp	@ 0005c1cc 6846
.org 0x5c1ce
	movs r1, #3	@ 0005c1ce 0321
.org 0x5c1d0
	bl 0x5c328	@ 0005c1d0 00f0aaf8
.org 0x5c1d4
	adds r5, r0, #0	@ 0005c1d4 051c
.org 0x5c1d6
	ldr r0, [pc, #24]	@ 0005c1d6 0648
.org 0x5c1d8
	adds r0, r5, r0	@ 0005c1d8 2818
.org 0x5c1da
	ldrb r0, [r0, #0]	@ 0005c1da 0078
.org 0x5c1dc
	movs r6, #0	@ 0005c1dc 0026
.org 0x5c1de
	strb r0, [r4, #13]	@ 0005c1de 6073
.org 0x5c1e0
	strb r6, [r4, #14]	@ 0005c1e0 a673
.org 0x5c1e2
	strb r6, [r4, #15]	@ 0005c1e2 e673
.org 0x5c1e4
	cmp r5, #1	@ 0005c1e4 012d
.org 0x5c1e6
	beq.n 0x5c1f4	@ 0005c1e6 05d0
.org 0x5c1e8
	cmp r5, #2	@ 0005c1e8 022d
.org 0x5c1ea
	beq.n 0x5c216	@ 0005c1ea 14d0
.org 0x5c1ec
	b.n 0x5c238	@ 0005c1ec 24e0
.org 0x5c1ee
	.byte 0x00	@ 0005c1ee data
.org 0x5c1ef
	.byte 0x00	@ 0005c1ef data
.org 0x5c1f0
	.byte 0x23,0x89,0x85,0x08	@ 0005c1f0 data
.org 0x5c1f4
	adds r0, r4, #0	@ 0005c1f4 201c
.org 0x5c1f6
	bl 0x5c3a8	@ 0005c1f6 00f0d7f8
.org 0x5c1fa
	movs r1, #240	@ 0005c1fa f021
.org 0x5c1fc
	lsls r1, r1, #7	@ 0005c1fc c901
.org 0x5c1fe
	adds r0, r0, r1	@ 0005c1fe 4018
.org 0x5c200
	ldr r1, [r4, #84]	@ 0005c200 616d
.org 0x5c202
	cmp r1, r0	@ 0005c202 8142
.org 0x5c204
	bge.n 0x5c20e	@ 0005c204 03da
.org 0x5c206
	adds r0, r4, #0	@ 0005c206 201c
.org 0x5c208
	adds r0, #190	@ 0005c208 be30
.org 0x5c20a
	strb r6, [r0, #0]	@ 0005c20a 0670
.org 0x5c20c
	b.n 0x5c238	@ 0005c20c 14e0
.org 0x5c20e
	adds r0, r4, #0	@ 0005c20e 201c
.org 0x5c210
	adds r0, #190	@ 0005c210 be30
.org 0x5c212
	strb r5, [r0, #0]	@ 0005c212 0570
.org 0x5c214
	b.n 0x5c238	@ 0005c214 10e0
.org 0x5c216
	adds r0, r4, #0	@ 0005c216 201c
.org 0x5c218
	bl 0x5c3a8	@ 0005c218 00f0c6f8
.org 0x5c21c
	movs r1, #240	@ 0005c21c f021
.org 0x5c21e
	lsls r1, r1, #7	@ 0005c21e c901
.org 0x5c220
	adds r0, r0, r1	@ 0005c220 4018
.org 0x5c222
	ldr r1, [r4, #84]	@ 0005c222 616d
.org 0x5c224
	cmp r1, r0	@ 0005c224 8142
.org 0x5c226
	bge.n 0x5c230	@ 0005c226 03da
.org 0x5c228
	adds r0, r4, #0	@ 0005c228 201c
.org 0x5c22a
	adds r0, #207	@ 0005c22a cf30
.org 0x5c22c
	strb r6, [r0, #0]	@ 0005c22c 0670
.org 0x5c22e
	b.n 0x5c238	@ 0005c22e 03e0
.org 0x5c230
	adds r1, r4, #0	@ 0005c230 211c
