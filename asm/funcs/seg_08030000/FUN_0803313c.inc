@ FUN_0803313c  entry 0x0803313c  size 190
.thumb
.org 0x3313c
FUN_0803313c:
	push {r4, r5, r6, r7, lr}	@ 0003313c f0b5
.org 0x3313e
	adds r4, r0, #0	@ 0003313e 041c
.org 0x33140
	movs r7, #0	@ 00033140 0027
.org 0x33142
	ldr r0, [pc, #88]	@ 00033142 1648
.org 0x33144
	movs r1, #198	@ 00033144 c621
.org 0x33146
	lsls r1, r1, #3	@ 00033146 c900
.org 0x33148
	adds r0, r0, r1	@ 00033148 4018
.org 0x3314a
	ldr r0, [r0, #0]	@ 0003314a 0068
.org 0x3314c
	cmp r0, #0	@ 0003314c 0028
.org 0x3314e
	beq.n 0x331ee	@ 0003314e 4ed0
.org 0x33150
	ldr r3, [r0, #44]	@ 00033150 c36a
.org 0x33152
	cmp r3, #0	@ 00033152 002b
.org 0x33154
	beq.n 0x331ee	@ 00033154 4bd0
.org 0x33156
	adds r5, r3, #0	@ 00033156 1d1c
.org 0x33158
	ldrb r0, [r4, #15]	@ 00033158 e07b
.org 0x3315a
	cmp r0, #0	@ 0003315a 0028
.org 0x3315c
	bne.n 0x331c8	@ 0003315c 34d1
.org 0x3315e
	ldr r1, [r4, #84]	@ 0003315e 616d
.org 0x33160
	ldr r0, [r5, #84]	@ 00033160 686d
.org 0x33162
	cmp r1, r0	@ 00033162 8142
.org 0x33164
	beq.n 0x331f4	@ 00033164 46d0
.org 0x33166
	movs r6, #128	@ 00033166 8026
.org 0x33168
	lsls r6, r6, #2	@ 00033168 b600
.org 0x3316a
	adds r0, r4, #0	@ 0003316a 201c
.org 0x3316c
	adds r1, r6, #0	@ 0003316c 311c
.org 0x3316e
	bl 0x1cf00	@ 0003316e e9f7c7fe
.org 0x33172
	ldr r1, [r4, #84]	@ 00033172 616d
.org 0x33174
	ldr r0, [r5, #84]	@ 00033174 686d
.org 0x33176
	cmp r1, r0	@ 00033176 8142
.org 0x33178
	ble.n 0x331a4	@ 00033178 14dd
.org 0x3317a
	adds r0, r4, #0	@ 0003317a 201c
.org 0x3317c
	adds r0, #76	@ 0003317c 4c30
.org 0x3317e
	strb r7, [r0, #0]	@ 0003317e 0770
.org 0x33180
	adds r2, r4, #0	@ 00033180 221c
.org 0x33182
	adds r2, #74	@ 00033182 4a32
.org 0x33184
	ldrb r1, [r2, #0]	@ 00033184 1178
.org 0x33186
	movs r0, #17	@ 00033186 1120
.org 0x33188
	negs r0, r0	@ 00033188 4042
.org 0x3318a
	ands r0, r1	@ 0003318a 0840
.org 0x3318c
	strb r0, [r2, #0]	@ 0003318c 1070
.org 0x3318e
	ldrb r1, [r4, #10]	@ 0003318e a17a
.org 0x33190
	movs r0, #239	@ 00033190 ef20
.org 0x33192
	ands r0, r1	@ 00033192 0840
.org 0x33194
	strb r0, [r4, #10]	@ 00033194 a072
.org 0x33196
	ldr r0, [pc, #8]	@ 00033196 0248
.org 0x33198
	str r0, [r4, #92]	@ 00033198 e065
.org 0x3319a
	b.n 0x331c0	@ 0003319a 11e0
.org 0x3319c
	.byte 0xe0,0x32,0x00,0x03	@ 0003319c data
.org 0x331a0
	.byte 0x00,0xfe,0xff,0xff	@ 000331a0 data
.org 0x331a4
	adds r1, r4, #0	@ 000331a4 211c
.org 0x331a6
	adds r1, #76	@ 000331a6 4c31
.org 0x331a8
	movs r0, #1	@ 000331a8 0120
.org 0x331aa
	strb r0, [r1, #0]	@ 000331aa 0870
.org 0x331ac
	adds r2, r4, #0	@ 000331ac 221c
.org 0x331ae
	adds r2, #74	@ 000331ae 4a32
.org 0x331b0
	ldrb r0, [r2, #0]	@ 000331b0 1078
.org 0x331b2
	movs r1, #16	@ 000331b2 1021
.org 0x331b4
	orrs r0, r1	@ 000331b4 0843
.org 0x331b6
	strb r0, [r2, #0]	@ 000331b6 1070
.org 0x331b8
	ldrb r0, [r4, #10]	@ 000331b8 a07a
.org 0x331ba
	orrs r1, r0	@ 000331ba 0143
.org 0x331bc
	strb r1, [r4, #10]	@ 000331bc a172
.org 0x331be
	str r6, [r4, #92]	@ 000331be e665
.org 0x331c0
	ldrb r0, [r4, #15]	@ 000331c0 e07b
.org 0x331c2
	adds r0, #1	@ 000331c2 0130
.org 0x331c4
	strb r0, [r4, #15]	@ 000331c4 e073
.org 0x331c6
	b.n 0x331f0	@ 000331c6 13e0
.org 0x331c8
	ldr r1, [r4, #84]	@ 000331c8 616d
.org 0x331ca
	ldr r0, [r4, #92]	@ 000331ca e06d
.org 0x331cc
	adds r2, r1, r0	@ 000331cc 0a18
.org 0x331ce
	str r2, [r4, #84]	@ 000331ce 6265
.org 0x331d0
	ldrb r1, [r4, #10]	@ 000331d0 a17a
.org 0x331d2
	movs r0, #16	@ 000331d2 1020
.org 0x331d4
	ands r0, r1	@ 000331d4 0840
.org 0x331d6
	cmp r0, #0	@ 000331d6 0028
.org 0x331d8
	beq.n 0x331e4	@ 000331d8 04d0
.org 0x331da
	ldr r0, [r5, #84]	@ 000331da 686d
.org 0x331dc
	cmp r2, r0	@ 000331dc 8242
.org 0x331de
	ble.n 0x331f0	@ 000331de 07dd
.org 0x331e0
	str r0, [r4, #84]	@ 000331e0 6065
.org 0x331e2
	b.n 0x331f4	@ 000331e2 07e0
.org 0x331e4
	ldr r0, [r3, #84]	@ 000331e4 586d
.org 0x331e6
	cmp r2, r0	@ 000331e6 8242
.org 0x331e8
	bge.n 0x331f0	@ 000331e8 02da
.org 0x331ea
	str r0, [r4, #84]	@ 000331ea 6065
.org 0x331ec
	b.n 0x331f4	@ 000331ec 02e0
.org 0x331ee
	movs r7, #1	@ 000331ee 0127
.org 0x331f0
	cmp r7, #0	@ 000331f0 002f
.org 0x331f2
	beq.n 0x331fc	@ 000331f2 03d0
.org 0x331f4
	movs r1, #0	@ 000331f4 0021
.org 0x331f6
	movs r0, #2	@ 000331f6 0220
.org 0x331f8
	strb r0, [r4, #14]	@ 000331f8 a073
