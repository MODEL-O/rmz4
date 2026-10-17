@ FUN_080599c8  entry 0x080599c8  size 198
.thumb
.org 0x599c8
FUN_080599c8:
	push {r4, r5, r6, r7, lr}	@ 000599c8 f0b5
.org 0x599ca
	mov r7, r9	@ 000599ca 4f46
.org 0x599cc
	mov r6, r8	@ 000599cc 4646
.org 0x599ce
	push {r6, r7}	@ 000599ce c0b4
.org 0x599d0
	sub sp, #28	@ 000599d0 87b0
.org 0x599d2
	mov r9, r1	@ 000599d2 8946
.org 0x599d4
	mov r2, sp	@ 000599d4 6a46
.org 0x599d6
	ldr r1, [pc, #132]	@ 000599d6 2149
.org 0x599d8
	ldmia r1!, {r3, r4, r7}	@ 000599d8 98c9
.org 0x599da
	stmia r2!, {r3, r4, r7}	@ 000599da 98c2
.org 0x599dc
	ldmia r1!, {r3, r4}	@ 000599dc 18c9
.org 0x599de
	stmia r2!, {r3, r4}	@ 000599de 18c2
.org 0x599e0
	ldrb r1, [r0, #10]	@ 000599e0 817a
.org 0x599e2
	lsrs r1, r1, #4	@ 000599e2 0909
.org 0x599e4
	mov r8, r1	@ 000599e4 8846
.org 0x599e6
	movs r1, #1	@ 000599e6 0121
.org 0x599e8
	mov r7, r8	@ 000599e8 4746
.org 0x599ea
	ands r7, r1	@ 000599ea 0f40
.org 0x599ec
	mov r8, r7	@ 000599ec b846
.org 0x599ee
	ldr r5, [r0, #84]	@ 000599ee 456d
.org 0x599f0
	adds r0, #188	@ 000599f0 bc30
.org 0x599f2
	ldr r6, [r0, #0]	@ 000599f2 0668
.org 0x599f4
	ldr r0, [pc, #104]	@ 000599f4 1a48
.org 0x599f6
	ldr r0, [r0, #0]	@ 000599f6 0068
.org 0x599f8
	ldr r2, [r0, #84]	@ 000599f8 426d
.org 0x599fa
	str r2, [sp, #20]	@ 000599fa 0592
.org 0x599fc
	ldr r0, [r0, #88]	@ 000599fc 806d
.org 0x599fe
	ldr r3, [pc, #100]	@ 000599fe 194b
.org 0x59a00
	adds r3, r0, r3	@ 00059a00 c318
.org 0x59a02
	str r3, [sp, #24]	@ 00059a02 0693
.org 0x59a04
	adds r7, r2, #0	@ 00059a04 171c
.org 0x59a06
	subs r4, r7, r5	@ 00059a06 7c1b
.org 0x59a08
	mov r2, r8	@ 00059a08 4246
.org 0x59a0a
	lsls r0, r2, #1	@ 00059a0a 5000
.org 0x59a0c
	subs r1, r1, r0	@ 00059a0c 091a
.org 0x59a0e
	muls r4, r1	@ 00059a0e 4c43
.org 0x59a10
	subs r1, r3, r6	@ 00059a10 991b
.org 0x59a12
	adds r0, r4, #0	@ 00059a12 201c
.org 0x59a14
	bl 0x10d338	@ 00059a14 b3f090fc
.org 0x59a18
	adds r4, r0, #0	@ 00059a18 041c
.org 0x59a1a
	lsls r0, r4, #24	@ 00059a1a 2006
.org 0x59a1c
	movs r3, #128	@ 00059a1c 8023
.org 0x59a1e
	lsls r3, r3, #23	@ 00059a1e db05
.org 0x59a20
	adds r0, r0, r3	@ 00059a20 c018
.org 0x59a22
	lsrs r4, r0, #24	@ 00059a22 040e
.org 0x59a24
	movs r7, #0	@ 00059a24 0027
.org 0x59a26
	movs r5, #0	@ 00059a26 0025
.org 0x59a28
	mov r3, sp	@ 00059a28 6b46
.org 0x59a2a
	ldr r1, [r3, #0]	@ 00059a2a 1968
.org 0x59a2c
	adds r2, r1, #0	@ 00059a2c 0a1c
.org 0x59a2e
	subs r2, #128	@ 00059a2e 803a
.org 0x59a30
	adds r6, r5, #1	@ 00059a30 6e1c
.org 0x59a32
	ldr r0, [r3, #4]	@ 00059a32 5868
.org 0x59a34
	subs r0, r0, r1	@ 00059a34 401a
.org 0x59a36
	lsrs r1, r0, #31	@ 00059a36 c10f
.org 0x59a38
	adds r0, r0, r1	@ 00059a38 4018
.org 0x59a3a
	asrs r0, r0, #1	@ 00059a3a 4010
.org 0x59a3c
	adds r2, r2, r0	@ 00059a3c 1218
.org 0x59a3e
	lsls r2, r2, #24	@ 00059a3e 1206
.org 0x59a40
	lsrs r1, r2, #24	@ 00059a40 110e
.org 0x59a42
	cmp r1, r4	@ 00059a42 a142
.org 0x59a44
	bge.n 0x59a68	@ 00059a44 10da
.org 0x59a46
	adds r3, #4	@ 00059a46 0433
.org 0x59a48
	adds r5, r6, #0	@ 00059a48 351c
.org 0x59a4a
	cmp r5, #3	@ 00059a4a 032d
.org 0x59a4c
	ble.n 0x59a2a	@ 00059a4c eddd
.org 0x59a4e
	mov r4, r9	@ 00059a4e 4c46
.org 0x59a50
	ldrb r0, [r4, #0]	@ 00059a50 2078
.org 0x59a52
	subs r7, r7, r0	@ 00059a52 3f1a
.org 0x59a54
	cmp r7, #0	@ 00059a54 002f
.org 0x59a56
	ble.n 0x59a6c	@ 00059a56 09dd
.org 0x59a58
	adds r7, r0, #1	@ 00059a58 471c
.org 0x59a5a
	b.n 0x59a72	@ 00059a5a 0ae0
.org 0x59a5c
	.byte 0xb0,0x96,0x12,0x08	@ 00059a5c data
.org 0x59a60
	.byte 0xf0,0xdb,0x02,0x02	@ 00059a60 data
.org 0x59a64
	.byte 0x00,0xf0,0xff,0xff	@ 00059a64 data
.org 0x59a68
	adds r7, r5, #0	@ 00059a68 2f1c
.org 0x59a6a
	b.n 0x59a4e	@ 00059a6a f0e7
.org 0x59a6c
	cmp r7, #0	@ 00059a6c 002f
.org 0x59a6e
	bge.n 0x59a72	@ 00059a6e 00da
.org 0x59a70
	subs r7, r0, #1	@ 00059a70 471e
.org 0x59a72
	mov r0, r9	@ 00059a72 4846
.org 0x59a74
	strb r7, [r0, #0]	@ 00059a74 0770
.org 0x59a76
	lsls r0, r7, #2	@ 00059a76 b800
.org 0x59a78
	add r0, sp	@ 00059a78 6844
.org 0x59a7a
	ldr r2, [r0, #0]	@ 00059a7a 0268
.org 0x59a7c
	mov r3, r8	@ 00059a7c 4346
.org 0x59a7e
	lsls r1, r3, #1	@ 00059a7e 5900
.org 0x59a80
	movs r0, #1	@ 00059a80 0120
.org 0x59a82
	subs r0, r0, r1	@ 00059a82 401a
.org 0x59a84
	muls r0, r2	@ 00059a84 5043
.org 0x59a86
	adds r0, #64	@ 00059a86 4030
.org 0x59a88
	lsls r0, r0, #24	@ 00059a88 0006
.org 0x59a8a
	lsrs r0, r0, #24	@ 00059a8a 000e
.org 0x59a8c
	add sp, #28	@ 00059a8c 07b0
