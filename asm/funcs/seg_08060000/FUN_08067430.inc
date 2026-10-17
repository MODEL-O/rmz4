@ FUN_08067430  entry 0x08067430  size 98
.thumb
.org 0x67430
FUN_08067430:
	push {r4, lr}	@ 00067430 10b5
.org 0x67432
	adds r4, r0, #0	@ 00067432 041c
.org 0x67434
	ldrb r0, [r4, #14]	@ 00067434 a07b
.org 0x67436
	cmp r0, #0	@ 00067436 0028
.org 0x67438
	bne.n 0x67452	@ 00067438 0bd1
.org 0x6743a
	ldr r1, [pc, #76]	@ 0006743a 1349
.org 0x6743c
	adds r0, r4, #0	@ 0006743c 201c
.org 0x6743e
	bl 0x1cf00	@ 0006743e b5f75ffd
.org 0x67442
	adds r0, r4, #0	@ 00067442 201c
.org 0x67444
	adds r0, #116	@ 00067444 7430
.org 0x67446
	ldr r1, [pc, #68]	@ 00067446 1149
.org 0x67448
	bl 0x5784	@ 00067448 9ef79cf9
.org 0x6744c
	ldrb r0, [r4, #14]	@ 0006744c a07b
.org 0x6744e
	adds r0, #1	@ 0006744e 0130
.org 0x67450
	strb r0, [r4, #14]	@ 00067450 a073
.org 0x67452
	adds r0, r4, #0	@ 00067452 201c
.org 0x67454
	bl 0x1cff0	@ 00067454 b5f7ccfd
.org 0x67458
	ldr r0, [r4, #44]	@ 00067458 e06a
.org 0x6745a
	cmp r0, #0	@ 0006745a 0028
.org 0x6745c
	beq.n 0x67468	@ 0006745c 04d0
.org 0x6745e
	ldrb r0, [r0, #12]	@ 0006745e 007b
.org 0x67460
	cmp r0, #1	@ 00067460 0128
.org 0x67462
	bls.n 0x67468	@ 00067462 01d9
.org 0x67464
	movs r0, #0	@ 00067464 0020
.org 0x67466
	str r0, [r4, #44]	@ 00067466 e062
.org 0x67468
	adds r0, r4, #0	@ 00067468 201c
.org 0x6746a
	adds r0, #115	@ 0006746a 7330
.org 0x6746c
	ldrb r1, [r0, #0]	@ 0006746c 0178
.org 0x6746e
	cmp r1, #3	@ 0006746e 0329
.org 0x67470
	bne.n 0x67494	@ 00067470 10d1
.org 0x67472
	ldr r0, [r4, #44]	@ 00067472 e06a
.org 0x67474
	cmp r0, #0	@ 00067474 0028
.org 0x67476
	beq.n 0x67490	@ 00067476 0bd0
.org 0x67478
	ldrb r0, [r0, #13]	@ 00067478 407b
.org 0x6747a
	cmp r0, #1	@ 0006747a 0128
.org 0x6747c
	bls.n 0x67494	@ 0006747c 0ad9
.org 0x6747e
	movs r1, #0	@ 0006747e 0021
.org 0x67480
	movs r0, #9	@ 00067480 0920
.org 0x67482
	strb r0, [r4, #13]	@ 00067482 6073
.org 0x67484
	strb r1, [r4, #14]	@ 00067484 a173
.org 0x67486
	b.n 0x67494	@ 00067486 05e0
.org 0x67488
	.byte 0x0d,0xa9,0x00,0x00	@ 00067488 data
.org 0x6748c
	.byte 0xfc,0xb1,0x85,0x08	@ 0006748c data
.org 0x67490
	strb r1, [r4, #13]	@ 00067490 6173
