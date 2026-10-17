@ FUN_080fe0e0  entry 0x080fe0e0  size 198
.thumb
.org 0xfe0e0
FUN_080fe0e0:
	push {r4, r5, r6, r7, lr}	@ 000fe0e0 f0b5
.org 0xfe0e2
	mov r7, sl	@ 000fe0e2 5746
.org 0xfe0e4
	mov r6, r9	@ 000fe0e4 4e46
.org 0xfe0e6
	mov r5, r8	@ 000fe0e6 4546
.org 0xfe0e8
	push {r5, r6, r7}	@ 000fe0e8 e0b4
.org 0xfe0ea
	adds r4, r0, #0	@ 000fe0ea 041c
.org 0xfe0ec
	ldr r1, [pc, #184]	@ 000fe0ec 2e49
.org 0xfe0ee
	ldr r0, [r1, #56]	@ 000fe0ee 886b
.org 0xfe0f0
	str r0, [r4, #84]	@ 000fe0f0 6065
.org 0xfe0f2
	ldr r0, [r1, #60]	@ 000fe0f2 c86b
.org 0xfe0f4
	str r0, [r4, #88]	@ 000fe0f4 a065
.org 0xfe0f6
	ldrb r0, [r4, #13]	@ 000fe0f6 607b
.org 0xfe0f8
	cmp r0, #0	@ 000fe0f8 0028
.org 0xfe0fa
	beq.n 0xfe198	@ 000fe0fa 4dd0
.org 0xfe0fc
	ldr r0, [r4, #100]	@ 000fe0fc 606e
.org 0xfe0fe
	mov r8, r0	@ 000fe0fe 8046
.org 0xfe100
	ldr r6, [r4, #104]	@ 000fe100 a66e
.org 0xfe102
	ldr r1, [r4, #92]	@ 000fe102 e16d
.org 0xfe104
	mov sl, r1	@ 000fe104 8a46
.org 0xfe106
	ldr r0, [r4, #96]	@ 000fe106 206e
.org 0xfe108
	mov r9, r0	@ 000fe108 8146
.org 0xfe10a
	mov r0, r8	@ 000fe10a 4046
.org 0xfe10c
	adds r1, r6, #0	@ 000fe10c 311c
.org 0xfe10e
	bl 0x146bc	@ 000fe10e 16f7d5fa
.org 0xfe112
	lsls r0, r0, #16	@ 000fe112 0004
.org 0xfe114
	cmp r0, #0	@ 000fe114 0028
.org 0xfe116
	beq.n 0xfe122	@ 000fe116 04d0
.org 0xfe118
	adds r0, r4, #0	@ 000fe118 201c
.org 0xfe11a
	mov r1, r8	@ 000fe11a 4146
.org 0xfe11c
	adds r2, r6, #0	@ 000fe11c 321c
.org 0xfe11e
	bl 0xfe400	@ 000fe11e 00f06ff9
.org 0xfe122
	mov r5, r8	@ 000fe122 4546
.org 0xfe124
	add r5, sl	@ 000fe124 5544
.org 0xfe126
	mov r1, r9	@ 000fe126 4946
.org 0xfe128
	adds r7, r6, r1	@ 000fe128 7718
.org 0xfe12a
	adds r0, r5, #0	@ 000fe12a 281c
.org 0xfe12c
	adds r1, r7, #0	@ 000fe12c 391c
.org 0xfe12e
	bl 0x146bc	@ 000fe12e 16f7c5fa
.org 0xfe132
	lsls r0, r0, #16	@ 000fe132 0004
.org 0xfe134
	cmp r0, #0	@ 000fe134 0028
.org 0xfe136
	beq.n 0xfe142	@ 000fe136 04d0
.org 0xfe138
	adds r0, r4, #0	@ 000fe138 201c
.org 0xfe13a
	adds r1, r5, #0	@ 000fe13a 291c
.org 0xfe13c
	adds r2, r7, #0	@ 000fe13c 3a1c
.org 0xfe13e
	bl 0xfe400	@ 000fe13e 00f05ff9
.org 0xfe142
	mov r0, r9	@ 000fe142 4846
.org 0xfe144
	subs r6, r6, r0	@ 000fe144 361a
.org 0xfe146
	adds r0, r5, #0	@ 000fe146 281c
.org 0xfe148
	adds r1, r6, #0	@ 000fe148 311c
.org 0xfe14a
	bl 0x146bc	@ 000fe14a 16f7b7fa
.org 0xfe14e
	lsls r0, r0, #16	@ 000fe14e 0004
.org 0xfe150
	cmp r0, #0	@ 000fe150 0028
.org 0xfe152
	beq.n 0xfe15e	@ 000fe152 04d0
.org 0xfe154
	adds r0, r4, #0	@ 000fe154 201c
.org 0xfe156
	adds r1, r5, #0	@ 000fe156 291c
.org 0xfe158
	adds r2, r6, #0	@ 000fe158 321c
.org 0xfe15a
	bl 0xfe400	@ 000fe15a 00f051f9
.org 0xfe15e
	mov r1, r8	@ 000fe15e 4146
.org 0xfe160
	mov r0, sl	@ 000fe160 5046
.org 0xfe162
	subs r5, r1, r0	@ 000fe162 0d1a
.org 0xfe164
	adds r0, r5, #0	@ 000fe164 281c
.org 0xfe166
	adds r1, r7, #0	@ 000fe166 391c
.org 0xfe168
	bl 0x146bc	@ 000fe168 16f7a8fa
.org 0xfe16c
	lsls r0, r0, #16	@ 000fe16c 0004
.org 0xfe16e
	cmp r0, #0	@ 000fe16e 0028
.org 0xfe170
	beq.n 0xfe17c	@ 000fe170 04d0
.org 0xfe172
	adds r0, r4, #0	@ 000fe172 201c
.org 0xfe174
	adds r1, r5, #0	@ 000fe174 291c
.org 0xfe176
	adds r2, r7, #0	@ 000fe176 3a1c
.org 0xfe178
	bl 0xfe400	@ 000fe178 00f042f9
.org 0xfe17c
	adds r0, r5, #0	@ 000fe17c 281c
.org 0xfe17e
	adds r1, r6, #0	@ 000fe17e 311c
.org 0xfe180
	bl 0x146bc	@ 000fe180 16f79cfa
.org 0xfe184
	lsls r0, r0, #16	@ 000fe184 0004
.org 0xfe186
	cmp r0, #0	@ 000fe186 0028
.org 0xfe188
	beq.n 0xfe194	@ 000fe188 04d0
.org 0xfe18a
	adds r0, r4, #0	@ 000fe18a 201c
.org 0xfe18c
	adds r1, r5, #0	@ 000fe18c 291c
.org 0xfe18e
	adds r2, r6, #0	@ 000fe18e 321c
.org 0xfe190
	bl 0xfe400	@ 000fe190 00f036f9
.org 0xfe194
	movs r0, #0	@ 000fe194 0020
.org 0xfe196
	strb r0, [r4, #13]	@ 000fe196 6073
.org 0xfe198
	pop {r3, r4, r5}	@ 000fe198 38bc
.org 0xfe19a
	mov r8, r3	@ 000fe19a 9846
.org 0xfe19c
	mov r9, r4	@ 000fe19c a146
.org 0xfe19e
	mov sl, r5	@ 000fe19e aa46
.org 0xfe1a0
	pop {r4, r5, r6, r7}	@ 000fe1a0 f0bc
.org 0xfe1a2
	pop {r0}	@ 000fe1a2 01bc
.org 0xfe1a4
	bx r0	@ 000fe1a4 0047
