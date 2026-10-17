@ FUN_080a3698  entry 0x080a3698  size 158
.thumb
.org 0xa3698
FUN_080a3698:
	push {r4, r5, r6, lr}	@ 000a3698 70b5
.org 0xa369a
	adds r4, r0, #0	@ 000a369a 041c
.org 0xa369c
	ldr r5, [r4, #40]	@ 000a369c a56a
.org 0xa369e
	ldr r6, [r4, #44]	@ 000a369e e66a
.org 0xa36a0
	ldrb r1, [r4, #13]	@ 000a36a0 617b
.org 0xa36a2
	cmp r1, #0	@ 000a36a2 0029
.org 0xa36a4
	beq.n 0xa36ac	@ 000a36a4 02d0
.org 0xa36a6
	cmp r1, #1	@ 000a36a6 0129
.org 0xa36a8
	beq.n 0xa3718	@ 000a36a8 36d0
.org 0xa36aa
	b.n 0xa3738	@ 000a36aa 45e0
.org 0xa36ac
	ldrb r1, [r4, #17]	@ 000a36ac 617c
.org 0xa36ae
	adds r0, r5, #0	@ 000a36ae 281c
.org 0xa36b0
	adds r0, #212	@ 000a36b0 d430
.org 0xa36b2
	adds r0, r0, r1	@ 000a36b2 4018
.org 0xa36b4
	ldrb r0, [r0, #0]	@ 000a36b4 0078
.org 0xa36b6
	cmp r0, #0	@ 000a36b6 0028
.org 0xa36b8
	beq.n 0xa36c4	@ 000a36b8 04d0
.org 0xa36ba
	ldr r2, [pc, #4]	@ 000a36ba 014a
.org 0xa36bc
	b.n 0xa36c6	@ 000a36bc 03e0
.org 0xa36be
	.byte 0x00	@ 000a36be data
.org 0xa36bf
	.byte 0x00	@ 000a36bf data
.org 0xa36c0
	.byte 0x0d,0x87,0x00,0x00	@ 000a36c0 data
.org 0xa36c4
	ldr r2, [pc, #72]	@ 000a36c4 124a
.org 0xa36c6
	adds r0, r1, r2	@ 000a36c6 8818
.org 0xa36c8
	lsls r0, r0, #16	@ 000a36c8 0004
.org 0xa36ca
	lsrs r2, r0, #16	@ 000a36ca 020c
.org 0xa36cc
	ldrb r0, [r4, #30]	@ 000a36cc a07f
.org 0xa36ce
	lsls r0, r0, #8	@ 000a36ce 0002
.org 0xa36d0
	adds r1, r4, #0	@ 000a36d0 211c
.org 0xa36d2
	adds r1, #112	@ 000a36d2 7031
.org 0xa36d4
	ldrb r1, [r1, #0]	@ 000a36d4 0978
.org 0xa36d6
	orrs r0, r1	@ 000a36d6 0843
.org 0xa36d8
	cmp r0, r2	@ 000a36d8 9042
.org 0xa36da
	beq.n 0xa36e4	@ 000a36da 03d0
.org 0xa36dc
	adds r0, r4, #0	@ 000a36dc 201c
.org 0xa36de
	adds r1, r2, #0	@ 000a36de 111c
.org 0xa36e0
	bl 0x1cf00	@ 000a36e0 79f70efc
.org 0xa36e4
	ldrb r0, [r6, #12]	@ 000a36e4 307b
.org 0xa36e6
	cmp r0, #1	@ 000a36e6 0128
.org 0xa36e8
	bls.n 0xa3738	@ 000a36e8 26d9
.org 0xa36ea
	ldr r0, [pc, #40]	@ 000a36ea 0a48
.org 0xa36ec
	adds r1, r0, #0	@ 000a36ec 011c
.org 0xa36ee
	ldrb r2, [r4, #17]	@ 000a36ee 627c
.org 0xa36f0
	adds r1, r1, r2	@ 000a36f0 8918
.org 0xa36f2
	lsls r1, r1, #16	@ 000a36f2 0904
.org 0xa36f4
	lsrs r1, r1, #16	@ 000a36f4 090c
.org 0xa36f6
	adds r0, r4, #0	@ 000a36f6 201c
.org 0xa36f8
	bl 0x1cf00	@ 000a36f8 79f702fc
.org 0xa36fc
	ldrb r1, [r4, #11]	@ 000a36fc e17a
.org 0xa36fe
	movs r0, #16	@ 000a36fe 1020
.org 0xa3700
	orrs r0, r1	@ 000a3700 0843
.org 0xa3702
	strb r0, [r4, #11]	@ 000a3702 e072
.org 0xa3704
	ldrb r0, [r5, #28]	@ 000a3704 287f
.org 0xa3706
	strb r0, [r4, #29]	@ 000a3706 6077
.org 0xa3708
	ldrb r0, [r4, #13]	@ 000a3708 607b
.org 0xa370a
	adds r0, #1	@ 000a370a 0130
.org 0xa370c
	strb r0, [r4, #13]	@ 000a370c 6073
.org 0xa370e
	b.n 0xa3738	@ 000a370e 13e0
.org 0xa3710
	.byte 0x09,0x87,0x00,0x00	@ 000a3710 data
.org 0xa3714
	.byte 0x11,0x87,0x00,0x00	@ 000a3714 data
.org 0xa3718
	ldrb r0, [r5, #10]	@ 000a3718 a87a
.org 0xa371a
	ands r1, r0	@ 000a371a 0140
.org 0xa371c
	cmp r1, #0	@ 000a371c 0029
.org 0xa371e
	bne.n 0xa3738	@ 000a371e 0bd1
.org 0xa3720
	ldr r1, [pc, #32]	@ 000a3720 0849
.org 0xa3722
	ldrb r0, [r4, #9]	@ 000a3722 607a
.org 0xa3724
	lsls r0, r0, #2	@ 000a3724 8000
.org 0xa3726
	adds r0, r0, r1	@ 000a3726 4018
.org 0xa3728
	movs r1, #2	@ 000a3728 0221
.org 0xa372a
	str r1, [r4, #12]	@ 000a372a e160
.org 0xa372c
	ldr r0, [r0, #0]	@ 000a372c 0068
.org 0xa372e
	ldr r0, [r0, #8]	@ 000a372e 8068
.org 0xa3730
	str r0, [r4, #20]	@ 000a3730 6061
.org 0xa3732
	adds r0, r4, #0	@ 000a3732 201c
.org 0xa3734
	bl 0xa32fc	@ 000a3734 fff7e2fd
