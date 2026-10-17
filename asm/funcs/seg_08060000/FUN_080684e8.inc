@ FUN_080684e8  entry 0x080684e8  size 108
.thumb
.org 0x684e8
FUN_080684e8:
	push {r4, r5, lr}	@ 000684e8 30b5
.org 0x684ea
	adds r4, r0, #0	@ 000684ea 041c
.org 0x684ec
	ldrb r5, [r4, #14]	@ 000684ec a57b
.org 0x684ee
	cmp r5, #0	@ 000684ee 002d
.org 0x684f0
	bne.n 0x68502	@ 000684f0 07d1
.org 0x684f2
	ldr r1, [pc, #76]	@ 000684f2 1349
.org 0x684f4
	bl 0x1cf00	@ 000684f4 b4f704fd
.org 0x684f8
	str r5, [r4, #96]	@ 000684f8 2566
.org 0x684fa
	strb r5, [r4, #15]	@ 000684fa e573
.org 0x684fc
	ldrb r0, [r4, #14]	@ 000684fc a07b
.org 0x684fe
	adds r0, #1	@ 000684fe 0130
.org 0x68500
	strb r0, [r4, #14]	@ 00068500 a073
.org 0x68502
	adds r0, r4, #0	@ 00068502 201c
.org 0x68504
	bl 0x1cff0	@ 00068504 b4f774fd
.org 0x68508
	ldrb r0, [r4, #15]	@ 00068508 e07b
.org 0x6850a
	cmp r0, #0	@ 0006850a 0028
.org 0x6850c
	bne.n 0x68548	@ 0006850c 1cd1
.org 0x6850e
	ldr r0, [r4, #88]	@ 0006850e a06d
.org 0x68510
	ldr r1, [r4, #96]	@ 00068510 216e
.org 0x68512
	adds r0, r0, r1	@ 00068512 4018
.org 0x68514
	str r0, [r4, #88]	@ 00068514 a065
.org 0x68516
	adds r1, #64	@ 00068516 4031
.org 0x68518
	str r1, [r4, #96]	@ 00068518 2166
.org 0x6851a
	adds r5, r4, #0	@ 0006851a 251c
.org 0x6851c
	adds r5, #180	@ 0006851c b435
.org 0x6851e
	ldr r1, [r5, #4]	@ 0006851e 6968
.org 0x68520
	cmp r0, r1	@ 00068520 8842
.org 0x68522
	blt.n 0x68558	@ 00068522 19db
.org 0x68524
	movs r0, #95	@ 00068524 5f20
.org 0x68526
	bl 0x2b10	@ 00068526 9af7f3fa
.org 0x6852a
	ldr r0, [r5, #4]	@ 0006852a 6868
.org 0x6852c
	str r0, [r4, #88]	@ 0006852c a065
.org 0x6852e
	ldr r1, [pc, #20]	@ 0006852e 0549
.org 0x68530
	adds r0, r4, #0	@ 00068530 201c
.org 0x68532
	bl 0x1cf00	@ 00068532 b4f7e5fc
.org 0x68536
	ldrb r0, [r4, #15]	@ 00068536 e07b
.org 0x68538
	adds r0, #1	@ 00068538 0130
.org 0x6853a
	strb r0, [r4, #15]	@ 0006853a e073
.org 0x6853c
	b.n 0x68558	@ 0006853c 0ce0
.org 0x6853e
	.byte 0x00	@ 0006853e data
.org 0x6853f
	.byte 0x00	@ 0006853f data
.org 0x68540
	.byte 0x21,0xa9,0x00,0x00	@ 00068540 data
.org 0x68544
	.byte 0x03,0xa9,0x00,0x00	@ 00068544 data
.org 0x68548
	adds r0, r4, #0	@ 00068548 201c
.org 0x6854a
	adds r0, #115	@ 0006854a 7330
.org 0x6854c
	ldrb r1, [r0, #0]	@ 0006854c 0178
.org 0x6854e
	cmp r1, #3	@ 0006854e 0329
.org 0x68550
	bne.n 0x68558	@ 00068550 02d1
.org 0x68552
	movs r0, #0	@ 00068552 0020
