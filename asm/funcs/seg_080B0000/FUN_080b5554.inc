@ FUN_080b5554  entry 0x080b5554  size 68
.thumb
.org 0xb5554
FUN_080b5554:
	push {r4, r5, lr}	@ 000b5554 30b5
.org 0xb5556
	adds r4, r0, #0	@ 000b5556 041c
.org 0xb5558
	adds r5, r4, #0	@ 000b5558 251c
.org 0xb555a
	adds r5, #192	@ 000b555a c035
.org 0xb555c
	ldr r0, [r5, #0]	@ 000b555c 2868
.org 0xb555e
	cmp r0, #0	@ 000b555e 0028
.org 0xb5560
	bne.n 0xb5592	@ 000b5560 17d1
.org 0xb5562
	adds r0, r4, #0	@ 000b5562 201c
.org 0xb5564
	adds r0, #140	@ 000b5564 8c30
.org 0xb5566
	ldr r0, [r0, #0]	@ 000b5566 0068
.org 0xb5568
	movs r1, #1	@ 000b5568 0121
.org 0xb556a
	ands r0, r1	@ 000b556a 0840
.org 0xb556c
	cmp r0, #0	@ 000b556c 0028
.org 0xb556e
	beq.n 0xb5592	@ 000b556e 10d0
.org 0xb5570
	ldr r2, [pc, #36]	@ 000b5570 094a
.org 0xb5572
	movs r0, #0	@ 000b5572 0020
.org 0xb5574
	adds r1, r4, #0	@ 000b5574 211c
.org 0xb5576
	bl 0x2adac	@ 000b5576 75f719fc
.org 0xb557a
	str r0, [r5, #0]	@ 000b557a 2860
.org 0xb557c
	cmp r0, #0	@ 000b557c 0028
.org 0xb557e
	beq.n 0xb5592	@ 000b557e 08d0
.org 0xb5580
	adds r0, r4, #0	@ 000b5580 201c
.org 0xb5582
	adds r0, #116	@ 000b5582 7430
.org 0xb5584
	ldr r1, [pc, #20]	@ 000b5584 0549
.org 0xb5586
	bl 0x5784	@ 000b5586 50f7fdf8
.org 0xb558a
	ldr r1, [pc, #20]	@ 000b558a 0549
.org 0xb558c
	adds r0, r4, #0	@ 000b558c 201c
.org 0xb558e
	bl 0x1cf00	@ 000b558e 67f7b7fc
.org 0xb5592
	pop {r4, r5}	@ 000b5592 30bc
.org 0xb5594
	pop {r0}	@ 000b5594 01bc
.org 0xb5596
	bx r0	@ 000b5596 0047
