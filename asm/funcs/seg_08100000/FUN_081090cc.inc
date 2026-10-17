@ FUN_081090cc  entry 0x081090cc  size 102
.thumb
.org 0x1090cc
FUN_081090cc:
	push {r4, r5, r6, r7, lr}	@ 001090cc f0b5
.org 0x1090ce
	mov r7, r9	@ 001090ce 4f46
.org 0x1090d0
	mov r6, r8	@ 001090d0 4646
.org 0x1090d2
	push {r6, r7}	@ 001090d2 c0b4
.org 0x1090d4
	sub sp, #4	@ 001090d4 81b0
.org 0x1090d6
	mov r8, r0	@ 001090d6 8046
.org 0x1090d8
	adds r5, r1, #0	@ 001090d8 0d1c
.org 0x1090da
	lsls r2, r2, #16	@ 001090da 1204
.org 0x1090dc
	lsrs r0, r2, #16	@ 001090dc 100c
.org 0x1090de
	mov r9, r0	@ 001090de 8146
.org 0x1090e0
	asrs r4, r2, #16	@ 001090e0 1414
.org 0x1090e2
	str r4, [sp, #0]	@ 001090e2 0094
.org 0x1090e4
	mov r0, r8	@ 001090e4 4046
.org 0x1090e6
	movs r1, #8	@ 001090e6 0821
.org 0x1090e8
	adds r2, r5, #0	@ 001090e8 2a1c
.org 0x1090ea
	movs r3, #196	@ 001090ea c423
.org 0x1090ec
	bl 0x5440	@ 001090ec fcf6a8f9
.org 0x1090f0
	movs r3, #0	@ 001090f0 0023
.org 0x1090f2
	cmp r3, r4	@ 001090f2 a342
.org 0x1090f4
	bge.n 0x109116	@ 001090f4 0fda
.org 0x1090f6
	movs r7, #196	@ 001090f6 c427
.org 0x1090f8
	ldr r6, [pc, #56]	@ 001090f8 0e4e
.org 0x1090fa
	lsls r0, r3, #16	@ 001090fa 1804
.org 0x1090fc
	asrs r0, r0, #16	@ 001090fc 0014
.org 0x1090fe
	adds r2, r0, #0	@ 001090fe 021c
.org 0x109100
	muls r2, r7	@ 00109100 7a43
.org 0x109102
	adds r2, r2, r5	@ 00109102 5219
.org 0x109104
	ldrb r1, [r6, #0]	@ 00109104 3178
.org 0x109106
	adds r1, r1, r3	@ 00109106 c918
.org 0x109108
	strb r1, [r2, #28]	@ 00109108 1177
.org 0x10910a
	adds r0, #1	@ 0010910a 0130
.org 0x10910c
	lsls r0, r0, #16	@ 0010910c 0004
.org 0x10910e
	lsrs r3, r0, #16	@ 0010910e 030c
.org 0x109110
	asrs r0, r0, #16	@ 00109110 0014
.org 0x109112
	cmp r0, r4	@ 00109112 a042
.org 0x109114
	blt.n 0x1090fa	@ 00109114 f1db
.org 0x109116
	ldr r0, [pc, #28]	@ 00109116 0748
.org 0x109118
	ldrb r1, [r0, #0]	@ 00109118 0178
.org 0x10911a
	add r1, r9	@ 0010911a 4944
.org 0x10911c
	strb r1, [r0, #0]	@ 0010911c 0170
.org 0x10911e
	ldr r0, [pc, #24]	@ 0010911e 0648
.org 0x109120
	mov r1, r8	@ 00109120 4146
.org 0x109122
	str r1, [r0, #0]	@ 00109122 0160
.org 0x109124
	add sp, #4	@ 00109124 01b0
.org 0x109126
	pop {r3, r4}	@ 00109126 18bc
.org 0x109128
	mov r8, r3	@ 00109128 9846
.org 0x10912a
	mov r9, r4	@ 0010912a a146
.org 0x10912c
	pop {r4, r5, r6, r7}	@ 0010912c f0bc
.org 0x10912e
	pop {r0}	@ 0010912e 01bc
.org 0x109130
	bx r0	@ 00109130 0047
