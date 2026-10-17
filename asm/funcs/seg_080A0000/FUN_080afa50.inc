@ FUN_080afa50  entry 0x080afa50  size 222
.thumb
.org 0xafa50
FUN_080afa50:
	push {r4, lr}	@ 000afa50 10b5
.org 0xafa52
	adds r4, r0, #0	@ 000afa52 041c
.org 0xafa54
	ldrb r0, [r4, #16]	@ 000afa54 207c
.org 0xafa56
	cmp r0, #0	@ 000afa56 0028
.org 0xafa58
	bne.n 0xafa88	@ 000afa58 16d1
.org 0xafa5a
	adds r0, r4, #0	@ 000afa5a 201c
.org 0xafa5c
	adds r0, #140	@ 000afa5c 8c30
.org 0xafa5e
	ldr r0, [r0, #0]	@ 000afa5e 0068
.org 0xafa60
	movs r1, #128	@ 000afa60 8021
.org 0xafa62
	lsls r1, r1, #2	@ 000afa62 8900
.org 0xafa64
	ands r0, r1	@ 000afa64 0840
.org 0xafa66
	cmp r0, #0	@ 000afa66 0028
.org 0xafa68
	beq.n 0xafa88	@ 000afa68 0ed0
.org 0xafa6a
	ldr r1, [pc, #24]	@ 000afa6a 0649
.org 0xafa6c
	ldrb r0, [r4, #9]	@ 000afa6c 607a
.org 0xafa6e
	lsls r0, r0, #2	@ 000afa6e 8000
.org 0xafa70
	adds r0, r0, r1	@ 000afa70 4018
.org 0xafa72
	movs r1, #2	@ 000afa72 0221
.org 0xafa74
	str r1, [r4, #12]	@ 000afa74 e160
.org 0xafa76
	ldr r0, [r0, #0]	@ 000afa76 0068
.org 0xafa78
	ldr r0, [r0, #8]	@ 000afa78 8068
.org 0xafa7a
	str r0, [r4, #20]	@ 000afa7a 6061
.org 0xafa7c
	adds r0, r4, #0	@ 000afa7c 201c
.org 0xafa7e
	bl 0xafb38	@ 000afa7e 00f05bf8
.org 0xafa82
	b.n 0xafb30	@ 000afa82 55e0
.org 0xafa84
	.byte 0x40,0xdb,0x85,0x08	@ 000afa84 data
.org 0xafa88
	adds r0, r4, #0	@ 000afa88 201c
.org 0xafa8a
	adds r0, #182	@ 000afa8a b630
.org 0xafa8c
	ldrb r0, [r0, #0]	@ 000afa8c 0078
.org 0xafa8e
	cmp r0, #1	@ 000afa8e 0128
.org 0xafa90
	bne.n 0xafadc	@ 000afa90 24d1
.org 0xafa92
	ldrb r0, [r4, #16]	@ 000afa92 207c
.org 0xafa94
	cmp r0, #0	@ 000afa94 0028
.org 0xafa96
	bne.n 0xafa9e	@ 000afa96 02d1
.org 0xafa98
	adds r0, r4, #0	@ 000afa98 201c
.org 0xafa9a
	bl 0xb0124	@ 000afa9a 00f043fb
.org 0xafa9e
	ldr r0, [r4, #40]	@ 000afa9e a06a
.org 0xafaa0
	cmp r0, #0	@ 000afaa0 0028
.org 0xafaa2
	bne.n 0xafad4	@ 000afaa2 17d1
.org 0xafaa4
	ldr r1, [pc, #40]	@ 000afaa4 0a49
.org 0xafaa6
	ldrb r0, [r4, #13]	@ 000afaa6 607b
.org 0xafaa8
	lsls r0, r0, #2	@ 000afaa8 8000
.org 0xafaaa
	adds r0, r0, r1	@ 000afaaa 4018
.org 0xafaac
	ldr r1, [r0, #0]	@ 000afaac 0168
.org 0xafaae
	adds r0, r4, #0	@ 000afaae 201c
.org 0xafab0
	bl 0x128f80	@ 000afab0 79f066fa
.org 0xafab4
	ldrb r0, [r4, #16]	@ 000afab4 207c
.org 0xafab6
	cmp r0, #0	@ 000afab6 0028
.org 0xafab8
	bne.n 0xafac4	@ 000afab8 04d1
.org 0xafaba
	ldr r0, [r4, #44]	@ 000afaba e06a
.org 0xafabc
	ldr r1, [r4, #84]	@ 000afabc 616d
.org 0xafabe
	str r1, [r0, #84]	@ 000afabe 4165
.org 0xafac0
	ldr r1, [r4, #88]	@ 000afac0 a16d
.org 0xafac2
	str r1, [r0, #88]	@ 000afac2 8165
.org 0xafac4
	ldrb r0, [r4, #19]	@ 000afac4 e07c
.org 0xafac6
	cmp r0, #0	@ 000afac6 0028
.org 0xafac8
	beq.n 0xafae2	@ 000afac8 0bd0
.org 0xafaca
	subs r0, #1	@ 000afaca 0138
.org 0xafacc
	strb r0, [r4, #19]	@ 000afacc e074
.org 0xaface
	b.n 0xafae2	@ 000aface 08e0
.org 0xafad0
	.byte 0xd0,0x31,0x86,0x08	@ 000afad0 data
.org 0xafad4
	adds r0, r4, #0	@ 000afad4 201c
.org 0xafad6
	bl 0xb0200	@ 000afad6 00f093fb
.org 0xafada
	b.n 0xafae2	@ 000afada 02e0
.org 0xafadc
	adds r0, r4, #0	@ 000afadc 201c
.org 0xafade
	bl 0xb022c	@ 000afade 00f0a5fb
.org 0xafae2
	ldrb r3, [r4, #16]	@ 000afae2 237c
.org 0xafae4
	cmp r3, #1	@ 000afae4 012b
.org 0xafae6
	bne.n 0xafb2a	@ 000afae6 20d1
.org 0xafae8
	adds r2, r4, #0	@ 000afae8 221c
.org 0xafaea
	adds r2, #192	@ 000afaea c032
.org 0xafaec
	ldrb r0, [r2, #0]	@ 000afaec 1078
.org 0xafaee
	cmp r0, #0	@ 000afaee 0028
.org 0xafaf0
	beq.n 0xafb0e	@ 000afaf0 0dd0
.org 0xafaf2
	ldrb r0, [r4, #10]	@ 000afaf2 a07a
.org 0xafaf4
	movs r1, #1	@ 000afaf4 0121
.org 0xafaf6
	orrs r1, r0	@ 000afaf6 0143
.org 0xafaf8
	strb r1, [r4, #10]	@ 000afaf8 a172
.org 0xafafa
	ldrb r0, [r2, #0]	@ 000afafa 1078
.org 0xafafc
	subs r0, #1	@ 000afafc 0138
.org 0xafafe
	strb r0, [r2, #0]	@ 000afafe 1070
.org 0xafb00
	lsls r0, r0, #24	@ 000afb00 0006
.org 0xafb02
	cmp r0, #0	@ 000afb02 0028
.org 0xafb04
	bne.n 0xafb2a	@ 000afb04 11d1
.org 0xafb06
	adds r0, r4, #0	@ 000afb06 201c
.org 0xafb08
	adds r0, #193	@ 000afb08 c130
.org 0xafb0a
	strb r3, [r0, #0]	@ 000afb0a 0370
.org 0xafb0c
	b.n 0xafb2a	@ 000afb0c 0de0
.org 0xafb0e
	ldrb r0, [r4, #10]	@ 000afb0e a07a
.org 0xafb10
	movs r1, #254	@ 000afb10 fe21
.org 0xafb12
	ands r1, r0	@ 000afb12 0140
.org 0xafb14
	strb r1, [r4, #10]	@ 000afb14 a172
.org 0xafb16
	adds r1, r4, #0	@ 000afb16 211c
.org 0xafb18
	adds r1, #193	@ 000afb18 c131
.org 0xafb1a
	ldrb r0, [r1, #0]	@ 000afb1a 0878
.org 0xafb1c
	subs r0, #1	@ 000afb1c 0138
.org 0xafb1e
	strb r0, [r1, #0]	@ 000afb1e 0870
.org 0xafb20
	lsls r0, r0, #24	@ 000afb20 0006
.org 0xafb22
	cmp r0, #0	@ 000afb22 0028
.org 0xafb24
	bne.n 0xafb2a	@ 000afb24 01d1
.org 0xafb26
	movs r0, #3	@ 000afb26 0320
.org 0xafb28
	strb r0, [r2, #0]	@ 000afb28 1070
.org 0xafb2a
	adds r0, r4, #0	@ 000afb2a 201c
.org 0xafb2c
	bl 0x1cff0	@ 000afb2c 6df760fa
