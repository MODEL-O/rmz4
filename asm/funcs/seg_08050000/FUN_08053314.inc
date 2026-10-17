@ FUN_08053314  entry 0x08053314  size 76
.thumb
.org 0x53314
FUN_08053314:
	push {r4, lr}	@ 00053314 10b5
.org 0x53316
	adds r4, r0, #0	@ 00053316 041c
.org 0x53318
	ldrb r0, [r4, #15]	@ 00053318 e07b
.org 0x5331a
	cmp r0, #0	@ 0005331a 0028
.org 0x5331c
	bne.n 0x53332	@ 0005331c 09d1
.org 0x5331e
	movs r1, #182	@ 0005331e b621
.org 0x53320
	lsls r1, r1, #8	@ 00053320 0902
.org 0x53322
	adds r0, r4, #0	@ 00053322 201c
.org 0x53324
	bl 0x1cf00	@ 00053324 c9f7ecfd
.org 0x53328
	movs r0, #50	@ 00053328 3220
.org 0x5332a
	strb r0, [r4, #18]	@ 0005332a a074
.org 0x5332c
	ldrb r0, [r4, #15]	@ 0005332c e07b
.org 0x5332e
	adds r0, #1	@ 0005332e 0130
.org 0x53330
	strb r0, [r4, #15]	@ 00053330 e073
.org 0x53332
	adds r0, r4, #0	@ 00053332 201c
.org 0x53334
	bl 0x1cff0	@ 00053334 c9f75cfe
.org 0x53338
	ldrb r0, [r4, #18]	@ 00053338 a07c
.org 0x5333a
	cmp r0, #0	@ 0005333a 0028
.org 0x5333c
	beq.n 0x53342	@ 0005333c 01d0
.org 0x5333e
	subs r0, #1	@ 0005333e 0138
.org 0x53340
	strb r0, [r4, #18]	@ 00053340 a074
.org 0x53342
	ldr r0, [pc, #28]	@ 00053342 0748
.org 0x53344
	ldrh r1, [r0, #8]	@ 00053344 0189
.org 0x53346
	movs r0, #8	@ 00053346 0820
.org 0x53348
	ands r0, r1	@ 00053348 0840
.org 0x5334a
	cmp r0, #0	@ 0005334a 0028
.org 0x5334c
	bne.n 0x5335a	@ 0005334c 05d1
.org 0x5334e
	ldrb r0, [r4, #18]	@ 0005334e a07c
.org 0x53350
	cmp r0, #0	@ 00053350 0028
.org 0x53352
	bne.n 0x5335a	@ 00053352 02d1
.org 0x53354
	adds r0, r4, #0	@ 00053354 201c
.org 0x53356
	bl 0x539e8	@ 00053356 00f047fb
.org 0x5335a
	pop {r4}	@ 0005335a 10bc
.org 0x5335c
	pop {r0}	@ 0005335c 01bc
.org 0x5335e
	bx r0	@ 0005335e 0047
