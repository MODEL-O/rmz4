@ FUN_080d016c  entry 0x080d016c  size 96
.thumb
.org 0xd016c
FUN_080d016c:
	push {r4, r5, r6, r7, lr}	@ 000d016c f0b5
.org 0xd016e
	adds r5, r0, #0	@ 000d016e 051c
.org 0xd0170
	adds r6, r1, #0	@ 000d0170 0e1c
.org 0xd0172
	adds r7, r2, #0	@ 000d0172 171c
.org 0xd0174
	ldr r0, [pc, #84]	@ 000d0174 1548
.org 0xd0176
	ldr r0, [r0, #0]	@ 000d0176 0068
.org 0xd0178
	bl 0x5500	@ 000d0178 35f7c2f9
.org 0xd017c
	adds r4, r0, #0	@ 000d017c 041c
.org 0xd017e
	cmp r4, #0	@ 000d017e 002c
.org 0xd0180
	beq.n 0xd01c4	@ 000d0180 20d0
.org 0xd0182
	adds r1, r4, #0	@ 000d0182 211c
.org 0xd0184
	adds r1, #37	@ 000d0184 2531
.org 0xd0186
	movs r3, #0	@ 000d0186 0023
.org 0xd0188
	movs r0, #8	@ 000d0188 0820
.org 0xd018a
	strb r0, [r1, #0]	@ 000d018a 0870
.org 0xd018c
	ldr r0, [pc, #64]	@ 000d018c 1048
.org 0xd018e
	movs r1, #63	@ 000d018e 3f21
.org 0xd0190
	strb r1, [r4, #9]	@ 000d0190 6172
.org 0xd0192
	adds r0, #252	@ 000d0192 fc30
.org 0xd0194
	ldr r0, [r0, #0]	@ 000d0194 0068
.org 0xd0196
	ldr r0, [r0, #0]	@ 000d0196 0068
.org 0xd0198
	str r0, [r4, #20]	@ 000d0198 6061
.org 0xd019a
	movs r2, #0	@ 000d019a 0022
.org 0xd019c
	strh r3, [r4, #32]	@ 000d019c 2384
.org 0xd019e
	adds r0, r4, #0	@ 000d019e 201c
.org 0xd01a0
	adds r0, #34	@ 000d01a0 2230
.org 0xd01a2
	strb r2, [r0, #0]	@ 000d01a2 0270
.org 0xd01a4
	str r5, [r4, #40]	@ 000d01a4 a562
.org 0xd01a6
	ldr r0, [r6, #0]	@ 000d01a6 3068
.org 0xd01a8
	ldr r1, [r6, #4]	@ 000d01a8 7168
.org 0xd01aa
	str r0, [r4, #84]	@ 000d01aa 6065
.org 0xd01ac
	str r1, [r4, #88]	@ 000d01ac a165
.org 0xd01ae
	ldr r0, [r7, #0]	@ 000d01ae 3868
.org 0xd01b0
	ldr r1, [r7, #4]	@ 000d01b0 7968
.org 0xd01b2
	str r0, [r4, #92]	@ 000d01b2 e065
.org 0xd01b4
	str r1, [r4, #96]	@ 000d01b4 2166
.org 0xd01b6
	strb r2, [r4, #16]	@ 000d01b6 2274
.org 0xd01b8
	strb r2, [r4, #17]	@ 000d01b8 6274
.org 0xd01ba
	adds r1, r5, #0	@ 000d01ba 291c
.org 0xd01bc
	adds r1, #204	@ 000d01bc cc31
.org 0xd01be
	ldrh r0, [r1, #0]	@ 000d01be 0888
.org 0xd01c0
	adds r0, #1	@ 000d01c0 0130
.org 0xd01c2
	strh r0, [r1, #0]	@ 000d01c2 0880
.org 0xd01c4
	adds r0, r4, #0	@ 000d01c4 201c
.org 0xd01c6
	pop {r4, r5, r6, r7}	@ 000d01c6 f0bc
.org 0xd01c8
	pop {r1}	@ 000d01c8 02bc
.org 0xd01ca
	bx r1	@ 000d01ca 0847
