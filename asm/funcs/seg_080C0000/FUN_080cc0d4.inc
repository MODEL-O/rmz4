@ FUN_080cc0d4  entry 0x080cc0d4  size 220
.thumb
.org 0xcc0d4
FUN_080cc0d4:
	push {r4, r5, r6, r7, lr}	@ 000cc0d4 f0b5
.org 0xcc0d6
	mov r7, r8	@ 000cc0d6 4746
.org 0xcc0d8
	push {r7}	@ 000cc0d8 80b4
.org 0xcc0da
	adds r7, r0, #0	@ 000cc0da 071c
.org 0xcc0dc
	bl 0x1cc9c	@ 000cc0dc 50f7defd
.org 0xcc0e0
	ldrb r1, [r7, #10]	@ 000cc0e0 b97a
.org 0xcc0e2
	movs r0, #1	@ 000cc0e2 0120
.org 0xcc0e4
	orrs r0, r1	@ 000cc0e4 0843
.org 0xcc0e6
	movs r1, #2	@ 000cc0e6 0221
.org 0xcc0e8
	orrs r0, r1	@ 000cc0e8 0843
.org 0xcc0ea
	strb r0, [r7, #10]	@ 000cc0ea b872
.org 0xcc0ec
	ldrb r0, [r7, #17]	@ 000cc0ec 787c
.org 0xcc0ee
	cmp r0, #1	@ 000cc0ee 0128
.org 0xcc0f0
	bne.n 0xcc118	@ 000cc0f0 12d1
.org 0xcc0f2
	ldr r1, [pc, #32]	@ 000cc0f2 0849
.org 0xcc0f4
	adds r0, r7, #0	@ 000cc0f4 381c
.org 0xcc0f6
	bl 0x1cf00	@ 000cc0f6 50f703ff
.org 0xcc0fa
	adds r4, r7, #0	@ 000cc0fa 3c1c
.org 0xcc0fc
	adds r4, #84	@ 000cc0fc 5434
.org 0xcc0fe
	ldrb r3, [r7, #19]	@ 000cc0fe fb7c
.org 0xcc100
	adds r0, r4, #0	@ 000cc100 201c
.org 0xcc102
	movs r1, #0	@ 000cc102 0021
.org 0xcc104
	movs r2, #2	@ 000cc104 0222
.org 0xcc106
	bl 0xcbf1c	@ 000cc106 fff709ff
.org 0xcc10a
	movs r0, #2	@ 000cc10a 0220
.org 0xcc10c
	strb r0, [r7, #18]	@ 000cc10c b874
.org 0xcc10e
	adds r6, r4, #0	@ 000cc10e 261c
.org 0xcc110
	b.n 0xcc12a	@ 000cc110 0be0
.org 0xcc112
	.byte 0x00	@ 000cc112 data
.org 0xcc113
	.byte 0x00	@ 000cc113 data
.org 0xcc114
	.byte 0x02,0x95,0x00,0x00	@ 000cc114 data
.org 0xcc118
	movs r1, #149	@ 000cc118 9521
.org 0xcc11a
	lsls r1, r1, #8	@ 000cc11a 0902
.org 0xcc11c
	adds r0, r7, #0	@ 000cc11c 381c
.org 0xcc11e
	bl 0x1cf00	@ 000cc11e 50f7effe
.org 0xcc122
	movs r0, #4	@ 000cc122 0420
.org 0xcc124
	strb r0, [r7, #18]	@ 000cc124 b874
.org 0xcc126
	adds r6, r7, #0	@ 000cc126 3e1c
.org 0xcc128
	adds r6, #84	@ 000cc128 5436
.org 0xcc12a
	adds r0, r7, #0	@ 000cc12a 381c
.org 0xcc12c
	bl 0x1cff0	@ 000cc12c 50f760ff
.org 0xcc130
	movs r5, #0	@ 000cc130 0025
.org 0xcc132
	ldrb r1, [r7, #10]	@ 000cc132 b97a
.org 0xcc134
	movs r0, #239	@ 000cc134 ef20
.org 0xcc136
	ands r0, r1	@ 000cc136 0840
.org 0xcc138
	strb r0, [r7, #10]	@ 000cc138 b872
.org 0xcc13a
	movs r0, #1	@ 000cc13a 0120
.org 0xcc13c
	mov r8, r0	@ 000cc13c 8046
.org 0xcc13e
	adds r0, r7, #0	@ 000cc13e 381c
.org 0xcc140
	adds r0, #76	@ 000cc140 4c30
.org 0xcc142
	strb r5, [r0, #0]	@ 000cc142 0570
.org 0xcc144
	adds r2, r7, #0	@ 000cc144 3a1c
.org 0xcc146
	adds r2, #74	@ 000cc146 4a32
.org 0xcc148
	ldrb r1, [r2, #0]	@ 000cc148 1178
.org 0xcc14a
	movs r0, #17	@ 000cc14a 1120
.org 0xcc14c
	negs r0, r0	@ 000cc14c 4042
.org 0xcc14e
	ands r0, r1	@ 000cc14e 0840
.org 0xcc150
	strb r0, [r2, #0]	@ 000cc150 1070
.org 0xcc152
	ldrb r1, [r7, #10]	@ 000cc152 b97a
.org 0xcc154
	movs r0, #4	@ 000cc154 0420
.org 0xcc156
	orrs r0, r1	@ 000cc156 0843
.org 0xcc158
	strb r0, [r7, #10]	@ 000cc158 b872
.org 0xcc15a
	adds r4, r7, #0	@ 000cc15a 3c1c
.org 0xcc15c
	adds r4, #116	@ 000cc15c 7434
.org 0xcc15e
	ldr r1, [pc, #88]	@ 000cc15e 1649
.org 0xcc160
	adds r0, r4, #0	@ 000cc160 201c
.org 0xcc162
	adds r2, r6, #0	@ 000cc162 321c
.org 0xcc164
	movs r3, #8	@ 000cc164 0823
.org 0xcc166
	bl 0x5760	@ 000cc166 39f7fbfa
.org 0xcc16a
	str r7, [r4, #44]	@ 000cc16a e762
.org 0xcc16c
	str r5, [r4, #36]	@ 000cc16c 6562
.org 0xcc16e
	ldr r2, [pc, #76]	@ 000cc16e 134a
.org 0xcc170
	ldrb r0, [r7, #19]	@ 000cc170 f87c
.org 0xcc172
	adds r0, #64	@ 000cc172 4030
.org 0xcc174
	lsls r0, r0, #24	@ 000cc174 0006
.org 0xcc176
	lsrs r0, r0, #23	@ 000cc176 c00d
.org 0xcc178
	adds r0, r0, r2	@ 000cc178 8018
.org 0xcc17a
	movs r3, #0	@ 000cc17a 0023
.org 0xcc17c
	ldrsh r1, [r0, r3]	@ 000cc17c c15e
.org 0xcc17e
	lsls r0, r1, #1	@ 000cc17e 4800
.org 0xcc180
	adds r0, r0, r1	@ 000cc180 4018
.org 0xcc182
	str r0, [r7, #92]	@ 000cc182 f865
.org 0xcc184
	ldrb r0, [r7, #19]	@ 000cc184 f87c
.org 0xcc186
	lsls r0, r0, #1	@ 000cc186 4000
.org 0xcc188
	adds r0, r0, r2	@ 000cc188 8018
.org 0xcc18a
	movs r2, #0	@ 000cc18a 0022
.org 0xcc18c
	ldrsh r1, [r0, r2]	@ 000cc18c 815e
.org 0xcc18e
	lsls r0, r1, #1	@ 000cc18e 4800
.org 0xcc190
	adds r0, r0, r1	@ 000cc190 4018
.org 0xcc192
	str r0, [r7, #96]	@ 000cc192 3866
.org 0xcc194
	ldr r1, [pc, #40]	@ 000cc194 0a49
.org 0xcc196
	ldrb r0, [r7, #9]	@ 000cc196 787a
.org 0xcc198
	lsls r0, r0, #2	@ 000cc198 8000
.org 0xcc19a
	adds r0, r0, r1	@ 000cc19a 4018
.org 0xcc19c
	mov r3, r8	@ 000cc19c 4346
.org 0xcc19e
	str r3, [r7, #12]	@ 000cc19e fb60
.org 0xcc1a0
	ldr r0, [r0, #0]	@ 000cc1a0 0068
.org 0xcc1a2
	ldr r0, [r0, #4]	@ 000cc1a2 4068
.org 0xcc1a4
	str r0, [r7, #20]	@ 000cc1a4 7861
.org 0xcc1a6
	adds r0, r7, #0	@ 000cc1a6 381c
.org 0xcc1a8
	bl 0xcc0a4	@ 000cc1a8 fff77cff
.org 0xcc1ac
	pop {r3}	@ 000cc1ac 08bc
.org 0xcc1ae
	mov r8, r3	@ 000cc1ae 9846
