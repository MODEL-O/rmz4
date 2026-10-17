@ FUN_080bc258  entry 0x080bc258  size 112
.thumb
.org 0xbc258
FUN_080bc258:
	push {r4, r5, lr}	@ 000bc258 30b5
.org 0xbc25a
	sub sp, #12	@ 000bc25a 83b0
.org 0xbc25c
	adds r4, r0, #0	@ 000bc25c 041c
.org 0xbc25e
	ldr r0, [pc, #104]	@ 000bc25e 1a48
.org 0xbc260
	ldr r1, [r0, #4]	@ 000bc260 4168
.org 0xbc262
	ldr r0, [r0, #0]	@ 000bc262 0068
.org 0xbc264
	str r0, [sp, #4]	@ 000bc264 0190
.org 0xbc266
	str r1, [sp, #8]	@ 000bc266 0291
.org 0xbc268
	ldr r1, [pc, #96]	@ 000bc268 1849
.org 0xbc26a
	mov r0, sp	@ 000bc26a 6846
.org 0xbc26c
	movs r2, #2	@ 000bc26c 0222
.org 0xbc26e
	bl 0x129258	@ 000bc26e 6cf0f3ff
.org 0xbc272
	ldrb r5, [r4, #16]	@ 000bc272 257c
.org 0xbc274
	ldrb r0, [r4, #15]	@ 000bc274 e07b
.org 0xbc276
	cmp r0, #0	@ 000bc276 0028
.org 0xbc278
	bne.n 0xbc2a6	@ 000bc278 15d1
.org 0xbc27a
	adds r0, r4, #0	@ 000bc27a 201c
.org 0xbc27c
	adds r0, #116	@ 000bc27c 7430
.org 0xbc27e
	mov r2, sp	@ 000bc27e 6a46
.org 0xbc280
	adds r1, r2, r5	@ 000bc280 5119
.org 0xbc282
	ldrb r2, [r1, #0]	@ 000bc282 0a78
.org 0xbc284
	lsls r1, r2, #1	@ 000bc284 5100
.org 0xbc286
	adds r1, r1, r2	@ 000bc286 8918
.org 0xbc288
	lsls r1, r1, #3	@ 000bc288 c900
.org 0xbc28a
	ldr r2, [pc, #68]	@ 000bc28a 114a
.org 0xbc28c
	adds r1, r1, r2	@ 000bc28c 8918
.org 0xbc28e
	bl 0x5784	@ 000bc28e 49f779fa
.org 0xbc292
	lsls r0, r5, #2	@ 000bc292 a800
.org 0xbc294
	add r1, sp, #4	@ 000bc294 01a9
.org 0xbc296
	adds r0, r0, r1	@ 000bc296 4018
.org 0xbc298
	ldrh r1, [r0, #0]	@ 000bc298 0188
.org 0xbc29a
	adds r0, r4, #0	@ 000bc29a 201c
.org 0xbc29c
	bl 0x1cf00	@ 000bc29c 60f730fe
.org 0xbc2a0
	ldrb r0, [r4, #15]	@ 000bc2a0 e07b
.org 0xbc2a2
	adds r0, #1	@ 000bc2a2 0130
.org 0xbc2a4
	strb r0, [r4, #15]	@ 000bc2a4 e073
.org 0xbc2a6
	adds r0, r4, #0	@ 000bc2a6 201c
.org 0xbc2a8
	bl 0x1cff0	@ 000bc2a8 60f7a2fe
.org 0xbc2ac
	adds r0, r4, #0	@ 000bc2ac 201c
.org 0xbc2ae
	adds r0, #115	@ 000bc2ae 7330
.org 0xbc2b0
	ldrb r0, [r0, #0]	@ 000bc2b0 0078
.org 0xbc2b2
	cmp r0, #3	@ 000bc2b2 0328
.org 0xbc2b4
	bne.n 0xbc2c0	@ 000bc2b4 04d1
.org 0xbc2b6
	movs r1, #0	@ 000bc2b6 0021
.org 0xbc2b8
	movs r0, #6	@ 000bc2b8 0620
.org 0xbc2ba
	strb r0, [r4, #13]	@ 000bc2ba 6073
.org 0xbc2bc
	strb r1, [r4, #14]	@ 000bc2bc a173
.org 0xbc2be
	strb r1, [r4, #15]	@ 000bc2be e173
.org 0xbc2c0
	add sp, #12	@ 000bc2c0 03b0
.org 0xbc2c2
	pop {r4, r5}	@ 000bc2c2 30bc
.org 0xbc2c4
	pop {r0}	@ 000bc2c4 01bc
.org 0xbc2c6
	bx r0	@ 000bc2c6 0047
