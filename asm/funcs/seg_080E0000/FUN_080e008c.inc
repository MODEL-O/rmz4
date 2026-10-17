@ FUN_080e008c  entry 0x080e008c  size 216
.thumb
.org 0xe008c
FUN_080e008c:
	push {r4, r5, r6, r7, lr}	@ 000e008c f0b5
.org 0xe008e
	adds r5, r0, #0	@ 000e008e 051c
.org 0xe0090
	bl 0x1cc9c	@ 000e0090 3cf704fe
.org 0xe0094
	ldrb r0, [r5, #10]	@ 000e0094 a87a
.org 0xe0096
	movs r4, #1	@ 000e0096 0124
.org 0xe0098
	movs r6, #0	@ 000e0098 0026
.org 0xe009a
	orrs r0, r4	@ 000e009a 2043
.org 0xe009c
	movs r1, #2	@ 000e009c 0221
.org 0xe009e
	orrs r0, r1	@ 000e009e 0843
.org 0xe00a0
	strb r0, [r5, #10]	@ 000e00a0 a872
.org 0xe00a2
	movs r1, #133	@ 000e00a2 8521
.org 0xe00a4
	lsls r1, r1, #8	@ 000e00a4 0902
.org 0xe00a6
	adds r0, r5, #0	@ 000e00a6 281c
.org 0xe00a8
	bl 0x1cf00	@ 000e00a8 3cf72aff
.org 0xe00ac
	adds r0, r5, #0	@ 000e00ac 281c
.org 0xe00ae
	bl 0x1cff0	@ 000e00ae 3cf79fff
.org 0xe00b2
	ldr r2, [pc, #32]	@ 000e00b2 084a
.org 0xe00b4
	ldr r1, [r2, #0]	@ 000e00b4 1168
.org 0xe00b6
	ldr r0, [pc, #32]	@ 000e00b6 0848
.org 0xe00b8
	muls r0, r1	@ 000e00b8 4843
.org 0xe00ba
	ldr r1, [pc, #32]	@ 000e00ba 0849
.org 0xe00bc
	adds r0, r0, r1	@ 000e00bc 4018
.org 0xe00be
	lsls r0, r0, #1	@ 000e00be 4000
.org 0xe00c0
	lsrs r1, r0, #1	@ 000e00c0 4108
.org 0xe00c2
	str r1, [r2, #0]	@ 000e00c2 1160
.org 0xe00c4
	lsrs r2, r0, #17	@ 000e00c4 420c
.org 0xe00c6
	ands r2, r4	@ 000e00c6 2240
.org 0xe00c8
	cmp r2, #0	@ 000e00c8 002a
.org 0xe00ca
	beq.n 0xe00e0	@ 000e00ca 09d0
.org 0xe00cc
	ldrb r0, [r5, #10]	@ 000e00cc a87a
.org 0xe00ce
	movs r1, #16	@ 000e00ce 1021
.org 0xe00d0
	orrs r0, r1	@ 000e00d0 0843
.org 0xe00d2
	b.n 0xe00e6	@ 000e00d2 08e0
.org 0xe00d4
	.byte 0x38,0xdc,0x02,0x02	@ 000e00d4 data
.org 0xe00d8
	.byte 0xfd,0x43,0x03,0x00	@ 000e00d8 data
.org 0xe00dc
	.byte 0xc3,0x9e,0x26,0x00	@ 000e00dc data
.org 0xe00e0
	ldrb r1, [r5, #10]	@ 000e00e0 a97a
.org 0xe00e2
	movs r0, #239	@ 000e00e2 ef20
.org 0xe00e4
	ands r0, r1	@ 000e00e4 0840
.org 0xe00e6
	strb r0, [r5, #10]	@ 000e00e6 a872
.org 0xe00e8
	movs r7, #1	@ 000e00e8 0127
.org 0xe00ea
	mov ip, r7	@ 000e00ea bc46
.org 0xe00ec
	mov r1, ip	@ 000e00ec 6146
.org 0xe00ee
	ands r1, r2	@ 000e00ee 1140
.org 0xe00f0
	adds r0, r5, #0	@ 000e00f0 281c
.org 0xe00f2
	adds r0, #76	@ 000e00f2 4c30
.org 0xe00f4
	strb r1, [r0, #0]	@ 000e00f4 0170
.org 0xe00f6
	adds r3, r5, #0	@ 000e00f6 2b1c
.org 0xe00f8
	adds r3, #74	@ 000e00f8 4a33
.org 0xe00fa
	lsls r1, r1, #4	@ 000e00fa 0901
.org 0xe00fc
	ldrb r2, [r3, #0]	@ 000e00fc 1a78
.org 0xe00fe
	movs r0, #17	@ 000e00fe 1120
.org 0xe0100
	negs r0, r0	@ 000e0100 4042
.org 0xe0102
	ands r0, r2	@ 000e0102 1040
.org 0xe0104
	orrs r0, r1	@ 000e0104 0843
.org 0xe0106
	strb r0, [r3, #0]	@ 000e0106 1870
.org 0xe0108
	ldr r0, [r5, #84]	@ 000e0108 686d
.org 0xe010a
	str r0, [r5, #116]	@ 000e010a 6867
.org 0xe010c
	ldr r0, [r5, #88]	@ 000e010c a86d
.org 0xe010e
	str r0, [r5, #120]	@ 000e010e a867
.org 0xe0110
	ldr r4, [pc, #92]	@ 000e0110 174c
.org 0xe0112
	ldr r0, [r4, #0]	@ 000e0112 2068
.org 0xe0114
	ldr r3, [pc, #92]	@ 000e0114 174b
.org 0xe0116
	muls r0, r3	@ 000e0116 5843
.org 0xe0118
	ldr r2, [pc, #92]	@ 000e0118 174a
.org 0xe011a
	adds r0, r0, r2	@ 000e011a 8018
.org 0xe011c
	lsls r0, r0, #1	@ 000e011c 4000
.org 0xe011e
	lsrs r1, r0, #1	@ 000e011e 4108
.org 0xe0120
	lsls r0, r0, #6	@ 000e0120 8001
.org 0xe0122
	lsrs r0, r0, #23	@ 000e0122 c00d
.org 0xe0124
	adds r7, #255	@ 000e0124 ff37
.org 0xe0126
	adds r6, r0, r7	@ 000e0126 c619
.org 0xe0128
	str r6, [r5, #92]	@ 000e0128 ee65
.org 0xe012a
	adds r0, r1, #0	@ 000e012a 081c
.org 0xe012c
	muls r0, r3	@ 000e012c 5843
.org 0xe012e
	adds r0, r0, r2	@ 000e012e 8018
.org 0xe0130
	lsls r0, r0, #1	@ 000e0130 4000
.org 0xe0132
	lsrs r1, r0, #1	@ 000e0132 4108
.org 0xe0134
	str r1, [r4, #0]	@ 000e0134 2160
.org 0xe0136
	lsrs r0, r0, #17	@ 000e0136 400c
.org 0xe0138
	movs r1, #15	@ 000e0138 0f21
.org 0xe013a
	ands r0, r1	@ 000e013a 0840
.org 0xe013c
	adds r0, #16	@ 000e013c 1030
.org 0xe013e
	str r0, [r5, #104]	@ 000e013e a866
.org 0xe0140
	lsls r1, r0, #4	@ 000e0140 0101
.org 0xe0142
	subs r1, r1, r0	@ 000e0142 091a
.org 0xe0144
	lsls r1, r1, #1	@ 000e0144 4900
.org 0xe0146
	str r1, [r5, #96]	@ 000e0146 2966
.org 0xe0148
	ldrb r0, [r5, #17]	@ 000e0148 687c
.org 0xe014a
	cmp r0, #0	@ 000e014a 0028
.org 0xe014c
	bne.n 0xe0152	@ 000e014c 01d1
.org 0xe014e
	negs r0, r6	@ 000e014e 7042
.org 0xe0150
	str r0, [r5, #92]	@ 000e0150 e865
.org 0xe0152
	ldr r1, [pc, #40]	@ 000e0152 0a49
.org 0xe0154
	ldrb r0, [r5, #9]	@ 000e0154 687a
.org 0xe0156
	lsls r0, r0, #2	@ 000e0156 8000
.org 0xe0158
	adds r0, r0, r1	@ 000e0158 4018
.org 0xe015a
	mov r1, ip	@ 000e015a 6146
.org 0xe015c
	str r1, [r5, #12]	@ 000e015c e960
.org 0xe015e
	ldr r0, [r0, #0]	@ 000e015e 0068
.org 0xe0160
	ldr r0, [r0, #4]	@ 000e0160 4068
.org 0xe0162
	str r0, [r5, #20]	@ 000e0162 6861
