@ FUN_080b6518  entry 0x080b6518  size 54
.thumb
.org 0xb6518
FUN_080b6518:
	push {r4, lr}	@ 000b6518 10b5
.org 0xb651a
	ldr r4, [r0, #44]	@ 000b651a c46a
.org 0xb651c
	ldr r1, [r0, #20]	@ 000b651c 4169
.org 0xb651e
	movs r0, #1	@ 000b651e 0120
.org 0xb6520
	ands r0, r1	@ 000b6520 0840
.org 0xb6522
	cmp r0, #0	@ 000b6522 0028
.org 0xb6524
	beq.n 0xb6548	@ 000b6524 10d0
.org 0xb6526
	ldr r0, [pc, #40]	@ 000b6526 0a48
.org 0xb6528
	ldr r2, [r0, #0]	@ 000b6528 0268
.org 0xb652a
	movs r0, #128	@ 000b652a 8020
.org 0xb652c
	lsls r0, r0, #10	@ 000b652c 8002
.org 0xb652e
	ands r1, r0	@ 000b652e 0140
.org 0xb6530
	cmp r1, #0	@ 000b6530 0029
.org 0xb6532
	beq.n 0xb6548	@ 000b6532 09d0
.org 0xb6534
	cmp r2, #0	@ 000b6534 002a
.org 0xb6536
	beq.n 0xb6548	@ 000b6536 07d0
.org 0xb6538
	adds r0, r2, #0	@ 000b6538 101c
.org 0xb653a
	movs r1, #7	@ 000b653a 0721
.org 0xb653c
	movs r2, #3	@ 000b653c 0322
.org 0xb653e
	bl 0x3a578	@ 000b653e 84f71bf8
.org 0xb6542
	adds r1, r4, #0	@ 000b6542 211c
.org 0xb6544
	adds r1, #180	@ 000b6544 b431
.org 0xb6546
	strb r0, [r1, #0]	@ 000b6546 0870
.org 0xb6548
	pop {r4}	@ 000b6548 10bc
.org 0xb654a
	pop {r0}	@ 000b654a 01bc
.org 0xb654c
	bx r0	@ 000b654c 0047
