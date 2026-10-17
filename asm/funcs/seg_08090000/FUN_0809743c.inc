@ FUN_0809743c  entry 0x0809743c  size 102
.thumb
.org 0x9743c
FUN_0809743c:
	push {r4, r5, lr}	@ 0009743c 30b5
.org 0x9743e
	adds r4, r0, #0	@ 0009743e 041c
.org 0x97440
	ldrb r5, [r4, #14]	@ 00097440 a57b
.org 0x97442
	cmp r5, #0	@ 00097442 002d
.org 0x97444
	bne.n 0x97456	@ 00097444 07d1
.org 0x97446
	movs r1, #160	@ 00097446 a021
.org 0x97448
	lsls r1, r1, #7	@ 00097448 c901
.org 0x9744a
	bl 0x1cf00	@ 0009744a 85f759fd
.org 0x9744e
	strb r5, [r4, #18]	@ 0009744e a574
.org 0x97450
	ldrb r0, [r4, #14]	@ 00097450 a07b
.org 0x97452
	adds r0, #1	@ 00097452 0130
.org 0x97454
	strb r0, [r4, #14]	@ 00097454 a073
.org 0x97456
	adds r0, r4, #0	@ 00097456 201c
.org 0x97458
	bl 0x1cff0	@ 00097458 85f7cafd
.org 0x9745c
	ldrb r0, [r4, #18]	@ 0009745c a07c
.org 0x9745e
	cmp r0, #8	@ 0009745e 0828
.org 0x97460
	bls.n 0x9749c	@ 00097460 1cd9
.org 0x97462
	ldr r0, [pc, #52]	@ 00097462 0d48
.org 0x97464
	ldr r2, [r0, #0]	@ 00097464 0268
.org 0x97466
	ldr r0, [r2, #84]	@ 00097466 506d
.org 0x97468
	ldr r1, [r4, #84]	@ 00097468 616d
.org 0x9746a
	subs r0, r0, r1	@ 0009746a 401a
.org 0x9746c
	movs r1, #208	@ 0009746c d021
.org 0x9746e
	lsls r1, r1, #7	@ 0009746e c901
.org 0x97470
	adds r0, r0, r1	@ 00097470 4018
.org 0x97472
	movs r1, #208	@ 00097472 d021
.org 0x97474
	lsls r1, r1, #8	@ 00097474 0902
.org 0x97476
	cmp r0, r1	@ 00097476 8842
.org 0x97478
	bhi.n 0x974a0	@ 00097478 12d8
.org 0x9747a
	ldr r0, [r2, #88]	@ 0009747a 906d
.org 0x9747c
	ldr r1, [r4, #88]	@ 0009747c a16d
.org 0x9747e
	subs r0, r0, r1	@ 0009747e 401a
.org 0x97480
	movs r1, #160	@ 00097480 a021
.org 0x97482
	lsls r1, r1, #7	@ 00097482 c901
.org 0x97484
	adds r0, r0, r1	@ 00097484 4018
.org 0x97486
	movs r1, #160	@ 00097486 a021
.org 0x97488
	lsls r1, r1, #8	@ 00097488 0902
.org 0x9748a
	cmp r0, r1	@ 0009748a 8842
.org 0x9748c
	bhi.n 0x974a0	@ 0009748c 08d8
.org 0x9748e
	movs r1, #0	@ 0009748e 0021
.org 0x97490
	movs r0, #1	@ 00097490 0120
.org 0x97492
	strb r0, [r4, #13]	@ 00097492 6073
.org 0x97494
	strb r1, [r4, #14]	@ 00097494 a173
.org 0x97496
	b.n 0x974a0	@ 00097496 03e0
.org 0x97498
	.byte 0xf0,0xdb,0x02,0x02	@ 00097498 data
.org 0x9749c
	adds r0, #1	@ 0009749c 0130
.org 0x9749e
	strb r0, [r4, #18]	@ 0009749e a074
.org 0x974a0
	pop {r4, r5}	@ 000974a0 30bc
