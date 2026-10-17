@ FUN_0801c0f0  entry 0x0801c0f0  size 124
.thumb
.org 0x1c0f0
FUN_0801c0f0:
	push {r4, lr}	@ 0001c0f0 10b5
.org 0x1c0f2
	adds r3, r0, #0	@ 0001c0f2 031c
.org 0x1c0f4
	adds r2, r3, #0	@ 0001c0f4 1a1c
.org 0x1c0f6
	adds r2, #104	@ 0001c0f6 6832
.org 0x1c0f8
	ldrh r0, [r2, #0]	@ 0001c0f8 1088
.org 0x1c0fa
	subs r0, #1	@ 0001c0fa 0138
.org 0x1c0fc
	strh r0, [r2, #0]	@ 0001c0fc 1080
.org 0x1c0fe
	lsls r0, r0, #16	@ 0001c0fe 0004
.org 0x1c100
	lsrs r0, r0, #16	@ 0001c100 000c
.org 0x1c102
	cmp r0, #63	@ 0001c102 3f28
.org 0x1c104
	bhi.n 0x1c12c	@ 0001c104 12d8
.org 0x1c106
	adds r1, r3, #0	@ 0001c106 191c
.org 0x1c108
	adds r1, #106	@ 0001c108 6a31
.org 0x1c10a
	ldrh r0, [r1, #0]	@ 0001c10a 0888
.org 0x1c10c
	adds r0, #4	@ 0001c10c 0430
.org 0x1c10e
	strh r0, [r1, #0]	@ 0001c10e 0880
.org 0x1c110
	ldrh r0, [r2, #0]	@ 0001c110 1088
.org 0x1c112
	cmp r0, #0	@ 0001c112 0028
.org 0x1c114
	bne.n 0x1c140	@ 0001c114 14d1
.org 0x1c116
	ldr r1, [pc, #12]	@ 0001c116 0349
.org 0x1c118
	ldr r0, [pc, #12]	@ 0001c118 0348
.org 0x1c11a
	adds r1, r1, r0	@ 0001c11a 0918
.org 0x1c11c
	ldrb r0, [r1, #0]	@ 0001c11c 0878
.org 0x1c11e
	adds r0, #1	@ 0001c11e 0130
.org 0x1c120
	strb r0, [r1, #0]	@ 0001c120 0870
.org 0x1c122
	b.n 0x1c140	@ 0001c122 0de0
.org 0x1c124
	.byte 0xb0,0x0a,0x00,0x02	@ 0001c124 data
.org 0x1c128
	.byte 0x25,0xd0,0x02,0x00	@ 0001c128 data
.org 0x1c12c
	adds r2, r3, #0	@ 0001c12c 1a1c
.org 0x1c12e
	adds r2, #106	@ 0001c12e 6a32
.org 0x1c130
	ldrh r4, [r2, #0]	@ 0001c130 1488
.org 0x1c132
	movs r0, #0	@ 0001c132 0020
.org 0x1c134
	ldrsh r1, [r2, r0]	@ 0001c134 115e
.org 0x1c136
	ldr r0, [pc, #24]	@ 0001c136 0648
.org 0x1c138
	cmp r1, r0	@ 0001c138 8142
.org 0x1c13a
	ble.n 0x1c140	@ 0001c13a 01dd
.org 0x1c13c
	subs r0, r4, #4	@ 0001c13c 201f
.org 0x1c13e
	strh r0, [r2, #0]	@ 0001c13e 1080
.org 0x1c140
	adds r0, r3, #0	@ 0001c140 181c
.org 0x1c142
	adds r0, #104	@ 0001c142 6830
.org 0x1c144
	ldrh r0, [r0, #0]	@ 0001c144 0088
.org 0x1c146
	cmp r0, #3	@ 0001c146 0328
.org 0x1c148
	bhi.n 0x1c154	@ 0001c148 04d8
.org 0x1c14a
	ldrh r0, [r3, #18]	@ 0001c14a 588a
.org 0x1c14c
	subs r0, #1	@ 0001c14c 0138
.org 0x1c14e
	b.n 0x1c15c	@ 0001c14e 05e0
.org 0x1c150
	.byte 0x00,0xff,0xff,0xff	@ 0001c150 data
.org 0x1c154
	ldrh r0, [r3, #18]	@ 0001c154 588a
.org 0x1c156
	cmp r0, #7	@ 0001c156 0728
.org 0x1c158
	bhi.n 0x1c172	@ 0001c158 0bd8
.org 0x1c15a
	adds r0, #1	@ 0001c15a 0130
.org 0x1c15c
	strh r0, [r3, #18]	@ 0001c15c 5882
.org 0x1c15e
	ldr r2, [pc, #24]	@ 0001c15e 064a
.org 0x1c160
	lsls r0, r0, #16	@ 0001c160 0004
.org 0x1c162
	lsrs r0, r0, #17	@ 0001c162 400c
.org 0x1c164
	movs r1, #31	@ 0001c164 1f21
.org 0x1c166
	ands r0, r1	@ 0001c166 0840
.org 0x1c168
	movs r3, #128	@ 0001c168 8023
.org 0x1c16a
	lsls r3, r3, #5	@ 0001c16a 5b01
