@ FUN_080e8110  entry 0x080e8110  size 142
.thumb
.org 0xe8110
FUN_080e8110:
	push {r4, lr}	@ 000e8110 10b5
.org 0xe8112
	adds r4, r0, #0	@ 000e8112 041c
.org 0xe8114
	ldr r0, [pc, #136]	@ 000e8114 2248
.org 0xe8116
	adds r1, r0, #0	@ 000e8116 011c
.org 0xe8118
	ldrb r2, [r4, #17]	@ 000e8118 627c
.org 0xe811a
	adds r1, r1, r2	@ 000e811a 8918
.org 0xe811c
	lsls r1, r1, #16	@ 000e811c 0904
.org 0xe811e
	lsrs r1, r1, #16	@ 000e811e 090c
.org 0xe8120
	adds r0, r4, #0	@ 000e8120 201c
.org 0xe8122
	bl 0x1cf00	@ 000e8122 34f7edfe
.org 0xe8126
	ldr r2, [pc, #124]	@ 000e8126 1f4a
.org 0xe8128
	adds r0, r2, #0	@ 000e8128 101c
.org 0xe812a
	adds r0, #236	@ 000e812a ec30
.org 0xe812c
	movs r3, #0	@ 000e812c 0023
.org 0xe812e
	ldrsh r1, [r0, r3]	@ 000e812e c15e
.org 0xe8130
	lsls r0, r1, #1	@ 000e8130 4800
.org 0xe8132
	adds r0, r0, r1	@ 000e8132 4018
.org 0xe8134
	lsls r0, r0, #7	@ 000e8134 c001
.org 0xe8136
	cmp r0, #0	@ 000e8136 0028
.org 0xe8138
	bge.n 0xe813c	@ 000e8138 00da
.org 0xe813a
	adds r0, #255	@ 000e813a ff30
.org 0xe813c
	asrs r3, r0, #8	@ 000e813c 0312
.org 0xe813e
	str r3, [r4, #92]	@ 000e813e e365
.org 0xe8140
	adds r0, r2, #0	@ 000e8140 101c
.org 0xe8142
	adds r0, #108	@ 000e8142 6c30
.org 0xe8144
	movs r2, #0	@ 000e8144 0022
.org 0xe8146
	ldrsh r1, [r0, r2]	@ 000e8146 815e
.org 0xe8148
	lsls r0, r1, #1	@ 000e8148 4800
.org 0xe814a
	adds r0, r0, r1	@ 000e814a 4018
.org 0xe814c
	lsls r0, r0, #7	@ 000e814c c001
.org 0xe814e
	cmp r0, #0	@ 000e814e 0028
.org 0xe8150
	bge.n 0xe8154	@ 000e8150 00da
.org 0xe8152
	adds r0, #255	@ 000e8152 ff30
.org 0xe8154
	asrs r0, r0, #8	@ 000e8154 0012
.org 0xe8156
	str r0, [r4, #96]	@ 000e8156 2066
.org 0xe8158
	lsls r0, r0, #8	@ 000e8158 0002
.org 0xe815a
	negs r0, r0	@ 000e815a 4042
.org 0xe815c
	cmp r0, #0	@ 000e815c 0028
.org 0xe815e
	bge.n 0xe8162	@ 000e815e 00da
.org 0xe8160
	adds r0, #255	@ 000e8160 ff30
.org 0xe8162
	asrs r0, r0, #8	@ 000e8162 0012
.org 0xe8164
	str r0, [r4, #96]	@ 000e8164 2066
.org 0xe8166
	ldrb r0, [r4, #17]	@ 000e8166 607c
.org 0xe8168
	cmp r0, #0	@ 000e8168 0028
.org 0xe816a
	bne.n 0xe817a	@ 000e816a 06d1
.org 0xe816c
	lsls r0, r3, #8	@ 000e816c 1802
.org 0xe816e
	negs r0, r0	@ 000e816e 4042
.org 0xe8170
	cmp r0, #0	@ 000e8170 0028
.org 0xe8172
	bge.n 0xe8176	@ 000e8172 00da
.org 0xe8174
	adds r0, #255	@ 000e8174 ff30
.org 0xe8176
	asrs r0, r0, #8	@ 000e8176 0012
.org 0xe8178
	str r0, [r4, #92]	@ 000e8178 e065
.org 0xe817a
	ldrb r1, [r4, #10]	@ 000e817a a17a
.org 0xe817c
	movs r0, #16	@ 000e817c 1020
.org 0xe817e
	ands r0, r1	@ 000e817e 0840
.org 0xe8180
	cmp r0, #0	@ 000e8180 0028
.org 0xe8182
	beq.n 0xe8194	@ 000e8182 07d0
.org 0xe8184
	ldr r0, [r4, #92]	@ 000e8184 e06d
.org 0xe8186
	lsls r0, r0, #8	@ 000e8186 0002
.org 0xe8188
	negs r0, r0	@ 000e8188 4042
.org 0xe818a
	cmp r0, #0	@ 000e818a 0028
.org 0xe818c
	bge.n 0xe8190	@ 000e818c 00da
.org 0xe818e
	adds r0, #255	@ 000e818e ff30
.org 0xe8190
	asrs r0, r0, #8	@ 000e8190 0012
.org 0xe8192
	str r0, [r4, #92]	@ 000e8192 e065
.org 0xe8194
	movs r0, #3	@ 000e8194 0320
.org 0xe8196
	strb r0, [r4, #13]	@ 000e8196 6073
.org 0xe8198
	pop {r4}	@ 000e8198 10bc
.org 0xe819a
	pop {r0}	@ 000e819a 01bc
.org 0xe819c
	bx r0	@ 000e819c 0047
