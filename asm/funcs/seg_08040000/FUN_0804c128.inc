@ FUN_0804c128  entry 0x0804c128  size 216
.thumb
.org 0x4c128
FUN_0804c128:
	push {r4, r5, r6, r7, lr}	@ 0004c128 f0b5
.org 0x4c12a
	mov r7, r8	@ 0004c12a 4746
.org 0x4c12c
	push {r7}	@ 0004c12c 80b4
.org 0x4c12e
	sub sp, #8	@ 0004c12e 82b0
.org 0x4c130
	adds r5, r0, #0	@ 0004c130 051c
.org 0x4c132
	ldr r1, [pc, #204]	@ 0004c132 3349
.org 0x4c134
	ldrb r0, [r5, #9]	@ 0004c134 687a
.org 0x4c136
	lsls r0, r0, #2	@ 0004c136 8000
.org 0x4c138
	adds r0, r0, r1	@ 0004c138 4018
.org 0x4c13a
	movs r1, #1	@ 0004c13a 0121
.org 0x4c13c
	str r1, [r5, #12]	@ 0004c13c e960
.org 0x4c13e
	ldr r0, [r0, #0]	@ 0004c13e 0068
.org 0x4c140
	ldr r0, [r0, #4]	@ 0004c140 4068
.org 0x4c142
	str r0, [r5, #20]	@ 0004c142 6861
.org 0x4c144
	adds r0, r5, #0	@ 0004c144 281c
.org 0x4c146
	bl 0x1cc9c	@ 0004c146 d0f7a9fd
.org 0x4c14a
	adds r0, r5, #0	@ 0004c14a 281c
.org 0x4c14c
	bl 0x1ceec	@ 0004c14c d0f7cefe
.org 0x4c150
	ldrb r1, [r5, #10]	@ 0004c150 a97a
.org 0x4c152
	movs r0, #1	@ 0004c152 0120
.org 0x4c154
	movs r4, #0	@ 0004c154 0024
.org 0x4c156
	orrs r0, r1	@ 0004c156 0843
.org 0x4c158
	movs r1, #2	@ 0004c158 0221
.org 0x4c15a
	orrs r0, r1	@ 0004c15a 0843
.org 0x4c15c
	strb r0, [r5, #10]	@ 0004c15c a872
.org 0x4c15e
	ldrb r1, [r5, #11]	@ 0004c15e e97a
.org 0x4c160
	movs r0, #251	@ 0004c160 fb20
.org 0x4c162
	ands r0, r1	@ 0004c162 0840
.org 0x4c164
	strb r0, [r5, #11]	@ 0004c164 e872
.org 0x4c166
	movs r0, #0	@ 0004c166 0020
.org 0x4c168
	mov r8, r0	@ 0004c168 8046
.org 0x4c16a
	strh r4, [r5, #32]	@ 0004c16a 2c84
.org 0x4c16c
	adds r0, r5, #0	@ 0004c16c 281c
.org 0x4c16e
	adds r0, #34	@ 0004c16e 2230
.org 0x4c170
	mov r1, r8	@ 0004c170 4146
.org 0x4c172
	strb r1, [r0, #0]	@ 0004c172 0170
.org 0x4c174
	adds r0, r5, #0	@ 0004c174 281c
.org 0x4c176
	movs r1, #1	@ 0004c176 0121
.org 0x4c178
	bl 0x1cf00	@ 0004c178 d0f7c2fe
.org 0x4c17c
	ldrb r1, [r5, #10]	@ 0004c17c a97a
.org 0x4c17e
	movs r0, #4	@ 0004c17e 0420
.org 0x4c180
	orrs r0, r1	@ 0004c180 0843
.org 0x4c182
	strb r0, [r5, #10]	@ 0004c182 a872
.org 0x4c184
	adds r6, r5, #0	@ 0004c184 2e1c
.org 0x4c186
	adds r6, #116	@ 0004c186 7436
.org 0x4c188
	ldr r7, [pc, #120]	@ 0004c188 1e4f
.org 0x4c18a
	adds r2, r5, #0	@ 0004c18a 2a1c
.org 0x4c18c
	adds r2, #84	@ 0004c18c 5432
.org 0x4c18e
	adds r0, r6, #0	@ 0004c18e 301c
.org 0x4c190
	adds r1, r7, #0	@ 0004c190 391c
.org 0x4c192
	movs r3, #8	@ 0004c192 0823
.org 0x4c194
	bl 0x5760	@ 0004c194 b9f7e4fa
.org 0x4c198
	str r5, [r6, #44]	@ 0004c198 f562
.org 0x4c19a
	str r4, [r6, #36]	@ 0004c19a 7462
.org 0x4c19c
	movs r0, #1	@ 0004c19c 0120
.org 0x4c19e
	negs r0, r0	@ 0004c19e 4042
.org 0x4c1a0
	adds r3, r0, #0	@ 0004c1a0 031c
.org 0x4c1a2
	str r3, [sp, #0]	@ 0004c1a2 0093
.org 0x4c1a4
	ldrb r1, [r5, #18]	@ 0004c1a4 a97c
.org 0x4c1a6
	movs r0, #16	@ 0004c1a6 1020
.org 0x4c1a8
	subs r0, r0, r1	@ 0004c1a8 401a
.org 0x4c1aa
	cmp r0, #0	@ 0004c1aa 0028
.org 0x4c1ac
	bge.n 0x4c1b0	@ 0004c1ac 00da
.org 0x4c1ae
	adds r0, #3	@ 0004c1ae 0330
.org 0x4c1b0
	asrs r0, r0, #2	@ 0004c1b0 8010
.org 0x4c1b2
	adds r0, #1	@ 0004c1b2 0130
.org 0x4c1b4
	str r0, [sp, #4]	@ 0004c1b4 0190
.org 0x4c1b6
	adds r0, r6, #0	@ 0004c1b6 301c
.org 0x4c1b8
	adds r1, r7, #0	@ 0004c1b8 391c
.org 0x4c1ba
	adds r2, r3, #0	@ 0004c1ba 1a1c
.org 0x4c1bc
	bl 0x5794	@ 0004c1bc b9f7eafa
.org 0x4c1c0
	ldr r1, [pc, #68]	@ 0004c1c0 1149
.org 0x4c1c2
	ldrb r0, [r5, #17]	@ 0004c1c2 687c
.org 0x4c1c4
	adds r0, #64	@ 0004c1c4 4030
.org 0x4c1c6
	lsls r0, r0, #24	@ 0004c1c6 0006
.org 0x4c1c8
	lsrs r0, r0, #23	@ 0004c1c8 c00d
.org 0x4c1ca
	adds r0, r0, r1	@ 0004c1ca 4018
.org 0x4c1cc
	movs r2, #0	@ 0004c1cc 0022
.org 0x4c1ce
	ldrsh r0, [r0, r2]	@ 0004c1ce 805e
.org 0x4c1d0
	lsls r0, r0, #1	@ 0004c1d0 4000
.org 0x4c1d2
	str r0, [r5, #92]	@ 0004c1d2 e865
.org 0x4c1d4
	ldrb r0, [r5, #17]	@ 0004c1d4 687c
.org 0x4c1d6
	lsls r0, r0, #1	@ 0004c1d6 4000
.org 0x4c1d8
	adds r0, r0, r1	@ 0004c1d8 4018
.org 0x4c1da
	movs r1, #0	@ 0004c1da 0021
.org 0x4c1dc
	ldrsh r0, [r0, r1]	@ 0004c1dc 405e
.org 0x4c1de
	lsls r0, r0, #1	@ 0004c1de 4000
.org 0x4c1e0
	str r0, [r5, #96]	@ 0004c1e0 2866
.org 0x4c1e2
	movs r0, #24	@ 0004c1e2 1820
.org 0x4c1e4
	strb r0, [r5, #18]	@ 0004c1e4 a874
.org 0x4c1e6
	adds r0, r5, #0	@ 0004c1e6 281c
.org 0x4c1e8
	adds r0, #189	@ 0004c1e8 bd30
.org 0x4c1ea
	mov r2, r8	@ 0004c1ea 4246
.org 0x4c1ec
	strb r2, [r0, #0]	@ 0004c1ec 0270
.org 0x4c1ee
	adds r0, r5, #0	@ 0004c1ee 281c
.org 0x4c1f0
	bl 0x4c03c	@ 0004c1f0 fff724ff
.org 0x4c1f4
	add sp, #8	@ 0004c1f4 02b0
.org 0x4c1f6
	pop {r3}	@ 0004c1f6 08bc
.org 0x4c1f8
	mov r8, r3	@ 0004c1f8 9846
.org 0x4c1fa
	pop {r4, r5, r6, r7}	@ 0004c1fa f0bc
.org 0x4c1fc
	pop {r0}	@ 0004c1fc 01bc
.org 0x4c1fe
	bx r0	@ 0004c1fe 0047
