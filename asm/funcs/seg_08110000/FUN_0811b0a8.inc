@ FUN_0811b0a8  entry 0x0811b0a8  size 164
.thumb
.org 0x11b0a8
FUN_0811b0a8:
	push {r4, r5, r6, r7, lr}	@ 0011b0a8 f0b5
.org 0x11b0aa
	mov r7, r8	@ 0011b0aa 4746
.org 0x11b0ac
	push {r7}	@ 0011b0ac 80b4
.org 0x11b0ae
	adds r6, r0, #0	@ 0011b0ae 061c
.org 0x11b0b0
	movs r2, #0	@ 0011b0b0 0022
.org 0x11b0b2
	ldr r0, [pc, #112]	@ 0011b0b2 1c48
.org 0x11b0b4
	adds r3, r6, r0	@ 0011b0b4 3318
.org 0x11b0b6
	movs r4, #255	@ 0011b0b6 ff24
.org 0x11b0b8
	mov ip, r3	@ 0011b0b8 9c46
.org 0x11b0ba
	adds r0, r3, r2	@ 0011b0ba 9818
.org 0x11b0bc
	ldrb r1, [r0, #0]	@ 0011b0bc 0178
.org 0x11b0be
	orrs r1, r4	@ 0011b0be 2143
.org 0x11b0c0
	strb r1, [r0, #0]	@ 0011b0c0 0170
.org 0x11b0c2
	adds r0, r2, #1	@ 0011b0c2 501c
.org 0x11b0c4
	lsls r0, r0, #24	@ 0011b0c4 0006
.org 0x11b0c6
	lsrs r2, r0, #24	@ 0011b0c6 020e
.org 0x11b0c8
	cmp r2, #5	@ 0011b0c8 052a
.org 0x11b0ca
	bls.n 0x11b0ba	@ 0011b0ca f6d9
.org 0x11b0cc
	movs r1, #221	@ 0011b0cc dd21
.org 0x11b0ce
	lsls r1, r1, #4	@ 0011b0ce 0901
.org 0x11b0d0
	adds r0, r6, r1	@ 0011b0d0 7018
.org 0x11b0d2
	movs r1, #0	@ 0011b0d2 0021
.org 0x11b0d4
	strb r1, [r0, #12]	@ 0011b0d4 0173
.org 0x11b0d6
	strb r1, [r0, #13]	@ 0011b0d6 4173
.org 0x11b0d8
	strb r1, [r0, #10]	@ 0011b0d8 8172
.org 0x11b0da
	movs r2, #0	@ 0011b0da 0022
.org 0x11b0dc
	movs r5, #0	@ 0011b0dc 0025
.org 0x11b0de
	movs r3, #0	@ 0011b0de 0023
.org 0x11b0e0
	ldr r0, [pc, #68]	@ 0011b0e0 1148
.org 0x11b0e2
	ldr r0, [r0, #0]	@ 0011b0e2 0068
.org 0x11b0e4
	mov r8, r0	@ 0011b0e4 8046
.org 0x11b0e6
	movs r4, #1	@ 0011b0e6 0124
.org 0x11b0e8
	lsrs r0, r2, #1	@ 0011b0e8 5008
.org 0x11b0ea
	add r0, r8	@ 0011b0ea 4044
.org 0x11b0ec
	ldrb r1, [r0, #0]	@ 0011b0ec 0178
.org 0x11b0ee
	adds r0, r2, #0	@ 0011b0ee 101c
.org 0x11b0f0
	ands r0, r4	@ 0011b0f0 2040
.org 0x11b0f2
	lsls r0, r0, #2	@ 0011b0f2 8000
.org 0x11b0f4
	asrs r1, r0	@ 0011b0f4 0141
.org 0x11b0f6
	movs r0, #15	@ 0011b0f6 0f20
.org 0x11b0f8
	ands r1, r0	@ 0011b0f8 0140
.org 0x11b0fa
	cmp r1, #0	@ 0011b0fa 0029
.org 0x11b0fc
	beq.n 0x11b140	@ 0011b0fc 20d0
.org 0x11b0fe
	movs r7, #221	@ 0011b0fe dd27
.org 0x11b100
	lsls r7, r7, #4	@ 0011b100 3f01
.org 0x11b102
	adds r1, r6, r7	@ 0011b102 f119
.org 0x11b104
	ldrb r0, [r1, #11]	@ 0011b104 c87a
.org 0x11b106
	adds r0, r0, r3	@ 0011b106 c018
.org 0x11b108
	cmp r5, r0	@ 0011b108 8542
.org 0x11b10a
	bne.n 0x11b12c	@ 0011b10a 0fd1
.org 0x11b10c
	mov r7, ip	@ 0011b10c 6746
.org 0x11b10e
	adds r0, r7, r3	@ 0011b10e f818
.org 0x11b110
	strb r2, [r0, #0]	@ 0011b110 0270
.org 0x11b112
	ldrb r0, [r1, #10]	@ 0011b112 887a
.org 0x11b114
	adds r0, #1	@ 0011b114 0130
.org 0x11b116
	strb r0, [r1, #10]	@ 0011b116 8872
.org 0x11b118
	cmp r3, #4	@ 0011b118 042b
.org 0x11b11a
	bhi.n 0x11b13a	@ 0011b11a 0ed8
.org 0x11b11c
	adds r0, r3, #1	@ 0011b11c 581c
.org 0x11b11e
	lsls r0, r0, #24	@ 0011b11e 0006
.org 0x11b120
	lsrs r3, r0, #24	@ 0011b120 030e
.org 0x11b122
	b.n 0x11b13a	@ 0011b122 0ae0
.org 0x11b124
	.byte 0xd4,0x0d,0x00,0x00	@ 0011b124 data
.org 0x11b128
	.byte 0xa8,0xed,0x02,0x02	@ 0011b128 data
.org 0x11b12c
	cmp r3, #0	@ 0011b12c 002b
.org 0x11b12e
	beq.n 0x11b138	@ 0011b12e 03d0
.org 0x11b130
	cmp r3, #5	@ 0011b130 052b
.org 0x11b132
	bne.n 0x11b13a	@ 0011b132 02d1
.org 0x11b134
	strb r4, [r1, #13]	@ 0011b134 4c73
.org 0x11b136
	b.n 0x11b14a	@ 0011b136 08e0
.org 0x11b138
	strb r4, [r1, #12]	@ 0011b138 0c73
.org 0x11b13a
	adds r0, r5, #1	@ 0011b13a 681c
.org 0x11b13c
	lsls r0, r0, #24	@ 0011b13c 0006
.org 0x11b13e
	lsrs r5, r0, #24	@ 0011b13e 050e
.org 0x11b140
	adds r0, r2, #1	@ 0011b140 501c
.org 0x11b142
	lsls r0, r0, #24	@ 0011b142 0006
.org 0x11b144
	lsrs r2, r0, #24	@ 0011b144 020e
.org 0x11b146
	cmp r2, #50	@ 0011b146 322a
.org 0x11b148
	bls.n 0x11b0e8	@ 0011b148 ced9
.org 0x11b14a
	pop {r3}	@ 0011b14a 08bc
