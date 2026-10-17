@ FUN_08098404  entry 0x08098404  size 124
.thumb
.org 0x98404
FUN_08098404:
	push {r4, lr}	@ 00098404 10b5
.org 0x98406
	adds r3, r0, #0	@ 00098406 031c
.org 0x98408
	ldr r4, [r3, #40]	@ 00098408 9c6a
.org 0x9840a
	ldrb r0, [r4, #10]	@ 0009840a a07a
.org 0x9840c
	lsrs r1, r0, #4	@ 0009840c 0109
.org 0x9840e
	movs r0, #1	@ 0009840e 0120
.org 0x98410
	ands r1, r0	@ 00098410 0140
.org 0x98412
	ldrb r0, [r4, #12]	@ 00098412 207b
.org 0x98414
	cmp r0, #1	@ 00098414 0128
.org 0x98416
	bhi.n 0x98424	@ 00098416 05d8
.org 0x98418
	ldrb r0, [r3, #18]	@ 00098418 987c
.org 0x9841a
	subs r0, #1	@ 0009841a 0138
.org 0x9841c
	strb r0, [r3, #18]	@ 0009841c 9874
.org 0x9841e
	lsls r0, r0, #24	@ 0009841e 0006
.org 0x98420
	cmp r0, #0	@ 00098420 0028
.org 0x98422
	bne.n 0x98444	@ 00098422 0fd1
.org 0x98424
	ldr r1, [pc, #24]	@ 00098424 0649
.org 0x98426
	ldrb r0, [r3, #9]	@ 00098426 587a
.org 0x98428
	lsls r0, r0, #2	@ 00098428 8000
.org 0x9842a
	adds r0, r0, r1	@ 0009842a 4018
.org 0x9842c
	movs r1, #2	@ 0009842c 0221
.org 0x9842e
	str r1, [r3, #12]	@ 0009842e d960
.org 0x98430
	ldr r0, [r0, #0]	@ 00098430 0068
.org 0x98432
	ldr r0, [r0, #8]	@ 00098432 8068
.org 0x98434
	str r0, [r3, #20]	@ 00098434 5861
.org 0x98436
	adds r0, r3, #0	@ 00098436 181c
.org 0x98438
	bl 0x98488	@ 00098438 00f026f8
.org 0x9843c
	b.n 0x98480	@ 0009843c 20e0
.org 0x9843e
	.byte 0x00	@ 0009843e data
.org 0x9843f
	.byte 0x00	@ 0009843f data
.org 0x98440
	.byte 0x40,0xdb,0x85,0x08	@ 00098440 data
.org 0x98444
	adds r2, r1, #0	@ 00098444 0a1c
.org 0x98446
	cmp r2, #0	@ 00098446 002a
.org 0x98448
	beq.n 0x98452	@ 00098448 03d0
.org 0x9844a
	ldrb r0, [r3, #10]	@ 0009844a 987a
.org 0x9844c
	movs r1, #16	@ 0009844c 1021
.org 0x9844e
	orrs r0, r1	@ 0009844e 0843
.org 0x98450
	b.n 0x98458	@ 00098450 02e0
.org 0x98452
	ldrb r1, [r3, #10]	@ 00098452 997a
.org 0x98454
	movs r0, #239	@ 00098454 ef20
.org 0x98456
	ands r0, r1	@ 00098456 0840
.org 0x98458
	strb r0, [r3, #10]	@ 00098458 9872
.org 0x9845a
	adds r1, r2, #0	@ 0009845a 111c
.org 0x9845c
	adds r0, r3, #0	@ 0009845c 181c
.org 0x9845e
	adds r0, #76	@ 0009845e 4c30
.org 0x98460
	strb r1, [r0, #0]	@ 00098460 0170
.org 0x98462
	movs r0, #74	@ 00098462 4a20
.org 0x98464
	adds r0, r0, r3	@ 00098464 c018
.org 0x98466
	mov ip, r0	@ 00098466 8446
.org 0x98468
	lsls r1, r1, #4	@ 00098468 0901
.org 0x9846a
	ldrb r2, [r0, #0]	@ 0009846a 0278
.org 0x9846c
	movs r0, #17	@ 0009846c 1120
.org 0x9846e
	negs r0, r0	@ 0009846e 4042
.org 0x98470
	ands r0, r2	@ 00098470 1040
.org 0x98472
	orrs r0, r1	@ 00098472 0843
.org 0x98474
	mov r1, ip	@ 00098474 6146
.org 0x98476
	strb r0, [r1, #0]	@ 00098476 0870
.org 0x98478
	ldr r0, [r4, #84]	@ 00098478 606d
.org 0x9847a
	ldr r1, [r4, #88]	@ 0009847a a16d
.org 0x9847c
	str r0, [r3, #84]	@ 0009847c 5865
.org 0x9847e
	str r1, [r3, #88]	@ 0009847e 9965
