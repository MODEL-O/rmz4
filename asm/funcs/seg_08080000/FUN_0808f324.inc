@ FUN_0808f324  entry 0x0808f324  size 114
.thumb
.org 0x8f324
FUN_0808f324:
	push {r4, lr}	@ 0008f324 10b5
.org 0x8f326
	adds r4, r0, #0	@ 0008f326 041c
.org 0x8f328
	ldrb r0, [r4, #15]	@ 0008f328 e07b
.org 0x8f32a
	cmp r0, #0	@ 0008f32a 0028
.org 0x8f32c
	bne.n 0x8f33c	@ 0008f32c 06d1
.org 0x8f32e
	ldr r1, [pc, #104]	@ 0008f32e 1a49
.org 0x8f330
	adds r0, r4, #0	@ 0008f330 201c
.org 0x8f332
	bl 0x1cf00	@ 0008f332 8df7e5fd
.org 0x8f336
	ldrb r0, [r4, #15]	@ 0008f336 e07b
.org 0x8f338
	adds r0, #1	@ 0008f338 0130
.org 0x8f33a
	strb r0, [r4, #15]	@ 0008f33a e073
.org 0x8f33c
	adds r0, r4, #0	@ 0008f33c 201c
.org 0x8f33e
	bl 0x1cff0	@ 0008f33e 8df757fe
.org 0x8f342
	adds r0, r4, #0	@ 0008f342 201c
.org 0x8f344
	adds r0, #116	@ 0008f344 7430
.org 0x8f346
	ldr r3, [pc, #84]	@ 0008f346 154b
.org 0x8f348
	ldrb r1, [r4, #30]	@ 0008f348 a17f
.org 0x8f34a
	lsls r1, r1, #8	@ 0008f34a 0902
.org 0x8f34c
	adds r2, r4, #0	@ 0008f34c 221c
.org 0x8f34e
	adds r2, #112	@ 0008f34e 7032
.org 0x8f350
	ldrb r2, [r2, #0]	@ 0008f350 1278
.org 0x8f352
	orrs r1, r2	@ 0008f352 1143
.org 0x8f354
	ldr r2, [pc, #72]	@ 0008f354 124a
.org 0x8f356
	adds r1, r1, r2	@ 0008f356 8918
.org 0x8f358
	lsls r1, r1, #2	@ 0008f358 8900
.org 0x8f35a
	adds r1, r1, r3	@ 0008f35a c918
.org 0x8f35c
	adds r2, r4, #0	@ 0008f35c 221c
.org 0x8f35e
	adds r2, #113	@ 0008f35e 7132
.org 0x8f360
	ldrb r2, [r2, #0]	@ 0008f360 1278
.org 0x8f362
	lsls r2, r2, #24	@ 0008f362 1206
.org 0x8f364
	asrs r2, r2, #24	@ 0008f364 1216
.org 0x8f366
	ldr r1, [r1, #0]	@ 0008f366 0968
.org 0x8f368
	lsls r2, r2, #2	@ 0008f368 9200
.org 0x8f36a
	adds r2, r2, r1	@ 0008f36a 5218
.org 0x8f36c
	ldr r1, [r2, #0]	@ 0008f36c 1168
.org 0x8f36e
	ldrb r2, [r1, #0]	@ 0008f36e 0a78
.org 0x8f370
	lsls r1, r2, #1	@ 0008f370 5100
.org 0x8f372
	adds r1, r1, r2	@ 0008f372 8918
.org 0x8f374
	lsls r1, r1, #3	@ 0008f374 c900
.org 0x8f376
	ldr r2, [pc, #44]	@ 0008f376 0b4a
.org 0x8f378
	adds r1, r1, r2	@ 0008f378 8918
.org 0x8f37a
	bl 0x5784	@ 0008f37a 76f703fa
.org 0x8f37e
	adds r0, r4, #0	@ 0008f37e 201c
.org 0x8f380
	adds r0, #115	@ 0008f380 7330
.org 0x8f382
	ldrb r0, [r0, #0]	@ 0008f382 0078
.org 0x8f384
	cmp r0, #3	@ 0008f384 0328
.org 0x8f386
	bne.n 0x8f390	@ 0008f386 03d1
.org 0x8f388
	movs r0, #0	@ 0008f388 0020
.org 0x8f38a
	strb r0, [r4, #13]	@ 0008f38a 6073
.org 0x8f38c
	strb r0, [r4, #14]	@ 0008f38c a073
.org 0x8f38e
	strb r0, [r4, #15]	@ 0008f38e e073
.org 0x8f390
	pop {r4}	@ 0008f390 10bc
.org 0x8f392
	pop {r0}	@ 0008f392 01bc
.org 0x8f394
	bx r0	@ 0008f394 0047
