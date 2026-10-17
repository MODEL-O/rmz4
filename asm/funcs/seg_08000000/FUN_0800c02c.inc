@ FUN_0800c02c  entry 0x0800c02c  size 328
.thumb
.org 0xc02c
FUN_0800c02c:
	push {r4, r5, r6, r7, lr}	@ 0000c02c f0b5
.org 0xc02e
	mov r7, r8	@ 0000c02e 4746
.org 0xc030
	push {r7}	@ 0000c030 80b4
.org 0xc032
	sub sp, #8	@ 0000c032 82b0
.org 0xc034
	adds r5, r0, #0	@ 0000c034 051c
.org 0xc036
	movs r0, #20	@ 0000c036 1420
.org 0xc038
	adds r0, r0, r5	@ 0000c038 4019
.org 0xc03a
	mov r8, r0	@ 0000c03a 8046
.org 0xc03c
	ldr r1, [r5, #52]	@ 0000c03c 696b
.org 0xc03e
	mov ip, r1	@ 0000c03e 8c46
.org 0xc040
	ldr r1, [r5, #68]	@ 0000c040 696c
.org 0xc042
	mov r3, ip	@ 0000c042 6346
.org 0xc044
	muls r3, r1	@ 0000c044 4b43
.org 0xc046
	asrs r3, r3, #8	@ 0000c046 1b12
.org 0xc048
	ldr r0, [r5, #76]	@ 0000c048 e86c
.org 0xc04a
	adds r3, r3, r0	@ 0000c04a 1b18
.org 0xc04c
	ldr r0, [r5, #56]	@ 0000c04c a86b
.org 0xc04e
	ldr r4, [r5, #72]	@ 0000c04e ac6c
.org 0xc050
	adds r2, r0, #0	@ 0000c050 021c
.org 0xc052
	muls r2, r4	@ 0000c052 6243
.org 0xc054
	asrs r2, r2, #8	@ 0000c054 1212
.org 0xc056
	ldr r0, [r5, #80]	@ 0000c056 286d
.org 0xc058
	adds r2, r2, r0	@ 0000c058 1218
.org 0xc05a
	ldr r0, [r5, #60]	@ 0000c05a e86b
.org 0xc05c
	muls r0, r1	@ 0000c05c 4843
.org 0xc05e
	asrs r0, r0, #8	@ 0000c05e 0012
.org 0xc060
	ldr r1, [r5, #84]	@ 0000c060 696d
.org 0xc062
	adds r6, r0, r1	@ 0000c062 4618
.org 0xc064
	ldr r0, [r5, #64]	@ 0000c064 286c
.org 0xc066
	muls r0, r4	@ 0000c066 6043
.org 0xc068
	asrs r0, r0, #8	@ 0000c068 0012
.org 0xc06a
	ldr r1, [r5, #88]	@ 0000c06a a96d
.org 0xc06c
	adds r7, r0, r1	@ 0000c06c 4718
.org 0xc06e
	subs r0, r3, r6	@ 0000c06e 981b
.org 0xc070
	adds r1, r0, #0	@ 0000c070 011c
.org 0xc072
	adds r1, #15	@ 0000c072 0f31
.org 0xc074
	subs r0, r2, r7	@ 0000c074 d01b
.org 0xc076
	adds r4, r0, #0	@ 0000c076 041c
.org 0xc078
	adds r4, #15	@ 0000c078 0f34
.org 0xc07a
	ldr r0, [r5, #44]	@ 0000c07a e86a
.org 0xc07c
	asrs r0, r0, #8	@ 0000c07c 0012
.org 0xc07e
	adds r0, r0, r3	@ 0000c07e c018
.org 0xc080
	str r0, [sp, #0]	@ 0000c080 0090
.org 0xc082
	ldr r0, [r5, #48]	@ 0000c082 286b
.org 0xc084
	asrs r0, r0, #8	@ 0000c084 0012
.org 0xc086
	adds r0, r0, r2	@ 0000c086 8018
.org 0xc088
	str r0, [sp, #4]	@ 0000c088 0190
.org 0xc08a
	ldr r0, [pc, #64]	@ 0000c08a 1048
.org 0xc08c
	cmp ip, r0	@ 0000c08c 8445
.org 0xc08e
	bgt.n 0xc110	@ 0000c08e 3fdc
.org 0xc090
	cmp r1, #30	@ 0000c090 1e29
.org 0xc092
	bhi.n 0xc0a4	@ 0000c092 07d8
.org 0xc094
	cmp r4, #30	@ 0000c094 1e2c
.org 0xc096
	bhi.n 0xc0a4	@ 0000c096 05d8
.org 0xc098
	ldr r3, [pc, #52]	@ 0000c098 0d4b
.org 0xc09a
	ldr r1, [pc, #56]	@ 0000c09a 0e49
.org 0xc09c
	adds r0, r3, r1	@ 0000c09c 5818
.org 0xc09e
	ldrb r0, [r0, #0]	@ 0000c09e 0078
.org 0xc0a0
	cmp r0, #0	@ 0000c0a0 0028
.org 0xc0a2
	beq.n 0xc0e0	@ 0000c0a2 1dd0
.org 0xc0a4
	ldr r0, [r5, #92]	@ 0000c0a4 e86d
.org 0xc0a6
	lsrs r0, r0, #4	@ 0000c0a6 0009
.org 0xc0a8
	lsls r0, r0, #1	@ 0000c0a8 4000
.org 0xc0aa
	ldr r1, [pc, #44]	@ 0000c0aa 0b49
.org 0xc0ac
	adds r0, r0, r1	@ 0000c0ac 4018
.org 0xc0ae
	ldrh r0, [r0, #0]	@ 0000c0ae 0088
.org 0xc0b0
	movs r2, #248	@ 0000c0b0 f822
.org 0xc0b2
	lsls r2, r2, #5	@ 0000c0b2 5201
.org 0xc0b4
	ands r2, r0	@ 0000c0b4 0240
.org 0xc0b6
	lsls r2, r2, #3	@ 0000c0b6 d200
.org 0xc0b8
	movs r0, #192	@ 0000c0b8 c020
.org 0xc0ba
	lsls r0, r0, #19	@ 0000c0ba c004
.org 0xc0bc
	adds r2, r2, r0	@ 0000c0bc 1218
.org 0xc0be
	ldr r3, [pc, #28]	@ 0000c0be 074b
.org 0xc0c0
	mov r0, r8	@ 0000c0c0 4046
.org 0xc0c2
	mov r1, sp	@ 0000c0c2 6946
.org 0xc0c4
	bl 0x5050	@ 0000c0c4 f8f7c4ff
.org 0xc0c8
	b.n 0xc176	@ 0000c0c8 55e0
.org 0xc0ca
	.byte 0x00	@ 0000c0ca data
.org 0xc0cb
	.byte 0x00	@ 0000c0cb data
.org 0xc0cc
	.byte 0x77,0x08,0x00,0x00	@ 0000c0cc data
.org 0xc0d0
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c0d0 data
.org 0xc0d4
	.byte 0x2e,0xd0,0x02,0x00	@ 0000c0d4 data
.org 0xc0d8
	.byte 0x04,0x0a,0x00,0x02	@ 0000c0d8 data
.org 0xc0dc
	.byte 0x90,0x12,0x00,0x02	@ 0000c0dc data
.org 0xc0e0
	ldr r0, [r5, #92]	@ 0000c0e0 e86d
.org 0xc0e2
	lsrs r0, r0, #4	@ 0000c0e2 0009
.org 0xc0e4
	lsls r0, r0, #1	@ 0000c0e4 4000
.org 0xc0e6
	ldr r1, [pc, #36]	@ 0000c0e6 0949
.org 0xc0e8
	adds r0, r0, r1	@ 0000c0e8 4018
.org 0xc0ea
	ldrh r0, [r0, #0]	@ 0000c0ea 0088
.org 0xc0ec
	movs r2, #248	@ 0000c0ec f822
.org 0xc0ee
	lsls r2, r2, #5	@ 0000c0ee 5201
.org 0xc0f0
	ands r2, r0	@ 0000c0f0 0240
.org 0xc0f2
	lsls r2, r2, #3	@ 0000c0f2 d200
.org 0xc0f4
	movs r0, #192	@ 0000c0f4 c020
.org 0xc0f6
	lsls r0, r0, #19	@ 0000c0f6 c004
.org 0xc0f8
	adds r2, r2, r0	@ 0000c0f8 1218
.org 0xc0fa
	movs r0, #252	@ 0000c0fa fc20
.org 0xc0fc
	lsls r0, r0, #3	@ 0000c0fc c000
.org 0xc0fe
	adds r3, r3, r0	@ 0000c0fe 1b18
.org 0xc100
	mov r0, r8	@ 0000c100 4046
.org 0xc102
	mov r1, sp	@ 0000c102 6946
.org 0xc104
	bl 0x5124	@ 0000c104 f9f70ef8
.org 0xc108
	b.n 0xc176	@ 0000c108 35e0
.org 0xc10a
	.byte 0x00	@ 0000c10a data
.org 0xc10b
	.byte 0x00	@ 0000c10b data
.org 0xc10c
	.byte 0x04,0x0a,0x00,0x02	@ 0000c10c data
.org 0xc110
	cmp r1, #30	@ 0000c110 1e29
.org 0xc112
	bhi.n 0xc124	@ 0000c112 07d8
.org 0xc114
	cmp r4, #30	@ 0000c114 1e2c
.org 0xc116
	bhi.n 0xc124	@ 0000c116 05d8
.org 0xc118
	ldr r0, [pc, #44]	@ 0000c118 0b48
.org 0xc11a
	ldr r1, [pc, #48]	@ 0000c11a 0c49
.org 0xc11c
	adds r0, r0, r1	@ 0000c11c 4018
.org 0xc11e
	ldrb r0, [r0, #0]	@ 0000c11e 0078
.org 0xc120
	cmp r0, #0	@ 0000c120 0028
.org 0xc122
	beq.n 0xc154	@ 0000c122 17d0
.org 0xc124
	ldr r0, [r5, #92]	@ 0000c124 e86d
.org 0xc126
	lsrs r0, r0, #4	@ 0000c126 0009
.org 0xc128
	lsls r0, r0, #1	@ 0000c128 4000
.org 0xc12a
	ldr r1, [pc, #36]	@ 0000c12a 0949
.org 0xc12c
	adds r0, r0, r1	@ 0000c12c 4018
.org 0xc12e
	ldrh r0, [r0, #0]	@ 0000c12e 0088
.org 0xc130
	movs r2, #248	@ 0000c130 f822
.org 0xc132
	lsls r2, r2, #5	@ 0000c132 5201
.org 0xc134
	ands r2, r0	@ 0000c134 0240
.org 0xc136
	lsls r2, r2, #3	@ 0000c136 d200
.org 0xc138
	movs r0, #192	@ 0000c138 c020
.org 0xc13a
	lsls r0, r0, #19	@ 0000c13a c004
.org 0xc13c
	adds r2, r2, r0	@ 0000c13c 1218
.org 0xc13e
	mov r0, r8	@ 0000c13e 4046
.org 0xc140
	mov r1, sp	@ 0000c140 6946
.org 0xc142
	bl 0x3fe0	@ 0000c142 f7f74dff
.org 0xc146
	b.n 0xc176	@ 0000c146 16e0
.org 0xc148
	.byte 0xb0,0x0a,0x00,0x02	@ 0000c148 data
.org 0xc14c
	.byte 0x2e,0xd0,0x02,0x00	@ 0000c14c data
.org 0xc150
	.byte 0x04,0x0a,0x00,0x02	@ 0000c150 data
.org 0xc154
	ldr r0, [r5, #92]	@ 0000c154 e86d
.org 0xc156
	lsrs r0, r0, #4	@ 0000c156 0009
.org 0xc158
	lsls r0, r0, #1	@ 0000c158 4000
.org 0xc15a
	ldr r1, [pc, #64]	@ 0000c15a 1049
.org 0xc15c
	adds r0, r0, r1	@ 0000c15c 4018
.org 0xc15e
	ldrh r0, [r0, #0]	@ 0000c15e 0088
.org 0xc160
	movs r2, #248	@ 0000c160 f822
.org 0xc162
	lsls r2, r2, #5	@ 0000c162 5201
.org 0xc164
	ands r2, r0	@ 0000c164 0240
.org 0xc166
	lsls r2, r2, #3	@ 0000c166 d200
.org 0xc168
	movs r0, #192	@ 0000c168 c020
.org 0xc16a
	lsls r0, r0, #19	@ 0000c16a c004
.org 0xc16c
	adds r2, r2, r0	@ 0000c16c 1218
.org 0xc16e
	mov r0, r8	@ 0000c16e 4046
.org 0xc170
	mov r1, sp	@ 0000c170 6946
.org 0xc172
	bl 0x3620	@ 0000c172 f7f755fa
