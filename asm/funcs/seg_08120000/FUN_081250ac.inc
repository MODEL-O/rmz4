@ FUN_081250ac  entry 0x081250ac  size 246
.thumb
.org 0x1250ac
FUN_081250ac:
	push {r4, r5, lr}	@ 001250ac 30b5
.org 0x1250ae
	sub sp, #8	@ 001250ae 82b0
.org 0x1250b0
	adds r5, r0, #0	@ 001250b0 051c
.org 0x1250b2
	ldr r0, [pc, #20]	@ 001250b2 0548
.org 0x1250b4
	adds r4, r5, r0	@ 001250b4 2c18
.org 0x1250b6
	ldrb r1, [r4, #25]	@ 001250b6 617e
.org 0x1250b8
	cmp r1, #1	@ 001250b8 0129
.org 0x1250ba
	beq.n 0x1250e2	@ 001250ba 12d0
.org 0x1250bc
	cmp r1, #1	@ 001250bc 0129
.org 0x1250be
	bgt.n 0x1250cc	@ 001250be 05dc
.org 0x1250c0
	cmp r1, #0	@ 001250c0 0029
.org 0x1250c2
	beq.n 0x1250d6	@ 001250c2 08d0
.org 0x1250c4
	b.n 0x125192	@ 001250c4 65e0
.org 0x1250c6
	.byte 0x00	@ 001250c6 data
.org 0x1250c7
	.byte 0x00	@ 001250c7 data
.org 0x1250c8
	.byte 0xcc,0x0d,0x00,0x00	@ 001250c8 data
.org 0x1250cc
	cmp r1, #2	@ 001250cc 0229
.org 0x1250ce
	beq.n 0x125100	@ 001250ce 17d0
.org 0x1250d0
	cmp r1, #3	@ 001250d0 0329
.org 0x1250d2
	beq.n 0x12511c	@ 001250d2 23d0
.org 0x1250d4
	b.n 0x125192	@ 001250d4 5de0
.org 0x1250d6
	movs r0, #60	@ 001250d6 3c20
.org 0x1250d8
	strb r0, [r4, #28]	@ 001250d8 2077
.org 0x1250da
	str r1, [r4, #36]	@ 001250da 6162
.org 0x1250dc
	ldrb r0, [r4, #25]	@ 001250dc 607e
.org 0x1250de
	adds r0, #1	@ 001250de 0130
.org 0x1250e0
	strb r0, [r4, #25]	@ 001250e0 6076
.org 0x1250e2
	ldr r0, [pc, #24]	@ 001250e2 0648
.org 0x1250e4
	adds r1, r5, r0	@ 001250e4 2918
.org 0x1250e6
	ldrb r0, [r1, #28]	@ 001250e6 087f
.org 0x1250e8
	subs r0, #1	@ 001250e8 0138
.org 0x1250ea
	strb r0, [r1, #28]	@ 001250ea 0877
.org 0x1250ec
	lsls r0, r0, #24	@ 001250ec 0006
.org 0x1250ee
	lsrs r0, r0, #24	@ 001250ee 000e
.org 0x1250f0
	cmp r0, #255	@ 001250f0 ff28
.org 0x1250f2
	bne.n 0x125192	@ 001250f2 4ed1
.org 0x1250f4
	ldrb r0, [r1, #25]	@ 001250f4 487e
.org 0x1250f6
	adds r0, #1	@ 001250f6 0130
.org 0x1250f8
	strb r0, [r1, #25]	@ 001250f8 4876
.org 0x1250fa
	b.n 0x125192	@ 001250fa 4ae0
.org 0x1250fc
	.byte 0xcc,0x0d,0x00,0x00	@ 001250fc data
.org 0x125100
	movs r0, #0	@ 00125100 0020
.org 0x125102
	bl 0xd3ebc	@ 00125102 aef7dbfe
.org 0x125106
	str r0, [r4, #4]	@ 00125106 6060
.org 0x125108
	movs r0, #30	@ 00125108 1e20
.org 0x12510a
	bl 0x2b10	@ 0012510a ddf601fd
.org 0x12510e
	movs r0, #163	@ 0012510e a320
.org 0x125110
	bl 0x2b10	@ 00125110 ddf6fefc
.org 0x125114
	ldrb r0, [r4, #25]	@ 00125114 607e
.org 0x125116
	adds r0, #1	@ 00125116 0130
.org 0x125118
	strb r0, [r4, #25]	@ 00125118 6076
.org 0x12511a
	b.n 0x125192	@ 0012511a 3ae0
.org 0x12511c
	ldr r0, [r4, #4]	@ 0012511c 6068
.org 0x12511e
	ldrb r0, [r0, #12]	@ 0012511e 007b
.org 0x125120
	cmp r0, #1	@ 00125120 0128
.org 0x125122
	bls.n 0x125192	@ 00125122 36d9
.org 0x125124
	ldrb r0, [r4, #24]	@ 00125124 207e
.org 0x125126
	adds r0, #1	@ 00125126 0130
.org 0x125128
	movs r1, #0	@ 00125128 0021
.org 0x12512a
	strb r0, [r4, #24]	@ 0012512a 2076
.org 0x12512c
	strb r1, [r4, #25]	@ 0012512c 6176
.org 0x12512e
	movs r0, #1	@ 0012512e 0120
.org 0x125130
	str r0, [r4, #36]	@ 00125130 6062
.org 0x125132
	ldr r0, [pc, #120]	@ 00125132 1e48
.org 0x125134
	adds r1, r5, r0	@ 00125134 2918
.org 0x125136
	ldr r0, [r1, #0]	@ 00125136 0868
.org 0x125138
	str r0, [sp, #0]	@ 00125138 0090
.org 0x12513a
	ldr r0, [r1, #4]	@ 0012513a 4868
.org 0x12513c
	movs r1, #192	@ 0012513c c021
.org 0x12513e
	lsls r1, r1, #6	@ 0012513e 8901
.org 0x125140
	adds r0, r0, r1	@ 00125140 4018
.org 0x125142
	str r0, [sp, #4]	@ 00125142 0190
.org 0x125144
	mov r0, sp	@ 00125144 6846
.org 0x125146
	movs r1, #0	@ 00125146 0021
.org 0x125148
	adds r2, r5, #0	@ 00125148 2a1c
.org 0x12514a
	bl 0x104c9c	@ 0012514a dff7a7fd
.org 0x12514e
	ldr r0, [sp, #0]	@ 0012514e 0098
.org 0x125150
	ldr r1, [pc, #92]	@ 00125150 1749
.org 0x125152
	adds r0, r0, r1	@ 00125152 4018
.org 0x125154
	str r0, [sp, #0]	@ 00125154 0090
.org 0x125156
	ldr r0, [sp, #4]	@ 00125156 0198
.org 0x125158
	movs r1, #128	@ 00125158 8021
.org 0x12515a
	lsls r1, r1, #5	@ 0012515a 4901
.org 0x12515c
	adds r0, r0, r1	@ 0012515c 4018
.org 0x12515e
	str r0, [sp, #4]	@ 0012515e 0190
.org 0x125160
	movs r4, #1	@ 00125160 0124
.org 0x125162
	ldr r0, [sp, #0]	@ 00125162 0098
.org 0x125164
	movs r1, #128	@ 00125164 8021
.org 0x125166
	lsls r1, r1, #5	@ 00125166 4901
.org 0x125168
	adds r0, r0, r1	@ 00125168 4018
.org 0x12516a
	str r0, [sp, #0]	@ 0012516a 0090
.org 0x12516c
	lsls r1, r4, #8	@ 0012516c 2102
.org 0x12516e
	mov r0, sp	@ 0012516e 6846
.org 0x125170
	adds r2, r5, #0	@ 00125170 2a1c
.org 0x125172
	bl 0x104c9c	@ 00125172 dff793fd
.org 0x125176
	cmp r4, #2	@ 00125176 022c
.org 0x125178
	beq.n 0x12517e	@ 00125178 01d0
.org 0x12517a
	cmp r4, #5	@ 0012517a 052c
.org 0x12517c
	bne.n 0x125188	@ 0012517c 04d1
.org 0x12517e
	ldr r0, [sp, #0]	@ 0012517e 0098
.org 0x125180
	movs r1, #192	@ 00125180 c021
.org 0x125182
	lsls r1, r1, #6	@ 00125182 8901
.org 0x125184
	adds r0, r0, r1	@ 00125184 4018
.org 0x125186
	str r0, [sp, #0]	@ 00125186 0090
.org 0x125188
	adds r0, r4, #1	@ 00125188 601c
.org 0x12518a
	lsls r0, r0, #24	@ 0012518a 0006
.org 0x12518c
	lsrs r4, r0, #24	@ 0012518c 040e
.org 0x12518e
	cmp r4, #7	@ 0012518e 072c
.org 0x125190
	bls.n 0x125162	@ 00125190 e7d9
.org 0x125192
	ldr r1, [pc, #32]	@ 00125192 0849
.org 0x125194
	adds r0, r5, r1	@ 00125194 6818
.org 0x125196
	ldr r0, [r0, #0]	@ 00125196 0068
.org 0x125198
	movs r1, #149	@ 00125198 9521
.org 0x12519a
	lsls r1, r1, #2	@ 0012519a 8900
.org 0x12519c
	adds r0, r0, r1	@ 0012519c 4018
.org 0x12519e
	movs r1, #1	@ 0012519e 0121
.org 0x1251a0
	strb r1, [r0, #0]	@ 001251a0 0170
