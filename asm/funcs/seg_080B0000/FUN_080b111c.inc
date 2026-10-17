@ FUN_080b111c  entry 0x080b111c  size 84
.thumb
.org 0xb111c
FUN_080b111c:
	push {lr}	@ 000b111c 00b5
.org 0xb111e
	adds r2, r0, #0	@ 000b111e 021c
.org 0xb1120
	ldr r0, [r2, #20]	@ 000b1120 5069
.org 0xb1122
	movs r1, #4	@ 000b1122 0421
.org 0xb1124
	ands r0, r1	@ 000b1124 0840
.org 0xb1126
	cmp r0, #0	@ 000b1126 0028
.org 0xb1128
	bne.n 0xb116c	@ 000b1128 20d1
.org 0xb112a
	ldr r3, [r2, #44]	@ 000b112a d36a
.org 0xb112c
	movs r0, #60	@ 000b112c 3c20
.org 0xb112e
	strb r0, [r3, #18]	@ 000b112e 9874
.org 0xb1130
	adds r1, r3, #0	@ 000b1130 191c
.org 0xb1132
	adds r1, #194	@ 000b1132 c231
.org 0xb1134
	movs r0, #1	@ 000b1134 0120
.org 0xb1136
	strb r0, [r1, #0]	@ 000b1136 0870
.org 0xb1138
	adds r0, r2, #0	@ 000b1138 101c
.org 0xb113a
	adds r0, #35	@ 000b113a 2330
.org 0xb113c
	ldrb r0, [r0, #0]	@ 000b113c 0078
.org 0xb113e
	movs r1, #240	@ 000b113e f021
.org 0xb1140
	ands r1, r0	@ 000b1140 0140
.org 0xb1142
	cmp r1, #16	@ 000b1142 1029
.org 0xb1144
	beq.n 0xb114e	@ 000b1144 03d0
.org 0xb1146
	cmp r1, #32	@ 000b1146 2029
.org 0xb1148
	beq.n 0xb114e	@ 000b1148 01d0
.org 0xb114a
	cmp r1, #48	@ 000b114a 3029
.org 0xb114c
	bne.n 0xb1156	@ 000b114c 03d1
.org 0xb114e
	adds r1, r3, #0	@ 000b114e 191c
.org 0xb1150
	adds r1, #194	@ 000b1150 c231
.org 0xb1152
	movs r0, #15	@ 000b1152 0f20
.org 0xb1154
	strb r0, [r1, #0]	@ 000b1154 0870
.org 0xb1156
	ldr r1, [r3, #44]	@ 000b1156 d96a
.org 0xb1158
	cmp r1, #0	@ 000b1158 0029
.org 0xb115a
	beq.n 0xb116c	@ 000b115a 07d0
.org 0xb115c
	movs r0, #60	@ 000b115c 3c20
.org 0xb115e
	strb r0, [r1, #18]	@ 000b115e 8874
.org 0xb1160
	ldr r0, [r3, #44]	@ 000b1160 d86a
.org 0xb1162
	adds r1, r3, #0	@ 000b1162 191c
.org 0xb1164
	adds r1, #194	@ 000b1164 c231
.org 0xb1166
	ldrb r1, [r1, #0]	@ 000b1166 0978
.org 0xb1168
	adds r0, #194	@ 000b1168 c230
.org 0xb116a
	strb r1, [r0, #0]	@ 000b116a 0170
.org 0xb116c
	pop {r0}	@ 000b116c 01bc
.org 0xb116e
	bx r0	@ 000b116e 0047
