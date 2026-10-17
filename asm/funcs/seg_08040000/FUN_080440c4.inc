@ FUN_080440c4  entry 0x080440c4  size 218
.thumb
.org 0x440c4
FUN_080440c4:
	push {r4, r5, lr}	@ 000440c4 30b5
.org 0x440c6
	adds r5, r0, #0	@ 000440c6 051c
.org 0x440c8
	adds r4, r1, #0	@ 000440c8 0c1c
.org 0x440ca
	ldr r0, [pc, #64]	@ 000440ca 1048
.org 0x440cc
	ldr r0, [r0, #0]	@ 000440cc 0068
.org 0x440ce
	bl 0x5500	@ 000440ce c1f717fa
.org 0x440d2
	adds r3, r0, #0	@ 000440d2 031c
.org 0x440d4
	cmp r3, #0	@ 000440d4 002b
.org 0x440d6
	beq.n 0x441b8	@ 000440d6 6fd0
.org 0x440d8
	adds r0, r5, #0	@ 000440d8 281c
.org 0x440da
	adds r0, #248	@ 000440da f830
.org 0x440dc
	ldrb r0, [r0, #0]	@ 000440dc 0078
.org 0x440de
	cmp r0, #2	@ 000440de 0228
.org 0x440e0
	bne.n 0x4411c	@ 000440e0 1cd1
.org 0x440e2
	ldr r1, [pc, #44]	@ 000440e2 0b49
.org 0x440e4
	movs r0, #19	@ 000440e4 1320
.org 0x440e6
	strb r0, [r3, #9]	@ 000440e6 5872
.org 0x440e8
	ldr r0, [r1, #76]	@ 000440e8 c86c
.org 0x440ea
	ldr r0, [r0, #0]	@ 000440ea 0068
.org 0x440ec
	str r0, [r3, #20]	@ 000440ec 5861
.org 0x440ee
	ldrb r1, [r3, #11]	@ 000440ee d97a
.org 0x440f0
	movs r0, #191	@ 000440f0 bf20
.org 0x440f2
	ands r0, r1	@ 000440f2 0840
.org 0x440f4
	strb r0, [r3, #11]	@ 000440f4 d872
.org 0x440f6
	adds r1, r3, #0	@ 000440f6 191c
.org 0x440f8
	adds r1, #37	@ 000440f8 2531
.org 0x440fa
	movs r0, #16	@ 000440fa 1020
.org 0x440fc
	strb r0, [r1, #0]	@ 000440fc 0870
.org 0x440fe
	ldr r0, [pc, #20]	@ 000440fe 0548
.org 0x44100
	ldrh r0, [r0, #0]	@ 00044100 0088
.org 0x44102
	strh r0, [r3, #32]	@ 00044102 1884
.org 0x44104
	ldr r0, [pc, #16]	@ 00044104 0448
.org 0x44106
	ldrb r0, [r0, #0]	@ 00044106 0078
.org 0x44108
	b.n 0x44142	@ 00044108 1be0
.org 0x4410a
	.byte 0x00	@ 0004410a data
.org 0x4410b
	.byte 0x00	@ 0004410b data
.org 0x4410c
	.byte 0x88,0xed,0x02,0x02	@ 0004410c data
.org 0x44110
	.byte 0xf8,0x39,0x85,0x08	@ 00044110 data
.org 0x44114
	.byte 0xfc,0x36,0x85,0x08	@ 00044114 data
.org 0x44118
	.byte 0x04,0x37,0x85,0x08	@ 00044118 data
.org 0x4411c
	ldr r1, [pc, #68]	@ 0004411c 1149
.org 0x4411e
	movs r0, #19	@ 0004411e 1320
.org 0x44120
	strb r0, [r3, #9]	@ 00044120 5872
.org 0x44122
	ldr r0, [r1, #76]	@ 00044122 c86c
.org 0x44124
	ldr r0, [r0, #0]	@ 00044124 0068
.org 0x44126
	str r0, [r3, #20]	@ 00044126 5861
.org 0x44128
	ldrb r1, [r3, #11]	@ 00044128 d97a
.org 0x4412a
	movs r0, #191	@ 0004412a bf20
.org 0x4412c
	ands r0, r1	@ 0004412c 0840
.org 0x4412e
	strb r0, [r3, #11]	@ 0004412e d872
.org 0x44130
	adds r1, r3, #0	@ 00044130 191c
.org 0x44132
	adds r1, #37	@ 00044132 2531
.org 0x44134
	movs r0, #16	@ 00044134 1020
.org 0x44136
	strb r0, [r1, #0]	@ 00044136 0870
.org 0x44138
	ldr r0, [pc, #44]	@ 00044138 0b48
.org 0x4413a
	ldrh r0, [r0, #2]	@ 0004413a 4088
.org 0x4413c
	strh r0, [r3, #32]	@ 0004413c 1884
.org 0x4413e
	ldr r0, [pc, #44]	@ 0004413e 0b48
.org 0x44140
	ldrb r0, [r0, #1]	@ 00044140 4078
.org 0x44142
	subs r1, #3	@ 00044142 0339
.org 0x44144
	strb r0, [r1, #0]	@ 00044144 0870
.org 0x44146
	movs r0, #0	@ 00044146 0020
.org 0x44148
	strb r0, [r3, #16]	@ 00044148 1874
.org 0x4414a
	strb r0, [r3, #17]	@ 0004414a 5874
.org 0x4414c
	str r5, [r3, #40]	@ 0004414c 9d62
.org 0x4414e
	ldrb r0, [r4, #10]	@ 0004414e a07a
.org 0x44150
	lsrs r2, r0, #4	@ 00044150 0209
.org 0x44152
	movs r0, #1	@ 00044152 0120
.org 0x44154
	ands r2, r0	@ 00044154 0240
.org 0x44156
	cmp r2, #0	@ 00044156 002a
.org 0x44158
	beq.n 0x44170	@ 00044158 0ad0
.org 0x4415a
	ldrb r0, [r3, #10]	@ 0004415a 987a
.org 0x4415c
	movs r1, #16	@ 0004415c 1021
.org 0x4415e
	orrs r0, r1	@ 0004415e 0843
.org 0x44160
	b.n 0x44176	@ 00044160 09e0
.org 0x44162
	.byte 0x00	@ 00044162 data
.org 0x44163
	.byte 0x00	@ 00044163 data
.org 0x44164
	.byte 0xf8,0x39,0x85,0x08	@ 00044164 data
.org 0x44168
	.byte 0xfc,0x36,0x85,0x08	@ 00044168 data
.org 0x4416c
	.byte 0x04,0x37,0x85,0x08	@ 0004416c data
.org 0x44170
	ldrb r1, [r3, #10]	@ 00044170 997a
.org 0x44172
	movs r0, #239	@ 00044172 ef20
.org 0x44174
	ands r0, r1	@ 00044174 0840
.org 0x44176
	strb r0, [r3, #10]	@ 00044176 9872
.org 0x44178
	adds r1, r2, #0	@ 00044178 111c
.org 0x4417a
	adds r0, r3, #0	@ 0004417a 181c
.org 0x4417c
	adds r0, #76	@ 0004417c 4c30
.org 0x4417e
	strb r1, [r0, #0]	@ 0004417e 0170
.org 0x44180
	movs r0, #74	@ 00044180 4a20
.org 0x44182
	adds r0, r0, r3	@ 00044182 c018
.org 0x44184
	mov ip, r0	@ 00044184 8446
.org 0x44186
	lsls r1, r1, #4	@ 00044186 0901
.org 0x44188
	ldrb r2, [r0, #0]	@ 00044188 0278
.org 0x4418a
	movs r0, #17	@ 0004418a 1120
.org 0x4418c
	negs r0, r0	@ 0004418c 4042
.org 0x4418e
	ands r0, r2	@ 0004418e 1040
.org 0x44190
	orrs r0, r1	@ 00044190 0843
.org 0x44192
	mov r1, ip	@ 00044192 6146
.org 0x44194
	strb r0, [r1, #0]	@ 00044194 0870
.org 0x44196
	ldrb r1, [r3, #10]	@ 00044196 997a
.org 0x44198
	movs r0, #16	@ 00044198 1020
.org 0x4419a
	ands r0, r1	@ 0004419a 0840
.org 0x4419c
	cmp r0, #0	@ 0004419c 0028
