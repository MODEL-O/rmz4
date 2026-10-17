@ FUN_081120c8  entry 0x081120c8  size 282
.thumb
.org 0x1120c8
FUN_081120c8:
	push {r4, r5, r6, lr}	@ 001120c8 70b5
.org 0x1120ca
	adds r6, r0, #0	@ 001120ca 061c
.org 0x1120cc
	ldrb r0, [r6, #6]	@ 001120cc b079
.org 0x1120ce
	cmp r0, #1	@ 001120ce 0128
.org 0x1120d0
	beq.n 0x1120f2	@ 001120d0 0fd0
.org 0x1120d2
	cmp r0, #1	@ 001120d2 0128
.org 0x1120d4
	bgt.n 0x1120dc	@ 001120d4 02dc
.org 0x1120d6
	cmp r0, #0	@ 001120d6 0028
.org 0x1120d8
	beq.n 0x1120e6	@ 001120d8 05d0
.org 0x1120da
	b.n 0x1121c2	@ 001120da 72e0
.org 0x1120dc
	cmp r0, #2	@ 001120dc 0228
.org 0x1120de
	beq.n 0x11214a	@ 001120de 34d0
.org 0x1120e0
	cmp r0, #3	@ 001120e0 0328
.org 0x1120e2
	beq.n 0x112198	@ 001120e2 59d0
.org 0x1120e4
	b.n 0x1121c2	@ 001120e4 6de0
.org 0x1120e6
	strh r0, [r6, #8]	@ 001120e6 3081
.org 0x1120e8
	movs r0, #32	@ 001120e8 2020
.org 0x1120ea
	strh r0, [r6, #10]	@ 001120ea 7081
.org 0x1120ec
	ldrb r0, [r6, #6]	@ 001120ec b079
.org 0x1120ee
	adds r0, #1	@ 001120ee 0130
.org 0x1120f0
	strb r0, [r6, #6]	@ 001120f0 b071
.org 0x1120f2
	ldrh r2, [r6, #8]	@ 001120f2 3289
.org 0x1120f4
	movs r1, #8	@ 001120f4 0821
.org 0x1120f6
	ldrsh r0, [r6, r1]	@ 001120f6 705e
.org 0x1120f8
	cmp r0, #15	@ 001120f8 0f28
.org 0x1120fa
	bgt.n 0x112110	@ 001120fa 09dc
.org 0x1120fc
	adds r2, #1	@ 001120fc 0132
.org 0x1120fe
	strh r2, [r6, #8]	@ 001120fe 3281
.org 0x112100
	ldr r3, [pc, #40]	@ 00112100 0a4b
.org 0x112102
	movs r1, #31	@ 00112102 1f21
.org 0x112104
	ands r1, r2	@ 00112104 1140
.org 0x112106
	movs r0, #16	@ 00112106 1020
.org 0x112108
	subs r0, r0, r2	@ 00112108 801a
.org 0x11210a
	lsls r0, r0, #8	@ 0011210a 0002
.org 0x11210c
	orrs r1, r0	@ 0011210c 0143
.org 0x11210e
	strh r1, [r3, #2]	@ 0011210e 5980
.org 0x112110
	ldr r0, [pc, #28]	@ 00112110 0748
.org 0x112112
	ldrh r1, [r0, #4]	@ 00112112 8188
.org 0x112114
	movs r0, #9	@ 00112114 0920
.org 0x112116
	ands r0, r1	@ 00112116 0840
.org 0x112118
	cmp r0, #0	@ 00112118 0028
.org 0x11211a
	beq.n 0x112134	@ 0011211a 0bd0
.org 0x11211c
	movs r0, #2	@ 0011211c 0220
.org 0x11211e
	bl 0x2b10	@ 0011211e f0f6f7fc
.org 0x112122
	ldrb r0, [r6, #6]	@ 00112122 b079
.org 0x112124
	adds r0, #1	@ 00112124 0130
.org 0x112126
	strb r0, [r6, #6]	@ 00112126 b071
.org 0x112128
	b.n 0x1121c2	@ 00112128 4be0
.org 0x11212a
	.byte 0x00	@ 0011212a data
.org 0x11212b
	.byte 0x00	@ 0011212b data
.org 0x11212c
	.byte 0x40,0x0a,0x00,0x02	@ 0011212c data
.org 0x112130
	.byte 0x60,0x07,0x00,0x02	@ 00112130 data
.org 0x112134
	movs r0, #2	@ 00112134 0220
.org 0x112136
	ands r0, r1	@ 00112136 0840
.org 0x112138
	cmp r0, #0	@ 00112138 0028
.org 0x11213a
	beq.n 0x1121c2	@ 0011213a 42d0
.org 0x11213c
	movs r0, #3	@ 0011213c 0320
.org 0x11213e
	bl 0x2b10	@ 0011213e f0f6e7fc
.org 0x112142
	ldrb r0, [r6, #6]	@ 00112142 b079
.org 0x112144
	adds r0, #2	@ 00112144 0230
.org 0x112146
	strb r0, [r6, #6]	@ 00112146 b071
.org 0x112148
	b.n 0x1121c2	@ 00112148 3be0
.org 0x11214a
	ldrh r0, [r6, #10]	@ 0011214a 7089
.org 0x11214c
	movs r2, #10	@ 0011214c 0a22
.org 0x11214e
	ldrsh r4, [r6, r2]	@ 0011214e b45e
.org 0x112150
	cmp r4, #0	@ 00112150 002c
.org 0x112152
	beq.n 0x112180	@ 00112152 15d0
.org 0x112154
	subs r0, #1	@ 00112154 0138
.org 0x112156
	adds r1, r0, #0	@ 00112156 011c
.org 0x112158
	strh r0, [r6, #10]	@ 00112158 7081
.org 0x11215a
	ldr r2, [pc, #28]	@ 0011215a 074a
.org 0x11215c
	ldr r3, [pc, #28]	@ 0011215c 074b
.org 0x11215e
	adds r0, r2, r3	@ 0011215e d018
.org 0x112160
	strb r1, [r0, #0]	@ 00112160 0170
.org 0x112162
	movs r0, #255	@ 00112162 ff20
.org 0x112164
	ands r0, r1	@ 00112164 0840
.org 0x112166
	subs r3, #1	@ 00112166 013b
.org 0x112168
	adds r1, r2, r3	@ 00112168 d118
.org 0x11216a
	strb r0, [r1, #0]	@ 0011216a 0870
.org 0x11216c
	movs r1, #128	@ 0011216c 8021
.org 0x11216e
	lsls r1, r1, #3	@ 0011216e c900
.org 0x112170
	adds r2, r2, r1	@ 00112170 5218
.org 0x112172
	strb r0, [r2, #0]	@ 00112172 1070
.org 0x112174
	b.n 0x1121c2	@ 00112174 25e0
.org 0x112176
	.byte 0x00	@ 00112176 data
.org 0x112177
	.byte 0x00	@ 00112177 data
.org 0x112178
	.byte 0xc0,0x2a,0x00,0x03	@ 00112178 data
.org 0x11217c
	.byte 0x02,0x04,0x00,0x00	@ 0011217c data
.org 0x112180
	movs r0, #51	@ 00112180 3320
.org 0x112182
	bl 0x2624	@ 00112182 f0f64ffa
.org 0x112186
	ldr r0, [pc, #12]	@ 00112186 0348
.org 0x112188
	movs r1, #0	@ 00112188 0021
.org 0x11218a
	strh r4, [r0, #0]	@ 0011218a 0480
.org 0x11218c
	strb r1, [r6, #6]	@ 0011218c b171
.org 0x11218e
	movs r0, #3	@ 0011218e 0320
.org 0x112190
	b.n 0x1121c0	@ 00112190 16e0
.org 0x112192
	.byte 0x00	@ 00112192 data
.org 0x112193
	.byte 0x00	@ 00112193 data
.org 0x112194
	.byte 0x40,0x0a,0x00,0x02	@ 00112194 data
.org 0x112198
	ldrh r2, [r6, #8]	@ 00112198 3289
.org 0x11219a
	movs r3, #8	@ 0011219a 0823
.org 0x11219c
	ldrsh r0, [r6, r3]	@ 0011219c f05e
.org 0x11219e
	cmp r0, #0	@ 0011219e 0028
.org 0x1121a0
	beq.n 0x1121bc	@ 001121a0 0cd0
.org 0x1121a2
	subs r2, #1	@ 001121a2 013a
.org 0x1121a4
	strh r2, [r6, #8]	@ 001121a4 3281
.org 0x1121a6
	ldr r3, [pc, #16]	@ 001121a6 044b
.org 0x1121a8
	movs r1, #31	@ 001121a8 1f21
.org 0x1121aa
	ands r1, r2	@ 001121aa 1140
.org 0x1121ac
	movs r0, #16	@ 001121ac 1020
.org 0x1121ae
	subs r0, r0, r2	@ 001121ae 801a
.org 0x1121b0
	lsls r0, r0, #8	@ 001121b0 0002
.org 0x1121b2
	orrs r1, r0	@ 001121b2 0143
.org 0x1121b4
	strh r1, [r3, #2]	@ 001121b4 5980
.org 0x1121b6
	b.n 0x1121c2	@ 001121b6 04e0
.org 0x1121b8
	.byte 0x40,0x0a,0x00,0x02	@ 001121b8 data
.org 0x1121bc
	movs r0, #1	@ 001121bc 0120
.org 0x1121be
	strb r0, [r6, #6]	@ 001121be b071
.org 0x1121c0
	strb r0, [r6, #5]	@ 001121c0 7071
.org 0x1121c2
	movs r0, #51	@ 001121c2 3320
.org 0x1121c4
	bl 0x25d8	@ 001121c4 f0f608fa
.org 0x1121c8
	ldr r5, [pc, #52]	@ 001121c8 0d4d
.org 0x1121ca
	ldr r1, [pc, #56]	@ 001121ca 0e49
.org 0x1121cc
	adds r0, r5, r1	@ 001121cc 6818
.org 0x1121ce
	ldrh r0, [r0, #0]	@ 001121ce 0088
.org 0x1121d0
	ldr r4, [pc, #52]	@ 001121d0 0d4c
.org 0x1121d2
	adds r0, r0, r4	@ 001121d2 0019
.org 0x1121d4
	movs r1, #13	@ 001121d4 0d21
.org 0x1121d6
	movs r2, #2	@ 001121d6 0222
.org 0x1121d8
	bl 0x10d85c	@ 001121d8 fbf740fb
.org 0x1121dc
	ldr r1, [pc, #44]	@ 001121dc 0b49
.org 0x1121de
	ldr r2, [pc, #48]	@ 001121de 0c4a
.org 0x1121e0
	adds r0, r6, r2	@ 001121e0 b018
