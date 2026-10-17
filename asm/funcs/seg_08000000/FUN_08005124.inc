@ FUN_08005124  entry 0x08005124  size 396
.thumb
.org 0x5124
FUN_08005124:
	push {r4, r5, r6, r7, lr}	@ 00005124 f0b5
.org 0x5126
	mov r7, sl	@ 00005126 5746
.org 0x5128
	mov r6, r9	@ 00005128 4e46
.org 0x512a
	mov r5, r8	@ 0000512a 4546
.org 0x512c
	push {r5, r6, r7}	@ 0000512c e0b4
.org 0x512e
	sub sp, #20	@ 0000512e 85b0
.org 0x5130
	mov r8, r0	@ 00005130 8046
.org 0x5132
	str r1, [sp, #0]	@ 00005132 0091
.org 0x5134
	str r2, [sp, #4]	@ 00005134 0192
.org 0x5136
	mov sl, r3	@ 00005136 9a46
.org 0x5138
	movs r0, #0	@ 00005138 0020
.org 0x513a
	mov r9, r0	@ 0000513a 8146
.org 0x513c
	ldr r3, [r1, #0]	@ 0000513c 0b68
.org 0x513e
	movs r2, #16	@ 0000513e 1022
.org 0x5140
	adds r1, r3, #0	@ 00005140 191c
.org 0x5142
	ands r1, r2	@ 00005142 1140
.org 0x5144
	mov r7, r8	@ 00005144 4746
.org 0x5146
	ldr r4, [r7, #0]	@ 00005146 3c68
.org 0x5148
	adds r0, r4, #0	@ 00005148 201c
.org 0x514a
	ands r0, r2	@ 0000514a 1040
.org 0x514c
	cmp r1, r0	@ 0000514c 8142
.org 0x514e
	beq.n 0x5168	@ 0000514e 0bd0
.org 0x5150
	cmp r3, r4	@ 00005150 a342
.org 0x5152
	ble.n 0x515c	@ 00005152 03dd
.org 0x5154
	adds r0, r3, #0	@ 00005154 181c
.org 0x5156
	adds r0, #240	@ 00005156 f030
.org 0x5158
	asrs r5, r0, #4	@ 00005158 0511
.org 0x515a
	b.n 0x515e	@ 0000515a 00e0
.org 0x515c
	asrs r5, r3, #4	@ 0000515c 1d11
.org 0x515e
	ldr r1, [sp, #0]	@ 0000515e 0099
.org 0x5160
	ldr r0, [r1, #4]	@ 00005160 4868
.org 0x5162
	asrs r6, r0, #4	@ 00005162 0611
.org 0x5164
	adds r4, r0, #0	@ 00005164 041c
.org 0x5166
	b.n 0x5170	@ 00005166 03e0
.org 0x5168
	movs r2, #1	@ 00005168 0122
.org 0x516a
	mov r9, r2	@ 0000516a 9146
.org 0x516c
	ldr r7, [sp, #0]	@ 0000516c 009f
.org 0x516e
	ldr r4, [r7, #4]	@ 0000516e 7c68
.org 0x5170
	adds r3, r4, #0	@ 00005170 231c
.org 0x5172
	movs r2, #16	@ 00005172 1022
.org 0x5174
	adds r1, r3, #0	@ 00005174 191c
.org 0x5176
	ands r1, r2	@ 00005176 1140
.org 0x5178
	mov r0, r8	@ 00005178 4046
.org 0x517a
	ldr r7, [r0, #4]	@ 0000517a 4768
.org 0x517c
	adds r0, r7, #0	@ 0000517c 381c
.org 0x517e
	ands r0, r2	@ 0000517e 1040
.org 0x5180
	cmp r1, r0	@ 00005180 8142
.org 0x5182
	beq.n 0x51a0	@ 00005182 0dd0
.org 0x5184
	cmp r3, r7	@ 00005184 bb42
.org 0x5186
	ble.n 0x5192	@ 00005186 04dd
.org 0x5188
	adds r0, r3, #0	@ 00005188 181c
.org 0x518a
	adds r0, #160	@ 0000518a a030
.org 0x518c
	asrs r0, r0, #4	@ 0000518c 0011
.org 0x518e
	str r0, [sp, #12]	@ 0000518e 0390
.org 0x5190
	b.n 0x5196	@ 00005190 01e0
.org 0x5192
	asrs r4, r4, #4	@ 00005192 2411
.org 0x5194
	str r4, [sp, #12]	@ 00005194 0394
.org 0x5196
	ldr r1, [sp, #0]	@ 00005196 0099
.org 0x5198
	ldr r0, [r1, #0]	@ 00005198 0868
.org 0x519a
	asrs r0, r0, #4	@ 0000519a 0011
.org 0x519c
	str r0, [sp, #8]	@ 0000519c 0290
.org 0x519e
	b.n 0x51a8	@ 0000519e 03e0
.org 0x51a0
	movs r0, #2	@ 000051a0 0220
.org 0x51a2
	mov r2, r9	@ 000051a2 4a46
.org 0x51a4
	orrs r2, r0	@ 000051a4 0243
.org 0x51a6
	mov r9, r2	@ 000051a6 9146
.org 0x51a8
	movs r0, #1	@ 000051a8 0120
.org 0x51aa
	mov r7, r9	@ 000051aa 4f46
.org 0x51ac
	ands r0, r7	@ 000051ac 3840
.org 0x51ae
	cmp r0, #0	@ 000051ae 0028
.org 0x51b0
	bne.n 0x5218	@ 000051b0 32d1
.org 0x51b2
	adds r2, r5, #0	@ 000051b2 2a1c
.org 0x51b4
	lsls r1, r2, #1	@ 000051b4 5100
.org 0x51b6
	adds r1, #4	@ 000051b6 0431
.org 0x51b8
	add r1, sl	@ 000051b8 5144
.org 0x51ba
	mov r0, sl	@ 000051ba 5046
.org 0x51bc
	ldrh r3, [r0, #0]	@ 000051bc 0388
.org 0x51be
	adds r0, r3, #0	@ 000051be 181c
.org 0x51c0
	muls r0, r6	@ 000051c0 7043
.org 0x51c2
	lsls r0, r0, #1	@ 000051c2 4000
.org 0x51c4
	adds r4, r1, r0	@ 000051c4 0c18
.org 0x51c6
	movs r0, #15	@ 000051c6 0f20
.org 0x51c8
	ands r0, r2	@ 000051c8 1040
.org 0x51ca
	lsls r0, r0, #2	@ 000051ca 8000
.org 0x51cc
	ldr r1, [sp, #4]	@ 000051cc 0199
.org 0x51ce
	adds r0, r1, r0	@ 000051ce 0818
.org 0x51d0
	movs r1, #16	@ 000051d0 1021
.org 0x51d2
	ands r2, r1	@ 000051d2 0a40
.org 0x51d4
	lsls r2, r2, #7	@ 000051d4 d201
.org 0x51d6
	adds r0, r0, r2	@ 000051d6 8018
.org 0x51d8
	mov ip, r0	@ 000051d8 8446
.org 0x51da
	movs r0, #0	@ 000051da 0020
.org 0x51dc
	mov r2, r8	@ 000051dc 4246
.org 0x51de
	ldr r2, [r2, #12]	@ 000051de d268
.org 0x51e0
	str r2, [sp, #16]	@ 000051e0 0492
.org 0x51e2
	lsls r3, r3, #1	@ 000051e2 5b00
.org 0x51e4
	lsls r2, r0, #16	@ 000051e4 0204
.org 0x51e6
	asrs r2, r2, #16	@ 000051e6 1214
.org 0x51e8
	adds r0, r2, r6	@ 000051e8 9019
.org 0x51ea
	movs r1, #15	@ 000051ea 0f21
.org 0x51ec
	ands r0, r1	@ 000051ec 0840
.org 0x51ee
	lsls r0, r0, #7	@ 000051ee c001
.org 0x51f0
	mov r7, ip	@ 000051f0 6746
.org 0x51f2
	adds r1, r7, r0	@ 000051f2 3918
.org 0x51f4
	ldrh r0, [r4, #0]	@ 000051f4 2088
.org 0x51f6
	lsls r0, r0, #3	@ 000051f6 c000
.org 0x51f8
	ldr r7, [sp, #16]	@ 000051f8 049f
.org 0x51fa
	adds r0, r0, r7	@ 000051fa c019
.org 0x51fc
	ldr r0, [r0, #0]	@ 000051fc 0068
.org 0x51fe
	str r0, [r1, #0]	@ 000051fe 0860
.org 0x5200
	ldrh r0, [r4, #0]	@ 00005200 2088
.org 0x5202
	lsls r0, r0, #3	@ 00005202 c000
.org 0x5204
	adds r0, r0, r7	@ 00005204 c019
.org 0x5206
	ldr r0, [r0, #4]	@ 00005206 4068
.org 0x5208
	str r0, [r1, #64]	@ 00005208 0864
.org 0x520a
	adds r4, r4, r3	@ 0000520a e418
.org 0x520c
	adds r2, #1	@ 0000520c 0132
.org 0x520e
	lsls r2, r2, #16	@ 0000520e 1204
.org 0x5210
	lsrs r0, r2, #16	@ 00005210 100c
.org 0x5212
	asrs r2, r2, #16	@ 00005212 1214
.org 0x5214
	cmp r2, #10	@ 00005214 0a2a
.org 0x5216
	ble.n 0x51e4	@ 00005216 e5dd
.org 0x5218
	movs r0, #2	@ 00005218 0220
.org 0x521a
	mov r1, r9	@ 0000521a 4946
.org 0x521c
	ands r1, r0	@ 0000521c 0140
.org 0x521e
	cmp r1, #0	@ 0000521e 0029
.org 0x5220
	bne.n 0x5282	@ 00005220 2fd1
.org 0x5222
	ldr r2, [sp, #8]	@ 00005222 029a
.org 0x5224
	lsls r1, r2, #1	@ 00005224 5100
.org 0x5226
	adds r1, #4	@ 00005226 0431
.org 0x5228
	add r1, sl	@ 00005228 5144
.org 0x522a
	mov r7, sl	@ 0000522a 5746
.org 0x522c
	ldrh r0, [r7, #0]	@ 0000522c 3888
.org 0x522e
	ldr r2, [sp, #12]	@ 0000522e 039a
.org 0x5230
	muls r0, r2	@ 00005230 5043
.org 0x5232
	lsls r0, r0, #1	@ 00005232 4000
.org 0x5234
	adds r4, r1, r0	@ 00005234 0c18
.org 0x5236
	movs r0, #15	@ 00005236 0f20
.org 0x5238
	ands r0, r2	@ 00005238 1040
.org 0x523a
	lsls r0, r0, #7	@ 0000523a c001
.org 0x523c
	ldr r7, [sp, #4]	@ 0000523c 019f
.org 0x523e
	adds r7, r7, r0	@ 0000523e 3f18
.org 0x5240
	mov ip, r7	@ 00005240 bc46
.org 0x5242
	movs r0, #0	@ 00005242 0020
.org 0x5244
	mov r1, r8	@ 00005244 4146
.org 0x5246
	ldr r5, [r1, #12]	@ 00005246 cd68
.org 0x5248
	lsls r3, r0, #16	@ 00005248 0304
.org 0x524a
	asrs r3, r3, #16	@ 0000524a 1b14
.org 0x524c
	ldr r7, [sp, #8]	@ 0000524c 029f
.org 0x524e
	adds r2, r3, r7	@ 0000524e da19
.org 0x5250
	movs r0, #15	@ 00005250 0f20
.org 0x5252
	ands r0, r2	@ 00005252 1040
.org 0x5254
	lsls r0, r0, #2	@ 00005254 8000
.org 0x5256
	add r0, ip	@ 00005256 6044
.org 0x5258
	movs r1, #16	@ 00005258 1021
.org 0x525a
	ands r2, r1	@ 0000525a 0a40
.org 0x525c
	lsls r2, r2, #7	@ 0000525c d201
.org 0x525e
	adds r1, r0, r2	@ 0000525e 8118
.org 0x5260
	ldrh r0, [r4, #0]	@ 00005260 2088
.org 0x5262
	lsls r0, r0, #3	@ 00005262 c000
.org 0x5264
	adds r0, r0, r5	@ 00005264 4019
.org 0x5266
	ldr r0, [r0, #0]	@ 00005266 0068
.org 0x5268
	str r0, [r1, #0]	@ 00005268 0860
.org 0x526a
	ldrh r0, [r4, #0]	@ 0000526a 2088
.org 0x526c
	lsls r0, r0, #3	@ 0000526c c000
.org 0x526e
	adds r0, r0, r5	@ 0000526e 4019
.org 0x5270
	ldr r0, [r0, #4]	@ 00005270 4068
.org 0x5272
	str r0, [r1, #64]	@ 00005272 0864
.org 0x5274
	adds r4, #2	@ 00005274 0234
.org 0x5276
	adds r3, #1	@ 00005276 0133
.org 0x5278
	lsls r3, r3, #16	@ 00005278 1b04
.org 0x527a
	lsrs r0, r3, #16	@ 0000527a 180c
.org 0x527c
	asrs r3, r3, #16	@ 0000527c 1b14
.org 0x527e
	cmp r3, #15	@ 0000527e 0f2b
.org 0x5280
	ble.n 0x5248	@ 00005280 e2dd
.org 0x5282
	ldr r0, [sp, #0]	@ 00005282 0098
.org 0x5284
	ldr r3, [r0, #0]	@ 00005284 0368
.org 0x5286
	ldr r2, [pc, #40]	@ 00005286 0a4a
.org 0x5288
	adds r0, r3, #0	@ 00005288 181c
.org 0x528a
	ands r0, r2	@ 0000528a 1040
.org 0x528c
	mov r1, r8	@ 0000528c 4146
.org 0x528e
	strh r0, [r1, #8]	@ 0000528e 0881
.org 0x5290
	ldr r7, [sp, #0]	@ 00005290 009f
.org 0x5292
	ldr r1, [r7, #4]	@ 00005292 7968
.org 0x5294
	adds r0, r1, #0	@ 00005294 081c
.org 0x5296
	ands r0, r2	@ 00005296 1040
.org 0x5298
	mov r2, r8	@ 00005298 4246
.org 0x529a
	strh r0, [r2, #10]	@ 0000529a 5081
.org 0x529c
	str r3, [r2, #0]	@ 0000529c 1360
.org 0x529e
	str r1, [r2, #4]	@ 0000529e 5160
.org 0x52a0
	add sp, #20	@ 000052a0 05b0
.org 0x52a2
	pop {r3, r4, r5}	@ 000052a2 38bc
.org 0x52a4
	mov r8, r3	@ 000052a4 9846
.org 0x52a6
	mov r9, r4	@ 000052a6 a146
.org 0x52a8
	mov sl, r5	@ 000052a8 aa46
.org 0x52aa
	pop {r4, r5, r6, r7}	@ 000052aa f0bc
.org 0x52ac
	pop {r0}	@ 000052ac 01bc
.org 0x52ae
	bx r0	@ 000052ae 0047
