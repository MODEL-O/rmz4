@ FUN_0803e0ac  entry 0x0803e0ac  size 214
.thumb
.org 0x3e0ac
FUN_0803e0ac:
	push {r4, r5, lr}	@ 0003e0ac 30b5
.org 0x3e0ae
	adds r4, r0, #0	@ 0003e0ae 041c
.org 0x3e0b0
	adds r0, #180	@ 0003e0b0 b430
.org 0x3e0b2
	ldr r5, [r0, #0]	@ 0003e0b2 0568
.org 0x3e0b4
	ldrb r0, [r4, #13]	@ 0003e0b4 607b
.org 0x3e0b6
	cmp r0, #1	@ 0003e0b6 0128
.org 0x3e0b8
	beq.n 0x3e11c	@ 0003e0b8 30d0
.org 0x3e0ba
	cmp r0, #1	@ 0003e0ba 0128
.org 0x3e0bc
	bgt.n 0x3e0c4	@ 0003e0bc 02dc
.org 0x3e0be
	cmp r0, #0	@ 0003e0be 0028
.org 0x3e0c0
	beq.n 0x3e0ce	@ 0003e0c0 05d0
.org 0x3e0c2
	b.n 0x3e18c	@ 0003e0c2 63e0
.org 0x3e0c4
	cmp r0, #2	@ 0003e0c4 0228
.org 0x3e0c6
	beq.n 0x3e13c	@ 0003e0c6 39d0
.org 0x3e0c8
	cmp r0, #3	@ 0003e0c8 0328
.org 0x3e0ca
	beq.n 0x3e170	@ 0003e0ca 51d0
.org 0x3e0cc
	b.n 0x3e18c	@ 0003e0cc 5ee0
.org 0x3e0ce
	ldr r1, [pc, #44]	@ 0003e0ce 0b49
.org 0x3e0d0
	adds r0, r4, #0	@ 0003e0d0 201c
.org 0x3e0d2
	bl 0x1cf00	@ 0003e0d2 def715ff
.org 0x3e0d6
	adds r2, r5, #0	@ 0003e0d6 2a1c
.org 0x3e0d8
	adds r2, #230	@ 0003e0d8 e632
.org 0x3e0da
	ldrb r0, [r2, #0]	@ 0003e0da 1078
.org 0x3e0dc
	adds r1, r0, #0	@ 0003e0dc 011c
.org 0x3e0de
	cmp r1, #0	@ 0003e0de 0029
.org 0x3e0e0
	beq.n 0x3e100	@ 0003e0e0 0ed0
.org 0x3e0e2
	cmp r1, #255	@ 0003e0e2 ff29
.org 0x3e0e4
	beq.n 0x3e0ea	@ 0003e0e4 01d0
.org 0x3e0e6
	subs r0, #1	@ 0003e0e6 0138
.org 0x3e0e8
	strb r0, [r2, #0]	@ 0003e0e8 1070
.org 0x3e0ea
	adds r0, r5, #0	@ 0003e0ea 281c
.org 0x3e0ec
	adds r1, r4, #0	@ 0003e0ec 211c
.org 0x3e0ee
	bl 0x3f388	@ 0003e0ee 01f04bf9
.org 0x3e0f2
	movs r0, #72	@ 0003e0f2 4820
.org 0x3e0f4
	bl 0x2b10	@ 0003e0f4 c4f70cfd
.org 0x3e0f8
	b.n 0x3e108	@ 0003e0f8 06e0
.org 0x3e0fa
	.byte 0x00	@ 0003e0fa data
.org 0x3e0fb
	.byte 0x00	@ 0003e0fb data
.org 0x3e0fc
	.byte 0x06,0x80,0x00,0x00	@ 0003e0fc data
.org 0x3e100
	ldr r1, [pc, #52]	@ 0003e100 0d49
.org 0x3e102
	adds r0, r4, #0	@ 0003e102 201c
.org 0x3e104
	bl 0x1cf00	@ 0003e104 def7fcfe
.org 0x3e108
	movs r0, #170	@ 0003e108 aa20
.org 0x3e10a
	lsls r0, r0, #1	@ 0003e10a 4000
.org 0x3e10c
	adds r1, r5, r0	@ 0003e10c 2918
.org 0x3e10e
	movs r0, #0	@ 0003e10e 0020
.org 0x3e110
	strb r0, [r1, #0]	@ 0003e110 0870
.org 0x3e112
	movs r0, #2	@ 0003e112 0220
.org 0x3e114
	strb r0, [r4, #18]	@ 0003e114 a074
.org 0x3e116
	ldrb r0, [r4, #13]	@ 0003e116 607b
.org 0x3e118
	adds r0, #1	@ 0003e118 0130
.org 0x3e11a
	strb r0, [r4, #13]	@ 0003e11a 6073
.org 0x3e11c
	ldrb r0, [r4, #18]	@ 0003e11c a07c
.org 0x3e11e
	subs r0, #1	@ 0003e11e 0138
.org 0x3e120
	strb r0, [r4, #18]	@ 0003e120 a074
.org 0x3e122
	lsls r0, r0, #24	@ 0003e122 0006
.org 0x3e124
	cmp r0, #0	@ 0003e124 0028
.org 0x3e126
	bne.n 0x3e18c	@ 0003e126 31d1
.org 0x3e128
	movs r0, #170	@ 0003e128 aa20
.org 0x3e12a
	lsls r0, r0, #1	@ 0003e12a 4000
.org 0x3e12c
	adds r1, r5, r0	@ 0003e12c 2918
.org 0x3e12e
	movs r0, #1	@ 0003e12e 0120
.org 0x3e130
	strb r0, [r1, #0]	@ 0003e130 0870
.org 0x3e132
	movs r0, #32	@ 0003e132 2020
.org 0x3e134
	strb r0, [r4, #18]	@ 0003e134 a074
.org 0x3e136
	b.n 0x3e186	@ 0003e136 26e0
.org 0x3e138
	.byte 0x05,0x80,0x00,0x00	@ 0003e138 data
.org 0x3e13c
	ldrb r0, [r4, #18]	@ 0003e13c a07c
.org 0x3e13e
	subs r0, #1	@ 0003e13e 0138
.org 0x3e140
	strb r0, [r4, #18]	@ 0003e140 a074
.org 0x3e142
	lsls r0, r0, #24	@ 0003e142 0006
.org 0x3e144
	cmp r0, #0	@ 0003e144 0028
.org 0x3e146
	bne.n 0x3e18c	@ 0003e146 21d1
.org 0x3e148
	movs r0, #170	@ 0003e148 aa20
.org 0x3e14a
	lsls r0, r0, #1	@ 0003e14a 4000
.org 0x3e14c
	adds r1, r5, r0	@ 0003e14c 2918
.org 0x3e14e
	movs r0, #3	@ 0003e14e 0320
.org 0x3e150
	strb r0, [r1, #0]	@ 0003e150 0870
.org 0x3e152
	movs r0, #16	@ 0003e152 1020
.org 0x3e154
	strb r0, [r4, #18]	@ 0003e154 a074
.org 0x3e156
	adds r0, r5, #0	@ 0003e156 281c
.org 0x3e158
	adds r0, #230	@ 0003e158 e630
.org 0x3e15a
	ldrb r0, [r0, #0]	@ 0003e15a 0078
.org 0x3e15c
	cmp r0, #0	@ 0003e15c 0028
.org 0x3e15e
	beq.n 0x3e186	@ 0003e15e 12d0
.org 0x3e160
	ldr r1, [pc, #8]	@ 0003e160 0249
.org 0x3e162
	adds r0, r4, #0	@ 0003e162 201c
.org 0x3e164
	bl 0x1cf00	@ 0003e164 def7ccfe
.org 0x3e168
	b.n 0x3e186	@ 0003e168 0de0
.org 0x3e16a
	.byte 0x00	@ 0003e16a data
.org 0x3e16b
	.byte 0x00	@ 0003e16b data
.org 0x3e16c
	.byte 0x07,0x80,0x00,0x00	@ 0003e16c data
.org 0x3e170
	ldrb r0, [r4, #18]	@ 0003e170 a07c
.org 0x3e172
	subs r0, #1	@ 0003e172 0138
.org 0x3e174
	strb r0, [r4, #18]	@ 0003e174 a074
.org 0x3e176
	lsls r0, r0, #24	@ 0003e176 0006
.org 0x3e178
	cmp r0, #0	@ 0003e178 0028
.org 0x3e17a
	bne.n 0x3e18c	@ 0003e17a 07d1
.org 0x3e17c
	movs r0, #170	@ 0003e17c aa20
.org 0x3e17e
	lsls r0, r0, #1	@ 0003e17e 4000
.org 0x3e180
	adds r1, r5, r0	@ 0003e180 2918
