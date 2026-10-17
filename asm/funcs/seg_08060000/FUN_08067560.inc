@ FUN_08067560  entry 0x08067560  size 80
.thumb
.org 0x67560
FUN_08067560:
	push {r4, lr}	@ 00067560 10b5
.org 0x67562
	adds r4, r0, #0	@ 00067562 041c
.org 0x67564
	ldrb r0, [r4, #14]	@ 00067564 a07b
.org 0x67566
	cmp r0, #0	@ 00067566 0028
.org 0x67568
	bne.n 0x67592	@ 00067568 13d1
.org 0x6756a
	ldr r1, [pc, #68]	@ 0006756a 1149
.org 0x6756c
	adds r0, r4, #0	@ 0006756c 201c
.org 0x6756e
	bl 0x1cf00	@ 0006756e b5f7c7fc
.org 0x67572
	adds r0, r4, #0	@ 00067572 201c
.org 0x67574
	adds r0, #116	@ 00067574 7430
.org 0x67576
	ldr r1, [pc, #60]	@ 00067576 0f49
.org 0x67578
	bl 0x5784	@ 00067578 9ef704f9
.org 0x6757c
	movs r0, #99	@ 0006757c 6320
.org 0x6757e
	bl 0x2b10	@ 0006757e 9bf7c7fa
.org 0x67582
	adds r1, r4, #0	@ 00067582 211c
.org 0x67584
	adds r1, #84	@ 00067584 5431
.org 0x67586
	movs r0, #16	@ 00067586 1020
.org 0x67588
	bl 0x1fe64	@ 00067588 b8f76cfc
.org 0x6758c
	ldrb r0, [r4, #14]	@ 0006758c a07b
.org 0x6758e
	adds r0, #1	@ 0006758e 0130
.org 0x67590
	strb r0, [r4, #14]	@ 00067590 a073
.org 0x67592
	adds r0, r4, #0	@ 00067592 201c
.org 0x67594
	bl 0x1cff0	@ 00067594 b5f72cfd
.org 0x67598
	adds r0, r4, #0	@ 00067598 201c
.org 0x6759a
	adds r0, #115	@ 0006759a 7330
.org 0x6759c
	ldrb r0, [r0, #0]	@ 0006759c 0078
.org 0x6759e
	cmp r0, #3	@ 0006759e 0328
.org 0x675a0
	bne.n 0x675aa	@ 000675a0 03d1
.org 0x675a2
	movs r1, #0	@ 000675a2 0021
.org 0x675a4
	movs r0, #11	@ 000675a4 0b20
.org 0x675a6
	strb r0, [r4, #13]	@ 000675a6 6073
.org 0x675a8
	strb r1, [r4, #14]	@ 000675a8 a173
.org 0x675aa
	pop {r4}	@ 000675aa 10bc
.org 0x675ac
	pop {r0}	@ 000675ac 01bc
.org 0x675ae
	bx r0	@ 000675ae 0047
