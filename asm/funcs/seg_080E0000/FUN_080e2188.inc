@ FUN_080e2188  entry 0x080e2188  size 130
.thumb
.org 0xe2188
FUN_080e2188:
	push {r4, r5, r6, r7, lr}	@ 000e2188 f0b5
.org 0xe218a
	adds r6, r0, #0	@ 000e218a 061c
.org 0xe218c
	lsls r4, r1, #16	@ 000e218c 0c04
.org 0xe218e
	lsrs r7, r4, #16	@ 000e218e 270c
.org 0xe2190
	lsls r2, r2, #24	@ 000e2190 1206
.org 0xe2192
	lsrs r5, r2, #24	@ 000e2192 150e
.org 0xe2194
	ldr r0, [pc, #76]	@ 000e2194 1348
.org 0xe2196
	ldr r0, [r0, #0]	@ 000e2196 0068
.org 0xe2198
	bl 0x5500	@ 000e2198 23f7b2f9
.org 0xe219c
	adds r3, r0, #0	@ 000e219c 031c
.org 0xe219e
	cmp r3, #0	@ 000e219e 002b
.org 0xe21a0
	beq.n 0xe220e	@ 000e21a0 35d0
.org 0xe21a2
	adds r1, r3, #0	@ 000e21a2 191c
.org 0xe21a4
	adds r1, #37	@ 000e21a4 2531
.org 0xe21a6
	movs r2, #0	@ 000e21a6 0022
.org 0xe21a8
	movs r0, #1	@ 000e21a8 0120
.org 0xe21aa
	strb r0, [r1, #0]	@ 000e21aa 0870
.org 0xe21ac
	ldr r0, [pc, #56]	@ 000e21ac 0e48
.org 0xe21ae
	movs r1, #64	@ 000e21ae 4021
.org 0xe21b0
	strb r1, [r3, #9]	@ 000e21b0 5972
.org 0xe21b2
	adds r1, #192	@ 000e21b2 c031
.org 0xe21b4
	adds r0, r0, r1	@ 000e21b4 4018
.org 0xe21b6
	ldr r0, [r0, #0]	@ 000e21b6 0068
.org 0xe21b8
	ldr r0, [r0, #0]	@ 000e21b8 0068
.org 0xe21ba
	str r0, [r3, #20]	@ 000e21ba 5861
.org 0xe21bc
	movs r0, #0	@ 000e21bc 0020
.org 0xe21be
	strh r2, [r3, #32]	@ 000e21be 1a84
.org 0xe21c0
	adds r1, r3, #0	@ 000e21c0 191c
.org 0xe21c2
	adds r1, #34	@ 000e21c2 2231
.org 0xe21c4
	strb r0, [r1, #0]	@ 000e21c4 0870
.org 0xe21c6
	ldr r0, [r6, #0]	@ 000e21c6 3068
.org 0xe21c8
	ldr r1, [r6, #4]	@ 000e21c8 7168
.org 0xe21ca
	str r0, [r3, #84]	@ 000e21ca 5865
.org 0xe21cc
	str r1, [r3, #88]	@ 000e21cc 9965
.org 0xe21ce
	lsrs r0, r4, #24	@ 000e21ce 200e
.org 0xe21d0
	strb r0, [r3, #16]	@ 000e21d0 1874
.org 0xe21d2
	strb r7, [r3, #17]	@ 000e21d2 5f74
.org 0xe21d4
	adds r2, r5, #0	@ 000e21d4 2a1c
.org 0xe21d6
	cmp r2, #0	@ 000e21d6 002a
.org 0xe21d8
	beq.n 0xe21ec	@ 000e21d8 08d0
.org 0xe21da
	ldrb r0, [r3, #10]	@ 000e21da 987a
.org 0xe21dc
	movs r1, #16	@ 000e21dc 1021
.org 0xe21de
	orrs r0, r1	@ 000e21de 0843
.org 0xe21e0
	b.n 0xe21f2	@ 000e21e0 07e0
.org 0xe21e2
	.byte 0x00	@ 000e21e2 data
.org 0xe21e3
	.byte 0x00	@ 000e21e3 data
.org 0xe21e4
	.byte 0x9c,0xed,0x02,0x02	@ 000e21e4 data
.org 0xe21e8
	.byte 0x64,0x6f,0x86,0x08	@ 000e21e8 data
.org 0xe21ec
	ldrb r1, [r3, #10]	@ 000e21ec 997a
.org 0xe21ee
	movs r0, #239	@ 000e21ee ef20
.org 0xe21f0
	ands r0, r1	@ 000e21f0 0840
.org 0xe21f2
	strb r0, [r3, #10]	@ 000e21f2 9872
.org 0xe21f4
	movs r1, #1	@ 000e21f4 0121
.org 0xe21f6
	ands r1, r2	@ 000e21f6 1140
.org 0xe21f8
	adds r0, r3, #0	@ 000e21f8 181c
.org 0xe21fa
	adds r0, #76	@ 000e21fa 4c30
.org 0xe21fc
	strb r1, [r0, #0]	@ 000e21fc 0170
.org 0xe21fe
	adds r3, #74	@ 000e21fe 4a33
.org 0xe2200
	lsls r1, r1, #4	@ 000e2200 0901
.org 0xe2202
	ldrb r2, [r3, #0]	@ 000e2202 1a78
.org 0xe2204
	movs r0, #17	@ 000e2204 1120
.org 0xe2206
	negs r0, r0	@ 000e2206 4042
.org 0xe2208
	ands r0, r2	@ 000e2208 1040
