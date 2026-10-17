@ FUN_080cd15c  entry 0x080cd15c  size 186
.thumb
.org 0xcd15c
FUN_080cd15c:
	push {r4, r5, r6, lr}	@ 000cd15c 70b5
.org 0xcd15e
	mov r6, r8	@ 000cd15e 4646
.org 0xcd160
	push {r6}	@ 000cd160 40b4
.org 0xcd162
	sub sp, #12	@ 000cd162 83b0
.org 0xcd164
	adds r4, r0, #0	@ 000cd164 041c
.org 0xcd166
	ldr r0, [pc, #176]	@ 000cd166 2c48
.org 0xcd168
	ldr r1, [r0, #4]	@ 000cd168 4168
.org 0xcd16a
	ldr r0, [r0, #0]	@ 000cd16a 0068
.org 0xcd16c
	str r0, [sp, #4]	@ 000cd16c 0190
.org 0xcd16e
	str r1, [sp, #8]	@ 000cd16e 0291
.org 0xcd170
	ldr r1, [pc, #168]	@ 000cd170 2a49
.org 0xcd172
	mov r0, sp	@ 000cd172 6846
.org 0xcd174
	movs r2, #2	@ 000cd174 0222
.org 0xcd176
	bl 0x129258	@ 000cd176 5cf06ff8
.org 0xcd17a
	ldrb r0, [r4, #17]	@ 000cd17a 607c
.org 0xcd17c
	mov r8, r0	@ 000cd17c 8046
.org 0xcd17e
	ldr r1, [pc, #160]	@ 000cd17e 2849
.org 0xcd180
	ldrb r0, [r4, #9]	@ 000cd180 607a
.org 0xcd182
	lsls r0, r0, #2	@ 000cd182 8000
.org 0xcd184
	adds r0, r0, r1	@ 000cd184 4018
.org 0xcd186
	movs r1, #1	@ 000cd186 0121
.org 0xcd188
	str r1, [r4, #12]	@ 000cd188 e160
.org 0xcd18a
	ldr r0, [r0, #0]	@ 000cd18a 0068
.org 0xcd18c
	ldr r0, [r0, #4]	@ 000cd18c 4068
.org 0xcd18e
	str r0, [r4, #20]	@ 000cd18e 6061
.org 0xcd190
	ldrb r1, [r4, #10]	@ 000cd190 a17a
.org 0xcd192
	movs r0, #1	@ 000cd192 0120
.org 0xcd194
	orrs r0, r1	@ 000cd194 0843
.org 0xcd196
	movs r1, #2	@ 000cd196 0221
.org 0xcd198
	orrs r0, r1	@ 000cd198 0843
.org 0xcd19a
	strb r0, [r4, #10]	@ 000cd19a a072
.org 0xcd19c
	adds r0, r4, #0	@ 000cd19c 201c
.org 0xcd19e
	bl 0x1cc9c	@ 000cd19e 4ff77dfd
.org 0xcd1a2
	adds r1, r4, #0	@ 000cd1a2 211c
.org 0xcd1a4
	adds r1, #37	@ 000cd1a4 2531
.org 0xcd1a6
	movs r0, #25	@ 000cd1a6 1920
.org 0xcd1a8
	strb r0, [r1, #0]	@ 000cd1a8 0870
.org 0xcd1aa
	movs r6, #0	@ 000cd1aa 0026
.org 0xcd1ac
	ldrb r1, [r4, #10]	@ 000cd1ac a17a
.org 0xcd1ae
	movs r0, #239	@ 000cd1ae ef20
.org 0xcd1b0
	ands r0, r1	@ 000cd1b0 0840
.org 0xcd1b2
	strb r0, [r4, #10]	@ 000cd1b2 a072
.org 0xcd1b4
	adds r0, r4, #0	@ 000cd1b4 201c
.org 0xcd1b6
	adds r0, #76	@ 000cd1b6 4c30
.org 0xcd1b8
	strb r6, [r0, #0]	@ 000cd1b8 0670
.org 0xcd1ba
	adds r2, r4, #0	@ 000cd1ba 221c
.org 0xcd1bc
	adds r2, #74	@ 000cd1bc 4a32
.org 0xcd1be
	ldrb r1, [r2, #0]	@ 000cd1be 1178
.org 0xcd1c0
	movs r0, #17	@ 000cd1c0 1120
.org 0xcd1c2
	negs r0, r0	@ 000cd1c2 4042
.org 0xcd1c4
	ands r0, r1	@ 000cd1c4 0840
.org 0xcd1c6
	strb r0, [r2, #0]	@ 000cd1c6 1070
.org 0xcd1c8
	mov r1, r8	@ 000cd1c8 4146
.org 0xcd1ca
	lsls r0, r1, #2	@ 000cd1ca 8800
.org 0xcd1cc
	add r1, sp, #4	@ 000cd1cc 01a9
.org 0xcd1ce
	adds r0, r0, r1	@ 000cd1ce 4018
.org 0xcd1d0
	ldrh r1, [r0, #0]	@ 000cd1d0 0188
.org 0xcd1d2
	adds r0, r4, #0	@ 000cd1d2 201c
.org 0xcd1d4
	bl 0x1cf00	@ 000cd1d4 4ff794fe
.org 0xcd1d8
	ldrb r1, [r4, #10]	@ 000cd1d8 a17a
.org 0xcd1da
	movs r0, #4	@ 000cd1da 0420
.org 0xcd1dc
	orrs r0, r1	@ 000cd1dc 0843
.org 0xcd1de
	strb r0, [r4, #10]	@ 000cd1de a072
.org 0xcd1e0
	adds r5, r4, #0	@ 000cd1e0 251c
.org 0xcd1e2
	adds r5, #116	@ 000cd1e2 7435
.org 0xcd1e4
	mov r0, sp	@ 000cd1e4 6846
.org 0xcd1e6
	add r0, r8	@ 000cd1e6 4044
.org 0xcd1e8
	ldrb r0, [r0, #0]	@ 000cd1e8 0078
.org 0xcd1ea
	lsls r1, r0, #1	@ 000cd1ea 4100
.org 0xcd1ec
	adds r1, r1, r0	@ 000cd1ec 0918
.org 0xcd1ee
	lsls r1, r1, #3	@ 000cd1ee c900
.org 0xcd1f0
	ldr r0, [pc, #48]	@ 000cd1f0 0c48
.org 0xcd1f2
	adds r1, r1, r0	@ 000cd1f2 0918
.org 0xcd1f4
	adds r2, r4, #0	@ 000cd1f4 221c
.org 0xcd1f6
	adds r2, #84	@ 000cd1f6 5432
.org 0xcd1f8
	adds r0, r5, #0	@ 000cd1f8 281c
.org 0xcd1fa
	movs r3, #64	@ 000cd1fa 4023
.org 0xcd1fc
	bl 0x5760	@ 000cd1fc 38f7b0fa
.org 0xcd200
	str r4, [r5, #44]	@ 000cd200 ec62
.org 0xcd202
	str r6, [r5, #36]	@ 000cd202 6e62
.org 0xcd204
	adds r0, r4, #0	@ 000cd204 201c
.org 0xcd206
	bl 0xcd228	@ 000cd206 00f00ff8
.org 0xcd20a
	add sp, #12	@ 000cd20a 03b0
.org 0xcd20c
	pop {r3}	@ 000cd20c 08bc
.org 0xcd20e
	mov r8, r3	@ 000cd20e 9846
.org 0xcd210
	pop {r4, r5, r6}	@ 000cd210 70bc
.org 0xcd212
	pop {r0}	@ 000cd212 01bc
.org 0xcd214
	bx r0	@ 000cd214 0047
