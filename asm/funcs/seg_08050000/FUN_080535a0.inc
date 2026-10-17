@ FUN_080535a0  entry 0x080535a0  size 134
.thumb
.org 0x535a0
FUN_080535a0:
	push {r4, r5, r6, lr}	@ 000535a0 70b5
.org 0x535a2
	sub sp, #12	@ 000535a2 83b0
.org 0x535a4
	adds r4, r0, #0	@ 000535a4 041c
.org 0x535a6
	ldr r1, [pc, #60]	@ 000535a6 0f49
.org 0x535a8
	mov r0, sp	@ 000535a8 6846
.org 0x535aa
	movs r2, #4	@ 000535aa 0422
.org 0x535ac
	bl 0x129258	@ 000535ac d5f054fe
.org 0x535b0
	ldrb r0, [r4, #15]	@ 000535b0 e07b
.org 0x535b2
	cmp r0, #0	@ 000535b2 0028
.org 0x535b4
	bne.n 0x535c4	@ 000535b4 06d1
.org 0x535b6
	adds r1, r4, #0	@ 000535b6 211c
.org 0x535b8
	adds r1, #204	@ 000535b8 cc31
.org 0x535ba
	movs r0, #161	@ 000535ba a120
.org 0x535bc
	str r0, [r1, #0]	@ 000535bc 0860
.org 0x535be
	ldrb r0, [r4, #15]	@ 000535be e07b
.org 0x535c0
	adds r0, #1	@ 000535c0 0130
.org 0x535c2
	strb r0, [r4, #15]	@ 000535c2 e073
.org 0x535c4
	adds r0, r4, #0	@ 000535c4 201c
.org 0x535c6
	bl 0x1cff0	@ 000535c6 c9f713fd
.org 0x535ca
	adds r5, r4, #0	@ 000535ca 251c
.org 0x535cc
	adds r5, #204	@ 000535cc cc35
.org 0x535ce
	ldr r0, [r5, #0]	@ 000535ce 2868
.org 0x535d0
	subs r0, #1	@ 000535d0 0138
.org 0x535d2
	str r0, [r5, #0]	@ 000535d2 2860
.org 0x535d4
	adds r6, r4, #0	@ 000535d4 261c
.org 0x535d6
	adds r6, #200	@ 000535d6 c836
.org 0x535d8
	ldr r1, [r6, #0]	@ 000535d8 3168
.org 0x535da
	cmp r1, #0	@ 000535da 0029
.org 0x535dc
	bne.n 0x535e8	@ 000535dc 04d1
.org 0x535de
	movs r0, #4	@ 000535de 0420
.org 0x535e0
	b.n 0x53620	@ 000535e0 1ee0
.org 0x535e2
	.byte 0x00	@ 000535e2 data
.org 0x535e3
	.byte 0x00	@ 000535e3 data
.org 0x535e4
	.byte 0x98,0x95,0x12,0x08	@ 000535e4 data
.org 0x535e8
	movs r1, #80	@ 000535e8 5021
.org 0x535ea
	bl 0x129050	@ 000535ea d5f031fd
.org 0x535ee
	cmp r0, #0	@ 000535ee 0028
.org 0x535f0
	bne.n 0x53618	@ 000535f0 12d1
.org 0x535f2
	ldr r0, [pc, #56]	@ 000535f2 0e48
.org 0x535f4
	bl 0x2b10	@ 000535f4 aff78cfa
.org 0x535f8
	ldr r0, [r4, #84]	@ 000535f8 606d
.org 0x535fa
	ldr r1, [pc, #52]	@ 000535fa 0d49
.org 0x535fc
	adds r0, r0, r1	@ 000535fc 4018
.org 0x535fe
	str r0, [sp, #4]	@ 000535fe 0190
.org 0x53600
	ldr r0, [r4, #88]	@ 00053600 a06d
.org 0x53602
	add r1, sp, #4	@ 00053602 01a9
.org 0x53604
	str r0, [r1, #4]	@ 00053604 4860
.org 0x53606
	ldr r0, [r6, #0]	@ 00053606 3068
.org 0x53608
	adds r0, #181	@ 00053608 b530
.org 0x5360a
	ldrb r0, [r0, #0]	@ 0005360a 0078
.org 0x5360c
	add r0, sp	@ 0005360c 6844
.org 0x5360e
	ldrb r3, [r0, #0]	@ 0005360e 0378
.org 0x53610
	adds r0, r4, #0	@ 00053610 201c
.org 0x53612
	movs r2, #1	@ 00053612 0122
.org 0x53614
	bl 0xbf530	@ 00053614 6bf08cff
.org 0x53618
	ldr r1, [r5, #0]	@ 00053618 2968
.org 0x5361a
	cmp r1, #0	@ 0005361a 0029
.org 0x5361c
	bne.n 0x53624	@ 0005361c 02d1
.org 0x5361e
	movs r0, #3	@ 0005361e 0320
.org 0x53620
	strb r0, [r4, #14]	@ 00053620 a073
.org 0x53622
	strb r1, [r4, #15]	@ 00053622 e173
.org 0x53624
	add sp, #12	@ 00053624 03b0
