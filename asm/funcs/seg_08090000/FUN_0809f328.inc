@ FUN_0809f328  entry 0x0809f328  size 70
.thumb
.org 0x9f328
FUN_0809f328:
	push {r4, r5, lr}	@ 0009f328 30b5
.org 0x9f32a
	adds r4, r0, #0	@ 0009f32a 041c
.org 0x9f32c
	adds r5, r4, #0	@ 0009f32c 251c
.org 0x9f32e
	adds r5, #192	@ 0009f32e c035
.org 0x9f330
	ldr r0, [r5, #0]	@ 0009f330 2868
.org 0x9f332
	cmp r0, #0	@ 0009f332 0028
.org 0x9f334
	bne.n 0x9f368	@ 0009f334 18d1
.org 0x9f336
	adds r0, r4, #0	@ 0009f336 201c
.org 0x9f338
	adds r0, #140	@ 0009f338 8c30
.org 0x9f33a
	ldr r0, [r0, #0]	@ 0009f33a 0068
.org 0x9f33c
	movs r1, #1	@ 0009f33c 0121
.org 0x9f33e
	ands r0, r1	@ 0009f33e 0840
.org 0x9f340
	cmp r0, #0	@ 0009f340 0028
.org 0x9f342
	beq.n 0x9f368	@ 0009f342 11d0
.org 0x9f344
	ldr r2, [pc, #40]	@ 0009f344 0a4a
.org 0x9f346
	movs r0, #0	@ 0009f346 0020
.org 0x9f348
	adds r1, r4, #0	@ 0009f348 211c
.org 0x9f34a
	bl 0x2adac	@ 0009f34a 8bf72ffd
.org 0x9f34e
	str r0, [r5, #0]	@ 0009f34e 2860
.org 0x9f350
	cmp r0, #0	@ 0009f350 0028
.org 0x9f352
	beq.n 0x9f368	@ 0009f352 09d0
.org 0x9f354
	adds r0, r4, #0	@ 0009f354 201c
.org 0x9f356
	adds r0, #116	@ 0009f356 7430
.org 0x9f358
	ldr r1, [pc, #24]	@ 0009f358 0649
.org 0x9f35a
	bl 0x5784	@ 0009f35a 66f713fa
.org 0x9f35e
	movs r1, #234	@ 0009f35e ea21
.org 0x9f360
	lsls r1, r1, #7	@ 0009f360 c901
.org 0x9f362
	adds r0, r4, #0	@ 0009f362 201c
.org 0x9f364
	bl 0x1cf00	@ 0009f364 7df7ccfd
.org 0x9f368
	pop {r4, r5}	@ 0009f368 30bc
.org 0x9f36a
	pop {r0}	@ 0009f36a 01bc
.org 0x9f36c
	bx r0	@ 0009f36c 0047
