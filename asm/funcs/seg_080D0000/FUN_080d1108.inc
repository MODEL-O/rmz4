@ FUN_080d1108  entry 0x080d1108  size 142
.thumb
.org 0xd1108
FUN_080d1108:
	push {r4, r5, r6, lr}	@ 000d1108 70b5
.org 0xd110a
	adds r4, r0, #0	@ 000d110a 041c
.org 0xd110c
	bl 0x1cc9c	@ 000d110c 4bf7c6fd
.org 0xd1110
	ldrb r1, [r4, #10]	@ 000d1110 a17a
.org 0xd1112
	movs r0, #1	@ 000d1112 0120
.org 0xd1114
	orrs r0, r1	@ 000d1114 0843
.org 0xd1116
	strb r0, [r4, #10]	@ 000d1116 a072
.org 0xd1118
	adds r0, r4, #0	@ 000d1118 201c
.org 0xd111a
	movs r1, #13	@ 000d111a 0d21
.org 0xd111c
	bl 0x1cf00	@ 000d111c 4bf7f0fe
.org 0xd1120
	ldr r6, [pc, #116]	@ 000d1120 1d4e
.org 0xd1122
	ldr r0, [r6, #0]	@ 000d1122 3068
.org 0xd1124
	ldr r3, [pc, #116]	@ 000d1124 1d4b
.org 0xd1126
	adds r1, r0, #0	@ 000d1126 011c
.org 0xd1128
	muls r1, r3	@ 000d1128 5943
.org 0xd112a
	ldr r2, [pc, #116]	@ 000d112a 1d4a
.org 0xd112c
	adds r1, r1, r2	@ 000d112c 8918
.org 0xd112e
	lsls r1, r1, #1	@ 000d112e 4900
.org 0xd1130
	lsrs r5, r1, #1	@ 000d1130 4d08
.org 0xd1132
	lsrs r1, r1, #17	@ 000d1132 490c
.org 0xd1134
	movs r0, #127	@ 000d1134 7f20
.org 0xd1136
	ands r1, r0	@ 000d1136 0140
.org 0xd1138
	movs r0, #64	@ 000d1138 4020
.org 0xd113a
	subs r0, r0, r1	@ 000d113a 401a
.org 0xd113c
	str r0, [r4, #92]	@ 000d113c e065
.org 0xd113e
	adds r0, r5, #0	@ 000d113e 281c
.org 0xd1140
	muls r0, r3	@ 000d1140 5843
.org 0xd1142
	adds r0, r0, r2	@ 000d1142 8018
.org 0xd1144
	lsls r0, r0, #1	@ 000d1144 4000
.org 0xd1146
	lsrs r5, r0, #1	@ 000d1146 4508
.org 0xd1148
	lsrs r0, r0, #17	@ 000d1148 400c
.org 0xd114a
	movs r1, #31	@ 000d114a 1f21
.org 0xd114c
	ands r0, r1	@ 000d114c 0840
.org 0xd114e
	adds r0, #192	@ 000d114e c030
.org 0xd1150
	str r0, [r4, #96]	@ 000d1150 2066
.org 0xd1152
	ldr r0, [r4, #84]	@ 000d1152 606d
.org 0xd1154
	str r0, [r4, #116]	@ 000d1154 6067
.org 0xd1156
	adds r0, r5, #0	@ 000d1156 281c
.org 0xd1158
	muls r0, r3	@ 000d1158 5843
.org 0xd115a
	adds r0, r0, r2	@ 000d115a 8018
.org 0xd115c
	lsls r0, r0, #1	@ 000d115c 4000
.org 0xd115e
	lsrs r1, r0, #1	@ 000d115e 4108
.org 0xd1160
	lsrs r0, r0, #17	@ 000d1160 400c
.org 0xd1162
	strb r0, [r4, #18]	@ 000d1162 a074
.org 0xd1164
	adds r0, r1, #0	@ 000d1164 081c
.org 0xd1166
	muls r0, r3	@ 000d1166 5843
.org 0xd1168
	adds r0, r0, r2	@ 000d1168 8018
.org 0xd116a
	lsls r0, r0, #1	@ 000d116a 4000
.org 0xd116c
	lsrs r1, r0, #1	@ 000d116c 4108
.org 0xd116e
	str r1, [r6, #0]	@ 000d116e 3160
.org 0xd1170
	lsrs r0, r0, #17	@ 000d1170 400c
.org 0xd1172
	strb r0, [r4, #19]	@ 000d1172 e074
.org 0xd1174
	movs r0, #128	@ 000d1174 8020
.org 0xd1176
	str r0, [r4, #120]	@ 000d1176 a067
.org 0xd1178
	ldr r1, [pc, #40]	@ 000d1178 0a49
.org 0xd117a
	ldrb r0, [r4, #9]	@ 000d117a 607a
.org 0xd117c
	lsls r0, r0, #2	@ 000d117c 8000
.org 0xd117e
	adds r0, r0, r1	@ 000d117e 4018
.org 0xd1180
	movs r1, #1	@ 000d1180 0121
.org 0xd1182
	str r1, [r4, #12]	@ 000d1182 e160
.org 0xd1184
	ldr r0, [r0, #0]	@ 000d1184 0068
.org 0xd1186
	ldr r0, [r0, #4]	@ 000d1186 4068
.org 0xd1188
	str r0, [r4, #20]	@ 000d1188 6061
.org 0xd118a
	adds r0, r4, #0	@ 000d118a 201c
.org 0xd118c
	bl 0xd108c	@ 000d118c fff77eff
.org 0xd1190
	pop {r4, r5, r6}	@ 000d1190 70bc
.org 0xd1192
	pop {r0}	@ 000d1192 01bc
.org 0xd1194
	bx r0	@ 000d1194 0047
