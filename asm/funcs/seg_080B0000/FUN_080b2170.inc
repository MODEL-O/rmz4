@ FUN_080b2170  entry 0x080b2170  size 112
.thumb
.org 0xb2170
FUN_080b2170:
	push {r4, r5, lr}	@ 000b2170 30b5
.org 0xb2172
	adds r3, r0, #0	@ 000b2172 031c
.org 0xb2174
	ldrb r2, [r3, #10]	@ 000b2174 9a7a
.org 0xb2176
	lsrs r4, r2, #4	@ 000b2176 1409
.org 0xb2178
	movs r5, #1	@ 000b2178 0125
.org 0xb217a
	ands r4, r5	@ 000b217a 2c40
.org 0xb217c
	ldr r0, [pc, #44]	@ 000b217c 0b48
.org 0xb217e
	ldr r0, [r0, #0]	@ 000b217e 0068
.org 0xb2180
	ldr r1, [r0, #84]	@ 000b2180 416d
.org 0xb2182
	ldr r0, [r3, #84]	@ 000b2182 586d
.org 0xb2184
	cmp r1, r0	@ 000b2184 8142
.org 0xb2186
	ble.n 0xb21b0	@ 000b2186 13dd
.org 0xb2188
	movs r0, #16	@ 000b2188 1020
.org 0xb218a
	orrs r0, r2	@ 000b218a 1043
.org 0xb218c
	strb r0, [r3, #10]	@ 000b218c 9872
.org 0xb218e
	adds r0, r3, #0	@ 000b218e 181c
.org 0xb2190
	adds r0, #76	@ 000b2190 4c30
.org 0xb2192
	strb r5, [r0, #0]	@ 000b2192 0570
.org 0xb2194
	movs r0, #74	@ 000b2194 4a20
.org 0xb2196
	adds r0, r0, r3	@ 000b2196 c018
.org 0xb2198
	mov ip, r0	@ 000b2198 8446
.org 0xb219a
	movs r2, #16	@ 000b219a 1022
.org 0xb219c
	ldrb r1, [r0, #0]	@ 000b219c 0178
.org 0xb219e
	movs r0, #17	@ 000b219e 1120
.org 0xb21a0
	negs r0, r0	@ 000b21a0 4042
.org 0xb21a2
	ands r0, r1	@ 000b21a2 0840
.org 0xb21a4
	orrs r0, r2	@ 000b21a4 1043
.org 0xb21a6
	mov r1, ip	@ 000b21a6 6146
.org 0xb21a8
	strb r0, [r1, #0]	@ 000b21a8 0870
.org 0xb21aa
	b.n 0xb21cc	@ 000b21aa 0fe0
.org 0xb21ac
	.byte 0xf0,0xdb,0x02,0x02	@ 000b21ac data
.org 0xb21b0
	movs r1, #0	@ 000b21b0 0021
.org 0xb21b2
	movs r0, #239	@ 000b21b2 ef20
.org 0xb21b4
	ands r0, r2	@ 000b21b4 1040
.org 0xb21b6
	strb r0, [r3, #10]	@ 000b21b6 9872
.org 0xb21b8
	adds r0, r3, #0	@ 000b21b8 181c
.org 0xb21ba
	adds r0, #76	@ 000b21ba 4c30
.org 0xb21bc
	strb r1, [r0, #0]	@ 000b21bc 0170
.org 0xb21be
	adds r2, r3, #0	@ 000b21be 1a1c
.org 0xb21c0
	adds r2, #74	@ 000b21c0 4a32
.org 0xb21c2
	ldrb r1, [r2, #0]	@ 000b21c2 1178
.org 0xb21c4
	movs r0, #17	@ 000b21c4 1120
.org 0xb21c6
	negs r0, r0	@ 000b21c6 4042
.org 0xb21c8
	ands r0, r1	@ 000b21c8 0840
.org 0xb21ca
	strb r0, [r2, #0]	@ 000b21ca 1070
.org 0xb21cc
	ldrb r0, [r3, #10]	@ 000b21cc 987a
.org 0xb21ce
	lsrs r0, r0, #4	@ 000b21ce 0009
.org 0xb21d0
	movs r1, #1	@ 000b21d0 0121
.org 0xb21d2
	ands r0, r1	@ 000b21d2 0840
.org 0xb21d4
	cmp r4, r0	@ 000b21d4 8442
.org 0xb21d6
	bne.n 0xb21dc	@ 000b21d6 01d1
.org 0xb21d8
	movs r0, #0	@ 000b21d8 0020
.org 0xb21da
	b.n 0xb21de	@ 000b21da 00e0
.org 0xb21dc
	movs r0, #1	@ 000b21dc 0120
.org 0xb21de
	pop {r4, r5}	@ 000b21de 30bc
