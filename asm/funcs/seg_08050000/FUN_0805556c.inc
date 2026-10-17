@ FUN_0805556c  entry 0x0805556c  size 190
.thumb
.org 0x5556c
FUN_0805556c:
	push {r4, r5, lr}	@ 0005556c 30b5
.org 0x5556e
	adds r5, r0, #0	@ 0005556e 051c
.org 0x55570
	ldrb r0, [r5, #15]	@ 00055570 e87b
.org 0x55572
	cmp r0, #0	@ 00055572 0028
.org 0x55574
	bne.n 0x555a8	@ 00055574 18d1
.org 0x55576
	ldr r1, [pc, #180]	@ 00055576 2d49
.org 0x55578
	adds r0, r5, #0	@ 00055578 281c
.org 0x5557a
	bl 0x1cf00	@ 0005557a c7f7c1fc
.org 0x5557e
	ldr r0, [r5, #84]	@ 0005557e 686d
.org 0x55580
	adds r4, r5, #0	@ 00055580 2c1c
.org 0x55582
	adds r4, #188	@ 00055582 bc34
.org 0x55584
	ldr r1, [r4, #0]	@ 00055584 2168
.org 0x55586
	bl 0x8534	@ 00055586 b2f7d5ff
.org 0x5558a
	str r0, [r4, #0]	@ 0005558a 2060
.org 0x5558c
	ldr r2, [pc, #160]	@ 0005558c 284a
.org 0x5558e
	adds r1, r5, #0	@ 0005558e 291c
.org 0x55590
	adds r1, #181	@ 00055590 b531
.org 0x55592
	ldrb r1, [r1, #0]	@ 00055592 0978
.org 0x55594
	lsls r1, r1, #1	@ 00055594 4900
.org 0x55596
	adds r1, r1, r2	@ 00055596 8918
.org 0x55598
	movs r2, #0	@ 00055598 0022
.org 0x5559a
	ldrsh r1, [r1, r2]	@ 0005559a 895e
.org 0x5559c
	lsls r1, r1, #1	@ 0005559c 4900
.org 0x5559e
	adds r0, r0, r1	@ 0005559e 4018
.org 0x555a0
	str r0, [r5, #88]	@ 000555a0 a865
.org 0x555a2
	ldrb r0, [r5, #15]	@ 000555a2 e87b
.org 0x555a4
	adds r0, #1	@ 000555a4 0130
.org 0x555a6
	strb r0, [r5, #15]	@ 000555a6 e873
.org 0x555a8
	adds r0, r5, #0	@ 000555a8 281c
.org 0x555aa
	bl 0x1cff0	@ 000555aa c7f721fd
.org 0x555ae
	adds r0, r5, #0	@ 000555ae 281c
.org 0x555b0
	adds r0, #116	@ 000555b0 7430
.org 0x555b2
	ldr r3, [pc, #128]	@ 000555b2 204b
.org 0x555b4
	ldrb r1, [r5, #30]	@ 000555b4 a97f
.org 0x555b6
	lsls r1, r1, #8	@ 000555b6 0902
.org 0x555b8
	adds r2, r5, #0	@ 000555b8 2a1c
.org 0x555ba
	adds r2, #112	@ 000555ba 7032
.org 0x555bc
	ldrb r2, [r2, #0]	@ 000555bc 1278
.org 0x555be
	orrs r1, r2	@ 000555be 1143
.org 0x555c0
	ldr r2, [pc, #116]	@ 000555c0 1d4a
.org 0x555c2
	adds r1, r1, r2	@ 000555c2 8918
.org 0x555c4
	lsls r1, r1, #2	@ 000555c4 8900
.org 0x555c6
	adds r1, r1, r3	@ 000555c6 c918
.org 0x555c8
	adds r2, r5, #0	@ 000555c8 2a1c
.org 0x555ca
	adds r2, #113	@ 000555ca 7132
.org 0x555cc
	ldrb r2, [r2, #0]	@ 000555cc 1278
.org 0x555ce
	lsls r2, r2, #24	@ 000555ce 1206
.org 0x555d0
	asrs r2, r2, #24	@ 000555d0 1216
.org 0x555d2
	ldr r1, [r1, #0]	@ 000555d2 0968
.org 0x555d4
	lsls r2, r2, #2	@ 000555d4 9200
.org 0x555d6
	adds r2, r2, r1	@ 000555d6 5218
.org 0x555d8
	ldr r1, [r2, #0]	@ 000555d8 1168
.org 0x555da
	ldrb r2, [r1, #0]	@ 000555da 0a78
.org 0x555dc
	lsls r1, r2, #1	@ 000555dc 5100
.org 0x555de
	adds r1, r1, r2	@ 000555de 8918
.org 0x555e0
	lsls r1, r1, #3	@ 000555e0 c900
.org 0x555e2
	ldr r2, [pc, #88]	@ 000555e2 164a
.org 0x555e4
	adds r1, r1, r2	@ 000555e4 8918
.org 0x555e6
	bl 0x5784	@ 000555e6 b0f7cdf8
.org 0x555ea
	ldr r0, [r5, #24]	@ 000555ea a869
.org 0x555ec
	ldrb r1, [r0, #9]	@ 000555ec 417a
.org 0x555ee
	movs r4, #1	@ 000555ee 0124
.org 0x555f0
	adds r0, r4, #0	@ 000555f0 201c
.org 0x555f2
	ands r0, r1	@ 000555f2 0840
.org 0x555f4
	cmp r0, #0	@ 000555f4 0028
.org 0x555f6
	beq.n 0x55624	@ 000555f6 15d0
.org 0x555f8
	adds r0, r5, #0	@ 000555f8 281c
.org 0x555fa
	bl 0x59be8	@ 000555fa 04f0f5fa
.org 0x555fe
	adds r1, r5, #0	@ 000555fe 291c
.org 0x55600
	adds r1, #204	@ 00055600 cc31
.org 0x55602
	str r0, [r1, #0]	@ 00055602 0860
.org 0x55604
	movs r1, #240	@ 00055604 f021
.org 0x55606
	lsls r1, r1, #8	@ 00055606 0902
.org 0x55608
	adds r0, r0, r1	@ 00055608 4018
.org 0x5560a
	ldr r1, [r5, #88]	@ 0005560a a96d
.org 0x5560c
	ldr r2, [pc, #48]	@ 0005560c 0c4a
.org 0x5560e
	adds r1, r1, r2	@ 0005560e 8918
.org 0x55610
	bl 0x8534	@ 00055610 b2f790ff
.org 0x55614
	adds r1, r5, #0	@ 00055614 291c
.org 0x55616
	adds r1, #184	@ 00055616 b831
.org 0x55618
	ldr r2, [pc, #40]	@ 00055618 0a4a
.org 0x5561a
	adds r0, r0, r2	@ 0005561a 8018
.org 0x5561c
	str r0, [r1, #0]	@ 0005561c 0860
.org 0x5561e
	movs r0, #0	@ 0005561e 0020
.org 0x55620
	strb r4, [r5, #14]	@ 00055620 ac73
.org 0x55622
	strb r0, [r5, #15]	@ 00055622 e873
.org 0x55624
	pop {r4, r5}	@ 00055624 30bc
.org 0x55626
	pop {r0}	@ 00055626 01bc
.org 0x55628
	bx r0	@ 00055628 0047
