@ FUN_080c1128  entry 0x080c1128  size 224
.thumb
.org 0xc1128
FUN_080c1128:
	push {r4, r5, r6, r7, lr}	@ 000c1128 f0b5
.org 0xc112a
	mov r7, r8	@ 000c112a 4746
.org 0xc112c
	push {r7}	@ 000c112c 80b4
.org 0xc112e
	adds r5, r0, #0	@ 000c112e 051c
.org 0xc1130
	ldr r6, [r5, #40]	@ 000c1130 ae6a
.org 0xc1132
	ldrb r7, [r5, #17]	@ 000c1132 6f7c
.org 0xc1134
	ldrb r0, [r5, #15]	@ 000c1134 e87b
.org 0xc1136
	cmp r0, #0	@ 000c1136 0028
.org 0xc1138
	bne.n 0xc1198	@ 000c1138 2ed1
.org 0xc113a
	movs r4, #0	@ 000c113a 0024
.org 0xc113c
	movs r0, #116	@ 000c113c 7420
.org 0xc113e
	adds r0, r0, r5	@ 000c113e 4019
.org 0xc1140
	mov r8, r0	@ 000c1140 8046
.org 0xc1142
	lsls r1, r4, #24	@ 000c1142 2106
.org 0xc1144
	lsrs r1, r1, #24	@ 000c1144 090e
.org 0xc1146
	adds r0, r5, #0	@ 000c1146 281c
.org 0xc1148
	bl 0xc0d9c	@ 000c1148 fff728fe
.org 0xc114c
	adds r4, #1	@ 000c114c 0134
.org 0xc114e
	cmp r4, #3	@ 000c114e 032c
.org 0xc1150
	ble.n 0xc1142	@ 000c1150 f7dd
.org 0xc1152
	cmp r7, #0	@ 000c1152 002f
.org 0xc1154
	bne.n 0xc115c	@ 000c1154 02d1
.org 0xc1156
	adds r0, r6, #0	@ 000c1156 301c
.org 0xc1158
	adds r0, #216	@ 000c1158 d830
.org 0xc115a
	b.n 0xc1160	@ 000c115a 01e0
.org 0xc115c
	adds r0, r6, #0	@ 000c115c 301c
.org 0xc115e
	adds r0, #212	@ 000c115e d430
.org 0xc1160
	ldr r4, [r0, #0]	@ 000c1160 0468
.org 0xc1162
	ldr r1, [pc, #164]	@ 000c1162 2949
.org 0xc1164
	mov r0, r8	@ 000c1164 4046
.org 0xc1166
	bl 0x5784	@ 000c1166 44f70dfb
.org 0xc116a
	ldr r1, [r5, #84]	@ 000c116a 696d
.org 0xc116c
	str r1, [r5, #92]	@ 000c116c e965
.org 0xc116e
	ldr r2, [r5, #88]	@ 000c116e aa6d
.org 0xc1170
	ldr r3, [pc, #152]	@ 000c1170 264b
.org 0xc1172
	adds r0, r2, r3	@ 000c1172 d018
.org 0xc1174
	str r0, [r5, #96]	@ 000c1174 2866
.org 0xc1176
	ldr r0, [r4, #84]	@ 000c1176 606d
.org 0xc1178
	subs r0, r0, r1	@ 000c1178 401a
.org 0xc117a
	lsrs r1, r0, #31	@ 000c117a c10f
.org 0xc117c
	adds r0, r0, r1	@ 000c117c 4018
.org 0xc117e
	asrs r0, r0, #1	@ 000c117e 4010
.org 0xc1180
	str r0, [r5, #100]	@ 000c1180 6866
.org 0xc1182
	ldr r0, [r4, #88]	@ 000c1182 a06d
.org 0xc1184
	subs r0, r0, r2	@ 000c1184 801a
.org 0xc1186
	lsrs r1, r0, #31	@ 000c1186 c10f
.org 0xc1188
	adds r0, r0, r1	@ 000c1188 4018
.org 0xc118a
	asrs r0, r0, #1	@ 000c118a 4010
.org 0xc118c
	str r0, [r5, #104]	@ 000c118c a866
.org 0xc118e
	movs r0, #20	@ 000c118e 1420
.org 0xc1190
	strb r0, [r5, #18]	@ 000c1190 a874
.org 0xc1192
	ldrb r0, [r5, #15]	@ 000c1192 e87b
.org 0xc1194
	adds r0, #1	@ 000c1194 0130
.org 0xc1196
	strb r0, [r5, #15]	@ 000c1196 e873
.org 0xc1198
	adds r0, r5, #0	@ 000c1198 281c
.org 0xc119a
	bl 0x1cff0	@ 000c119a 5bf729ff
.org 0xc119e
	ldrb r0, [r5, #18]	@ 000c119e a87c
.org 0xc11a0
	subs r0, #1	@ 000c11a0 0138
.org 0xc11a2
	strb r0, [r5, #18]	@ 000c11a2 a874
.org 0xc11a4
	ldrb r2, [r5, #18]	@ 000c11a4 aa7c
.org 0xc11a6
	lsls r0, r2, #6	@ 000c11a6 9001
.org 0xc11a8
	movs r1, #20	@ 000c11a8 1421
.org 0xc11aa
	bl 0x128fb8	@ 000c11aa 67f005ff
.org 0xc11ae
	adds r2, r0, #0	@ 000c11ae 021c
.org 0xc11b0
	ldr r1, [pc, #92]	@ 000c11b0 1749
.org 0xc11b2
	subs r0, #128	@ 000c11b2 8038
.org 0xc11b4
	lsls r0, r0, #24	@ 000c11b4 0006
.org 0xc11b6
	lsrs r0, r0, #23	@ 000c11b6 c00d
.org 0xc11b8
	adds r0, r0, r1	@ 000c11b8 4018
.org 0xc11ba
	movs r1, #0	@ 000c11ba 0021
.org 0xc11bc
	ldrsh r0, [r0, r1]	@ 000c11bc 405e
.org 0xc11be
	movs r3, #128	@ 000c11be 8023
.org 0xc11c0
	lsls r3, r3, #1	@ 000c11c0 5b00
.org 0xc11c2
	adds r2, r0, r3	@ 000c11c2 c218
.org 0xc11c4
	adds r3, r5, #0	@ 000c11c4 2b1c
.org 0xc11c6
	adds r3, #184	@ 000c11c6 b833
.org 0xc11c8
	ldr r0, [r5, #100]	@ 000c11c8 686e
.org 0xc11ca
	muls r0, r2	@ 000c11ca 5043
.org 0xc11cc
	cmp r0, #0	@ 000c11cc 0028
.org 0xc11ce
	bge.n 0xc11d2	@ 000c11ce 00da
.org 0xc11d0
	adds r0, #255	@ 000c11d0 ff30
.org 0xc11d2
	asrs r0, r0, #8	@ 000c11d2 0012
.org 0xc11d4
	ldr r1, [r5, #92]	@ 000c11d4 e96d
.org 0xc11d6
	adds r1, r1, r0	@ 000c11d6 0918
.org 0xc11d8
	str r1, [r3, #0]	@ 000c11d8 1960
.org 0xc11da
	adds r3, r5, #0	@ 000c11da 2b1c
.org 0xc11dc
	adds r3, #188	@ 000c11dc bc33
.org 0xc11de
	ldr r0, [r5, #104]	@ 000c11de a86e
.org 0xc11e0
	muls r0, r2	@ 000c11e0 5043
.org 0xc11e2
	cmp r0, #0	@ 000c11e2 0028
.org 0xc11e4
	bge.n 0xc11e8	@ 000c11e4 00da
.org 0xc11e6
	adds r0, #255	@ 000c11e6 ff30
.org 0xc11e8
	asrs r1, r0, #8	@ 000c11e8 0112
.org 0xc11ea
	ldr r0, [r5, #96]	@ 000c11ea 286e
.org 0xc11ec
	adds r0, r0, r1	@ 000c11ec 4018
.org 0xc11ee
	str r0, [r3, #0]	@ 000c11ee 1860
.org 0xc11f0
	ldrb r1, [r5, #18]	@ 000c11f0 a97c
.org 0xc11f2
	cmp r1, #0	@ 000c11f2 0029
.org 0xc11f4
	bne.n 0xc11fe	@ 000c11f4 03d1
.org 0xc11f6
	movs r0, #4	@ 000c11f6 0420
.org 0xc11f8
	strb r0, [r5, #13]	@ 000c11f8 6873
.org 0xc11fa
	strb r1, [r5, #14]	@ 000c11fa a973
.org 0xc11fc
	strb r1, [r5, #15]	@ 000c11fc e973
.org 0xc11fe
	pop {r3}	@ 000c11fe 08bc
.org 0xc1200
	mov r8, r3	@ 000c1200 9846
.org 0xc1202
	pop {r4, r5, r6, r7}	@ 000c1202 f0bc
.org 0xc1204
	pop {r0}	@ 000c1204 01bc
.org 0xc1206
	bx r0	@ 000c1206 0047
