@ FUN_080bd1bc  entry 0x080bd1bc  size 156
.thumb
.org 0xbd1bc
FUN_080bd1bc:
	push {lr}	@ 000bd1bc 00b5
.org 0xbd1be
	adds r3, r0, #0	@ 000bd1be 031c
.org 0xbd1c0
	adds r0, #140	@ 000bd1c0 8c30
.org 0xbd1c2
	ldr r0, [r0, #0]	@ 000bd1c2 0068
.org 0xbd1c4
	movs r1, #128	@ 000bd1c4 8021
.org 0xbd1c6
	lsls r1, r1, #2	@ 000bd1c6 8900
.org 0xbd1c8
	ands r0, r1	@ 000bd1c8 0840
.org 0xbd1ca
	cmp r0, #0	@ 000bd1ca 0028
.org 0xbd1cc
	beq.n 0xbd1f4	@ 000bd1cc 12d0
.org 0xbd1ce
	ldr r1, [pc, #32]	@ 000bd1ce 0849
.org 0xbd1d0
	ldrb r0, [r3, #9]	@ 000bd1d0 587a
.org 0xbd1d2
	lsls r0, r0, #2	@ 000bd1d2 8000
.org 0xbd1d4
	adds r0, r0, r1	@ 000bd1d4 4018
.org 0xbd1d6
	movs r1, #2	@ 000bd1d6 0221
.org 0xbd1d8
	str r1, [r3, #12]	@ 000bd1d8 d960
.org 0xbd1da
	ldr r0, [r0, #0]	@ 000bd1da 0068
.org 0xbd1dc
	ldr r0, [r0, #8]	@ 000bd1dc 8068
.org 0xbd1de
	str r0, [r3, #20]	@ 000bd1de 5861
.org 0xbd1e0
	movs r0, #0	@ 000bd1e0 0020
.org 0xbd1e2
	strb r0, [r3, #14]	@ 000bd1e2 9873
.org 0xbd1e4
	movs r0, #32	@ 000bd1e4 2020
.org 0xbd1e6
	strb r0, [r3, #18]	@ 000bd1e6 9874
.org 0xbd1e8
	adds r0, r3, #0	@ 000bd1e8 181c
.org 0xbd1ea
	bl 0xbd260	@ 000bd1ea 00f039f8
.org 0xbd1ee
	b.n 0xbd258	@ 000bd1ee 33e0
.org 0xbd1f0
	.byte 0x40,0xdb,0x85,0x08	@ 000bd1f0 data
.org 0xbd1f4
	ldr r0, [r3, #84]	@ 000bd1f4 586d
.org 0xbd1f6
	ldr r1, [r3, #92]	@ 000bd1f6 d96d
.org 0xbd1f8
	adds r1, r0, r1	@ 000bd1f8 4118
.org 0xbd1fa
	str r1, [r3, #84]	@ 000bd1fa 5965
.org 0xbd1fc
	adds r0, r3, #0	@ 000bd1fc 181c
.org 0xbd1fe
	adds r0, #180	@ 000bd1fe b430
.org 0xbd200
	ldr r0, [r0, #0]	@ 000bd200 0068
.org 0xbd202
	subs r2, r1, r0	@ 000bd202 0a1a
.org 0xbd204
	cmp r2, #0	@ 000bd204 002a
.org 0xbd206
	blt.n 0xbd212	@ 000bd206 04db
.org 0xbd208
	movs r0, #140	@ 000bd208 8c20
.org 0xbd20a
	lsls r0, r0, #9	@ 000bd20a 4002
.org 0xbd20c
	cmp r2, r0	@ 000bd20c 8242
.org 0xbd20e
	bgt.n 0xbd21c	@ 000bd20e 05dc
.org 0xbd210
	b.n 0xbd252	@ 000bd210 1fe0
.org 0xbd212
	subs r1, r0, r1	@ 000bd212 411a
.org 0xbd214
	movs r0, #140	@ 000bd214 8c20
.org 0xbd216
	lsls r0, r0, #9	@ 000bd216 4002
.org 0xbd218
	cmp r1, r0	@ 000bd218 8142
.org 0xbd21a
	ble.n 0xbd252	@ 000bd21a 1add
.org 0xbd21c
	ldrb r1, [r3, #10]	@ 000bd21c 997a
.org 0xbd21e
	movs r0, #254	@ 000bd21e fe20
.org 0xbd220
	ands r0, r1	@ 000bd220 0840
.org 0xbd222
	movs r2, #0	@ 000bd222 0022
.org 0xbd224
	movs r1, #253	@ 000bd224 fd21
.org 0xbd226
	ands r0, r1	@ 000bd226 0840
.org 0xbd228
	strb r0, [r3, #10]	@ 000bd228 9872
.org 0xbd22a
	adds r0, r3, #0	@ 000bd22a 181c
.org 0xbd22c
	adds r0, #140	@ 000bd22c 8c30
.org 0xbd22e
	str r2, [r0, #0]	@ 000bd22e 0260
.org 0xbd230
	adds r0, #4	@ 000bd230 0430
.org 0xbd232
	str r2, [r0, #0]	@ 000bd232 0260
.org 0xbd234
	adds r0, #4	@ 000bd234 0430
.org 0xbd236
	strb r2, [r0, #0]	@ 000bd236 0270
.org 0xbd238
	ldrb r1, [r3, #10]	@ 000bd238 997a
.org 0xbd23a
	movs r0, #251	@ 000bd23a fb20
.org 0xbd23c
	ands r0, r1	@ 000bd23c 0840
.org 0xbd23e
	strb r0, [r3, #10]	@ 000bd23e 9872
.org 0xbd240
	ldr r1, [pc, #24]	@ 000bd240 0649
.org 0xbd242
	ldrb r0, [r3, #9]	@ 000bd242 587a
.org 0xbd244
	lsls r0, r0, #2	@ 000bd244 8000
.org 0xbd246
	adds r0, r0, r1	@ 000bd246 4018
.org 0xbd248
	movs r1, #3	@ 000bd248 0321
.org 0xbd24a
	str r1, [r3, #12]	@ 000bd24a d960
.org 0xbd24c
	ldr r0, [r0, #0]	@ 000bd24c 0068
.org 0xbd24e
	ldr r0, [r0, #12]	@ 000bd24e c068
.org 0xbd250
	str r0, [r3, #20]	@ 000bd250 5861
.org 0xbd252
	adds r0, r3, #0	@ 000bd252 181c
.org 0xbd254
	bl 0x1cff0	@ 000bd254 5ff7ccfe
