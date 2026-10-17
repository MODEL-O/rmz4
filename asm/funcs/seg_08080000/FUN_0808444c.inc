@ FUN_0808444c  entry 0x0808444c  size 146
.thumb
.org 0x8444c
FUN_0808444c:
	push {r4, r5, r6, lr}	@ 0008444c 70b5
.org 0x8444e
	adds r4, r0, #0	@ 0008444e 041c
.org 0x84450
	ldrb r5, [r4, #14]	@ 00084450 a57b
.org 0x84452
	cmp r5, #0	@ 00084452 002d
.org 0x84454
	bne.n 0x84470	@ 00084454 0cd1
.org 0x84456
	movs r1, #224	@ 00084456 e021
.org 0x84458
	lsls r1, r1, #5	@ 00084458 4901
.org 0x8445a
	bl 0x1cf00	@ 0008445a 98f751fd
.org 0x8445e
	adds r0, r4, #0	@ 0008445e 201c
.org 0x84460
	adds r0, #116	@ 00084460 7430
.org 0x84462
	ldr r1, [pc, #112]	@ 00084462 1c49
.org 0x84464
	bl 0x5784	@ 00084464 81f78ef9
.org 0x84468
	str r5, [r4, #96]	@ 00084468 2566
.org 0x8446a
	ldrb r0, [r4, #14]	@ 0008446a a07b
.org 0x8446c
	adds r0, #1	@ 0008446c 0130
.org 0x8446e
	strb r0, [r4, #14]	@ 0008446e a073
.org 0x84470
	ldr r0, [r4, #96]	@ 00084470 206e
.org 0x84472
	adds r0, #64	@ 00084472 4030
.org 0x84474
	str r0, [r4, #96]	@ 00084474 2066
.org 0x84476
	movs r1, #224	@ 00084476 e021
.org 0x84478
	lsls r1, r1, #3	@ 00084478 c900
.org 0x8447a
	cmp r0, r1	@ 0008447a 8842
.org 0x8447c
	ble.n 0x84480	@ 0008447c 00dd
.org 0x8447e
	str r1, [r4, #96]	@ 0008447e 2166
.org 0x84480
	ldr r1, [r4, #88]	@ 00084480 a16d
.org 0x84482
	ldr r0, [r4, #96]	@ 00084482 206e
.org 0x84484
	adds r1, r1, r0	@ 00084484 0918
.org 0x84486
	str r1, [r4, #88]	@ 00084486 a165
.org 0x84488
	ldr r0, [r4, #84]	@ 00084488 606d
.org 0x8448a
	movs r2, #160	@ 0008448a a022
.org 0x8448c
	lsls r2, r2, #4	@ 0008448c 1201
.org 0x8448e
	adds r1, r1, r2	@ 0008448e 8918
.org 0x84490
	bl 0x7c7c	@ 00084490 83f7f4fb
.org 0x84494
	lsls r0, r0, #16	@ 00084494 0004
.org 0x84496
	cmp r0, #0	@ 00084496 0028
.org 0x84498
	beq.n 0x844a8	@ 00084498 06d0
.org 0x8449a
	ldr r0, [r4, #84]	@ 0008449a 606d
.org 0x8449c
	ldr r1, [r4, #88]	@ 0008449c a16d
.org 0x8449e
	bl 0x8534	@ 0008449e 84f749f8
.org 0x844a2
	ldr r1, [pc, #52]	@ 000844a2 0d49
.org 0x844a4
	adds r0, r0, r1	@ 000844a4 4018
.org 0x844a6
	str r0, [r4, #88]	@ 000844a6 a065
.org 0x844a8
	adds r5, r4, #0	@ 000844a8 251c
.org 0x844aa
	adds r5, #180	@ 000844aa b435
.org 0x844ac
	ldr r0, [r5, #0]	@ 000844ac 2868
.org 0x844ae
	bl 0x2b3e4	@ 000844ae a6f799ff
.org 0x844b2
	cmp r0, #0	@ 000844b2 0028
.org 0x844b4
	beq.n 0x844e6	@ 000844b4 17d0
.org 0x844b6
	movs r6, #0	@ 000844b6 0026
.org 0x844b8
	str r6, [r5, #0]	@ 000844b8 2e60
.org 0x844ba
	adds r0, r4, #0	@ 000844ba 201c
.org 0x844bc
	adds r0, #116	@ 000844bc 7430
.org 0x844be
	ldr r1, [pc, #28]	@ 000844be 0749
.org 0x844c0
	bl 0x5784	@ 000844c0 81f760f9
.org 0x844c4
	ldr r0, [r4, #44]	@ 000844c4 e06a
.org 0x844c6
	cmp r0, #0	@ 000844c6 0028
.org 0x844c8
	beq.n 0x844e0	@ 000844c8 0ad0
.org 0x844ca
	movs r0, #9	@ 000844ca 0920
.org 0x844cc
	strb r0, [r4, #13]	@ 000844cc 6073
.org 0x844ce
	strb r6, [r4, #14]	@ 000844ce a673
.org 0x844d0
	b.n 0x844e6	@ 000844d0 09e0
.org 0x844d2
	.byte 0x00	@ 000844d2 data
.org 0x844d3
	.byte 0x00	@ 000844d3 data
.org 0x844d4
	.byte 0xbc,0xe9,0x85,0x08	@ 000844d4 data
.org 0x844d8
	.byte 0x00,0xf6,0xff,0xff	@ 000844d8 data
.org 0x844dc
	.byte 0xa4,0xe9,0x85,0x08	@ 000844dc data
