@ FUN_080b6094  entry 0x080b6094  size 184
.thumb
.org 0xb6094
FUN_080b6094:
	push {r4, r5, r6, r7, lr}	@ 000b6094 f0b5
.org 0xb6096
	mov r7, sl	@ 000b6096 5746
.org 0xb6098
	mov r6, r9	@ 000b6098 4e46
.org 0xb609a
	mov r5, r8	@ 000b609a 4546
.org 0xb609c
	push {r5, r6, r7}	@ 000b609c e0b4
.org 0xb609e
	sub sp, #24	@ 000b609e 86b0
.org 0xb60a0
	mov r2, sp	@ 000b60a0 6a46
.org 0xb60a2
	ldr r1, [pc, #168]	@ 000b60a2 2a49
.org 0xb60a4
	ldmia r1!, {r3, r4, r5}	@ 000b60a4 38c9
.org 0xb60a6
	stmia r2!, {r3, r4, r5}	@ 000b60a6 38c2
.org 0xb60a8
	ldr r1, [r1, #0]	@ 000b60a8 0968
.org 0xb60aa
	str r1, [r2, #0]	@ 000b60aa 1160
.org 0xb60ac
	ldr r5, [r0, #40]	@ 000b60ac 856a
.org 0xb60ae
	ldr r2, [pc, #160]	@ 000b60ae 284a
.org 0xb60b0
	ldr r0, [r2, #0]	@ 000b60b0 1068
.org 0xb60b2
	ldr r7, [pc, #160]	@ 000b60b2 284f
.org 0xb60b4
	muls r0, r7	@ 000b60b4 7843
.org 0xb60b6
	ldr r3, [pc, #160]	@ 000b60b6 284b
.org 0xb60b8
	adds r0, r0, r3	@ 000b60b8 c018
.org 0xb60ba
	lsls r0, r0, #1	@ 000b60ba 4000
.org 0xb60bc
	lsrs r1, r0, #1	@ 000b60bc 4108
.org 0xb60be
	str r1, [r2, #0]	@ 000b60be 1160
.org 0xb60c0
	lsrs r0, r0, #17	@ 000b60c0 400c
.org 0xb60c2
	movs r1, #1	@ 000b60c2 0121
.org 0xb60c4
	ands r0, r1	@ 000b60c4 0840
.org 0xb60c6
	adds r4, r0, #2	@ 000b60c6 841c
.org 0xb60c8
	cmp r4, #0	@ 000b60c8 002c
.org 0xb60ca
	ble.n 0xb613c	@ 000b60ca 37dd
.org 0xb60cc
	adds r6, r2, #0	@ 000b60cc 161c
.org 0xb60ce
	mov sl, r7	@ 000b60ce ba46
.org 0xb60d0
	mov r9, r3	@ 000b60d0 9946
.org 0xb60d2
	movs r7, #31	@ 000b60d2 1f27
.org 0xb60d4
	mov r8, r7	@ 000b60d4 b846
.org 0xb60d6
	movs r2, #1	@ 000b60d6 0122
.org 0xb60d8
	ands r2, r4	@ 000b60d8 2240
.org 0xb60da
	lsls r2, r2, #3	@ 000b60da d200
.org 0xb60dc
	mov r1, sp	@ 000b60dc 6946
.org 0xb60de
	adds r0, r1, r2	@ 000b60de 8818
.org 0xb60e0
	ldr r1, [r5, #84]	@ 000b60e0 696d
.org 0xb60e2
	ldr r0, [r0, #0]	@ 000b60e2 0068
.org 0xb60e4
	adds r1, r1, r0	@ 000b60e4 0918
.org 0xb60e6
	ldr r0, [r6, #0]	@ 000b60e6 3068
.org 0xb60e8
	mov r3, sl	@ 000b60e8 5346
.org 0xb60ea
	muls r3, r0	@ 000b60ea 4343
.org 0xb60ec
	adds r0, r3, #0	@ 000b60ec 181c
.org 0xb60ee
	add r0, r9	@ 000b60ee 4844
.org 0xb60f0
	lsls r0, r0, #1	@ 000b60f0 4000
.org 0xb60f2
	lsrs r3, r0, #1	@ 000b60f2 4308
.org 0xb60f4
	str r3, [r6, #0]	@ 000b60f4 3360
.org 0xb60f6
	lsrs r0, r0, #17	@ 000b60f6 400c
.org 0xb60f8
	mov r7, r8	@ 000b60f8 4746
.org 0xb60fa
	ands r0, r7	@ 000b60fa 3840
.org 0xb60fc
	lsls r0, r0, #8	@ 000b60fc 0002
.org 0xb60fe
	ldr r7, [pc, #92]	@ 000b60fe 174f
.org 0xb6100
	adds r0, r0, r7	@ 000b6100 c019
.org 0xb6102
	adds r1, r1, r0	@ 000b6102 0918
.org 0xb6104
	str r1, [sp, #16]	@ 000b6104 0491
.org 0xb6106
	add r0, sp, #4	@ 000b6106 01a8
.org 0xb6108
	adds r0, r0, r2	@ 000b6108 8018
.org 0xb610a
	ldr r2, [r5, #88]	@ 000b610a aa6d
.org 0xb610c
	ldr r0, [r0, #0]	@ 000b610c 0068
.org 0xb610e
	adds r2, r2, r0	@ 000b610e 1218
.org 0xb6110
	mov r0, sl	@ 000b6110 5046
.org 0xb6112
	muls r0, r3	@ 000b6112 5843
.org 0xb6114
	add r0, r9	@ 000b6114 4844
.org 0xb6116
	lsls r0, r0, #1	@ 000b6116 4000
.org 0xb6118
	lsrs r1, r0, #1	@ 000b6118 4108
.org 0xb611a
	str r1, [r6, #0]	@ 000b611a 3160
.org 0xb611c
	lsrs r0, r0, #17	@ 000b611c 400c
.org 0xb611e
	mov r1, r8	@ 000b611e 4146
.org 0xb6120
	ands r0, r1	@ 000b6120 0840
.org 0xb6122
	lsls r0, r0, #8	@ 000b6122 0002
.org 0xb6124
	adds r0, r0, r7	@ 000b6124 c019
.org 0xb6126
	adds r2, r2, r0	@ 000b6126 1218
.org 0xb6128
	add r1, sp, #16	@ 000b6128 04a9
.org 0xb612a
	str r2, [r1, #4]	@ 000b612a 4a60
.org 0xb612c
	adds r0, r5, #0	@ 000b612c 281c
.org 0xb612e
	movs r2, #0	@ 000b612e 0022
.org 0xb6130
	movs r3, #0	@ 000b6130 0023
.org 0xb6132
	bl 0xe83c8	@ 000b6132 32f049f9
.org 0xb6136
	subs r4, #1	@ 000b6136 013c
.org 0xb6138
	cmp r4, #0	@ 000b6138 002c
.org 0xb613a
	bgt.n 0xb60d6	@ 000b613a ccdc
.org 0xb613c
	add sp, #24	@ 000b613c 06b0
.org 0xb613e
	pop {r3, r4, r5}	@ 000b613e 38bc
.org 0xb6140
	mov r8, r3	@ 000b6140 9846
.org 0xb6142
	mov r9, r4	@ 000b6142 a146
.org 0xb6144
	mov sl, r5	@ 000b6144 aa46
.org 0xb6146
	pop {r4, r5, r6, r7}	@ 000b6146 f0bc
.org 0xb6148
	pop {r0}	@ 000b6148 01bc
.org 0xb614a
	bx r0	@ 000b614a 0047
