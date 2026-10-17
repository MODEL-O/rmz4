@ FUN_08041318  entry 0x08041318  size 156
.thumb
.org 0x41318
FUN_08041318:
	push {lr}	@ 00041318 00b5
.org 0x4131a
	adds r2, r0, #0	@ 0004131a 021c
.org 0x4131c
	adds r3, r1, #0	@ 0004131c 0b1c
.org 0x4131e
	ldrb r0, [r2, #30]	@ 0004131e 907f
.org 0x41320
	lsls r0, r0, #8	@ 00041320 0002
.org 0x41322
	adds r1, r2, #0	@ 00041322 111c
.org 0x41324
	adds r1, #112	@ 00041324 7031
.org 0x41326
	ldrb r1, [r1, #0]	@ 00041326 0978
.org 0x41328
	orrs r1, r0	@ 00041328 0143
.org 0x4132a
	ldr r0, [pc, #16]	@ 0004132a 0448
.org 0x4132c
	cmp r1, r0	@ 0004132c 8142
.org 0x4132e
	beq.n 0x41378	@ 0004132e 23d0
.org 0x41330
	cmp r1, r0	@ 00041330 8142
.org 0x41332
	bgt.n 0x41344	@ 00041332 07dc
.org 0x41334
	ldr r0, [pc, #8]	@ 00041334 0248
.org 0x41336
	cmp r1, r0	@ 00041336 8142
.org 0x41338
	beq.n 0x4134e	@ 00041338 09d0
.org 0x4133a
	b.n 0x413cc	@ 0004133a 47e0
.org 0x4133c
	.byte 0x01,0x22,0x00,0x00	@ 0004133c data
.org 0x41340
	.byte 0x01,0x1f,0x00,0x00	@ 00041340 data
.org 0x41344
	movs r0, #144	@ 00041344 9020
.org 0x41346
	lsls r0, r0, #6	@ 00041346 8001
.org 0x41348
	cmp r1, r0	@ 00041348 8142
.org 0x4134a
	beq.n 0x413a0	@ 0004134a 29d0
.org 0x4134c
	b.n 0x413cc	@ 0004134c 3ee0
.org 0x4134e
	ldrb r1, [r2, #10]	@ 0004134e 917a
.org 0x41350
	movs r0, #16	@ 00041350 1020
.org 0x41352
	ands r0, r1	@ 00041352 0840
.org 0x41354
	cmp r0, #0	@ 00041354 0028
.org 0x41356
	beq.n 0x41360	@ 00041356 03d0
.org 0x41358
	ldr r0, [r2, #84]	@ 00041358 506d
.org 0x4135a
	movs r1, #184	@ 0004135a b821
.org 0x4135c
	lsls r1, r1, #5	@ 0004135c 4901
.org 0x4135e
	b.n 0x41364	@ 0004135e 01e0
.org 0x41360
	ldr r0, [r2, #84]	@ 00041360 506d
.org 0x41362
	ldr r1, [pc, #12]	@ 00041362 0349
.org 0x41364
	adds r0, r0, r1	@ 00041364 4018
.org 0x41366
	str r0, [r3, #0]	@ 00041366 1860
.org 0x41368
	ldr r0, [r2, #88]	@ 00041368 906d
.org 0x4136a
	ldr r1, [pc, #8]	@ 0004136a 0249
.org 0x4136c
	b.n 0x413c2	@ 0004136c 29e0
.org 0x4136e
	.byte 0x00	@ 0004136e data
.org 0x4136f
	.byte 0x00	@ 0004136f data
.org 0x41370
	.byte 0x00,0xe9,0xff,0xff	@ 00041370 data
.org 0x41374
	.byte 0x00,0xea,0xff,0xff	@ 00041374 data
.org 0x41378
	ldrb r1, [r2, #10]	@ 00041378 917a
.org 0x4137a
	movs r0, #16	@ 0004137a 1020
.org 0x4137c
	ands r0, r1	@ 0004137c 0840
.org 0x4137e
	cmp r0, #0	@ 0004137e 0028
.org 0x41380
	beq.n 0x4138a	@ 00041380 03d0
.org 0x41382
	ldr r0, [r2, #84]	@ 00041382 506d
.org 0x41384
	movs r1, #152	@ 00041384 9821
.org 0x41386
	lsls r1, r1, #5	@ 00041386 4901
.org 0x41388
	b.n 0x4138e	@ 00041388 01e0
.org 0x4138a
	ldr r0, [r2, #84]	@ 0004138a 506d
.org 0x4138c
	ldr r1, [pc, #8]	@ 0004138c 0249
.org 0x4138e
	adds r0, r0, r1	@ 0004138e 4018
.org 0x41390
	str r0, [r3, #0]	@ 00041390 1860
.org 0x41392
	ldr r0, [r2, #88]	@ 00041392 906d
.org 0x41394
	ldr r1, [pc, #4]	@ 00041394 0149
.org 0x41396
	b.n 0x413c2	@ 00041396 14e0
.org 0x41398
	.byte 0x00,0xed,0xff,0xff	@ 00041398 data
.org 0x4139c
	.byte 0x00,0xe7,0xff,0xff	@ 0004139c data
.org 0x413a0
	ldrb r1, [r2, #10]	@ 000413a0 917a
.org 0x413a2
	movs r0, #16	@ 000413a2 1020
.org 0x413a4
	ands r0, r1	@ 000413a4 0840
.org 0x413a6
	cmp r0, #0	@ 000413a6 0028
.org 0x413a8
	beq.n 0x413b4	@ 000413a8 04d0
.org 0x413aa
	ldr r0, [r2, #84]	@ 000413aa 506d
.org 0x413ac
	ldr r1, [pc, #0]	@ 000413ac 0049
.org 0x413ae
	b.n 0x413ba	@ 000413ae 04e0
.org 0x413b0
	.byte 0x00,0xe9,0xff,0xff	@ 000413b0 data
