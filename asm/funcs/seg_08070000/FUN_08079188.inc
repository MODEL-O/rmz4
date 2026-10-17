@ FUN_08079188  entry 0x08079188  size 200
.thumb
.org 0x79188
FUN_08079188:
	push {r4, r5, r6, r7, lr}	@ 00079188 f0b5
.org 0x7918a
	sub sp, #8	@ 0007918a 82b0
.org 0x7918c
	adds r5, r0, #0	@ 0007918c 051c
.org 0x7918e
	ldr r1, [pc, #40]	@ 0007918e 0a49
.org 0x79190
	mov r0, sp	@ 00079190 6846
.org 0x79192
	movs r2, #4	@ 00079192 0422
.org 0x79194
	bl 0x129258	@ 00079194 b0f060f8
.org 0x79198
	add r4, sp, #4	@ 00079198 01ac
.org 0x7919a
	ldr r1, [pc, #32]	@ 0007919a 0849
.org 0x7919c
	adds r0, r4, #0	@ 0007919c 201c
.org 0x7919e
	movs r2, #4	@ 0007919e 0422
.org 0x791a0
	bl 0x129258	@ 000791a0 b0f05af8
.org 0x791a4
	ldr r0, [pc, #24]	@ 000791a4 0648
.org 0x791a6
	ldrh r1, [r0, #8]	@ 000791a6 0189
.org 0x791a8
	movs r0, #8	@ 000791a8 0820
.org 0x791aa
	ands r0, r1	@ 000791aa 0840
.org 0x791ac
	adds r3, r4, #0	@ 000791ac 231c
.org 0x791ae
	cmp r0, #0	@ 000791ae 0028
.org 0x791b0
	beq.n 0x791c4	@ 000791b0 08d0
.org 0x791b2
	movs r0, #0	@ 000791b2 0020
.org 0x791b4
	strb r0, [r5, #13]	@ 000791b4 6873
.org 0x791b6
	b.n 0x79224	@ 000791b6 35e0
.org 0x791b8
	.byte 0xe4,0x99,0x12,0x08	@ 000791b8 data
.org 0x791bc
	.byte 0xec,0x99,0x12,0x08	@ 000791bc data
.org 0x791c0
	.byte 0x10,0xe9,0x02,0x02	@ 000791c0 data
.org 0x791c4
	adds r0, r5, #0	@ 000791c4 281c
.org 0x791c6
	adds r0, #183	@ 000791c6 b730
.org 0x791c8
	ldrb r1, [r0, #0]	@ 000791c8 0178
.org 0x791ca
	adds r6, r0, #0	@ 000791ca 061c
.org 0x791cc
	ldr r4, [pc, #20]	@ 000791cc 054c
.org 0x791ce
	cmp r1, #1	@ 000791ce 0129
.org 0x791d0
	bls.n 0x791fe	@ 000791d0 15d9
.org 0x791d2
	subs r0, #1	@ 000791d2 0138
.org 0x791d4
	ldrb r2, [r0, #0]	@ 000791d4 0278
.org 0x791d6
	movs r1, #0	@ 000791d6 0021
.org 0x791d8
	mov r0, sp	@ 000791d8 6846
.org 0x791da
	ldrb r0, [r0, #0]	@ 000791da 0078
.org 0x791dc
	cmp r0, r2	@ 000791dc 9042
.org 0x791de
	bne.n 0x791e8	@ 000791de 03d1
.org 0x791e0
	strb r1, [r3, #0]	@ 000791e0 1970
.org 0x791e2
	b.n 0x791fe	@ 000791e2 0ce0
.org 0x791e4
	.byte 0xe0,0xe8,0x02,0x02	@ 000791e4 data
.org 0x791e8
	adds r1, #1	@ 000791e8 0131
.org 0x791ea
	cmp r1, #3	@ 000791ea 0329
.org 0x791ec
	bgt.n 0x791fe	@ 000791ec 07dc
.org 0x791ee
	mov r7, sp	@ 000791ee 6f46
.org 0x791f0
	adds r0, r7, r1	@ 000791f0 7818
.org 0x791f2
	ldrb r0, [r0, #0]	@ 000791f2 0078
.org 0x791f4
	cmp r0, r2	@ 000791f4 9042
.org 0x791f6
	bne.n 0x791e8	@ 000791f6 f7d1
.org 0x791f8
	adds r1, r3, r1	@ 000791f8 5918
.org 0x791fa
	movs r0, #0	@ 000791fa 0020
.org 0x791fc
	strb r0, [r1, #0]	@ 000791fc 0870
.org 0x791fe
	ldr r0, [r4, #0]	@ 000791fe 2068
.org 0x79200
	ldrb r0, [r0, #1]	@ 00079200 4078
.org 0x79202
	cmp r0, #4	@ 00079202 0428
.org 0x79204
	bls.n 0x79216	@ 00079204 07d9
.org 0x79206
	ldr r0, [pc, #36]	@ 00079206 0948
.org 0x79208
	ldrb r1, [r0, #4]	@ 00079208 0179
.org 0x7920a
	movs r0, #4	@ 0007920a 0420
.org 0x7920c
	ands r0, r1	@ 0007920c 0840
.org 0x7920e
	lsls r0, r0, #24	@ 0007920e 0006
.org 0x79210
	lsrs r4, r0, #24	@ 00079210 040e
.org 0x79212
	cmp r4, #0	@ 00079212 002c
.org 0x79214
	beq.n 0x79234	@ 00079214 0ed0
.org 0x79216
	mov r0, sp	@ 00079216 6846
.org 0x79218
	ldrb r2, [r0, #1]	@ 00079218 4278
.org 0x7921a
	ldr r0, [pc, #20]	@ 0007921a 0548
.org 0x7921c
	adds r0, r2, r0	@ 0007921c 1018
.org 0x7921e
	ldrb r1, [r0, #0]	@ 0007921e 0178
.org 0x79220
	movs r0, #0	@ 00079220 0020
.org 0x79222
	strb r1, [r5, #13]	@ 00079222 6973
.org 0x79224
	strb r0, [r5, #14]	@ 00079224 a873
.org 0x79226
	strb r0, [r5, #15]	@ 00079226 e873
.org 0x79228
	b.n 0x79266	@ 00079228 1de0
.org 0x7922a
	.byte 0x00	@ 0007922a data
.org 0x7922b
	.byte 0x00	@ 0007922b data
.org 0x7922c
	.byte 0xb0,0xe8,0x02,0x02	@ 0007922c data
.org 0x79230
	.byte 0x04,0xd3,0x85,0x08	@ 00079230 data
.org 0x79234
	adds r0, r3, #0	@ 00079234 181c
.org 0x79236
	movs r1, #4	@ 00079236 0421
.org 0x79238
	bl 0x792a0	@ 00079238 00f032f8
.org 0x7923c
	add r0, sp	@ 0007923c 6844
.org 0x7923e
	ldrb r2, [r0, #0]	@ 0007923e 0278
.org 0x79240
	ldr r0, [pc, #24]	@ 00079240 0648
.org 0x79242
	adds r0, r2, r0	@ 00079242 1018
.org 0x79244
	ldrb r1, [r0, #0]	@ 00079244 0178
.org 0x79246
	strb r1, [r5, #13]	@ 00079246 6973
.org 0x79248
	strb r4, [r5, #14]	@ 00079248 ac73
.org 0x7924a
	strb r4, [r5, #15]	@ 0007924a ec73
.org 0x7924c
	adds r0, r5, #0	@ 0007924c 281c
.org 0x7924e
	adds r0, #182	@ 0007924e b630
