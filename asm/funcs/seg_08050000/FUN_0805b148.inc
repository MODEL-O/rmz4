@ FUN_0805b148  entry 0x0805b148  size 120
.thumb
.org 0x5b148
FUN_0805b148:
	push {r4, lr}	@ 0005b148 10b5
.org 0x5b14a
	adds r4, r0, #0	@ 0005b14a 041c
.org 0x5b14c
	ldrb r0, [r4, #15]	@ 0005b14c e07b
.org 0x5b14e
	cmp r0, #0	@ 0005b14e 0028
.org 0x5b150
	bne.n 0x5b194	@ 0005b150 20d1
.org 0x5b152
	movs r0, #192	@ 0005b152 c020
.org 0x5b154
	bl 0x2b10	@ 0005b154 a7f7dcfc
.org 0x5b158
	adds r0, r4, #0	@ 0005b158 201c
.org 0x5b15a
	adds r0, #200	@ 0005b15a c830
.org 0x5b15c
	ldr r1, [r0, #0]	@ 0005b15c 0168
.org 0x5b15e
	cmp r1, #0	@ 0005b15e 0029
.org 0x5b160
	beq.n 0x5b170	@ 0005b160 06d0
.org 0x5b162
	subs r0, #9	@ 0005b162 0938
.org 0x5b164
	ldrb r0, [r0, #0]	@ 0005b164 0078
.org 0x5b166
	cmp r0, #4	@ 0005b166 0428
.org 0x5b168
	bne.n 0x5b170	@ 0005b168 02d1
.org 0x5b16a
	adds r1, #180	@ 0005b16a b431
.org 0x5b16c
	movs r0, #1	@ 0005b16c 0120
.org 0x5b16e
	strb r0, [r1, #0]	@ 0005b16e 0870
.org 0x5b170
	adds r0, r4, #0	@ 0005b170 201c
.org 0x5b172
	adds r0, #116	@ 0005b172 7430
.org 0x5b174
	ldr r1, [pc, #72]	@ 0005b174 1249
.org 0x5b176
	bl 0x5784	@ 0005b176 aaf705fb
.org 0x5b17a
	ldr r1, [pc, #72]	@ 0005b17a 1249
.org 0x5b17c
	adds r0, r4, #0	@ 0005b17c 201c
.org 0x5b17e
	bl 0x1cf00	@ 0005b17e c1f7bffe
.org 0x5b182
	adds r1, r4, #0	@ 0005b182 211c
.org 0x5b184
	adds r1, #189	@ 0005b184 bd31
.org 0x5b186
	movs r0, #1	@ 0005b186 0120
.org 0x5b188
	strb r0, [r1, #0]	@ 0005b188 0870
.org 0x5b18a
	movs r0, #48	@ 0005b18a 3020
.org 0x5b18c
	strb r0, [r4, #18]	@ 0005b18c a074
.org 0x5b18e
	ldrb r0, [r4, #15]	@ 0005b18e e07b
.org 0x5b190
	adds r0, #1	@ 0005b190 0130
.org 0x5b192
	strb r0, [r4, #15]	@ 0005b192 e073
.org 0x5b194
	adds r0, r4, #0	@ 0005b194 201c
.org 0x5b196
	bl 0x1cff0	@ 0005b196 c1f72bff
.org 0x5b19a
	ldrb r0, [r4, #18]	@ 0005b19a a07c
.org 0x5b19c
	cmp r0, #0	@ 0005b19c 0028
.org 0x5b19e
	beq.n 0x5b1aa	@ 0005b19e 04d0
.org 0x5b1a0
	subs r0, #1	@ 0005b1a0 0138
.org 0x5b1a2
	strb r0, [r4, #18]	@ 0005b1a2 a074
.org 0x5b1a4
	lsls r0, r0, #24	@ 0005b1a4 0006
.org 0x5b1a6
	cmp r0, #0	@ 0005b1a6 0028
.org 0x5b1a8
	bne.n 0x5b1ba	@ 0005b1a8 07d1
.org 0x5b1aa
	adds r0, r4, #0	@ 0005b1aa 201c
.org 0x5b1ac
	adds r0, #115	@ 0005b1ac 7330
.org 0x5b1ae
	ldrb r1, [r0, #0]	@ 0005b1ae 0178
.org 0x5b1b0
	cmp r1, #3	@ 0005b1b0 0329
.org 0x5b1b2
	bne.n 0x5b1ba	@ 0005b1b2 02d1
.org 0x5b1b4
	movs r0, #0	@ 0005b1b4 0020
.org 0x5b1b6
	strb r1, [r4, #14]	@ 0005b1b6 a173
.org 0x5b1b8
	strb r0, [r4, #15]	@ 0005b1b8 e073
.org 0x5b1ba
	pop {r4}	@ 0005b1ba 10bc
.org 0x5b1bc
	pop {r0}	@ 0005b1bc 01bc
.org 0x5b1be
	bx r0	@ 0005b1be 0047
