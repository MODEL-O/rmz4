@ FUN_08073158  entry 0x08073158  size 176
.thumb
.org 0x73158
FUN_08073158:
	push {r4, r5, r6, r7, lr}	@ 00073158 f0b5
.org 0x7315a
	adds r6, r0, #0	@ 0007315a 061c
.org 0x7315c
	movs r7, #0	@ 0007315c 0027
.org 0x7315e
	ldrb r0, [r6, #15]	@ 0007315e f07b
.org 0x73160
	cmp r0, #0	@ 00073160 0028
.org 0x73162
	bne.n 0x73178	@ 00073162 09d1
.org 0x73164
	adds r0, r6, #0	@ 00073164 301c
.org 0x73166
	movs r1, #25	@ 00073166 1921
.org 0x73168
	bl 0x736c4	@ 00073168 00f0acfa
.org 0x7316c
	str r7, [r6, #96]	@ 0007316c 3766
.org 0x7316e
	movs r0, #32	@ 0007316e 2020
.org 0x73170
	str r0, [r6, #104]	@ 00073170 b066
.org 0x73172
	ldrb r0, [r6, #15]	@ 00073172 f07b
.org 0x73174
	adds r0, #1	@ 00073174 0130
.org 0x73176
	strb r0, [r6, #15]	@ 00073176 f073
.org 0x73178
	adds r0, r6, #0	@ 00073178 301c
.org 0x7317a
	bl 0x1cff0	@ 0007317a a9f739ff
.org 0x7317e
	adds r0, r6, #0	@ 0007317e 301c
.org 0x73180
	adds r0, #116	@ 00073180 7430
.org 0x73182
	ldr r4, [pc, #108]	@ 00073182 1b4c
.org 0x73184
	ldr r3, [pc, #108]	@ 00073184 1b4b
.org 0x73186
	adds r1, r6, #0	@ 00073186 311c
.org 0x73188
	adds r1, #184	@ 00073188 b831
.org 0x7318a
	ldrb r2, [r1, #0]	@ 0007318a 0a78
.org 0x7318c
	lsls r1, r2, #1	@ 0007318c 5100
.org 0x7318e
	adds r1, r1, r3	@ 0007318e c918
.org 0x73190
	ldrh r1, [r1, #0]	@ 00073190 0988
.org 0x73192
	lsls r1, r1, #2	@ 00073192 8900
.org 0x73194
	adds r1, r1, r4	@ 00073194 0919
.org 0x73196
	adds r3, r6, #0	@ 00073196 331c
.org 0x73198
	adds r3, #113	@ 00073198 7133
.org 0x7319a
	movs r5, #0	@ 0007319a 0025
.org 0x7319c
	ldrsb r5, [r3, r5]	@ 0007319c 5d57
.org 0x7319e
	ldr r1, [r1, #0]	@ 0007319e 0968
.org 0x731a0
	lsls r3, r5, #2	@ 000731a0 ab00
.org 0x731a2
	adds r3, r3, r1	@ 000731a2 5b18
.org 0x731a4
	ldr r4, [pc, #80]	@ 000731a4 144c
.org 0x731a6
	adds r1, r6, #0	@ 000731a6 311c
.org 0x731a8
	adds r1, #185	@ 000731a8 b931
.org 0x731aa
	ldrb r1, [r1, #0]	@ 000731aa 0978
.org 0x731ac
	lsls r1, r1, #2	@ 000731ac 8900
.org 0x731ae
	adds r1, r1, r4	@ 000731ae 0919
.org 0x731b0
	ldr r1, [r1, #0]	@ 000731b0 0968
.org 0x731b2
	lsls r2, r2, #2	@ 000731b2 9200
.org 0x731b4
	adds r2, r2, r1	@ 000731b4 5218
.org 0x731b6
	ldr r1, [r2, #0]	@ 000731b6 1168
.org 0x731b8
	adds r1, r1, r5	@ 000731b8 4919
.org 0x731ba
	ldrb r1, [r1, #0]	@ 000731ba 0978
.org 0x731bc
	lsls r2, r1, #1	@ 000731bc 4a00
.org 0x731be
	adds r2, r2, r1	@ 000731be 5218
.org 0x731c0
	lsls r2, r2, #3	@ 000731c0 d200
.org 0x731c2
	ldr r1, [r3, #0]	@ 000731c2 1968
.org 0x731c4
	adds r1, r1, r2	@ 000731c4 8918
.org 0x731c6
	bl 0x5784	@ 000731c6 92f7ddfa
.org 0x731ca
	ldr r0, [r6, #88]	@ 000731ca b06d
.org 0x731cc
	ldr r1, [r6, #96]	@ 000731cc 316e
.org 0x731ce
	adds r0, r0, r1	@ 000731ce 4018
.org 0x731d0
	str r0, [r6, #88]	@ 000731d0 b065
.org 0x731d2
	adds r0, r6, #0	@ 000731d2 301c
.org 0x731d4
	bl 0x73850	@ 000731d4 00f03cfb
.org 0x731d8
	cmp r0, #0	@ 000731d8 0028
.org 0x731da
	bne.n 0x731fc	@ 000731da 0fd1
.org 0x731dc
	ldr r0, [r6, #96]	@ 000731dc 306e
.org 0x731de
	ldr r1, [r6, #104]	@ 000731de b16e
.org 0x731e0
	adds r0, r0, r1	@ 000731e0 4018
.org 0x731e2
	str r0, [r6, #96]	@ 000731e2 3066
.org 0x731e4
	movs r1, #224	@ 000731e4 e021
.org 0x731e6
	lsls r1, r1, #3	@ 000731e6 c900
.org 0x731e8
	cmp r0, r1	@ 000731e8 8842
.org 0x731ea
	ble.n 0x7320e	@ 000731ea 10dd
.org 0x731ec
	str r1, [r6, #96]	@ 000731ec 3166
.org 0x731ee
	b.n 0x7320e	@ 000731ee 0ee0
.org 0x731f0
	.byte 0x08,0xcb,0x85,0x08	@ 000731f0 data
.org 0x731f4
	.byte 0x04,0xcc,0x85,0x08	@ 000731f4 data
.org 0x731f8
	.byte 0xfc,0xcb,0x85,0x08	@ 000731f8 data
.org 0x731fc
	adds r0, r6, #0	@ 000731fc 301c
.org 0x731fe
	bl 0x73a68	@ 000731fe 00f033fc
.org 0x73202
	str r7, [r6, #96]	@ 00073202 3766
.org 0x73204
	ldrb r0, [r6, #14]	@ 00073204 b07b
.org 0x73206
	adds r0, #1	@ 00073206 0130
