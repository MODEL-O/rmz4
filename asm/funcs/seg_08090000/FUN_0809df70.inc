@ FUN_0809df70  entry 0x0809df70  size 212
.thumb
.org 0x9df70
FUN_0809df70:
	push {r4, r5, r6, lr}	@ 0009df70 70b5
.org 0x9df72
	adds r4, r0, #0	@ 0009df72 041c
.org 0x9df74
	ldrb r5, [r4, #14]	@ 0009df74 a57b
.org 0x9df76
	cmp r5, #0	@ 0009df76 002d
.org 0x9df78
	bne.n 0x9dfaa	@ 0009df78 17d1
.org 0x9df7a
	ldr r1, [pc, #24]	@ 0009df7a 0649
.org 0x9df7c
	bl 0x1cf00	@ 0009df7c 7ef7c0ff
.org 0x9df80
	ldr r0, [pc, #20]	@ 0009df80 0548
.org 0x9df82
	ldr r0, [r0, #0]	@ 0009df82 0068
.org 0x9df84
	ldr r1, [r4, #84]	@ 0009df84 616d
.org 0x9df86
	ldr r0, [r0, #84]	@ 0009df86 406d
.org 0x9df88
	cmp r1, r0	@ 0009df88 8142
.org 0x9df8a
	ble.n 0x9df9c	@ 0009df8a 07dd
.org 0x9df8c
	adds r0, r4, #0	@ 0009df8c 201c
.org 0x9df8e
	adds r0, #188	@ 0009df8e bc30
.org 0x9df90
	strb r5, [r0, #0]	@ 0009df90 0570
.org 0x9df92
	b.n 0x9dfa4	@ 0009df92 07e0
.org 0x9df94
	.byte 0x05,0x6e,0x00,0x00	@ 0009df94 data
.org 0x9df98
	.byte 0xf0,0xdb,0x02,0x02	@ 0009df98 data
.org 0x9df9c
	adds r1, r4, #0	@ 0009df9c 211c
.org 0x9df9e
	adds r1, #188	@ 0009df9e bc31
.org 0x9dfa0
	movs r0, #1	@ 0009dfa0 0120
.org 0x9dfa2
	strb r0, [r1, #0]	@ 0009dfa2 0870
.org 0x9dfa4
	ldrb r0, [r4, #14]	@ 0009dfa4 a07b
.org 0x9dfa6
	adds r0, #1	@ 0009dfa6 0130
.org 0x9dfa8
	strb r0, [r4, #14]	@ 0009dfa8 a073
.org 0x9dfaa
	adds r0, r4, #0	@ 0009dfaa 201c
.org 0x9dfac
	bl 0x1cff0	@ 0009dfac 7ff720f8
.org 0x9dfb0
	adds r0, r4, #0	@ 0009dfb0 201c
.org 0x9dfb2
	adds r0, #192	@ 0009dfb2 c030
.org 0x9dfb4
	ldr r0, [r0, #0]	@ 0009dfb4 0068
.org 0x9dfb6
	cmp r0, #0	@ 0009dfb6 0028
.org 0x9dfb8
	bne.n 0x9e050	@ 0009dfb8 4ad1
.org 0x9dfba
	ldrb r0, [r4, #19]	@ 0009dfba e07c
.org 0x9dfbc
	adds r1, r0, #0	@ 0009dfbc 011c
.org 0x9dfbe
	adds r1, #255	@ 0009dfbe ff31
.org 0x9dfc0
	strb r1, [r4, #19]	@ 0009dfc0 e174
.org 0x9dfc2
	lsls r0, r0, #24	@ 0009dfc2 0006
.org 0x9dfc4
	lsrs r0, r0, #24	@ 0009dfc4 000e
.org 0x9dfc6
	movs r1, #1	@ 0009dfc6 0121
.org 0x9dfc8
	ands r0, r1	@ 0009dfc8 0840
.org 0x9dfca
	cmp r0, #0	@ 0009dfca 0028
.org 0x9dfcc
	bne.n 0x9e024	@ 0009dfcc 2ad1
.org 0x9dfce
	ldr r6, [pc, #116]	@ 0009dfce 1d4e
.org 0x9dfd0
	adds r5, r4, #0	@ 0009dfd0 251c
.org 0x9dfd2
	adds r5, #188	@ 0009dfd2 bc35
.org 0x9dfd4
	ldrb r0, [r5, #0]	@ 0009dfd4 2878
.org 0x9dfd6
	lsls r0, r0, #3	@ 0009dfd6 c000
.org 0x9dfd8
	adds r0, r0, r6	@ 0009dfd8 8019
.org 0x9dfda
	ldr r1, [r0, #0]	@ 0009dfda 0168
.org 0x9dfdc
	lsls r1, r1, #8	@ 0009dfdc 0902
.org 0x9dfde
	ldr r0, [r4, #84]	@ 0009dfde 606d
.org 0x9dfe0
	adds r0, r0, r1	@ 0009dfe0 4018
.org 0x9dfe2
	ldr r1, [r4, #88]	@ 0009dfe2 a16d
.org 0x9dfe4
	ldr r2, [pc, #96]	@ 0009dfe4 184a
.org 0x9dfe6
	adds r1, r1, r2	@ 0009dfe6 8918
.org 0x9dfe8
	bl 0x7c7c	@ 0009dfe8 69f748fe
.org 0x9dfec
	lsls r0, r0, #16	@ 0009dfec 0004
.org 0x9dfee
	cmp r0, #0	@ 0009dfee 0028
.org 0x9dff0
	bne.n 0x9e024	@ 0009dff0 18d1
.org 0x9dff2
	ldrb r0, [r5, #0]	@ 0009dff2 2878
.org 0x9dff4
	lsls r0, r0, #3	@ 0009dff4 c000
.org 0x9dff6
	adds r0, r0, r6	@ 0009dff6 8019
.org 0x9dff8
	ldr r1, [r0, #0]	@ 0009dff8 0168
.org 0x9dffa
	lsls r1, r1, #8	@ 0009dffa 0902
.org 0x9dffc
	ldr r0, [r4, #84]	@ 0009dffc 606d
.org 0x9dffe
	adds r0, r0, r1	@ 0009dffe 4018
.org 0x9e000
	ldr r1, [r4, #88]	@ 0009e000 a16d
.org 0x9e002
	movs r2, #128	@ 0009e002 8022
.org 0x9e004
	lsls r2, r2, #4	@ 0009e004 1201
.org 0x9e006
	adds r1, r1, r2	@ 0009e006 8918
.org 0x9e008
	bl 0x7c7c	@ 0009e008 69f738fe
.org 0x9e00c
	lsls r0, r0, #16	@ 0009e00c 0004
.org 0x9e00e
	cmp r0, #0	@ 0009e00e 0028
.org 0x9e010
	beq.n 0x9e024	@ 0009e010 08d0
.org 0x9e012
	ldrb r0, [r5, #0]	@ 0009e012 2878
.org 0x9e014
	lsls r0, r0, #3	@ 0009e014 c000
.org 0x9e016
	adds r1, r6, #4	@ 0009e016 311d
.org 0x9e018
	adds r0, r0, r1	@ 0009e018 4018
.org 0x9e01a
	ldr r1, [r0, #0]	@ 0009e01a 0168
.org 0x9e01c
	lsls r1, r1, #8	@ 0009e01c 0902
.org 0x9e01e
	ldr r0, [r4, #84]	@ 0009e01e 606d
.org 0x9e020
	adds r0, r0, r1	@ 0009e020 4018
.org 0x9e022
	str r0, [r4, #84]	@ 0009e022 6065
.org 0x9e024
	ldrb r1, [r4, #19]	@ 0009e024 e17c
.org 0x9e026
	cmp r1, #0	@ 0009e026 0029
.org 0x9e028
	bne.n 0x9e050	@ 0009e028 12d1
.org 0x9e02a
	movs r0, #4	@ 0009e02a 0420
.org 0x9e02c
	strb r0, [r4, #13]	@ 0009e02c 6073
.org 0x9e02e
	strb r1, [r4, #14]	@ 0009e02e a173
.org 0x9e030
	adds r1, r4, #0	@ 0009e030 211c
.org 0x9e032
	adds r1, #189	@ 0009e032 bd31
.org 0x9e034
	movs r0, #1	@ 0009e034 0120
.org 0x9e036
	strb r0, [r1, #0]	@ 0009e036 0870
.org 0x9e038
	ldrb r0, [r4, #18]	@ 0009e038 a07c
.org 0x9e03a
	cmp r0, #7	@ 0009e03a 0728
.org 0x9e03c
	bls.n 0x9e04c	@ 0009e03c 06d9
.org 0x9e03e
	subs r0, #8	@ 0009e03e 0838
.org 0x9e040
	b.n 0x9e04e	@ 0009e040 05e0
.org 0x9e042
	.byte 0x00	@ 0009e042 data
.org 0x9e043
	.byte 0x00	@ 0009e043 data
