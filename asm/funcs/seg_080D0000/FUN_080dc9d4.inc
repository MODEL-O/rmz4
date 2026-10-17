@ FUN_080dc9d4  entry 0x080dc9d4  size 354
.thumb
.org 0xdc9d4
FUN_080dc9d4:
	push {r4, r5, r6, r7, lr}	@ 000dc9d4 f0b5
.org 0xdc9d6
	adds r6, r0, #0	@ 000dc9d6 061c
.org 0xdc9d8
	ldr r0, [r6, #40]	@ 000dc9d8 b06a
.org 0xdc9da
	ldrb r0, [r0, #10]	@ 000dc9da 807a
.org 0xdc9dc
	lsls r0, r0, #24	@ 000dc9dc 0006
.org 0xdc9de
	lsrs r5, r0, #28	@ 000dc9de 050f
.org 0xdc9e0
	movs r1, #1	@ 000dc9e0 0121
.org 0xdc9e2
	ands r5, r1	@ 000dc9e2 0d40
.org 0xdc9e4
	lsrs r4, r0, #29	@ 000dc9e4 440f
.org 0xdc9e6
	ands r4, r1	@ 000dc9e6 0c40
.org 0xdc9e8
	ldrb r7, [r6, #17]	@ 000dc9e8 777c
.org 0xdc9ea
	ldrb r0, [r6, #14]	@ 000dc9ea b07b
.org 0xdc9ec
	cmp r0, #0	@ 000dc9ec 0028
.org 0xdc9ee
	beq.n 0xdc9f6	@ 000dc9ee 02d0
.org 0xdc9f0
	cmp r0, #1	@ 000dc9f0 0128
.org 0xdc9f2
	beq.n 0xdcab4	@ 000dc9f2 5fd0
.org 0xdc9f4
	b.n 0xdcb44	@ 000dc9f4 a6e0
.org 0xdc9f6
	ldrb r1, [r6, #10]	@ 000dc9f6 b17a
.org 0xdc9f8
	movs r0, #1	@ 000dc9f8 0120
.org 0xdc9fa
	movs r3, #0	@ 000dc9fa 0023
.org 0xdc9fc
	adds r2, r0, #0	@ 000dc9fc 021c
.org 0xdc9fe
	orrs r2, r1	@ 000dc9fe 0a43
.org 0xdca00
	strb r2, [r6, #10]	@ 000dca00 b272
.org 0xdca02
	adds r1, r5, #0	@ 000dca02 291c
.org 0xdca04
	cmp r5, #0	@ 000dca04 002d
.org 0xdca06
	beq.n 0xdca0e	@ 000dca06 02d0
.org 0xdca08
	movs r0, #16	@ 000dca08 1020
.org 0xdca0a
	orrs r2, r0	@ 000dca0a 0243
.org 0xdca0c
	b.n 0xdca12	@ 000dca0c 01e0
.org 0xdca0e
	movs r0, #239	@ 000dca0e ef20
.org 0xdca10
	ands r2, r0	@ 000dca10 0240
.org 0xdca12
	strb r2, [r6, #10]	@ 000dca12 b272
.org 0xdca14
	adds r0, r6, #0	@ 000dca14 301c
.org 0xdca16
	adds r0, #76	@ 000dca16 4c30
.org 0xdca18
	strb r1, [r0, #0]	@ 000dca18 0170
.org 0xdca1a
	adds r2, r6, #0	@ 000dca1a 321c
.org 0xdca1c
	adds r2, #74	@ 000dca1c 4a32
.org 0xdca1e
	lsls r1, r1, #4	@ 000dca1e 0901
.org 0xdca20
	ldrb r3, [r2, #0]	@ 000dca20 1378
.org 0xdca22
	movs r0, #17	@ 000dca22 1120
.org 0xdca24
	negs r0, r0	@ 000dca24 4042
.org 0xdca26
	ands r0, r3	@ 000dca26 1840
.org 0xdca28
	orrs r0, r1	@ 000dca28 0843
.org 0xdca2a
	strb r0, [r2, #0]	@ 000dca2a 1070
.org 0xdca2c
	adds r3, r4, #0	@ 000dca2c 231c
.org 0xdca2e
	adds r4, r2, #0	@ 000dca2e 141c
.org 0xdca30
	cmp r3, #0	@ 000dca30 002b
.org 0xdca32
	beq.n 0xdca3c	@ 000dca32 03d0
.org 0xdca34
	ldrb r0, [r6, #10]	@ 000dca34 b07a
.org 0xdca36
	movs r1, #32	@ 000dca36 2021
.org 0xdca38
	orrs r0, r1	@ 000dca38 0843
.org 0xdca3a
	b.n 0xdca42	@ 000dca3a 02e0
.org 0xdca3c
	ldrb r1, [r6, #10]	@ 000dca3c b17a
.org 0xdca3e
	movs r0, #223	@ 000dca3e df20
.org 0xdca40
	ands r0, r1	@ 000dca40 0840
.org 0xdca42
	strb r0, [r6, #10]	@ 000dca42 b072
.org 0xdca44
	adds r1, r3, #0	@ 000dca44 191c
.org 0xdca46
	adds r2, r6, #0	@ 000dca46 321c
.org 0xdca48
	adds r2, #77	@ 000dca48 4d32
.org 0xdca4a
	strb r1, [r2, #0]	@ 000dca4a 1170
.org 0xdca4c
	lsls r1, r1, #5	@ 000dca4c 4901
.org 0xdca4e
	ldrb r2, [r4, #0]	@ 000dca4e 2278
.org 0xdca50
	movs r0, #33	@ 000dca50 2120
.org 0xdca52
	negs r0, r0	@ 000dca52 4042
.org 0xdca54
	ands r0, r2	@ 000dca54 1040
.org 0xdca56
	orrs r0, r1	@ 000dca56 0843
.org 0xdca58
	strb r0, [r4, #0]	@ 000dca58 2070
.org 0xdca5a
	ldr r1, [r6, #116]	@ 000dca5a 716f
.org 0xdca5c
	lsls r0, r7, #1	@ 000dca5c 7800
.org 0xdca5e
	adds r0, r0, r1	@ 000dca5e 4018
.org 0xdca60
	ldrh r1, [r0, #0]	@ 000dca60 0188
.org 0xdca62
	adds r0, r6, #0	@ 000dca62 301c
.org 0xdca64
	bl 0x1cf00	@ 000dca64 40f74cfa
.org 0xdca68
	cmp r5, #0	@ 000dca68 002d
.org 0xdca6a
	beq.n 0xdca70	@ 000dca6a 01d0
.org 0xdca6c
	movs r0, #2	@ 000dca6c 0220
.org 0xdca6e
	subs r7, r0, r7	@ 000dca6e c71b
.org 0xdca70
	subs r1, r7, #1	@ 000dca70 791e
.org 0xdca72
	lsls r1, r1, #8	@ 000dca72 0902
.org 0xdca74
	ldr r5, [pc, #80]	@ 000dca74 144d
.org 0xdca76
	ldr r0, [r5, #0]	@ 000dca76 2868
.org 0xdca78
	ldr r4, [pc, #80]	@ 000dca78 144c
.org 0xdca7a
	muls r0, r4	@ 000dca7a 6043
.org 0xdca7c
	ldr r3, [pc, #80]	@ 000dca7c 144b
.org 0xdca7e
	adds r0, r0, r3	@ 000dca7e c018
.org 0xdca80
	lsls r0, r0, #1	@ 000dca80 4000
.org 0xdca82
	lsrs r2, r0, #1	@ 000dca82 4208
.org 0xdca84
	lsls r0, r0, #6	@ 000dca84 8001
.org 0xdca86
	lsrs r0, r0, #23	@ 000dca86 c00d
.org 0xdca88
	adds r1, r1, r0	@ 000dca88 0918
.org 0xdca8a
	ldr r0, [pc, #72]	@ 000dca8a 1248
.org 0xdca8c
	adds r1, r1, r0	@ 000dca8c 0918
.org 0xdca8e
	str r1, [r6, #92]	@ 000dca8e f165
.org 0xdca90
	adds r1, r2, #0	@ 000dca90 111c
.org 0xdca92
	muls r1, r4	@ 000dca92 6143
.org 0xdca94
	adds r1, r1, r3	@ 000dca94 c918
.org 0xdca96
	lsls r1, r1, #1	@ 000dca96 4900
.org 0xdca98
	lsrs r0, r1, #1	@ 000dca98 4808
.org 0xdca9a
	str r0, [r5, #0]	@ 000dca9a 2860
.org 0xdca9c
	lsrs r1, r1, #17	@ 000dca9c 490c
.org 0xdca9e
	movs r0, #128	@ 000dca9e 8020
.org 0xdcaa0
	lsls r0, r0, #1	@ 000dcaa0 4000
.org 0xdcaa2
	ands r1, r0	@ 000dcaa2 0140
.org 0xdcaa4
	ldr r0, [pc, #48]	@ 000dcaa4 0c48
.org 0xdcaa6
	subs r0, r0, r1	@ 000dcaa6 401a
.org 0xdcaa8
	str r0, [r6, #96]	@ 000dcaa8 3066
.org 0xdcaaa
	movs r0, #0	@ 000dcaaa 0020
.org 0xdcaac
	strb r0, [r6, #18]	@ 000dcaac b074
.org 0xdcaae
	ldrb r0, [r6, #14]	@ 000dcaae b07b
.org 0xdcab0
	adds r0, #1	@ 000dcab0 0130
.org 0xdcab2
	strb r0, [r6, #14]	@ 000dcab2 b073
.org 0xdcab4
	ldrb r0, [r6, #18]	@ 000dcab4 b07c
.org 0xdcab6
	adds r0, #1	@ 000dcab6 0130
.org 0xdcab8
	strb r0, [r6, #18]	@ 000dcab8 b074
.org 0xdcaba
	movs r1, #1	@ 000dcaba 0121
.org 0xdcabc
	ands r0, r1	@ 000dcabc 0840
.org 0xdcabe
	cmp r0, #0	@ 000dcabe 0028
.org 0xdcac0
	beq.n 0xdcadc	@ 000dcac0 0cd0
.org 0xdcac2
	ldrb r0, [r6, #10]	@ 000dcac2 b07a
.org 0xdcac4
	orrs r0, r1	@ 000dcac4 0843
.org 0xdcac6
	b.n 0xdcae2	@ 000dcac6 0ce0
.org 0xdcac8
	.byte 0x38,0xdc,0x02,0x02	@ 000dcac8 data
.org 0xdcacc
	.byte 0xfd,0x43,0x03,0x00	@ 000dcacc data
.org 0xdcad0
	.byte 0xc3,0x9e,0x26,0x00	@ 000dcad0 data
.org 0xdcad4
	.byte 0x00,0xff,0xff,0xff	@ 000dcad4 data
.org 0xdcad8
	.byte 0x00,0xfe,0xff,0xff	@ 000dcad8 data
.org 0xdcadc
	ldrb r1, [r6, #10]	@ 000dcadc b17a
.org 0xdcade
	movs r0, #254	@ 000dcade fe20
.org 0xdcae0
	ands r0, r1	@ 000dcae0 0840
.org 0xdcae2
	strb r0, [r6, #10]	@ 000dcae2 b072
.org 0xdcae4
	ldr r0, [r6, #84]	@ 000dcae4 706d
.org 0xdcae6
	ldr r1, [r6, #92]	@ 000dcae6 f16d
.org 0xdcae8
	adds r0, r0, r1	@ 000dcae8 4018
.org 0xdcaea
	str r0, [r6, #84]	@ 000dcaea 7065
.org 0xdcaec
	ldr r0, [r6, #88]	@ 000dcaec b06d
.org 0xdcaee
	ldr r1, [r6, #96]	@ 000dcaee 316e
.org 0xdcaf0
	adds r0, r0, r1	@ 000dcaf0 4018
.org 0xdcaf2
	str r0, [r6, #88]	@ 000dcaf2 b065
.org 0xdcaf4
	adds r1, #64	@ 000dcaf4 4031
.org 0xdcaf6
	str r1, [r6, #96]	@ 000dcaf6 3166
.org 0xdcaf8
	adds r0, r6, #0	@ 000dcaf8 301c
.org 0xdcafa
	bl 0x1d134	@ 000dcafa 40f71bfb
.org 0xdcafe
	ldrb r0, [r6, #18]	@ 000dcafe b07c
.org 0xdcb00
	cmp r0, #24	@ 000dcb00 1828
.org 0xdcb02
	bls.n 0xdcb44	@ 000dcb02 1fd9
.org 0xdcb04
	ldr r0, [r6, #84]	@ 000dcb04 706d
.org 0xdcb06
	ldr r1, [r6, #88]	@ 000dcb06 b16d
.org 0xdcb08
	bl 0x7c7c	@ 000dcb08 2bf7b8f8
.org 0xdcb0c
	lsls r0, r0, #16	@ 000dcb0c 0004
.org 0xdcb0e
	cmp r0, #0	@ 000dcb0e 0028
.org 0xdcb10
	beq.n 0xdcb44	@ 000dcb10 18d0
.org 0xdcb12
	adds r0, r6, #0	@ 000dcb12 301c
.org 0xdcb14
	adds r0, #121	@ 000dcb14 7930
.org 0xdcb16
	ldrb r0, [r0, #0]	@ 000dcb16 0078
.org 0xdcb18
	cmp r0, #0	@ 000dcb18 0028
.org 0xdcb1a
	bne.n 0xdcb28	@ 000dcb1a 05d1
.org 0xdcb1c
	adds r1, r6, #0	@ 000dcb1c 311c
.org 0xdcb1e
	adds r1, #84	@ 000dcb1e 5431
.org 0xdcb20
	movs r0, #3	@ 000dcb20 0320
.org 0xdcb22
	bl 0xd0c88	@ 000dcb22 f4f7b1f8
.org 0xdcb26
	b.n 0xdcb32	@ 000dcb26 04e0
.org 0xdcb28
	adds r1, r6, #0	@ 000dcb28 311c
.org 0xdcb2a
	adds r1, #84	@ 000dcb2a 5431
.org 0xdcb2c
	movs r0, #2	@ 000dcb2c 0220
.org 0xdcb2e
	bl 0xd0c88	@ 000dcb2e f4f7abf8
.org 0xdcb32
	ldr r1, [pc, #24]	@ 000dcb32 0649
.org 0xdcb34
	ldrb r0, [r6, #9]	@ 000dcb34 707a
