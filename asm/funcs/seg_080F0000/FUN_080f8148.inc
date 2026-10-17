@ FUN_080f8148  entry 0x080f8148  size 116
.thumb
.org 0xf8148
FUN_080f8148:
	push {r4, r5, r6, lr}	@ 000f8148 70b5
.org 0xf814a
	adds r6, r0, #0	@ 000f814a 061c
.org 0xf814c
	bl 0x1cc9c	@ 000f814c 24f7a6fd
.org 0xf8150
	ldrb r1, [r6, #10]	@ 000f8150 b17a
.org 0xf8152
	movs r0, #1	@ 000f8152 0120
.org 0xf8154
	movs r4, #0	@ 000f8154 0024
.org 0xf8156
	adds r2, r0, #0	@ 000f8156 021c
.org 0xf8158
	orrs r2, r1	@ 000f8158 0a43
.org 0xf815a
	movs r0, #2	@ 000f815a 0220
.org 0xf815c
	orrs r2, r0	@ 000f815c 0243
.org 0xf815e
	orrs r2, r4	@ 000f815e 2243
.org 0xf8160
	strb r2, [r6, #10]	@ 000f8160 b272
.org 0xf8162
	ldrb r0, [r6, #17]	@ 000f8162 707c
.org 0xf8164
	cmp r0, #0	@ 000f8164 0028
.org 0xf8166
	bne.n 0xf8188	@ 000f8166 0fd1
.org 0xf8168
	movs r1, #1	@ 000f8168 0121
.org 0xf816a
	movs r0, #16	@ 000f816a 1020
.org 0xf816c
	orrs r2, r0	@ 000f816c 0243
.org 0xf816e
	strb r2, [r6, #10]	@ 000f816e b272
.org 0xf8170
	adds r0, r6, #0	@ 000f8170 301c
.org 0xf8172
	adds r0, #76	@ 000f8172 4c30
.org 0xf8174
	strb r1, [r0, #0]	@ 000f8174 0170
.org 0xf8176
	adds r3, r6, #0	@ 000f8176 331c
.org 0xf8178
	adds r3, #74	@ 000f8178 4a33
.org 0xf817a
	movs r2, #16	@ 000f817a 1022
.org 0xf817c
	ldrb r1, [r3, #0]	@ 000f817c 1978
.org 0xf817e
	movs r0, #17	@ 000f817e 1120
.org 0xf8180
	negs r0, r0	@ 000f8180 4042
.org 0xf8182
	ands r0, r1	@ 000f8182 0840
.org 0xf8184
	orrs r0, r2	@ 000f8184 1043
.org 0xf8186
	strb r0, [r3, #0]	@ 000f8186 1870
.org 0xf8188
	ldrb r0, [r6, #10]	@ 000f8188 b07a
.org 0xf818a
	movs r1, #4	@ 000f818a 0421
.org 0xf818c
	orrs r0, r1	@ 000f818c 0843
.org 0xf818e
	movs r5, #0	@ 000f818e 0025
.org 0xf8190
	strb r0, [r6, #10]	@ 000f8190 b072
.org 0xf8192
	adds r4, r6, #0	@ 000f8192 341c
.org 0xf8194
	adds r4, #116	@ 000f8194 7434
.org 0xf8196
	ldr r1, [pc, #36]	@ 000f8196 0949
.org 0xf8198
	adds r2, r6, #0	@ 000f8198 321c
.org 0xf819a
	adds r2, #84	@ 000f819a 5432
.org 0xf819c
	adds r0, r4, #0	@ 000f819c 201c
.org 0xf819e
	movs r3, #0	@ 000f819e 0023
.org 0xf81a0
	bl 0x5760	@ 000f81a0 0df7defa
.org 0xf81a4
	str r6, [r4, #44]	@ 000f81a4 e662
.org 0xf81a6
	str r5, [r4, #36]	@ 000f81a6 6562
.org 0xf81a8
	ldr r1, [pc, #20]	@ 000f81a8 0549
.org 0xf81aa
	adds r0, r6, #0	@ 000f81aa 301c
.org 0xf81ac
	bl 0x1cf00	@ 000f81ac 24f7a8fe
.org 0xf81b0
	adds r0, r6, #0	@ 000f81b0 301c
.org 0xf81b2
	adds r0, #180	@ 000f81b2 b430
.org 0xf81b4
	strb r5, [r0, #0]	@ 000f81b4 0570
.org 0xf81b6
	pop {r4, r5, r6}	@ 000f81b6 70bc
.org 0xf81b8
	pop {r0}	@ 000f81b8 01bc
.org 0xf81ba
	bx r0	@ 000f81ba 0047
