@ FUN_080ad170  entry 0x080ad170  size 106
.thumb
.org 0xad170
FUN_080ad170:
	push {r4, r5, r6, lr}	@ 000ad170 70b5
.org 0xad172
	sub sp, #16	@ 000ad172 84b0
.org 0xad174
	adds r4, r0, #0	@ 000ad174 041c
.org 0xad176
	mov r0, sp	@ 000ad176 6846
.org 0xad178
	ldr r1, [pc, #96]	@ 000ad178 1849
.org 0xad17a
	ldmia r1!, {r2, r3, r5}	@ 000ad17a 2cc9
.org 0xad17c
	stmia r0!, {r2, r3, r5}	@ 000ad17c 2cc0
.org 0xad17e
	ldr r1, [r1, #0]	@ 000ad17e 0968
.org 0xad180
	str r1, [r0, #0]	@ 000ad180 0160
.org 0xad182
	ldr r5, [r4, #40]	@ 000ad182 a56a
.org 0xad184
	ldrb r6, [r4, #17]	@ 000ad184 667c
.org 0xad186
	ldrb r3, [r4, #15]	@ 000ad186 e37b
.org 0xad188
	cmp r3, #0	@ 000ad188 002b
.org 0xad18a
	bne.n 0xad1be	@ 000ad18a 18d1
.org 0xad18c
	adds r2, r4, #0	@ 000ad18c 221c
.org 0xad18e
	adds r2, #184	@ 000ad18e b832
.org 0xad190
	ldr r1, [r2, #0]	@ 000ad190 1168
.org 0xad192
	cmp r1, #0	@ 000ad192 0029
.org 0xad194
	beq.n 0xad1ac	@ 000ad194 0ad0
.org 0xad196
	adds r1, #180	@ 000ad196 b431
.org 0xad198
	movs r0, #1	@ 000ad198 0120
.org 0xad19a
	strb r0, [r1, #0]	@ 000ad19a 0870
.org 0xad19c
	str r3, [r2, #0]	@ 000ad19c 1360
.org 0xad19e
	adds r1, r5, #0	@ 000ad19e 291c
.org 0xad1a0
	adds r1, #188	@ 000ad1a0 bc31
.org 0xad1a2
	ldrb r0, [r1, #0]	@ 000ad1a2 0878
.org 0xad1a4
	cmp r0, #0	@ 000ad1a4 0028
.org 0xad1a6
	beq.n 0xad1ac	@ 000ad1a6 01d0
.org 0xad1a8
	adds r0, #255	@ 000ad1a8 ff30
.org 0xad1aa
	strb r0, [r1, #0]	@ 000ad1aa 0870
.org 0xad1ac
	lsls r0, r6, #2	@ 000ad1ac b000
.org 0xad1ae
	add r0, sp	@ 000ad1ae 6844
.org 0xad1b0
	ldrh r1, [r0, #0]	@ 000ad1b0 0188
.org 0xad1b2
	adds r0, r4, #0	@ 000ad1b2 201c
.org 0xad1b4
	bl 0x1cf00	@ 000ad1b4 6ff7a4fe
.org 0xad1b8
	ldrb r0, [r4, #15]	@ 000ad1b8 e07b
.org 0xad1ba
	adds r0, #1	@ 000ad1ba 0130
.org 0xad1bc
	strb r0, [r4, #15]	@ 000ad1bc e073
.org 0xad1be
	adds r0, r4, #0	@ 000ad1be 201c
.org 0xad1c0
	bl 0x1cff0	@ 000ad1c0 6ff716ff
.org 0xad1c4
	adds r2, r5, #0	@ 000ad1c4 2a1c
.org 0xad1c6
	adds r2, #181	@ 000ad1c6 b532
.org 0xad1c8
	movs r1, #1	@ 000ad1c8 0121
.org 0xad1ca
	lsls r1, r6	@ 000ad1ca b140
.org 0xad1cc
	ldrb r0, [r2, #0]	@ 000ad1cc 1078
.org 0xad1ce
	bics r0, r1	@ 000ad1ce 8843
.org 0xad1d0
	strb r0, [r2, #0]	@ 000ad1d0 1070
.org 0xad1d2
	add sp, #16	@ 000ad1d2 04b0
.org 0xad1d4
	pop {r4, r5, r6}	@ 000ad1d4 70bc
.org 0xad1d6
	pop {r0}	@ 000ad1d6 01bc
.org 0xad1d8
	bx r0	@ 000ad1d8 0047
