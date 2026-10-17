@ FUN_080af0b8  entry 0x080af0b8  size 270
.thumb
.org 0xaf0b8
FUN_080af0b8:
	push {r4, r5, r6, lr}	@ 000af0b8 70b5
.org 0xaf0ba
	adds r4, r0, #0	@ 000af0ba 041c
.org 0xaf0bc
	ldrb r0, [r4, #15]	@ 000af0bc e07b
.org 0xaf0be
	cmp r0, #0	@ 000af0be 0028
.org 0xaf0c0
	bne.n 0xaf164	@ 000af0c0 50d1
.org 0xaf0c2
	ldr r1, [pc, #24]	@ 000af0c2 0649
.org 0xaf0c4
	adds r0, r4, #0	@ 000af0c4 201c
.org 0xaf0c6
	bl 0x1cf00	@ 000af0c6 6df71bff
.org 0xaf0ca
	adds r0, r4, #0	@ 000af0ca 201c
.org 0xaf0cc
	adds r0, #188	@ 000af0cc bc30
.org 0xaf0ce
	ldrb r2, [r0, #0]	@ 000af0ce 0278
.org 0xaf0d0
	cmp r2, #0	@ 000af0d0 002a
.org 0xaf0d2
	beq.n 0xaf0e0	@ 000af0d2 05d0
.org 0xaf0d4
	ldrb r1, [r4, #10]	@ 000af0d4 a17a
.org 0xaf0d6
	movs r0, #16	@ 000af0d6 1020
.org 0xaf0d8
	orrs r0, r1	@ 000af0d8 0843
.org 0xaf0da
	b.n 0xaf0e6	@ 000af0da 04e0
.org 0xaf0dc
	.byte 0x03,0xd6,0x00,0x00	@ 000af0dc data
.org 0xaf0e0
	ldrb r1, [r4, #10]	@ 000af0e0 a17a
.org 0xaf0e2
	movs r0, #239	@ 000af0e2 ef20
.org 0xaf0e4
	ands r0, r1	@ 000af0e4 0840
.org 0xaf0e6
	strb r0, [r4, #10]	@ 000af0e6 a072
.org 0xaf0e8
	movs r1, #1	@ 000af0e8 0121
.org 0xaf0ea
	ands r1, r2	@ 000af0ea 1140
.org 0xaf0ec
	adds r0, r4, #0	@ 000af0ec 201c
.org 0xaf0ee
	adds r0, #76	@ 000af0ee 4c30
.org 0xaf0f0
	strb r1, [r0, #0]	@ 000af0f0 0170
.org 0xaf0f2
	adds r3, r4, #0	@ 000af0f2 231c
.org 0xaf0f4
	adds r3, #74	@ 000af0f4 4a33
.org 0xaf0f6
	lsls r1, r1, #4	@ 000af0f6 0901
.org 0xaf0f8
	ldrb r2, [r3, #0]	@ 000af0f8 1a78
.org 0xaf0fa
	movs r0, #17	@ 000af0fa 1120
.org 0xaf0fc
	negs r0, r0	@ 000af0fc 4042
.org 0xaf0fe
	ands r0, r2	@ 000af0fe 1040
.org 0xaf100
	orrs r0, r1	@ 000af100 0843
.org 0xaf102
	strb r0, [r3, #0]	@ 000af102 1870
.org 0xaf104
	ldrb r1, [r4, #10]	@ 000af104 a17a
.org 0xaf106
	movs r2, #16	@ 000af106 1022
.org 0xaf108
	adds r0, r2, #0	@ 000af108 101c
.org 0xaf10a
	ands r0, r1	@ 000af10a 0840
.org 0xaf10c
	cmp r0, #0	@ 000af10c 0028
.org 0xaf10e
	beq.n 0xaf114	@ 000af10e 01d0
.org 0xaf110
	str r2, [r4, #100]	@ 000af110 6266
.org 0xaf112
	b.n 0xaf11a	@ 000af112 02e0
.org 0xaf114
	movs r0, #16	@ 000af114 1020
.org 0xaf116
	negs r0, r0	@ 000af116 4042
.org 0xaf118
	str r0, [r4, #100]	@ 000af118 6066
.org 0xaf11a
	ldr r0, [r4, #100]	@ 000af11a 606e
.org 0xaf11c
	lsls r0, r0, #4	@ 000af11c 0001
.org 0xaf11e
	str r0, [r4, #92]	@ 000af11e e065
.org 0xaf120
	movs r0, #8	@ 000af120 0820
.org 0xaf122
	str r0, [r4, #104]	@ 000af122 a066
.org 0xaf124
	movs r0, #128	@ 000af124 8020
.org 0xaf126
	str r0, [r4, #96]	@ 000af126 2066
.org 0xaf128
	movs r2, #16	@ 000af128 1022
.org 0xaf12a
	strb r2, [r4, #18]	@ 000af12a a274
.org 0xaf12c
	adds r5, r4, #0	@ 000af12c 251c
.org 0xaf12e
	adds r5, #84	@ 000af12e 5435
.org 0xaf130
	ldr r6, [pc, #24]	@ 000af130 064e
.org 0xaf132
	ldrb r1, [r4, #10]	@ 000af132 a17a
.org 0xaf134
	adds r0, r2, #0	@ 000af134 101c
.org 0xaf136
	ands r0, r1	@ 000af136 0840
.org 0xaf138
	lsls r0, r0, #24	@ 000af138 0006
.org 0xaf13a
	lsrs r0, r0, #24	@ 000af13a 000e
.org 0xaf13c
	negs r1, r0	@ 000af13c 4142
.org 0xaf13e
	asrs r1, r1, #31	@ 000af13e c917
.org 0xaf140
	ands r1, r2	@ 000af140 1140
.org 0xaf142
	cmp r0, #0	@ 000af142 0028
.org 0xaf144
	beq.n 0xaf150	@ 000af144 04d0
.org 0xaf146
	movs r3, #1	@ 000af146 0123
.org 0xaf148
	orrs r3, r1	@ 000af148 0b43
.org 0xaf14a
	b.n 0xaf154	@ 000af14a 03e0
.org 0xaf14c
	.byte 0x10,0x31,0x86,0x08	@ 000af14c data
.org 0xaf150
	lsls r0, r1, #24	@ 000af150 0806
.org 0xaf152
	lsrs r3, r0, #24	@ 000af152 030e
.org 0xaf154
	adds r0, r5, #0	@ 000af154 281c
.org 0xaf156
	adds r1, r6, #0	@ 000af156 311c
.org 0xaf158
	movs r2, #0	@ 000af158 0022
.org 0xaf15a
	bl 0xd4c8c	@ 000af15a 25f097fd
.org 0xaf15e
	ldrb r0, [r4, #15]	@ 000af15e e07b
.org 0xaf160
	adds r0, #1	@ 000af160 0130
.org 0xaf162
	strb r0, [r4, #15]	@ 000af162 e073
.org 0xaf164
	adds r0, r4, #0	@ 000af164 201c
.org 0xaf166
	bl 0x1cff0	@ 000af166 6df743ff
.org 0xaf16a
	ldr r0, [r4, #84]	@ 000af16a 606d
.org 0xaf16c
	ldr r2, [r4, #92]	@ 000af16c e26d
.org 0xaf16e
	adds r0, r0, r2	@ 000af16e 8018
.org 0xaf170
	str r0, [r4, #84]	@ 000af170 6065
.org 0xaf172
	ldr r0, [r4, #88]	@ 000af172 a06d
.org 0xaf174
	ldr r1, [r4, #96]	@ 000af174 216e
.org 0xaf176
	adds r0, r0, r1	@ 000af176 4018
.org 0xaf178
	str r0, [r4, #88]	@ 000af178 a065
.org 0xaf17a
	ldr r0, [r4, #100]	@ 000af17a 606e
.org 0xaf17c
	subs r2, r2, r0	@ 000af17c 121a
.org 0xaf17e
	str r2, [r4, #92]	@ 000af17e e265
.org 0xaf180
	ldr r0, [r4, #104]	@ 000af180 a06e
.org 0xaf182
	subs r1, r1, r0	@ 000af182 091a
.org 0xaf184
	str r1, [r4, #96]	@ 000af184 2166
.org 0xaf186
	ldrb r1, [r4, #18]	@ 000af186 a17c
.org 0xaf188
	movs r0, #1	@ 000af188 0120
.org 0xaf18a
	ands r0, r1	@ 000af18a 0840
.org 0xaf18c
	cmp r0, #0	@ 000af18c 0028
.org 0xaf18e
	beq.n 0xaf198	@ 000af18e 03d0
.org 0xaf190
	ldrb r1, [r4, #10]	@ 000af190 a17a
.org 0xaf192
	movs r0, #1	@ 000af192 0120
.org 0xaf194
	orrs r0, r1	@ 000af194 0843
.org 0xaf196
	b.n 0xaf19e	@ 000af196 02e0
.org 0xaf198
	ldrb r1, [r4, #10]	@ 000af198 a17a
.org 0xaf19a
	movs r0, #254	@ 000af19a fe20
.org 0xaf19c
	ands r0, r1	@ 000af19c 0840
.org 0xaf19e
	strb r0, [r4, #10]	@ 000af19e a072
.org 0xaf1a0
	ldrb r0, [r4, #18]	@ 000af1a0 a07c
.org 0xaf1a2
	subs r0, #1	@ 000af1a2 0138
.org 0xaf1a4
	strb r0, [r4, #18]	@ 000af1a4 a074
.org 0xaf1a6
	lsls r0, r0, #24	@ 000af1a6 0006
.org 0xaf1a8
	lsrs r0, r0, #24	@ 000af1a8 000e
.org 0xaf1aa
	cmp r0, #255	@ 000af1aa ff28
.org 0xaf1ac
	bne.n 0xaf1c8	@ 000af1ac 0cd1
.org 0xaf1ae
	ldrb r1, [r4, #10]	@ 000af1ae a17a
.org 0xaf1b0
	movs r0, #254	@ 000af1b0 fe20
.org 0xaf1b2
	ands r0, r1	@ 000af1b2 0840
.org 0xaf1b4
	strb r0, [r4, #10]	@ 000af1b4 a072
.org 0xaf1b6
	ldr r1, [pc, #24]	@ 000af1b6 0649
.org 0xaf1b8
	ldrb r0, [r4, #9]	@ 000af1b8 607a
.org 0xaf1ba
	lsls r0, r0, #2	@ 000af1ba 8000
.org 0xaf1bc
	adds r0, r0, r1	@ 000af1bc 4018
.org 0xaf1be
	movs r1, #4	@ 000af1be 0421
.org 0xaf1c0
	str r1, [r4, #12]	@ 000af1c0 e160
.org 0xaf1c2
	ldr r0, [r0, #0]	@ 000af1c2 0068
.org 0xaf1c4
	ldr r0, [r0, #16]	@ 000af1c4 0069
