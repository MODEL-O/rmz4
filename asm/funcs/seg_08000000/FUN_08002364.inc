@ FUN_08002364  entry 0x08002364  size 190
.thumb
.org 0x2364
FUN_08002364:
	push {r4, r5, r6, r7, lr}	@ 00002364 f0b5
.org 0x2366
	mov r7, r8	@ 00002366 4746
.org 0x2368
	push {r7}	@ 00002368 80b4
.org 0x236a
	movs r7, #0	@ 0000236a 0027
.org 0x236c
	ldr r0, [pc, #104]	@ 0000236c 1a48
.org 0x236e
	mov r8, r0	@ 0000236e 8046
.org 0x2370
	mov r5, r8	@ 00002370 4546
.org 0x2372
	adds r5, #32	@ 00002372 2035
.org 0x2374
	adds r6, r5, #0	@ 00002374 2e1c
.org 0x2376
	lsls r0, r7, #1	@ 00002376 7800
.org 0x2378
	add r0, r8	@ 00002378 4044
.org 0x237a
	ldrh r0, [r0, #0]	@ 0000237a 0088
.org 0x237c
	cmp r0, #0	@ 0000237c 0028
.org 0x237e
	beq.n 0x241e	@ 0000237e 4ed0
.org 0x2380
	ldrh r0, [r5, #16]	@ 00002380 288a
.org 0x2382
	cmp r0, #0	@ 00002382 0028
.org 0x2384
	bne.n 0x241e	@ 00002384 4bd1
.org 0x2386
	ldr r2, [r5, #0]	@ 00002386 2a68
.org 0x2388
	ldrb r0, [r2, #2]	@ 00002388 9078
.org 0x238a
	ldrb r4, [r2, #1]	@ 0000238a 5478
.org 0x238c
	subs r0, r0, r4	@ 0000238c 001b
.org 0x238e
	adds r0, #1	@ 0000238e 0130
.org 0x2390
	lsls r0, r0, #16	@ 00002390 0004
.org 0x2392
	lsrs r3, r0, #16	@ 00002392 030c
.org 0x2394
	ldrh r1, [r5, #18]	@ 00002394 698a
.org 0x2396
	mov ip, r1	@ 00002396 8c46
.org 0x2398
	ldr r1, [pc, #64]	@ 00002398 1049
.org 0x239a
	adds r0, r1, #0	@ 0000239a 081c
.org 0x239c
	mov r1, ip	@ 0000239c 6146
.org 0x239e
	ands r0, r1	@ 0000239e 0840
.org 0x23a0
	cmp r0, #0	@ 000023a0 0028
.org 0x23a2
	bne.n 0x23e8	@ 000023a2 21d1
.org 0x23a4
	ldrb r1, [r5, #12]	@ 000023a4 297b
.org 0x23a6
	ldr r0, [r5, #8]	@ 000023a6 a868
.org 0x23a8
	lsls r1, r1, #2	@ 000023a8 8900
.org 0x23aa
	adds r1, r1, r0	@ 000023aa 0918
.org 0x23ac
	movs r0, #13	@ 000023ac 0d20
.org 0x23ae
	ldrsb r0, [r5, r0]	@ 000023ae 2856
.org 0x23b0
	ldr r1, [r1, #0]	@ 000023b0 0968
.org 0x23b2
	lsls r0, r0, #1	@ 000023b2 4000
.org 0x23b4
	adds r0, r0, r1	@ 000023b4 4018
.org 0x23b6
	ldrb r0, [r0, #0]	@ 000023b6 0078
.org 0x23b8
	lsls r3, r3, #16	@ 000023b8 1b04
.org 0x23ba
	asrs r3, r3, #16	@ 000023ba 1b14
.org 0x23bc
	muls r0, r3	@ 000023bc 5843
.org 0x23be
	lsls r0, r0, #1	@ 000023be 4000
.org 0x23c0
	adds r0, #4	@ 000023c0 0430
.org 0x23c2
	adds r0, r2, r0	@ 000023c2 1018
.org 0x23c4
	lsls r1, r4, #1	@ 000023c4 6100
.org 0x23c6
	ldrh r2, [r5, #18]	@ 000023c6 6a8a
.org 0x23c8
	adds r1, r1, r2	@ 000023c8 8918
.org 0x23ca
	ldr r2, [pc, #20]	@ 000023ca 054a
.org 0x23cc
	adds r1, r1, r2	@ 000023cc 8918
.org 0x23ce
	ldr r2, [pc, #20]	@ 000023ce 054a
.org 0x23d0
	ands r2, r3	@ 000023d0 1a40
.org 0x23d2
	bl 0x128be4	@ 000023d2 26f107fc
.org 0x23d6
	b.n 0x241e	@ 000023d6 22e0
.org 0x23d8
	.byte 0xa0,0x08,0x00,0x02	@ 000023d8 data
.org 0x23dc
	.byte 0xff,0x01,0x00,0x00	@ 000023dc data
.org 0x23e0
	.byte 0xc0,0x2a,0x00,0x03	@ 000023e0 data
.org 0x23e4
	.byte 0xff,0xff,0x1f,0x00	@ 000023e4 data
.org 0x23e8
	ldrb r1, [r6, #12]	@ 000023e8 317b
.org 0x23ea
	ldr r0, [r6, #8]	@ 000023ea b068
.org 0x23ec
	lsls r1, r1, #2	@ 000023ec 8900
.org 0x23ee
	adds r1, r1, r0	@ 000023ee 0918
.org 0x23f0
	movs r0, #13	@ 000023f0 0d20
.org 0x23f2
	ldrsb r0, [r6, r0]	@ 000023f2 3056
.org 0x23f4
	ldr r1, [r1, #0]	@ 000023f4 0968
.org 0x23f6
	lsls r0, r0, #1	@ 000023f6 4000
.org 0x23f8
	adds r0, r0, r1	@ 000023f8 4018
.org 0x23fa
	ldrb r0, [r0, #0]	@ 000023fa 0078
.org 0x23fc
	lsls r3, r3, #16	@ 000023fc 1b04
.org 0x23fe
	asrs r3, r3, #16	@ 000023fe 1b14
.org 0x2400
	muls r0, r3	@ 00002400 5843
.org 0x2402
	lsls r0, r0, #1	@ 00002402 4000
.org 0x2404
	adds r0, #4	@ 00002404 0430
.org 0x2406
	adds r0, r2, r0	@ 00002406 1018
.org 0x2408
	lsls r1, r4, #1	@ 00002408 6100
.org 0x240a
	movs r2, #31	@ 0000240a 1f22
.org 0x240c
	ands r1, r2	@ 0000240c 1140
.org 0x240e
	ldrh r2, [r6, #18]	@ 0000240e 728a
.org 0x2410
	adds r1, r1, r2	@ 00002410 8918
.org 0x2412
	ldr r2, [pc, #32]	@ 00002412 084a
.org 0x2414
	adds r1, r1, r2	@ 00002414 8918
.org 0x2416
	ldr r2, [pc, #32]	@ 00002416 084a
.org 0x2418
	ands r2, r3	@ 00002418 1a40
.org 0x241a
	bl 0x128be4	@ 0000241a 26f1e3fb
.org 0x241e
	adds r5, #20	@ 0000241e 1435
.org 0x2420
	adds r6, #20	@ 00002420 1436
