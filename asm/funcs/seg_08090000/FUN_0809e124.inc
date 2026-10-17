@ FUN_0809e124  entry 0x0809e124  size 130
.thumb
.org 0x9e124
FUN_0809e124:
	push {r4, r5, lr}	@ 0009e124 30b5
.org 0x9e126
	adds r2, r0, #0	@ 0009e126 021c
.org 0x9e128
	ldrb r1, [r2, #10]	@ 0009e128 917a
.org 0x9e12a
	movs r0, #16	@ 0009e12a 1020
.org 0x9e12c
	ands r0, r1	@ 0009e12c 0840
.org 0x9e12e
	lsls r0, r0, #24	@ 0009e12e 0006
.org 0x9e130
	lsrs r5, r0, #24	@ 0009e130 050e
.org 0x9e132
	cmp r5, #0	@ 0009e132 002d
.org 0x9e134
	beq.n 0x9e174	@ 0009e134 1ed0
.org 0x9e136
	ldr r0, [pc, #52]	@ 0009e136 0d48
.org 0x9e138
	ldr r4, [r0, #0]	@ 0009e138 0468
.org 0x9e13a
	ldr r1, [r4, #84]	@ 0009e13a 616d
.org 0x9e13c
	ldr r0, [r2, #84]	@ 0009e13c 506d
.org 0x9e13e
	cmp r1, r0	@ 0009e13e 8142
.org 0x9e140
	ble.n 0x9e1b4	@ 0009e140 38dd
.org 0x9e142
	movs r3, #216	@ 0009e142 d823
.org 0x9e144
	lsls r3, r3, #7	@ 0009e144 db01
.org 0x9e146
	adds r0, r0, r3	@ 0009e146 c018
.org 0x9e148
	cmp r1, r0	@ 0009e148 8142
.org 0x9e14a
	bge.n 0x9e1b4	@ 0009e14a 33da
.org 0x9e14c
	ldr r3, [r2, #88]	@ 0009e14c 936d
.org 0x9e14e
	movs r1, #152	@ 0009e14e 9821
.org 0x9e150
	lsls r1, r1, #6	@ 0009e150 8901
.org 0x9e152
	adds r0, r3, r1	@ 0009e152 5818
.org 0x9e154
	ldr r1, [r4, #88]	@ 0009e154 a16d
.org 0x9e156
	cmp r1, r0	@ 0009e156 8142
.org 0x9e158
	bge.n 0x9e1b4	@ 0009e158 2cda
.org 0x9e15a
	ldr r4, [pc, #20]	@ 0009e15a 054c
.org 0x9e15c
	adds r0, r3, r4	@ 0009e15c 1819
.org 0x9e15e
	cmp r1, r0	@ 0009e15e 8142
.org 0x9e160
	ble.n 0x9e1b4	@ 0009e160 28dd
.org 0x9e162
	movs r1, #0	@ 0009e162 0021
.org 0x9e164
	movs r0, #1	@ 0009e164 0120
.org 0x9e166
	strb r0, [r2, #13]	@ 0009e166 5073
.org 0x9e168
	strb r1, [r2, #14]	@ 0009e168 9173
.org 0x9e16a
	b.n 0x9e1b6	@ 0009e16a 24e0
.org 0x9e16c
	.byte 0xf0,0xdb,0x02,0x02	@ 0009e16c data
.org 0x9e170
	.byte 0x00,0xda,0xff,0xff	@ 0009e170 data
.org 0x9e174
	ldr r0, [pc, #48]	@ 0009e174 0c48
.org 0x9e176
	ldr r4, [r0, #0]	@ 0009e176 0468
.org 0x9e178
	ldr r1, [r4, #84]	@ 0009e178 616d
.org 0x9e17a
	ldr r0, [r2, #84]	@ 0009e17a 506d
.org 0x9e17c
	cmp r1, r0	@ 0009e17c 8142
.org 0x9e17e
	bge.n 0x9e1b4	@ 0009e17e 19da
.org 0x9e180
	ldr r3, [pc, #40]	@ 0009e180 0a4b
.org 0x9e182
	adds r0, r0, r3	@ 0009e182 c018
.org 0x9e184
	cmp r1, r0	@ 0009e184 8142
.org 0x9e186
	ble.n 0x9e1b4	@ 0009e186 15dd
.org 0x9e188
	ldr r3, [r2, #88]	@ 0009e188 936d
.org 0x9e18a
	movs r1, #152	@ 0009e18a 9821
.org 0x9e18c
	lsls r1, r1, #6	@ 0009e18c 8901
.org 0x9e18e
	adds r0, r3, r1	@ 0009e18e 5818
.org 0x9e190
	ldr r1, [r4, #88]	@ 0009e190 a16d
.org 0x9e192
	cmp r1, r0	@ 0009e192 8142
.org 0x9e194
	bge.n 0x9e1b4	@ 0009e194 0eda
.org 0x9e196
	ldr r4, [pc, #24]	@ 0009e196 064c
.org 0x9e198
	adds r0, r3, r4	@ 0009e198 1819
.org 0x9e19a
	cmp r1, r0	@ 0009e19a 8142
.org 0x9e19c
	ble.n 0x9e1b4	@ 0009e19c 0add
.org 0x9e19e
	movs r0, #1	@ 0009e19e 0120
.org 0x9e1a0
	strb r0, [r2, #13]	@ 0009e1a0 5073
.org 0x9e1a2
	strb r5, [r2, #14]	@ 0009e1a2 9573
.org 0x9e1a4
	b.n 0x9e1b6	@ 0009e1a4 07e0
