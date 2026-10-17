@ FUN_08084174  entry 0x08084174  size 182
.thumb
.org 0x84174
FUN_08084174:
	push {r4, lr}	@ 00084174 10b5
.org 0x84176
	adds r4, r0, #0	@ 00084176 041c
.org 0x84178
	ldrb r0, [r4, #14]	@ 00084178 a07b
.org 0x8417a
	cmp r0, #0	@ 0008417a 0028
.org 0x8417c
	bne.n 0x84192	@ 0008417c 09d1
.org 0x8417e
	movs r1, #224	@ 0008417e e021
.org 0x84180
	lsls r1, r1, #5	@ 00084180 4901
.org 0x84182
	adds r0, r4, #0	@ 00084182 201c
.org 0x84184
	bl 0x1cf00	@ 00084184 98f7bcfe
.org 0x84188
	movs r0, #120	@ 00084188 7820
.org 0x8418a
	strb r0, [r4, #18]	@ 0008418a a074
.org 0x8418c
	ldrb r0, [r4, #14]	@ 0008418c a07b
.org 0x8418e
	adds r0, #1	@ 0008418e 0130
.org 0x84190
	strb r0, [r4, #14]	@ 00084190 a073
.org 0x84192
	movs r2, #0	@ 00084192 0022
.org 0x84194
	ldr r0, [pc, #24]	@ 00084194 0648
.org 0x84196
	ldr r0, [r0, #0]	@ 00084196 0068
.org 0x84198
	ldr r1, [r4, #84]	@ 00084198 616d
.org 0x8419a
	ldr r0, [r0, #84]	@ 0008419a 406d
.org 0x8419c
	cmp r1, r0	@ 0008419c 8142
.org 0x8419e
	bge.n 0x841a2	@ 0008419e 00da
.org 0x841a0
	movs r2, #1	@ 000841a0 0122
.org 0x841a2
	cmp r2, #0	@ 000841a2 002a
.org 0x841a4
	beq.n 0x841b4	@ 000841a4 06d0
.org 0x841a6
	ldrb r1, [r4, #10]	@ 000841a6 a17a
.org 0x841a8
	movs r0, #16	@ 000841a8 1020
.org 0x841aa
	orrs r0, r1	@ 000841aa 0843
.org 0x841ac
	b.n 0x841ba	@ 000841ac 05e0
.org 0x841ae
	.byte 0x00	@ 000841ae data
.org 0x841af
	.byte 0x00	@ 000841af data
.org 0x841b0
	.byte 0xf0,0xdb,0x02,0x02	@ 000841b0 data
.org 0x841b4
	ldrb r1, [r4, #10]	@ 000841b4 a17a
.org 0x841b6
	movs r0, #239	@ 000841b6 ef20
.org 0x841b8
	ands r0, r1	@ 000841b8 0840
.org 0x841ba
	strb r0, [r4, #10]	@ 000841ba a072
.org 0x841bc
	adds r1, r2, #0	@ 000841bc 111c
.org 0x841be
	adds r0, r4, #0	@ 000841be 201c
.org 0x841c0
	adds r0, #76	@ 000841c0 4c30
.org 0x841c2
	strb r1, [r0, #0]	@ 000841c2 0170
.org 0x841c4
	adds r3, r4, #0	@ 000841c4 231c
.org 0x841c6
	adds r3, #74	@ 000841c6 4a33
.org 0x841c8
	lsls r1, r1, #4	@ 000841c8 0901
.org 0x841ca
	ldrb r2, [r3, #0]	@ 000841ca 1a78
.org 0x841cc
	movs r0, #17	@ 000841cc 1120
.org 0x841ce
	negs r0, r0	@ 000841ce 4042
.org 0x841d0
	ands r0, r2	@ 000841d0 1040
.org 0x841d2
	orrs r0, r1	@ 000841d2 0843
.org 0x841d4
	strb r0, [r3, #0]	@ 000841d4 1870
.org 0x841d6
	adds r2, r4, #0	@ 000841d6 221c
.org 0x841d8
	adds r2, #180	@ 000841d8 b432
.org 0x841da
	ldr r1, [pc, #72]	@ 000841da 1249
.org 0x841dc
	ldrb r0, [r4, #19]	@ 000841dc e07c
.org 0x841de
	lsls r0, r0, #1	@ 000841de 4000
.org 0x841e0
	adds r0, r0, r1	@ 000841e0 4018
.org 0x841e2
	movs r3, #0	@ 000841e2 0023
.org 0x841e4
	ldrsh r1, [r0, r3]	@ 000841e4 c15e
.org 0x841e6
	lsls r1, r1, #5	@ 000841e6 4901
.org 0x841e8
	ldr r0, [r2, #4]	@ 000841e8 5068
.org 0x841ea
	adds r0, r0, r1	@ 000841ea 4018
.org 0x841ec
	str r0, [r4, #88]	@ 000841ec a065
.org 0x841ee
	ldrb r0, [r4, #19]	@ 000841ee e07c
.org 0x841f0
	adds r0, #1	@ 000841f0 0130
.org 0x841f2
	strb r0, [r4, #19]	@ 000841f2 e074
.org 0x841f4
	ldrb r0, [r4, #18]	@ 000841f4 a07c
.org 0x841f6
	subs r0, #1	@ 000841f6 0138
.org 0x841f8
	strb r0, [r4, #18]	@ 000841f8 a074
.org 0x841fa
	lsls r0, r0, #24	@ 000841fa 0006
.org 0x841fc
	lsrs r0, r0, #24	@ 000841fc 000e
.org 0x841fe
	cmp r0, #255	@ 000841fe ff28
.org 0x84200
	bne.n 0x8423c	@ 00084200 1cd1
.org 0x84202
	ldr r2, [pc, #36]	@ 00084202 094a
.org 0x84204
	ldr r1, [r2, #0]	@ 00084204 1168
.org 0x84206
	ldr r0, [pc, #36]	@ 00084206 0948
.org 0x84208
	muls r0, r1	@ 00084208 4843
.org 0x8420a
	ldr r1, [pc, #36]	@ 0008420a 0949
.org 0x8420c
	adds r0, r0, r1	@ 0008420c 4018
.org 0x8420e
	lsls r0, r0, #1	@ 0008420e 4000
.org 0x84210
	lsrs r1, r0, #1	@ 00084210 4108
.org 0x84212
	str r1, [r2, #0]	@ 00084212 1160
.org 0x84214
	lsrs r0, r0, #17	@ 00084214 400c
.org 0x84216
	movs r1, #15	@ 00084216 0f21
.org 0x84218
	ands r0, r1	@ 00084218 0840
.org 0x8421a
	cmp r0, #9	@ 0008421a 0928
.org 0x8421c
	bhi.n 0x84234	@ 0008421c 0ad8
.org 0x8421e
	movs r0, #3	@ 0008421e 0320
.org 0x84220
	b.n 0x84236	@ 00084220 09e0
.org 0x84222
	.byte 0x00	@ 00084222 data
.org 0x84223
	.byte 0x00	@ 00084223 data
.org 0x84224
	.byte 0x0c,0x93,0x12,0x08	@ 00084224 data
.org 0x84228
	.byte 0x38,0xdc,0x02,0x02	@ 00084228 data
