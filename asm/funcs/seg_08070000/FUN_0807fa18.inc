@ FUN_0807fa18  entry 0x0807fa18  size 186
.thumb
.org 0x7fa18
FUN_0807fa18:
	push {r4, r5, r6, r7, lr}	@ 0007fa18 f0b5
.org 0x7fa1a
	mov r7, sl	@ 0007fa1a 5746
.org 0x7fa1c
	mov r6, r9	@ 0007fa1c 4e46
.org 0x7fa1e
	mov r5, r8	@ 0007fa1e 4546
.org 0x7fa20
	push {r5, r6, r7}	@ 0007fa20 e0b4
.org 0x7fa22
	sub sp, #8	@ 0007fa22 82b0
.org 0x7fa24
	adds r6, r0, #0	@ 0007fa24 061c
.org 0x7fa26
	lsls r1, r1, #24	@ 0007fa26 0906
.org 0x7fa28
	lsrs r1, r1, #24	@ 0007fa28 090e
.org 0x7fa2a
	str r1, [sp, #0]	@ 0007fa2a 0091
.org 0x7fa2c
	lsls r2, r2, #24	@ 0007fa2c 1206
.org 0x7fa2e
	lsrs r2, r2, #24	@ 0007fa2e 120e
.org 0x7fa30
	mov sl, r2	@ 0007fa30 9246
.org 0x7fa32
	lsls r3, r3, #24	@ 0007fa32 1b06
.org 0x7fa34
	lsrs r3, r3, #24	@ 0007fa34 1b0e
.org 0x7fa36
	mov r9, r3	@ 0007fa36 9946
.org 0x7fa38
	ldr r0, [pc, #20]	@ 0007fa38 0548
.org 0x7fa3a
	ldr r4, [r0, #0]	@ 0007fa3a 0468
.org 0x7fa3c
	movs r0, #0	@ 0007fa3c 0020
.org 0x7fa3e
	mov r8, r0	@ 0007fa3e 8046
.org 0x7fa40
	movs r2, #8	@ 0007fa40 0822
.org 0x7fa42
	ldrsh r1, [r4, r2]	@ 0007fa42 a15e
.org 0x7fa44
	movs r2, #10	@ 0007fa44 0a22
.org 0x7fa46
	ldrsh r0, [r4, r2]	@ 0007fa46 a05e
.org 0x7fa48
	cmp r1, r0	@ 0007fa48 8142
.org 0x7fa4a
	bne.n 0x7fa54	@ 0007fa4a 03d1
.org 0x7fa4c
	movs r0, #0	@ 0007fa4c 0020
.org 0x7fa4e
	b.n 0x7fac6	@ 0007fa4e 3ae0
.org 0x7fa50
	.byte 0x90,0xed,0x02,0x02	@ 0007fa50 data
.org 0x7fa54
	ldr r0, [r4, #12]	@ 0007fa54 e068
.org 0x7fa56
	str r0, [sp, #4]	@ 0007fa56 0190
.org 0x7fa58
	adds r0, r4, #0	@ 0007fa58 201c
.org 0x7fa5a
	bl 0x54c4	@ 0007fa5a 85f733fd
.org 0x7fa5e
	movs r7, #1	@ 0007fa5e 0127
.org 0x7fa60
	negs r7, r7	@ 0007fa60 7f42
.org 0x7fa62
	ldr r0, [r4, #12]	@ 0007fa62 e068
.org 0x7fa64
	ldr r0, [r0, #4]	@ 0007fa64 4068
.org 0x7fa66
	str r0, [r4, #12]	@ 0007fa66 e060
.org 0x7fa68
	adds r3, r0, #0	@ 0007fa68 031c
.org 0x7fa6a
	adds r5, r4, #0	@ 0007fa6a 251c
.org 0x7fa6c
	adds r5, #20	@ 0007fa6c 1435
.org 0x7fa6e
	cmp r3, r5	@ 0007fa6e ab42
.org 0x7fa70
	beq.n 0x7fac0	@ 0007fa70 26d0
.org 0x7fa72
	ldrb r1, [r3, #10]	@ 0007fa72 997a
.org 0x7fa74
	movs r0, #1	@ 0007fa74 0120
.org 0x7fa76
	ands r0, r1	@ 0007fa76 0840
.org 0x7fa78
	cmp r0, #0	@ 0007fa78 0028
.org 0x7fa7a
	beq.n 0x7fab4	@ 0007fa7a 1bd0
.org 0x7fa7c
	ldrb r0, [r3, #9]	@ 0007fa7c 587a
.org 0x7fa7e
	ldr r1, [sp, #0]	@ 0007fa7e 0099
.org 0x7fa80
	cmp r0, r1	@ 0007fa80 8842
.org 0x7fa82
	bne.n 0x7fab4	@ 0007fa82 17d1
.org 0x7fa84
	ldrb r0, [r3, #16]	@ 0007fa84 187c
.org 0x7fa86
	cmp r0, sl	@ 0007fa86 5045
.org 0x7fa88
	bne.n 0x7fab4	@ 0007fa88 14d1
.org 0x7fa8a
	ldrb r0, [r3, #17]	@ 0007fa8a 587c
.org 0x7fa8c
	cmp r0, r9	@ 0007fa8c 4845
.org 0x7fa8e
	bne.n 0x7fab4	@ 0007fa8e 11d1
.org 0x7fa90
	ldr r2, [r3, #84]	@ 0007fa90 5a6d
.org 0x7fa92
	ldr r0, [r6, #0]	@ 0007fa92 3068
.org 0x7fa94
	subs r2, r2, r0	@ 0007fa94 121a
.org 0x7fa96
	asrs r2, r2, #8	@ 0007fa96 1212
.org 0x7fa98
	ldr r0, [r3, #88]	@ 0007fa98 986d
.org 0x7fa9a
	ldr r1, [r6, #4]	@ 0007fa9a 7168
.org 0x7fa9c
	subs r0, r0, r1	@ 0007fa9c 401a
.org 0x7fa9e
	asrs r0, r0, #8	@ 0007fa9e 0012
.org 0x7faa0
	adds r1, r2, #0	@ 0007faa0 111c
.org 0x7faa2
	muls r1, r2	@ 0007faa2 5143
.org 0x7faa4
	adds r2, r0, #0	@ 0007faa4 021c
.org 0x7faa6
	muls r2, r0	@ 0007faa6 4243
.org 0x7faa8
	adds r0, r2, #0	@ 0007faa8 101c
.org 0x7faaa
	adds r1, r1, r0	@ 0007faaa 0918
.org 0x7faac
	cmp r1, r7	@ 0007faac b942
.org 0x7faae
	bcs.n 0x7fab4	@ 0007faae 01d2
.org 0x7fab0
	adds r7, r1, #0	@ 0007fab0 0f1c
.org 0x7fab2
	mov r8, r3	@ 0007fab2 9846
.org 0x7fab4
	ldr r0, [r4, #12]	@ 0007fab4 e068
.org 0x7fab6
	ldr r0, [r0, #4]	@ 0007fab6 4068
.org 0x7fab8
	str r0, [r4, #12]	@ 0007fab8 e060
.org 0x7faba
	adds r3, r0, #0	@ 0007faba 031c
.org 0x7fabc
	cmp r3, r5	@ 0007fabc ab42
.org 0x7fabe
	bne.n 0x7fa72	@ 0007fabe d8d1
.org 0x7fac0
	ldr r0, [sp, #4]	@ 0007fac0 0198
.org 0x7fac2
	str r0, [r4, #12]	@ 0007fac2 e060
.org 0x7fac4
	mov r0, r8	@ 0007fac4 4046
.org 0x7fac6
	add sp, #8	@ 0007fac6 02b0
.org 0x7fac8
	pop {r3, r4, r5}	@ 0007fac8 38bc
.org 0x7faca
	mov r8, r3	@ 0007faca 9846
.org 0x7facc
	mov r9, r4	@ 0007facc a146
.org 0x7face
	mov sl, r5	@ 0007face aa46
.org 0x7fad0
	pop {r4, r5, r6, r7}	@ 0007fad0 f0bc
