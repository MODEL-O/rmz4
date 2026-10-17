@ FUN_08095120  entry 0x08095120  size 96
.thumb
.org 0x95120
FUN_08095120:
	push {r4, r5, lr}	@ 00095120 30b5
.org 0x95122
	adds r5, r0, #0	@ 00095122 051c
.org 0x95124
	lsls r1, r1, #24	@ 00095124 0906
.org 0x95126
	lsrs r4, r1, #24	@ 00095126 0c0e
.org 0x95128
	ldr r0, [pc, #84]	@ 00095128 1548
.org 0x9512a
	ldr r0, [r0, #0]	@ 0009512a 0068
.org 0x9512c
	bl 0x5500	@ 0009512c 70f7e8f9
.org 0x95130
	mov ip, r0	@ 00095130 8446
.org 0x95132
	cmp r0, #0	@ 00095132 0028
.org 0x95134
	beq.n 0x95178	@ 00095134 20d0
.org 0x95136
	mov r1, ip	@ 00095136 6146
.org 0x95138
	adds r1, #37	@ 00095138 2531
.org 0x9513a
	movs r3, #0	@ 0009513a 0023
.org 0x9513c
	movs r0, #24	@ 0009513c 1820
.org 0x9513e
	strb r0, [r1, #0]	@ 0009513e 0870
.org 0x95140
	ldr r1, [pc, #64]	@ 00095140 1049
.org 0x95142
	movs r0, #26	@ 00095142 1a20
.org 0x95144
	mov r2, ip	@ 00095144 6246
.org 0x95146
	strb r0, [r2, #9]	@ 00095146 5072
.org 0x95148
	ldr r0, [r1, #104]	@ 00095148 886e
.org 0x9514a
	ldr r0, [r0, #0]	@ 0009514a 0068
.org 0x9514c
	str r0, [r2, #20]	@ 0009514c 5061
.org 0x9514e
	movs r2, #0	@ 0009514e 0022
.org 0x95150
	mov r0, ip	@ 00095150 6046
.org 0x95152
	strh r3, [r0, #32]	@ 00095152 0384
.org 0x95154
	adds r0, #34	@ 00095154 2230
.org 0x95156
	strb r2, [r0, #0]	@ 00095156 0270
.org 0x95158
	mov r0, ip	@ 00095158 6046
.org 0x9515a
	ldrb r1, [r0, #11]	@ 0009515a c17a
.org 0x9515c
	movs r0, #16	@ 0009515c 1020
.org 0x9515e
	orrs r0, r1	@ 0009515e 0843
.org 0x95160
	mov r1, ip	@ 00095160 6146
.org 0x95162
	strb r0, [r1, #11]	@ 00095162 c872
.org 0x95164
	ldrb r0, [r1, #28]	@ 00095164 087f
.org 0x95166
	strb r0, [r1, #29]	@ 00095166 4877
.org 0x95168
	str r5, [r1, #40]	@ 00095168 8d62
.org 0x9516a
	strb r2, [r1, #16]	@ 0009516a 0a74
.org 0x9516c
	strb r4, [r1, #17]	@ 0009516c 4c74
.org 0x9516e
	mov r0, ip	@ 0009516e 6046
.org 0x95170
	adds r0, #180	@ 00095170 b430
.org 0x95172
	strb r2, [r0, #0]	@ 00095172 0270
.org 0x95174
	adds r0, #1	@ 00095174 0130
.org 0x95176
	strb r2, [r0, #0]	@ 00095176 0270
.org 0x95178
	mov r0, ip	@ 00095178 6046
.org 0x9517a
	pop {r4, r5}	@ 0009517a 30bc
.org 0x9517c
	pop {r1}	@ 0009517c 02bc
.org 0x9517e
	bx r1	@ 0009517e 0847
