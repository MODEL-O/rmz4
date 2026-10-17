@ FUN_08035410  entry 0x08035410  size 72
.thumb
.org 0x35410
FUN_08035410:
	push {r4, lr}	@ 00035410 10b5
.org 0x35412
	adds r4, r0, #0	@ 00035412 041c
.org 0x35414
	adds r0, #180	@ 00035414 b430
.org 0x35416
	ldrb r0, [r0, #12]	@ 00035416 007b
.org 0x35418
	cmp r0, #0	@ 00035418 0028
.org 0x3541a
	bne.n 0x3542c	@ 0003541a 07d1
.org 0x3541c
	ldr r0, [pc, #8]	@ 0003541c 0248
.org 0x3541e
	adds r2, r4, r0	@ 0003541e 2218
.org 0x35420
	ldrb r0, [r2, #0]	@ 00035420 1078
.org 0x35422
	movs r1, #16	@ 00035422 1021
.org 0x35424
	b.n 0x35434	@ 00035424 06e0
.org 0x35426
	.byte 0x00	@ 00035426 data
.org 0x35427
	.byte 0x00	@ 00035427 data
.org 0x35428
	.byte 0x53,0x01,0x00,0x00	@ 00035428 data
.org 0x3542c
	ldr r1, [pc, #48]	@ 0003542c 0c49
.org 0x3542e
	adds r2, r4, r1	@ 0003542e 6218
.org 0x35430
	ldrb r0, [r2, #0]	@ 00035430 1078
.org 0x35432
	movs r1, #32	@ 00035432 2021
.org 0x35434
	orrs r0, r1	@ 00035434 0843
.org 0x35436
	strb r0, [r2, #0]	@ 00035436 1070
.org 0x35438
	ldr r1, [pc, #40]	@ 00035438 0a49
.org 0x3543a
	adds r0, r4, #0	@ 0003543a 201c
.org 0x3543c
	movs r2, #0	@ 0003543c 0022
.org 0x3543e
	movs r3, #2	@ 0003543e 0223
.org 0x35440
	bl 0x1cfc8	@ 00035440 e7f7c2fd
.org 0x35444
	movs r1, #170	@ 00035444 aa21
.org 0x35446
	lsls r1, r1, #1	@ 00035446 4900
.org 0x35448
	adds r0, r4, r1	@ 00035448 6018
.org 0x3544a
	ldrb r0, [r0, #0]	@ 0003544a 0078
.org 0x3544c
	cmp r0, #1	@ 0003544c 0128
.org 0x3544e
	bne.n 0x35458	@ 0003544e 03d1
.org 0x35450
	ldr r0, [pc, #20]	@ 00035450 0548
.org 0x35452
	adds r1, r4, r0	@ 00035452 2118
.org 0x35454
	movs r0, #2	@ 00035454 0220
.org 0x35456
	strb r0, [r1, #0]	@ 00035456 0870
