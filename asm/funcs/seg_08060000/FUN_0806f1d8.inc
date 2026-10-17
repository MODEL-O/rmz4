@ FUN_0806f1d8  entry 0x0806f1d8  size 136
.thumb
.org 0x6f1d8
FUN_0806f1d8:
	push {r4, r5, r6, r7, lr}	@ 0006f1d8 f0b5
.org 0x6f1da
	mov r7, r8	@ 0006f1da 4746
.org 0x6f1dc
	push {r7}	@ 0006f1dc 80b4
.org 0x6f1de
	sub sp, #8	@ 0006f1de 82b0
.org 0x6f1e0
	adds r4, r0, #0	@ 0006f1e0 041c
.org 0x6f1e2
	ldr r1, [pc, #48]	@ 0006f1e2 0c49
.org 0x6f1e4
	mov r0, sp	@ 0006f1e4 6846
.org 0x6f1e6
	movs r2, #2	@ 0006f1e6 0222
.org 0x6f1e8
	bl 0x129258	@ 0006f1e8 baf036f8
.org 0x6f1ec
	add r0, sp, #4	@ 0006f1ec 01a8
.org 0x6f1ee
	mov r8, r0	@ 0006f1ee 8046
.org 0x6f1f0
	ldr r1, [pc, #36]	@ 0006f1f0 0949
.org 0x6f1f2
	movs r2, #2	@ 0006f1f2 0222
.org 0x6f1f4
	bl 0x129258	@ 0006f1f4 baf030f8
.org 0x6f1f8
	ldr r0, [pc, #32]	@ 0006f1f8 0848
.org 0x6f1fa
	ldrh r1, [r0, #8]	@ 0006f1fa 0189
.org 0x6f1fc
	movs r0, #8	@ 0006f1fc 0820
.org 0x6f1fe
	ands r0, r1	@ 0006f1fe 0840
.org 0x6f200
	lsls r0, r0, #16	@ 0006f200 0004
.org 0x6f202
	lsrs r5, r0, #16	@ 0006f202 050c
.org 0x6f204
	cmp r5, #0	@ 0006f204 002d
.org 0x6f206
	beq.n 0x6f220	@ 0006f206 0bd0
.org 0x6f208
	movs r1, #0	@ 0006f208 0021
.org 0x6f20a
	movs r0, #10	@ 0006f20a 0a20
.org 0x6f20c
	strb r0, [r4, #13]	@ 0006f20c 6073
.org 0x6f20e
	strb r1, [r4, #14]	@ 0006f20e a173
.org 0x6f210
	strb r1, [r4, #15]	@ 0006f210 e173
.org 0x6f212
	b.n 0x6f260	@ 0006f212 25e0
.org 0x6f214
	.byte 0x0e,0x99,0x12,0x08	@ 0006f214 data
.org 0x6f218
	.byte 0x10,0x99,0x12,0x08	@ 0006f218 data
.org 0x6f21c
	.byte 0x10,0xe9,0x02,0x02	@ 0006f21c data
.org 0x6f220
	adds r7, r4, #0	@ 0006f220 271c
.org 0x6f222
	adds r7, #183	@ 0006f222 b737
.org 0x6f224
	ldrb r0, [r7, #0]	@ 0006f224 3878
.org 0x6f226
	adds r6, r4, #0	@ 0006f226 261c
.org 0x6f228
	adds r6, #182	@ 0006f228 b636
.org 0x6f22a
	cmp r0, #1	@ 0006f22a 0128
.org 0x6f22c
	bls.n 0x6f236	@ 0006f22c 03d9
.org 0x6f22e
	ldrb r1, [r6, #0]	@ 0006f22e 3178
.org 0x6f230
	mov r2, r8	@ 0006f230 4246
.org 0x6f232
	adds r0, r2, r1	@ 0006f232 5018
.org 0x6f234
	strb r5, [r0, #0]	@ 0006f234 0570
.org 0x6f236
	mov r0, r8	@ 0006f236 4046
.org 0x6f238
	movs r1, #2	@ 0006f238 0221
.org 0x6f23a
	bl 0x6f304	@ 0006f23a 00f063f8
.org 0x6f23e
	adds r1, r0, #0	@ 0006f23e 011c
.org 0x6f240
	mov r2, sp	@ 0006f240 6a46
.org 0x6f242
	adds r0, r2, r1	@ 0006f242 5018
.org 0x6f244
	ldrb r0, [r0, #0]	@ 0006f244 0078
.org 0x6f246
	strb r0, [r4, #13]	@ 0006f246 6073
.org 0x6f248
	strb r5, [r4, #14]	@ 0006f248 a573
.org 0x6f24a
	strb r5, [r4, #15]	@ 0006f24a e573
.org 0x6f24c
	ldrb r0, [r6, #0]	@ 0006f24c 3078
.org 0x6f24e
	cmp r1, r0	@ 0006f24e 8142
.org 0x6f250
	bne.n 0x6f25a	@ 0006f250 03d1
.org 0x6f252
	ldrb r0, [r7, #0]	@ 0006f252 3878
.org 0x6f254
	adds r0, #1	@ 0006f254 0130
.org 0x6f256
	strb r0, [r7, #0]	@ 0006f256 3870
.org 0x6f258
	b.n 0x6f260	@ 0006f258 02e0
.org 0x6f25a
	movs r0, #1	@ 0006f25a 0120
.org 0x6f25c
	strb r0, [r7, #0]	@ 0006f25c 3870
.org 0x6f25e
	strb r1, [r6, #0]	@ 0006f25e 3170
