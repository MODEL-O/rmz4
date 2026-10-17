@ FUN_0812808c  entry 0x0812808c  size 180
.thumb
.org 0x12808c
FUN_0812808c:
	push {r4, lr}	@ 0012808c 10b5
.org 0x12808e
	adds r2, r1, #0	@ 0012808e 0a1c
.org 0x128090
	movs r0, #1	@ 00128090 0120
.org 0x128092
	ldrb r1, [r2, #0]	@ 00128092 1178
.org 0x128094
	ands r0, r1	@ 00128094 0840
.org 0x128096
	cmp r0, #0	@ 00128096 0028
.org 0x128098
	beq.n 0x1280f0	@ 00128098 2ad0
.org 0x12809a
	ldrb r3, [r2, #19]	@ 0012809a d37c
.org 0x12809c
	ldrb r1, [r2, #18]	@ 0012809c 917c
.org 0x12809e
	adds r0, r3, #0	@ 0012809e 181c
.org 0x1280a0
	muls r0, r1	@ 001280a0 4843
.org 0x1280a2
	lsrs r3, r0, #5	@ 001280a2 4309
.org 0x1280a4
	ldrb r4, [r2, #24]	@ 001280a4 147e
.org 0x1280a6
	cmp r4, #1	@ 001280a6 012c
.org 0x1280a8
	bne.n 0x1280b4	@ 001280a8 04d1
.org 0x1280aa
	movs r0, #22	@ 001280aa 1620
.org 0x1280ac
	ldrsb r0, [r2, r0]	@ 001280ac 1056
.org 0x1280ae
	adds r0, #128	@ 001280ae 8030
.org 0x1280b0
	muls r0, r3	@ 001280b0 5843
.org 0x1280b2
	lsrs r3, r0, #7	@ 001280b2 c309
.org 0x1280b4
	movs r0, #20	@ 001280b4 1420
.org 0x1280b6
	ldrsb r0, [r2, r0]	@ 001280b6 1056
.org 0x1280b8
	lsls r0, r0, #1	@ 001280b8 4000
.org 0x1280ba
	movs r1, #21	@ 001280ba 1521
.org 0x1280bc
	ldrsb r1, [r2, r1]	@ 001280bc 5156
.org 0x1280be
	adds r1, r0, r1	@ 001280be 4118
.org 0x1280c0
	cmp r4, #2	@ 001280c0 022c
.org 0x1280c2
	bne.n 0x1280ca	@ 001280c2 02d1
.org 0x1280c4
	movs r0, #22	@ 001280c4 1620
.org 0x1280c6
	ldrsb r0, [r2, r0]	@ 001280c6 1056
.org 0x1280c8
	adds r1, r1, r0	@ 001280c8 0918
.org 0x1280ca
	movs r0, #128	@ 001280ca 8020
.org 0x1280cc
	negs r0, r0	@ 001280cc 4042
.org 0x1280ce
	cmp r1, r0	@ 001280ce 8142
.org 0x1280d0
	bge.n 0x1280d6	@ 001280d0 01da
.org 0x1280d2
	adds r1, r0, #0	@ 001280d2 011c
.org 0x1280d4
	b.n 0x1280dc	@ 001280d4 02e0
.org 0x1280d6
	cmp r1, #127	@ 001280d6 7f29
.org 0x1280d8
	ble.n 0x1280dc	@ 001280d8 00dd
.org 0x1280da
	movs r1, #127	@ 001280da 7f21
.org 0x1280dc
	adds r0, r1, #0	@ 001280dc 081c
.org 0x1280de
	adds r0, #128	@ 001280de 8030
.org 0x1280e0
	muls r0, r3	@ 001280e0 5843
.org 0x1280e2
	lsrs r0, r0, #8	@ 001280e2 000a
.org 0x1280e4
	strb r0, [r2, #16]	@ 001280e4 1074
.org 0x1280e6
	movs r0, #127	@ 001280e6 7f20
.org 0x1280e8
	subs r0, r0, r1	@ 001280e8 401a
.org 0x1280ea
	muls r0, r3	@ 001280ea 5843
.org 0x1280ec
	lsrs r0, r0, #8	@ 001280ec 000a
.org 0x1280ee
	strb r0, [r2, #17]	@ 001280ee 5074
.org 0x1280f0
	ldrb r1, [r2, #0]	@ 001280f0 1178
.org 0x1280f2
	movs r0, #4	@ 001280f2 0420
.org 0x1280f4
	ands r0, r1	@ 001280f4 0840
.org 0x1280f6
	adds r3, r1, #0	@ 001280f6 0b1c
.org 0x1280f8
	cmp r0, #0	@ 001280f8 0028
.org 0x1280fa
	beq.n 0x128134	@ 001280fa 1bd0
.org 0x1280fc
	movs r0, #14	@ 001280fc 0e20
.org 0x1280fe
	ldrsb r0, [r2, r0]	@ 001280fe 1056
.org 0x128100
	ldrb r1, [r2, #15]	@ 00128100 d17b
.org 0x128102
	muls r0, r1	@ 00128102 4843
.org 0x128104
	movs r1, #12	@ 00128104 0c21
.org 0x128106
	ldrsb r1, [r2, r1]	@ 00128106 5156
.org 0x128108
	adds r1, r1, r0	@ 00128108 0918
.org 0x12810a
	lsls r1, r1, #2	@ 0012810a 8900
.org 0x12810c
	movs r0, #10	@ 0012810c 0a20
.org 0x12810e
	ldrsb r0, [r2, r0]	@ 0012810e 1056
.org 0x128110
	lsls r0, r0, #8	@ 00128110 0002
.org 0x128112
	adds r1, r1, r0	@ 00128112 0918
.org 0x128114
	movs r0, #11	@ 00128114 0b20
.org 0x128116
	ldrsb r0, [r2, r0]	@ 00128116 1056
.org 0x128118
	lsls r0, r0, #8	@ 00128118 0002
.org 0x12811a
	adds r1, r1, r0	@ 0012811a 0918
.org 0x12811c
	ldrb r0, [r2, #13]	@ 0012811c 507b
.org 0x12811e
	adds r1, r0, r1	@ 0012811e 4118
.org 0x128120
	ldrb r0, [r2, #24]	@ 00128120 107e
.org 0x128122
	cmp r0, #0	@ 00128122 0028
.org 0x128124
	bne.n 0x12812e	@ 00128124 03d1
.org 0x128126
	movs r0, #22	@ 00128126 1620
.org 0x128128
	ldrsb r0, [r2, r0]	@ 00128128 1056
.org 0x12812a
	lsls r0, r0, #4	@ 0012812a 0001
.org 0x12812c
	adds r1, r1, r0	@ 0012812c 0918
.org 0x12812e
	asrs r0, r1, #8	@ 0012812e 0812
.org 0x128130
	strb r0, [r2, #8]	@ 00128130 1072
.org 0x128132
	strb r1, [r2, #9]	@ 00128132 5172
.org 0x128134
	movs r0, #250	@ 00128134 fa20
.org 0x128136
	ands r0, r3	@ 00128136 1840
.org 0x128138
	strb r0, [r2, #0]	@ 00128138 1070
.org 0x12813a
	pop {r4}	@ 0012813a 10bc
.org 0x12813c
	pop {r0}	@ 0012813c 01bc
.org 0x12813e
	bx r0	@ 0012813e 0047
