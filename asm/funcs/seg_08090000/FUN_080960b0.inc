@ FUN_080960b0  entry 0x080960b0  size 156
.thumb
.org 0x960b0
FUN_080960b0:
	push {r4, r5, lr}	@ 000960b0 30b5
.org 0x960b2
	adds r4, r0, #0	@ 000960b2 041c
.org 0x960b4
	ldr r5, [r4, #40]	@ 000960b4 a56a
.org 0x960b6
	ldrb r0, [r4, #15]	@ 000960b6 e07b
.org 0x960b8
	cmp r0, #0	@ 000960b8 0028
.org 0x960ba
	bne.n 0x960c8	@ 000960ba 05d1
.org 0x960bc
	movs r0, #188	@ 000960bc bc20
.org 0x960be
	bl 0x2b10	@ 000960be 6cf727fd
.org 0x960c2
	ldrb r0, [r4, #15]	@ 000960c2 e07b
.org 0x960c4
	adds r0, #1	@ 000960c4 0130
.org 0x960c6
	strb r0, [r4, #15]	@ 000960c6 e073
.org 0x960c8
	ldrb r0, [r5, #12]	@ 000960c8 287b
.org 0x960ca
	cmp r0, #1	@ 000960ca 0128
.org 0x960cc
	bhi.n 0x960de	@ 000960cc 07d8
.org 0x960ce
	adds r0, r4, #0	@ 000960ce 201c
.org 0x960d0
	adds r0, #140	@ 000960d0 8c30
.org 0x960d2
	ldr r0, [r0, #0]	@ 000960d2 0068
.org 0x960d4
	movs r1, #128	@ 000960d4 8021
.org 0x960d6
	lsls r1, r1, #2	@ 000960d6 8900
.org 0x960d8
	ands r0, r1	@ 000960d8 0840
.org 0x960da
	cmp r0, #0	@ 000960da 0028
.org 0x960dc
	beq.n 0x960fc	@ 000960dc 0ed0
.org 0x960de
	ldr r1, [pc, #24]	@ 000960de 0649
.org 0x960e0
	ldrb r0, [r4, #9]	@ 000960e0 607a
.org 0x960e2
	lsls r0, r0, #2	@ 000960e2 8000
.org 0x960e4
	adds r0, r0, r1	@ 000960e4 4018
.org 0x960e6
	movs r1, #2	@ 000960e6 0221
.org 0x960e8
	str r1, [r4, #12]	@ 000960e8 e160
.org 0x960ea
	ldr r0, [r0, #0]	@ 000960ea 0068
.org 0x960ec
	ldr r0, [r0, #8]	@ 000960ec 8068
.org 0x960ee
	str r0, [r4, #20]	@ 000960ee 6061
.org 0x960f0
	adds r0, r4, #0	@ 000960f0 201c
.org 0x960f2
	bl 0x96224	@ 000960f2 00f097f8
.org 0x960f6
	b.n 0x9614a	@ 000960f6 28e0
.org 0x960f8
	.byte 0x40,0xdb,0x85,0x08	@ 000960f8 data
.org 0x960fc
	adds r0, r4, #0	@ 000960fc 201c
.org 0x960fe
	bl 0x1cff0	@ 000960fe 86f777ff
.org 0x96102
	adds r1, r4, #0	@ 00096102 211c
.org 0x96104
	adds r1, #184	@ 00096104 b831
.org 0x96106
	ldr r0, [r1, #0]	@ 00096106 0868
.org 0x96108
	subs r2, r0, #1	@ 00096108 421e
.org 0x9610a
	str r2, [r1, #0]	@ 0009610a 0a60
.org 0x9610c
	cmp r2, #0	@ 0009610c 002a
.org 0x9610e
	bne.n 0x9611a	@ 0009610e 04d1
.org 0x96110
	movs r0, #2	@ 00096110 0220
.org 0x96112
	strb r0, [r4, #13]	@ 00096112 6073
.org 0x96114
	strb r2, [r4, #14]	@ 00096114 a273
.org 0x96116
	strb r2, [r4, #15]	@ 00096116 e273
.org 0x96118
	b.n 0x9614a	@ 00096118 17e0
.org 0x9611a
	cmp r2, #29	@ 0009611a 1d2a
.org 0x9611c
	bgt.n 0x9612e	@ 0009611c 07dc
.org 0x9611e
	movs r0, #2	@ 0009611e 0220
.org 0x96120
	ands r2, r0	@ 00096120 0240
.org 0x96122
	cmp r2, #0	@ 00096122 002a
.org 0x96124
	bne.n 0x96142	@ 00096124 0dd1
.org 0x96126
	ldrb r1, [r4, #10]	@ 00096126 a17a
.org 0x96128
	movs r0, #254	@ 00096128 fe20
.org 0x9612a
	ands r0, r1	@ 0009612a 0840
.org 0x9612c
	b.n 0x96148	@ 0009612c 0ce0
.org 0x9612e
	cmp r2, #59	@ 0009612e 3b2a
.org 0x96130
	bgt.n 0x9614a	@ 00096130 0bdc
.org 0x96132
	movs r0, #1	@ 00096132 0120
.org 0x96134
	ands r2, r0	@ 00096134 0240
.org 0x96136
	cmp r2, #0	@ 00096136 002a
.org 0x96138
	bne.n 0x96142	@ 00096138 03d1
.org 0x9613a
	ldrb r1, [r4, #10]	@ 0009613a a17a
.org 0x9613c
	movs r0, #254	@ 0009613c fe20
.org 0x9613e
	ands r0, r1	@ 0009613e 0840
.org 0x96140
	b.n 0x96148	@ 00096140 02e0
.org 0x96142
	ldrb r1, [r4, #10]	@ 00096142 a17a
.org 0x96144
	movs r0, #1	@ 00096144 0120
.org 0x96146
	orrs r0, r1	@ 00096146 0843
.org 0x96148
	strb r0, [r4, #10]	@ 00096148 a072
.org 0x9614a
	pop {r4, r5}	@ 0009614a 30bc
