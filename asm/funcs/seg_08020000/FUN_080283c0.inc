@ FUN_080283c0  entry 0x080283c0  size 96
.thumb
.org 0x283c0
FUN_080283c0:
	push {r4, r5, r6, lr}	@ 000283c0 70b5
.org 0x283c2
	adds r1, r0, #0	@ 000283c2 011c
.org 0x283c4
	ldr r0, [r1, #12]	@ 000283c4 c868
.org 0x283c6
	ldrb r6, [r0, #1]	@ 000283c6 4678
.org 0x283c8
	cmp r6, #0	@ 000283c8 002e
.org 0x283ca
	bne.n 0x28414	@ 000283ca 23d1
.org 0x283cc
	ldr r5, [r1, #16]	@ 000283cc 0d69
.org 0x283ce
	ldr r4, [pc, #60]	@ 000283ce 0f4c
.org 0x283d0
	movs r0, #24	@ 000283d0 1820
.org 0x283d2
	ldrsb r0, [r4, r0]	@ 000283d2 2056
.org 0x283d4
	cmp r0, #0	@ 000283d4 0028
.org 0x283d6
	bne.n 0x283ea	@ 000283d6 08d1
.org 0x283d8
	bl 0x6d80	@ 000283d8 def7d2fc
.org 0x283dc
	adds r0, r4, #0	@ 000283dc 201c
.org 0x283de
	movs r1, #6	@ 000283de 0621
.org 0x283e0
	bl 0x1f908	@ 000283e0 f7f792fa
.org 0x283e4
	movs r0, #8	@ 000283e4 0820
.org 0x283e6
	strb r0, [r4, #25]	@ 000283e6 6076
.org 0x283e8
	strh r6, [r4, #34]	@ 000283e8 6684
.org 0x283ea
	adds r0, r5, #0	@ 000283ea 281c
.org 0x283ec
	adds r0, #84	@ 000283ec 5430
.org 0x283ee
	str r0, [r4, #72]	@ 000283ee a064
.org 0x283f0
	ldr r0, [r5, #84]	@ 000283f0 686d
.org 0x283f2
	str r0, [r4, #56]	@ 000283f2 a063
.org 0x283f4
	ldr r0, [r5, #88]	@ 000283f4 a86d
.org 0x283f6
	str r0, [r4, #60]	@ 000283f6 e063
.org 0x283f8
	str r6, [r4, #76]	@ 000283f8 e664
.org 0x283fa
	str r6, [r4, #84]	@ 000283fa 6665
.org 0x283fc
	ldr r1, [pc, #16]	@ 000283fc 0449
.org 0x283fe
	ldrb r2, [r1, #0]	@ 000283fe 0a78
.org 0x28400
	movs r0, #127	@ 00028400 7f20
.org 0x28402
	ands r0, r2	@ 00028402 1040
.org 0x28404
	strb r0, [r1, #0]	@ 00028404 0870
.org 0x28406
	strb r6, [r1, #1]	@ 00028406 4e70
.org 0x28408
	b.n 0x28422	@ 00028408 0be0
.org 0x2840a
	.byte 0x00	@ 0002840a data
.org 0x2840b
	.byte 0x00	@ 0002840b data
.org 0x2840c
	.byte 0xf8,0xe9,0x02,0x02	@ 0002840c data
.org 0x28410
	.byte 0xe0,0x32,0x00,0x03	@ 00028410 data
.org 0x28414
	ldr r1, [pc, #20]	@ 00028414 0549
.org 0x28416
	ldrb r2, [r1, #0]	@ 00028416 0a78
.org 0x28418
	movs r0, #127	@ 00028418 7f20
.org 0x2841a
	ands r0, r2	@ 0002841a 1040
.org 0x2841c
	movs r2, #0	@ 0002841c 0022
.org 0x2841e
	strb r0, [r1, #0]	@ 0002841e 0870
