@ FUN_08036188  entry 0x08036188  size 112
.thumb
.org 0x36188
FUN_08036188:
	push {r4, r5, lr}	@ 00036188 30b5
.org 0x3618a
	adds r4, r0, #0	@ 0003618a 041c
.org 0x3618c
	movs r0, #129	@ 0003618c 8120
.org 0x3618e
	lsls r0, r0, #1	@ 0003618e 4000
.org 0x36190
	adds r5, r4, r0	@ 00036190 2518
.org 0x36192
	ldrb r0, [r5, #0]	@ 00036192 2878
.org 0x36194
	cmp r0, #0	@ 00036194 0028
.org 0x36196
	bne.n 0x361b2	@ 00036196 0cd1
.org 0x36198
	movs r1, #208	@ 00036198 d021
.org 0x3619a
	lsls r1, r1, #5	@ 0003619a 4901
.org 0x3619c
	adds r0, r4, #0	@ 0003619c 201c
.org 0x3619e
	bl 0x1cf00	@ 0003619e e6f7affe
.org 0x361a2
	adds r0, r4, #0	@ 000361a2 201c
.org 0x361a4
	movs r1, #20	@ 000361a4 1421
.org 0x361a6
	bl 0x3c464	@ 000361a6 06f05df9
.org 0x361aa
	ldrb r0, [r5, #0]	@ 000361aa 2878
.org 0x361ac
	adds r0, #1	@ 000361ac 0130
.org 0x361ae
	strb r0, [r5, #0]	@ 000361ae 2870
.org 0x361b0
	b.n 0x361f8	@ 000361b0 22e0
.org 0x361b2
	movs r1, #208	@ 000361b2 d021
.org 0x361b4
	lsls r1, r1, #5	@ 000361b4 4901
.org 0x361b6
	adds r0, r4, #0	@ 000361b6 201c
.org 0x361b8
	bl 0x3a3b0	@ 000361b8 04f0faf8
.org 0x361bc
	adds r0, r4, #0	@ 000361bc 201c
.org 0x361be
	adds r0, #115	@ 000361be 7330
.org 0x361c0
	ldrb r2, [r0, #0]	@ 000361c0 0278
.org 0x361c2
	cmp r2, #3	@ 000361c2 032a
.org 0x361c4
	bne.n 0x361f8	@ 000361c4 18d1
.org 0x361c6
	movs r1, #150	@ 000361c6 9621
.org 0x361c8
	lsls r1, r1, #2	@ 000361c8 8900
.org 0x361ca
	adds r0, r4, r1	@ 000361ca 6018
.org 0x361cc
	ldr r1, [r0, #0]	@ 000361cc 0168
.org 0x361ce
	movs r0, #128	@ 000361ce 8020
.org 0x361d0
	ands r1, r0	@ 000361d0 0140
.org 0x361d2
	cmp r1, #0	@ 000361d2 0029
.org 0x361d4
	beq.n 0x361f0	@ 000361d4 0cd0
.org 0x361d6
	ldr r3, [pc, #20]	@ 000361d6 054b
.org 0x361d8
	adds r2, r4, r3	@ 000361d8 e218
.org 0x361da
	movs r1, #0	@ 000361da 0021
.org 0x361dc
	movs r0, #2	@ 000361dc 0220
.org 0x361de
	strb r0, [r2, #0]	@ 000361de 1070
.org 0x361e0
	strb r1, [r5, #0]	@ 000361e0 2970
.org 0x361e2
	adds r0, r4, #0	@ 000361e2 201c
.org 0x361e4
	bl 0x35f28	@ 000361e4 fff7a0fe
.org 0x361e8
	b.n 0x361f8	@ 000361e8 06e0
.org 0x361ea
	.byte 0x00	@ 000361ea data
.org 0x361eb
	.byte 0x00	@ 000361eb data
.org 0x361ec
	.byte 0x01,0x01,0x00,0x00	@ 000361ec data
.org 0x361f0
	ldr r3, [pc, #12]	@ 000361f0 034b
.org 0x361f2
	adds r0, r4, r3	@ 000361f2 e018
.org 0x361f4
	strb r2, [r0, #0]	@ 000361f4 0270
.org 0x361f6
	strb r1, [r5, #0]	@ 000361f6 2970
