@ FUN_08041778  entry 0x08041778  size 134
.thumb
.org 0x41778
FUN_08041778:
	push {r4, r5, r6, lr}	@ 00041778 70b5
.org 0x4177a
	adds r4, r0, #0	@ 0004177a 041c
.org 0x4177c
	adds r5, r1, #0	@ 0004177c 0d1c
.org 0x4177e
	lsls r2, r2, #24	@ 0004177e 1206
.org 0x41780
	lsrs r6, r2, #24	@ 00041780 160e
.org 0x41782
	ldr r0, [pc, #64]	@ 00041782 1048
.org 0x41784
	ldr r0, [r0, #0]	@ 00041784 0068
.org 0x41786
	bl 0x5500	@ 00041786 c3f7bbfe
.org 0x4178a
	adds r2, r0, #0	@ 0004178a 021c
.org 0x4178c
	cmp r2, #0	@ 0004178c 002a
.org 0x4178e
	beq.n 0x41808	@ 0004178e 3bd0
.org 0x41790
	adds r0, r4, #0	@ 00041790 201c
.org 0x41792
	adds r0, #248	@ 00041792 f830
.org 0x41794
	ldrb r0, [r0, #0]	@ 00041794 0078
.org 0x41796
	cmp r0, #2	@ 00041796 0228
.org 0x41798
	bne.n 0x417d4	@ 00041798 1cd1
.org 0x4179a
	ldr r1, [pc, #44]	@ 0004179a 0b49
.org 0x4179c
	movs r0, #12	@ 0004179c 0c20
.org 0x4179e
	strb r0, [r2, #9]	@ 0004179e 5072
.org 0x417a0
	ldr r0, [r1, #48]	@ 000417a0 086b
.org 0x417a2
	ldr r0, [r0, #0]	@ 000417a2 0068
.org 0x417a4
	str r0, [r2, #20]	@ 000417a4 5061
.org 0x417a6
	ldrb r1, [r2, #11]	@ 000417a6 d17a
.org 0x417a8
	movs r0, #191	@ 000417a8 bf20
.org 0x417aa
	ands r0, r1	@ 000417aa 0840
.org 0x417ac
	strb r0, [r2, #11]	@ 000417ac d072
.org 0x417ae
	adds r1, r2, #0	@ 000417ae 111c
.org 0x417b0
	adds r1, #37	@ 000417b0 2531
.org 0x417b2
	movs r0, #16	@ 000417b2 1020
.org 0x417b4
	strb r0, [r1, #0]	@ 000417b4 0870
.org 0x417b6
	ldr r0, [pc, #20]	@ 000417b6 0548
.org 0x417b8
	ldrh r0, [r0, #0]	@ 000417b8 0088
.org 0x417ba
	strh r0, [r2, #32]	@ 000417ba 1084
.org 0x417bc
	ldr r0, [pc, #16]	@ 000417bc 0448
.org 0x417be
	ldrb r0, [r0, #0]	@ 000417be 0078
.org 0x417c0
	b.n 0x417fa	@ 000417c0 1be0
.org 0x417c2
	.byte 0x00	@ 000417c2 data
.org 0x417c3
	.byte 0x00	@ 000417c3 data
.org 0x417c4
	.byte 0x88,0xed,0x02,0x02	@ 000417c4 data
.org 0x417c8
	.byte 0xf8,0x39,0x85,0x08	@ 000417c8 data
.org 0x417cc
	.byte 0xfc,0x36,0x85,0x08	@ 000417cc data
.org 0x417d0
	.byte 0x04,0x37,0x85,0x08	@ 000417d0 data
.org 0x417d4
	ldr r1, [pc, #56]	@ 000417d4 0e49
.org 0x417d6
	movs r0, #12	@ 000417d6 0c20
.org 0x417d8
	strb r0, [r2, #9]	@ 000417d8 5072
.org 0x417da
	ldr r0, [r1, #48]	@ 000417da 086b
.org 0x417dc
	ldr r0, [r0, #0]	@ 000417dc 0068
.org 0x417de
	str r0, [r2, #20]	@ 000417de 5061
.org 0x417e0
	ldrb r1, [r2, #11]	@ 000417e0 d17a
.org 0x417e2
	movs r0, #191	@ 000417e2 bf20
.org 0x417e4
	ands r0, r1	@ 000417e4 0840
.org 0x417e6
	strb r0, [r2, #11]	@ 000417e6 d072
.org 0x417e8
	adds r1, r2, #0	@ 000417e8 111c
.org 0x417ea
	adds r1, #37	@ 000417ea 2531
.org 0x417ec
	movs r0, #16	@ 000417ec 1020
.org 0x417ee
	strb r0, [r1, #0]	@ 000417ee 0870
.org 0x417f0
	ldr r0, [pc, #32]	@ 000417f0 0848
.org 0x417f2
	ldrh r0, [r0, #2]	@ 000417f2 4088
.org 0x417f4
	strh r0, [r2, #32]	@ 000417f4 1084
.org 0x417f6
	ldr r0, [pc, #32]	@ 000417f6 0848
.org 0x417f8
	ldrb r0, [r0, #1]	@ 000417f8 4078
.org 0x417fa
	subs r1, #3	@ 000417fa 0339
.org 0x417fc
	strb r0, [r1, #0]	@ 000417fc 0870
