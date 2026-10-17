@ FUN_0809a0b8  entry 0x0809a0b8  size 200
.thumb
.org 0x9a0b8
FUN_0809a0b8:
	push {r4, r5, r6, lr}	@ 0009a0b8 70b5
.org 0x9a0ba
	adds r6, r0, #0	@ 0009a0ba 061c
.org 0x9a0bc
	bl 0x1cc9c	@ 0009a0bc 82f7eefd
.org 0x9a0c0
	ldrb r1, [r6, #10]	@ 0009a0c0 b17a
.org 0x9a0c2
	movs r0, #1	@ 0009a0c2 0120
.org 0x9a0c4
	movs r5, #0	@ 0009a0c4 0025
.org 0x9a0c6
	orrs r0, r1	@ 0009a0c6 0843
.org 0x9a0c8
	movs r1, #2	@ 0009a0c8 0221
.org 0x9a0ca
	orrs r0, r1	@ 0009a0ca 0843
.org 0x9a0cc
	strb r0, [r6, #10]	@ 0009a0cc b072
.org 0x9a0ce
	ldr r1, [pc, #64]	@ 0009a0ce 1049
.org 0x9a0d0
	adds r0, r6, #0	@ 0009a0d0 301c
.org 0x9a0d2
	bl 0x1cf00	@ 0009a0d2 82f715ff
.org 0x9a0d6
	adds r0, r6, #0	@ 0009a0d6 301c
.org 0x9a0d8
	bl 0x1cff0	@ 0009a0d8 82f78aff
.org 0x9a0dc
	ldrb r1, [r6, #10]	@ 0009a0dc b17a
.org 0x9a0de
	movs r0, #4	@ 0009a0de 0420
.org 0x9a0e0
	orrs r0, r1	@ 0009a0e0 0843
.org 0x9a0e2
	strb r0, [r6, #10]	@ 0009a0e2 b072
.org 0x9a0e4
	adds r4, r6, #0	@ 0009a0e4 341c
.org 0x9a0e6
	adds r4, #116	@ 0009a0e6 7434
.org 0x9a0e8
	ldr r1, [pc, #40]	@ 0009a0e8 0a49
.org 0x9a0ea
	adds r2, r6, #0	@ 0009a0ea 321c
.org 0x9a0ec
	adds r2, #84	@ 0009a0ec 5432
.org 0x9a0ee
	adds r0, r4, #0	@ 0009a0ee 201c
.org 0x9a0f0
	movs r3, #8	@ 0009a0f0 0823
.org 0x9a0f2
	bl 0x5760	@ 0009a0f2 6bf735fb
.org 0x9a0f6
	str r6, [r4, #44]	@ 0009a0f6 e662
.org 0x9a0f8
	str r5, [r4, #36]	@ 0009a0f8 6562
.org 0x9a0fa
	ldrb r0, [r6, #17]	@ 0009a0fa 707c
.org 0x9a0fc
	cmp r0, #0	@ 0009a0fc 0028
.org 0x9a0fe
	beq.n 0x9a11c	@ 0009a0fe 0dd0
.org 0x9a100
	ldr r1, [pc, #20]	@ 0009a100 0549
.org 0x9a102
	ldr r0, [r1, #0]	@ 0009a102 0868
.org 0x9a104
	ldr r0, [r0, #84]	@ 0009a104 406d
.org 0x9a106
	ldr r2, [r6, #84]	@ 0009a106 726d
.org 0x9a108
	cmp r2, r0	@ 0009a108 8242
.org 0x9a10a
	blt.n 0x9a128	@ 0009a10a 0ddb
.org 0x9a10c
	b.n 0x9a134	@ 0009a10c 12e0
.org 0x9a10e
	.byte 0x00	@ 0009a10e data
.org 0x9a10f
	.byte 0x00	@ 0009a10f data
.org 0x9a110
	.byte 0x03,0x61,0x00,0x00	@ 0009a110 data
.org 0x9a114
	.byte 0xc8,0x0e,0x86,0x08	@ 0009a114 data
.org 0x9a118
	.byte 0xf0,0xdb,0x02,0x02	@ 0009a118 data
.org 0x9a11c
	ldr r1, [pc, #16]	@ 0009a11c 0449
.org 0x9a11e
	ldr r0, [r1, #0]	@ 0009a11e 0868
.org 0x9a120
	ldr r0, [r0, #84]	@ 0009a120 406d
.org 0x9a122
	ldr r2, [r6, #84]	@ 0009a122 726d
.org 0x9a124
	cmp r2, r0	@ 0009a124 8242
.org 0x9a126
	ble.n 0x9a134	@ 0009a126 05dd
.org 0x9a128
	movs r3, #192	@ 0009a128 c023
.org 0x9a12a
	lsls r3, r3, #5	@ 0009a12a 5b01
.org 0x9a12c
	adds r0, r0, r3	@ 0009a12c c018
.org 0x9a12e
	b.n 0x9a138	@ 0009a12e 03e0
.org 0x9a130
	.byte 0xf0,0xdb,0x02,0x02	@ 0009a130 data
.org 0x9a134
	ldr r4, [pc, #92]	@ 0009a134 174c
.org 0x9a136
	adds r0, r0, r4	@ 0009a136 0019
.org 0x9a138
	subs r0, r0, r2	@ 0009a138 801a
.org 0x9a13a
	lsls r0, r0, #8	@ 0009a13a 0002
.org 0x9a13c
	asrs r0, r0, #16	@ 0009a13c 0014
.org 0x9a13e
	ldr r1, [r1, #0]	@ 0009a13e 0968
.org 0x9a140
	ldr r1, [r1, #88]	@ 0009a140 896d
.org 0x9a142
	ldr r2, [r6, #88]	@ 0009a142 b26d
.org 0x9a144
	subs r1, r1, r2	@ 0009a144 891a
.org 0x9a146
	lsls r1, r1, #8	@ 0009a146 0902
.org 0x9a148
	asrs r1, r1, #16	@ 0009a148 0914
.org 0x9a14a
	bl 0x128bdc	@ 0009a14a 8ef047fd
.org 0x9a14e
	lsls r0, r0, #16	@ 0009a14e 0004
.org 0x9a150
	lsrs r0, r0, #24	@ 0009a150 000e
.org 0x9a152
	ldr r3, [pc, #68]	@ 0009a152 114b
.org 0x9a154
	adds r1, r0, #0	@ 0009a154 011c
.org 0x9a156
	adds r1, #64	@ 0009a156 4031
.org 0x9a158
	lsls r1, r1, #24	@ 0009a158 0906
.org 0x9a15a
	lsrs r1, r1, #23	@ 0009a15a c90d
.org 0x9a15c
	adds r1, r1, r3	@ 0009a15c c918
.org 0x9a15e
	movs r4, #0	@ 0009a15e 0024
.org 0x9a160
	ldrsh r2, [r1, r4]	@ 0009a160 0a5f
.org 0x9a162
	lsls r1, r2, #3	@ 0009a162 d100
.org 0x9a164
	adds r1, r1, r2	@ 0009a164 8918
.org 0x9a166
	asrs r1, r1, #1	@ 0009a166 4910
.org 0x9a168
	str r1, [r6, #92]	@ 0009a168 f165
.org 0x9a16a
	lsls r0, r0, #1	@ 0009a16a 4000
.org 0x9a16c
	adds r0, r0, r3	@ 0009a16c c018
.org 0x9a16e
	movs r2, #0	@ 0009a16e 0022
.org 0x9a170
	ldrsh r1, [r0, r2]	@ 0009a170 815e
.org 0x9a172
	lsls r0, r1, #3	@ 0009a172 c800
.org 0x9a174
	adds r0, r0, r1	@ 0009a174 4018
.org 0x9a176
	asrs r0, r0, #1	@ 0009a176 4010
.org 0x9a178
	str r0, [r6, #96]	@ 0009a178 3066
.org 0x9a17a
	ldr r0, [r6, #84]	@ 0009a17a 706d
.org 0x9a17c
	ldr r1, [r6, #88]	@ 0009a17c b16d
.org 0x9a17e
	bl 0x8534	@ 0009a17e 6ef7d9f9
