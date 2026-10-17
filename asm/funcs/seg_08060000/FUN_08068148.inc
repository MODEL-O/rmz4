@ FUN_08068148  entry 0x08068148  size 92
.thumb
.org 0x68148
FUN_08068148:
	push {r4, r5, lr}	@ 00068148 30b5
.org 0x6814a
	adds r4, r0, #0	@ 0006814a 041c
.org 0x6814c
	ldrb r5, [r4, #14]	@ 0006814c a57b
.org 0x6814e
	cmp r5, #0	@ 0006814e 002d
.org 0x68150
	bne.n 0x68186	@ 00068150 19d1
.org 0x68152
	ldr r1, [pc, #80]	@ 00068152 1449
.org 0x68154
	bl 0x1cf00	@ 00068154 b4f7d4fe
.org 0x68158
	adds r0, r4, #0	@ 00068158 201c
.org 0x6815a
	adds r0, #116	@ 0006815a 7430
.org 0x6815c
	ldr r1, [pc, #72]	@ 0006815c 1249
.org 0x6815e
	bl 0x5784	@ 0006815e 9df711fb
.org 0x68162
	adds r0, r4, #0	@ 00068162 201c
.org 0x68164
	adds r0, #76	@ 00068164 4c30
.org 0x68166
	strb r5, [r0, #0]	@ 00068166 0570
.org 0x68168
	adds r2, r4, #0	@ 00068168 221c
.org 0x6816a
	adds r2, #74	@ 0006816a 4a32
.org 0x6816c
	ldrb r1, [r2, #0]	@ 0006816c 1178
.org 0x6816e
	movs r0, #17	@ 0006816e 1120
.org 0x68170
	negs r0, r0	@ 00068170 4042
.org 0x68172
	ands r0, r1	@ 00068172 0840
.org 0x68174
	strb r0, [r2, #0]	@ 00068174 1070
.org 0x68176
	ldrb r1, [r4, #10]	@ 00068176 a17a
.org 0x68178
	movs r0, #239	@ 00068178 ef20
.org 0x6817a
	ands r0, r1	@ 0006817a 0840
.org 0x6817c
	strb r0, [r4, #10]	@ 0006817c a072
.org 0x6817e
	strb r5, [r4, #15]	@ 0006817e e573
.org 0x68180
	ldrb r0, [r4, #14]	@ 00068180 a07b
.org 0x68182
	adds r0, #1	@ 00068182 0130
.org 0x68184
	strb r0, [r4, #14]	@ 00068184 a073
.org 0x68186
	adds r0, r4, #0	@ 00068186 201c
.org 0x68188
	bl 0x1cff0	@ 00068188 b4f732ff
.org 0x6818c
	adds r0, r4, #0	@ 0006818c 201c
.org 0x6818e
	adds r0, #115	@ 0006818e 7330
.org 0x68190
	ldrb r0, [r0, #0]	@ 00068190 0078
.org 0x68192
	cmp r0, #3	@ 00068192 0328
.org 0x68194
	bne.n 0x6819e	@ 00068194 03d1
.org 0x68196
	movs r1, #0	@ 00068196 0021
.org 0x68198
	movs r0, #28	@ 00068198 1c20
.org 0x6819a
	strb r0, [r4, #13]	@ 0006819a 6073
.org 0x6819c
	strb r1, [r4, #14]	@ 0006819c a173
.org 0x6819e
	pop {r4, r5}	@ 0006819e 30bc
.org 0x681a0
	pop {r0}	@ 000681a0 01bc
.org 0x681a2
	bx r0	@ 000681a2 0047
