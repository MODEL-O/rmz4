@ FUN_080b90a8  entry 0x080b90a8  size 212
.thumb
.org 0xb90a8
FUN_080b90a8:
	push {r4, r5, lr}	@ 000b90a8 30b5
.org 0xb90aa
	adds r5, r0, #0	@ 000b90aa 051c
.org 0xb90ac
	ldr r4, [r5, #40]	@ 000b90ac ac6a
.org 0xb90ae
	ldrb r0, [r5, #15]	@ 000b90ae e87b
.org 0xb90b0
	cmp r0, #0	@ 000b90b0 0028
.org 0xb90b2
	bne.n 0xb9154	@ 000b90b2 4fd1
.org 0xb90b4
	adds r0, r5, #0	@ 000b90b4 281c
.org 0xb90b6
	adds r0, #116	@ 000b90b6 7430
.org 0xb90b8
	ldr r1, [pc, #84]	@ 000b90b8 1549
.org 0xb90ba
	bl 0x5784	@ 000b90ba 4cf763fb
.org 0xb90be
	ldr r1, [pc, #84]	@ 000b90be 1549
.org 0xb90c0
	ldr r0, [pc, #84]	@ 000b90c0 1548
.org 0xb90c2
	strh r0, [r1, #0]	@ 000b90c2 0880
.org 0xb90c4
	adds r2, r5, #0	@ 000b90c4 2a1c
.org 0xb90c6
	adds r2, #69	@ 000b90c6 4532
.org 0xb90c8
	ldrb r1, [r2, #0]	@ 000b90c8 1178
.org 0xb90ca
	movs r0, #13	@ 000b90ca 0d20
.org 0xb90cc
	negs r0, r0	@ 000b90cc 4042
.org 0xb90ce
	ands r0, r1	@ 000b90ce 0840
.org 0xb90d0
	movs r1, #4	@ 000b90d0 0421
.org 0xb90d2
	orrs r0, r1	@ 000b90d2 0843
.org 0xb90d4
	strb r0, [r2, #0]	@ 000b90d4 1070
.org 0xb90d6
	adds r0, r5, #0	@ 000b90d6 281c
.org 0xb90d8
	bl 0x1ceec	@ 000b90d8 63f708ff
.org 0xb90dc
	movs r1, #187	@ 000b90dc bb21
.org 0xb90de
	lsls r1, r1, #8	@ 000b90de 0902
.org 0xb90e0
	adds r0, r5, #0	@ 000b90e0 281c
.org 0xb90e2
	bl 0x1cf00	@ 000b90e2 63f70dff
.org 0xb90e6
	adds r1, r5, #0	@ 000b90e6 291c
.org 0xb90e8
	adds r1, #37	@ 000b90e8 2531
.org 0xb90ea
	movs r0, #24	@ 000b90ea 1820
.org 0xb90ec
	strb r0, [r1, #0]	@ 000b90ec 0870
.org 0xb90ee
	movs r2, #0	@ 000b90ee 0022
.org 0xb90f0
	adds r0, r4, #0	@ 000b90f0 201c
.org 0xb90f2
	adds r0, #180	@ 000b90f2 b430
.org 0xb90f4
	ldr r0, [r0, #0]	@ 000b90f4 0068
.org 0xb90f6
	movs r1, #240	@ 000b90f6 f021
.org 0xb90f8
	lsls r1, r1, #7	@ 000b90f8 c901
.org 0xb90fa
	adds r0, r0, r1	@ 000b90fa 4018
.org 0xb90fc
	ldr r1, [r5, #84]	@ 000b90fc 696d
.org 0xb90fe
	cmp r0, r1	@ 000b90fe 8842
.org 0xb9100
	blt.n 0xb9104	@ 000b9100 00db
.org 0xb9102
	movs r2, #1	@ 000b9102 0122
.org 0xb9104
	cmp r2, #0	@ 000b9104 002a
.org 0xb9106
	beq.n 0xb911c	@ 000b9106 09d0
.org 0xb9108
	ldrb r0, [r5, #10]	@ 000b9108 a87a
.org 0xb910a
	movs r1, #16	@ 000b910a 1021
.org 0xb910c
	orrs r0, r1	@ 000b910c 0843
.org 0xb910e
	b.n 0xb9122	@ 000b910e 08e0
.org 0xb9110
	.byte 0x14,0x43,0x86,0x08	@ 000b9110 data
.org 0xb9114
	.byte 0x40,0x0a,0x00,0x02	@ 000b9114 data
.org 0xb9118
	.byte 0x10,0x3f,0x00,0x00	@ 000b9118 data
.org 0xb911c
	ldrb r1, [r5, #10]	@ 000b911c a97a
.org 0xb911e
	movs r0, #239	@ 000b911e ef20
.org 0xb9120
	ands r0, r1	@ 000b9120 0840
.org 0xb9122
	strb r0, [r5, #10]	@ 000b9122 a872
.org 0xb9124
	adds r1, r2, #0	@ 000b9124 111c
.org 0xb9126
	adds r0, r5, #0	@ 000b9126 281c
.org 0xb9128
	adds r0, #76	@ 000b9128 4c30
.org 0xb912a
	strb r1, [r0, #0]	@ 000b912a 0170
.org 0xb912c
	adds r3, r5, #0	@ 000b912c 2b1c
.org 0xb912e
	adds r3, #74	@ 000b912e 4a33
.org 0xb9130
	lsls r1, r1, #4	@ 000b9130 0901
.org 0xb9132
	ldrb r2, [r3, #0]	@ 000b9132 1a78
.org 0xb9134
	movs r0, #17	@ 000b9134 1120
.org 0xb9136
	negs r0, r0	@ 000b9136 4042
.org 0xb9138
	ands r0, r2	@ 000b9138 1040
.org 0xb913a
	orrs r0, r1	@ 000b913a 0843
.org 0xb913c
	strb r0, [r3, #0]	@ 000b913c 1870
.org 0xb913e
	adds r0, r4, #0	@ 000b913e 201c
.org 0xb9140
	adds r0, #184	@ 000b9140 b830
.org 0xb9142
	ldr r0, [r0, #0]	@ 000b9142 0068
.org 0xb9144
	ldr r1, [pc, #64]	@ 000b9144 1049
.org 0xb9146
	adds r0, r0, r1	@ 000b9146 4018
.org 0xb9148
	str r0, [r5, #88]	@ 000b9148 a865
.org 0xb914a
	movs r0, #16	@ 000b914a 1020
.org 0xb914c
	strb r0, [r5, #18]	@ 000b914c a874
.org 0xb914e
	ldrb r0, [r5, #15]	@ 000b914e e87b
.org 0xb9150
	adds r0, #1	@ 000b9150 0130
.org 0xb9152
	strb r0, [r5, #15]	@ 000b9152 e873
.org 0xb9154
	adds r0, r5, #0	@ 000b9154 281c
.org 0xb9156
	bl 0x1cff0	@ 000b9156 63f74bff
.org 0xb915a
	ldrb r3, [r5, #18]	@ 000b915a ab7c
.org 0xb915c
	subs r3, #1	@ 000b915c 013b
.org 0xb915e
	strb r3, [r5, #18]	@ 000b915e ab74
.org 0xb9160
	ldrb r2, [r5, #18]	@ 000b9160 aa7c
.org 0xb9162
	ldr r4, [pc, #40]	@ 000b9162 0a4c
.org 0xb9164
	movs r0, #16	@ 000b9164 1020
.org 0xb9166
	subs r0, r0, r2	@ 000b9166 801a
.org 0xb9168
	movs r1, #31	@ 000b9168 1f21
.org 0xb916a
	ands r0, r1	@ 000b916a 0840
.org 0xb916c
	lsls r2, r2, #8	@ 000b916c 1202
.org 0xb916e
	orrs r0, r2	@ 000b916e 1043
.org 0xb9170
	movs r1, #0	@ 000b9170 0021
.org 0xb9172
	strh r0, [r4, #2]	@ 000b9172 6080
.org 0xb9174
	lsls r3, r3, #24	@ 000b9174 1b06
.org 0xb9176
	cmp r3, #0	@ 000b9176 002b
.org 0xb9178
	bne.n 0xb9182	@ 000b9178 03d1
.org 0xb917a
	movs r0, #3	@ 000b917a 0320
