@ FUN_080eb9e4  entry 0x080eb9e4  size 124
.thumb
.org 0xeb9e4
FUN_080eb9e4:
	push {r4, r5, lr}	@ 000eb9e4 30b5
.org 0xeb9e6
	adds r4, r0, #0	@ 000eb9e6 041c
.org 0xeb9e8
	ldrb r0, [r4, #14]	@ 000eb9e8 a07b
.org 0xeb9ea
	cmp r0, #1	@ 000eb9ea 0128
.org 0xeb9ec
	beq.n 0xeba16	@ 000eb9ec 13d0
.org 0xeb9ee
	cmp r0, #1	@ 000eb9ee 0128
.org 0xeb9f0
	bgt.n 0xeb9f8	@ 000eb9f0 02dc
.org 0xeb9f2
	cmp r0, #0	@ 000eb9f2 0028
.org 0xeb9f4
	beq.n 0xeb9fe	@ 000eb9f4 03d0
.org 0xeb9f6
	b.n 0xeba72	@ 000eb9f6 3ce0
.org 0xeb9f8
	cmp r0, #2	@ 000eb9f8 0228
.org 0xeb9fa
	beq.n 0xeba60	@ 000eb9fa 31d0
.org 0xeb9fc
	b.n 0xeba72	@ 000eb9fc 39e0
.org 0xeb9fe
	adds r0, r4, #0	@ 000eb9fe 201c
.org 0xeba00
	adds r0, #116	@ 000eba00 7430
.org 0xeba02
	ldr r1, [pc, #68]	@ 000eba02 1149
.org 0xeba04
	bl 0x5784	@ 000eba04 19f7befe
.org 0xeba08
	ldr r1, [pc, #64]	@ 000eba08 1049
.org 0xeba0a
	adds r0, r4, #0	@ 000eba0a 201c
.org 0xeba0c
	bl 0x1cf00	@ 000eba0c 31f778fa
.org 0xeba10
	ldrb r0, [r4, #14]	@ 000eba10 a07b
.org 0xeba12
	adds r0, #1	@ 000eba12 0130
.org 0xeba14
	strb r0, [r4, #14]	@ 000eba14 a073
.org 0xeba16
	adds r0, r4, #0	@ 000eba16 201c
.org 0xeba18
	adds r0, #140	@ 000eba18 8c30
.org 0xeba1a
	ldr r0, [r0, #0]	@ 000eba1a 0068
.org 0xeba1c
	movs r5, #1	@ 000eba1c 0125
.org 0xeba1e
	ands r0, r5	@ 000eba1e 2840
.org 0xeba20
	cmp r0, #0	@ 000eba20 0028
.org 0xeba22
	beq.n 0xeba40	@ 000eba22 0dd0
.org 0xeba24
	ldr r0, [pc, #40]	@ 000eba24 0a48
.org 0xeba26
	bl 0x2b10	@ 000eba26 17f773f8
.org 0xeba2a
	ldr r1, [pc, #40]	@ 000eba2a 0a49
.org 0xeba2c
	adds r0, r4, #0	@ 000eba2c 201c
.org 0xeba2e
	bl 0x1cf00	@ 000eba2e 31f767fa
.org 0xeba32
	ldr r0, [pc, #36]	@ 000eba32 0948
.org 0xeba34
	ldr r1, [pc, #36]	@ 000eba34 0949
.org 0xeba36
	adds r0, r0, r1	@ 000eba36 4018
.org 0xeba38
	strb r5, [r0, #0]	@ 000eba38 0570
.org 0xeba3a
	ldrb r0, [r4, #14]	@ 000eba3a a07b
.org 0xeba3c
	adds r0, #1	@ 000eba3c 0130
.org 0xeba3e
	strb r0, [r4, #14]	@ 000eba3e a073
.org 0xeba40
	adds r0, r4, #0	@ 000eba40 201c
.org 0xeba42
	bl 0x1cff0	@ 000eba42 31f7d5fa
.org 0xeba46
	b.n 0xeba72	@ 000eba46 14e0
.org 0xeba48
	.byte 0xa4,0x96,0x86,0x08	@ 000eba48 data
.org 0xeba4c
	.byte 0x04,0xaf,0x00,0x00	@ 000eba4c data
.org 0xeba50
	.byte 0x81,0x01,0x00,0x00	@ 000eba50 data
.org 0xeba54
	.byte 0x03,0xaf,0x00,0x00	@ 000eba54 data
.org 0xeba58
	.byte 0xb0,0x0a,0x00,0x02	@ 000eba58 data
.org 0xeba5c
	.byte 0x2b,0xd0,0x02,0x00	@ 000eba5c data
