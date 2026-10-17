@ FUN_0803f190  entry 0x0803f190  size 190
.thumb
.org 0x3f190
FUN_0803f190:
	push {r4, r5, r6, r7, lr}	@ 0003f190 f0b5
.org 0x3f192
	mov r7, r8	@ 0003f192 4746
.org 0x3f194
	push {r7}	@ 0003f194 80b4
.org 0x3f196
	sub sp, #8	@ 0003f196 82b0
.org 0x3f198
	adds r7, r0, #0	@ 0003f198 071c
.org 0x3f19a
	ldr r4, [r7, #40]	@ 0003f19a bc6a
.org 0x3f19c
	ldr r1, [pc, #76]	@ 0003f19c 1349
.org 0x3f19e
	ldrb r0, [r7, #9]	@ 0003f19e 787a
.org 0x3f1a0
	lsls r0, r0, #2	@ 0003f1a0 8000
.org 0x3f1a2
	adds r0, r0, r1	@ 0003f1a2 4018
.org 0x3f1a4
	movs r1, #1	@ 0003f1a4 0121
.org 0x3f1a6
	str r1, [r7, #12]	@ 0003f1a6 f960
.org 0x3f1a8
	ldr r0, [r0, #0]	@ 0003f1a8 0068
.org 0x3f1aa
	ldr r0, [r0, #4]	@ 0003f1aa 4068
.org 0x3f1ac
	str r0, [r7, #20]	@ 0003f1ac 7861
.org 0x3f1ae
	adds r0, r7, #0	@ 0003f1ae 381c
.org 0x3f1b0
	bl 0x1cc9c	@ 0003f1b0 ddf774fd
.org 0x3f1b4
	adds r0, r7, #0	@ 0003f1b4 381c
.org 0x3f1b6
	bl 0x1ceec	@ 0003f1b6 ddf799fe
.org 0x3f1ba
	ldrb r1, [r7, #10]	@ 0003f1ba b97a
.org 0x3f1bc
	movs r0, #1	@ 0003f1bc 0120
.org 0x3f1be
	orrs r0, r1	@ 0003f1be 0843
.org 0x3f1c0
	movs r1, #2	@ 0003f1c0 0221
.org 0x3f1c2
	orrs r0, r1	@ 0003f1c2 0843
.org 0x3f1c4
	strb r0, [r7, #10]	@ 0003f1c4 b872
.org 0x3f1c6
	movs r1, #160	@ 0003f1c6 a021
.org 0x3f1c8
	lsls r1, r1, #7	@ 0003f1c8 c901
.org 0x3f1ca
	adds r0, r7, #0	@ 0003f1ca 381c
.org 0x3f1cc
	bl 0x1cf00	@ 0003f1cc ddf798fe
.org 0x3f1d0
	ldrb r0, [r4, #9]	@ 0003f1d0 607a
.org 0x3f1d2
	cmp r0, #52	@ 0003f1d2 3428
.org 0x3f1d4
	beq.n 0x3f202	@ 0003f1d4 15d0
.org 0x3f1d6
	cmp r0, #3	@ 0003f1d6 0328
.org 0x3f1d8
	bne.n 0x3f1fc	@ 0003f1d8 10d1
.org 0x3f1da
	ldrb r0, [r4, #16]	@ 0003f1da 207c
.org 0x3f1dc
	cmp r0, #6	@ 0003f1dc 0628
.org 0x3f1de
	beq.n 0x3f1e4	@ 0003f1de 01d0
.org 0x3f1e0
	cmp r0, #9	@ 0003f1e0 0928
.org 0x3f1e2
	bne.n 0x3f1f4	@ 0003f1e2 07d1
.org 0x3f1e4
	ldr r0, [pc, #8]	@ 0003f1e4 0248
.org 0x3f1e6
	bl 0x2b10	@ 0003f1e6 c3f793fc
.org 0x3f1ea
	b.n 0x3f202	@ 0003f1ea 0ae0
.org 0x3f1ec
	.byte 0xf8,0x39,0x85,0x08	@ 0003f1ec data
.org 0x3f1f0
	.byte 0xbf,0x01,0x00,0x00	@ 0003f1f0 data
.org 0x3f1f4
	movs r0, #22	@ 0003f1f4 1620
.org 0x3f1f6
	bl 0x2b10	@ 0003f1f6 c3f78bfc
.org 0x3f1fa
	b.n 0x3f202	@ 0003f1fa 02e0
.org 0x3f1fc
	movs r0, #22	@ 0003f1fc 1620
.org 0x3f1fe
	bl 0x2b10	@ 0003f1fe c3f787fc
.org 0x3f202
	adds r5, r7, #0	@ 0003f202 3d1c
.org 0x3f204
	adds r5, #180	@ 0003f204 b435
.org 0x3f206
	movs r6, #0	@ 0003f206 0026
.org 0x3f208
	strb r6, [r5, #7]	@ 0003f208 ee71
.org 0x3f20a
	ldrb r1, [r7, #10]	@ 0003f20a b97a
.org 0x3f20c
	movs r0, #4	@ 0003f20c 0420
.org 0x3f20e
	orrs r0, r1	@ 0003f20e 0843
.org 0x3f210
	strb r0, [r7, #10]	@ 0003f210 b872
.org 0x3f212
	adds r4, r7, #0	@ 0003f212 3c1c
.org 0x3f214
	adds r4, #116	@ 0003f214 7434
.org 0x3f216
	ldr r0, [pc, #64]	@ 0003f216 1048
.org 0x3f218
	mov r8, r0	@ 0003f218 8046
.org 0x3f21a
	adds r2, r7, #0	@ 0003f21a 3a1c
.org 0x3f21c
	adds r2, #84	@ 0003f21c 5432
.org 0x3f21e
	adds r0, r4, #0	@ 0003f21e 201c
.org 0x3f220
	mov r1, r8	@ 0003f220 4146
.org 0x3f222
	movs r3, #1	@ 0003f222 0123
.org 0x3f224
	bl 0x5760	@ 0003f224 c6f79cfa
.org 0x3f228
	str r7, [r4, #44]	@ 0003f228 e762
.org 0x3f22a
	str r6, [r4, #36]	@ 0003f22a 6662
.org 0x3f22c
	ldrb r2, [r5, #5]	@ 0003f22c 6a79
.org 0x3f22e
	movs r3, #1	@ 0003f22e 0123
.org 0x3f230
	negs r3, r3	@ 0003f230 5b42
.org 0x3f232
	str r3, [sp, #0]	@ 0003f232 0093
.org 0x3f234
	ldrb r0, [r5, #6]	@ 0003f234 a879
.org 0x3f236
	str r0, [sp, #4]	@ 0003f236 0190
.org 0x3f238
	adds r0, r4, #0	@ 0003f238 201c
.org 0x3f23a
	mov r1, r8	@ 0003f23a 4146
.org 0x3f23c
	bl 0x5794	@ 0003f23c c6f7aafa
.org 0x3f240
	ldr r0, [pc, #24]	@ 0003f240 0648
.org 0x3f242
	str r0, [r4, #36]	@ 0003f242 6062
.org 0x3f244
	adds r0, r7, #0	@ 0003f244 381c
.org 0x3f246
	bl 0x3f260	@ 0003f246 00f00bf8
.org 0x3f24a
	add sp, #8	@ 0003f24a 02b0
.org 0x3f24c
	pop {r3}	@ 0003f24c 08bc
