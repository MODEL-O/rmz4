@ FUN_080360cc  entry 0x080360cc  size 170
.thumb
.org 0x360cc
FUN_080360cc:
	push {r4, r5, lr}	@ 000360cc 30b5
.org 0x360ce
	adds r4, r0, #0	@ 000360ce 041c
.org 0x360d0
	movs r0, #129	@ 000360d0 8120
.org 0x360d2
	lsls r0, r0, #1	@ 000360d2 4000
.org 0x360d4
	adds r5, r4, r0	@ 000360d4 2518
.org 0x360d6
	ldrb r0, [r5, #0]	@ 000360d6 2878
.org 0x360d8
	cmp r0, #1	@ 000360d8 0128
.org 0x360da
	beq.n 0x36106	@ 000360da 14d0
.org 0x360dc
	cmp r0, #1	@ 000360dc 0128
.org 0x360de
	bgt.n 0x360e6	@ 000360de 02dc
.org 0x360e0
	cmp r0, #0	@ 000360e0 0028
.org 0x360e2
	beq.n 0x360f0	@ 000360e2 05d0
.org 0x360e4
	b.n 0x3617e	@ 000360e4 4be0
.org 0x360e6
	cmp r0, #2	@ 000360e6 0228
.org 0x360e8
	beq.n 0x36120	@ 000360e8 1ad0
.org 0x360ea
	cmp r0, #3	@ 000360ea 0328
.org 0x360ec
	beq.n 0x36134	@ 000360ec 22d0
.org 0x360ee
	b.n 0x3617e	@ 000360ee 46e0
.org 0x360f0
	ldr r1, [pc, #104]	@ 000360f0 1a49
.org 0x360f2
	adds r0, r4, #0	@ 000360f2 201c
.org 0x360f4
	bl 0x1cf00	@ 000360f4 e6f704ff
.org 0x360f8
	adds r0, r4, #0	@ 000360f8 201c
.org 0x360fa
	movs r1, #17	@ 000360fa 1121
.org 0x360fc
	bl 0x3c464	@ 000360fc 06f0b2f9
.org 0x36100
	ldrb r0, [r5, #0]	@ 00036100 2878
.org 0x36102
	adds r0, #1	@ 00036102 0130
.org 0x36104
	strb r0, [r5, #0]	@ 00036104 2870
.org 0x36106
	ldr r1, [pc, #84]	@ 00036106 1549
.org 0x36108
	adds r0, r4, #0	@ 00036108 201c
.org 0x3610a
	bl 0x3a3b0	@ 0003610a 04f051f9
.org 0x3610e
	ldrb r0, [r4, #14]	@ 0003610e a07b
.org 0x36110
	cmp r0, #2	@ 00036110 0228
.org 0x36112
	bne.n 0x3617e	@ 00036112 34d1
.org 0x36114
	movs r0, #129	@ 00036114 8120
.org 0x36116
	lsls r0, r0, #1	@ 00036116 4000
.org 0x36118
	adds r1, r4, r0	@ 00036118 2118
.org 0x3611a
	ldrb r0, [r1, #0]	@ 0003611a 0878
.org 0x3611c
	adds r0, #1	@ 0003611c 0130
.org 0x3611e
	strb r0, [r1, #0]	@ 0003611e 0870
.org 0x36120
	ldr r1, [pc, #60]	@ 00036120 0f49
.org 0x36122
	adds r0, r4, #0	@ 00036122 201c
.org 0x36124
	bl 0x1cf00	@ 00036124 e6f7ecfe
.org 0x36128
	movs r0, #129	@ 00036128 8120
.org 0x3612a
	lsls r0, r0, #1	@ 0003612a 4000
.org 0x3612c
	adds r1, r4, r0	@ 0003612c 2118
.org 0x3612e
	ldrb r0, [r1, #0]	@ 0003612e 0878
.org 0x36130
	adds r0, #1	@ 00036130 0130
.org 0x36132
	strb r0, [r1, #0]	@ 00036132 0870
.org 0x36134
	ldr r1, [pc, #40]	@ 00036134 0a49
.org 0x36136
	adds r0, r4, #0	@ 00036136 201c
.org 0x36138
	bl 0x3a3b0	@ 00036138 04f03af9
.org 0x3613c
	adds r0, r4, #0	@ 0003613c 201c
.org 0x3613e
	adds r0, #115	@ 0003613e 7330
.org 0x36140
	ldrb r0, [r0, #0]	@ 00036140 0078
.org 0x36142
	cmp r0, #3	@ 00036142 0328
.org 0x36144
	bne.n 0x3617e	@ 00036144 1bd1
.org 0x36146
	ldrb r0, [r4, #14]	@ 00036146 a07b
.org 0x36148
	cmp r0, #1	@ 00036148 0128
.org 0x3614a
	bne.n 0x36168	@ 0003614a 0dd1
.org 0x3614c
	ldr r1, [pc, #20]	@ 0003614c 0549
.org 0x3614e
	adds r0, r4, #0	@ 0003614e 201c
.org 0x36150
	movs r2, #2	@ 00036150 0222
.org 0x36152
	movs r3, #1	@ 00036152 0123
.org 0x36154
	bl 0x1cfc8	@ 00036154 e6f738ff
.org 0x36158
	b.n 0x36174	@ 00036158 0ce0
.org 0x3615a
	.byte 0x00	@ 0003615a data
.org 0x3615b
	.byte 0x00	@ 0003615b data
.org 0x3615c
	.byte 0x01,0x12,0x00,0x00	@ 0003615c data
.org 0x36160
	.byte 0x02,0x12,0x00,0x00	@ 00036160 data
.org 0x36164
	.byte 0x03,0x04,0x00,0x00	@ 00036164 data
.org 0x36168
	ldr r1, [pc, #24]	@ 00036168 0649
.org 0x3616a
	adds r0, r4, #0	@ 0003616a 201c
.org 0x3616c
	movs r2, #2	@ 0003616c 0222
.org 0x3616e
	movs r3, #1	@ 0003616e 0123
.org 0x36170
	bl 0x1cfc8	@ 00036170 e6f72aff
.org 0x36174
	movs r0, #128	@ 00036174 8020
