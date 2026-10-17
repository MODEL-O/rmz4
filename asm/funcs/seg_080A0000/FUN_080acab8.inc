@ FUN_080acab8  entry 0x080acab8  size 160
.thumb
.org 0xacab8
FUN_080acab8:
	push {r4, r5, lr}	@ 000acab8 30b5
.org 0xacaba
	adds r4, r0, #0	@ 000acaba 041c
.org 0xacabc
	ldr r5, [r4, #40]	@ 000acabc a56a
.org 0xacabe
	ldrb r1, [r4, #15]	@ 000acabe e17b
.org 0xacac0
	cmp r1, #0	@ 000acac0 0029
.org 0xacac2
	bne.n 0xacae2	@ 000acac2 0ed1
.org 0xacac4
	adds r0, #140	@ 000acac4 8c30
.org 0xacac6
	str r1, [r0, #0]	@ 000acac6 0160
.org 0xacac8
	adds r0, #4	@ 000acac8 0430
.org 0xacaca
	str r1, [r0, #0]	@ 000acaca 0160
.org 0xacacc
	adds r0, #4	@ 000acacc 0430
.org 0xacace
	strb r1, [r0, #0]	@ 000acace 0170
.org 0xacad0
	ldrb r1, [r4, #10]	@ 000acad0 a17a
.org 0xacad2
	movs r0, #251	@ 000acad2 fb20
.org 0xacad4
	ands r0, r1	@ 000acad4 0840
.org 0xacad6
	strb r0, [r4, #10]	@ 000acad6 a072
.org 0xacad8
	movs r0, #128	@ 000acad8 8020
.org 0xacada
	strb r0, [r4, #18]	@ 000acada a074
.org 0xacadc
	ldrb r0, [r4, #15]	@ 000acadc e07b
.org 0xacade
	adds r0, #1	@ 000acade 0130
.org 0xacae0
	strb r0, [r4, #15]	@ 000acae0 e073
.org 0xacae2
	adds r0, r4, #0	@ 000acae2 201c
.org 0xacae4
	bl 0x1cff0	@ 000acae4 70f784fa
.org 0xacae8
	ldrb r0, [r4, #18]	@ 000acae8 a07c
.org 0xacaea
	subs r2, r0, #1	@ 000acaea 421e
.org 0xacaec
	movs r3, #0	@ 000acaec 0023
.org 0xacaee
	strb r2, [r4, #18]	@ 000acaee a274
.org 0xacaf0
	ldr r0, [r5, #84]	@ 000acaf0 686d
.org 0xacaf2
	ldr r1, [r5, #88]	@ 000acaf2 a96d
.org 0xacaf4
	str r0, [r4, #84]	@ 000acaf4 6065
.org 0xacaf6
	str r1, [r4, #88]	@ 000acaf6 a165
.org 0xacaf8
	lsls r0, r2, #24	@ 000acaf8 1006
.org 0xacafa
	lsrs r0, r0, #24	@ 000acafa 000e
.org 0xacafc
	cmp r0, #63	@ 000acafc 3f28
.org 0xacafe
	bhi.n 0xacb10	@ 000acafe 07d8
.org 0xacb00
	movs r0, #3	@ 000acb00 0320
.org 0xacb02
	ands r2, r0	@ 000acb02 0240
.org 0xacb04
	cmp r2, #0	@ 000acb04 002a
.org 0xacb06
	beq.n 0xacb20	@ 000acb06 0bd0
.org 0xacb08
	ldrb r1, [r4, #10]	@ 000acb08 a17a
.org 0xacb0a
	movs r0, #254	@ 000acb0a fe20
.org 0xacb0c
	ands r0, r1	@ 000acb0c 0840
.org 0xacb0e
	b.n 0xacb26	@ 000acb0e 0ae0
.org 0xacb10
	movs r0, #1	@ 000acb10 0120
.org 0xacb12
	ands r2, r0	@ 000acb12 0240
.org 0xacb14
	cmp r2, #0	@ 000acb14 002a
.org 0xacb16
	beq.n 0xacb20	@ 000acb16 03d0
.org 0xacb18
	ldrb r1, [r4, #10]	@ 000acb18 a17a
.org 0xacb1a
	movs r0, #254	@ 000acb1a fe20
.org 0xacb1c
	ands r0, r1	@ 000acb1c 0840
.org 0xacb1e
	b.n 0xacb26	@ 000acb1e 02e0
.org 0xacb20
	ldrb r0, [r4, #10]	@ 000acb20 a07a
.org 0xacb22
	movs r1, #1	@ 000acb22 0121
.org 0xacb24
	orrs r0, r1	@ 000acb24 0843
.org 0xacb26
	strb r0, [r4, #10]	@ 000acb26 a072
.org 0xacb28
	adds r0, r4, #0	@ 000acb28 201c
.org 0xacb2a
	adds r0, #115	@ 000acb2a 7330
.org 0xacb2c
	ldrb r0, [r0, #0]	@ 000acb2c 0078
.org 0xacb2e
	cmp r0, #3	@ 000acb2e 0328
.org 0xacb30
	beq.n 0xacb38	@ 000acb30 02d0
.org 0xacb32
	ldrb r0, [r4, #18]	@ 000acb32 a07c
.org 0xacb34
	cmp r0, #0	@ 000acb34 0028
.org 0xacb36
	bne.n 0xacb52	@ 000acb36 0cd1
.org 0xacb38
	ldrb r1, [r4, #10]	@ 000acb38 a17a
.org 0xacb3a
	movs r0, #254	@ 000acb3a fe20
.org 0xacb3c
	ands r0, r1	@ 000acb3c 0840
.org 0xacb3e
	strb r0, [r4, #10]	@ 000acb3e a072
.org 0xacb40
	ldr r1, [pc, #20]	@ 000acb40 0549
.org 0xacb42
	ldrb r0, [r4, #9]	@ 000acb42 607a
.org 0xacb44
	lsls r0, r0, #2	@ 000acb44 8000
.org 0xacb46
	adds r0, r0, r1	@ 000acb46 4018
.org 0xacb48
	movs r1, #4	@ 000acb48 0421
.org 0xacb4a
	str r1, [r4, #12]	@ 000acb4a e160
.org 0xacb4c
	ldr r0, [r0, #0]	@ 000acb4c 0068
.org 0xacb4e
	ldr r0, [r0, #16]	@ 000acb4e 0069
.org 0xacb50
	str r0, [r4, #20]	@ 000acb50 6061
.org 0xacb52
	pop {r4, r5}	@ 000acb52 30bc
.org 0xacb54
	pop {r0}	@ 000acb54 01bc
.org 0xacb56
	bx r0	@ 000acb56 0047
