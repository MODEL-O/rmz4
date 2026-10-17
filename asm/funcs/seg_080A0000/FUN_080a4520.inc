@ FUN_080a4520  entry 0x080a4520  size 94
.thumb
.org 0xa4520
FUN_080a4520:
	push {r4, r5, lr}	@ 000a4520 30b5
.org 0xa4522
	adds r4, r0, #0	@ 000a4522 041c
.org 0xa4524
	ldr r0, [r4, #20]	@ 000a4524 6069
.org 0xa4526
	movs r1, #1	@ 000a4526 0121
.org 0xa4528
	ands r0, r1	@ 000a4528 0840
.org 0xa452a
	cmp r0, #0	@ 000a452a 0028
.org 0xa452c
	beq.n 0xa4578	@ 000a452c 24d0
.org 0xa452e
	movs r0, #19	@ 000a452e 1320
.org 0xa4530
	bl 0x6984	@ 000a4530 62f728fa
.org 0xa4534
	ldr r0, [r4, #12]	@ 000a4534 e068
.org 0xa4536
	ldr r0, [r0, #44]	@ 000a4536 c06a
.org 0xa4538
	ldr r5, [r4, #44]	@ 000a4538 e56a
.org 0xa453a
	movs r2, #0	@ 000a453a 0022
.org 0xa453c
	ldr r1, [r0, #84]	@ 000a453c 416d
.org 0xa453e
	ldr r0, [r5, #84]	@ 000a453e 686d
.org 0xa4540
	cmp r1, r0	@ 000a4540 8142
.org 0xa4542
	ble.n 0xa4546	@ 000a4542 00dd
.org 0xa4544
	movs r2, #1	@ 000a4544 0122
.org 0xa4546
	adds r0, r5, #0	@ 000a4546 281c
.org 0xa4548
	adds r0, #188	@ 000a4548 bc30
.org 0xa454a
	strb r2, [r0, #0]	@ 000a454a 0270
.org 0xa454c
	ldr r1, [r4, #20]	@ 000a454c 6169
.org 0xa454e
	movs r0, #128	@ 000a454e 8020
.org 0xa4550
	lsls r0, r0, #2	@ 000a4550 8000
.org 0xa4552
	ands r0, r1	@ 000a4552 0840
.org 0xa4554
	cmp r0, #0	@ 000a4554 0028
.org 0xa4556
	beq.n 0xa4578	@ 000a4556 0fd0
.org 0xa4558
	movs r0, #128	@ 000a4558 8020
.org 0xa455a
	lsls r0, r0, #10	@ 000a455a 8002
.org 0xa455c
	ands r1, r0	@ 000a455c 0140
.org 0xa455e
	cmp r1, #0	@ 000a455e 0029
.org 0xa4560
	beq.n 0xa4578	@ 000a4560 0ad0
.org 0xa4562
	ldr r0, [pc, #28]	@ 000a4562 0748
.org 0xa4564
	ldr r0, [r0, #0]	@ 000a4564 0068
.org 0xa4566
	cmp r0, #0	@ 000a4566 0028
.org 0xa4568
	beq.n 0xa4578	@ 000a4568 06d0
.org 0xa456a
	movs r1, #5	@ 000a456a 0521
.org 0xa456c
	movs r2, #5	@ 000a456c 0522
.org 0xa456e
	bl 0x3a578	@ 000a456e 96f703f8
.org 0xa4572
	adds r1, r5, #0	@ 000a4572 291c
.org 0xa4574
	adds r1, #189	@ 000a4574 bd31
.org 0xa4576
	strb r0, [r1, #0]	@ 000a4576 0870
.org 0xa4578
	pop {r4, r5}	@ 000a4578 30bc
.org 0xa457a
	pop {r0}	@ 000a457a 01bc
.org 0xa457c
	bx r0	@ 000a457c 0047
