@ FUN_0809b154  entry 0x0809b154  size 132
.thumb
.org 0x9b154
FUN_0809b154:
	push {r4, r5, r6, lr}	@ 0009b154 70b5
.org 0x9b156
	sub sp, #8	@ 0009b156 82b0
.org 0x9b158
	adds r4, r0, #0	@ 0009b158 041c
.org 0x9b15a
	ldr r0, [pc, #124]	@ 0009b15a 1f48
.org 0x9b15c
	ldr r1, [r0, #4]	@ 0009b15c 4168
.org 0x9b15e
	ldr r0, [r0, #0]	@ 0009b15e 0068
.org 0x9b160
	str r0, [sp, #0]	@ 0009b160 0090
.org 0x9b162
	str r1, [sp, #4]	@ 0009b162 0191
.org 0x9b164
	ldrb r6, [r4, #16]	@ 0009b164 267c
.org 0x9b166
	ldrb r0, [r4, #10]	@ 0009b166 a07a
.org 0x9b168
	lsrs r5, r0, #4	@ 0009b168 0509
.org 0x9b16a
	movs r0, #1	@ 0009b16a 0120
.org 0x9b16c
	ands r5, r0	@ 0009b16c 0540
.org 0x9b16e
	ldrb r1, [r4, #15]	@ 0009b16e e17b
.org 0x9b170
	cmp r1, #0	@ 0009b170 0029
.org 0x9b172
	bne.n 0x9b1ac	@ 0009b172 1bd1
.org 0x9b174
	adds r0, r4, #0	@ 0009b174 201c
.org 0x9b176
	adds r0, #183	@ 0009b176 b730
.org 0x9b178
	strb r1, [r0, #0]	@ 0009b178 0170
.org 0x9b17a
	subs r0, #67	@ 0009b17a 4338
.org 0x9b17c
	ldr r1, [pc, #92]	@ 0009b17c 1749
.org 0x9b17e
	ldr r1, [r1, #8]	@ 0009b17e 8968
.org 0x9b180
	bl 0x5784	@ 0009b180 6af700fb
.org 0x9b184
	movs r1, #200	@ 0009b184 c821
.org 0x9b186
	lsls r1, r1, #7	@ 0009b186 c901
.org 0x9b188
	adds r0, r4, #0	@ 0009b188 201c
.org 0x9b18a
	bl 0x1cf00	@ 0009b18a 81f7b9fe
.org 0x9b18e
	lsls r0, r5, #1	@ 0009b18e 6800
.org 0x9b190
	subs r0, #1	@ 0009b190 0138
.org 0x9b192
	lsls r0, r0, #8	@ 0009b192 0002
.org 0x9b194
	str r0, [r4, #92]	@ 0009b194 e065
.org 0x9b196
	lsls r0, r6, #2	@ 0009b196 b000
.org 0x9b198
	add r0, sp	@ 0009b198 6844
.org 0x9b19a
	ldr r0, [r0, #0]	@ 0009b19a 0068
.org 0x9b19c
	cmp r0, #0	@ 0009b19c 0028
.org 0x9b19e
	bge.n 0x9b1a2	@ 0009b19e 00da
.org 0x9b1a0
	adds r0, #255	@ 0009b1a0 ff30
.org 0x9b1a2
	asrs r0, r0, #8	@ 0009b1a2 0012
.org 0x9b1a4
	strb r0, [r4, #18]	@ 0009b1a4 a074
.org 0x9b1a6
	ldrb r0, [r4, #15]	@ 0009b1a6 e07b
.org 0x9b1a8
	adds r0, #1	@ 0009b1a8 0130
.org 0x9b1aa
	strb r0, [r4, #15]	@ 0009b1aa e073
.org 0x9b1ac
	adds r0, r4, #0	@ 0009b1ac 201c
.org 0x9b1ae
	bl 0x1cff0	@ 0009b1ae 81f71fff
.org 0x9b1b2
	ldr r0, [r4, #84]	@ 0009b1b2 606d
.org 0x9b1b4
	ldr r1, [r4, #92]	@ 0009b1b4 e16d
.org 0x9b1b6
	adds r0, r0, r1	@ 0009b1b6 4018
.org 0x9b1b8
	str r0, [r4, #84]	@ 0009b1b8 6065
.org 0x9b1ba
	ldrb r0, [r4, #18]	@ 0009b1ba a07c
.org 0x9b1bc
	subs r0, #1	@ 0009b1bc 0138
.org 0x9b1be
	strb r0, [r4, #18]	@ 0009b1be a074
.org 0x9b1c0
	lsls r0, r0, #24	@ 0009b1c0 0006
.org 0x9b1c2
	lsrs r1, r0, #24	@ 0009b1c2 010e
.org 0x9b1c4
	cmp r1, #0	@ 0009b1c4 0029
.org 0x9b1c6
	bne.n 0x9b1d0	@ 0009b1c6 03d1
.org 0x9b1c8
	movs r0, #2	@ 0009b1c8 0220
.org 0x9b1ca
	strb r0, [r4, #13]	@ 0009b1ca 6073
.org 0x9b1cc
	strb r1, [r4, #14]	@ 0009b1cc a173
.org 0x9b1ce
	strb r1, [r4, #15]	@ 0009b1ce e173
.org 0x9b1d0
	add sp, #8	@ 0009b1d0 02b0
.org 0x9b1d2
	pop {r4, r5, r6}	@ 0009b1d2 70bc
.org 0x9b1d4
	pop {r0}	@ 0009b1d4 01bc
.org 0x9b1d6
	bx r0	@ 0009b1d6 0047
