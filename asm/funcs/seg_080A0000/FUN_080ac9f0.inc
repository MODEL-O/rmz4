@ FUN_080ac9f0  entry 0x080ac9f0  size 94
.thumb
.org 0xac9f0
FUN_080ac9f0:
	push {r4, r5, lr}	@ 000ac9f0 30b5
.org 0xac9f2
	adds r4, r0, #0	@ 000ac9f2 041c
.org 0xac9f4
	ldr r5, [r4, #40]	@ 000ac9f4 a56a
.org 0xac9f6
	ldrb r0, [r4, #15]	@ 000ac9f6 e07b
.org 0xac9f8
	cmp r0, #0	@ 000ac9f8 0028
.org 0xac9fa
	bne.n 0xaca1a	@ 000ac9fa 0ed1
.org 0xac9fc
	ldrb r1, [r4, #10]	@ 000ac9fc a17a
.org 0xac9fe
	movs r0, #1	@ 000ac9fe 0120
.org 0xaca00
	orrs r0, r1	@ 000aca00 0843
.org 0xaca02
	strb r0, [r4, #10]	@ 000aca02 a072
.org 0xaca04
	adds r1, r4, #0	@ 000aca04 211c
.org 0xaca06
	adds r1, #184	@ 000aca06 b831
.org 0xaca08
	movs r0, #1	@ 000aca08 0120
.org 0xaca0a
	strb r0, [r1, #0]	@ 000aca0a 0870
.org 0xaca0c
	ldr r1, [pc, #48]	@ 000aca0c 0c49
.org 0xaca0e
	adds r0, r4, #0	@ 000aca0e 201c
.org 0xaca10
	bl 0x1cf00	@ 000aca10 70f776fa
.org 0xaca14
	ldrb r0, [r4, #15]	@ 000aca14 e07b
.org 0xaca16
	adds r0, #1	@ 000aca16 0130
.org 0xaca18
	strb r0, [r4, #15]	@ 000aca18 e073
.org 0xaca1a
	adds r0, r4, #0	@ 000aca1a 201c
.org 0xaca1c
	bl 0x1cff0	@ 000aca1c 70f7e8fa
.org 0xaca20
	ldr r0, [r5, #84]	@ 000aca20 686d
.org 0xaca22
	ldr r1, [r5, #88]	@ 000aca22 a96d
.org 0xaca24
	str r0, [r4, #84]	@ 000aca24 6065
.org 0xaca26
	str r1, [r4, #88]	@ 000aca26 a165
.org 0xaca28
	adds r0, r4, #0	@ 000aca28 201c
.org 0xaca2a
	bl 0xacb5c	@ 000aca2a 00f097f8
.org 0xaca2e
	adds r0, r4, #0	@ 000aca2e 201c
.org 0xaca30
	adds r0, #115	@ 000aca30 7330
.org 0xaca32
	ldrb r0, [r0, #0]	@ 000aca32 0078
.org 0xaca34
	cmp r0, #4	@ 000aca34 0428
.org 0xaca36
	bne.n 0xaca44	@ 000aca36 05d1
.org 0xaca38
	adds r1, r4, #0	@ 000aca38 211c
.org 0xaca3a
	adds r1, #180	@ 000aca3a b431
.org 0xaca3c
	movs r0, #1	@ 000aca3c 0120
.org 0xaca3e
	b.n 0xaca4a	@ 000aca3e 04e0
.org 0xaca40
	.byte 0x05,0xb0,0x00,0x00	@ 000aca40 data
.org 0xaca44
	adds r1, r4, #0	@ 000aca44 211c
.org 0xaca46
	adds r1, #180	@ 000aca46 b431
.org 0xaca48
	movs r0, #0	@ 000aca48 0020
.org 0xaca4a
	strb r0, [r1, #0]	@ 000aca4a 0870
.org 0xaca4c
	pop {r4, r5}	@ 000aca4c 30bc
