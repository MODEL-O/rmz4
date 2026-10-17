@ FUN_080da178  entry 0x080da178  size 188
.thumb
.org 0xda178
FUN_080da178:
	push {r4, r5, r6, r7, lr}	@ 000da178 f0b5
.org 0xda17a
	sub sp, #12	@ 000da17a 83b0
.org 0xda17c
	adds r6, r0, #0	@ 000da17c 061c
.org 0xda17e
	ldr r0, [r6, #84]	@ 000da17e 706d
.org 0xda180
	ldr r1, [r6, #92]	@ 000da180 f16d
.org 0xda182
	adds r0, r0, r1	@ 000da182 4018
.org 0xda184
	str r0, [r6, #84]	@ 000da184 7065
.org 0xda186
	movs r0, #245	@ 000da186 f520
.org 0xda188
	muls r0, r1	@ 000da188 4843
.org 0xda18a
	cmp r0, #0	@ 000da18a 0028
.org 0xda18c
	bge.n 0xda190	@ 000da18c 00da
.org 0xda18e
	adds r0, #255	@ 000da18e ff30
.org 0xda190
	asrs r0, r0, #8	@ 000da190 0012
.org 0xda192
	str r0, [r6, #92]	@ 000da192 f065
.org 0xda194
	ldr r0, [r6, #88]	@ 000da194 b06d
.org 0xda196
	ldr r1, [r6, #96]	@ 000da196 316e
.org 0xda198
	adds r0, r0, r1	@ 000da198 4018
.org 0xda19a
	str r0, [r6, #88]	@ 000da19a b065
.org 0xda19c
	adds r0, r6, #0	@ 000da19c 301c
.org 0xda19e
	bl 0x1cff0	@ 000da19e 42f727ff
.org 0xda1a2
	ldrb r0, [r6, #18]	@ 000da1a2 b07c
.org 0xda1a4
	subs r0, #1	@ 000da1a4 0138
.org 0xda1a6
	strb r0, [r6, #18]	@ 000da1a6 b074
.org 0xda1a8
	lsls r0, r0, #24	@ 000da1a8 0006
.org 0xda1aa
	lsrs r7, r0, #24	@ 000da1aa 070e
.org 0xda1ac
	cmp r7, #0	@ 000da1ac 002f
.org 0xda1ae
	bne.n 0xda22c	@ 000da1ae 3dd1
.org 0xda1b0
	ldr r0, [r6, #84]	@ 000da1b0 706d
.org 0xda1b2
	ldr r1, [r6, #88]	@ 000da1b2 b16d
.org 0xda1b4
	str r0, [sp, #4]	@ 000da1b4 0190
.org 0xda1b6
	str r1, [sp, #8]	@ 000da1b6 0291
.org 0xda1b8
	ldr r0, [sp, #8]	@ 000da1b8 0298
.org 0xda1ba
	ldr r1, [pc, #120]	@ 000da1ba 1e49
.org 0xda1bc
	adds r0, r0, r1	@ 000da1bc 4018
.org 0xda1be
	str r0, [sp, #8]	@ 000da1be 0290
.org 0xda1c0
	movs r0, #1	@ 000da1c0 0120
.org 0xda1c2
	add r1, sp, #4	@ 000da1c2 01a9
.org 0xda1c4
	bl 0xd0c88	@ 000da1c4 f6f760fd
.org 0xda1c8
	ldr r2, [pc, #108]	@ 000da1c8 1b4a
.org 0xda1ca
	ldr r1, [r2, #0]	@ 000da1ca 1168
.org 0xda1cc
	ldr r0, [pc, #108]	@ 000da1cc 1b48
.org 0xda1ce
	adds r4, r1, #0	@ 000da1ce 0c1c
.org 0xda1d0
	muls r4, r0	@ 000da1d0 4443
.org 0xda1d2
	ldr r0, [pc, #108]	@ 000da1d2 1b48
.org 0xda1d4
	adds r4, r4, r0	@ 000da1d4 2418
.org 0xda1d6
	lsls r4, r4, #1	@ 000da1d6 6400
.org 0xda1d8
	lsrs r0, r4, #1	@ 000da1d8 6008
.org 0xda1da
	str r0, [r2, #0]	@ 000da1da 1060
.org 0xda1dc
	lsrs r4, r4, #17	@ 000da1dc 640c
.org 0xda1de
	movs r0, #3	@ 000da1de 0320
.org 0xda1e0
	ands r4, r0	@ 000da1e0 0440
.org 0xda1e2
	ldrb r1, [r6, #10]	@ 000da1e2 b17a
.org 0xda1e4
	lsrs r1, r1, #4	@ 000da1e4 0909
.org 0xda1e6
	movs r5, #1	@ 000da1e6 0125
.org 0xda1e8
	ands r1, r5	@ 000da1e8 2940
.org 0xda1ea
	ldr r2, [pc, #88]	@ 000da1ea 164a
.org 0xda1ec
	str r7, [sp, #0]	@ 000da1ec 0097
.org 0xda1ee
	add r0, sp, #4	@ 000da1ee 01a8
.org 0xda1f0
	adds r3, r4, #0	@ 000da1f0 231c
.org 0xda1f2
	bl 0xd9fbc	@ 000da1f2 fff7e3fe
.org 0xda1f6
	ldrb r1, [r6, #10]	@ 000da1f6 b17a
.org 0xda1f8
	lsrs r1, r1, #4	@ 000da1f8 0909
.org 0xda1fa
	ands r1, r5	@ 000da1fa 2940
.org 0xda1fc
	ldr r2, [pc, #72]	@ 000da1fc 124a
.org 0xda1fe
	str r7, [sp, #0]	@ 000da1fe 0097
.org 0xda200
	add r0, sp, #4	@ 000da200 01a8
.org 0xda202
	adds r3, r4, #0	@ 000da202 231c
.org 0xda204
	bl 0xd9fbc	@ 000da204 fff7dafe
.org 0xda208
	ldrb r1, [r6, #10]	@ 000da208 b17a
.org 0xda20a
	lsrs r1, r1, #4	@ 000da20a 0909
.org 0xda20c
	ands r1, r5	@ 000da20c 2940
.org 0xda20e
	ldr r2, [pc, #60]	@ 000da20e 0f4a
.org 0xda210
	str r7, [sp, #0]	@ 000da210 0097
.org 0xda212
	add r0, sp, #4	@ 000da212 01a8
.org 0xda214
	adds r3, r4, #0	@ 000da214 231c
.org 0xda216
	bl 0xd9fbc	@ 000da216 fff7d1fe
.org 0xda21a
	ldr r1, [pc, #52]	@ 000da21a 0d49
.org 0xda21c
	ldrb r0, [r6, #9]	@ 000da21c 707a
.org 0xda21e
	lsls r0, r0, #2	@ 000da21e 8000
.org 0xda220
	adds r0, r0, r1	@ 000da220 4018
.org 0xda222
	movs r1, #2	@ 000da222 0221
.org 0xda224
	str r1, [r6, #12]	@ 000da224 f160
.org 0xda226
	ldr r0, [r0, #0]	@ 000da226 0068
.org 0xda228
	ldr r0, [r0, #8]	@ 000da228 8068
.org 0xda22a
	str r0, [r6, #20]	@ 000da22a 7061
.org 0xda22c
	add sp, #12	@ 000da22c 03b0
.org 0xda22e
	pop {r4, r5, r6, r7}	@ 000da22e f0bc
.org 0xda230
	pop {r0}	@ 000da230 01bc
.org 0xda232
	bx r0	@ 000da232 0047
