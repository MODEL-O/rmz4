@ FUN_08106d60  entry 0x08106d60  size 136
.thumb
.org 0x106d60
FUN_08106d60:
	push {r4, lr}	@ 00106d60 10b5
.org 0x106d62
	adds r4, r0, #0	@ 00106d62 041c
.org 0x106d64
	ldrb r0, [r4, #13]	@ 00106d64 607b
.org 0x106d66
	cmp r0, #1	@ 00106d66 0128
.org 0x106d68
	beq.n 0x106d9a	@ 00106d68 17d0
.org 0x106d6a
	cmp r0, #1	@ 00106d6a 0128
.org 0x106d6c
	bgt.n 0x106d74	@ 00106d6c 02dc
.org 0x106d6e
	cmp r0, #0	@ 00106d6e 0028
.org 0x106d70
	beq.n 0x106d7a	@ 00106d70 03d0
.org 0x106d72
	b.n 0x106dec	@ 00106d72 3be0
.org 0x106d74
	cmp r0, #2	@ 00106d74 0228
.org 0x106d76
	beq.n 0x106de6	@ 00106d76 36d0
.org 0x106d78
	b.n 0x106dec	@ 00106d78 38e0
.org 0x106d7a
	ldr r0, [r4, #84]	@ 00106d7a 606d
.org 0x106d7c
	ldr r1, [r4, #88]	@ 00106d7c a16d
.org 0x106d7e
	bl 0x8534	@ 00106d7e 01f7d9fb
.org 0x106d82
	str r0, [r4, #88]	@ 00106d82 a065
.org 0x106d84
	ldr r0, [r4, #84]	@ 00106d84 606d
.org 0x106d86
	ldr r1, [pc, #40]	@ 00106d86 0a49
.org 0x106d88
	adds r0, r0, r1	@ 00106d88 4018
.org 0x106d8a
	str r0, [r4, #84]	@ 00106d8a 6065
.org 0x106d8c
	ldr r1, [pc, #36]	@ 00106d8c 0949
.org 0x106d8e
	adds r0, r4, #0	@ 00106d8e 201c
.org 0x106d90
	bl 0x1cf00	@ 00106d90 16f7b6f8
.org 0x106d94
	ldrb r0, [r4, #13]	@ 00106d94 607b
.org 0x106d96
	adds r0, #1	@ 00106d96 0130
.org 0x106d98
	strb r0, [r4, #13]	@ 00106d98 6073
.org 0x106d9a
	ldr r0, [r4, #24]	@ 00106d9a a069
.org 0x106d9c
	ldrb r1, [r0, #9]	@ 00106d9c 417a
.org 0x106d9e
	movs r0, #1	@ 00106d9e 0120
.org 0x106da0
	ands r0, r1	@ 00106da0 0840
.org 0x106da2
	cmp r0, #0	@ 00106da2 0028
.org 0x106da4
	bne.n 0x106db8	@ 00106da4 08d1
.org 0x106da6
	adds r0, r4, #0	@ 00106da6 201c
.org 0x106da8
	bl 0x1cff0	@ 00106da8 16f722f9
.org 0x106dac
	b.n 0x106dec	@ 00106dac 1ee0
.org 0x106dae
	.byte 0x00	@ 00106dae data
.org 0x106daf
	.byte 0x00	@ 00106daf data
.org 0x106db0
	.byte 0x00,0xf6,0xff,0xff	@ 00106db0 data
.org 0x106db4
	.byte 0x23,0xa5,0x00,0x00	@ 00106db4 data
.org 0x106db8
	ldr r0, [r4, #84]	@ 00106db8 606d
.org 0x106dba
	movs r1, #160	@ 00106dba a021
.org 0x106dbc
	lsls r1, r1, #4	@ 00106dbc 0901
.org 0x106dbe
	adds r0, r0, r1	@ 00106dbe 4018
.org 0x106dc0
	str r0, [r4, #84]	@ 00106dc0 6065
.org 0x106dc2
	movs r2, #0	@ 00106dc2 0022
.org 0x106dc4
	ldrb r1, [r4, #10]	@ 00106dc4 a17a
.org 0x106dc6
	movs r0, #239	@ 00106dc6 ef20
.org 0x106dc8
	ands r0, r1	@ 00106dc8 0840
.org 0x106dca
	strb r0, [r4, #10]	@ 00106dca a072
.org 0x106dcc
	adds r0, r4, #0	@ 00106dcc 201c
.org 0x106dce
	adds r0, #76	@ 00106dce 4c30
.org 0x106dd0
	strb r2, [r0, #0]	@ 00106dd0 0270
.org 0x106dd2
	adds r2, r4, #0	@ 00106dd2 221c
.org 0x106dd4
	adds r2, #74	@ 00106dd4 4a32
.org 0x106dd6
	ldrb r1, [r2, #0]	@ 00106dd6 1178
.org 0x106dd8
	movs r0, #17	@ 00106dd8 1120
.org 0x106dda
	negs r0, r0	@ 00106dda 4042
.org 0x106ddc
	ands r0, r1	@ 00106ddc 0840
.org 0x106dde
	strb r0, [r2, #0]	@ 00106dde 1070
.org 0x106de0
	ldrb r0, [r4, #13]	@ 00106de0 607b
.org 0x106de2
	adds r0, #1	@ 00106de2 0130
.org 0x106de4
	strb r0, [r4, #13]	@ 00106de4 6073
.org 0x106de6
	adds r0, r4, #0	@ 00106de6 201c
