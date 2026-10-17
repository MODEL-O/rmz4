@ FUN_080d20b8  entry 0x080d20b8  size 148
.thumb
.org 0xd20b8
FUN_080d20b8:
	push {r4, lr}	@ 000d20b8 10b5
.org 0xd20ba
	adds r4, r0, #0	@ 000d20ba 041c
.org 0xd20bc
	bl 0x1cc9c	@ 000d20bc 4af7eefd
.org 0xd20c0
	ldrb r1, [r4, #10]	@ 000d20c0 a17a
.org 0xd20c2
	movs r0, #1	@ 000d20c2 0120
.org 0xd20c4
	orrs r0, r1	@ 000d20c4 0843
.org 0xd20c6
	movs r1, #2	@ 000d20c6 0221
.org 0xd20c8
	orrs r0, r1	@ 000d20c8 0843
.org 0xd20ca
	strb r0, [r4, #10]	@ 000d20ca a072
.org 0xd20cc
	adds r0, r4, #0	@ 000d20cc 201c
.org 0xd20ce
	movs r1, #16	@ 000d20ce 1021
.org 0xd20d0
	bl 0x1cf00	@ 000d20d0 4af716ff
.org 0xd20d4
	ldrb r1, [r4, #10]	@ 000d20d4 a17a
.org 0xd20d6
	movs r0, #16	@ 000d20d6 1020
.org 0xd20d8
	ands r0, r1	@ 000d20d8 0840
.org 0xd20da
	cmp r0, #0	@ 000d20da 0028
.org 0xd20dc
	beq.n 0xd2104	@ 000d20dc 12d0
.org 0xd20de
	ldr r2, [pc, #24]	@ 000d20de 064a
.org 0xd20e0
	ldr r1, [r2, #0]	@ 000d20e0 1168
.org 0xd20e2
	ldr r0, [pc, #24]	@ 000d20e2 0648
.org 0xd20e4
	muls r0, r1	@ 000d20e4 4843
.org 0xd20e6
	ldr r1, [pc, #24]	@ 000d20e6 0649
.org 0xd20e8
	adds r0, r0, r1	@ 000d20e8 4018
.org 0xd20ea
	lsls r0, r0, #1	@ 000d20ea 4000
.org 0xd20ec
	lsrs r1, r0, #1	@ 000d20ec 4108
.org 0xd20ee
	str r1, [r2, #0]	@ 000d20ee 1160
.org 0xd20f0
	lsls r0, r0, #6	@ 000d20f0 8001
.org 0xd20f2
	lsrs r0, r0, #23	@ 000d20f2 c00d
.org 0xd20f4
	b.n 0xd211c	@ 000d20f4 12e0
.org 0xd20f6
	.byte 0x00	@ 000d20f6 data
.org 0xd20f7
	.byte 0x00	@ 000d20f7 data
.org 0xd20f8
	.byte 0x38,0xdc,0x02,0x02	@ 000d20f8 data
.org 0xd20fc
	.byte 0xfd,0x43,0x03,0x00	@ 000d20fc data
.org 0xd2100
	.byte 0xc3,0x9e,0x26,0x00	@ 000d2100 data
.org 0xd2104
	ldr r2, [pc, #84]	@ 000d2104 154a
.org 0xd2106
	ldr r1, [r2, #0]	@ 000d2106 1168
.org 0xd2108
	ldr r0, [pc, #84]	@ 000d2108 1548
.org 0xd210a
	muls r0, r1	@ 000d210a 4843
.org 0xd210c
	ldr r1, [pc, #84]	@ 000d210c 1549
.org 0xd210e
	adds r0, r0, r1	@ 000d210e 4018
.org 0xd2110
	lsls r0, r0, #1	@ 000d2110 4000
.org 0xd2112
	lsrs r1, r0, #1	@ 000d2112 4108
.org 0xd2114
	str r1, [r2, #0]	@ 000d2114 1160
.org 0xd2116
	lsls r0, r0, #6	@ 000d2116 8001
.org 0xd2118
	lsrs r0, r0, #23	@ 000d2118 c00d
.org 0xd211a
	negs r0, r0	@ 000d211a 4042
.org 0xd211c
	str r0, [r4, #92]	@ 000d211c e065
.org 0xd211e
	ldr r1, [r2, #0]	@ 000d211e 1168
.org 0xd2120
	ldr r0, [pc, #60]	@ 000d2120 0f48
.org 0xd2122
	muls r0, r1	@ 000d2122 4843
.org 0xd2124
	ldr r1, [pc, #60]	@ 000d2124 0f49
.org 0xd2126
	adds r0, r0, r1	@ 000d2126 4018
.org 0xd2128
	lsls r0, r0, #1	@ 000d2128 4000
.org 0xd212a
	lsrs r1, r0, #1	@ 000d212a 4108
.org 0xd212c
	str r1, [r2, #0]	@ 000d212c 1160
.org 0xd212e
	lsrs r0, r0, #17	@ 000d212e 400c
.org 0xd2130
	movs r1, #15	@ 000d2130 0f21
.org 0xd2132
	ands r0, r1	@ 000d2132 0840
.org 0xd2134
	adds r0, #10	@ 000d2134 0a30
.org 0xd2136
	lsls r0, r0, #6	@ 000d2136 8001
.org 0xd2138
	negs r0, r0	@ 000d2138 4042
.org 0xd213a
	str r0, [r4, #96]	@ 000d213a 2066
.org 0xd213c
	ldr r1, [pc, #40]	@ 000d213c 0a49
.org 0xd213e
	ldrb r0, [r4, #9]	@ 000d213e 607a
.org 0xd2140
	lsls r0, r0, #2	@ 000d2140 8000
.org 0xd2142
	adds r0, r0, r1	@ 000d2142 4018
.org 0xd2144
	movs r1, #1	@ 000d2144 0121
.org 0xd2146
	str r1, [r4, #12]	@ 000d2146 e160
.org 0xd2148
	ldr r0, [r0, #0]	@ 000d2148 0068
.org 0xd214a
	ldr r0, [r0, #4]	@ 000d214a 4068
