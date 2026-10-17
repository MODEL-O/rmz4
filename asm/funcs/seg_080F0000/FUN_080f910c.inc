@ FUN_080f910c  entry 0x080f910c  size 240
.thumb
.org 0xf910c
FUN_080f910c:
	push {r4, r5, r6, r7, lr}	@ 000f910c f0b5
.org 0xf910e
	mov r7, r8	@ 000f910e 4746
.org 0xf9110
	push {r7}	@ 000f9110 80b4
.org 0xf9112
	sub sp, #8	@ 000f9112 82b0
.org 0xf9114
	adds r7, r0, #0	@ 000f9114 071c
.org 0xf9116
	ldr r0, [r7, #84]	@ 000f9116 786d
.org 0xf9118
	ldr r1, [r7, #88]	@ 000f9118 b96d
.org 0xf911a
	str r0, [sp, #0]	@ 000f911a 0090
.org 0xf911c
	str r1, [sp, #4]	@ 000f911c 0191
.org 0xf911e
	adds r0, r7, #0	@ 000f911e 381c
.org 0xf9120
	adds r0, #84	@ 000f9120 5430
.org 0xf9122
	bl 0xf872c	@ 000f9122 fff703fb
.org 0xf9126
	lsls r0, r0, #24	@ 000f9126 0006
.org 0xf9128
	lsrs r2, r0, #24	@ 000f9128 020e
.org 0xf912a
	adds r1, r7, #0	@ 000f912a 391c
.org 0xf912c
	adds r1, #185	@ 000f912c b931
.org 0xf912e
	movs r0, #0	@ 000f912e 0020
.org 0xf9130
	strb r0, [r1, #0]	@ 000f9130 0870
.org 0xf9132
	cmp r2, #12	@ 000f9132 0c2a
.org 0xf9134
	bne.n 0xf9172	@ 000f9134 1dd1
.org 0xf9136
	movs r4, #1	@ 000f9136 0124
.org 0xf9138
	adds r5, r1, #0	@ 000f9138 0d1c
.org 0xf913a
	mov r6, sp	@ 000f913a 6e46
.org 0xf913c
	ldr r0, [r6, #4]	@ 000f913c 7068
.org 0xf913e
	ldr r1, [pc, #36]	@ 000f913e 0949
.org 0xf9140
	adds r0, r0, r1	@ 000f9140 4018
.org 0xf9142
	movs r1, #0	@ 000f9142 0021
.org 0xf9144
	ldrsb r1, [r5, r1]	@ 000f9144 6956
.org 0xf9146
	lsls r1, r1, #13	@ 000f9146 4903
.org 0xf9148
	adds r0, r0, r1	@ 000f9148 4018
.org 0xf914a
	str r0, [r6, #4]	@ 000f914a 7060
.org 0xf914c
	mov r0, sp	@ 000f914c 6846
.org 0xf914e
	bl 0xf872c	@ 000f914e fff7edfa
.org 0xf9152
	lsls r0, r0, #24	@ 000f9152 0006
.org 0xf9154
	lsrs r2, r0, #24	@ 000f9154 020e
.org 0xf9156
	cmp r2, #12	@ 000f9156 0c2a
.org 0xf9158
	beq.n 0xf9168	@ 000f9158 06d0
.org 0xf915a
	ldrb r0, [r5, #0]	@ 000f915a 2878
.org 0xf915c
	movs r1, #1	@ 000f915c 0121
.org 0xf915e
	eors r0, r1	@ 000f915e 4840
.org 0xf9160
	strb r0, [r5, #0]	@ 000f9160 2870
.org 0xf9162
	b.n 0xf9172	@ 000f9162 06e0
.org 0xf9164
	.byte 0x00,0xf0,0xff,0xff	@ 000f9164 data
.org 0xf9168
	adds r0, r4, #1	@ 000f9168 601c
.org 0xf916a
	lsls r0, r0, #16	@ 000f916a 0004
.org 0xf916c
	lsrs r4, r0, #16	@ 000f916c 040c
.org 0xf916e
	cmp r4, #239	@ 000f916e ef2c
.org 0xf9170
	bls.n 0xf913c	@ 000f9170 e4d9
.org 0xf9172
	movs r4, #0	@ 000f9172 0024
.org 0xf9174
	adds r5, r7, #0	@ 000f9174 3d1c
.org 0xf9176
	adds r5, #185	@ 000f9176 b935
.org 0xf9178
	mov r6, sp	@ 000f9178 6e46
.org 0xf917a
	ldr r0, [r6, #4]	@ 000f917a 7068
.org 0xf917c
	ldr r2, [pc, #36]	@ 000f917c 094a
.org 0xf917e
	adds r0, r0, r2	@ 000f917e 8018
.org 0xf9180
	movs r1, #0	@ 000f9180 0021
.org 0xf9182
	ldrsb r1, [r5, r1]	@ 000f9182 6956
.org 0xf9184
	lsls r1, r1, #13	@ 000f9184 4903
.org 0xf9186
	adds r0, r0, r1	@ 000f9186 4018
.org 0xf9188
	str r0, [r6, #4]	@ 000f9188 7060
.org 0xf918a
	mov r0, sp	@ 000f918a 6846
.org 0xf918c
	bl 0xf872c	@ 000f918c fff7cefa
.org 0xf9190
	lsls r0, r0, #24	@ 000f9190 0006
.org 0xf9192
	lsrs r2, r0, #24	@ 000f9192 020e
.org 0xf9194
	cmp r2, #12	@ 000f9194 0c2a
.org 0xf9196
	beq.n 0xf91a8	@ 000f9196 07d0
.org 0xf9198
	ldrb r0, [r5, #0]	@ 000f9198 2878
.org 0xf919a
	movs r1, #1	@ 000f919a 0121
.org 0xf919c
	eors r0, r1	@ 000f919c 4840
.org 0xf919e
	strb r0, [r5, #0]	@ 000f919e 2870
.org 0xf91a0
	b.n 0xf91b2	@ 000f91a0 07e0
.org 0xf91a2
	.byte 0x00	@ 000f91a2 data
.org 0xf91a3
	.byte 0x00	@ 000f91a3 data
.org 0xf91a4
	.byte 0x00,0xf0,0xff,0xff	@ 000f91a4 data
.org 0xf91a8
	adds r0, r4, #1	@ 000f91a8 601c
.org 0xf91aa
	lsls r0, r0, #16	@ 000f91aa 0004
.org 0xf91ac
	lsrs r4, r0, #16	@ 000f91ac 040c
.org 0xf91ae
	cmp r4, #239	@ 000f91ae ef2c
.org 0xf91b0
	bls.n 0xf917a	@ 000f91b0 e3d9
.org 0xf91b2
	lsls r4, r4, #17	@ 000f91b2 6404
.org 0xf91b4
	lsrs r4, r4, #4	@ 000f91b4 2409
.org 0xf91b6
	lsrs r1, r4, #8	@ 000f91b6 210a
.org 0xf91b8
	ldr r0, [pc, #76]	@ 000f91b8 1348
.org 0xf91ba
	ldr r2, [pc, #80]	@ 000f91ba 144a
.org 0xf91bc
	adds r0, r0, r2	@ 000f91bc 8018
.org 0xf91be
	ldr r0, [r0, #0]	@ 000f91be 0068
.org 0xf91c0
	bl 0x129198	@ 000f91c0 2ff0eaff
.org 0xf91c4
	adds r6, r0, #0	@ 000f91c4 061c
.org 0xf91c6
	lsrs r0, r4, #9	@ 000f91c6 600a
.org 0xf91c8
	cmp r6, r0	@ 000f91c8 8642
.org 0xf91ca
	bcc.n 0xf91d6	@ 000f91ca 04d3
.org 0xf91cc
	subs r6, r6, r0	@ 000f91cc 361a
.org 0xf91ce
	ldrb r0, [r5, #0]	@ 000f91ce 2878
.org 0xf91d0
	movs r1, #1	@ 000f91d0 0121
.org 0xf91d2
	eors r0, r1	@ 000f91d2 4840
.org 0xf91d4
	strb r0, [r5, #0]	@ 000f91d4 2870
.org 0xf91d6
	movs r4, #0	@ 000f91d6 0024
.org 0xf91d8
	cmp r4, r6	@ 000f91d8 b442
.org 0xf91da
	bcs.n 0xf91fa	@ 000f91da 0ed2
.org 0xf91dc
	ldr r0, [pc, #48]	@ 000f91dc 0c48
.org 0xf91de
	mov r8, r0	@ 000f91de 8046
.org 0xf91e0
	mov r1, r8	@ 000f91e0 4146
.org 0xf91e2
	ldr r3, [r1, #4]	@ 000f91e2 4b68
.org 0xf91e4
	adds r0, r7, #0	@ 000f91e4 381c
.org 0xf91e6
	adds r0, #84	@ 000f91e6 5430
.org 0xf91e8
	adds r1, r5, #0	@ 000f91e8 291c
.org 0xf91ea
	movs r2, #1	@ 000f91ea 0122
.org 0xf91ec
	bl 0x128f88	@ 000f91ec 2ff0ccfe
.org 0xf91f0
	adds r0, r4, #1	@ 000f91f0 601c
.org 0xf91f2
	lsls r0, r0, #16	@ 000f91f2 0004
.org 0xf91f4
	lsrs r4, r0, #16	@ 000f91f4 040c
.org 0xf91f6
	cmp r4, r6	@ 000f91f6 b442
.org 0xf91f8
	bcc.n 0xf91e0	@ 000f91f8 f2d3
.org 0xf91fa
	add sp, #8	@ 000f91fa 02b0
