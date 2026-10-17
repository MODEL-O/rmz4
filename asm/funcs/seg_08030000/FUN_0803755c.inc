@ FUN_0803755c  entry 0x0803755c  size 104
.thumb
.org 0x3755c
FUN_0803755c:
	push {r4, r5, lr}	@ 0003755c 30b5
.org 0x3755e
	adds r5, r0, #0	@ 0003755e 051c
.org 0x37560
	movs r0, #129	@ 00037560 8120
.org 0x37562
	lsls r0, r0, #1	@ 00037562 4000
.org 0x37564
	adds r4, r5, r0	@ 00037564 2c18
.org 0x37566
	ldrb r0, [r4, #0]	@ 00037566 2078
.org 0x37568
	cmp r0, #0	@ 00037568 0028
.org 0x3756a
	bne.n 0x37582	@ 0003756a 0ad1
.org 0x3756c
	ldr r1, [pc, #84]	@ 0003756c 1549
.org 0x3756e
	adds r0, r5, #0	@ 0003756e 281c
.org 0x37570
	bl 0x1cf00	@ 00037570 e5f7c6fc
.org 0x37574
	ldr r0, [pc, #80]	@ 00037574 1448
.org 0x37576
	adds r1, r5, r0	@ 00037576 2918
.org 0x37578
	movs r0, #4	@ 00037578 0420
.org 0x3757a
	strb r0, [r1, #0]	@ 0003757a 0870
.org 0x3757c
	ldrb r0, [r4, #0]	@ 0003757c 2078
.org 0x3757e
	adds r0, #1	@ 0003757e 0130
.org 0x37580
	strb r0, [r4, #0]	@ 00037580 2070
.org 0x37582
	ldr r4, [pc, #64]	@ 00037582 104c
.org 0x37584
	adds r0, r5, #0	@ 00037584 281c
.org 0x37586
	adds r1, r4, #0	@ 00037586 211c
.org 0x37588
	bl 0x3a3b0	@ 00037588 02f012ff
.org 0x3758c
	adds r0, r5, #0	@ 0003758c 281c
.org 0x3758e
	adds r1, r4, #0	@ 0003758e 211c
.org 0x37590
	bl 0x3a3f0	@ 00037590 02f02eff
.org 0x37594
	ldr r0, [pc, #48]	@ 00037594 0c48
.org 0x37596
	adds r1, r5, r0	@ 00037596 2918
.org 0x37598
	ldrb r0, [r1, #0]	@ 00037598 0878
.org 0x3759a
	subs r0, #1	@ 0003759a 0138
.org 0x3759c
	strb r0, [r1, #0]	@ 0003759c 0870
.org 0x3759e
	lsls r0, r0, #24	@ 0003759e 0006
.org 0x375a0
	lsrs r0, r0, #24	@ 000375a0 000e
.org 0x375a2
	cmp r0, #255	@ 000375a2 ff28
.org 0x375a4
	bne.n 0x375be	@ 000375a4 0bd1
.org 0x375a6
	movs r1, #160	@ 000375a6 a021
.org 0x375a8
	lsls r1, r1, #3	@ 000375a8 c900
.org 0x375aa
	adds r0, r5, #0	@ 000375aa 281c
.org 0x375ac
	movs r2, #4	@ 000375ac 0422
.org 0x375ae
	movs r3, #1	@ 000375ae 0123
.org 0x375b0
	bl 0x1cfc8	@ 000375b0 e5f70afd
.org 0x375b4
	movs r0, #128	@ 000375b4 8020
.org 0x375b6
	lsls r0, r0, #1	@ 000375b6 4000
.org 0x375b8
	adds r1, r5, r0	@ 000375b8 2918
.org 0x375ba
	movs r0, #0	@ 000375ba 0020
.org 0x375bc
	strb r0, [r1, #0]	@ 000375bc 0870
.org 0x375be
	pop {r4, r5}	@ 000375be 30bc
.org 0x375c0
	pop {r0}	@ 000375c0 01bc
.org 0x375c2
	bx r0	@ 000375c2 0047
