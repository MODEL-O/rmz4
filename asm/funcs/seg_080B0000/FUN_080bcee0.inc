@ FUN_080bcee0  entry 0x080bcee0  size 228
.thumb
.org 0xbcee0
FUN_080bcee0:
	push {r4, r5, lr}	@ 000bcee0 30b5
.org 0xbcee2
	adds r4, r0, #0	@ 000bcee2 041c
.org 0xbcee4
	adds r0, #180	@ 000bcee4 b430
.org 0xbcee6
	ldr r0, [r0, #0]	@ 000bcee6 0068
.org 0xbcee8
	ldr r1, [pc, #72]	@ 000bcee8 1249
.org 0xbceea
	adds r0, r0, r1	@ 000bceea 4018
.org 0xbceec
	ldr r1, [r4, #84]	@ 000bceec 616d
.org 0xbceee
	cmp r1, r0	@ 000bceee 8142
.org 0xbcef0
	blt.n 0xbcefc	@ 000bcef0 04db
.org 0xbcef2
	adds r0, r4, #0	@ 000bcef2 201c
.org 0xbcef4
	adds r0, #189	@ 000bcef4 bd30
.org 0xbcef6
	ldrb r0, [r0, #0]	@ 000bcef6 0078
.org 0xbcef8
	cmp r0, #0	@ 000bcef8 0028
.org 0xbcefa
	beq.n 0xbcf3c	@ 000bcefa 1fd0
.org 0xbcefc
	ldrb r1, [r4, #10]	@ 000bcefc a17a
.org 0xbcefe
	movs r0, #254	@ 000bcefe fe20
.org 0xbcf00
	ands r0, r1	@ 000bcf00 0840
.org 0xbcf02
	movs r2, #0	@ 000bcf02 0022
.org 0xbcf04
	movs r1, #253	@ 000bcf04 fd21
.org 0xbcf06
	ands r0, r1	@ 000bcf06 0840
.org 0xbcf08
	strb r0, [r4, #10]	@ 000bcf08 a072
.org 0xbcf0a
	adds r0, r4, #0	@ 000bcf0a 201c
.org 0xbcf0c
	adds r0, #140	@ 000bcf0c 8c30
.org 0xbcf0e
	str r2, [r0, #0]	@ 000bcf0e 0260
.org 0xbcf10
	adds r0, #4	@ 000bcf10 0430
.org 0xbcf12
	str r2, [r0, #0]	@ 000bcf12 0260
.org 0xbcf14
	adds r0, #4	@ 000bcf14 0430
.org 0xbcf16
	strb r2, [r0, #0]	@ 000bcf16 0270
.org 0xbcf18
	ldrb r1, [r4, #10]	@ 000bcf18 a17a
.org 0xbcf1a
	movs r0, #251	@ 000bcf1a fb20
.org 0xbcf1c
	ands r0, r1	@ 000bcf1c 0840
.org 0xbcf1e
	strb r0, [r4, #10]	@ 000bcf1e a072
.org 0xbcf20
	ldr r1, [pc, #20]	@ 000bcf20 0549
.org 0xbcf22
	ldrb r0, [r4, #9]	@ 000bcf22 607a
.org 0xbcf24
	lsls r0, r0, #2	@ 000bcf24 8000
.org 0xbcf26
	adds r0, r0, r1	@ 000bcf26 4018
.org 0xbcf28
	movs r1, #3	@ 000bcf28 0321
.org 0xbcf2a
	str r1, [r4, #12]	@ 000bcf2a e160
.org 0xbcf2c
	ldr r0, [r0, #0]	@ 000bcf2c 0068
.org 0xbcf2e
	ldr r0, [r0, #12]	@ 000bcf2e c068
.org 0xbcf30
	str r0, [r4, #20]	@ 000bcf30 6061
.org 0xbcf32
	b.n 0xbcfd2	@ 000bcf32 4ee0
.org 0xbcf34
	.byte 0x00,0xd4,0xfe,0xff	@ 000bcf34 data
.org 0xbcf38
	.byte 0x40,0xdb,0x85,0x08	@ 000bcf38 data
.org 0xbcf3c
	adds r5, r4, #0	@ 000bcf3c 251c
.org 0xbcf3e
	adds r5, #140	@ 000bcf3e 8c35
.org 0xbcf40
	ldr r0, [r5, #0]	@ 000bcf40 2868
.org 0xbcf42
	movs r1, #128	@ 000bcf42 8021
.org 0xbcf44
	lsls r1, r1, #2	@ 000bcf44 8900
.org 0xbcf46
	ands r0, r1	@ 000bcf46 0840
.org 0xbcf48
	cmp r0, #0	@ 000bcf48 0028
.org 0xbcf4a
	beq.n 0xbcf6c	@ 000bcf4a 0fd0
.org 0xbcf4c
	ldr r1, [pc, #24]	@ 000bcf4c 0649
.org 0xbcf4e
	ldrb r0, [r4, #9]	@ 000bcf4e 607a
.org 0xbcf50
	lsls r0, r0, #2	@ 000bcf50 8000
.org 0xbcf52
	adds r0, r0, r1	@ 000bcf52 4018
.org 0xbcf54
	movs r1, #2	@ 000bcf54 0221
.org 0xbcf56
	str r1, [r4, #12]	@ 000bcf56 e160
.org 0xbcf58
	ldr r0, [r0, #0]	@ 000bcf58 0068
.org 0xbcf5a
	ldr r0, [r0, #8]	@ 000bcf5a 8068
.org 0xbcf5c
	str r0, [r4, #20]	@ 000bcf5c 6061
.org 0xbcf5e
	adds r0, r4, #0	@ 000bcf5e 201c
.org 0xbcf60
	bl 0xbcfd8	@ 000bcf60 00f03af8
.org 0xbcf64
	b.n 0xbcfd2	@ 000bcf64 35e0
.org 0xbcf66
	.byte 0x00	@ 000bcf66 data
.org 0xbcf67
	.byte 0x00	@ 000bcf67 data
.org 0xbcf68
	.byte 0x40,0xdb,0x85,0x08	@ 000bcf68 data
.org 0xbcf6c
	adds r0, r4, #0	@ 000bcf6c 201c
.org 0xbcf6e
	bl 0x1cff0	@ 000bcf6e 60f73ff8
.org 0xbcf72
	ldr r0, [pc, #80]	@ 000bcf72 1448
.org 0xbcf74
	ldr r1, [r0, #20]	@ 000bcf74 4169
.org 0xbcf76
	cmp r1, #0	@ 000bcf76 0029
.org 0xbcf78
	bne.n 0xbcf8e	@ 000bcf78 09d1
.org 0xbcf7a
	str r1, [r5, #0]	@ 000bcf7a 2960
.org 0xbcf7c
	adds r0, r4, #0	@ 000bcf7c 201c
.org 0xbcf7e
	adds r0, #144	@ 000bcf7e 9030
.org 0xbcf80
	str r1, [r0, #0]	@ 000bcf80 0160
.org 0xbcf82
	adds r0, #4	@ 000bcf82 0430
.org 0xbcf84
	strb r1, [r0, #0]	@ 000bcf84 0170
.org 0xbcf86
	ldrb r1, [r4, #10]	@ 000bcf86 a17a
.org 0xbcf88
	movs r0, #251	@ 000bcf88 fb20
.org 0xbcf8a
	ands r0, r1	@ 000bcf8a 0840
.org 0xbcf8c
	strb r0, [r4, #10]	@ 000bcf8c a072
.org 0xbcf8e
	ldr r0, [r4, #84]	@ 000bcf8e 606d
.org 0xbcf90
	ldr r1, [r4, #92]	@ 000bcf90 e16d
.org 0xbcf92
	adds r0, r0, r1	@ 000bcf92 4018
.org 0xbcf94
	str r0, [r4, #84]	@ 000bcf94 6065
.org 0xbcf96
	ldr r0, [r4, #88]	@ 000bcf96 a06d
.org 0xbcf98
	ldr r1, [r4, #96]	@ 000bcf98 216e
.org 0xbcf9a
	adds r2, r0, r1	@ 000bcf9a 4218
.org 0xbcf9c
	str r2, [r4, #88]	@ 000bcf9c a265
.org 0xbcf9e
	adds r1, #64	@ 000bcf9e 4031
.org 0xbcfa0
	str r1, [r4, #96]	@ 000bcfa0 2166
.org 0xbcfa2
	cmp r1, #0	@ 000bcfa2 0029
.org 0xbcfa4
	ble.n 0xbcfd2	@ 000bcfa4 15dd
.org 0xbcfa6
	adds r0, r4, #0	@ 000bcfa6 201c
.org 0xbcfa8
	adds r0, #184	@ 000bcfa8 b830
.org 0xbcfaa
	ldr r0, [r0, #0]	@ 000bcfaa 0068
.org 0xbcfac
	cmp r2, r0	@ 000bcfac 8242
.org 0xbcfae
	ble.n 0xbcfd2	@ 000bcfae 10dd
.org 0xbcfb0
	str r0, [r4, #88]	@ 000bcfb0 a065
.org 0xbcfb2
	ldrb r0, [r4, #16]	@ 000bcfb2 207c
.org 0xbcfb4
	cmp r0, #0	@ 000bcfb4 0028
.org 0xbcfb6
	bne.n 0xbcfc8	@ 000bcfb6 07d1
.org 0xbcfb8
	lsls r0, r1, #2	@ 000bcfb8 8800
.org 0xbcfba
	movs r1, #6	@ 000bcfba 0621
.org 0xbcfbc
	bl 0x128fb8	@ 000bcfbc 6bf0fcff
.org 0xbcfc0
	b.n 0xbcfce	@ 000bcfc0 05e0
.org 0xbcfc2
	.byte 0x00	@ 000bcfc2 data
.org 0xbcfc3
	.byte 0x00	@ 000bcfc3 data
