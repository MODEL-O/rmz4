@ FUN_080a0090  entry 0x080a0090  size 166
.thumb
.org 0xa0090
FUN_080a0090:
	push {r4, r5, r6, lr}	@ 000a0090 70b5
.org 0xa0092
	sub sp, #12	@ 000a0092 83b0
.org 0xa0094
	adds r4, r0, #0	@ 000a0094 041c
.org 0xa0096
	mov r0, sp	@ 000a0096 6846
.org 0xa0098
	ldr r1, [pc, #116]	@ 000a0098 1d49
.org 0xa009a
	ldmia r1!, {r2, r3, r5}	@ 000a009a 2cc9
.org 0xa009c
	stmia r0!, {r2, r3, r5}	@ 000a009c 2cc0
.org 0xa009e
	ldr r6, [r4, #40]	@ 000a009e a66a
.org 0xa00a0
	ldrb r5, [r4, #17]	@ 000a00a0 657c
.org 0xa00a2
	ldrb r0, [r4, #15]	@ 000a00a2 e07b
.org 0xa00a4
	cmp r0, #0	@ 000a00a4 0028
.org 0xa00a6
	bne.n 0xa00d2	@ 000a00a6 14d1
.org 0xa00a8
	adds r1, r4, #0	@ 000a00a8 211c
.org 0xa00aa
	adds r1, #37	@ 000a00aa 2531
.org 0xa00ac
	movs r0, #25	@ 000a00ac 1920
.org 0xa00ae
	strb r0, [r1, #0]	@ 000a00ae 0870
.org 0xa00b0
	adds r0, r4, #0	@ 000a00b0 201c
.org 0xa00b2
	adds r0, #116	@ 000a00b2 7430
.org 0xa00b4
	ldr r1, [pc, #92]	@ 000a00b4 1749
.org 0xa00b6
	bl 0x5784	@ 000a00b6 65f765fb
.org 0xa00ba
	movs r1, #130	@ 000a00ba 8221
.org 0xa00bc
	lsls r1, r1, #8	@ 000a00bc 0902
.org 0xa00be
	adds r0, r4, #0	@ 000a00be 201c
.org 0xa00c0
	bl 0x1cf00	@ 000a00c0 7cf71eff
.org 0xa00c4
	lsls r0, r5, #2	@ 000a00c4 a800
.org 0xa00c6
	add r0, sp	@ 000a00c6 6844
.org 0xa00c8
	ldr r0, [r0, #0]	@ 000a00c8 0068
.org 0xa00ca
	str r0, [r4, #100]	@ 000a00ca 6066
.org 0xa00cc
	ldrb r0, [r4, #15]	@ 000a00cc e07b
.org 0xa00ce
	adds r0, #1	@ 000a00ce 0130
.org 0xa00d0
	strb r0, [r4, #15]	@ 000a00d0 e073
.org 0xa00d2
	ldrb r0, [r6, #12]	@ 000a00d2 307b
.org 0xa00d4
	cmp r0, #1	@ 000a00d4 0128
.org 0xa00d6
	bls.n 0xa011c	@ 000a00d6 21d9
.org 0xa00d8
	ldrb r1, [r4, #10]	@ 000a00d8 a17a
.org 0xa00da
	movs r0, #254	@ 000a00da fe20
.org 0xa00dc
	ands r0, r1	@ 000a00dc 0840
.org 0xa00de
	movs r2, #0	@ 000a00de 0022
.org 0xa00e0
	movs r1, #253	@ 000a00e0 fd21
.org 0xa00e2
	ands r0, r1	@ 000a00e2 0840
.org 0xa00e4
	strb r0, [r4, #10]	@ 000a00e4 a072
.org 0xa00e6
	adds r0, r4, #0	@ 000a00e6 201c
.org 0xa00e8
	adds r0, #140	@ 000a00e8 8c30
.org 0xa00ea
	str r2, [r0, #0]	@ 000a00ea 0260
.org 0xa00ec
	adds r0, #4	@ 000a00ec 0430
.org 0xa00ee
	str r2, [r0, #0]	@ 000a00ee 0260
.org 0xa00f0
	adds r0, #4	@ 000a00f0 0430
.org 0xa00f2
	strb r2, [r0, #0]	@ 000a00f2 0270
.org 0xa00f4
	ldrb r1, [r4, #10]	@ 000a00f4 a17a
.org 0xa00f6
	movs r0, #251	@ 000a00f6 fb20
.org 0xa00f8
	ands r0, r1	@ 000a00f8 0840
.org 0xa00fa
	strb r0, [r4, #10]	@ 000a00fa a072
.org 0xa00fc
	ldr r1, [pc, #24]	@ 000a00fc 0649
.org 0xa00fe
	ldrb r0, [r4, #9]	@ 000a00fe 607a
.org 0xa0100
	lsls r0, r0, #2	@ 000a0100 8000
.org 0xa0102
	adds r0, r0, r1	@ 000a0102 4018
.org 0xa0104
	movs r1, #3	@ 000a0104 0321
.org 0xa0106
	str r1, [r4, #12]	@ 000a0106 e160
.org 0xa0108
	ldr r0, [r0, #0]	@ 000a0108 0068
.org 0xa010a
	ldr r0, [r0, #12]	@ 000a010a c068
.org 0xa010c
	str r0, [r4, #20]	@ 000a010c 6061
.org 0xa010e
	b.n 0xa013a	@ 000a010e 14e0
.org 0xa0110
	.byte 0xf8,0x9c,0x12,0x08	@ 000a0110 data
.org 0xa0114
	.byte 0x84,0x19,0x86,0x08	@ 000a0114 data
.org 0xa0118
	.byte 0x40,0xdb,0x85,0x08	@ 000a0118 data
.org 0xa011c
	adds r0, r4, #0	@ 000a011c 201c
.org 0xa011e
	bl 0x1cff0	@ 000a011e 7cf767ff
.org 0xa0122
	ldr r0, [r4, #44]	@ 000a0122 e06a
.org 0xa0124
	cmp r0, #0	@ 000a0124 0028
.org 0xa0126
	bne.n 0xa013a	@ 000a0126 08d1
.org 0xa0128
	ldr r0, [r4, #100]	@ 000a0128 606e
.org 0xa012a
	subs r1, r0, #1	@ 000a012a 411e
.org 0xa012c
	str r1, [r4, #100]	@ 000a012c 6166
.org 0xa012e
	cmp r1, #0	@ 000a012e 0029
.org 0xa0130
	bne.n 0xa013a	@ 000a0130 03d1
.org 0xa0132
	movs r0, #1	@ 000a0132 0120
.org 0xa0134
	strb r0, [r4, #13]	@ 000a0134 6073
