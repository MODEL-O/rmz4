@ FUN_080a0144  entry 0x080a0144  size 116
.thumb
.org 0xa0144
FUN_080a0144:
	push {r4, r5, lr}	@ 000a0144 30b5
.org 0xa0146
	adds r4, r0, #0	@ 000a0146 041c
.org 0xa0148
	ldrb r5, [r4, #15]	@ 000a0148 e57b
.org 0xa014a
	cmp r5, #0	@ 000a014a 002d
.org 0xa014c
	bne.n 0xa0172	@ 000a014c 11d1
.org 0xa014e
	adds r1, r4, #0	@ 000a014e 211c
.org 0xa0150
	adds r1, #37	@ 000a0150 2531
.org 0xa0152
	movs r0, #24	@ 000a0152 1820
.org 0xa0154
	strb r0, [r1, #0]	@ 000a0154 0870
.org 0xa0156
	adds r0, r4, #0	@ 000a0156 201c
.org 0xa0158
	adds r0, #116	@ 000a0158 7430
.org 0xa015a
	ldr r1, [pc, #92]	@ 000a015a 1749
.org 0xa015c
	bl 0x5784	@ 000a015c 65f712fb
.org 0xa0160
	ldr r1, [pc, #88]	@ 000a0160 1649
.org 0xa0162
	adds r0, r4, #0	@ 000a0162 201c
.org 0xa0164
	bl 0x1cf00	@ 000a0164 7cf7ccfe
.org 0xa0168
	str r5, [r4, #96]	@ 000a0168 2566
.org 0xa016a
	strb r5, [r4, #19]	@ 000a016a e574
.org 0xa016c
	ldrb r0, [r4, #15]	@ 000a016c e07b
.org 0xa016e
	adds r0, #1	@ 000a016e 0130
.org 0xa0170
	strb r0, [r4, #15]	@ 000a0170 e073
.org 0xa0172
	adds r0, r4, #0	@ 000a0172 201c
.org 0xa0174
	bl 0x1cff0	@ 000a0174 7cf73cff
.org 0xa0178
	ldrb r0, [r4, #19]	@ 000a0178 e07c
.org 0xa017a
	cmp r0, #0	@ 000a017a 0028
.org 0xa017c
	bne.n 0xa0198	@ 000a017c 0cd1
.org 0xa017e
	ldr r1, [r4, #96]	@ 000a017e 216e
.org 0xa0180
	adds r0, r4, #0	@ 000a0180 201c
.org 0xa0182
	bl 0xa0a94	@ 000a0182 00f087fc
.org 0xa0186
	strb r0, [r4, #19]	@ 000a0186 e074
.org 0xa0188
	ldr r0, [r4, #96]	@ 000a0188 206e
.org 0xa018a
	adds r0, #64	@ 000a018a 4030
.org 0xa018c
	str r0, [r4, #96]	@ 000a018c 2066
.org 0xa018e
	movs r1, #224	@ 000a018e e021
.org 0xa0190
	lsls r1, r1, #3	@ 000a0190 c900
.org 0xa0192
	cmp r0, r1	@ 000a0192 8842
.org 0xa0194
	ble.n 0xa0198	@ 000a0194 00dd
.org 0xa0196
	str r1, [r4, #96]	@ 000a0196 2166
.org 0xa0198
	adds r0, r4, #0	@ 000a0198 201c
.org 0xa019a
	adds r0, #115	@ 000a019a 7330
.org 0xa019c
	ldrb r0, [r0, #0]	@ 000a019c 0078
.org 0xa019e
	cmp r0, #3	@ 000a019e 0328
.org 0xa01a0
	bne.n 0xa01b2	@ 000a01a0 07d1
.org 0xa01a2
	ldrb r0, [r4, #19]	@ 000a01a2 e07c
.org 0xa01a4
	cmp r0, #0	@ 000a01a4 0028
.org 0xa01a6
	beq.n 0xa01b2	@ 000a01a6 04d0
.org 0xa01a8
	movs r1, #0	@ 000a01a8 0021
.org 0xa01aa
	movs r0, #2	@ 000a01aa 0220
.org 0xa01ac
	strb r0, [r4, #13]	@ 000a01ac 6073
.org 0xa01ae
	strb r1, [r4, #14]	@ 000a01ae a173
.org 0xa01b0
	strb r1, [r4, #15]	@ 000a01b0 e173
.org 0xa01b2
	pop {r4, r5}	@ 000a01b2 30bc
.org 0xa01b4
	pop {r0}	@ 000a01b4 01bc
.org 0xa01b6
	bx r0	@ 000a01b6 0047
