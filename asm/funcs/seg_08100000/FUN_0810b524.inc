@ FUN_0810b524  entry 0x0810b524  size 84
.thumb
.org 0x10b524
FUN_0810b524:
	push {lr}	@ 0010b524 00b5
.org 0x10b526
	adds r2, r0, #0	@ 0010b526 021c
.org 0x10b528
	ldr r1, [r2, #40]	@ 0010b528 916a
.org 0x10b52a
	ldrb r0, [r1, #2]	@ 0010b52a 8878
.org 0x10b52c
	cmp r0, #0	@ 0010b52c 0028
.org 0x10b52e
	beq.n 0x10b560	@ 0010b52e 17d0
.org 0x10b530
	ldrb r0, [r1, #3]	@ 0010b530 c878
.org 0x10b532
	cmp r0, #2	@ 0010b532 0228
.org 0x10b534
	bls.n 0x10b560	@ 0010b534 14d9
.org 0x10b536
	ldr r3, [pc, #24]	@ 0010b536 064b
.org 0x10b538
	adds r0, r1, r3	@ 0010b538 c818
.org 0x10b53a
	ldrb r0, [r0, #0]	@ 0010b53a 0078
.org 0x10b53c
	cmp r0, #0	@ 0010b53c 0028
.org 0x10b53e
	beq.n 0x10b560	@ 0010b53e 0fd0
.org 0x10b540
	ldrb r0, [r2, #17]	@ 0010b540 507c
.org 0x10b542
	cmp r0, #0	@ 0010b542 0028
.org 0x10b544
	bne.n 0x10b554	@ 0010b544 06d1
.org 0x10b546
	movs r3, #221	@ 0010b546 dd23
.org 0x10b548
	lsls r3, r3, #4	@ 0010b548 1b01
.org 0x10b54a
	adds r0, r1, r3	@ 0010b54a c818
.org 0x10b54c
	ldrb r0, [r0, #12]	@ 0010b54c 007b
.org 0x10b54e
	b.n 0x10b55c	@ 0010b54e 05e0
.org 0x10b550
	.byte 0xf7,0x0d,0x00,0x00	@ 0010b550 data
.org 0x10b554
	movs r3, #221	@ 0010b554 dd23
.org 0x10b556
	lsls r3, r3, #4	@ 0010b556 1b01
.org 0x10b558
	adds r0, r1, r3	@ 0010b558 c818
.org 0x10b55a
	ldrb r0, [r0, #13]	@ 0010b55a 407b
.org 0x10b55c
	cmp r0, #0	@ 0010b55c 0028
.org 0x10b55e
	bne.n 0x10b56a	@ 0010b55e 04d1
.org 0x10b560
	ldrb r1, [r2, #10]	@ 0010b560 917a
.org 0x10b562
	movs r0, #254	@ 0010b562 fe20
.org 0x10b564
	ands r0, r1	@ 0010b564 0840
.org 0x10b566
	strb r0, [r2, #10]	@ 0010b566 9072
.org 0x10b568
	b.n 0x10b578	@ 0010b568 06e0
.org 0x10b56a
	ldrb r1, [r2, #10]	@ 0010b56a 917a
.org 0x10b56c
	movs r0, #1	@ 0010b56c 0120
.org 0x10b56e
	orrs r0, r1	@ 0010b56e 0843
.org 0x10b570
	strb r0, [r2, #10]	@ 0010b570 9072
.org 0x10b572
	adds r0, r2, #0	@ 0010b572 101c
.org 0x10b574
	bl 0x1cff0	@ 0010b574 11f73cfd
