@ FUN_080a112c  entry 0x080a112c  size 210
.thumb
.org 0xa112c
FUN_080a112c:
	push {r4, r5, r6, lr}	@ 000a112c 70b5
.org 0xa112e
	adds r5, r0, #0	@ 000a112e 051c
.org 0xa1130
	movs r6, #0	@ 000a1130 0026
.org 0xa1132
	ldr r0, [pc, #112]	@ 000a1132 1c48
.org 0xa1134
	ldr r0, [r0, #0]	@ 000a1134 0068
.org 0xa1136
	ldr r1, [r5, #84]	@ 000a1136 696d
.org 0xa1138
	ldr r0, [r0, #84]	@ 000a1138 406d
.org 0xa113a
	cmp r1, r0	@ 000a113a 8142
.org 0xa113c
	bge.n 0xa1140	@ 000a113c 00da
.org 0xa113e
	movs r6, #1	@ 000a113e 0126
.org 0xa1140
	ldr r1, [pc, #100]	@ 000a1140 1949
.org 0xa1142
	ldrb r0, [r5, #9]	@ 000a1142 687a
.org 0xa1144
	lsls r0, r0, #2	@ 000a1144 8000
.org 0xa1146
	adds r0, r0, r1	@ 000a1146 4018
.org 0xa1148
	movs r1, #1	@ 000a1148 0121
.org 0xa114a
	str r1, [r5, #12]	@ 000a114a e960
.org 0xa114c
	ldr r0, [r0, #0]	@ 000a114c 0068
.org 0xa114e
	ldr r0, [r0, #4]	@ 000a114e 4068
.org 0xa1150
	str r0, [r5, #20]	@ 000a1150 6861
.org 0xa1152
	movs r1, #0	@ 000a1152 0021
.org 0xa1154
	movs r3, #2	@ 000a1154 0223
.org 0xa1156
	movs r0, #2	@ 000a1156 0220
.org 0xa1158
	strb r0, [r5, #13]	@ 000a1158 6873
.org 0xa115a
	strb r1, [r5, #14]	@ 000a115a a973
.org 0xa115c
	strb r1, [r5, #15]	@ 000a115c e973
.org 0xa115e
	ldrb r0, [r5, #10]	@ 000a115e a87a
.org 0xa1160
	movs r2, #1	@ 000a1160 0122
.org 0xa1162
	movs r4, #0	@ 000a1162 0024
.org 0xa1164
	orrs r0, r2	@ 000a1164 1043
.org 0xa1166
	orrs r0, r3	@ 000a1166 1843
.org 0xa1168
	strb r0, [r5, #10]	@ 000a1168 a872
.org 0xa116a
	adds r2, r5, #0	@ 000a116a 2a1c
.org 0xa116c
	adds r2, #180	@ 000a116c b432
.org 0xa116e
	ldr r0, [r5, #88]	@ 000a116e a86d
.org 0xa1170
	ldr r3, [pc, #56]	@ 000a1170 0e4b
.org 0xa1172
	adds r0, r0, r3	@ 000a1172 c018
.org 0xa1174
	str r0, [r2, #0]	@ 000a1174 1060
.org 0xa1176
	adds r0, r5, #0	@ 000a1176 281c
.org 0xa1178
	adds r0, #184	@ 000a1178 b830
.org 0xa117a
	strb r1, [r0, #0]	@ 000a117a 0170
.org 0xa117c
	adds r0, #1	@ 000a117c 0130
.org 0xa117e
	strb r1, [r0, #0]	@ 000a117e 0170
.org 0xa1180
	adds r0, #1	@ 000a1180 0130
.org 0xa1182
	strb r1, [r0, #0]	@ 000a1182 0170
.org 0xa1184
	str r1, [r5, #44]	@ 000a1184 e962
.org 0xa1186
	adds r0, #1	@ 000a1186 0130
.org 0xa1188
	strb r1, [r0, #0]	@ 000a1188 0170
.org 0xa118a
	adds r0, #1	@ 000a118a 0130
.org 0xa118c
	strb r1, [r0, #0]	@ 000a118c 0170
.org 0xa118e
	adds r0, r5, #0	@ 000a118e 281c
.org 0xa1190
	bl 0x1cc9c	@ 000a1190 7bf784fd
.org 0xa1194
	adds r2, r6, #0	@ 000a1194 321c
.org 0xa1196
	cmp r2, #0	@ 000a1196 002a
.org 0xa1198
	beq.n 0xa11b0	@ 000a1198 0ad0
.org 0xa119a
	ldrb r0, [r5, #10]	@ 000a119a a87a
.org 0xa119c
	movs r1, #16	@ 000a119c 1021
.org 0xa119e
	orrs r0, r1	@ 000a119e 0843
.org 0xa11a0
	b.n 0xa11b6	@ 000a11a0 09e0
.org 0xa11a2
	.byte 0x00	@ 000a11a2 data
.org 0xa11a3
	.byte 0x00	@ 000a11a3 data
.org 0xa11a4
	.byte 0xf0,0xdb,0x02,0x02	@ 000a11a4 data
.org 0xa11a8
	.byte 0x40,0xdb,0x85,0x08	@ 000a11a8 data
.org 0xa11ac
	.byte 0x00,0xe0,0xff,0xff	@ 000a11ac data
.org 0xa11b0
	ldrb r1, [r5, #10]	@ 000a11b0 a97a
.org 0xa11b2
	movs r0, #239	@ 000a11b2 ef20
.org 0xa11b4
	ands r0, r1	@ 000a11b4 0840
.org 0xa11b6
	strb r0, [r5, #10]	@ 000a11b6 a872
.org 0xa11b8
	adds r1, r2, #0	@ 000a11b8 111c
.org 0xa11ba
	adds r0, r5, #0	@ 000a11ba 281c
.org 0xa11bc
	adds r0, #76	@ 000a11bc 4c30
.org 0xa11be
	strb r1, [r0, #0]	@ 000a11be 0170
.org 0xa11c0
	adds r3, r5, #0	@ 000a11c0 2b1c
.org 0xa11c2
	adds r3, #74	@ 000a11c2 4a33
.org 0xa11c4
	lsls r1, r1, #4	@ 000a11c4 0901
.org 0xa11c6
	ldrb r2, [r3, #0]	@ 000a11c6 1a78
.org 0xa11c8
	movs r0, #17	@ 000a11c8 1120
.org 0xa11ca
	negs r0, r0	@ 000a11ca 4042
.org 0xa11cc
	ands r0, r2	@ 000a11cc 1040
.org 0xa11ce
	orrs r0, r1	@ 000a11ce 0843
.org 0xa11d0
	strb r0, [r3, #0]	@ 000a11d0 1870
.org 0xa11d2
	ldr r1, [pc, #56]	@ 000a11d2 0e49
.org 0xa11d4
	adds r0, r5, #0	@ 000a11d4 281c
.org 0xa11d6
	bl 0x1cf00	@ 000a11d6 7bf793fe
.org 0xa11da
	adds r0, r5, #0	@ 000a11da 281c
.org 0xa11dc
	bl 0x1cff0	@ 000a11dc 7bf708ff
.org 0xa11e0
	ldrb r1, [r5, #10]	@ 000a11e0 a97a
.org 0xa11e2
	movs r0, #4	@ 000a11e2 0420
.org 0xa11e4
	orrs r0, r1	@ 000a11e4 0843
.org 0xa11e6
	strb r0, [r5, #10]	@ 000a11e6 a872
.org 0xa11e8
	adds r4, r5, #0	@ 000a11e8 2c1c
.org 0xa11ea
	adds r4, #116	@ 000a11ea 7434
.org 0xa11ec
	ldr r1, [pc, #32]	@ 000a11ec 0849
.org 0xa11ee
	adds r2, r5, #0	@ 000a11ee 2a1c
.org 0xa11f0
	adds r2, #84	@ 000a11f0 5432
.org 0xa11f2
	adds r0, r4, #0	@ 000a11f2 201c
.org 0xa11f4
	movs r3, #6	@ 000a11f4 0623
.org 0xa11f6
	bl 0x5760	@ 000a11f6 64f7b3fa
.org 0xa11fa
	str r5, [r4, #44]	@ 000a11fa e562
.org 0xa11fc
	ldr r0, [pc, #20]	@ 000a11fc 0548
