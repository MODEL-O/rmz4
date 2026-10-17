@ FUN_08064124  entry 0x08064124  size 204
.thumb
.org 0x64124
FUN_08064124:
	push {r4, r5, r6, lr}	@ 00064124 70b5
.org 0x64126
	adds r6, r0, #0	@ 00064126 061c
.org 0x64128
	ldrb r0, [r6, #15]	@ 00064128 f07b
.org 0x6412a
	cmp r0, #0	@ 0006412a 0028
.org 0x6412c
	bne.n 0x64144	@ 0006412c 0ad1
.org 0x6412e
	adds r0, r6, #0	@ 0006412e 301c
.org 0x64130
	movs r1, #21	@ 00064130 1521
.org 0x64132
	bl 0x65a94	@ 00064132 01f0affc
.org 0x64136
	movs r0, #48	@ 00064136 3020
.org 0x64138
	strb r0, [r6, #18]	@ 00064138 b074
.org 0x6413a
	movs r0, #1	@ 0006413a 0120
.org 0x6413c
	strb r0, [r6, #19]	@ 0006413c f074
.org 0x6413e
	ldrb r0, [r6, #15]	@ 0006413e f07b
.org 0x64140
	adds r0, #1	@ 00064140 0130
.org 0x64142
	strb r0, [r6, #15]	@ 00064142 f073
.org 0x64144
	adds r0, r6, #0	@ 00064144 301c
.org 0x64146
	bl 0x1cff0	@ 00064146 b8f753ff
.org 0x6414a
	adds r0, r6, #0	@ 0006414a 301c
.org 0x6414c
	adds r0, #116	@ 0006414c 7430
.org 0x6414e
	ldr r4, [pc, #160]	@ 0006414e 284c
.org 0x64150
	ldr r3, [pc, #160]	@ 00064150 284b
.org 0x64152
	adds r1, r6, #0	@ 00064152 311c
.org 0x64154
	adds r1, #180	@ 00064154 b431
.org 0x64156
	ldrb r2, [r1, #0]	@ 00064156 0a78
.org 0x64158
	lsls r1, r2, #1	@ 00064158 5100
.org 0x6415a
	adds r1, r1, r3	@ 0006415a c918
.org 0x6415c
	ldrh r1, [r1, #0]	@ 0006415c 0988
.org 0x6415e
	lsls r1, r1, #2	@ 0006415e 8900
.org 0x64160
	adds r1, r1, r4	@ 00064160 0919
.org 0x64162
	adds r3, r6, #0	@ 00064162 331c
.org 0x64164
	adds r3, #113	@ 00064164 7133
.org 0x64166
	movs r5, #0	@ 00064166 0025
.org 0x64168
	ldrsb r5, [r3, r5]	@ 00064168 5d57
.org 0x6416a
	ldr r1, [r1, #0]	@ 0006416a 0968
.org 0x6416c
	lsls r3, r5, #2	@ 0006416c ab00
.org 0x6416e
	adds r3, r3, r1	@ 0006416e 5b18
.org 0x64170
	ldr r4, [pc, #132]	@ 00064170 214c
.org 0x64172
	adds r1, r6, #0	@ 00064172 311c
.org 0x64174
	adds r1, #181	@ 00064174 b531
.org 0x64176
	ldrb r1, [r1, #0]	@ 00064176 0978
.org 0x64178
	lsls r1, r1, #2	@ 00064178 8900
.org 0x6417a
	adds r1, r1, r4	@ 0006417a 0919
.org 0x6417c
	ldr r1, [r1, #0]	@ 0006417c 0968
.org 0x6417e
	lsls r2, r2, #2	@ 0006417e 9200
.org 0x64180
	adds r2, r2, r1	@ 00064180 5218
.org 0x64182
	ldr r1, [r2, #0]	@ 00064182 1168
.org 0x64184
	adds r1, r1, r5	@ 00064184 4919
.org 0x64186
	ldrb r1, [r1, #0]	@ 00064186 0978
.org 0x64188
	lsls r2, r1, #1	@ 00064188 4a00
.org 0x6418a
	adds r2, r2, r1	@ 0006418a 5218
.org 0x6418c
	lsls r2, r2, #3	@ 0006418c d200
.org 0x6418e
	ldr r1, [r3, #0]	@ 0006418e 1968
.org 0x64190
	adds r1, r1, r2	@ 00064190 8918
.org 0x64192
	bl 0x5784	@ 00064192 a1f7f7fa
.org 0x64196
	ldrb r0, [r6, #19]	@ 00064196 f07c
.org 0x64198
	cmp r0, #0	@ 00064198 0028
.org 0x6419a
	beq.n 0x641d6	@ 0006419a 1cd0
.org 0x6419c
	adds r0, r6, #0	@ 0006419c 301c
.org 0x6419e
	adds r0, #115	@ 0006419e 7330
.org 0x641a0
	ldrb r0, [r0, #0]	@ 000641a0 0078
.org 0x641a2
	cmp r0, #4	@ 000641a2 0428
.org 0x641a4
	bne.n 0x641ea	@ 000641a4 21d1
.org 0x641a6
	ldr r0, [pc, #84]	@ 000641a6 1548
.org 0x641a8
	bl 0x2b10	@ 000641a8 9ef7b2fc
.org 0x641ac
	ldr r2, [pc, #80]	@ 000641ac 144a
.org 0x641ae
	ldr r1, [r2, #0]	@ 000641ae 1168
.org 0x641b0
	ldr r0, [pc, #80]	@ 000641b0 1448
.org 0x641b2
	muls r1, r0	@ 000641b2 4143
.org 0x641b4
	ldr r0, [pc, #80]	@ 000641b4 1448
.org 0x641b6
	adds r1, r1, r0	@ 000641b6 0918
.org 0x641b8
	lsls r1, r1, #1	@ 000641b8 4900
.org 0x641ba
	lsrs r0, r1, #1	@ 000641ba 4808
.org 0x641bc
	str r0, [r2, #0]	@ 000641bc 1060
.org 0x641be
	lsrs r1, r1, #17	@ 000641be 490c
.org 0x641c0
	movs r0, #1	@ 000641c0 0120
.org 0x641c2
	ands r1, r0	@ 000641c2 0140
.org 0x641c4
	adds r1, #2	@ 000641c4 0231
.org 0x641c6
	adds r0, r6, #0	@ 000641c6 301c
.org 0x641c8
	bl 0xf6d58	@ 000641c8 92f0c6fd
.org 0x641cc
	adds r1, r6, #0	@ 000641cc 311c
.org 0x641ce
	adds r1, #216	@ 000641ce d831
.org 0x641d0
	str r0, [r1, #0]	@ 000641d0 0860
.org 0x641d2
	movs r0, #0	@ 000641d2 0020
.org 0x641d4
	strb r0, [r6, #19]	@ 000641d4 f074
.org 0x641d6
	ldrb r0, [r6, #18]	@ 000641d6 b07c
.org 0x641d8
	subs r0, #1	@ 000641d8 0138
.org 0x641da
	strb r0, [r6, #18]	@ 000641da b074
.org 0x641dc
	lsls r0, r0, #24	@ 000641dc 0006
.org 0x641de
	lsrs r1, r0, #24	@ 000641de 010e
.org 0x641e0
	cmp r1, #0	@ 000641e0 0029
.org 0x641e2
	bne.n 0x641ea	@ 000641e2 02d1
.org 0x641e4
	movs r0, #3	@ 000641e4 0320
.org 0x641e6
	strb r0, [r6, #14]	@ 000641e6 b073
.org 0x641e8
	strb r1, [r6, #15]	@ 000641e8 f173
.org 0x641ea
	pop {r4, r5, r6}	@ 000641ea 70bc
.org 0x641ec
	pop {r0}	@ 000641ec 01bc
.org 0x641ee
	bx r0	@ 000641ee 0047
