@ FUN_08092034  entry 0x08092034  size 182
.thumb
.org 0x92034
FUN_08092034:
	push {r4, lr}	@ 00092034 10b5
.org 0x92036
	adds r2, r0, #0	@ 00092036 021c
.org 0x92038
	ldr r0, [r2, #12]	@ 00092038 d068
.org 0x9203a
	ldr r1, [r0, #44]	@ 0009203a c16a
.org 0x9203c
	ldr r4, [r2, #44]	@ 0009203c d46a
.org 0x9203e
	movs r0, #8	@ 0009203e 0820
.org 0x92040
	ldrsb r0, [r1, r0]	@ 00092040 0856
.org 0x92042
	cmp r0, #3	@ 00092042 0328
.org 0x92044
	bne.n 0x920b6	@ 00092044 37d1
.org 0x92046
	ldrb r0, [r1, #9]	@ 00092046 487a
.org 0x92048
	cmp r0, #22	@ 00092048 1628
.org 0x9204a
	bne.n 0x920b6	@ 0009204a 34d1
.org 0x9204c
	cmp r1, r4	@ 0009204c a142
.org 0x9204e
	beq.n 0x920b6	@ 0009204e 32d0
.org 0x92050
	ldrb r0, [r1, #13]	@ 00092050 487b
.org 0x92052
	cmp r0, #5	@ 00092052 0528
.org 0x92054
	bhi.n 0x9207c	@ 00092054 12d8
.org 0x92056
	ldr r0, [r4, #96]	@ 00092056 206e
.org 0x92058
	cmp r0, #0	@ 00092058 0028
.org 0x9205a
	ble.n 0x920b6	@ 0009205a 2cdd
.org 0x9205c
	adds r1, r4, #0	@ 0009205c 211c
.org 0x9205e
	adds r1, #189	@ 0009205e bd31
.org 0x92060
	ldrb r0, [r1, #0]	@ 00092060 0878
.org 0x92062
	subs r0, #1	@ 00092062 0138
.org 0x92064
	strb r0, [r1, #0]	@ 00092064 0870
.org 0x92066
	ldr r0, [pc, #12]	@ 00092066 0348
.org 0x92068
	str r0, [r4, #96]	@ 00092068 2066
.org 0x9206a
	ldr r0, [r4, #92]	@ 0009206a e06d
.org 0x9206c
	cmp r0, #0	@ 0009206c 0028
.org 0x9206e
	bgt.n 0x920b0	@ 0009206e 1fdc
.org 0x92070
	ldr r0, [pc, #4]	@ 00092070 0148
.org 0x92072
	b.n 0x920b4	@ 00092072 1fe0
.org 0x92074
	.byte 0x00,0xfd,0xff,0xff	@ 00092074 data
.org 0x92078
	.byte 0x00,0xff,0xff,0xff	@ 00092078 data
.org 0x9207c
	adds r0, r1, #0	@ 0009207c 081c
.org 0x9207e
	adds r0, #190	@ 0009207e be30
.org 0x92080
	ldrb r0, [r0, #0]	@ 00092080 0078
.org 0x92082
	cmp r0, #1	@ 00092082 0128
.org 0x92084
	bne.n 0x92090	@ 00092084 04d1
.org 0x92086
	adds r1, r4, #0	@ 00092086 211c
.org 0x92088
	adds r1, #189	@ 00092088 bd31
.org 0x9208a
	movs r0, #0	@ 0009208a 0020
.org 0x9208c
	strb r0, [r1, #0]	@ 0009208c 0870
.org 0x9208e
	b.n 0x920b6	@ 0009208e 12e0
.org 0x92090
	ldr r0, [r4, #96]	@ 00092090 206e
.org 0x92092
	cmp r0, #0	@ 00092092 0028
.org 0x92094
	ble.n 0x920b6	@ 00092094 0fdd
.org 0x92096
	adds r1, r4, #0	@ 00092096 211c
.org 0x92098
	adds r1, #189	@ 00092098 bd31
.org 0x9209a
	ldrb r0, [r1, #0]	@ 0009209a 0878
.org 0x9209c
	subs r0, #1	@ 0009209c 0138
.org 0x9209e
	strb r0, [r1, #0]	@ 0009209e 0870
.org 0x920a0
	ldr r0, [r4, #92]	@ 000920a0 e06d
.org 0x920a2
	cmp r0, #0	@ 000920a2 0028
.org 0x920a4
	ble.n 0x920b0	@ 000920a4 04dd
.org 0x920a6
	ldr r0, [pc, #4]	@ 000920a6 0148
.org 0x920a8
	b.n 0x920b4	@ 000920a8 04e0
.org 0x920aa
	.byte 0x00	@ 000920aa data
.org 0x920ab
	.byte 0x00	@ 000920ab data
.org 0x920ac
	.byte 0x00,0xff,0xff,0xff	@ 000920ac data
.org 0x920b0
	movs r0, #128	@ 000920b0 8020
.org 0x920b2
	lsls r0, r0, #1	@ 000920b2 4000
.org 0x920b4
	str r0, [r4, #92]	@ 000920b4 e065
.org 0x920b6
	ldrb r0, [r4, #13]	@ 000920b6 607b
.org 0x920b8
	subs r0, #1	@ 000920b8 0138
.org 0x920ba
	lsls r0, r0, #24	@ 000920ba 0006
.org 0x920bc
	lsrs r0, r0, #24	@ 000920bc 000e
.org 0x920be
	cmp r0, #7	@ 000920be 0728
.org 0x920c0
	bhi.n 0x920f2	@ 000920c0 17d8
.org 0x920c2
	ldr r0, [r2, #20]	@ 000920c2 5069
.org 0x920c4
	movs r1, #128	@ 000920c4 8021
.org 0x920c6
	lsls r1, r1, #10	@ 000920c6 8902
.org 0x920c8
	ands r0, r1	@ 000920c8 0840
.org 0x920ca
	cmp r0, #0	@ 000920ca 0028
.org 0x920cc
	beq.n 0x920f2	@ 000920cc 11d0
.org 0x920ce
	ldr r0, [pc, #40]	@ 000920ce 0a48
.org 0x920d0
	ldr r0, [r0, #0]	@ 000920d0 0068
.org 0x920d2
	cmp r0, #0	@ 000920d2 0028
.org 0x920d4
	beq.n 0x920f2	@ 000920d4 0dd0
.org 0x920d6
	movs r1, #8	@ 000920d6 0821
.org 0x920d8
	movs r2, #0	@ 000920d8 0022
.org 0x920da
	bl 0x3a578	@ 000920da a8f74dfa
.org 0x920de
	adds r1, r4, #0	@ 000920de 211c
.org 0x920e0
	adds r1, #191	@ 000920e0 bf31
.org 0x920e2
	strb r0, [r1, #0]	@ 000920e2 0870
.org 0x920e4
	lsls r0, r0, #24	@ 000920e4 0006
.org 0x920e6
	cmp r0, #0	@ 000920e6 0028
.org 0x920e8
	beq.n 0x920f2	@ 000920e8 03d0
