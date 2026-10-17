@ FUN_08096150  entry 0x08096150  size 208
.thumb
.org 0x96150
FUN_08096150:
	push {r4, r5, r6, r7, lr}	@ 00096150 f0b5
.org 0x96152
	mov r7, sl	@ 00096152 5746
.org 0x96154
	mov r6, r9	@ 00096154 4e46
.org 0x96156
	mov r5, r8	@ 00096156 4546
.org 0x96158
	push {r5, r6, r7}	@ 00096158 e0b4
.org 0x9615a
	sub sp, #4	@ 0009615a 81b0
.org 0x9615c
	adds r4, r0, #0	@ 0009615c 041c
.org 0x9615e
	ldrb r0, [r4, #15]	@ 0009615e e07b
.org 0x96160
	cmp r0, #0	@ 00096160 0028
.org 0x96162
	bne.n 0x961d2	@ 00096162 36d1
.org 0x96164
	movs r0, #53	@ 00096164 3520
.org 0x96166
	bl 0x2b10	@ 00096166 6cf7d3fc
.org 0x9616a
	movs r7, #0	@ 0009616a 0027
.org 0x9616c
	movs r0, #140	@ 0009616c 8c20
.org 0x9616e
	adds r0, r0, r4	@ 0009616e 0019
.org 0x96170
	mov sl, r0	@ 00096170 8246
.org 0x96172
	adds r1, r4, #0	@ 00096172 211c
.org 0x96174
	adds r1, #144	@ 00096174 9031
.org 0x96176
	str r1, [sp, #0]	@ 00096176 0091
.org 0x96178
	movs r0, #148	@ 00096178 9420
.org 0x9617a
	adds r0, r0, r4	@ 0009617a 0019
.org 0x9617c
	mov r9, r0	@ 0009617c 8146
.org 0x9617e
	adds r6, r4, #0	@ 0009617e 261c
.org 0x96180
	adds r6, #180	@ 00096180 b436
.org 0x96182
	movs r5, #0	@ 00096182 0025
.org 0x96184
	adds r1, r7, #1	@ 00096184 791c
.org 0x96186
	mov r8, r1	@ 00096186 8846
.org 0x96188
	b.n 0x96192	@ 00096188 03e0
.org 0x9618a
	ldrb r0, [r6, #0]	@ 0009618a 3078
.org 0x9618c
	adds r0, #1	@ 0009618c 0130
.org 0x9618e
	strb r0, [r6, #0]	@ 0009618e 3070
.org 0x96190
	adds r5, #1	@ 00096190 0135
.org 0x96192
	cmp r5, #1	@ 00096192 012d
.org 0x96194
	bgt.n 0x961ac	@ 00096194 0adc
.org 0x96196
	lsls r2, r7, #24	@ 00096196 3a06
.org 0x96198
	lsrs r2, r2, #24	@ 00096198 120e
.org 0x9619a
	lsls r3, r5, #24	@ 0009619a 2b06
.org 0x9619c
	lsrs r3, r3, #24	@ 0009619c 1b0e
.org 0x9619e
	adds r0, r4, #0	@ 0009619e 201c
.org 0x961a0
	adds r1, r4, #0	@ 000961a0 211c
.org 0x961a2
	adds r1, #84	@ 000961a2 5431
.org 0x961a4
	bl 0xc3024	@ 000961a4 2cf03eff
.org 0x961a8
	cmp r0, #0	@ 000961a8 0028
.org 0x961aa
	bne.n 0x9618a	@ 000961aa eed1
.org 0x961ac
	mov r7, r8	@ 000961ac 4746
.org 0x961ae
	cmp r7, #1	@ 000961ae 012f
.org 0x961b0
	ble.n 0x96182	@ 000961b0 e7dd
.org 0x961b2
	movs r0, #0	@ 000961b2 0020
.org 0x961b4
	mov r1, sl	@ 000961b4 5146
.org 0x961b6
	str r0, [r1, #0]	@ 000961b6 0860
.org 0x961b8
	ldr r1, [sp, #0]	@ 000961b8 0099
.org 0x961ba
	str r0, [r1, #0]	@ 000961ba 0860
.org 0x961bc
	mov r1, r9	@ 000961bc 4946
.org 0x961be
	strb r0, [r1, #0]	@ 000961be 0870
.org 0x961c0
	ldrb r1, [r4, #10]	@ 000961c0 a17a
.org 0x961c2
	movs r0, #251	@ 000961c2 fb20
.org 0x961c4
	ands r0, r1	@ 000961c4 0840
.org 0x961c6
	movs r1, #254	@ 000961c6 fe21
.org 0x961c8
	ands r0, r1	@ 000961c8 0840
.org 0x961ca
	strb r0, [r4, #10]	@ 000961ca a072
.org 0x961cc
	ldrb r0, [r4, #15]	@ 000961cc e07b
.org 0x961ce
	adds r0, #1	@ 000961ce 0130
.org 0x961d0
	strb r0, [r4, #15]	@ 000961d0 e073
.org 0x961d2
	adds r0, r4, #0	@ 000961d2 201c
.org 0x961d4
	adds r0, #180	@ 000961d4 b430
.org 0x961d6
	ldrb r2, [r0, #0]	@ 000961d6 0278
.org 0x961d8
	cmp r2, #0	@ 000961d8 002a
.org 0x961da
	bne.n 0x96210	@ 000961da 19d1
.org 0x961dc
	ldrb r1, [r4, #10]	@ 000961dc a17a
.org 0x961de
	movs r0, #254	@ 000961de fe20
.org 0x961e0
	ands r0, r1	@ 000961e0 0840
.org 0x961e2
	movs r1, #253	@ 000961e2 fd21
.org 0x961e4
	ands r0, r1	@ 000961e4 0840
.org 0x961e6
	strb r0, [r4, #10]	@ 000961e6 a072
.org 0x961e8
	adds r0, r4, #0	@ 000961e8 201c
.org 0x961ea
	adds r0, #140	@ 000961ea 8c30
.org 0x961ec
	str r2, [r0, #0]	@ 000961ec 0260
.org 0x961ee
	adds r0, #4	@ 000961ee 0430
.org 0x961f0
	str r2, [r0, #0]	@ 000961f0 0260
.org 0x961f2
	adds r0, #4	@ 000961f2 0430
.org 0x961f4
	strb r2, [r0, #0]	@ 000961f4 0270
.org 0x961f6
	ldrb r1, [r4, #10]	@ 000961f6 a17a
.org 0x961f8
	movs r0, #251	@ 000961f8 fb20
.org 0x961fa
	ands r0, r1	@ 000961fa 0840
.org 0x961fc
	strb r0, [r4, #10]	@ 000961fc a072
.org 0x961fe
	ldr r1, [pc, #32]	@ 000961fe 0849
.org 0x96200
	ldrb r0, [r4, #9]	@ 00096200 607a
.org 0x96202
	lsls r0, r0, #2	@ 00096202 8000
.org 0x96204
	adds r0, r0, r1	@ 00096204 4018
.org 0x96206
	movs r1, #3	@ 00096206 0321
.org 0x96208
	str r1, [r4, #12]	@ 00096208 e160
.org 0x9620a
	ldr r0, [r0, #0]	@ 0009620a 0068
.org 0x9620c
	ldr r0, [r0, #12]	@ 0009620c c068
.org 0x9620e
	str r0, [r4, #20]	@ 0009620e 6061
.org 0x96210
	add sp, #4	@ 00096210 01b0
.org 0x96212
	pop {r3, r4, r5}	@ 00096212 38bc
.org 0x96214
	mov r8, r3	@ 00096214 9846
.org 0x96216
	mov r9, r4	@ 00096216 a146
.org 0x96218
	mov sl, r5	@ 00096218 aa46
.org 0x9621a
	pop {r4, r5, r6, r7}	@ 0009621a f0bc
.org 0x9621c
	pop {r0}	@ 0009621c 01bc
.org 0x9621e
	bx r0	@ 0009621e 0047
