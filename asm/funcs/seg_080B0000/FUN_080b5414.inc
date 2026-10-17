@ FUN_080b5414  entry 0x080b5414  size 120
.thumb
.org 0xb5414
FUN_080b5414:
	push {r4, lr}	@ 000b5414 10b5
.org 0xb5416
	adds r4, r0, #0	@ 000b5416 041c
.org 0xb5418
	ldrb r0, [r4, #14]	@ 000b5418 a07b
.org 0xb541a
	cmp r0, #0	@ 000b541a 0028
.org 0xb541c
	bne.n 0xb5434	@ 000b541c 0ad1
.org 0xb541e
	ldr r1, [pc, #72]	@ 000b541e 1249
.org 0xb5420
	adds r0, r4, #0	@ 000b5420 201c
.org 0xb5422
	bl 0x1cf00	@ 000b5422 67f76dfd
.org 0xb5426
	movs r0, #10	@ 000b5426 0a20
.org 0xb5428
	strb r0, [r4, #18]	@ 000b5428 a074
.org 0xb542a
	movs r0, #64	@ 000b542a 4020
.org 0xb542c
	str r0, [r4, #104]	@ 000b542c a066
.org 0xb542e
	ldrb r0, [r4, #14]	@ 000b542e a07b
.org 0xb5430
	adds r0, #1	@ 000b5430 0130
.org 0xb5432
	strb r0, [r4, #14]	@ 000b5432 a073
.org 0xb5434
	ldrb r0, [r4, #14]	@ 000b5434 a07b
.org 0xb5436
	cmp r0, #1	@ 000b5436 0128
.org 0xb5438
	bne.n 0xb547e	@ 000b5438 21d1
.org 0xb543a
	ldr r0, [r4, #84]	@ 000b543a 606d
.org 0xb543c
	ldr r1, [r4, #88]	@ 000b543c a16d
.org 0xb543e
	bl 0x7c7c	@ 000b543e 52f71dfc
.org 0xb5442
	lsls r0, r0, #16	@ 000b5442 0004
.org 0xb5444
	cmp r0, #0	@ 000b5444 0028
.org 0xb5446
	beq.n 0xb5470	@ 000b5446 13d0
.org 0xb5448
	ldr r0, [r4, #84]	@ 000b5448 606d
.org 0xb544a
	ldr r1, [r4, #88]	@ 000b544a a16d
.org 0xb544c
	bl 0x8534	@ 000b544c 53f772f8
.org 0xb5450
	str r0, [r4, #88]	@ 000b5450 a065
.org 0xb5452
	ldr r1, [pc, #24]	@ 000b5452 0649
.org 0xb5454
	adds r0, r4, #0	@ 000b5454 201c
.org 0xb5456
	bl 0x1cf00	@ 000b5456 67f753fd
.org 0xb545a
	movs r0, #0	@ 000b545a 0020
.org 0xb545c
	str r0, [r4, #96]	@ 000b545c 2066
.org 0xb545e
	str r0, [r4, #104]	@ 000b545e a066
.org 0xb5460
	ldrb r0, [r4, #14]	@ 000b5460 a07b
.org 0xb5462
	adds r0, #1	@ 000b5462 0130
.org 0xb5464
	b.n 0xb548e	@ 000b5464 13e0
.org 0xb5466
	.byte 0x00	@ 000b5466 data
.org 0xb5467
	.byte 0x00	@ 000b5467 data
.org 0xb5468
	.byte 0x0b,0xca,0x00,0x00	@ 000b5468 data
.org 0xb546c
	.byte 0x0c,0xca,0x00,0x00	@ 000b546c data
.org 0xb5470
	ldr r0, [r4, #88]	@ 000b5470 a06d
.org 0xb5472
	ldr r1, [r4, #96]	@ 000b5472 216e
.org 0xb5474
	adds r0, r0, r1	@ 000b5474 4018
.org 0xb5476
	str r0, [r4, #88]	@ 000b5476 a065
.org 0xb5478
	ldr r0, [r4, #104]	@ 000b5478 a06e
.org 0xb547a
	adds r1, r1, r0	@ 000b547a 0918
.org 0xb547c
	str r1, [r4, #96]	@ 000b547c 2166
.org 0xb547e
	adds r0, r4, #0	@ 000b547e 201c
.org 0xb5480
	adds r0, #115	@ 000b5480 7330
.org 0xb5482
	ldrb r0, [r0, #0]	@ 000b5482 0078
.org 0xb5484
	cmp r0, #3	@ 000b5484 0328
.org 0xb5486
	bne.n 0xb5490	@ 000b5486 03d1
.org 0xb5488
	movs r0, #0	@ 000b5488 0020
.org 0xb548a
	str r0, [r4, #96]	@ 000b548a 2066
