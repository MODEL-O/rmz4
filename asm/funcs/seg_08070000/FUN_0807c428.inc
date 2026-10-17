@ FUN_0807c428  entry 0x0807c428  size 108
.thumb
.org 0x7c428
FUN_0807c428:
	push {r4, r5, lr}	@ 0007c428 30b5
.org 0x7c42a
	adds r4, r0, #0	@ 0007c42a 041c
.org 0x7c42c
	ldrb r0, [r4, #15]	@ 0007c42c e07b
.org 0x7c42e
	cmp r0, #0	@ 0007c42e 0028
.org 0x7c430
	bne.n 0x7c440	@ 0007c430 06d1
.org 0x7c432
	adds r0, r4, #0	@ 0007c432 201c
.org 0x7c434
	movs r1, #13	@ 0007c434 0d21
.org 0x7c436
	bl 0x7e8c8	@ 0007c436 02f047fa
.org 0x7c43a
	ldrb r0, [r4, #15]	@ 0007c43a e07b
.org 0x7c43c
	adds r0, #1	@ 0007c43c 0130
.org 0x7c43e
	strb r0, [r4, #15]	@ 0007c43e e073
.org 0x7c440
	adds r5, r4, #0	@ 0007c440 251c
.org 0x7c442
	adds r5, #188	@ 0007c442 bc35
.org 0x7c444
	ldrb r0, [r5, #0]	@ 0007c444 2878
.org 0x7c446
	cmp r0, #0	@ 0007c446 0028
.org 0x7c448
	beq.n 0x7c450	@ 0007c448 02d0
.org 0x7c44a
	adds r0, r4, #0	@ 0007c44a 201c
.org 0x7c44c
	bl 0x1cff0	@ 0007c44c a0f7d0fd
.org 0x7c450
	adds r0, r4, #0	@ 0007c450 201c
.org 0x7c452
	adds r0, #116	@ 0007c452 7430
.org 0x7c454
	ldr r3, [pc, #60]	@ 0007c454 0f4b
.org 0x7c456
	ldr r2, [pc, #64]	@ 0007c456 104a
.org 0x7c458
	ldrb r1, [r5, #0]	@ 0007c458 2978
.org 0x7c45a
	lsls r1, r1, #1	@ 0007c45a 4900
.org 0x7c45c
	adds r1, r1, r2	@ 0007c45c 8918
.org 0x7c45e
	ldrh r2, [r1, #0]	@ 0007c45e 0a88
.org 0x7c460
	lsls r2, r2, #2	@ 0007c460 9200
.org 0x7c462
	adds r2, r2, r3	@ 0007c462 d218
.org 0x7c464
	adds r1, r4, #0	@ 0007c464 211c
.org 0x7c466
	adds r1, #113	@ 0007c466 7131
.org 0x7c468
	ldrb r1, [r1, #0]	@ 0007c468 0978
.org 0x7c46a
	lsls r1, r1, #24	@ 0007c46a 0906
.org 0x7c46c
	asrs r1, r1, #24	@ 0007c46c 0916
.org 0x7c46e
	ldr r2, [r2, #0]	@ 0007c46e 1268
.org 0x7c470
	lsls r1, r1, #2	@ 0007c470 8900
.org 0x7c472
	adds r1, r1, r2	@ 0007c472 8918
.org 0x7c474
	ldr r1, [r1, #0]	@ 0007c474 0968
.org 0x7c476
	bl 0x5784	@ 0007c476 89f785f9
.org 0x7c47a
	adds r0, r4, #0	@ 0007c47a 201c
.org 0x7c47c
	adds r0, #115	@ 0007c47c 7330
.org 0x7c47e
	ldrb r0, [r0, #0]	@ 0007c47e 0078
.org 0x7c480
	cmp r0, #3	@ 0007c480 0328
.org 0x7c482
	bne.n 0x7c48e	@ 0007c482 04d1
.org 0x7c484
	ldrb r0, [r4, #14]	@ 0007c484 a07b
.org 0x7c486
	adds r0, #1	@ 0007c486 0130
.org 0x7c488
	movs r1, #0	@ 0007c488 0021
.org 0x7c48a
	strb r0, [r4, #14]	@ 0007c48a a073
.org 0x7c48c
	strb r1, [r4, #15]	@ 0007c48c e173
.org 0x7c48e
	pop {r4, r5}	@ 0007c48e 30bc
.org 0x7c490
	pop {r0}	@ 0007c490 01bc
.org 0x7c492
	bx r0	@ 0007c492 0047
