@ FUN_080d8570  entry 0x080d8570  size 192
.thumb
.org 0xd8570
FUN_080d8570:
	push {r4, r5, r6, r7, lr}	@ 000d8570 f0b5
.org 0xd8572
	adds r5, r0, #0	@ 000d8572 051c
.org 0xd8574
	ldrb r0, [r5, #17]	@ 000d8574 687c
.org 0xd8576
	movs r1, #1	@ 000d8576 0121
.org 0xd8578
	movs r3, #1	@ 000d8578 0123
.org 0xd857a
	adds r4, r3, #0	@ 000d857a 1c1c
.org 0xd857c
	ands r4, r0	@ 000d857c 0440
.org 0xd857e
	lsrs r6, r0, #1	@ 000d857e 4608
.org 0xd8580
	ands r6, r1	@ 000d8580 0e40
.org 0xd8582
	ldr r2, [pc, #80]	@ 000d8582 144a
.org 0xd8584
	ldrb r0, [r5, #9]	@ 000d8584 687a
.org 0xd8586
	lsls r0, r0, #2	@ 000d8586 8000
.org 0xd8588
	adds r0, r0, r2	@ 000d8588 8018
.org 0xd858a
	str r3, [r5, #12]	@ 000d858a eb60
.org 0xd858c
	ldr r0, [r0, #0]	@ 000d858c 0068
.org 0xd858e
	ldr r0, [r0, #4]	@ 000d858e 4068
.org 0xd8590
	str r0, [r5, #20]	@ 000d8590 6861
.org 0xd8592
	ldrb r0, [r5, #10]	@ 000d8592 a87a
.org 0xd8594
	movs r7, #0	@ 000d8594 0027
.org 0xd8596
	orrs r1, r0	@ 000d8596 0143
.org 0xd8598
	movs r0, #2	@ 000d8598 0220
.org 0xd859a
	orrs r1, r0	@ 000d859a 0143
.org 0xd859c
	strb r1, [r5, #10]	@ 000d859c a972
.org 0xd859e
	lsls r1, r4, #1	@ 000d859e 6100
.org 0xd85a0
	subs r3, r3, r1	@ 000d85a0 5b1a
.org 0xd85a2
	lsls r0, r3, #1	@ 000d85a2 5800
.org 0xd85a4
	adds r0, r0, r3	@ 000d85a4 c018
.org 0xd85a6
	lsls r0, r0, #5	@ 000d85a6 4001
.org 0xd85a8
	str r0, [r5, #92]	@ 000d85a8 e865
.org 0xd85aa
	subs r1, #1	@ 000d85aa 0139
.org 0xd85ac
	lsls r1, r1, #2	@ 000d85ac 8900
.org 0xd85ae
	str r1, [r5, #100]	@ 000d85ae 6966
.org 0xd85b0
	movs r0, #24	@ 000d85b0 1820
.org 0xd85b2
	strb r0, [r5, #18]	@ 000d85b2 a874
.org 0xd85b4
	adds r0, r5, #0	@ 000d85b4 281c
.org 0xd85b6
	adds r0, #116	@ 000d85b6 7430
.org 0xd85b8
	strb r4, [r0, #0]	@ 000d85b8 0470
.org 0xd85ba
	adds r0, r5, #0	@ 000d85ba 281c
.org 0xd85bc
	bl 0x1cc9c	@ 000d85bc 44f76efb
.org 0xd85c0
	ldr r1, [pc, #20]	@ 000d85c0 0549
.org 0xd85c2
	adds r0, r5, #0	@ 000d85c2 281c
.org 0xd85c4
	bl 0x1cf00	@ 000d85c4 44f79cfc
.org 0xd85c8
	cmp r4, #0	@ 000d85c8 002c
.org 0xd85ca
	beq.n 0xd85dc	@ 000d85ca 07d0
.org 0xd85cc
	ldrb r0, [r5, #10]	@ 000d85cc a87a
.org 0xd85ce
	movs r1, #16	@ 000d85ce 1021
.org 0xd85d0
	orrs r0, r1	@ 000d85d0 0843
.org 0xd85d2
	b.n 0xd85e2	@ 000d85d2 06e0
.org 0xd85d4
	.byte 0x64,0x6f,0x86,0x08	@ 000d85d4 data
.org 0xd85d8
	.byte 0x13,0x1d,0x00,0x00	@ 000d85d8 data
.org 0xd85dc
	ldrb r1, [r5, #10]	@ 000d85dc a97a
.org 0xd85de
	movs r0, #239	@ 000d85de ef20
.org 0xd85e0
	ands r0, r1	@ 000d85e0 0840
.org 0xd85e2
	strb r0, [r5, #10]	@ 000d85e2 a872
.org 0xd85e4
	adds r1, r4, #0	@ 000d85e4 211c
.org 0xd85e6
	adds r0, r5, #0	@ 000d85e6 281c
.org 0xd85e8
	adds r0, #76	@ 000d85e8 4c30
.org 0xd85ea
	strb r1, [r0, #0]	@ 000d85ea 0170
.org 0xd85ec
	adds r2, r5, #0	@ 000d85ec 2a1c
.org 0xd85ee
	adds r2, #74	@ 000d85ee 4a32
.org 0xd85f0
	lsls r1, r1, #4	@ 000d85f0 0901
.org 0xd85f2
	ldrb r3, [r2, #0]	@ 000d85f2 1378
.org 0xd85f4
	movs r0, #17	@ 000d85f4 1120
.org 0xd85f6
	negs r0, r0	@ 000d85f6 4042
.org 0xd85f8
	ands r0, r3	@ 000d85f8 1840
.org 0xd85fa
	orrs r0, r1	@ 000d85fa 0843
.org 0xd85fc
	strb r0, [r2, #0]	@ 000d85fc 1070
.org 0xd85fe
	adds r3, r6, #0	@ 000d85fe 331c
.org 0xd8600
	adds r4, r2, #0	@ 000d8600 141c
.org 0xd8602
	cmp r3, #0	@ 000d8602 002b
.org 0xd8604
	beq.n 0xd860e	@ 000d8604 03d0
.org 0xd8606
	ldrb r0, [r5, #10]	@ 000d8606 a87a
.org 0xd8608
	movs r1, #32	@ 000d8608 2021
.org 0xd860a
	orrs r0, r1	@ 000d860a 0843
.org 0xd860c
	b.n 0xd8614	@ 000d860c 02e0
.org 0xd860e
	ldrb r1, [r5, #10]	@ 000d860e a97a
.org 0xd8610
	movs r0, #223	@ 000d8610 df20
.org 0xd8612
	ands r0, r1	@ 000d8612 0840
.org 0xd8614
	strb r0, [r5, #10]	@ 000d8614 a872
.org 0xd8616
	adds r0, r3, #0	@ 000d8616 181c
.org 0xd8618
	adds r2, r5, #0	@ 000d8618 2a1c
.org 0xd861a
	adds r2, #77	@ 000d861a 4d32
.org 0xd861c
	strb r0, [r2, #0]	@ 000d861c 1070
.org 0xd861e
	lsls r0, r0, #5	@ 000d861e 4001
.org 0xd8620
	ldrb r2, [r4, #0]	@ 000d8620 2278
.org 0xd8622
	movs r1, #33	@ 000d8622 2121
.org 0xd8624
	negs r1, r1	@ 000d8624 4942
.org 0xd8626
	ands r1, r2	@ 000d8626 1140
.org 0xd8628
	orrs r1, r0	@ 000d8628 0143
.org 0xd862a
	strb r1, [r4, #0]	@ 000d862a 2170
.org 0xd862c
	adds r0, r5, #0	@ 000d862c 281c
.org 0xd862e
	bl 0xd8710	@ 000d862e 00f06ff8
