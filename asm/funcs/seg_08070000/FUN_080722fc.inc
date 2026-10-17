@ FUN_080722fc  entry 0x080722fc  size 168
.thumb
.org 0x722fc
FUN_080722fc:
	push {r4, r5, r6, lr}	@ 000722fc 70b5
.org 0x722fe
	sub sp, #4	@ 000722fe 81b0
.org 0x72300
	adds r6, r0, #0	@ 00072300 061c
.org 0x72302
	ldr r1, [pc, #160]	@ 00072302 2849
.org 0x72304
	mov r0, sp	@ 00072304 6846
.org 0x72306
	movs r2, #3	@ 00072306 0322
.org 0x72308
	bl 0x129258	@ 00072308 b6f0a6ff
.org 0x7230c
	adds r0, r6, #0	@ 0007230c 301c
.org 0x7230e
	adds r0, #195	@ 0007230e c330
.org 0x72310
	ldrb r4, [r0, #0]	@ 00072310 0478
.org 0x72312
	ldrb r0, [r6, #15]	@ 00072312 f07b
.org 0x72314
	cmp r0, #0	@ 00072314 0028
.org 0x72316
	bne.n 0x7232e	@ 00072316 0ad1
.org 0x72318
	adds r0, r6, #0	@ 00072318 301c
.org 0x7231a
	movs r1, #0	@ 0007231a 0021
.org 0x7231c
	bl 0x736c4	@ 0007231c 01f0d2f9
.org 0x72320
	mov r1, sp	@ 00072320 6946
.org 0x72322
	adds r0, r1, r4	@ 00072322 0819
.org 0x72324
	ldrb r0, [r0, #0]	@ 00072324 0078
.org 0x72326
	strb r0, [r6, #18]	@ 00072326 b074
.org 0x72328
	ldrb r0, [r6, #15]	@ 00072328 f07b
.org 0x7232a
	adds r0, #1	@ 0007232a 0130
.org 0x7232c
	strb r0, [r6, #15]	@ 0007232c f073
.org 0x7232e
	adds r0, r6, #0	@ 0007232e 301c
.org 0x72330
	bl 0x1cff0	@ 00072330 aaf75efe
.org 0x72334
	adds r0, r6, #0	@ 00072334 301c
.org 0x72336
	adds r0, #116	@ 00072336 7430
.org 0x72338
	ldr r4, [pc, #108]	@ 00072338 1b4c
.org 0x7233a
	ldr r3, [pc, #112]	@ 0007233a 1c4b
.org 0x7233c
	adds r1, r6, #0	@ 0007233c 311c
.org 0x7233e
	adds r1, #184	@ 0007233e b831
.org 0x72340
	ldrb r2, [r1, #0]	@ 00072340 0a78
.org 0x72342
	lsls r1, r2, #1	@ 00072342 5100
.org 0x72344
	adds r1, r1, r3	@ 00072344 c918
.org 0x72346
	ldrh r1, [r1, #0]	@ 00072346 0988
.org 0x72348
	lsls r1, r1, #2	@ 00072348 8900
.org 0x7234a
	adds r1, r1, r4	@ 0007234a 0919
.org 0x7234c
	adds r3, r6, #0	@ 0007234c 331c
.org 0x7234e
	adds r3, #113	@ 0007234e 7133
.org 0x72350
	movs r5, #0	@ 00072350 0025
.org 0x72352
	ldrsb r5, [r3, r5]	@ 00072352 5d57
.org 0x72354
	ldr r1, [r1, #0]	@ 00072354 0968
.org 0x72356
	lsls r3, r5, #2	@ 00072356 ab00
.org 0x72358
	adds r3, r3, r1	@ 00072358 5b18
.org 0x7235a
	ldr r4, [pc, #84]	@ 0007235a 154c
.org 0x7235c
	adds r1, r6, #0	@ 0007235c 311c
.org 0x7235e
	adds r1, #185	@ 0007235e b931
.org 0x72360
	ldrb r1, [r1, #0]	@ 00072360 0978
.org 0x72362
	lsls r1, r1, #2	@ 00072362 8900
.org 0x72364
	adds r1, r1, r4	@ 00072364 0919
.org 0x72366
	ldr r1, [r1, #0]	@ 00072366 0968
.org 0x72368
	lsls r2, r2, #2	@ 00072368 9200
.org 0x7236a
	adds r2, r2, r1	@ 0007236a 5218
.org 0x7236c
	ldr r1, [r2, #0]	@ 0007236c 1168
.org 0x7236e
	adds r1, r1, r5	@ 0007236e 4919
.org 0x72370
	ldrb r1, [r1, #0]	@ 00072370 0978
.org 0x72372
	lsls r2, r1, #1	@ 00072372 4a00
.org 0x72374
	adds r2, r2, r1	@ 00072374 5218
.org 0x72376
	lsls r2, r2, #3	@ 00072376 d200
.org 0x72378
	ldr r1, [r3, #0]	@ 00072378 1968
.org 0x7237a
	adds r1, r1, r2	@ 0007237a 8918
.org 0x7237c
	bl 0x5784	@ 0007237c 93f702fa
.org 0x72380
	adds r0, r6, #0	@ 00072380 301c
.org 0x72382
	bl 0x73a68	@ 00072382 01f071fb
.org 0x72386
	ldrb r0, [r6, #18]	@ 00072386 b07c
.org 0x72388
	subs r0, #1	@ 00072388 0138
.org 0x7238a
	strb r0, [r6, #18]	@ 0007238a b074
.org 0x7238c
	lsls r0, r0, #24	@ 0007238c 0006
.org 0x7238e
	lsrs r1, r0, #24	@ 0007238e 010e
.org 0x72390
	cmp r1, #0	@ 00072390 0029
.org 0x72392
	bne.n 0x7239c	@ 00072392 03d1
.org 0x72394
	ldrb r0, [r6, #14]	@ 00072394 b07b
.org 0x72396
	adds r0, #1	@ 00072396 0130
.org 0x72398
	strb r0, [r6, #14]	@ 00072398 b073
.org 0x7239a
	strb r1, [r6, #15]	@ 0007239a f173
.org 0x7239c
	add sp, #4	@ 0007239c 01b0
.org 0x7239e
	pop {r4, r5, r6}	@ 0007239e 70bc
.org 0x723a0
	pop {r0}	@ 000723a0 01bc
.org 0x723a2
	bx r0	@ 000723a2 0047
