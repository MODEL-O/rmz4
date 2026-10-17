@ FUN_080b5338  entry 0x080b5338  size 202
.thumb
.org 0xb5338
FUN_080b5338:
	push {r4, r5, r6, lr}	@ 000b5338 70b5
.org 0xb533a
	adds r4, r0, #0	@ 000b533a 041c
.org 0xb533c
	movs r5, #0	@ 000b533c 0025
.org 0xb533e
	ldrb r0, [r4, #14]	@ 000b533e a07b
.org 0xb5340
	cmp r0, #0	@ 000b5340 0028
.org 0xb5342
	bne.n 0xb5376	@ 000b5342 18d1
.org 0xb5344
	ldr r0, [r4, #96]	@ 000b5344 206e
.org 0xb5346
	cmp r0, #0	@ 000b5346 0028
.org 0xb5348
	bge.n 0xb534c	@ 000b5348 00da
.org 0xb534a
	str r5, [r4, #96]	@ 000b534a 2566
.org 0xb534c
	ldr r0, [r4, #84]	@ 000b534c 606d
.org 0xb534e
	ldr r1, [r4, #88]	@ 000b534e a16d
.org 0xb5350
	bl 0x7c7c	@ 000b5350 52f794fc
.org 0xb5354
	lsls r0, r0, #16	@ 000b5354 0004
.org 0xb5356
	cmp r0, #0	@ 000b5356 0028
.org 0xb5358
	beq.n 0xb5364	@ 000b5358 04d0
.org 0xb535a
	ldr r0, [r4, #84]	@ 000b535a 606d
.org 0xb535c
	ldr r1, [r4, #88]	@ 000b535c a16d
.org 0xb535e
	bl 0x8534	@ 000b535e 53f7e9f8
.org 0xb5362
	str r0, [r4, #88]	@ 000b5362 a065
.org 0xb5364
	ldr r1, [pc, #144]	@ 000b5364 2449
.org 0xb5366
	adds r0, r4, #0	@ 000b5366 201c
.org 0xb5368
	bl 0x1cf00	@ 000b5368 67f7cafd
.org 0xb536c
	movs r0, #10	@ 000b536c 0a20
.org 0xb536e
	strb r0, [r4, #18]	@ 000b536e a074
.org 0xb5370
	ldrb r0, [r4, #14]	@ 000b5370 a07b
.org 0xb5372
	adds r0, #1	@ 000b5372 0130
.org 0xb5374
	strb r0, [r4, #14]	@ 000b5374 a073
.org 0xb5376
	ldrb r1, [r4, #18]	@ 000b5376 a17c
.org 0xb5378
	movs r0, #2	@ 000b5378 0220
.org 0xb537a
	ands r0, r1	@ 000b537a 0840
.org 0xb537c
	cmp r0, #0	@ 000b537c 0028
.org 0xb537e
	beq.n 0xb53b8	@ 000b537e 1bd0
.org 0xb5380
	ldr r0, [pc, #120]	@ 000b5380 1e48
.org 0xb5382
	ldr r0, [r0, #0]	@ 000b5382 0068
.org 0xb5384
	ldr r0, [r0, #84]	@ 000b5384 406d
.org 0xb5386
	ldr r1, [r4, #84]	@ 000b5386 616d
.org 0xb5388
	cmp r0, r1	@ 000b5388 8842
.org 0xb538a
	ble.n 0xb538e	@ 000b538a 00dd
.org 0xb538c
	movs r5, #1	@ 000b538c 0125
.org 0xb538e
	ldr r6, [pc, #112]	@ 000b538e 1c4e
.org 0xb5390
	lsls r5, r5, #3	@ 000b5390 ed00
.org 0xb5392
	adds r0, r5, r6	@ 000b5392 a819
.org 0xb5394
	ldr r0, [r0, #0]	@ 000b5394 0068
.org 0xb5396
	lsls r0, r0, #8	@ 000b5396 0002
.org 0xb5398
	adds r0, r1, r0	@ 000b5398 0818
.org 0xb539a
	ldr r1, [r4, #88]	@ 000b539a a16d
.org 0xb539c
	ldr r2, [pc, #100]	@ 000b539c 194a
.org 0xb539e
	adds r1, r1, r2	@ 000b539e 8918
.org 0xb53a0
	bl 0x7c7c	@ 000b53a0 52f76cfc
.org 0xb53a4
	lsls r0, r0, #16	@ 000b53a4 0004
.org 0xb53a6
	cmp r0, #0	@ 000b53a6 0028
.org 0xb53a8
	bne.n 0xb53b8	@ 000b53a8 06d1
.org 0xb53aa
	adds r0, r6, #4	@ 000b53aa 301d
.org 0xb53ac
	adds r0, r5, r0	@ 000b53ac 2818
.org 0xb53ae
	ldr r1, [r0, #0]	@ 000b53ae 0168
.org 0xb53b0
	lsls r1, r1, #8	@ 000b53b0 0902
.org 0xb53b2
	ldr r0, [r4, #84]	@ 000b53b2 606d
.org 0xb53b4
	adds r0, r0, r1	@ 000b53b4 4018
.org 0xb53b6
	str r0, [r4, #84]	@ 000b53b6 6065
.org 0xb53b8
	ldr r0, [r4, #84]	@ 000b53b8 606d
.org 0xb53ba
	ldr r1, [r4, #88]	@ 000b53ba a16d
.org 0xb53bc
	bl 0x7c7c	@ 000b53bc 52f75efc
.org 0xb53c0
	lsls r0, r0, #16	@ 000b53c0 0004
.org 0xb53c2
	cmp r0, #0	@ 000b53c2 0028
.org 0xb53c4
	bne.n 0xb53d2	@ 000b53c4 05d1
.org 0xb53c6
	ldr r0, [r4, #88]	@ 000b53c6 a06d
.org 0xb53c8
	ldr r1, [r4, #96]	@ 000b53c8 216e
.org 0xb53ca
	adds r0, r0, r1	@ 000b53ca 4018
.org 0xb53cc
	str r0, [r4, #88]	@ 000b53cc a065
.org 0xb53ce
	adds r1, #64	@ 000b53ce 4031
.org 0xb53d0
	str r1, [r4, #96]	@ 000b53d0 2166
.org 0xb53d2
	adds r0, r4, #0	@ 000b53d2 201c
.org 0xb53d4
	bl 0xb56a8	@ 000b53d4 00f068f9
.org 0xb53d8
	lsls r0, r0, #24	@ 000b53d8 0006
.org 0xb53da
	cmp r0, #0	@ 000b53da 0028
.org 0xb53dc
	beq.n 0xb540e	@ 000b53dc 17d0
.org 0xb53de
	ldr r0, [r4, #84]	@ 000b53de 606d
.org 0xb53e0
	ldr r1, [r4, #88]	@ 000b53e0 a16d
.org 0xb53e2
	bl 0x7c7c	@ 000b53e2 52f74bfc
.org 0xb53e6
	lsls r0, r0, #16	@ 000b53e6 0004
.org 0xb53e8
	lsrs r1, r0, #16	@ 000b53e8 010c
.org 0xb53ea
	cmp r1, #0	@ 000b53ea 0029
.org 0xb53ec
	bne.n 0xb5408	@ 000b53ec 0cd1
.org 0xb53ee
	movs r0, #6	@ 000b53ee 0620
.org 0xb53f0
	strb r0, [r4, #13]	@ 000b53f0 6073
.org 0xb53f2
	strb r1, [r4, #14]	@ 000b53f2 a173
.org 0xb53f4
	b.n 0xb540e	@ 000b53f4 0be0
.org 0xb53f6
	.byte 0x00	@ 000b53f6 data
.org 0xb53f7
	.byte 0x00	@ 000b53f7 data
.org 0xb53f8
	.byte 0x0f,0xca,0x00,0x00	@ 000b53f8 data
.org 0xb53fc
	.byte 0xf0,0xdb,0x02,0x02	@ 000b53fc data
.org 0xb5400
	.byte 0xe0,0x39,0x86,0x08	@ 000b5400 data
