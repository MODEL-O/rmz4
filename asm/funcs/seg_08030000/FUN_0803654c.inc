@ FUN_0803654c  entry 0x0803654c  size 122
.thumb
.org 0x3654c
FUN_0803654c:
	push {r4, r5, lr}	@ 0003654c 30b5
.org 0x3654e
	adds r5, r0, #0	@ 0003654e 051c
.org 0x36550
	movs r0, #129	@ 00036550 8120
.org 0x36552
	lsls r0, r0, #1	@ 00036552 4000
.org 0x36554
	adds r4, r5, r0	@ 00036554 2c18
.org 0x36556
	ldrb r0, [r4, #0]	@ 00036556 2078
.org 0x36558
	cmp r0, #0	@ 00036558 0028
.org 0x3655a
	bne.n 0x36572	@ 0003655a 0ad1
.org 0x3655c
	ldr r1, [pc, #76]	@ 0003655c 1349
.org 0x3655e
	adds r0, r5, #0	@ 0003655e 281c
.org 0x36560
	bl 0x1cf00	@ 00036560 e6f7cefc
.org 0x36564
	ldr r0, [pc, #72]	@ 00036564 1248
.org 0x36566
	adds r1, r5, r0	@ 00036566 2918
.org 0x36568
	movs r0, #4	@ 00036568 0420
.org 0x3656a
	strb r0, [r1, #0]	@ 0003656a 0870
.org 0x3656c
	ldrb r0, [r4, #0]	@ 0003656c 2078
.org 0x3656e
	adds r0, #1	@ 0003656e 0130
.org 0x36570
	strb r0, [r4, #0]	@ 00036570 2070
.org 0x36572
	ldr r4, [pc, #56]	@ 00036572 0e4c
.org 0x36574
	adds r0, r5, #0	@ 00036574 281c
.org 0x36576
	adds r1, r4, #0	@ 00036576 211c
.org 0x36578
	bl 0x3a3b0	@ 00036578 03f01aff
.org 0x3657c
	adds r0, r5, #0	@ 0003657c 281c
.org 0x3657e
	adds r1, r4, #0	@ 0003657e 211c
.org 0x36580
	bl 0x3a3f0	@ 00036580 03f036ff
.org 0x36584
	ldr r0, [pc, #40]	@ 00036584 0a48
.org 0x36586
	adds r1, r5, r0	@ 00036586 2918
.org 0x36588
	ldrb r0, [r1, #0]	@ 00036588 0878
.org 0x3658a
	subs r0, #1	@ 0003658a 0138
.org 0x3658c
	strb r0, [r1, #0]	@ 0003658c 0870
.org 0x3658e
	lsls r0, r0, #24	@ 0003658e 0006
.org 0x36590
	lsrs r0, r0, #24	@ 00036590 000e
.org 0x36592
	cmp r0, #255	@ 00036592 ff28
.org 0x36594
	bne.n 0x365ce	@ 00036594 1bd1
.org 0x36596
	ldrb r0, [r5, #14]	@ 00036596 a87b
.org 0x36598
	cmp r0, #1	@ 00036598 0128
.org 0x3659a
	bne.n 0x365b8	@ 0003659a 0dd1
.org 0x3659c
	ldr r1, [pc, #20]	@ 0003659c 0549
.org 0x3659e
	adds r0, r5, #0	@ 0003659e 281c
.org 0x365a0
	movs r2, #2	@ 000365a0 0222
.org 0x365a2
	movs r3, #1	@ 000365a2 0123
.org 0x365a4
	bl 0x1cfc8	@ 000365a4 e6f710fd
.org 0x365a8
	b.n 0x365c4	@ 000365a8 0ce0
.org 0x365aa
	.byte 0x00	@ 000365aa data
.org 0x365ab
	.byte 0x00	@ 000365ab data
.org 0x365ac
	.byte 0x08,0x28,0x00,0x00	@ 000365ac data
.org 0x365b0
	.byte 0x51,0x01,0x00,0x00	@ 000365b0 data
.org 0x365b4
	.byte 0x03,0x04,0x00,0x00	@ 000365b4 data
.org 0x365b8
	ldr r1, [pc, #24]	@ 000365b8 0649
.org 0x365ba
	adds r0, r5, #0	@ 000365ba 281c
.org 0x365bc
	movs r2, #2	@ 000365bc 0222
.org 0x365be
	movs r3, #1	@ 000365be 0123
.org 0x365c0
	bl 0x1cfc8	@ 000365c0 e6f702fd
.org 0x365c4
	movs r0, #128	@ 000365c4 8020
