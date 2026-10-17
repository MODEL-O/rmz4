@ FUN_0800533c  entry 0x0800533c  size 110
.thumb
.org 0x533c
FUN_0800533c:
	push {r4, r5, r6, lr}	@ 0000533c 70b5
.org 0x533e
	mov r6, r9	@ 0000533e 4e46
.org 0x5340
	mov r5, r8	@ 00005340 4546
.org 0x5342
	push {r5, r6}	@ 00005342 60b4
.org 0x5344
	adds r6, r0, #0	@ 00005344 061c
.org 0x5346
	adds r4, r1, #0	@ 00005346 0c1c
.org 0x5348
	ldr r0, [r4, #0]	@ 00005348 2068
.org 0x534a
	mov r8, r0	@ 0000534a 8046
.org 0x534c
	movs r1, #240	@ 0000534c f021
.org 0x534e
	bl 0x128fb8	@ 0000534e 23f133fe
.org 0x5352
	adds r5, r0, #0	@ 00005352 051c
.org 0x5354
	ldr r4, [r4, #4]	@ 00005354 6468
.org 0x5356
	mov r9, r4	@ 00005356 a146
.org 0x5358
	mov r0, r9	@ 00005358 4846
.org 0x535a
	movs r1, #160	@ 0000535a a021
.org 0x535c
	bl 0x128fb8	@ 0000535c 23f12cfe
.org 0x5360
	ldr r2, [r6, #12]	@ 00005360 f268
.org 0x5362
	ldrb r1, [r2, #0]	@ 00005362 1178
.org 0x5364
	muls r0, r1	@ 00005364 4843
.org 0x5366
	adds r0, r0, r5	@ 00005366 4019
.org 0x5368
	adds r0, r0, r2	@ 00005368 8018
.org 0x536a
	ldrb r5, [r0, #4]	@ 0000536a 0579
.org 0x536c
	mov r0, r8	@ 0000536c 4046
.org 0x536e
	movs r1, #240	@ 0000536e f021
.org 0x5370
	bl 0x129050	@ 00005370 23f16efe
.org 0x5374
	adds r4, r0, #0	@ 00005374 041c
.org 0x5376
	asrs r4, r4, #4	@ 00005376 2411
.org 0x5378
	mov r0, r9	@ 00005378 4846
.org 0x537a
	movs r1, #160	@ 0000537a a021
.org 0x537c
	bl 0x129050	@ 0000537c 23f168fe
.org 0x5380
	asrs r0, r0, #4	@ 00005380 0011
.org 0x5382
	lsls r1, r0, #4	@ 00005382 0101
.org 0x5384
	subs r1, r1, r0	@ 00005384 091a
.org 0x5386
	movs r0, #150	@ 00005386 9620
.org 0x5388
	muls r0, r5	@ 00005388 6843
.org 0x538a
	adds r0, r0, r4	@ 0000538a 0019
.org 0x538c
	adds r1, r1, r0	@ 0000538c 0918
.org 0x538e
	ldr r0, [r6, #8]	@ 0000538e b068
.org 0x5390
	lsls r1, r1, #1	@ 00005390 4900
.org 0x5392
	adds r1, r1, r0	@ 00005392 0918
.org 0x5394
	ldrh r0, [r1, #0]	@ 00005394 0888
.org 0x5396
	ldr r1, [r6, #0]	@ 00005396 3168
.org 0x5398
	lsls r0, r0, #1	@ 00005398 4000
.org 0x539a
	adds r0, r0, r1	@ 0000539a 4018
.org 0x539c
	ldrb r0, [r0, #0]	@ 0000539c 0078
.org 0x539e
	pop {r3, r4}	@ 0000539e 18bc
.org 0x53a0
	mov r8, r3	@ 000053a0 9846
.org 0x53a2
	mov r9, r4	@ 000053a2 a146
.org 0x53a4
	pop {r4, r5, r6}	@ 000053a4 70bc
.org 0x53a6
	pop {r1}	@ 000053a6 02bc
.org 0x53a8
	bx r1	@ 000053a8 0847
