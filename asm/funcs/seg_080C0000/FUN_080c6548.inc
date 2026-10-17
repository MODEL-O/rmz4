@ FUN_080c6548  entry 0x080c6548  size 164
.thumb
.org 0xc6548
FUN_080c6548:
	push {r4, r5, r6, lr}	@ 000c6548 70b5
.org 0xc654a
	mov r6, r8	@ 000c654a 4646
.org 0xc654c
	push {r6}	@ 000c654c 40b4
.org 0xc654e
	adds r4, r0, #0	@ 000c654e 041c
.org 0xc6550
	bl 0x1cc9c	@ 000c6550 56f7a4fb
.org 0xc6554
	ldrb r1, [r4, #10]	@ 000c6554 a17a
.org 0xc6556
	movs r0, #1	@ 000c6556 0120
.org 0xc6558
	orrs r0, r1	@ 000c6558 0843
.org 0xc655a
	movs r1, #2	@ 000c655a 0221
.org 0xc655c
	orrs r0, r1	@ 000c655c 0843
.org 0xc655e
	strb r0, [r4, #10]	@ 000c655e a072
.org 0xc6560
	ldr r1, [pc, #136]	@ 000c6560 2249
.org 0xc6562
	ldrb r0, [r4, #17]	@ 000c6562 607c
.org 0xc6564
	lsls r0, r0, #1	@ 000c6564 4000
.org 0xc6566
	adds r0, r0, r1	@ 000c6566 4018
.org 0xc6568
	ldrh r1, [r0, #0]	@ 000c6568 0188
.org 0xc656a
	adds r0, r4, #0	@ 000c656a 201c
.org 0xc656c
	bl 0x1cf00	@ 000c656c 56f7c8fc
.org 0xc6570
	adds r0, r4, #0	@ 000c6570 201c
.org 0xc6572
	bl 0x1cff0	@ 000c6572 56f73dfd
.org 0xc6576
	movs r6, #0	@ 000c6576 0026
.org 0xc6578
	ldrb r1, [r4, #10]	@ 000c6578 a17a
.org 0xc657a
	movs r0, #239	@ 000c657a ef20
.org 0xc657c
	ands r0, r1	@ 000c657c 0840
.org 0xc657e
	strb r0, [r4, #10]	@ 000c657e a072
.org 0xc6580
	movs r0, #1	@ 000c6580 0120
.org 0xc6582
	mov r8, r0	@ 000c6582 8046
.org 0xc6584
	adds r0, r4, #0	@ 000c6584 201c
.org 0xc6586
	adds r0, #76	@ 000c6586 4c30
.org 0xc6588
	strb r6, [r0, #0]	@ 000c6588 0670
.org 0xc658a
	adds r2, r4, #0	@ 000c658a 221c
.org 0xc658c
	adds r2, #74	@ 000c658c 4a32
.org 0xc658e
	ldrb r1, [r2, #0]	@ 000c658e 1178
.org 0xc6590
	movs r0, #17	@ 000c6590 1120
.org 0xc6592
	negs r0, r0	@ 000c6592 4042
.org 0xc6594
	ands r0, r1	@ 000c6594 0840
.org 0xc6596
	strb r0, [r2, #0]	@ 000c6596 1070
.org 0xc6598
	ldrb r1, [r4, #10]	@ 000c6598 a17a
.org 0xc659a
	movs r0, #4	@ 000c659a 0420
.org 0xc659c
	orrs r0, r1	@ 000c659c 0843
.org 0xc659e
	strb r0, [r4, #10]	@ 000c659e a072
.org 0xc65a0
	adds r5, r4, #0	@ 000c65a0 251c
.org 0xc65a2
	adds r5, #116	@ 000c65a2 7435
.org 0xc65a4
	ldr r1, [pc, #72]	@ 000c65a4 1249
.org 0xc65a6
	ldrb r0, [r4, #17]	@ 000c65a6 607c
.org 0xc65a8
	adds r0, r0, r1	@ 000c65a8 4018
.org 0xc65aa
	ldrb r0, [r0, #0]	@ 000c65aa 0078
.org 0xc65ac
	lsls r1, r0, #1	@ 000c65ac 4100
.org 0xc65ae
	adds r1, r1, r0	@ 000c65ae 0918
.org 0xc65b0
	lsls r1, r1, #3	@ 000c65b0 c900
.org 0xc65b2
	ldr r0, [pc, #64]	@ 000c65b2 1048
.org 0xc65b4
	adds r1, r1, r0	@ 000c65b4 0918
.org 0xc65b6
	adds r2, #10	@ 000c65b6 0a32
.org 0xc65b8
	adds r0, r5, #0	@ 000c65b8 281c
.org 0xc65ba
	movs r3, #8	@ 000c65ba 0823
.org 0xc65bc
	bl 0x5760	@ 000c65bc 3ff7d0f8
.org 0xc65c0
	str r4, [r5, #44]	@ 000c65c0 ec62
.org 0xc65c2
	str r6, [r5, #36]	@ 000c65c2 6e62
.org 0xc65c4
	movs r0, #53	@ 000c65c4 3520
.org 0xc65c6
	bl 0x2b10	@ 000c65c6 3cf7a3fa
.org 0xc65ca
	ldr r1, [pc, #44]	@ 000c65ca 0b49
.org 0xc65cc
	ldrb r0, [r4, #9]	@ 000c65cc 607a
.org 0xc65ce
	lsls r0, r0, #2	@ 000c65ce 8000
.org 0xc65d0
	adds r0, r0, r1	@ 000c65d0 4018
.org 0xc65d2
	mov r1, r8	@ 000c65d2 4146
.org 0xc65d4
	str r1, [r4, #12]	@ 000c65d4 e160
.org 0xc65d6
	ldr r0, [r0, #0]	@ 000c65d6 0068
.org 0xc65d8
	ldr r0, [r0, #4]	@ 000c65d8 4068
.org 0xc65da
	str r0, [r4, #20]	@ 000c65da 6061
.org 0xc65dc
	adds r0, r4, #0	@ 000c65dc 201c
.org 0xc65de
	bl 0xc6518	@ 000c65de fff79bff
.org 0xc65e2
	pop {r3}	@ 000c65e2 08bc
.org 0xc65e4
	mov r8, r3	@ 000c65e4 9846
.org 0xc65e6
	pop {r4, r5, r6}	@ 000c65e6 70bc
.org 0xc65e8
	pop {r0}	@ 000c65e8 01bc
.org 0xc65ea
	bx r0	@ 000c65ea 0047
