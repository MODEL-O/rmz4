@ FUN_08049170  entry 0x08049170  size 134
.thumb
.org 0x49170
FUN_08049170:
	push {r4, r5, lr}	@ 00049170 30b5
.org 0x49172
	adds r2, r0, #0	@ 00049172 021c
.org 0x49174
	ldr r0, [r2, #44]	@ 00049174 d06a
.org 0x49176
	ldrb r3, [r2, #16]	@ 00049176 137c
.org 0x49178
	cmp r3, #0	@ 00049178 002b
.org 0x4917a
	bne.n 0x491f0	@ 0004917a 39d1
.org 0x4917c
	adds r5, r0, #0	@ 0004917c 051c
.org 0x4917e
	adds r5, #180	@ 0004917e b435
.org 0x49180
	movs r1, #173	@ 00049180 ad21
.org 0x49182
	lsls r1, r1, #1	@ 00049182 4900
.org 0x49184
	adds r0, r0, r1	@ 00049184 4018
.org 0x49186
	ldrh r1, [r0, #0]	@ 00049186 0188
.org 0x49188
	movs r0, #8	@ 00049188 0820
.org 0x4918a
	ands r0, r1	@ 0004918a 0840
.org 0x4918c
	lsls r0, r0, #16	@ 0004918c 0004
.org 0x4918e
	lsrs r4, r0, #16	@ 0004918e 040c
.org 0x49190
	cmp r4, #0	@ 00049190 002c
.org 0x49192
	beq.n 0x491b0	@ 00049192 0dd0
.org 0x49194
	ldrb r1, [r2, #10]	@ 00049194 917a
.org 0x49196
	movs r0, #254	@ 00049196 fe20
.org 0x49198
	ands r0, r1	@ 00049198 0840
.org 0x4919a
	movs r1, #253	@ 0004919a fd21
.org 0x4919c
	ands r0, r1	@ 0004919c 0840
.org 0x4919e
	strb r0, [r2, #10]	@ 0004919e 9072
.org 0x491a0
	adds r0, r2, #0	@ 000491a0 101c
.org 0x491a2
	adds r0, #140	@ 000491a2 8c30
.org 0x491a4
	str r3, [r0, #0]	@ 000491a4 0360
.org 0x491a6
	adds r0, #4	@ 000491a6 0430
.org 0x491a8
	str r3, [r0, #0]	@ 000491a8 0360
.org 0x491aa
	adds r0, #4	@ 000491aa 0430
.org 0x491ac
	strb r3, [r0, #0]	@ 000491ac 0370
.org 0x491ae
	b.n 0x491d6	@ 000491ae 12e0
.org 0x491b0
	ldrb r0, [r5, #12]	@ 000491b0 287b
.org 0x491b2
	cmp r0, #1	@ 000491b2 0128
.org 0x491b4
	bhi.n 0x491f0	@ 000491b4 1cd8
.org 0x491b6
	ldrb r0, [r5, #13]	@ 000491b6 687b
.org 0x491b8
	cmp r0, #1	@ 000491b8 0128
.org 0x491ba
	bhi.n 0x491f0	@ 000491ba 19d8
.org 0x491bc
	ldrb r1, [r2, #10]	@ 000491bc 917a
.org 0x491be
	movs r0, #254	@ 000491be fe20
.org 0x491c0
	ands r0, r1	@ 000491c0 0840
.org 0x491c2
	movs r1, #253	@ 000491c2 fd21
.org 0x491c4
	ands r0, r1	@ 000491c4 0840
.org 0x491c6
	strb r0, [r2, #10]	@ 000491c6 9072
.org 0x491c8
	adds r0, r2, #0	@ 000491c8 101c
.org 0x491ca
	adds r0, #140	@ 000491ca 8c30
.org 0x491cc
	str r4, [r0, #0]	@ 000491cc 0460
.org 0x491ce
	adds r0, #4	@ 000491ce 0430
.org 0x491d0
	str r4, [r0, #0]	@ 000491d0 0460
.org 0x491d2
	adds r0, #4	@ 000491d2 0430
.org 0x491d4
	strb r4, [r0, #0]	@ 000491d4 0470
.org 0x491d6
	ldrb r1, [r2, #10]	@ 000491d6 917a
.org 0x491d8
	movs r0, #251	@ 000491d8 fb20
.org 0x491da
	ands r0, r1	@ 000491da 0840
.org 0x491dc
	strb r0, [r2, #10]	@ 000491dc 9072
.org 0x491de
	ldr r1, [pc, #24]	@ 000491de 0649
.org 0x491e0
	ldrb r0, [r2, #9]	@ 000491e0 507a
.org 0x491e2
	lsls r0, r0, #2	@ 000491e2 8000
.org 0x491e4
	adds r0, r0, r1	@ 000491e4 4018
.org 0x491e6
	movs r1, #3	@ 000491e6 0321
.org 0x491e8
	str r1, [r2, #12]	@ 000491e8 d160
.org 0x491ea
	ldr r0, [r0, #0]	@ 000491ea 0068
.org 0x491ec
	ldr r0, [r0, #12]	@ 000491ec c068
.org 0x491ee
	str r0, [r2, #20]	@ 000491ee 5061
.org 0x491f0
	pop {r4, r5}	@ 000491f0 30bc
.org 0x491f2
	pop {r0}	@ 000491f2 01bc
.org 0x491f4
	bx r0	@ 000491f4 0047
