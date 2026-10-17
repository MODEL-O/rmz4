@ FUN_080e853c  entry 0x080e853c  size 110
.thumb
.org 0xe853c
FUN_080e853c:
	push {r4, lr}	@ 000e853c 10b5
.org 0xe853e
	adds r4, r0, #0	@ 000e853e 041c
.org 0xe8540
	ldrb r0, [r4, #18]	@ 000e8540 a07c
.org 0xe8542
	subs r1, r0, #1	@ 000e8542 411e
.org 0xe8544
	strb r1, [r4, #18]	@ 000e8544 a174
.org 0xe8546
	lsls r0, r1, #24	@ 000e8546 0806
.org 0xe8548
	cmp r0, #0	@ 000e8548 0028
.org 0xe854a
	bne.n 0xe856c	@ 000e854a 0fd1
.org 0xe854c
	ldr r1, [pc, #24]	@ 000e854c 0649
.org 0xe854e
	ldrb r0, [r4, #9]	@ 000e854e 607a
.org 0xe8550
	lsls r0, r0, #2	@ 000e8550 8000
.org 0xe8552
	adds r0, r0, r1	@ 000e8552 4018
.org 0xe8554
	movs r1, #2	@ 000e8554 0221
.org 0xe8556
	str r1, [r4, #12]	@ 000e8556 e160
.org 0xe8558
	ldr r0, [r0, #0]	@ 000e8558 0068
.org 0xe855a
	ldr r0, [r0, #8]	@ 000e855a 8068
.org 0xe855c
	str r0, [r4, #20]	@ 000e855c 6061
.org 0xe855e
	adds r0, r4, #0	@ 000e855e 201c
.org 0xe8560
	bl 0xe85b0	@ 000e8560 00f026f8
.org 0xe8564
	b.n 0xe85aa	@ 000e8564 21e0
.org 0xe8566
	.byte 0x00	@ 000e8566 data
.org 0xe8567
	.byte 0x00	@ 000e8567 data
.org 0xe8568
	.byte 0x64,0x6f,0x86,0x08	@ 000e8568 data
.org 0xe856c
	lsls r0, r1, #24	@ 000e856c 0806
.org 0xe856e
	lsrs r0, r0, #24	@ 000e856e 000e
.org 0xe8570
	cmp r0, #7	@ 000e8570 0728
.org 0xe8572
	bhi.n 0xe858c	@ 000e8572 0bd8
.org 0xe8574
	movs r0, #1	@ 000e8574 0120
.org 0xe8576
	ands r1, r0	@ 000e8576 0140
.org 0xe8578
	cmp r1, #0	@ 000e8578 0029
.org 0xe857a
	beq.n 0xe8584	@ 000e857a 03d0
.org 0xe857c
	ldrb r0, [r4, #10]	@ 000e857c a07a
.org 0xe857e
	movs r1, #1	@ 000e857e 0121
.org 0xe8580
	orrs r0, r1	@ 000e8580 0843
.org 0xe8582
	b.n 0xe858a	@ 000e8582 02e0
.org 0xe8584
	ldrb r1, [r4, #10]	@ 000e8584 a17a
.org 0xe8586
	movs r0, #254	@ 000e8586 fe20
.org 0xe8588
	ands r0, r1	@ 000e8588 0840
.org 0xe858a
	strb r0, [r4, #10]	@ 000e858a a072
.org 0xe858c
	adds r0, r4, #0	@ 000e858c 201c
.org 0xe858e
	bl 0x1cff0	@ 000e858e 34f72ffd
.org 0xe8592
	ldr r0, [r4, #88]	@ 000e8592 a06d
.org 0xe8594
	ldr r1, [r4, #96]	@ 000e8594 216e
.org 0xe8596
	adds r0, r0, r1	@ 000e8596 4018
.org 0xe8598
	str r0, [r4, #88]	@ 000e8598 a065
.org 0xe859a
	ldr r0, [r4, #104]	@ 000e859a a06e
.org 0xe859c
	adds r1, r1, r0	@ 000e859c 0918
.org 0xe859e
	str r1, [r4, #96]	@ 000e859e 2166
.org 0xe85a0
	movs r0, #224	@ 000e85a0 e020
.org 0xe85a2
	lsls r0, r0, #3	@ 000e85a2 c000
.org 0xe85a4
	cmp r1, r0	@ 000e85a4 8142
.org 0xe85a6
	ble.n 0xe85aa	@ 000e85a6 00dd
.org 0xe85a8
	str r0, [r4, #96]	@ 000e85a8 2066
