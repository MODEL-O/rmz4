@ FUN_080a02ac  entry 0x080a02ac  size 92
.thumb
.org 0xa02ac
FUN_080a02ac:
	push {r4, lr}	@ 000a02ac 10b5
.org 0xa02ae
	adds r4, r0, #0	@ 000a02ae 041c
.org 0xa02b0
	ldrb r0, [r4, #10]	@ 000a02b0 a07a
.org 0xa02b2
	lsrs r2, r0, #4	@ 000a02b2 0209
.org 0xa02b4
	movs r0, #1	@ 000a02b4 0120
.org 0xa02b6
	ands r2, r0	@ 000a02b6 0240
.org 0xa02b8
	ldrb r0, [r4, #15]	@ 000a02b8 e07b
.org 0xa02ba
	cmp r0, #0	@ 000a02ba 0028
.org 0xa02bc
	bne.n 0xa02e8	@ 000a02bc 14d1
.org 0xa02be
	adds r1, r4, #0	@ 000a02be 211c
.org 0xa02c0
	adds r1, #37	@ 000a02c0 2531
.org 0xa02c2
	movs r0, #24	@ 000a02c2 1820
.org 0xa02c4
	strb r0, [r1, #0]	@ 000a02c4 0870
.org 0xa02c6
	adds r0, r4, #0	@ 000a02c6 201c
.org 0xa02c8
	adds r0, #84	@ 000a02c8 5430
.org 0xa02ca
	ldrb r1, [r4, #16]	@ 000a02ca 217c
.org 0xa02cc
	bl 0xa0cc8	@ 000a02cc 00f0fcfc
.org 0xa02d0
	adds r0, r4, #0	@ 000a02d0 201c
.org 0xa02d2
	adds r0, #116	@ 000a02d2 7430
.org 0xa02d4
	ldr r1, [pc, #48]	@ 000a02d4 0c49
.org 0xa02d6
	bl 0x5784	@ 000a02d6 65f755fa
.org 0xa02da
	ldr r1, [pc, #48]	@ 000a02da 0c49
.org 0xa02dc
	adds r0, r4, #0	@ 000a02dc 201c
.org 0xa02de
	bl 0x1cf00	@ 000a02de 7cf70ffe
.org 0xa02e2
	ldrb r0, [r4, #15]	@ 000a02e2 e07b
.org 0xa02e4
	adds r0, #1	@ 000a02e4 0130
.org 0xa02e6
	strb r0, [r4, #15]	@ 000a02e6 e073
.org 0xa02e8
	adds r0, r4, #0	@ 000a02e8 201c
.org 0xa02ea
	bl 0x1cff0	@ 000a02ea 7cf781fe
.org 0xa02ee
	adds r0, r4, #0	@ 000a02ee 201c
.org 0xa02f0
	adds r0, #115	@ 000a02f0 7330
.org 0xa02f2
	ldrb r0, [r0, #0]	@ 000a02f2 0078
.org 0xa02f4
	cmp r0, #3	@ 000a02f4 0328
.org 0xa02f6
	bne.n 0xa0302	@ 000a02f6 04d1
.org 0xa02f8
	movs r1, #0	@ 000a02f8 0021
.org 0xa02fa
	movs r0, #2	@ 000a02fa 0220
.org 0xa02fc
	strb r0, [r4, #13]	@ 000a02fc 6073
.org 0xa02fe
	strb r1, [r4, #14]	@ 000a02fe a173
.org 0xa0300
	strb r1, [r4, #15]	@ 000a0300 e173
.org 0xa0302
	pop {r4}	@ 000a0302 10bc
.org 0xa0304
	pop {r0}	@ 000a0304 01bc
.org 0xa0306
	bx r0	@ 000a0306 0047
