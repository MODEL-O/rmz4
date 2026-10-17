@ FUN_0807c114  entry 0x0807c114  size 204
.thumb
.org 0x7c114
FUN_0807c114:
	push {r4, r5, r6, r7, lr}	@ 0007c114 f0b5
.org 0x7c116
	mov r7, r8	@ 0007c116 4746
.org 0x7c118
	push {r7}	@ 0007c118 80b4
.org 0x7c11a
	sub sp, #8	@ 0007c11a 82b0
.org 0x7c11c
	adds r4, r0, #0	@ 0007c11c 041c
.org 0x7c11e
	ldr r1, [pc, #192]	@ 0007c11e 3049
.org 0x7c120
	mov r0, sp	@ 0007c120 6846
.org 0x7c122
	movs r2, #2	@ 0007c122 0222
.org 0x7c124
	bl 0x129258	@ 0007c124 adf098f8
.org 0x7c128
	add r0, sp, #4	@ 0007c128 01a8
.org 0x7c12a
	mov r8, r0	@ 0007c12a 8046
.org 0x7c12c
	ldr r1, [pc, #180]	@ 0007c12c 2d49
.org 0x7c12e
	movs r2, #2	@ 0007c12e 0222
.org 0x7c130
	bl 0x129258	@ 0007c130 adf092f8
.org 0x7c134
	ldrb r0, [r4, #15]	@ 0007c134 e07b
.org 0x7c136
	cmp r0, #0	@ 0007c136 0028
.org 0x7c138
	bne.n 0x7c14c	@ 0007c138 08d1
.org 0x7c13a
	adds r0, r4, #0	@ 0007c13a 201c
.org 0x7c13c
	movs r1, #2	@ 0007c13c 0221
.org 0x7c13e
	bl 0x7e8c8	@ 0007c13e 02f0c3fb
.org 0x7c142
	movs r0, #16	@ 0007c142 1020
.org 0x7c144
	str r0, [r4, #104]	@ 0007c144 a066
.org 0x7c146
	ldrb r0, [r4, #15]	@ 0007c146 e07b
.org 0x7c148
	adds r0, #1	@ 0007c148 0130
.org 0x7c14a
	strb r0, [r4, #15]	@ 0007c14a e073
.org 0x7c14c
	adds r5, r4, #0	@ 0007c14c 251c
.org 0x7c14e
	adds r5, #188	@ 0007c14e bc35
.org 0x7c150
	ldrb r0, [r5, #0]	@ 0007c150 2878
.org 0x7c152
	cmp r0, #0	@ 0007c152 0028
.org 0x7c154
	beq.n 0x7c15c	@ 0007c154 02d0
.org 0x7c156
	adds r0, r4, #0	@ 0007c156 201c
.org 0x7c158
	bl 0x1cff0	@ 0007c158 a0f74aff
.org 0x7c15c
	adds r0, r4, #0	@ 0007c15c 201c
.org 0x7c15e
	adds r0, #116	@ 0007c15e 7430
.org 0x7c160
	ldr r3, [pc, #132]	@ 0007c160 214b
.org 0x7c162
	ldr r2, [pc, #136]	@ 0007c162 224a
.org 0x7c164
	ldrb r1, [r5, #0]	@ 0007c164 2978
.org 0x7c166
	lsls r1, r1, #1	@ 0007c166 4900
.org 0x7c168
	adds r1, r1, r2	@ 0007c168 8918
.org 0x7c16a
	ldrh r2, [r1, #0]	@ 0007c16a 0a88
.org 0x7c16c
	lsls r2, r2, #2	@ 0007c16c 9200
.org 0x7c16e
	adds r2, r2, r3	@ 0007c16e d218
.org 0x7c170
	adds r1, r4, #0	@ 0007c170 211c
.org 0x7c172
	adds r1, #113	@ 0007c172 7131
.org 0x7c174
	ldrb r1, [r1, #0]	@ 0007c174 0978
.org 0x7c176
	lsls r1, r1, #24	@ 0007c176 0906
.org 0x7c178
	asrs r1, r1, #24	@ 0007c178 0916
.org 0x7c17a
	ldr r2, [r2, #0]	@ 0007c17a 1268
.org 0x7c17c
	lsls r1, r1, #2	@ 0007c17c 8900
.org 0x7c17e
	adds r1, r1, r2	@ 0007c17e 8918
.org 0x7c180
	ldr r1, [r1, #0]	@ 0007c180 0968
.org 0x7c182
	bl 0x5784	@ 0007c182 89f7fffa
.org 0x7c186
	ldr r0, [r4, #104]	@ 0007c186 a06e
.org 0x7c188
	subs r3, r0, #1	@ 0007c188 431e
.org 0x7c18a
	str r3, [r4, #104]	@ 0007c18a a366
.org 0x7c18c
	cmp r3, #0	@ 0007c18c 002b
.org 0x7c18e
	bne.n 0x7c1d4	@ 0007c18e 21d1
.org 0x7c190
	movs r5, #0	@ 0007c190 0025
.org 0x7c192
	adds r0, r4, #0	@ 0007c192 201c
.org 0x7c194
	adds r0, #180	@ 0007c194 b430
.org 0x7c196
	ldr r6, [r0, #0]	@ 0007c196 0668
.org 0x7c198
	movs r1, #240	@ 0007c198 f021
.org 0x7c19a
	lsls r1, r1, #7	@ 0007c19a c901
.org 0x7c19c
	mov ip, r1	@ 0007c19c 8c46
.org 0x7c19e
	adds r1, r6, r1	@ 0007c19e 7118
.org 0x7c1a0
	ldr r0, [r4, #84]	@ 0007c1a0 606d
.org 0x7c1a2
	cmp r1, r0	@ 0007c1a2 8142
.org 0x7c1a4
	bge.n 0x7c1a8	@ 0007c1a4 00da
.org 0x7c1a6
	movs r5, #1	@ 0007c1a6 0125
.org 0x7c1a8
	adds r2, r4, #0	@ 0007c1a8 221c
.org 0x7c1aa
	adds r2, #200	@ 0007c1aa c832
.org 0x7c1ac
	ldr r1, [pc, #64]	@ 0007c1ac 1049
.org 0x7c1ae
	mov r7, sp	@ 0007c1ae 6f46
.org 0x7c1b0
	adds r0, r7, r5	@ 0007c1b0 7819
.org 0x7c1b2
	ldrb r0, [r0, #0]	@ 0007c1b2 0078
.org 0x7c1b4
	lsls r0, r0, #2	@ 0007c1b4 8000
.org 0x7c1b6
	adds r0, r0, r1	@ 0007c1b6 4018
.org 0x7c1b8
	ldr r0, [r0, #0]	@ 0007c1b8 0068
.org 0x7c1ba
	add r0, ip	@ 0007c1ba 6044
.org 0x7c1bc
	adds r0, r6, r0	@ 0007c1bc 3018
.org 0x7c1be
	str r0, [r2, #0]	@ 0007c1be 1060
.org 0x7c1c0
	mov r1, r8	@ 0007c1c0 4146
.org 0x7c1c2
	adds r0, r1, r5	@ 0007c1c2 4819
.org 0x7c1c4
	ldrb r0, [r0, #0]	@ 0007c1c4 0078
.org 0x7c1c6
	adds r1, r4, #0	@ 0007c1c6 211c
.org 0x7c1c8
	adds r1, #190	@ 0007c1c8 be31
.org 0x7c1ca
	strb r0, [r1, #0]	@ 0007c1ca 0870
.org 0x7c1cc
	ldrb r0, [r4, #14]	@ 0007c1cc a07b
.org 0x7c1ce
	adds r0, #1	@ 0007c1ce 0130
.org 0x7c1d0
	strb r0, [r4, #14]	@ 0007c1d0 a073
.org 0x7c1d2
	strb r3, [r4, #15]	@ 0007c1d2 e373
.org 0x7c1d4
	add sp, #8	@ 0007c1d4 02b0
.org 0x7c1d6
	pop {r3}	@ 0007c1d6 08bc
.org 0x7c1d8
	mov r8, r3	@ 0007c1d8 9846
.org 0x7c1da
	pop {r4, r5, r6, r7}	@ 0007c1da f0bc
.org 0x7c1dc
	pop {r0}	@ 0007c1dc 01bc
.org 0x7c1de
	bx r0	@ 0007c1de 0047
