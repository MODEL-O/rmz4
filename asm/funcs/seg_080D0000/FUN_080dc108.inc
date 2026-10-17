@ FUN_080dc108  entry 0x080dc108  size 138
.thumb
.org 0xdc108
FUN_080dc108:
	push {r4, r5, r6, r7, lr}	@ 000dc108 f0b5
.org 0xdc10a
	mov r7, sl	@ 000dc10a 5746
.org 0xdc10c
	mov r6, r9	@ 000dc10c 4e46
.org 0xdc10e
	mov r5, r8	@ 000dc10e 4546
.org 0xdc110
	push {r5, r6, r7}	@ 000dc110 e0b4
.org 0xdc112
	sub sp, #4	@ 000dc112 81b0
.org 0xdc114
	mov sl, r0	@ 000dc114 8246
.org 0xdc116
	adds r6, r1, #0	@ 000dc116 0e1c
.org 0xdc118
	mov r9, r2	@ 000dc118 9146
.org 0xdc11a
	ldr r0, [sp, #36]	@ 000dc11a 0998
.org 0xdc11c
	lsls r3, r3, #24	@ 000dc11c 1b06
.org 0xdc11e
	lsrs r7, r3, #24	@ 000dc11e 1f0e
.org 0xdc120
	lsls r0, r0, #24	@ 000dc120 0006
.org 0xdc122
	lsrs r0, r0, #24	@ 000dc122 000e
.org 0xdc124
	mov r8, r0	@ 000dc124 8046
.org 0xdc126
	movs r5, #0	@ 000dc126 0025
.org 0xdc128
	cmp r5, r7	@ 000dc128 bd42
.org 0xdc12a
	bge.n 0xdc182	@ 000dc12a 2ada
.org 0xdc12c
	movs r3, #0	@ 000dc12c 0023
.org 0xdc12e
	movs r4, #1	@ 000dc12e 0124
.org 0xdc130
	ldr r0, [pc, #96]	@ 000dc130 1848
.org 0xdc132
	ldr r0, [r0, #0]	@ 000dc132 0068
.org 0xdc134
	str r3, [sp, #0]	@ 000dc134 0093
.org 0xdc136
	bl 0x5500	@ 000dc136 29f7e3f9
.org 0xdc13a
	adds r1, r0, #0	@ 000dc13a 011c
.org 0xdc13c
	ldr r3, [sp, #0]	@ 000dc13c 009b
.org 0xdc13e
	cmp r1, #0	@ 000dc13e 0029
.org 0xdc140
	beq.n 0xdc17c	@ 000dc140 1cd0
.org 0xdc142
	adds r0, #37	@ 000dc142 2530
.org 0xdc144
	strb r4, [r0, #0]	@ 000dc144 0470
.org 0xdc146
	movs r0, #43	@ 000dc146 2b20
.org 0xdc148
	strb r0, [r1, #9]	@ 000dc148 4872
.org 0xdc14a
	ldr r2, [pc, #76]	@ 000dc14a 134a
.org 0xdc14c
	ldr r0, [r2, #0]	@ 000dc14c 1068
.org 0xdc14e
	ldr r0, [r0, #0]	@ 000dc14e 0068
.org 0xdc150
	str r0, [r1, #20]	@ 000dc150 4861
.org 0xdc152
	strh r3, [r1, #32]	@ 000dc152 0b84
.org 0xdc154
	adds r2, r1, #0	@ 000dc154 0a1c
.org 0xdc156
	adds r2, #34	@ 000dc156 2232
.org 0xdc158
	strb r3, [r2, #0]	@ 000dc158 1370
.org 0xdc15a
	strb r4, [r1, #16]	@ 000dc15a 0c74
.org 0xdc15c
	strb r5, [r1, #17]	@ 000dc15c 4d74
.org 0xdc15e
	mov r0, sl	@ 000dc15e 5046
.org 0xdc160
	str r0, [r1, #40]	@ 000dc160 8862
.org 0xdc162
	mov r0, r9	@ 000dc162 4846
.org 0xdc164
	str r0, [r1, #116]	@ 000dc164 4867
.org 0xdc166
	ldr r0, [r6, #0]	@ 000dc166 3068
.org 0xdc168
	str r0, [r1, #84]	@ 000dc168 4865
.org 0xdc16a
	ldr r0, [r6, #4]	@ 000dc16a 7068
.org 0xdc16c
	str r0, [r1, #88]	@ 000dc16c 8865
.org 0xdc16e
	adds r0, r1, #0	@ 000dc16e 081c
.org 0xdc170
	adds r0, #120	@ 000dc170 7830
.org 0xdc172
	strb r4, [r0, #0]	@ 000dc172 0470
.org 0xdc174
	adds r0, #1	@ 000dc174 0130
.org 0xdc176
	strb r4, [r0, #0]	@ 000dc176 0470
.org 0xdc178
	mov r0, r8	@ 000dc178 4046
.org 0xdc17a
	strb r0, [r2, #0]	@ 000dc17a 1070
.org 0xdc17c
	adds r5, #1	@ 000dc17c 0135
.org 0xdc17e
	cmp r5, r7	@ 000dc17e bd42
.org 0xdc180
	blt.n 0xdc130	@ 000dc180 d6db
.org 0xdc182
	add sp, #4	@ 000dc182 01b0
.org 0xdc184
	pop {r3, r4, r5}	@ 000dc184 38bc
.org 0xdc186
	mov r8, r3	@ 000dc186 9846
.org 0xdc188
	mov r9, r4	@ 000dc188 a146
.org 0xdc18a
	mov sl, r5	@ 000dc18a aa46
.org 0xdc18c
	pop {r4, r5, r6, r7}	@ 000dc18c f0bc
.org 0xdc18e
	pop {r0}	@ 000dc18e 01bc
.org 0xdc190
	bx r0	@ 000dc190 0047
