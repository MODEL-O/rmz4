@ FUN_08017458  entry 0x08017458  size 142
.thumb
.org 0x17458
FUN_08017458:
	push {r4, r5, r6, lr}	@ 00017458 70b5
.org 0x1745a
	adds r5, r0, #0	@ 0001745a 051c
.org 0x1745c
	ldrb r6, [r5, #14]	@ 0001745c ae7b
.org 0x1745e
	cmp r6, #0	@ 0001745e 002e
.org 0x17460
	bne.n 0x174be	@ 00017460 2dd1
.org 0x17462
	ldr r0, [r5, #92]	@ 00017462 e86d
.org 0x17464
	lsls r0, r0, #16	@ 00017464 0004
.org 0x17466
	lsrs r0, r0, #20	@ 00017466 000d
.org 0x17468
	lsls r3, r0, #1	@ 00017468 4300
.org 0x1746a
	ldr r4, [pc, #124]	@ 0001746a 1f4c
.org 0x1746c
	adds r3, r3, r4	@ 0001746c 1b19
.org 0x1746e
	ldr r1, [r5, #100]	@ 0001746e 696e
.org 0x17470
	movs r2, #71	@ 00017470 4722
.org 0x17472
	orrs r1, r2	@ 00017472 1143
.org 0x17474
	strh r1, [r3, #0]	@ 00017474 1980
.org 0x17476
	lsls r0, r0, #2	@ 00017476 8000
.org 0x17478
	adds r4, #8	@ 00017478 0834
.org 0x1747a
	adds r0, r0, r4	@ 0001747a 0019
.org 0x1747c
	str r6, [r0, #0]	@ 0001747c 0660
.org 0x1747e
	ldr r0, [pc, #108]	@ 0001747e 1b48
.org 0x17480
	ldr r0, [r0, #0]	@ 00017480 0068
.org 0x17482
	ldr r2, [pc, #108]	@ 00017482 1b4a
.org 0x17484
	adds r0, r0, r2	@ 00017484 8018
.org 0x17486
	movs r2, #248	@ 00017486 f822
.org 0x17488
	lsls r2, r2, #5	@ 00017488 5201
.org 0x1748a
	ands r1, r2	@ 0001748a 1140
.org 0x1748c
	lsls r1, r1, #3	@ 0001748c c900
.org 0x1748e
	movs r2, #192	@ 0001748e c022
.org 0x17490
	lsls r2, r2, #19	@ 00017490 d204
.org 0x17492
	adds r1, r1, r2	@ 00017492 8918
.org 0x17494
	movs r2, #128	@ 00017494 8022
.org 0x17496
	lsls r2, r2, #2	@ 00017496 9200
.org 0x17498
	bl 0x128be0	@ 00017498 11f1a2fb
.org 0x1749c
	adds r0, r5, #0	@ 0001749c 281c
.org 0x1749e
	adds r0, #110	@ 0001749e 6e30
.org 0x174a0
	strh r6, [r0, #0]	@ 000174a0 0680
.org 0x174a2
	subs r0, #2	@ 000174a2 0238
.org 0x174a4
	strh r6, [r0, #0]	@ 000174a4 0680
.org 0x174a6
	subs r0, #2	@ 000174a6 0238
.org 0x174a8
	strh r6, [r0, #0]	@ 000174a8 0680
.org 0x174aa
	subs r0, #2	@ 000174aa 0238
.org 0x174ac
	strh r6, [r0, #0]	@ 000174ac 0680
.org 0x174ae
	ldr r0, [r5, #52]	@ 000174ae 686b
.org 0x174b0
	str r0, [r5, #124]	@ 000174b0 e867
.org 0x174b2
	str r0, [r5, #120]	@ 000174b2 a867
.org 0x174b4
	str r0, [r5, #116]	@ 000174b4 6867
.org 0x174b6
	str r0, [r5, #112]	@ 000174b6 2867
.org 0x174b8
	ldrb r0, [r5, #14]	@ 000174b8 a87b
.org 0x174ba
	adds r0, #1	@ 000174ba 0130
.org 0x174bc
	strb r0, [r5, #14]	@ 000174bc a873
.org 0x174be
	adds r1, r5, #0	@ 000174be 291c
.org 0x174c0
	adds r1, #104	@ 000174c0 6831
.org 0x174c2
	ldrh r0, [r1, #0]	@ 000174c2 0888
.org 0x174c4
	adds r0, #1	@ 000174c4 0130
.org 0x174c6
	strh r0, [r1, #0]	@ 000174c6 0880
.org 0x174c8
	adds r1, #2	@ 000174c8 0231
.org 0x174ca
	ldrh r0, [r1, #0]	@ 000174ca 0888
.org 0x174cc
	adds r0, #2	@ 000174cc 0230
.org 0x174ce
	strh r0, [r1, #0]	@ 000174ce 0880
.org 0x174d0
	adds r1, #2	@ 000174d0 0231
.org 0x174d2
	ldrh r0, [r1, #0]	@ 000174d2 0888
.org 0x174d4
	adds r0, #4	@ 000174d4 0430
.org 0x174d6
	strh r0, [r1, #0]	@ 000174d6 0880
.org 0x174d8
	adds r1, #2	@ 000174d8 0231
.org 0x174da
	ldrh r0, [r1, #0]	@ 000174da 0888
.org 0x174dc
	adds r0, #8	@ 000174dc 0830
.org 0x174de
	strh r0, [r1, #0]	@ 000174de 0880
.org 0x174e0
	pop {r4, r5, r6}	@ 000174e0 70bc
.org 0x174e2
	pop {r0}	@ 000174e2 01bc
.org 0x174e4
	bx r0	@ 000174e4 0047
