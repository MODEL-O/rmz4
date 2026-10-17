@ FUN_08098150  entry 0x08098150  size 220
.thumb
.org 0x98150
FUN_08098150:
	push {r4, r5, r6, lr}	@ 00098150 70b5
.org 0x98152
	sub sp, #8	@ 00098152 82b0
.org 0x98154
	adds r6, r0, #0	@ 00098154 061c
.org 0x98156
	ldrb r4, [r6, #15]	@ 00098156 f47b
.org 0x98158
	cmp r4, #0	@ 00098158 002c
.org 0x9815a
	bne.n 0x9816e	@ 0009815a 08d1
.org 0x9815c
	ldr r1, [pc, #204]	@ 0009815c 3349
.org 0x9815e
	bl 0x1cf00	@ 0009815e 84f7cffe
.org 0x98162
	str r4, [r6, #96]	@ 00098162 3466
.org 0x98164
	movs r0, #32	@ 00098164 2020
.org 0x98166
	strb r0, [r6, #18]	@ 00098166 b074
.org 0x98168
	ldrb r0, [r6, #15]	@ 00098168 f07b
.org 0x9816a
	adds r0, #1	@ 0009816a 0130
.org 0x9816c
	strb r0, [r6, #15]	@ 0009816c f073
.org 0x9816e
	adds r0, r6, #0	@ 0009816e 301c
.org 0x98170
	bl 0x1cff0	@ 00098170 84f73eff
.org 0x98174
	ldr r1, [r6, #88]	@ 00098174 b16d
.org 0x98176
	ldr r0, [r6, #96]	@ 00098176 306e
.org 0x98178
	adds r1, r1, r0	@ 00098178 0918
.org 0x9817a
	str r1, [r6, #88]	@ 0009817a b165
.org 0x9817c
	adds r0, #64	@ 0009817c 4030
.org 0x9817e
	str r0, [r6, #96]	@ 0009817e 3066
.org 0x98180
	ldrb r0, [r6, #18]	@ 00098180 b07c
.org 0x98182
	subs r0, #1	@ 00098182 0138
.org 0x98184
	strb r0, [r6, #18]	@ 00098184 b074
.org 0x98186
	lsls r0, r0, #24	@ 00098186 0006
.org 0x98188
	lsrs r0, r0, #24	@ 00098188 000e
.org 0x9818a
	cmp r0, #255	@ 0009818a ff28
.org 0x9818c
	beq.n 0x9819a	@ 0009818c 05d0
.org 0x9818e
	ldr r0, [r6, #84]	@ 0009818e 706d
.org 0x98190
	bl 0x7c7c	@ 00098190 6ff774fd
.org 0x98194
	lsls r0, r0, #16	@ 00098194 0004
.org 0x98196
	cmp r0, #0	@ 00098196 0028
.org 0x98198
	beq.n 0x98224	@ 00098198 44d0
.org 0x9819a
	ldr r0, [r6, #84]	@ 0009819a 706d
.org 0x9819c
	str r0, [sp, #0]	@ 0009819c 0090
.org 0x9819e
	ldr r0, [r6, #88]	@ 0009819e b06d
.org 0x981a0
	str r0, [sp, #4]	@ 000981a0 0190
.org 0x981a2
	ldr r4, [pc, #140]	@ 000981a2 234c
.org 0x981a4
	adds r5, r6, #0	@ 000981a4 351c
.org 0x981a6
	adds r5, #188	@ 000981a6 bc35
.org 0x981a8
	ldrb r3, [r5, #0]	@ 000981a8 2b78
.org 0x981aa
	mov r0, sp	@ 000981aa 6846
.org 0x981ac
	adds r1, r4, #0	@ 000981ac 211c
.org 0x981ae
	movs r2, #0	@ 000981ae 0022
.org 0x981b0
	bl 0xd4c8c	@ 000981b0 3cf06cfd
.org 0x981b4
	ldrb r0, [r5, #0]	@ 000981b4 2878
.org 0x981b6
	movs r3, #16	@ 000981b6 1023
.org 0x981b8
	orrs r3, r0	@ 000981b8 0343
.org 0x981ba
	mov r0, sp	@ 000981ba 6846
.org 0x981bc
	adds r1, r4, #0	@ 000981bc 211c
.org 0x981be
	movs r2, #0	@ 000981be 0022
.org 0x981c0
	bl 0xd4c8c	@ 000981c0 3cf064fd
.org 0x981c4
	adds r1, r4, #0	@ 000981c4 211c
.org 0x981c6
	adds r1, #28	@ 000981c6 1c31
.org 0x981c8
	ldrb r3, [r5, #0]	@ 000981c8 2b78
.org 0x981ca
	mov r0, sp	@ 000981ca 6846
.org 0x981cc
	movs r2, #0	@ 000981cc 0022
.org 0x981ce
	bl 0xd4c8c	@ 000981ce 3cf05dfd
.org 0x981d2
	adds r4, #56	@ 000981d2 3834
.org 0x981d4
	ldrb r3, [r5, #0]	@ 000981d4 2b78
.org 0x981d6
	mov r0, sp	@ 000981d6 6846
.org 0x981d8
	adds r1, r4, #0	@ 000981d8 211c
.org 0x981da
	movs r2, #0	@ 000981da 0022
.org 0x981dc
	bl 0xd4c8c	@ 000981dc 3cf056fd
.org 0x981e0
	movs r0, #1	@ 000981e0 0120
.org 0x981e2
	mov r1, sp	@ 000981e2 6946
.org 0x981e4
	bl 0xd0c88	@ 000981e4 38f050fd
.org 0x981e8
	movs r0, #42	@ 000981e8 2a20
.org 0x981ea
	bl 0x2b10	@ 000981ea 6af791fc
.org 0x981ee
	adds r4, r6, #0	@ 000981ee 341c
.org 0x981f0
	adds r4, #84	@ 000981f0 5434
.org 0x981f2
	movs r0, #2	@ 000981f2 0220
.org 0x981f4
	movs r1, #50	@ 000981f4 3221
.org 0x981f6
	adds r2, r4, #0	@ 000981f6 221c
.org 0x981f8
	bl 0x2ab88	@ 000981f8 92f7c6fc
.org 0x981fc
	ldr r2, [pc, #52]	@ 000981fc 0d4a
.org 0x981fe
	ldrh r1, [r2, #12]	@ 000981fe 9189
.org 0x98200
	ldr r0, [pc, #52]	@ 00098200 0d48
.org 0x98202
	cmp r1, r0	@ 00098202 8142
.org 0x98204
	bhi.n 0x9820a	@ 00098204 01d8
.org 0x98206
	adds r0, r1, #1	@ 00098206 481c
.org 0x98208
	strh r0, [r2, #12]	@ 00098208 9081
.org 0x9820a
	adds r0, r6, #0	@ 0009820a 301c
.org 0x9820c
	adds r1, r4, #0	@ 0009820c 211c
.org 0x9820e
	bl 0x2abe0	@ 0009820e 92f7e7fc
.org 0x98212
	ldr r1, [pc, #40]	@ 00098212 0a49
.org 0x98214
	ldrb r0, [r6, #9]	@ 00098214 707a
.org 0x98216
	lsls r0, r0, #2	@ 00098216 8000
.org 0x98218
	adds r0, r0, r1	@ 00098218 4018
.org 0x9821a
	movs r1, #4	@ 0009821a 0421
.org 0x9821c
	str r1, [r6, #12]	@ 0009821c f160
.org 0x9821e
	ldr r0, [r0, #0]	@ 0009821e 0068
.org 0x98220
	ldr r0, [r0, #16]	@ 00098220 0069
.org 0x98222
	str r0, [r6, #20]	@ 00098222 7061
.org 0x98224
	add sp, #8	@ 00098224 02b0
.org 0x98226
	pop {r4, r5, r6}	@ 00098226 70bc
.org 0x98228
	pop {r0}	@ 00098228 01bc
.org 0x9822a
	bx r0	@ 0009822a 0047
