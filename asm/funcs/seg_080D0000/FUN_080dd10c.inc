@ FUN_080dd10c  entry 0x080dd10c  size 262
.thumb
.org 0xdd10c
FUN_080dd10c:
	push {r4, r5, r6, r7, lr}	@ 000dd10c f0b5
.org 0xdd10e
	mov r7, r9	@ 000dd10e 4f46
.org 0xdd110
	mov r6, r8	@ 000dd110 4646
.org 0xdd112
	push {r6, r7}	@ 000dd112 c0b4
.org 0xdd114
	adds r7, r0, #0	@ 000dd114 071c
.org 0xdd116
	ldr r0, [r7, #40]	@ 000dd116 b86a
.org 0xdd118
	mov r9, r0	@ 000dd118 8146
.org 0xdd11a
	adds r0, r7, #0	@ 000dd11a 381c
.org 0xdd11c
	bl 0x1cc9c	@ 000dd11c 3ff7befd
.org 0xdd120
	ldrb r1, [r7, #10]	@ 000dd120 b97a
.org 0xdd122
	movs r0, #1	@ 000dd122 0120
.org 0xdd124
	orrs r0, r1	@ 000dd124 0843
.org 0xdd126
	movs r1, #2	@ 000dd126 0221
.org 0xdd128
	orrs r0, r1	@ 000dd128 0843
.org 0xdd12a
	strb r0, [r7, #10]	@ 000dd12a b872
.org 0xdd12c
	ldr r1, [pc, #36]	@ 000dd12c 0949
.org 0xdd12e
	adds r0, r7, #0	@ 000dd12e 381c
.org 0xdd130
	bl 0x1cf00	@ 000dd130 3ff7e6fe
.org 0xdd134
	adds r0, r7, #0	@ 000dd134 381c
.org 0xdd136
	bl 0x1cff0	@ 000dd136 3ff75bff
.org 0xdd13a
	mov r2, r9	@ 000dd13a 4a46
.org 0xdd13c
	ldr r0, [r2, #84]	@ 000dd13c 506d
.org 0xdd13e
	ldr r1, [r2, #88]	@ 000dd13e 916d
.org 0xdd140
	str r0, [r7, #84]	@ 000dd140 7865
.org 0xdd142
	str r1, [r7, #88]	@ 000dd142 b965
.org 0xdd144
	ldrb r0, [r7, #17]	@ 000dd144 787c
.org 0xdd146
	cmp r0, #1	@ 000dd146 0128
.org 0xdd148
	beq.n 0xdd174	@ 000dd148 14d0
.org 0xdd14a
	cmp r0, #1	@ 000dd14a 0128
.org 0xdd14c
	bgt.n 0xdd158	@ 000dd14c 04dc
.org 0xdd14e
	cmp r0, #0	@ 000dd14e 0028
.org 0xdd150
	beq.n 0xdd162	@ 000dd150 07d0
.org 0xdd152
	b.n 0xdd1a4	@ 000dd152 27e0
.org 0xdd154
	.byte 0x0f,0x3c,0x00,0x00	@ 000dd154 data
.org 0xdd158
	cmp r0, #2	@ 000dd158 0228
.org 0xdd15a
	beq.n 0xdd188	@ 000dd15a 15d0
.org 0xdd15c
	cmp r0, #3	@ 000dd15c 0328
.org 0xdd15e
	beq.n 0xdd19c	@ 000dd15e 1dd0
.org 0xdd160
	b.n 0xdd1a4	@ 000dd160 20e0
.org 0xdd162
	ldr r3, [pc, #8]	@ 000dd162 024b
.org 0xdd164
	mov ip, r3	@ 000dd164 9c46
.org 0xdd166
	ldr r0, [r7, #88]	@ 000dd166 b86d
.org 0xdd168
	ldr r1, [pc, #4]	@ 000dd168 0149
.org 0xdd16a
	b.n 0xdd192	@ 000dd16a 12e0
.org 0xdd16c
	.byte 0x00,0xf8,0xff,0xff	@ 000dd16c data
.org 0xdd170
	.byte 0x00,0xe0,0xff,0xff	@ 000dd170 data
.org 0xdd174
	movs r2, #128	@ 000dd174 8022
.org 0xdd176
	lsls r2, r2, #4	@ 000dd176 1201
.org 0xdd178
	mov ip, r2	@ 000dd178 9446
.org 0xdd17a
	ldr r0, [r7, #88]	@ 000dd17a b86d
.org 0xdd17c
	ldr r3, [pc, #4]	@ 000dd17c 014b
.org 0xdd17e
	adds r0, r0, r3	@ 000dd17e c018
.org 0xdd180
	str r0, [r7, #88]	@ 000dd180 b865
.org 0xdd182
	b.n 0xdd1e4	@ 000dd182 2fe0
.org 0xdd184
	.byte 0x00,0xf0,0xff,0xff	@ 000dd184 data
.org 0xdd188
	movs r0, #224	@ 000dd188 e020
.org 0xdd18a
	lsls r0, r0, #4	@ 000dd18a 0001
.org 0xdd18c
	mov ip, r0	@ 000dd18c 8446
.org 0xdd18e
	ldr r0, [r7, #88]	@ 000dd18e b86d
.org 0xdd190
	ldr r1, [pc, #4]	@ 000dd190 0149
.org 0xdd192
	adds r0, r0, r1	@ 000dd192 4018
.org 0xdd194
	str r0, [r7, #88]	@ 000dd194 b865
.org 0xdd196
	b.n 0xdd1e4	@ 000dd196 25e0
.org 0xdd198
	.byte 0x00,0xda,0xff,0xff	@ 000dd198 data
.org 0xdd19c
	ldr r0, [r7, #88]	@ 000dd19c b86d
.org 0xdd19e
	ldr r2, [pc, #88]	@ 000dd19e 164a
.org 0xdd1a0
	adds r0, r0, r2	@ 000dd1a0 8018
.org 0xdd1a2
	str r0, [r7, #88]	@ 000dd1a2 b865
.org 0xdd1a4
	ldr r3, [pc, #84]	@ 000dd1a4 154b
.org 0xdd1a6
	mov r8, r3	@ 000dd1a6 9846
.org 0xdd1a8
	ldr r0, [r3, #0]	@ 000dd1a8 1868
.org 0xdd1aa
	ldr r6, [pc, #84]	@ 000dd1aa 154e
.org 0xdd1ac
	adds r1, r0, #0	@ 000dd1ac 011c
.org 0xdd1ae
	muls r1, r6	@ 000dd1ae 7143
.org 0xdd1b0
	ldr r3, [pc, #80]	@ 000dd1b0 144b
.org 0xdd1b2
	adds r1, r1, r3	@ 000dd1b2 c918
.org 0xdd1b4
	lsls r1, r1, #1	@ 000dd1b4 4900
.org 0xdd1b6
	lsrs r5, r1, #1	@ 000dd1b6 4d08
.org 0xdd1b8
	lsrs r1, r1, #17	@ 000dd1b8 490c
.org 0xdd1ba
	movs r4, #31	@ 000dd1ba 1f24
.org 0xdd1bc
	ands r1, r4	@ 000dd1bc 2140
.org 0xdd1be
	movs r0, #16	@ 000dd1be 1020
.org 0xdd1c0
	subs r0, r0, r1	@ 000dd1c0 401a
.org 0xdd1c2
	lsls r0, r0, #8	@ 000dd1c2 0002
.org 0xdd1c4
	mov ip, r0	@ 000dd1c4 8446
.org 0xdd1c6
	ldr r2, [r7, #88]	@ 000dd1c6 ba6d
.org 0xdd1c8
	ldr r0, [pc, #60]	@ 000dd1c8 0f48
.org 0xdd1ca
	adds r2, r2, r0	@ 000dd1ca 1218
.org 0xdd1cc
	adds r0, r5, #0	@ 000dd1cc 281c
.org 0xdd1ce
	muls r0, r6	@ 000dd1ce 7043
.org 0xdd1d0
	adds r0, r0, r3	@ 000dd1d0 c018
.org 0xdd1d2
	lsls r0, r0, #1	@ 000dd1d2 4000
.org 0xdd1d4
	lsrs r1, r0, #1	@ 000dd1d4 4108
.org 0xdd1d6
	mov r3, r8	@ 000dd1d6 4346
.org 0xdd1d8
	str r1, [r3, #0]	@ 000dd1d8 1960
.org 0xdd1da
	lsrs r0, r0, #17	@ 000dd1da 400c
.org 0xdd1dc
	ands r0, r4	@ 000dd1dc 2040
.org 0xdd1de
	lsls r0, r0, #8	@ 000dd1de 0002
.org 0xdd1e0
	adds r2, r2, r0	@ 000dd1e0 1218
.org 0xdd1e2
	str r2, [r7, #88]	@ 000dd1e2 ba65
.org 0xdd1e4
	mov r0, r9	@ 000dd1e4 4846
.org 0xdd1e6
	ldrb r1, [r0, #10]	@ 000dd1e6 817a
.org 0xdd1e8
	movs r0, #16	@ 000dd1e8 1020
.org 0xdd1ea
	ands r0, r1	@ 000dd1ea 0840
.org 0xdd1ec
	cmp r0, #0	@ 000dd1ec 0028
.org 0xdd1ee
	beq.n 0xdd20c	@ 000dd1ee 0dd0
.org 0xdd1f0
	ldr r0, [r7, #84]	@ 000dd1f0 786d
.org 0xdd1f2
	mov r1, ip	@ 000dd1f2 6146
.org 0xdd1f4
	subs r0, r0, r1	@ 000dd1f4 401a
.org 0xdd1f6
	b.n 0xdd210	@ 000dd1f6 0be0
.org 0xdd1f8
	.byte 0x00,0xf6,0xff,0xff	@ 000dd1f8 data
.org 0xdd1fc
	.byte 0x38,0xdc,0x02,0x02	@ 000dd1fc data
.org 0xdd200
	.byte 0xfd,0x43,0x03,0x00	@ 000dd200 data
.org 0xdd204
	.byte 0xc3,0x9e,0x26,0x00	@ 000dd204 data
.org 0xdd208
	.byte 0x00,0xe2,0xff,0xff	@ 000dd208 data
.org 0xdd20c
	ldr r0, [r7, #84]	@ 000dd20c 786d
.org 0xdd20e
	add r0, ip	@ 000dd20e 6044
.org 0xdd210
	str r0, [r7, #84]	@ 000dd210 7865
