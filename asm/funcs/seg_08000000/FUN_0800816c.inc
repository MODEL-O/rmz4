@ FUN_0800816c  entry 0x0800816c  size 226
.thumb
.org 0x816c
FUN_0800816c:
	push {r4, r5, r6, r7, lr}	@ 0000816c f0b5
.org 0x816e
	mov r7, sl	@ 0000816e 5746
.org 0x8170
	mov r6, r9	@ 00008170 4e46
.org 0x8172
	mov r5, r8	@ 00008172 4546
.org 0x8174
	push {r5, r6, r7}	@ 00008174 e0b4
.org 0x8176
	sub sp, #8	@ 00008176 82b0
.org 0x8178
	adds r4, r0, #0	@ 00008178 041c
.org 0x817a
	mov r8, r1	@ 0000817a 8846
.org 0x817c
	str r4, [sp, #4]	@ 0000817c 0194
.org 0x817e
	ldr r6, [pc, #120]	@ 0000817e 1e4e
.org 0x8180
	movs r1, #232	@ 00008180 e821
.org 0x8182
	lsls r1, r1, #1	@ 00008182 4900
.org 0x8184
	adds r0, r6, r1	@ 00008184 7018
.org 0x8186
	ldrh r0, [r0, #0]	@ 00008186 0088
.org 0x8188
	cmp r0, #4	@ 00008188 0428
.org 0x818a
	bne.n 0x81a2	@ 0000818a 0ad1
.org 0x818c
	ldr r2, [pc, #108]	@ 0000818c 1b4a
.org 0x818e
	adds r0, r4, r2	@ 0000818e a018
.org 0x8190
	movs r1, #240	@ 00008190 f021
.org 0x8192
	lsls r1, r1, #10	@ 00008192 8902
.org 0x8194
	bl 0x129050	@ 00008194 20f15cff
.org 0x8198
	movs r7, #240	@ 00008198 f027
.org 0x819a
	lsls r7, r7, #8	@ 0000819a 3f02
.org 0x819c
	adds r7, r0, r7	@ 0000819c c719
.org 0x819e
	str r7, [sp, #4]	@ 0000819e 0197
.org 0x81a0
	adds r4, r7, #0	@ 000081a0 3c1c
.org 0x81a2
	movs r5, #0	@ 000081a2 0025
.org 0x81a4
	mov r0, r8	@ 000081a4 4046
.org 0x81a6
	asrs r0, r0, #12	@ 000081a6 0013
.org 0x81a8
	mov r9, r0	@ 000081a8 8146
.org 0x81aa
	movs r1, #220	@ 000081aa dc21
.org 0x81ac
	lsls r1, r1, #1	@ 000081ac 4900
.org 0x81ae
	adds r1, r1, r6	@ 000081ae 8919
.org 0x81b0
	mov sl, r1	@ 000081b0 8a46
.org 0x81b2
	movs r2, #252	@ 000081b2 fc22
.org 0x81b4
	lsls r2, r2, #3	@ 000081b4 d200
.org 0x81b6
	adds r3, r6, r2	@ 000081b6 b318
.org 0x81b8
	ldr r6, [pc, #68]	@ 000081b8 114e
.org 0x81ba
	ldrh r0, [r3, #0]	@ 000081ba 1888
.org 0x81bc
	mov r7, r9	@ 000081bc 4f46
.org 0x81be
	muls r7, r0	@ 000081be 4743
.org 0x81c0
	adds r0, r7, #0	@ 000081c0 381c
.org 0x81c2
	asrs r1, r4, #12	@ 000081c2 2113
.org 0x81c4
	adds r0, r0, r1	@ 000081c4 4018
.org 0x81c6
	adds r0, #2	@ 000081c6 0230
.org 0x81c8
	lsls r0, r0, #1	@ 000081c8 4000
.org 0x81ca
	adds r0, r0, r3	@ 000081ca c018
.org 0x81cc
	ldrh r0, [r0, #0]	@ 000081cc 0088
.org 0x81ce
	mov r2, sl	@ 000081ce 5246
.org 0x81d0
	ldr r1, [r2, #0]	@ 000081d0 1168
.org 0x81d2
	lsls r0, r0, #1	@ 000081d2 4000
.org 0x81d4
	adds r0, r0, r1	@ 000081d4 4018
.org 0x81d6
	ldrh r1, [r0, #0]	@ 000081d6 0188
.org 0x81d8
	movs r2, #15	@ 000081d8 0f22
.org 0x81da
	ands r2, r1	@ 000081da 0a40
.org 0x81dc
	cmp r2, #0	@ 000081dc 002a
.org 0x81de
	beq.n 0x823a	@ 000081de 2cd0
.org 0x81e0
	movs r7, #132	@ 000081e0 8427
.org 0x81e2
	lsls r7, r7, #8	@ 000081e2 3f02
.org 0x81e4
	adds r0, r7, #0	@ 000081e4 381c
.org 0x81e6
	ands r1, r0	@ 000081e6 0140
.org 0x81e8
	cmp r1, #0	@ 000081e8 0029
.org 0x81ea
	bne.n 0x823a	@ 000081ea 26d1
.org 0x81ec
	cmp r2, #1	@ 000081ec 012a
.org 0x81ee
	bne.n 0x8208	@ 000081ee 0bd1
.org 0x81f0
	ldr r0, [pc, #16]	@ 000081f0 0448
.org 0x81f2
	ands r0, r4	@ 000081f2 2040
.org 0x81f4
	subs r4, r0, #1	@ 000081f4 441e
.org 0x81f6
	b.n 0x8234	@ 000081f6 1de0
.org 0x81f8
	.byte 0xb0,0x0a,0x00,0x02	@ 000081f8 data
.org 0x81fc
	.byte 0x00,0x10,0xff,0xff	@ 000081fc data
.org 0x8200
	.byte 0xff,0x0f,0x00,0x00	@ 00008200 data
.org 0x8204
	.byte 0x00,0xf0,0xff,0xff	@ 00008204 data
.org 0x8208
	ldr r1, [pc, #64]	@ 00008208 1049
.org 0x820a
	lsls r0, r2, #2	@ 0000820a 9000
.org 0x820c
	adds r0, r0, r1	@ 0000820c 4018
.org 0x820e
	adds r1, r4, #0	@ 0000820e 211c
.org 0x8210
	ands r1, r6	@ 00008210 3140
.org 0x8212
	ldr r2, [r0, #0]	@ 00008212 0268
.org 0x8214
	mov r0, r8	@ 00008214 4046
.org 0x8216
	ands r0, r6	@ 00008216 3040
.org 0x8218
	str r3, [sp, #0]	@ 00008218 0093
.org 0x821a
	bl 0x128f84	@ 0000821a 20f1b3fe
.org 0x821e
	ldr r3, [sp, #0]	@ 0000821e 009b
.org 0x8220
	cmp r0, #0	@ 00008220 0028
.org 0x8222
	beq.n 0x823a	@ 00008222 0ad0
.org 0x8224
	adds r1, r4, #0	@ 00008224 211c
.org 0x8226
	adds r4, r4, r0	@ 00008226 2418
.org 0x8228
	eors r1, r4	@ 00008228 6140
.org 0x822a
	movs r0, #128	@ 0000822a 8020
.org 0x822c
	lsls r0, r0, #5	@ 0000822c 4001
.org 0x822e
	ands r1, r0	@ 0000822e 0140
.org 0x8230
	cmp r1, #0	@ 00008230 0029
.org 0x8232
	beq.n 0x823a	@ 00008232 02d0
.org 0x8234
	adds r5, #1	@ 00008234 0135
.org 0x8236
	cmp r5, #15	@ 00008236 0f2d
.org 0x8238
	ble.n 0x81ba	@ 00008238 bfdd
.org 0x823a
	cmp r5, #15	@ 0000823a 0f2d
.org 0x823c
	bgt.n 0x8250	@ 0000823c 08dc
.org 0x823e
	adds r0, r4, #0	@ 0000823e 201c
.org 0x8240
	mov r1, r8	@ 00008240 4146
.org 0x8242
	bl 0x9544	@ 00008242 01f07ff9
.org 0x8246
	ldr r1, [sp, #4]	@ 00008246 0199
.org 0x8248
	subs r0, r0, r1	@ 00008248 401a
.org 0x824a
	b.n 0x8252	@ 0000824a 02e0
.org 0x824c
	.byte 0x54,0xb1,0x82,0x08	@ 0000824c data
