@ FUN_0802c24c  entry 0x0802c24c  size 136
.thumb
.org 0x2c24c
FUN_0802c24c:
	push {r4, r5, r6, lr}	@ 0002c24c 70b5
.org 0x2c24e
	sub sp, #8	@ 0002c24e 82b0
.org 0x2c250
	adds r4, r0, #0	@ 0002c250 041c
.org 0x2c252
	movs r2, #2	@ 0002c252 0222
.org 0x2c254
	ldrsh r0, [r1, r2]	@ 0002c254 885e
.org 0x2c256
	ldr r2, [r4, #88]	@ 0002c256 a26d
.org 0x2c258
	adds r2, r2, r0	@ 0002c258 1218
.org 0x2c25a
	ldrh r0, [r1, #6]	@ 0002c25a c888
.org 0x2c25c
	lsls r0, r0, #16	@ 0002c25c 0004
.org 0x2c25e
	asrs r0, r0, #17	@ 0002c25e 4014
.org 0x2c260
	subs r6, r2, r0	@ 0002c260 161a
.org 0x2c262
	movs r1, #220	@ 0002c262 dc21
.org 0x2c264
	lsls r1, r1, #1	@ 0002c264 4900
.org 0x2c266
	adds r0, r4, r1	@ 0002c266 6018
.org 0x2c268
	ldrb r0, [r0, #0]	@ 0002c268 0078
.org 0x2c26a
	cmp r0, #0	@ 0002c26a 0028
.org 0x2c26c
	beq.n 0x2c29e	@ 0002c26c 17d0
.org 0x2c26e
	ldr r1, [r4, #84]	@ 0002c26e 616d
.org 0x2c270
	adds r0, r4, #0	@ 0002c270 201c
.org 0x2c272
	adds r2, r6, #0	@ 0002c272 321c
.org 0x2c274
	bl 0x2e058	@ 0002c274 01f0f0fe
.org 0x2c278
	lsls r0, r0, #16	@ 0002c278 0004
.org 0x2c27a
	lsrs r1, r0, #16	@ 0002c27a 010c
.org 0x2c27c
	movs r0, #128	@ 0002c27c 8020
.org 0x2c27e
	lsls r0, r0, #8	@ 0002c27e 0002
.org 0x2c280
	ands r0, r1	@ 0002c280 0840
.org 0x2c282
	cmp r0, #0	@ 0002c282 0028
.org 0x2c284
	beq.n 0x2c292	@ 0002c284 05d0
.org 0x2c286
	movs r0, #15	@ 0002c286 0f20
.org 0x2c288
	ands r0, r1	@ 0002c288 0840
.org 0x2c28a
	cmp r0, #0	@ 0002c28a 0028
.org 0x2c28c
	beq.n 0x2c292	@ 0002c28c 01d0
.org 0x2c28e
	cmp r0, #14	@ 0002c28e 0e28
.org 0x2c290
	bls.n 0x2c29e	@ 0002c290 05d9
.org 0x2c292
	ldr r1, [r4, #84]	@ 0002c292 616d
.org 0x2c294
	adds r0, r4, #0	@ 0002c294 201c
.org 0x2c296
	adds r2, r6, #0	@ 0002c296 321c
.org 0x2c298
	mov r3, sp	@ 0002c298 6b46
.org 0x2c29a
	bl 0x2dd54	@ 0002c29a 01f05bfd
.org 0x2c29e
	ldr r0, [r4, #84]	@ 0002c29e 606d
.org 0x2c2a0
	adds r1, r6, #0	@ 0002c2a0 311c
.org 0x2c2a2
	bl 0x7020	@ 0002c2a2 daf7bdfe
.org 0x2c2a6
	lsls r0, r0, #16	@ 0002c2a6 0004
.org 0x2c2a8
	lsrs r5, r0, #16	@ 0002c2a8 050c
.org 0x2c2aa
	movs r0, #15	@ 0002c2aa 0f20
.org 0x2c2ac
	ands r0, r5	@ 0002c2ac 2840
.org 0x2c2ae
	cmp r0, #1	@ 0002c2ae 0128
.org 0x2c2b0
	bne.n 0x2c2ca	@ 0002c2b0 0bd1
.org 0x2c2b2
	movs r0, #128	@ 0002c2b2 8020
.org 0x2c2b4
	lsls r0, r0, #8	@ 0002c2b4 0002
.org 0x2c2b6
	ands r0, r5	@ 0002c2b6 2840
.org 0x2c2b8
	cmp r0, #0	@ 0002c2b8 0028
.org 0x2c2ba
	bne.n 0x2c2ca	@ 0002c2ba 06d1
.org 0x2c2bc
	ldr r0, [r4, #84]	@ 0002c2bc 606d
.org 0x2c2be
	adds r1, r6, #0	@ 0002c2be 311c
.org 0x2c2c0
	bl 0x8080	@ 0002c2c0 dbf7defe
.org 0x2c2c4
	ldr r1, [r4, #88]	@ 0002c2c4 a16d
.org 0x2c2c6
	adds r1, r1, r0	@ 0002c2c6 0918
.org 0x2c2c8
	str r1, [r4, #88]	@ 0002c2c8 a165
.org 0x2c2ca
	adds r0, r5, #0	@ 0002c2ca 281c
.org 0x2c2cc
	add sp, #8	@ 0002c2cc 02b0
.org 0x2c2ce
	pop {r4, r5, r6}	@ 0002c2ce 70bc
.org 0x2c2d0
	pop {r1}	@ 0002c2d0 02bc
.org 0x2c2d2
	bx r1	@ 0002c2d2 0847
