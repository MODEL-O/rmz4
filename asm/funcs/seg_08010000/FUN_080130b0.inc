@ FUN_080130b0  entry 0x080130b0  size 154
.thumb
.org 0x130b0
FUN_080130b0:
	push {r4, r5, r6, r7, lr}	@ 000130b0 f0b5
.org 0x130b2
	adds r3, r0, #0	@ 000130b2 031c
.org 0x130b4
	ldrb r2, [r3, #14]	@ 000130b4 9a7b
.org 0x130b6
	adds r1, r2, #0	@ 000130b6 111c
.org 0x130b8
	ldr r7, [pc, #84]	@ 000130b8 154f
.org 0x130ba
	cmp r1, #0	@ 000130ba 0029
.org 0x130bc
	bne.n 0x130ca	@ 000130bc 05d1
.org 0x130be
	ldr r0, [pc, #84]	@ 000130be 1548
.org 0x130c0
	strh r0, [r7, #0]	@ 000130c0 3880
.org 0x130c2
	strh r1, [r3, #16]	@ 000130c2 1982
.org 0x130c4
	strh r1, [r3, #18]	@ 000130c4 5982
.org 0x130c6
	adds r0, r2, #1	@ 000130c6 501c
.org 0x130c8
	strb r0, [r3, #14]	@ 000130c8 9873
.org 0x130ca
	ldrh r0, [r3, #18]	@ 000130ca 588a
.org 0x130cc
	adds r0, #8	@ 000130cc 0830
.org 0x130ce
	strh r0, [r3, #18]	@ 000130ce 5882
.org 0x130d0
	ldr r0, [pc, #68]	@ 000130d0 1148
.org 0x130d2
	ldr r1, [pc, #72]	@ 000130d2 1249
.org 0x130d4
	adds r6, r0, r1	@ 000130d4 4618
.org 0x130d6
	ldrb r0, [r6, #0]	@ 000130d6 3078
.org 0x130d8
	cmp r0, #0	@ 000130d8 0028
.org 0x130da
	beq.n 0x13154	@ 000130da 3bd0
.org 0x130dc
	ldrh r0, [r3, #16]	@ 000130dc 188a
.org 0x130de
	adds r0, #2	@ 000130de 0230
.org 0x130e0
	adds r2, r0, #0	@ 000130e0 021c
.org 0x130e2
	strh r0, [r3, #16]	@ 000130e2 1882
.org 0x130e4
	lsls r0, r0, #16	@ 000130e4 0004
.org 0x130e6
	lsrs r4, r0, #16	@ 000130e6 040c
.org 0x130e8
	movs r5, #128	@ 000130e8 8025
.org 0x130ea
	lsls r5, r5, #1	@ 000130ea 6d00
.org 0x130ec
	cmp r4, r5	@ 000130ec ac42
.org 0x130ee
	bls.n 0x13120	@ 000130ee 17d9
.org 0x130f0
	ldr r2, [r3, #104]	@ 000130f0 9a6e
.org 0x130f2
	movs r1, #31	@ 000130f2 1f21
.org 0x130f4
	ands r1, r2	@ 000130f4 1140
.org 0x130f6
	movs r0, #16	@ 000130f6 1020
.org 0x130f8
	subs r0, r0, r2	@ 000130f8 801a
.org 0x130fa
	lsls r0, r0, #8	@ 000130fa 0002
.org 0x130fc
	orrs r1, r0	@ 000130fc 0143
.org 0x130fe
	strh r1, [r7, #2]	@ 000130fe 7980
.org 0x13100
	movs r0, #128	@ 00013100 8020
.org 0x13102
	lsls r0, r0, #2	@ 00013102 8000
.org 0x13104
	cmp r4, r0	@ 00013104 8442
.org 0x13106
	bls.n 0x1315a	@ 00013106 28d9
.org 0x13108
	movs r0, #0	@ 00013108 0020
.org 0x1310a
	strh r0, [r3, #16]	@ 0001310a 1882
.org 0x1310c
	b.n 0x1315a	@ 0001310c 25e0
.org 0x1310e
	.byte 0x00	@ 0001310e data
.org 0x1310f
	.byte 0x00	@ 0001310f data
.org 0x13110
	.byte 0x40,0x0a,0x00,0x02	@ 00013110 data
.org 0x13114
	.byte 0x44,0x3b,0x00,0x00	@ 00013114 data
.org 0x13118
	.byte 0xb0,0x0a,0x00,0x02	@ 00013118 data
.org 0x1311c
	.byte 0x2c,0xd0,0x02,0x00	@ 0001311c data
.org 0x13120
	ldr r1, [pc, #44]	@ 00013120 0b49
.org 0x13122
	adds r0, r2, #0	@ 00013122 101c
.org 0x13124
	adds r0, #64	@ 00013124 4030
.org 0x13126
	lsls r0, r0, #24	@ 00013126 0006
.org 0x13128
	lsrs r0, r0, #23	@ 00013128 c00d
.org 0x1312a
	adds r0, r0, r1	@ 0001312a 4018
.org 0x1312c
	movs r2, #0	@ 0001312c 0022
.org 0x1312e
	ldrsh r1, [r0, r2]	@ 0001312e 815e
.org 0x13130
	adds r1, r1, r5	@ 00013130 4919
.org 0x13132
	asrs r1, r1, #5	@ 00013132 4911
.org 0x13134
	ldrb r0, [r6, #0]	@ 00013134 3078
.org 0x13136
	lsls r0, r0, #2	@ 00013136 8000
.org 0x13138
	adds r1, r1, r0	@ 00013138 0918
.org 0x1313a
	asrs r1, r1, #2	@ 0001313a 8910
.org 0x1313c
	adds r1, #2	@ 0001313c 0231
.org 0x1313e
	str r1, [r3, #104]	@ 0001313e 9966
.org 0x13140
	movs r2, #31	@ 00013140 1f22
.org 0x13142
	ands r2, r1	@ 00013142 0a40
.org 0x13144
	movs r0, #16	@ 00013144 1020
.org 0x13146
	subs r0, r0, r1	@ 00013146 401a
.org 0x13148
	lsls r0, r0, #8	@ 00013148 0002
