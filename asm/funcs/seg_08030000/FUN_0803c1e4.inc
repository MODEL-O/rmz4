@ FUN_0803c1e4  entry 0x0803c1e4  size 144
.thumb
.org 0x3c1e4
FUN_0803c1e4:
	push {r4, r5, lr}	@ 0003c1e4 30b5
.org 0x3c1e6
	adds r4, r0, #0	@ 0003c1e6 041c
.org 0x3c1e8
	adds r1, r4, #0	@ 0003c1e8 211c
.org 0x3c1ea
	adds r1, #180	@ 0003c1ea b431
.org 0x3c1ec
	ldr r5, [r1, #0]	@ 0003c1ec 0d68
.org 0x3c1ee
	ldrb r0, [r1, #15]	@ 0003c1ee c87b
.org 0x3c1f0
	cmp r0, #0	@ 0003c1f0 0028
.org 0x3c1f2
	beq.n 0x3c1fc	@ 0003c1f2 03d0
.org 0x3c1f4
	subs r0, #1	@ 0003c1f4 0138
.org 0x3c1f6
	strb r0, [r1, #15]	@ 0003c1f6 c873
.org 0x3c1f8
	movs r0, #0	@ 0003c1f8 0020
.org 0x3c1fa
	b.n 0x3c276	@ 0003c1fa 3ce0
.org 0x3c1fc
	ldr r0, [r4, #84]	@ 0003c1fc 606d
.org 0x3c1fe
	ldr r1, [r4, #88]	@ 0003c1fe a16d
.org 0x3c200
	bl 0x7c7c	@ 0003c200 cbf73cfd
.org 0x3c204
	lsls r0, r0, #16	@ 0003c204 0004
.org 0x3c206
	lsrs r1, r0, #16	@ 0003c206 010c
.org 0x3c208
	movs r0, #128	@ 0003c208 8020
.org 0x3c20a
	lsls r0, r0, #8	@ 0003c20a 0002
.org 0x3c20c
	ands r0, r1	@ 0003c20c 0840
.org 0x3c20e
	cmp r0, #0	@ 0003c20e 0028
.org 0x3c210
	beq.n 0x3c214	@ 0003c210 00d0
.org 0x3c212
	movs r1, #0	@ 0003c212 0021
.org 0x3c214
	movs r2, #15	@ 0003c214 0f22
.org 0x3c216
	adds r0, r1, #0	@ 0003c216 081c
.org 0x3c218
	ands r0, r2	@ 0003c218 1040
.org 0x3c21a
	cmp r0, #15	@ 0003c21a 0f28
.org 0x3c21c
	bne.n 0x3c220	@ 0003c21c 00d1
.org 0x3c21e
	movs r1, #0	@ 0003c21e 0021
.org 0x3c220
	ands r1, r2	@ 0003c220 1140
.org 0x3c222
	cmp r1, #0	@ 0003c222 0029
.org 0x3c224
	beq.n 0x3c23c	@ 0003c224 0ad0
.org 0x3c226
	adds r0, r4, #0	@ 0003c226 201c
.org 0x3c228
	adds r0, #84	@ 0003c228 5430
.org 0x3c22a
	ldrb r2, [r4, #10]	@ 0003c22a a27a
.org 0x3c22c
	lsrs r2, r2, #4	@ 0003c22c 1209
.org 0x3c22e
	movs r1, #1	@ 0003c22e 0121
.org 0x3c230
	ands r2, r1	@ 0003c230 0a40
.org 0x3c232
	movs r1, #7	@ 0003c232 0721
.org 0x3c234
	bl 0xd1bcc	@ 0003c234 95f0cafc
.org 0x3c238
	movs r0, #1	@ 0003c238 0120
.org 0x3c23a
	b.n 0x3c276	@ 0003c23a 1ce0
.org 0x3c23c
	adds r0, r5, #0	@ 0003c23c 281c
.org 0x3c23e
	adds r0, #140	@ 0003c23e 8c30
.org 0x3c240
	ldr r0, [r0, #0]	@ 0003c240 0068
.org 0x3c242
	movs r1, #8	@ 0003c242 0821
.org 0x3c244
	ands r0, r1	@ 0003c244 0840
.org 0x3c246
	cmp r0, #0	@ 0003c246 0028
.org 0x3c248
	beq.n 0x3c24e	@ 0003c248 01d0
.org 0x3c24a
	movs r0, #1	@ 0003c24a 0120
.org 0x3c24c
	b.n 0x3c276	@ 0003c24c 13e0
.org 0x3c24e
	ldr r0, [pc, #28]	@ 0003c24e 0748
.org 0x3c250
	adds r1, r4, #0	@ 0003c250 211c
.org 0x3c252
	adds r1, #84	@ 0003c252 5431
.org 0x3c254
	bl 0x1fb14	@ 0003c254 e3f75efc
.org 0x3c258
	ldr r2, [pc, #20]	@ 0003c258 054a
.org 0x3c25a
	ldrb r1, [r4, #16]	@ 0003c25a 217c
.org 0x3c25c
	lsls r1, r1, #1	@ 0003c25c 4900
.org 0x3c25e
	adds r1, r1, r2	@ 0003c25e 8918
.org 0x3c260
	movs r2, #0	@ 0003c260 0022
.org 0x3c262
	ldrsh r1, [r1, r2]	@ 0003c262 895e
.org 0x3c264
	cmp r0, r1	@ 0003c264 8842
.org 0x3c266
	bhi.n 0x3c274	@ 0003c266 05d8
.org 0x3c268
	movs r0, #0	@ 0003c268 0020
.org 0x3c26a
	b.n 0x3c276	@ 0003c26a 04e0
.org 0x3c26c
	.byte 0xf8,0xe9,0x02,0x02	@ 0003c26c data
.org 0x3c270
	.byte 0x34,0x3b,0x85,0x08	@ 0003c270 data
