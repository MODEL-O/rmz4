@ FUN_080def98  entry 0x080def98  size 292
.thumb
.org 0xdef98
FUN_080def98:
	push {r4, r5, lr}	@ 000def98 30b5
.org 0xdef9a
	adds r4, r0, #0	@ 000def9a 041c
.org 0xdef9c
	ldr r5, [r4, #40]	@ 000def9c a56a
.org 0xdef9e
	adds r0, r5, #0	@ 000def9e 281c
.org 0xdefa0
	adds r0, #140	@ 000defa0 8c30
.org 0xdefa2
	ldr r0, [r0, #0]	@ 000defa2 0068
.org 0xdefa4
	movs r1, #128	@ 000defa4 8021
.org 0xdefa6
	lsls r1, r1, #2	@ 000defa6 8900
.org 0xdefa8
	ands r0, r1	@ 000defa8 0840
.org 0xdefaa
	cmp r0, #0	@ 000defaa 0028
.org 0xdefac
	bne.n 0xdefc0	@ 000defac 08d1
.org 0xdefae
	adds r0, r5, #0	@ 000defae 281c
.org 0xdefb0
	adds r0, #164	@ 000defb0 a430
.org 0xdefb2
	movs r1, #0	@ 000defb2 0021
.org 0xdefb4
	ldrsh r0, [r0, r1]	@ 000defb4 405e
.org 0xdefb6
	cmp r0, #0	@ 000defb6 0028
.org 0xdefb8
	beq.n 0xdefc0	@ 000defb8 02d0
.org 0xdefba
	ldrb r0, [r5, #12]	@ 000defba 287b
.org 0xdefbc
	cmp r0, #2	@ 000defbc 0228
.org 0xdefbe
	bls.n 0xdefe0	@ 000defbe 0fd9
.org 0xdefc0
	ldr r1, [pc, #24]	@ 000defc0 0649
.org 0xdefc2
	ldrb r0, [r4, #9]	@ 000defc2 607a
.org 0xdefc4
	lsls r0, r0, #2	@ 000defc4 8000
.org 0xdefc6
	adds r0, r0, r1	@ 000defc6 4018
.org 0xdefc8
	movs r1, #2	@ 000defc8 0221
.org 0xdefca
	str r1, [r4, #12]	@ 000defca e160
.org 0xdefcc
	ldr r0, [r0, #0]	@ 000defcc 0068
.org 0xdefce
	ldr r0, [r0, #8]	@ 000defce 8068
.org 0xdefd0
	str r0, [r4, #20]	@ 000defd0 6061
.org 0xdefd2
	adds r0, r4, #0	@ 000defd2 201c
.org 0xdefd4
	bl 0xdecf8	@ 000defd4 fff790fe
.org 0xdefd8
	b.n 0xdf0ca	@ 000defd8 77e0
.org 0xdefda
	.byte 0x00	@ 000defda data
.org 0xdefdb
	.byte 0x00	@ 000defdb data
.org 0xdefdc
	.byte 0x64,0x6f,0x86,0x08	@ 000defdc data
.org 0xdefe0
	adds r2, r5, #0	@ 000defe0 2a1c
.org 0xdefe2
	adds r2, #180	@ 000defe2 b432
.org 0xdefe4
	ldr r0, [r2, #56]	@ 000defe4 906b
.org 0xdefe6
	cmp r0, #0	@ 000defe6 0028
.org 0xdefe8
	bne.n 0xdeff4	@ 000defe8 04d1
.org 0xdefea
	ldrb r1, [r4, #10]	@ 000defea a17a
.org 0xdefec
	movs r0, #254	@ 000defec fe20
.org 0xdefee
	ands r0, r1	@ 000defee 0840
.org 0xdeff0
	strb r0, [r4, #10]	@ 000deff0 a072
.org 0xdeff2
	b.n 0xdf0ca	@ 000deff2 6ae0
.org 0xdeff4
	ldrb r0, [r4, #10]	@ 000deff4 a07a
.org 0xdeff6
	movs r1, #1	@ 000deff6 0121
.org 0xdeff8
	orrs r1, r0	@ 000deff8 0143
.org 0xdeffa
	strb r1, [r4, #10]	@ 000deffa a172
.org 0xdeffc
	ldr r0, [r2, #56]	@ 000deffc 906b
.org 0xdeffe
	cmp r0, #0	@ 000deffe 0028
.org 0xdf000
	ble.n 0xdf020	@ 000df000 0edd
.org 0xdf002
	ldrb r0, [r4, #30]	@ 000df002 a07f
.org 0xdf004
	lsls r0, r0, #8	@ 000df004 0002
.org 0xdf006
	adds r1, r4, #0	@ 000df006 211c
.org 0xdf008
	adds r1, #112	@ 000df008 7031
.org 0xdf00a
	ldrb r1, [r1, #0]	@ 000df00a 0978
.org 0xdf00c
	orrs r0, r1	@ 000df00c 0843
.org 0xdf00e
	ldr r1, [pc, #12]	@ 000df00e 0349
.org 0xdf010
	cmp r0, r1	@ 000df010 8842
.org 0xdf012
	beq.n 0xdf038	@ 000df012 11d0
.org 0xdf014
	adds r0, r4, #0	@ 000df014 201c
.org 0xdf016
	bl 0x1cf00	@ 000df016 3df773ff
.org 0xdf01a
	b.n 0xdf038	@ 000df01a 0de0
.org 0xdf01c
	.byte 0x02,0xc5,0x00,0x00	@ 000df01c data
.org 0xdf020
	ldrb r0, [r4, #30]	@ 000df020 a07f
.org 0xdf022
	lsls r0, r0, #8	@ 000df022 0002
.org 0xdf024
	adds r1, r4, #0	@ 000df024 211c
.org 0xdf026
	adds r1, #112	@ 000df026 7031
.org 0xdf028
	ldrb r1, [r1, #0]	@ 000df028 0978
.org 0xdf02a
	orrs r0, r1	@ 000df02a 0843
.org 0xdf02c
	ldr r1, [pc, #36]	@ 000df02c 0949
.org 0xdf02e
	cmp r0, r1	@ 000df02e 8842
.org 0xdf030
	beq.n 0xdf038	@ 000df030 02d0
.org 0xdf032
	adds r0, r4, #0	@ 000df032 201c
.org 0xdf034
	bl 0x1cf00	@ 000df034 3df764ff
.org 0xdf038
	adds r0, r4, #0	@ 000df038 201c
.org 0xdf03a
	bl 0x1cff0	@ 000df03a 3df7d9ff
.org 0xdf03e
	ldrb r0, [r5, #10]	@ 000df03e a87a
.org 0xdf040
	lsrs r2, r0, #4	@ 000df040 0209
.org 0xdf042
	movs r0, #1	@ 000df042 0120
.org 0xdf044
	ands r2, r0	@ 000df044 0240
.org 0xdf046
	cmp r2, #0	@ 000df046 002a
.org 0xdf048
	beq.n 0xdf058	@ 000df048 06d0
.org 0xdf04a
	ldrb r1, [r4, #10]	@ 000df04a a17a
.org 0xdf04c
	movs r0, #16	@ 000df04c 1020
.org 0xdf04e
	orrs r0, r1	@ 000df04e 0843
.org 0xdf050
	b.n 0xdf05e	@ 000df050 05e0
.org 0xdf052
	.byte 0x00	@ 000df052 data
.org 0xdf053
	.byte 0x00	@ 000df053 data
.org 0xdf054
	.byte 0x01,0xc5,0x00,0x00	@ 000df054 data
.org 0xdf058
	ldrb r1, [r4, #10]	@ 000df058 a17a
.org 0xdf05a
	movs r0, #239	@ 000df05a ef20
.org 0xdf05c
	ands r0, r1	@ 000df05c 0840
.org 0xdf05e
	strb r0, [r4, #10]	@ 000df05e a072
.org 0xdf060
	adds r1, r2, #0	@ 000df060 111c
.org 0xdf062
	adds r0, r4, #0	@ 000df062 201c
.org 0xdf064
	adds r0, #76	@ 000df064 4c30
.org 0xdf066
	strb r1, [r0, #0]	@ 000df066 0170
.org 0xdf068
	adds r3, r4, #0	@ 000df068 231c
.org 0xdf06a
	adds r3, #74	@ 000df06a 4a33
.org 0xdf06c
	lsls r1, r1, #4	@ 000df06c 0901
.org 0xdf06e
	ldrb r2, [r3, #0]	@ 000df06e 1a78
.org 0xdf070
	movs r0, #17	@ 000df070 1120
.org 0xdf072
	negs r0, r0	@ 000df072 4042
.org 0xdf074
	ands r0, r2	@ 000df074 1040
.org 0xdf076
	orrs r0, r1	@ 000df076 0843
.org 0xdf078
	strb r0, [r3, #0]	@ 000df078 1870
.org 0xdf07a
	ldrb r1, [r5, #10]	@ 000df07a a97a
.org 0xdf07c
	movs r0, #16	@ 000df07c 1020
.org 0xdf07e
	ands r0, r1	@ 000df07e 0840
.org 0xdf080
	cmp r0, #0	@ 000df080 0028
.org 0xdf082
	beq.n 0xdf0a0	@ 000df082 0dd0
.org 0xdf084
	ldr r1, [pc, #20]	@ 000df084 0549
.org 0xdf086
	movs r3, #186	@ 000df086 ba23
.org 0xdf088
	lsls r3, r3, #1	@ 000df088 5b00
.org 0xdf08a
	adds r2, r5, r3	@ 000df08a ea18
.org 0xdf08c
	ldrb r0, [r2, #0]	@ 000df08c 1078
.org 0xdf08e
	lsls r0, r0, #1	@ 000df08e 4000
.org 0xdf090
	adds r0, r0, r1	@ 000df090 4018
.org 0xdf092
	movs r3, #0	@ 000df092 0023
.org 0xdf094
	ldrsh r1, [r0, r3]	@ 000df094 c15e
.org 0xdf096
	ldr r0, [r5, #84]	@ 000df096 686d
.org 0xdf098
	subs r0, r0, r1	@ 000df098 401a
.org 0xdf09a
	b.n 0xdf0b6	@ 000df09a 0ce0
.org 0xdf09c
	.byte 0x6c,0x87,0x86,0x08	@ 000df09c data
.org 0xdf0a0
	ldr r1, [pc, #44]	@ 000df0a0 0b49
.org 0xdf0a2
	movs r0, #186	@ 000df0a2 ba20
.org 0xdf0a4
	lsls r0, r0, #1	@ 000df0a4 4000
.org 0xdf0a6
	adds r2, r5, r0	@ 000df0a6 2a18
.org 0xdf0a8
	ldrb r0, [r2, #0]	@ 000df0a8 1078
.org 0xdf0aa
	lsls r0, r0, #1	@ 000df0aa 4000
.org 0xdf0ac
	adds r0, r0, r1	@ 000df0ac 4018
.org 0xdf0ae
	movs r3, #0	@ 000df0ae 0023
.org 0xdf0b0
	ldrsh r1, [r0, r3]	@ 000df0b0 c15e
.org 0xdf0b2
	ldr r0, [r5, #84]	@ 000df0b2 686d
.org 0xdf0b4
	adds r0, r0, r1	@ 000df0b4 4018
.org 0xdf0b6
	str r0, [r4, #84]	@ 000df0b6 6065
.org 0xdf0b8
	ldr r1, [pc, #24]	@ 000df0b8 0649
.org 0xdf0ba
	ldrb r0, [r2, #0]	@ 000df0ba 1078
