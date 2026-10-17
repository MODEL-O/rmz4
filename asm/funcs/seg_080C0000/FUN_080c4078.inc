@ FUN_080c4078  entry 0x080c4078  size 150
.thumb
.org 0xc4078
FUN_080c4078:
	push {r4, r5, r6, lr}	@ 000c4078 70b5
.org 0xc407a
	adds r4, r0, #0	@ 000c407a 041c
.org 0xc407c
	ldr r6, [r4, #40]	@ 000c407c a66a
.org 0xc407e
	ldrb r0, [r6, #10]	@ 000c407e b07a
.org 0xc4080
	lsrs r5, r0, #4	@ 000c4080 0509
.org 0xc4082
	movs r0, #1	@ 000c4082 0120
.org 0xc4084
	ands r5, r0	@ 000c4084 0540
.org 0xc4086
	ldrb r0, [r4, #15]	@ 000c4086 e07b
.org 0xc4088
	cmp r0, #0	@ 000c4088 0028
.org 0xc408a
	bne.n 0xc409c	@ 000c408a 07d1
.org 0xc408c
	movs r1, #164	@ 000c408c a421
.org 0xc408e
	lsls r1, r1, #7	@ 000c408e c901
.org 0xc4090
	adds r0, r4, #0	@ 000c4090 201c
.org 0xc4092
	bl 0x1cf00	@ 000c4092 58f735ff
.org 0xc4096
	ldrb r0, [r4, #15]	@ 000c4096 e07b
.org 0xc4098
	adds r0, #1	@ 000c4098 0130
.org 0xc409a
	strb r0, [r4, #15]	@ 000c409a e073
.org 0xc409c
	adds r0, r4, #0	@ 000c409c 201c
.org 0xc409e
	bl 0x1cff0	@ 000c409e 58f7a7ff
.org 0xc40a2
	adds r2, r5, #0	@ 000c40a2 2a1c
.org 0xc40a4
	cmp r2, #0	@ 000c40a4 002a
.org 0xc40a6
	beq.n 0xc40b0	@ 000c40a6 03d0
.org 0xc40a8
	ldrb r1, [r4, #10]	@ 000c40a8 a17a
.org 0xc40aa
	movs r0, #16	@ 000c40aa 1020
.org 0xc40ac
	orrs r0, r1	@ 000c40ac 0843
.org 0xc40ae
	b.n 0xc40b6	@ 000c40ae 02e0
.org 0xc40b0
	ldrb r1, [r4, #10]	@ 000c40b0 a17a
.org 0xc40b2
	movs r0, #239	@ 000c40b2 ef20
.org 0xc40b4
	ands r0, r1	@ 000c40b4 0840
.org 0xc40b6
	strb r0, [r4, #10]	@ 000c40b6 a072
.org 0xc40b8
	adds r1, r2, #0	@ 000c40b8 111c
.org 0xc40ba
	adds r0, r4, #0	@ 000c40ba 201c
.org 0xc40bc
	adds r0, #76	@ 000c40bc 4c30
.org 0xc40be
	strb r1, [r0, #0]	@ 000c40be 0170
.org 0xc40c0
	adds r3, r4, #0	@ 000c40c0 231c
.org 0xc40c2
	adds r3, #74	@ 000c40c2 4a33
.org 0xc40c4
	lsls r1, r1, #4	@ 000c40c4 0901
.org 0xc40c6
	ldrb r2, [r3, #0]	@ 000c40c6 1a78
.org 0xc40c8
	movs r0, #17	@ 000c40c8 1120
.org 0xc40ca
	negs r0, r0	@ 000c40ca 4042
.org 0xc40cc
	ands r0, r2	@ 000c40cc 1040
.org 0xc40ce
	orrs r0, r1	@ 000c40ce 0843
.org 0xc40d0
	strb r0, [r3, #0]	@ 000c40d0 1870
.org 0xc40d2
	ldr r2, [r6, #84]	@ 000c40d2 726d
.org 0xc40d4
	ldrb r1, [r6, #10]	@ 000c40d4 b17a
.org 0xc40d6
	movs r0, #16	@ 000c40d6 1020
.org 0xc40d8
	ands r0, r1	@ 000c40d8 0840
.org 0xc40da
	cmp r0, #0	@ 000c40da 0028
.org 0xc40dc
	beq.n 0xc40e4	@ 000c40dc 02d0
.org 0xc40de
	movs r1, #176	@ 000c40de b021
.org 0xc40e0
	lsls r1, r1, #6	@ 000c40e0 8901
.org 0xc40e2
	b.n 0xc40e6	@ 000c40e2 00e0
.org 0xc40e4
	ldr r1, [pc, #40]	@ 000c40e4 0a49
.org 0xc40e6
	adds r0, r2, r1	@ 000c40e6 5018
.org 0xc40e8
	str r0, [r4, #84]	@ 000c40e8 6065
.org 0xc40ea
	ldr r0, [r6, #88]	@ 000c40ea b06d
.org 0xc40ec
	movs r1, #176	@ 000c40ec b021
.org 0xc40ee
	lsls r1, r1, #6	@ 000c40ee 8901
.org 0xc40f0
	adds r0, r0, r1	@ 000c40f0 4018
.org 0xc40f2
	str r0, [r4, #88]	@ 000c40f2 a065
.org 0xc40f4
	adds r0, r4, #0	@ 000c40f4 201c
.org 0xc40f6
	adds r0, #115	@ 000c40f6 7330
.org 0xc40f8
	ldrb r0, [r0, #0]	@ 000c40f8 0078
.org 0xc40fa
	cmp r0, #4	@ 000c40fa 0428
.org 0xc40fc
	bne.n 0xc4108	@ 000c40fc 04d1
.org 0xc40fe
	movs r1, #0	@ 000c40fe 0021
.org 0xc4100
	movs r0, #1	@ 000c4100 0120
.org 0xc4102
	strb r0, [r4, #13]	@ 000c4102 6073
.org 0xc4104
	strb r1, [r4, #14]	@ 000c4104 a173
.org 0xc4106
	strb r1, [r4, #15]	@ 000c4106 e173
.org 0xc4108
	pop {r4, r5, r6}	@ 000c4108 70bc
.org 0xc410a
	pop {r0}	@ 000c410a 01bc
.org 0xc410c
	bx r0	@ 000c410c 0047
