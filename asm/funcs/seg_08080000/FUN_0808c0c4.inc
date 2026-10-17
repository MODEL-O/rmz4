@ FUN_0808c0c4  entry 0x0808c0c4  size 176
.thumb
.org 0x8c0c4
FUN_0808c0c4:
	push {r4, r5, r6, r7, lr}	@ 0008c0c4 f0b5
.org 0x8c0c6
	mov r7, r8	@ 0008c0c6 4746
.org 0x8c0c8
	push {r7}	@ 0008c0c8 80b4
.org 0x8c0ca
	sub sp, #16	@ 0008c0ca 84b0
.org 0x8c0cc
	adds r4, r0, #0	@ 0008c0cc 041c
.org 0x8c0ce
	mov r1, sp	@ 0008c0ce 6946
.org 0x8c0d0
	ldr r0, [pc, #48]	@ 0008c0d0 0c48
.org 0x8c0d2
	ldmia r0!, {r2, r3, r5}	@ 0008c0d2 2cc8
.org 0x8c0d4
	stmia r1!, {r2, r3, r5}	@ 0008c0d4 2cc1
.org 0x8c0d6
	ldr r0, [r0, #0]	@ 0008c0d6 0068
.org 0x8c0d8
	str r0, [r1, #0]	@ 0008c0d8 0860
.org 0x8c0da
	ldr r6, [r4, #40]	@ 0008c0da a66a
.org 0x8c0dc
	ldrb r0, [r6, #10]	@ 0008c0dc b07a
.org 0x8c0de
	lsrs r7, r0, #4	@ 0008c0de 0709
.org 0x8c0e0
	movs r0, #1	@ 0008c0e0 0120
.org 0x8c0e2
	ands r7, r0	@ 0008c0e2 0740
.org 0x8c0e4
	ldrb r0, [r6, #12]	@ 0008c0e4 307b
.org 0x8c0e6
	cmp r0, #1	@ 0008c0e6 0128
.org 0x8c0e8
	bls.n 0x8c10c	@ 0008c0e8 10d9
.org 0x8c0ea
	ldr r1, [pc, #28]	@ 0008c0ea 0749
.org 0x8c0ec
	ldrb r0, [r4, #9]	@ 0008c0ec 607a
.org 0x8c0ee
	lsls r0, r0, #2	@ 0008c0ee 8000
.org 0x8c0f0
	adds r0, r0, r1	@ 0008c0f0 4018
.org 0x8c0f2
	movs r1, #2	@ 0008c0f2 0221
.org 0x8c0f4
	str r1, [r4, #12]	@ 0008c0f4 e160
.org 0x8c0f6
	ldr r0, [r0, #0]	@ 0008c0f6 0068
.org 0x8c0f8
	ldr r0, [r0, #8]	@ 0008c0f8 8068
.org 0x8c0fa
	str r0, [r4, #20]	@ 0008c0fa 6061
.org 0x8c0fc
	adds r0, r4, #0	@ 0008c0fc 201c
.org 0x8c0fe
	bl 0x8c188	@ 0008c0fe 00f043f8
.org 0x8c102
	b.n 0x8c17a	@ 0008c102 3ae0
.org 0x8c104
	.byte 0x54,0x9b,0x12,0x08	@ 0008c104 data
.org 0x8c108
	.byte 0x40,0xdb,0x85,0x08	@ 0008c108 data
.org 0x8c10c
	adds r0, r4, #0	@ 0008c10c 201c
.org 0x8c10e
	adds r0, #180	@ 0008c10e b430
.org 0x8c110
	ldr r5, [r0, #0]	@ 0008c110 0568
.org 0x8c112
	ldr r3, [r6, #84]	@ 0008c112 736d
.org 0x8c114
	subs r1, r5, r3	@ 0008c114 e91a
.org 0x8c116
	ldr r2, [pc, #28]	@ 0008c116 074a
.org 0x8c118
	adds r1, r1, r2	@ 0008c118 8918
.org 0x8c11a
	ldr r2, [pc, #28]	@ 0008c11a 074a
.org 0x8c11c
	mov r8, r0	@ 0008c11c 8046
.org 0x8c11e
	cmp r1, r2	@ 0008c11e 9142
.org 0x8c120
	bls.n 0x8c164	@ 0008c120 20d9
.org 0x8c122
	subs r0, r3, r5	@ 0008c122 581b
.org 0x8c124
	cmp r0, #0	@ 0008c124 0028
.org 0x8c126
	bge.n 0x8c13c	@ 0008c126 09da
.org 0x8c128
	adds r1, r4, #0	@ 0008c128 211c
.org 0x8c12a
	adds r1, #184	@ 0008c12a b831
.org 0x8c12c
	ldrb r0, [r1, #0]	@ 0008c12c 0878
.org 0x8c12e
	adds r0, #1	@ 0008c12e 0130
.org 0x8c130
	b.n 0x8c144	@ 0008c130 08e0
.org 0x8c132
	.byte 0x00	@ 0008c132 data
.org 0x8c133
	.byte 0x00	@ 0008c133 data
.org 0x8c134
	.byte 0x7f,0x02,0x00,0x00	@ 0008c134 data
.org 0x8c138
	.byte 0xfe,0x04,0x00,0x00	@ 0008c138 data
.org 0x8c13c
	adds r1, r4, #0	@ 0008c13c 211c
.org 0x8c13e
	adds r1, #184	@ 0008c13e b831
.org 0x8c140
	ldrb r0, [r1, #0]	@ 0008c140 0878
.org 0x8c142
	adds r0, #3	@ 0008c142 0330
.org 0x8c144
	strb r0, [r1, #0]	@ 0008c144 0870
.org 0x8c146
	adds r2, r1, #0	@ 0008c146 0a1c
.org 0x8c148
	ldrb r1, [r2, #0]	@ 0008c148 1178
.org 0x8c14a
	movs r0, #3	@ 0008c14a 0320
.org 0x8c14c
	ands r0, r1	@ 0008c14c 0840
.org 0x8c14e
	strb r0, [r2, #0]	@ 0008c14e 1070
.org 0x8c150
	ldrb r0, [r2, #0]	@ 0008c150 1078
.org 0x8c152
	lsls r0, r0, #2	@ 0008c152 8000
.org 0x8c154
	add r0, sp	@ 0008c154 6844
.org 0x8c156
	ldrh r1, [r0, #0]	@ 0008c156 0188
.org 0x8c158
	adds r0, r4, #0	@ 0008c158 201c
.org 0x8c15a
	bl 0x1cf00	@ 0008c15a 90f7d1fe
.org 0x8c15e
	ldr r0, [r6, #84]	@ 0008c15e 706d
.org 0x8c160
	mov r3, r8	@ 0008c160 4346
.org 0x8c162
	str r0, [r3, #0]	@ 0008c162 1860
.org 0x8c164
	adds r0, r4, #0	@ 0008c164 201c
.org 0x8c166
	bl 0x1cff0	@ 0008c166 90f743ff
.org 0x8c16a
	ldr r0, [r6, #84]	@ 0008c16a 706d
.org 0x8c16c
	ldr r1, [r6, #88]	@ 0008c16c b16d
.org 0x8c16e
	str r0, [r4, #84]	@ 0008c16e 6065
.org 0x8c170
	str r1, [r4, #88]	@ 0008c170 a165
.org 0x8c172
	lsls r1, r7, #8	@ 0008c172 3902
