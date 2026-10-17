@ FUN_080acc04  entry 0x080acc04  size 132
.thumb
.org 0xacc04
FUN_080acc04:
	push {r4, r5, r6, lr}	@ 000acc04 70b5
.org 0xacc06
	adds r5, r0, #0	@ 000acc06 051c
.org 0xacc08
	lsls r1, r1, #24	@ 000acc08 0906
.org 0xacc0a
	lsrs r6, r1, #24	@ 000acc0a 0e0e
.org 0xacc0c
	ldr r0, [pc, #120]	@ 000acc0c 1e48
.org 0xacc0e
	ldr r0, [r0, #0]	@ 000acc0e 0068
.org 0xacc10
	bl 0x5500	@ 000acc10 58f776fc
.org 0xacc14
	adds r4, r0, #0	@ 000acc14 041c
.org 0xacc16
	cmp r4, #0	@ 000acc16 002c
.org 0xacc18
	beq.n 0xacc80	@ 000acc18 32d0
.org 0xacc1a
	adds r1, r4, #0	@ 000acc1a 211c
.org 0xacc1c
	adds r1, #37	@ 000acc1c 2531
.org 0xacc1e
	movs r2, #0	@ 000acc1e 0022
.org 0xacc20
	movs r0, #24	@ 000acc20 1820
.org 0xacc22
	strb r0, [r1, #0]	@ 000acc22 0870
.org 0xacc24
	ldr r0, [pc, #100]	@ 000acc24 1948
.org 0xacc26
	movs r1, #76	@ 000acc26 4c21
.org 0xacc28
	strb r1, [r4, #9]	@ 000acc28 6172
.org 0xacc2a
	adds r1, #228	@ 000acc2a e431
.org 0xacc2c
	adds r0, r0, r1	@ 000acc2c 4018
.org 0xacc2e
	ldr r0, [r0, #0]	@ 000acc2e 0068
.org 0xacc30
	ldr r0, [r0, #0]	@ 000acc30 0068
.org 0xacc32
	str r0, [r4, #20]	@ 000acc32 6061
.org 0xacc34
	movs r0, #0	@ 000acc34 0020
.org 0xacc36
	strh r2, [r4, #32]	@ 000acc36 2284
.org 0xacc38
	adds r1, r4, #0	@ 000acc38 211c
.org 0xacc3a
	adds r1, #34	@ 000acc3a 2231
.org 0xacc3c
	strb r0, [r1, #0]	@ 000acc3c 0870
.org 0xacc3e
	ldrb r1, [r4, #11]	@ 000acc3e e17a
.org 0xacc40
	movs r0, #16	@ 000acc40 1020
.org 0xacc42
	orrs r0, r1	@ 000acc42 0843
.org 0xacc44
	strb r0, [r4, #11]	@ 000acc44 e072
.org 0xacc46
	ldrb r0, [r4, #28]	@ 000acc46 207f
.org 0xacc48
	strb r0, [r4, #29]	@ 000acc48 6077
.org 0xacc4a
	str r5, [r4, #40]	@ 000acc4a a562
.org 0xacc4c
	movs r1, #1	@ 000acc4c 0121
.org 0xacc4e
	strb r1, [r4, #16]	@ 000acc4e 2174
.org 0xacc50
	strb r6, [r4, #17]	@ 000acc50 6674
.org 0xacc52
	adds r3, r5, #0	@ 000acc52 2b1c
.org 0xacc54
	adds r3, #180	@ 000acc54 b433
.org 0xacc56
	lsls r1, r6	@ 000acc56 b140
.org 0xacc58
	ldrb r2, [r3, #0]	@ 000acc58 1a78
.org 0xacc5a
	adds r0, r1, #0	@ 000acc5a 081c
.org 0xacc5c
	orrs r0, r2	@ 000acc5c 1043
.org 0xacc5e
	strb r0, [r3, #0]	@ 000acc5e 1870
.org 0xacc60
	adds r3, #1	@ 000acc60 0133
.org 0xacc62
	ldrb r2, [r3, #0]	@ 000acc62 1a78
.org 0xacc64
	adds r0, r1, #0	@ 000acc64 081c
.org 0xacc66
	orrs r0, r2	@ 000acc66 1043
.org 0xacc68
	strb r0, [r3, #0]	@ 000acc68 1870
.org 0xacc6a
	adds r3, #5	@ 000acc6a 0533
.org 0xacc6c
	mvns r1, r1	@ 000acc6c c943
.org 0xacc6e
	ldrb r2, [r3, #0]	@ 000acc6e 1a78
.org 0xacc70
	adds r0, r1, #0	@ 000acc70 081c
.org 0xacc72
	ands r0, r2	@ 000acc72 1040
.org 0xacc74
	strb r0, [r3, #0]	@ 000acc74 1870
.org 0xacc76
	adds r2, r5, #0	@ 000acc76 2a1c
.org 0xacc78
	adds r2, #187	@ 000acc78 bb32
.org 0xacc7a
	ldrb r0, [r2, #0]	@ 000acc7a 1078
.org 0xacc7c
	ands r1, r0	@ 000acc7c 0140
.org 0xacc7e
	strb r1, [r2, #0]	@ 000acc7e 1170
.org 0xacc80
	adds r0, r4, #0	@ 000acc80 201c
.org 0xacc82
	pop {r4, r5, r6}	@ 000acc82 70bc
.org 0xacc84
	pop {r1}	@ 000acc84 02bc
.org 0xacc86
	bx r1	@ 000acc86 0847
