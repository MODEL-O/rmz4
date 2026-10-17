@ FUN_080ebe6c  entry 0x080ebe6c  size 234
.thumb
.org 0xebe6c
FUN_080ebe6c:
	push {r4, r5, r6, lr}	@ 000ebe6c 70b5
.org 0xebe6e
	adds r4, r0, #0	@ 000ebe6e 041c
.org 0xebe70
	adds r5, r1, #0	@ 000ebe70 0d1c
.org 0xebe72
	adds r6, r2, #0	@ 000ebe72 161c
.org 0xebe74
	movs r3, #0	@ 000ebe74 0023
.org 0xebe76
	ldr r0, [pc, #224]	@ 000ebe76 3848
.org 0xebe78
	ldr r1, [r0, #0]	@ 000ebe78 0168
.org 0xebe7a
	movs r2, #10	@ 000ebe7a 0a22
.org 0xebe7c
	ldrsh r0, [r1, r2]	@ 000ebe7c 885e
.org 0xebe7e
	cmp r0, #7	@ 000ebe7e 0728
.org 0xebe80
	ble.n 0xebee2	@ 000ebe80 2fdd
.org 0xebe82
	adds r0, r1, #0	@ 000ebe82 081c
.org 0xebe84
	bl 0x5500	@ 000ebe84 19f73cfb
.org 0xebe88
	adds r3, r0, #0	@ 000ebe88 031c
.org 0xebe8a
	cmp r3, #0	@ 000ebe8a 002b
.org 0xebe8c
	beq.n 0xebee6	@ 000ebe8c 2bd0
.org 0xebe8e
	adds r1, r3, #0	@ 000ebe8e 191c
.org 0xebe90
	adds r1, #37	@ 000ebe90 2531
.org 0xebe92
	movs r2, #0	@ 000ebe92 0022
.org 0xebe94
	movs r0, #30	@ 000ebe94 1e20
.org 0xebe96
	strb r0, [r1, #0]	@ 000ebe96 0870
.org 0xebe98
	ldr r1, [pc, #192]	@ 000ebe98 3049
.org 0xebe9a
	movs r0, #6	@ 000ebe9a 0620
.org 0xebe9c
	strb r0, [r3, #9]	@ 000ebe9c 5872
.org 0xebe9e
	ldr r0, [r1, #24]	@ 000ebe9e 8869
.org 0xebea0
	ldr r0, [r0, #0]	@ 000ebea0 0068
.org 0xebea2
	str r0, [r3, #20]	@ 000ebea2 5861
.org 0xebea4
	movs r0, #0	@ 000ebea4 0020
.org 0xebea6
	strh r2, [r3, #32]	@ 000ebea6 1a84
.org 0xebea8
	adds r1, r3, #0	@ 000ebea8 191c
.org 0xebeaa
	adds r1, #34	@ 000ebeaa 2231
.org 0xebeac
	strb r0, [r1, #0]	@ 000ebeac 0870
.org 0xebeae
	ldrb r1, [r3, #11]	@ 000ebeae d97a
.org 0xebeb0
	movs r0, #16	@ 000ebeb0 1020
.org 0xebeb2
	orrs r0, r1	@ 000ebeb2 0843
.org 0xebeb4
	strb r0, [r3, #11]	@ 000ebeb4 d872
.org 0xebeb6
	ldrb r0, [r3, #28]	@ 000ebeb6 187f
.org 0xebeb8
	strb r0, [r3, #29]	@ 000ebeb8 5877
.org 0xebeba
	ldr r2, [pc, #164]	@ 000ebeba 294a
.org 0xebebc
	adds r0, r5, #0	@ 000ebebc 281c
.org 0xebebe
	ands r0, r2	@ 000ebebe 1040
.org 0xebec0
	movs r1, #128	@ 000ebec0 8021
.org 0xebec2
	lsls r1, r1, #4	@ 000ebec2 0901
.org 0xebec4
	adds r0, r0, r1	@ 000ebec4 4018
.org 0xebec6
	str r0, [r3, #84]	@ 000ebec6 5865
.org 0xebec8
	adds r0, r6, #0	@ 000ebec8 301c
.org 0xebeca
	ands r0, r2	@ 000ebeca 1040
.org 0xebecc
	movs r1, #128	@ 000ebecc 8021
.org 0xebece
	lsls r1, r1, #5	@ 000ebece 4901
.org 0xebed0
	adds r0, r0, r1	@ 000ebed0 4018
.org 0xebed2
	str r0, [r3, #88]	@ 000ebed2 9865
.org 0xebed4
	ldrb r0, [r4, #16]	@ 000ebed4 207c
.org 0xebed6
	strb r0, [r3, #16]	@ 000ebed6 1874
.org 0xebed8
	ldrb r0, [r4, #17]	@ 000ebed8 607c
.org 0xebeda
	cmp r0, #254	@ 000ebeda fe28
.org 0xebedc
	bhi.n 0xebee0	@ 000ebedc 00d8
.org 0xebede
	adds r0, #1	@ 000ebede 0130
.org 0xebee0
	strb r0, [r3, #17]	@ 000ebee0 5874
.org 0xebee2
	cmp r3, #0	@ 000ebee2 002b
.org 0xebee4
	bne.n 0xebf42	@ 000ebee4 2dd1
.org 0xebee6
	ldr r0, [pc, #124]	@ 000ebee6 1f48
.org 0xebee8
	ldr r0, [r0, #0]	@ 000ebee8 0068
.org 0xebeea
	bl 0x5500	@ 000ebeea 19f709fb
.org 0xebeee
	adds r3, r0, #0	@ 000ebeee 031c
.org 0xebef0
	cmp r3, #0	@ 000ebef0 002b
.org 0xebef2
	beq.n 0xebf50	@ 000ebef2 2dd0
.org 0xebef4
	adds r1, r3, #0	@ 000ebef4 191c
.org 0xebef6
	adds r1, #37	@ 000ebef6 2531
.org 0xebef8
	movs r2, #0	@ 000ebef8 0022
.org 0xebefa
	movs r0, #1	@ 000ebefa 0120
.org 0xebefc
	strb r0, [r1, #0]	@ 000ebefc 0870
.org 0xebefe
	ldr r0, [pc, #104]	@ 000ebefe 1a48
.org 0xebf00
	movs r1, #34	@ 000ebf00 2221
.org 0xebf02
	strb r1, [r3, #9]	@ 000ebf02 5972
.org 0xebf04
	adds r0, #136	@ 000ebf04 8830
.org 0xebf06
	ldr r0, [r0, #0]	@ 000ebf06 0068
.org 0xebf08
	ldr r0, [r0, #0]	@ 000ebf08 0068
.org 0xebf0a
	str r0, [r3, #20]	@ 000ebf0a 5861
.org 0xebf0c
	movs r0, #0	@ 000ebf0c 0020
.org 0xebf0e
	strh r2, [r3, #32]	@ 000ebf0e 1a84
.org 0xebf10
	adds r1, r3, #0	@ 000ebf10 191c
.org 0xebf12
	adds r1, #34	@ 000ebf12 2231
.org 0xebf14
	strb r0, [r1, #0]	@ 000ebf14 0870
.org 0xebf16
	ldr r2, [pc, #72]	@ 000ebf16 124a
.org 0xebf18
	adds r0, r5, #0	@ 000ebf18 281c
.org 0xebf1a
	ands r0, r2	@ 000ebf1a 1040
.org 0xebf1c
	movs r1, #128	@ 000ebf1c 8021
.org 0xebf1e
	lsls r1, r1, #4	@ 000ebf1e 0901
.org 0xebf20
	adds r0, r0, r1	@ 000ebf20 4018
.org 0xebf22
	str r0, [r3, #84]	@ 000ebf22 5865
.org 0xebf24
	adds r0, r6, #0	@ 000ebf24 301c
.org 0xebf26
	ands r0, r2	@ 000ebf26 1040
.org 0xebf28
	movs r2, #128	@ 000ebf28 8022
.org 0xebf2a
	lsls r2, r2, #5	@ 000ebf2a 5201
.org 0xebf2c
	adds r0, r0, r2	@ 000ebf2c 8018
.org 0xebf2e
	str r0, [r3, #88]	@ 000ebf2e 9865
.org 0xebf30
	ldrb r0, [r4, #16]	@ 000ebf30 207c
.org 0xebf32
	strb r0, [r3, #16]	@ 000ebf32 1874
.org 0xebf34
	ldrb r0, [r4, #17]	@ 000ebf34 607c
.org 0xebf36
	cmp r0, #254	@ 000ebf36 fe28
.org 0xebf38
	bhi.n 0xebf3c	@ 000ebf38 00d8
.org 0xebf3a
	adds r0, #1	@ 000ebf3a 0130
.org 0xebf3c
	strb r0, [r3, #17]	@ 000ebf3c 5874
.org 0xebf3e
	cmp r3, #0	@ 000ebf3e 002b
.org 0xebf40
	beq.n 0xebf50	@ 000ebf40 06d0
.org 0xebf42
	ldrb r0, [r4, #16]	@ 000ebf42 207c
.org 0xebf44
	cmp r0, #1	@ 000ebf44 0128
.org 0xebf46
	bne.n 0xebf50	@ 000ebf46 03d1
.org 0xebf48
	adds r0, r5, #0	@ 000ebf48 281c
.org 0xebf4a
	adds r1, r6, #0	@ 000ebf4a 311c
.org 0xebf4c
	bl 0xc6d8	@ 000ebf4c 20f7c4fb
.org 0xebf50
	pop {r4, r5, r6}	@ 000ebf50 70bc
.org 0xebf52
	pop {r0}	@ 000ebf52 01bc
.org 0xebf54
	bx r0	@ 000ebf54 0047
