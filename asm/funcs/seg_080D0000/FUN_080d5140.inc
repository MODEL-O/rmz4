@ FUN_080d5140  entry 0x080d5140  size 224
.thumb
.org 0xd5140
FUN_080d5140:
	push {lr}	@ 000d5140 00b5
.org 0xd5142
	mov ip, r0	@ 000d5142 8446
.org 0xd5144
	ldrb r0, [r0, #14]	@ 000d5144 807b
.org 0xd5146
	cmp r0, #0	@ 000d5146 0028
.org 0xd5148
	bne.n 0xd5182	@ 000d5148 1bd1
.org 0xd514a
	ldr r1, [pc, #76]	@ 000d514a 1349
.org 0xd514c
	ldrh r2, [r1, #0]	@ 000d514c 0a88
.org 0xd514e
	movs r3, #128	@ 000d514e 8023
.org 0xd5150
	lsls r3, r3, #7	@ 000d5150 db01
.org 0xd5152
	adds r0, r3, #0	@ 000d5152 181c
.org 0xd5154
	movs r3, #0	@ 000d5154 0023
.org 0xd5156
	orrs r0, r2	@ 000d5156 1043
.org 0xd5158
	strh r0, [r1, #0]	@ 000d5158 0880
.org 0xd515a
	movs r0, #49	@ 000d515a 3120
.org 0xd515c
	strb r0, [r1, #13]	@ 000d515c 4873
.org 0xd515e
	ldrb r2, [r1, #14]	@ 000d515e 8a7b
.org 0xd5160
	movs r0, #14	@ 000d5160 0e20
.org 0xd5162
	orrs r0, r2	@ 000d5162 1043
.org 0xd5164
	strb r0, [r1, #14]	@ 000d5164 8873
.org 0xd5166
	movs r0, #128	@ 000d5166 8020
.org 0xd5168
	lsls r0, r0, #6	@ 000d5168 8001
.org 0xd516a
	mov r1, ip	@ 000d516a 6146
.org 0xd516c
	str r0, [r1, #120]	@ 000d516c 8867
.org 0xd516e
	mov r0, ip	@ 000d516e 6046
.org 0xd5170
	adds r0, #116	@ 000d5170 7430
.org 0xd5172
	strb r3, [r0, #0]	@ 000d5172 0370
.org 0xd5174
	adds r0, #1	@ 000d5174 0130
.org 0xd5176
	strb r3, [r0, #0]	@ 000d5176 0370
.org 0xd5178
	adds r0, #1	@ 000d5178 0130
.org 0xd517a
	strb r3, [r0, #0]	@ 000d517a 0370
.org 0xd517c
	ldrb r0, [r1, #14]	@ 000d517c 887b
.org 0xd517e
	adds r0, #1	@ 000d517e 0130
.org 0xd5180
	strb r0, [r1, #14]	@ 000d5180 8873
.org 0xd5182
	ldr r1, [pc, #24]	@ 000d5182 0649
.org 0xd5184
	ldrh r2, [r1, #0]	@ 000d5184 0a88
.org 0xd5186
	movs r0, #1	@ 000d5186 0120
.org 0xd5188
	ands r0, r2	@ 000d5188 1040
.org 0xd518a
	cmp r0, #0	@ 000d518a 0028
.org 0xd518c
	beq.n 0xd51a0	@ 000d518c 08d0
.org 0xd518e
	mov r2, ip	@ 000d518e 6246
.org 0xd5190
	ldr r0, [r2, #120]	@ 000d5190 906f
.org 0xd5192
	movs r3, #128	@ 000d5192 8023
.org 0xd5194
	lsls r3, r3, #1	@ 000d5194 5b00
.org 0xd5196
	b.n 0xd51ae	@ 000d5196 0ae0
.org 0xd5198
	.byte 0x50,0x0a,0x00,0x02	@ 000d5198 data
.org 0xd519c
	.byte 0x60,0x07,0x00,0x02	@ 000d519c data
.org 0xd51a0
	movs r0, #2	@ 000d51a0 0220
.org 0xd51a2
	ands r0, r2	@ 000d51a2 1040
.org 0xd51a4
	cmp r0, #0	@ 000d51a4 0028
.org 0xd51a6
	beq.n 0xd51b2	@ 000d51a6 04d0
.org 0xd51a8
	mov r2, ip	@ 000d51a8 6246
.org 0xd51aa
	ldr r0, [r2, #120]	@ 000d51aa 906f
.org 0xd51ac
	ldr r3, [pc, #24]	@ 000d51ac 064b
.org 0xd51ae
	adds r0, r0, r3	@ 000d51ae c018
.org 0xd51b0
	str r0, [r2, #120]	@ 000d51b0 9067
.org 0xd51b2
	ldrh r2, [r1, #0]	@ 000d51b2 0a88
.org 0xd51b4
	movs r1, #192	@ 000d51b4 c021
.org 0xd51b6
	lsls r1, r1, #2	@ 000d51b6 8900
.org 0xd51b8
	adds r0, r1, #0	@ 000d51b8 081c
.org 0xd51ba
	ands r0, r2	@ 000d51ba 1040
.org 0xd51bc
	cmp r0, r1	@ 000d51bc 8842
.org 0xd51be
	bne.n 0xd51cc	@ 000d51be 05d1
.org 0xd51c0
	movs r0, #0	@ 000d51c0 0020
.org 0xd51c2
	mov r1, ip	@ 000d51c2 6146
.org 0xd51c4
	str r0, [r1, #96]	@ 000d51c4 0866
.org 0xd51c6
	b.n 0xd51f2	@ 000d51c6 14e0
.org 0xd51c8
	.byte 0x00,0xff,0xff,0xff	@ 000d51c8 data
.org 0xd51cc
	movs r0, #128	@ 000d51cc 8020
.org 0xd51ce
	lsls r0, r0, #1	@ 000d51ce 4000
.org 0xd51d0
	ands r0, r2	@ 000d51d0 1040
.org 0xd51d2
	cmp r0, #0	@ 000d51d2 0028
.org 0xd51d4
	beq.n 0xd51e0	@ 000d51d4 04d0
.org 0xd51d6
	mov r2, ip	@ 000d51d6 6246
.org 0xd51d8
	ldr r0, [r2, #96]	@ 000d51d8 106e
.org 0xd51da
	adds r0, #16	@ 000d51da 1030
.org 0xd51dc
	str r0, [r2, #96]	@ 000d51dc 1066
.org 0xd51de
	b.n 0xd51f2	@ 000d51de 08e0
.org 0xd51e0
	movs r0, #128	@ 000d51e0 8020
.org 0xd51e2
	lsls r0, r0, #2	@ 000d51e2 8000
.org 0xd51e4
	ands r0, r2	@ 000d51e4 1040
.org 0xd51e6
	cmp r0, #0	@ 000d51e6 0028
.org 0xd51e8
	beq.n 0xd51f2	@ 000d51e8 03d0
.org 0xd51ea
	mov r3, ip	@ 000d51ea 6346
.org 0xd51ec
	ldr r0, [r3, #96]	@ 000d51ec 186e
.org 0xd51ee
	subs r0, #16	@ 000d51ee 1038
.org 0xd51f0
	str r0, [r3, #96]	@ 000d51f0 1866
.org 0xd51f2
	mov r1, ip	@ 000d51f2 6146
.org 0xd51f4
	ldrb r0, [r1, #19]	@ 000d51f4 c87c
.org 0xd51f6
	adds r0, #1	@ 000d51f6 0130
.org 0xd51f8
	strb r0, [r1, #19]	@ 000d51f8 c874
.org 0xd51fa
	movs r1, #1	@ 000d51fa 0121
.org 0xd51fc
	ands r0, r1	@ 000d51fc 0840
.org 0xd51fe
	cmp r0, #0	@ 000d51fe 0028
.org 0xd5200
	beq.n 0xd5212	@ 000d5200 07d0
.org 0xd5202
	mov r0, ip	@ 000d5202 6046
.org 0xd5204
	adds r0, #116	@ 000d5204 7430
.org 0xd5206
	movs r1, #31	@ 000d5206 1f21
.org 0xd5208
	strb r1, [r0, #0]	@ 000d5208 0170
.org 0xd520a
	adds r0, #1	@ 000d520a 0130
.org 0xd520c
	strb r1, [r0, #0]	@ 000d520c 0170
.org 0xd520e
	adds r0, #1	@ 000d520e 0130
.org 0xd5210
	b.n 0xd5226	@ 000d5210 09e0
.org 0xd5212
	mov r0, ip	@ 000d5212 6046
.org 0xd5214
	adds r0, #116	@ 000d5214 7430
.org 0xd5216
	movs r1, #24	@ 000d5216 1821
.org 0xd5218
	strb r1, [r0, #0]	@ 000d5218 0170
.org 0xd521a
	mov r2, ip	@ 000d521a 6246
.org 0xd521c
	adds r2, #117	@ 000d521c 7532
.org 0xd521e
	movs r0, #31	@ 000d521e 1f20
