@ FUN_0803e194  entry 0x0803e194  size 186
.thumb
.org 0x3e194
FUN_0803e194:
	push {r4, r5, lr}	@ 0003e194 30b5
.org 0x3e196
	adds r4, r0, #0	@ 0003e196 041c
.org 0x3e198
	adds r0, #180	@ 0003e198 b430
.org 0x3e19a
	ldr r5, [r0, #0]	@ 0003e19a 0568
.org 0x3e19c
	ldrb r0, [r4, #13]	@ 0003e19c 607b
.org 0x3e19e
	cmp r0, #1	@ 0003e19e 0128
.org 0x3e1a0
	beq.n 0x3e1f4	@ 0003e1a0 28d0
.org 0x3e1a2
	cmp r0, #1	@ 0003e1a2 0128
.org 0x3e1a4
	bgt.n 0x3e1ac	@ 0003e1a4 02dc
.org 0x3e1a6
	cmp r0, #0	@ 0003e1a6 0028
.org 0x3e1a8
	beq.n 0x3e1b6	@ 0003e1a8 05d0
.org 0x3e1aa
	b.n 0x3e24c	@ 0003e1aa 4fe0
.org 0x3e1ac
	cmp r0, #2	@ 0003e1ac 0228
.org 0x3e1ae
	beq.n 0x3e214	@ 0003e1ae 31d0
.org 0x3e1b0
	cmp r0, #3	@ 0003e1b0 0328
.org 0x3e1b2
	beq.n 0x3e230	@ 0003e1b2 3dd0
.org 0x3e1b4
	b.n 0x3e24c	@ 0003e1b4 4ae0
.org 0x3e1b6
	ldr r1, [pc, #88]	@ 0003e1b6 1649
.org 0x3e1b8
	adds r0, r4, #0	@ 0003e1b8 201c
.org 0x3e1ba
	bl 0x1cf00	@ 0003e1ba def7a1fe
.org 0x3e1be
	adds r2, r5, #0	@ 0003e1be 2a1c
.org 0x3e1c0
	adds r2, #230	@ 0003e1c0 e632
.org 0x3e1c2
	ldrb r0, [r2, #0]	@ 0003e1c2 1078
.org 0x3e1c4
	adds r1, r0, #0	@ 0003e1c4 011c
.org 0x3e1c6
	cmp r1, #0	@ 0003e1c6 0029
.org 0x3e1c8
	beq.n 0x3e1e0	@ 0003e1c8 0ad0
.org 0x3e1ca
	cmp r1, #255	@ 0003e1ca ff29
.org 0x3e1cc
	beq.n 0x3e1d2	@ 0003e1cc 01d0
.org 0x3e1ce
	subs r0, #1	@ 0003e1ce 0138
.org 0x3e1d0
	strb r0, [r2, #0]	@ 0003e1d0 1070
.org 0x3e1d2
	adds r0, r5, #0	@ 0003e1d2 281c
.org 0x3e1d4
	adds r1, r4, #0	@ 0003e1d4 211c
.org 0x3e1d6
	bl 0x3f9dc	@ 0003e1d6 01f001fc
.org 0x3e1da
	movs r0, #72	@ 0003e1da 4820
.org 0x3e1dc
	bl 0x2b10	@ 0003e1dc c4f798fc
.org 0x3e1e0
	movs r0, #170	@ 0003e1e0 aa20
.org 0x3e1e2
	lsls r0, r0, #1	@ 0003e1e2 4000
.org 0x3e1e4
	adds r1, r5, r0	@ 0003e1e4 2918
.org 0x3e1e6
	movs r0, #0	@ 0003e1e6 0020
.org 0x3e1e8
	strb r0, [r1, #0]	@ 0003e1e8 0870
.org 0x3e1ea
	movs r0, #2	@ 0003e1ea 0220
.org 0x3e1ec
	strb r0, [r4, #18]	@ 0003e1ec a074
.org 0x3e1ee
	ldrb r0, [r4, #13]	@ 0003e1ee 607b
.org 0x3e1f0
	adds r0, #1	@ 0003e1f0 0130
.org 0x3e1f2
	strb r0, [r4, #13]	@ 0003e1f2 6073
.org 0x3e1f4
	ldrb r0, [r4, #18]	@ 0003e1f4 a07c
.org 0x3e1f6
	subs r0, #1	@ 0003e1f6 0138
.org 0x3e1f8
	strb r0, [r4, #18]	@ 0003e1f8 a074
.org 0x3e1fa
	lsls r0, r0, #24	@ 0003e1fa 0006
.org 0x3e1fc
	cmp r0, #0	@ 0003e1fc 0028
.org 0x3e1fe
	bne.n 0x3e24c	@ 0003e1fe 25d1
.org 0x3e200
	movs r0, #170	@ 0003e200 aa20
.org 0x3e202
	lsls r0, r0, #1	@ 0003e202 4000
.org 0x3e204
	adds r1, r5, r0	@ 0003e204 2918
.org 0x3e206
	movs r0, #1	@ 0003e206 0120
.org 0x3e208
	strb r0, [r1, #0]	@ 0003e208 0870
.org 0x3e20a
	movs r0, #16	@ 0003e20a 1020
.org 0x3e20c
	strb r0, [r4, #18]	@ 0003e20c a074
.org 0x3e20e
	b.n 0x3e246	@ 0003e20e 1ae0
.org 0x3e210
	.byte 0x0b,0x80,0x00,0x00	@ 0003e210 data
.org 0x3e214
	ldrb r0, [r4, #18]	@ 0003e214 a07c
.org 0x3e216
	subs r0, #1	@ 0003e216 0138
.org 0x3e218
	strb r0, [r4, #18]	@ 0003e218 a074
.org 0x3e21a
	lsls r0, r0, #24	@ 0003e21a 0006
.org 0x3e21c
	cmp r0, #0	@ 0003e21c 0028
.org 0x3e21e
	bne.n 0x3e24c	@ 0003e21e 15d1
.org 0x3e220
	movs r0, #170	@ 0003e220 aa20
.org 0x3e222
	lsls r0, r0, #1	@ 0003e222 4000
.org 0x3e224
	adds r1, r5, r0	@ 0003e224 2918
.org 0x3e226
	movs r0, #3	@ 0003e226 0320
.org 0x3e228
	strb r0, [r1, #0]	@ 0003e228 0870
.org 0x3e22a
	movs r0, #16	@ 0003e22a 1020
.org 0x3e22c
	strb r0, [r4, #18]	@ 0003e22c a074
.org 0x3e22e
	b.n 0x3e246	@ 0003e22e 0ae0
.org 0x3e230
	ldrb r0, [r4, #18]	@ 0003e230 a07c
.org 0x3e232
	subs r0, #1	@ 0003e232 0138
.org 0x3e234
	strb r0, [r4, #18]	@ 0003e234 a074
.org 0x3e236
	lsls r0, r0, #24	@ 0003e236 0006
.org 0x3e238
	cmp r0, #0	@ 0003e238 0028
.org 0x3e23a
	bne.n 0x3e24c	@ 0003e23a 07d1
.org 0x3e23c
	movs r0, #170	@ 0003e23c aa20
.org 0x3e23e
	lsls r0, r0, #1	@ 0003e23e 4000
.org 0x3e240
	adds r1, r5, r0	@ 0003e240 2918
.org 0x3e242
	movs r0, #4	@ 0003e242 0420
.org 0x3e244
	strb r0, [r1, #0]	@ 0003e244 0870
.org 0x3e246
	ldrb r0, [r4, #13]	@ 0003e246 607b
.org 0x3e248
	adds r0, #1	@ 0003e248 0130
.org 0x3e24a
	strb r0, [r4, #13]	@ 0003e24a 6073
.org 0x3e24c
	pop {r4, r5}	@ 0003e24c 30bc
