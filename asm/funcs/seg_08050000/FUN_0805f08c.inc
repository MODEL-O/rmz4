@ FUN_0805f08c  entry 0x0805f08c  size 170
.thumb
.org 0x5f08c
FUN_0805f08c:
	push {r4, r5, r6, lr}	@ 0005f08c 70b5
.org 0x5f08e
	mov r6, sl	@ 0005f08e 5646
.org 0x5f090
	mov r5, r9	@ 0005f090 4d46
.org 0x5f092
	mov r4, r8	@ 0005f092 4446
.org 0x5f094
	push {r4, r5, r6}	@ 0005f094 70b4
.org 0x5f096
	sub sp, #60	@ 0005f096 8fb0
.org 0x5f098
	mov sl, r0	@ 0005f098 8246
.org 0x5f09a
	ldr r1, [pc, #156]	@ 0005f09a 2749
.org 0x5f09c
	mov r0, sp	@ 0005f09c 6846
.org 0x5f09e
	movs r2, #2	@ 0005f09e 0222
.org 0x5f0a0
	bl 0x129258	@ 0005f0a0 caf0daf8
.org 0x5f0a4
	add r5, sp, #4	@ 0005f0a4 01ad
.org 0x5f0a6
	ldr r1, [pc, #148]	@ 0005f0a6 2549
.org 0x5f0a8
	adds r0, r5, #0	@ 0005f0a8 281c
.org 0x5f0aa
	movs r2, #2	@ 0005f0aa 0222
.org 0x5f0ac
	bl 0x129258	@ 0005f0ac caf0d4f8
.org 0x5f0b0
	add r4, sp, #8	@ 0005f0b0 02ac
.org 0x5f0b2
	ldr r1, [pc, #140]	@ 0005f0b2 2349
.org 0x5f0b4
	adds r0, r4, #0	@ 0005f0b4 201c
.org 0x5f0b6
	movs r2, #2	@ 0005f0b6 0222
.org 0x5f0b8
	bl 0x129258	@ 0005f0b8 caf0cef8
.org 0x5f0bc
	add r0, sp, #12	@ 0005f0bc 03a8
.org 0x5f0be
	mov r8, r0	@ 0005f0be 8046
.org 0x5f0c0
	mov r2, sp	@ 0005f0c0 6a46
.org 0x5f0c2
	str r2, [sp, #24]	@ 0005f0c2 0692
.org 0x5f0c4
	str r5, [sp, #28]	@ 0005f0c4 0795
.org 0x5f0c6
	str r4, [sp, #32]	@ 0005f0c6 0894
.org 0x5f0c8
	add r4, sp, #24	@ 0005f0c8 06ac
.org 0x5f0ca
	adds r1, r4, #0	@ 0005f0ca 211c
.org 0x5f0cc
	movs r2, #12	@ 0005f0cc 0c22
.org 0x5f0ce
	bl 0x129258	@ 0005f0ce caf0c3f8
.org 0x5f0d2
	ldr r1, [pc, #112]	@ 0005f0d2 1c49
.org 0x5f0d4
	adds r0, r4, #0	@ 0005f0d4 201c
.org 0x5f0d6
	movs r2, #2	@ 0005f0d6 0222
.org 0x5f0d8
	bl 0x129258	@ 0005f0d8 caf0bef8
.org 0x5f0dc
	add r0, sp, #28	@ 0005f0dc 07a8
.org 0x5f0de
	mov r9, r0	@ 0005f0de 8146
.org 0x5f0e0
	ldr r1, [pc, #100]	@ 0005f0e0 1949
.org 0x5f0e2
	movs r2, #2	@ 0005f0e2 0222
.org 0x5f0e4
	bl 0x129258	@ 0005f0e4 caf0b8f8
.org 0x5f0e8
	add r6, sp, #32	@ 0005f0e8 08ae
.org 0x5f0ea
	ldr r1, [pc, #96]	@ 0005f0ea 1849
.org 0x5f0ec
	adds r0, r6, #0	@ 0005f0ec 301c
.org 0x5f0ee
	movs r2, #2	@ 0005f0ee 0222
.org 0x5f0f0
	bl 0x129258	@ 0005f0f0 caf0b2f8
.org 0x5f0f4
	add r5, sp, #36	@ 0005f0f4 09ad
.org 0x5f0f6
	str r4, [sp, #48]	@ 0005f0f6 0c94
.org 0x5f0f8
	mov r2, r9	@ 0005f0f8 4a46
.org 0x5f0fa
	str r2, [sp, #52]	@ 0005f0fa 0d92
.org 0x5f0fc
	str r6, [sp, #56]	@ 0005f0fc 0e96
.org 0x5f0fe
	add r1, sp, #48	@ 0005f0fe 0ca9
.org 0x5f100
	adds r0, r5, #0	@ 0005f100 281c
.org 0x5f102
	movs r2, #12	@ 0005f102 0c22
.org 0x5f104
	bl 0x129258	@ 0005f104 caf0a8f8
.org 0x5f108
	mov r0, sl	@ 0005f108 5046
.org 0x5f10a
	bl 0x5f150	@ 0005f10a 00f021f8
.org 0x5f10e
	adds r4, r0, #0	@ 0005f10e 041c
.org 0x5f110
	lsls r4, r4, #2	@ 0005f110 a400
.org 0x5f112
	adds r5, r5, r4	@ 0005f112 2d19
.org 0x5f114
	ldr r0, [r5, #0]	@ 0005f114 2868
.org 0x5f116
	movs r1, #2	@ 0005f116 0221
.org 0x5f118
	bl 0x5f194	@ 0005f118 00f03cf8
.org 0x5f11c
	add r8, r4	@ 0005f11c a044
.org 0x5f11e
	mov r2, r8	@ 0005f11e 4246
.org 0x5f120
	ldr r1, [r2, #0]	@ 0005f120 1168
.org 0x5f122
	adds r1, r1, r0	@ 0005f122 0918
.org 0x5f124
	ldrb r0, [r1, #0]	@ 0005f124 0878
.org 0x5f126
	add sp, #60	@ 0005f126 0fb0
.org 0x5f128
	pop {r3, r4, r5}	@ 0005f128 38bc
.org 0x5f12a
	mov r8, r3	@ 0005f12a 9846
.org 0x5f12c
	mov r9, r4	@ 0005f12c a146
.org 0x5f12e
	mov sl, r5	@ 0005f12e aa46
.org 0x5f130
	pop {r4, r5, r6}	@ 0005f130 70bc
.org 0x5f132
	pop {r1}	@ 0005f132 02bc
.org 0x5f134
	bx r1	@ 0005f134 0847
