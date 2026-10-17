@ FUN_080c61e8  entry 0x080c61e8  size 146
.thumb
.org 0xc61e8
FUN_080c61e8:
	push {r4, lr}	@ 000c61e8 10b5
.org 0xc61ea
	adds r4, r0, #0	@ 000c61ea 041c
.org 0xc61ec
	bl 0x1cff0	@ 000c61ec 56f700ff
.org 0xc61f0
	ldr r1, [r4, #84]	@ 000c61f0 616d
.org 0xc61f2
	ldr r0, [r4, #92]	@ 000c61f2 e06d
.org 0xc61f4
	adds r2, r1, r0	@ 000c61f4 0a18
.org 0xc61f6
	str r2, [r4, #84]	@ 000c61f6 6265
.org 0xc61f8
	ldrb r0, [r4, #18]	@ 000c61f8 a07c
.org 0xc61fa
	subs r0, #1	@ 000c61fa 0138
.org 0xc61fc
	strb r0, [r4, #18]	@ 000c61fc a074
.org 0xc61fe
	lsls r0, r0, #24	@ 000c61fe 0006
.org 0xc6200
	cmp r0, #0	@ 000c6200 0028
.org 0xc6202
	beq.n 0xc6220	@ 000c6202 0dd0
.org 0xc6204
	adds r0, r4, #0	@ 000c6204 201c
.org 0xc6206
	adds r0, #140	@ 000c6206 8c30
.org 0xc6208
	ldr r0, [r0, #0]	@ 000c6208 0068
.org 0xc620a
	movs r1, #4	@ 000c620a 0421
.org 0xc620c
	ands r0, r1	@ 000c620c 0840
.org 0xc620e
	cmp r0, #0	@ 000c620e 0028
.org 0xc6210
	bne.n 0xc6220	@ 000c6210 06d1
.org 0xc6212
	ldr r1, [r4, #88]	@ 000c6212 a16d
.org 0xc6214
	adds r0, r2, #0	@ 000c6214 101c
.org 0xc6216
	bl 0x7c7c	@ 000c6216 41f731fd
.org 0xc621a
	lsls r0, r0, #16	@ 000c621a 0004
.org 0xc621c
	cmp r0, #0	@ 000c621c 0028
.org 0xc621e
	beq.n 0xc6250	@ 000c621e 17d0
.org 0xc6220
	adds r1, r4, #0	@ 000c6220 211c
.org 0xc6222
	adds r1, #84	@ 000c6222 5431
.org 0xc6224
	movs r0, #2	@ 000c6224 0220
.org 0xc6226
	bl 0xd0c88	@ 000c6226 0af02ffd
.org 0xc622a
	movs r0, #42	@ 000c622a 2a20
.org 0xc622c
	bl 0x2b10	@ 000c622c 3cf770fc
.org 0xc6230
	ldr r1, [pc, #24]	@ 000c6230 0649
.org 0xc6232
	ldrb r0, [r4, #9]	@ 000c6232 607a
.org 0xc6234
	lsls r0, r0, #2	@ 000c6234 8000
.org 0xc6236
	adds r0, r0, r1	@ 000c6236 4018
.org 0xc6238
	movs r1, #2	@ 000c6238 0221
.org 0xc623a
	str r1, [r4, #12]	@ 000c623a e160
.org 0xc623c
	ldr r0, [r0, #0]	@ 000c623c 0068
.org 0xc623e
	ldr r0, [r0, #8]	@ 000c623e 8068
.org 0xc6240
	str r0, [r4, #20]	@ 000c6240 6061
.org 0xc6242
	adds r0, r4, #0	@ 000c6242 201c
.org 0xc6244
	bl 0xc6288	@ 000c6244 00f020f8
.org 0xc6248
	b.n 0xc627a	@ 000c6248 17e0
.org 0xc624a
	.byte 0x00	@ 000c624a data
.org 0xc624b
	.byte 0x00	@ 000c624b data
.org 0xc624c
	.byte 0xf4,0x49,0x86,0x08	@ 000c624c data
.org 0xc6250
	ldr r0, [pc, #44]	@ 000c6250 0b48
.org 0xc6252
	adds r1, r4, #0	@ 000c6252 211c
.org 0xc6254
	adds r1, #84	@ 000c6254 5431
.org 0xc6256
	bl 0x1fb14	@ 000c6256 59f75dfc
.org 0xc625a
	movs r1, #128	@ 000c625a 8021
.org 0xc625c
	lsls r1, r1, #5	@ 000c625c 4901
.org 0xc625e
	cmp r0, r1	@ 000c625e 8842
.org 0xc6260
	bls.n 0xc627a	@ 000c6260 0bd9
.org 0xc6262
	ldr r1, [pc, #32]	@ 000c6262 0849
.org 0xc6264
	ldrb r0, [r4, #9]	@ 000c6264 607a
.org 0xc6266
	lsls r0, r0, #2	@ 000c6266 8000
.org 0xc6268
	adds r0, r0, r1	@ 000c6268 4018
.org 0xc626a
	movs r1, #2	@ 000c626a 0221
.org 0xc626c
	str r1, [r4, #12]	@ 000c626c e160
.org 0xc626e
	ldr r0, [r0, #0]	@ 000c626e 0068
.org 0xc6270
	ldr r0, [r0, #8]	@ 000c6270 8068
.org 0xc6272
	str r0, [r4, #20]	@ 000c6272 6061
.org 0xc6274
	adds r0, r4, #0	@ 000c6274 201c
.org 0xc6276
	bl 0xc6288	@ 000c6276 00f007f8
