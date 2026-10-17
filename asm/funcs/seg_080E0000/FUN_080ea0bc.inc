@ FUN_080ea0bc  entry 0x080ea0bc  size 178
.thumb
.org 0xea0bc
FUN_080ea0bc:
	push {r4, r5, lr}	@ 000ea0bc 30b5
.org 0xea0be
	adds r5, r0, #0	@ 000ea0be 051c
.org 0xea0c0
	ldrb r4, [r5, #14]	@ 000ea0c0 ac7b
.org 0xea0c2
	cmp r4, #1	@ 000ea0c2 012c
.org 0xea0c4
	beq.n 0xea0da	@ 000ea0c4 09d0
.org 0xea0c6
	cmp r4, #1	@ 000ea0c6 012c
.org 0xea0c8
	bgt.n 0xea0d0	@ 000ea0c8 02dc
.org 0xea0ca
	cmp r4, #0	@ 000ea0ca 002c
.org 0xea0cc
	beq.n 0xea0d6	@ 000ea0cc 03d0
.org 0xea0ce
	b.n 0xea182	@ 000ea0ce 58e0
.org 0xea0d0
	cmp r4, #2	@ 000ea0d0 022c
.org 0xea0d2
	beq.n 0xea160	@ 000ea0d2 45d0
.org 0xea0d4
	b.n 0xea182	@ 000ea0d4 55e0
.org 0xea0d6
	movs r0, #1	@ 000ea0d6 0120
.org 0xea0d8
	strb r0, [r5, #14]	@ 000ea0d8 a873
.org 0xea0da
	adds r0, r5, #0	@ 000ea0da 281c
.org 0xea0dc
	bl 0x1cff0	@ 000ea0dc 32f788ff
.org 0xea0e0
	adds r0, r5, #0	@ 000ea0e0 281c
.org 0xea0e2
	adds r0, #115	@ 000ea0e2 7330
.org 0xea0e4
	ldrb r0, [r0, #0]	@ 000ea0e4 0078
.org 0xea0e6
	cmp r0, #3	@ 000ea0e6 0328
.org 0xea0e8
	bne.n 0xea182	@ 000ea0e8 4bd1
.org 0xea0ea
	ldr r2, [pc, #92]	@ 000ea0ea 174a
.org 0xea0ec
	ldrb r1, [r2, #20]	@ 000ea0ec 117d
.org 0xea0ee
	movs r0, #64	@ 000ea0ee 4020
.org 0xea0f0
	orrs r0, r1	@ 000ea0f0 0843
.org 0xea0f2
	strb r0, [r2, #20]	@ 000ea0f2 1075
.org 0xea0f4
	adds r4, r5, #0	@ 000ea0f4 2c1c
.org 0xea0f6
	adds r4, #184	@ 000ea0f6 b834
.org 0xea0f8
	movs r0, #19	@ 000ea0f8 1320
.org 0xea0fa
	strb r0, [r4, #0]	@ 000ea0fa 2070
.org 0xea0fc
	ldr r0, [pc, #76]	@ 000ea0fc 1348
.org 0xea0fe
	ldr r1, [pc, #80]	@ 000ea0fe 1449
.org 0xea100
	ldrh r1, [r1, #38]	@ 000ea100 c98c
.org 0xea102
	ldrh r2, [r0, #6]	@ 000ea102 c288
.org 0xea104
	lsrs r2, r2, #6	@ 000ea104 9209
.org 0xea106
	subs r1, r1, r2	@ 000ea106 891a
.org 0xea108
	lsls r1, r1, #5	@ 000ea108 4901
.org 0xea10a
	movs r2, #128	@ 000ea10a 8022
.org 0xea10c
	lsls r2, r2, #9	@ 000ea10c 5202
.org 0xea10e
	adds r1, r1, r2	@ 000ea10e 8918
.org 0xea110
	bl 0x1ea4	@ 000ea110 17f7c8fe
.org 0xea114
	ldr r0, [pc, #60]	@ 000ea114 0f48
.org 0xea116
	ldr r1, [pc, #64]	@ 000ea116 1049
.org 0xea118
	ldrh r1, [r1, #38]	@ 000ea118 c98c
.org 0xea11a
	ldrb r2, [r0, #7]	@ 000ea11a c279
.org 0xea11c
	subs r1, r1, r2	@ 000ea11c 891a
.org 0xea11e
	lsls r1, r1, #5	@ 000ea11e 4901
.org 0xea120
	movs r2, #128	@ 000ea120 8022
.org 0xea122
	lsls r2, r2, #2	@ 000ea122 9200
.org 0xea124
	adds r1, r1, r2	@ 000ea124 8918
.org 0xea126
	bl 0x2208	@ 000ea126 18f76ff8
.org 0xea12a
	ldrb r1, [r4, #0]	@ 000ea12a 2178
.org 0xea12c
	lsls r1, r1, #8	@ 000ea12c 0902
.org 0xea12e
	adds r0, r5, #0	@ 000ea12e 281c
.org 0xea130
	bl 0x1cf00	@ 000ea130 32f7e6fe
.org 0xea134
	adds r0, r5, #0	@ 000ea134 281c
.org 0xea136
	bl 0x1cff0	@ 000ea136 32f75bff
.org 0xea13a
	ldr r0, [pc, #32]	@ 000ea13a 0848
.org 0xea13c
	bl 0xe9590	@ 000ea13c fff728fa
.org 0xea140
	ldrb r0, [r5, #14]	@ 000ea140 a87b
.org 0xea142
	adds r0, #1	@ 000ea142 0130
.org 0xea144
	b.n 0xea180	@ 000ea144 1ce0
.org 0xea146
	.byte 0x00	@ 000ea146 data
.org 0xea147
	.byte 0x00	@ 000ea147 data
.org 0xea148
	.byte 0xb0,0xe8,0x02,0x02	@ 000ea148 data
.org 0xea14c
	.byte 0x7c,0x41,0xc4,0x08	@ 000ea14c data
.org 0xea150
	.byte 0x40,0xe0,0x02,0x02	@ 000ea150 data
.org 0xea154
	.byte 0x88,0x41,0xc4,0x08	@ 000ea154 data
.org 0xea158
	.byte 0x40,0xde,0x02,0x02	@ 000ea158 data
.org 0xea15c
	.byte 0xdd,0xa1,0x0e,0x08	@ 000ea15c data
.org 0xea160
	adds r0, r5, #0	@ 000ea160 281c
.org 0xea162
	bl 0x1cff0	@ 000ea162 32f745ff
.org 0xea166
	ldrb r0, [r5, #16]	@ 000ea166 287c
.org 0xea168
	ands r4, r0	@ 000ea168 0440
.org 0xea16a
	cmp r4, #0	@ 000ea16a 002c
.org 0xea16c
	beq.n 0xea182	@ 000ea16c 09d0
