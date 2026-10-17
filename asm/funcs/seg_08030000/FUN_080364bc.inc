@ FUN_080364bc  entry 0x080364bc  size 130
.thumb
.org 0x364bc
FUN_080364bc:
	push {r4, r5, r6, r7, lr}	@ 000364bc f0b5
.org 0x364be
	adds r5, r0, #0	@ 000364be 051c
.org 0x364c0
	movs r0, #129	@ 000364c0 8120
.org 0x364c2
	lsls r0, r0, #1	@ 000364c2 4000
.org 0x364c4
	adds r7, r5, r0	@ 000364c4 2f18
.org 0x364c6
	ldrb r0, [r7, #0]	@ 000364c6 3878
.org 0x364c8
	cmp r0, #0	@ 000364c8 0028
.org 0x364ca
	bne.n 0x364f6	@ 000364ca 14d1
.org 0x364cc
	ldr r1, [pc, #112]	@ 000364cc 1c49
.org 0x364ce
	movs r2, #171	@ 000364ce ab22
.org 0x364d0
	lsls r2, r2, #1	@ 000364d0 5200
.org 0x364d2
	adds r0, r5, r2	@ 000364d2 a818
.org 0x364d4
	ldrb r0, [r0, #0]	@ 000364d4 0078
.org 0x364d6
	lsls r0, r0, #1	@ 000364d6 4000
.org 0x364d8
	adds r0, r0, r1	@ 000364d8 4018
.org 0x364da
	ldrh r1, [r0, #0]	@ 000364da 0188
.org 0x364dc
	adds r0, r5, #0	@ 000364dc 281c
.org 0x364de
	bl 0x1cf00	@ 000364de e6f70ffd
.org 0x364e2
	adds r0, r5, #0	@ 000364e2 281c
.org 0x364e4
	bl 0x40bb4	@ 000364e4 0af066fb
.org 0x364e8
	ldr r0, [pc, #88]	@ 000364e8 1648
.org 0x364ea
	adds r1, r5, r0	@ 000364ea 2918
.org 0x364ec
	movs r0, #24	@ 000364ec 1820
.org 0x364ee
	strb r0, [r1, #0]	@ 000364ee 0870
.org 0x364f0
	ldrb r0, [r7, #0]	@ 000364f0 3878
.org 0x364f2
	adds r0, #1	@ 000364f2 0130
.org 0x364f4
	strb r0, [r7, #0]	@ 000364f4 3870
.org 0x364f6
	ldr r4, [pc, #72]	@ 000364f6 124c
.org 0x364f8
	movs r2, #171	@ 000364f8 ab22
.org 0x364fa
	lsls r2, r2, #1	@ 000364fa 5200
.org 0x364fc
	adds r6, r5, r2	@ 000364fc ae18
.org 0x364fe
	ldrb r0, [r6, #0]	@ 000364fe 3078
.org 0x36500
	lsls r0, r0, #1	@ 00036500 4000
.org 0x36502
	adds r0, r0, r4	@ 00036502 0019
.org 0x36504
	ldrh r1, [r0, #0]	@ 00036504 0188
.org 0x36506
	adds r0, r5, #0	@ 00036506 281c
.org 0x36508
	bl 0x3a3b0	@ 00036508 03f052ff
.org 0x3650c
	ldrb r0, [r6, #0]	@ 0003650c 3078
.org 0x3650e
	lsls r0, r0, #1	@ 0003650e 4000
.org 0x36510
	adds r0, r0, r4	@ 00036510 0019
.org 0x36512
	ldrh r1, [r0, #0]	@ 00036512 0188
.org 0x36514
	adds r0, r5, #0	@ 00036514 281c
.org 0x36516
	bl 0x3a3f0	@ 00036516 03f06bff
.org 0x3651a
	ldr r0, [pc, #40]	@ 0003651a 0a48
.org 0x3651c
	adds r1, r5, r0	@ 0003651c 2918
.org 0x3651e
	ldrb r0, [r1, #0]	@ 0003651e 0878
.org 0x36520
	subs r0, #1	@ 00036520 0138
.org 0x36522
	strb r0, [r1, #0]	@ 00036522 0870
.org 0x36524
	lsls r0, r0, #24	@ 00036524 0006
.org 0x36526
	lsrs r0, r0, #24	@ 00036526 000e
.org 0x36528
	cmp r0, #255	@ 00036528 ff28
.org 0x3652a
	bne.n 0x36538	@ 0003652a 05d1
.org 0x3652c
	ldr r2, [pc, #24]	@ 0003652c 064a
.org 0x3652e
	adds r1, r5, r2	@ 0003652e a918
.org 0x36530
	movs r0, #3	@ 00036530 0320
.org 0x36532
	strb r0, [r1, #0]	@ 00036532 0870
.org 0x36534
	movs r0, #0	@ 00036534 0020
.org 0x36536
	strb r0, [r7, #0]	@ 00036536 3870
.org 0x36538
	pop {r4, r5, r6, r7}	@ 00036538 f0bc
.org 0x3653a
	pop {r0}	@ 0003653a 01bc
.org 0x3653c
	bx r0	@ 0003653c 0047
