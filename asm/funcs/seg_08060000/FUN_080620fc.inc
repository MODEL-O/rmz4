@ FUN_080620fc  entry 0x080620fc  size 288
.thumb
.org 0x620fc
FUN_080620fc:
	push {r4, r5, lr}	@ 000620fc 30b5
.org 0x620fe
	adds r4, r0, #0	@ 000620fe 041c
.org 0x62100
	adds r0, #181	@ 00062100 b530
.org 0x62102
	movs r5, #0	@ 00062102 0025
.org 0x62104
	strb r5, [r0, #0]	@ 00062104 0570
.org 0x62106
	subs r0, #41	@ 00062106 2938
.org 0x62108
	ldr r0, [r0, #0]	@ 00062108 0068
.org 0x6210a
	movs r1, #1	@ 0006210a 0121
.org 0x6210c
	ands r0, r1	@ 0006210c 0840
.org 0x6210e
	cmp r0, #0	@ 0006210e 0028
.org 0x62110
	beq.n 0x62118	@ 00062110 02d0
.org 0x62112
	movs r0, #65	@ 00062112 4120
.org 0x62114
	bl 0x6984	@ 00062114 a4f736fc
.org 0x62118
	adds r1, r4, #0	@ 00062118 211c
.org 0x6211a
	adds r1, #196	@ 0006211a c431
.org 0x6211c
	ldr r0, [r1, #0]	@ 0006211c 0868
.org 0x6211e
	cmp r0, #0	@ 0006211e 0028
.org 0x62120
	beq.n 0x6212a	@ 00062120 03d0
.org 0x62122
	ldrb r0, [r0, #12]	@ 00062122 007b
.org 0x62124
	cmp r0, #1	@ 00062124 0128
.org 0x62126
	bls.n 0x6212a	@ 00062126 00d9
.org 0x62128
	str r5, [r1, #0]	@ 00062128 0d60
.org 0x6212a
	adds r0, r4, #0	@ 0006212a 201c
.org 0x6212c
	adds r0, #140	@ 0006212c 8c30
.org 0x6212e
	ldr r1, [r0, #0]	@ 0006212e 0168
.org 0x62130
	movs r2, #128	@ 00062130 8022
.org 0x62132
	lsls r2, r2, #2	@ 00062132 9200
.org 0x62134
	ands r1, r2	@ 00062134 1140
.org 0x62136
	adds r3, r0, #0	@ 00062136 031c
.org 0x62138
	cmp r1, #0	@ 00062138 0029
.org 0x6213a
	bne.n 0x62146	@ 0006213a 04d1
.org 0x6213c
	adds r0, #24	@ 0006213c 1830
.org 0x6213e
	movs r1, #0	@ 0006213e 0021
.org 0x62140
	ldrsh r0, [r0, r1]	@ 00062140 405e
.org 0x62142
	cmp r0, #0	@ 00062142 0028
.org 0x62144
	bne.n 0x62196	@ 00062144 27d1
.org 0x62146
	ldr r0, [pc, #56]	@ 00062146 0e48
.org 0x62148
	ldrh r1, [r0, #8]	@ 00062148 0189
.org 0x6214a
	movs r0, #8	@ 0006214a 0820
.org 0x6214c
	ands r0, r1	@ 0006214c 0840
.org 0x6214e
	lsls r0, r0, #16	@ 0006214e 0004
.org 0x62150
	lsrs r2, r0, #16	@ 00062150 020c
.org 0x62152
	cmp r2, #0	@ 00062152 002a
.org 0x62154
	bne.n 0x62196	@ 00062154 1fd1
.org 0x62156
	ldr r1, [pc, #44]	@ 00062156 0b49
.org 0x62158
	ldrb r0, [r4, #9]	@ 00062158 607a
.org 0x6215a
	lsls r0, r0, #2	@ 0006215a 8000
.org 0x6215c
	adds r0, r0, r1	@ 0006215c 4018
.org 0x6215e
	movs r1, #2	@ 0006215e 0221
.org 0x62160
	str r1, [r4, #12]	@ 00062160 e160
.org 0x62162
	ldr r0, [r0, #0]	@ 00062162 0068
.org 0x62164
	ldr r0, [r0, #8]	@ 00062164 8068
.org 0x62166
	str r0, [r4, #20]	@ 00062166 6061
.org 0x62168
	ldr r1, [r3, #0]	@ 00062168 1968
.org 0x6216a
	movs r0, #128	@ 0006216a 8020
.org 0x6216c
	lsls r0, r0, #9	@ 0006216c 4002
.org 0x6216e
	ands r1, r0	@ 0006216e 0140
.org 0x62170
	cmp r1, #0	@ 00062170 0029
.org 0x62172
	beq.n 0x62188	@ 00062172 09d0
.org 0x62174
	movs r0, #1	@ 00062174 0120
.org 0x62176
	strb r0, [r4, #13]	@ 00062176 6073
.org 0x62178
	strb r2, [r4, #14]	@ 00062178 a273
.org 0x6217a
	strb r2, [r4, #15]	@ 0006217a e273
.org 0x6217c
	b.n 0x6218e	@ 0006217c 07e0
.org 0x6217e
	.byte 0x00	@ 0006217e data
.org 0x6217f
	.byte 0x00	@ 0006217f data
.org 0x62180
	.byte 0x10,0xe9,0x02,0x02	@ 00062180 data
.org 0x62184
	.byte 0x70,0x7d,0x85,0x08	@ 00062184 data
.org 0x62188
	strb r1, [r4, #13]	@ 00062188 6173
.org 0x6218a
	strb r1, [r4, #14]	@ 0006218a a173
.org 0x6218c
	strb r1, [r4, #15]	@ 0006218c e173
.org 0x6218e
	adds r0, r4, #0	@ 0006218e 201c
.org 0x62190
	bl 0x65598	@ 00062190 03f002fa
.org 0x62194
	b.n 0x62220	@ 00062194 44e0
.org 0x62196
	ldr r0, [r3, #0]	@ 00062196 1868
.org 0x62198
	movs r1, #1	@ 00062198 0121
.org 0x6219a
	ands r0, r1	@ 0006219a 0840
.org 0x6219c
	adds r5, r4, #0	@ 0006219c 251c
.org 0x6219e
	adds r5, #207	@ 0006219e cf35
.org 0x621a0
	cmp r0, #0	@ 000621a0 0028
.org 0x621a2
	beq.n 0x621fa	@ 000621a2 2ad0
.org 0x621a4
	ldr r0, [r4, #44]	@ 000621a4 e06a
.org 0x621a6
	cmp r0, #0	@ 000621a6 0028
.org 0x621a8
	bne.n 0x62200	@ 000621a8 2ad1
.org 0x621aa
	ldrb r0, [r4, #13]	@ 000621aa 607b
.org 0x621ac
	cmp r0, #12	@ 000621ac 0c28
.org 0x621ae
	bgt.n 0x621b4	@ 000621ae 01dc
.org 0x621b0
	cmp r0, #11	@ 000621b0 0b28
.org 0x621b2
	bge.n 0x621c8	@ 000621b2 09da
.org 0x621b4
	adds r0, r4, #0	@ 000621b4 201c
.org 0x621b6
	adds r0, #151	@ 000621b6 9730
.org 0x621b8
	ldrb r1, [r0, #0]	@ 000621b8 0178
.org 0x621ba
	movs r0, #240	@ 000621ba f020
.org 0x621bc
	ands r0, r1	@ 000621bc 0840
.org 0x621be
	cmp r0, #32	@ 000621be 2028
.org 0x621c0
	bne.n 0x621c8	@ 000621c0 02d1
.org 0x621c2
	adds r0, r4, #0	@ 000621c2 201c
.org 0x621c4
	bl 0x66598	@ 000621c4 04f0e8f9
.org 0x621c8
	ldrb r0, [r4, #13]	@ 000621c8 607b
.org 0x621ca
	cmp r0, #4	@ 000621ca 0428
.org 0x621cc
	beq.n 0x621d8	@ 000621cc 04d0
.org 0x621ce
	adds r5, r4, #0	@ 000621ce 251c
.org 0x621d0
	adds r5, #207	@ 000621d0 cf35
.org 0x621d2
	cmp r0, #10	@ 000621d2 0a28
.org 0x621d4
	beq.n 0x621f0	@ 000621d4 0cd0
.org 0x621d6
	b.n 0x621fa	@ 000621d6 10e0
.org 0x621d8
	adds r1, r4, #0	@ 000621d8 211c
.org 0x621da
	adds r1, #207	@ 000621da cf31
.org 0x621dc
	ldrb r0, [r1, #0]	@ 000621dc 0878
.org 0x621de
	adds r5, r1, #0	@ 000621de 0d1c
.org 0x621e0
	cmp r0, #0	@ 000621e0 0028
.org 0x621e2
	beq.n 0x621f0	@ 000621e2 05d0
.org 0x621e4
	adds r0, r4, #0	@ 000621e4 201c
.org 0x621e6
	adds r0, #206	@ 000621e6 ce30
.org 0x621e8
	movs r1, #0	@ 000621e8 0021
.org 0x621ea
	strb r1, [r0, #0]	@ 000621ea 0170
.org 0x621ec
	movs r0, #12	@ 000621ec 0c20
.org 0x621ee
	b.n 0x621f4	@ 000621ee 01e0
.org 0x621f0
	movs r1, #0	@ 000621f0 0021
.org 0x621f2
	movs r0, #11	@ 000621f2 0b20
.org 0x621f4
	strb r0, [r4, #13]	@ 000621f4 6073
.org 0x621f6
	strb r1, [r4, #14]	@ 000621f6 a173
.org 0x621f8
	strb r1, [r4, #15]	@ 000621f8 e173
.org 0x621fa
	ldr r0, [r4, #44]	@ 000621fa e06a
.org 0x621fc
	cmp r0, #0	@ 000621fc 0028
.org 0x621fe
	beq.n 0x6220c	@ 000621fe 05d0
.org 0x62200
	bl 0x2b3e4	@ 00062200 c9f7f0f8
.org 0x62204
	cmp r0, #0	@ 00062204 0028
.org 0x62206
	beq.n 0x6220c	@ 00062206 01d0
.org 0x62208
	movs r0, #0	@ 00062208 0020
.org 0x6220a
	str r0, [r4, #44]	@ 0006220a e062
.org 0x6220c
	ldr r1, [pc, #24]	@ 0006220c 0649
.org 0x6220e
	ldrb r0, [r4, #13]	@ 0006220e 607b
.org 0x62210
	lsls r0, r0, #2	@ 00062210 8000
.org 0x62212
	adds r0, r0, r1	@ 00062212 4018
.org 0x62214
	ldr r1, [r0, #0]	@ 00062214 0168
.org 0x62216
	adds r0, r4, #0	@ 00062216 201c
.org 0x62218
	bl 0x128f80	@ 00062218 c6f0b2fe
