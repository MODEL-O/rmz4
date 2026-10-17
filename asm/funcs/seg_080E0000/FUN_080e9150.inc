@ FUN_080e9150  entry 0x080e9150  size 110
.thumb
.org 0xe9150
FUN_080e9150:
	push {r4, lr}	@ 000e9150 10b5
.org 0xe9152
	adds r4, r0, #0	@ 000e9152 041c
.org 0xe9154
	ldrb r0, [r4, #18]	@ 000e9154 a07c
.org 0xe9156
	cmp r0, #0	@ 000e9156 0028
.org 0xe9158
	beq.n 0xe9160	@ 000e9158 02d0
.org 0xe915a
	subs r0, #1	@ 000e915a 0138
.org 0xe915c
	strb r0, [r4, #18]	@ 000e915c a074
.org 0xe915e
	b.n 0xe91b8	@ 000e915e 2be0
.org 0xe9160
	adds r0, r4, #0	@ 000e9160 201c
.org 0xe9162
	bl 0x1cc9c	@ 000e9162 33f79bfd
.org 0xe9166
	ldrb r1, [r4, #10]	@ 000e9166 a17a
.org 0xe9168
	movs r0, #1	@ 000e9168 0120
.org 0xe916a
	orrs r0, r1	@ 000e916a 0843
.org 0xe916c
	movs r1, #2	@ 000e916c 0221
.org 0xe916e
	orrs r0, r1	@ 000e916e 0843
.org 0xe9170
	strb r0, [r4, #10]	@ 000e9170 a072
.org 0xe9172
	ldr r1, [pc, #76]	@ 000e9172 1349
.org 0xe9174
	ldrb r0, [r4, #9]	@ 000e9174 607a
.org 0xe9176
	lsls r0, r0, #2	@ 000e9176 8000
.org 0xe9178
	adds r0, r0, r1	@ 000e9178 4018
.org 0xe917a
	movs r1, #1	@ 000e917a 0121
.org 0xe917c
	str r1, [r4, #12]	@ 000e917c e160
.org 0xe917e
	ldr r0, [r0, #0]	@ 000e917e 0068
.org 0xe9180
	ldr r0, [r0, #4]	@ 000e9180 4068
.org 0xe9182
	str r0, [r4, #20]	@ 000e9182 6061
.org 0xe9184
	ldr r0, [pc, #60]	@ 000e9184 0f48
.org 0xe9186
	ldrh r1, [r0, #2]	@ 000e9186 4188
.org 0xe9188
	adds r0, r4, #0	@ 000e9188 201c
.org 0xe918a
	bl 0x1cf00	@ 000e918a 33f7b9fe
.org 0xe918e
	ldr r1, [r4, #88]	@ 000e918e a16d
.org 0xe9190
	ldr r2, [pc, #52]	@ 000e9190 0d4a
.org 0xe9192
	adds r0, r1, r2	@ 000e9192 8818
.org 0xe9194
	str r0, [r4, #120]	@ 000e9194 a067
.org 0xe9196
	ldr r0, [r4, #84]	@ 000e9196 606d
.org 0xe9198
	movs r2, #128	@ 000e9198 8022
.org 0xe919a
	lsls r2, r2, #3	@ 000e919a d200
.org 0xe919c
	adds r0, r0, r2	@ 000e919c 8018
.org 0xe919e
	str r0, [r4, #84]	@ 000e919e 6065
.org 0xe91a0
	movs r0, #200	@ 000e91a0 c820
.org 0xe91a2
	lsls r0, r0, #5	@ 000e91a2 4001
.org 0xe91a4
	adds r1, r1, r0	@ 000e91a4 0918
.org 0xe91a6
	str r1, [r4, #88]	@ 000e91a6 a165
.org 0xe91a8
	movs r0, #2	@ 000e91a8 0220
.org 0xe91aa
	strb r0, [r4, #13]	@ 000e91aa 6073
.org 0xe91ac
	ldr r0, [pc, #28]	@ 000e91ac 0748
.org 0xe91ae
	bl 0x2b10	@ 000e91ae 19f7affc
.org 0xe91b2
	adds r0, r4, #0	@ 000e91b2 201c
.org 0xe91b4
	bl 0xe8ebc	@ 000e91b4 fff782fe
.org 0xe91b8
	pop {r4}	@ 000e91b8 10bc
.org 0xe91ba
	pop {r0}	@ 000e91ba 01bc
.org 0xe91bc
	bx r0	@ 000e91bc 0047
