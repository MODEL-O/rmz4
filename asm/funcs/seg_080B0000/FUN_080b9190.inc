@ FUN_080b9190  entry 0x080b9190  size 100
.thumb
.org 0xb9190
FUN_080b9190:
	push {r4, r5, lr}	@ 000b9190 30b5
.org 0xb9192
	adds r4, r0, #0	@ 000b9192 041c
.org 0xb9194
	ldrb r5, [r4, #15]	@ 000b9194 e57b
.org 0xb9196
	cmp r5, #0	@ 000b9196 002d
.org 0xb9198
	bne.n 0xb91c6	@ 000b9198 15d1
.org 0xb919a
	adds r0, #116	@ 000b919a 7430
.org 0xb919c
	ldr r1, [pc, #84]	@ 000b919c 1549
.org 0xb919e
	bl 0x5784	@ 000b919e 4cf7f1fa
.org 0xb91a2
	ldr r0, [pc, #84]	@ 000b91a2 1548
.org 0xb91a4
	strh r5, [r0, #0]	@ 000b91a4 0580
.org 0xb91a6
	adds r2, r4, #0	@ 000b91a6 221c
.org 0xb91a8
	adds r2, #69	@ 000b91a8 4532
.org 0xb91aa
	ldrb r1, [r2, #0]	@ 000b91aa 1178
.org 0xb91ac
	movs r0, #13	@ 000b91ac 0d20
.org 0xb91ae
	negs r0, r0	@ 000b91ae 4042
.org 0xb91b0
	ands r0, r1	@ 000b91b0 0840
.org 0xb91b2
	strb r0, [r2, #0]	@ 000b91b2 1070
.org 0xb91b4
	ldr r1, [pc, #68]	@ 000b91b4 1149
.org 0xb91b6
	adds r0, r4, #0	@ 000b91b6 201c
.org 0xb91b8
	bl 0x1cf00	@ 000b91b8 63f7a2fe
.org 0xb91bc
	movs r0, #1	@ 000b91bc 0120
.org 0xb91be
	strb r0, [r4, #18]	@ 000b91be a074
.org 0xb91c0
	ldrb r0, [r4, #15]	@ 000b91c0 e07b
.org 0xb91c2
	adds r0, #1	@ 000b91c2 0130
.org 0xb91c4
	strb r0, [r4, #15]	@ 000b91c4 e073
.org 0xb91c6
	adds r0, r4, #0	@ 000b91c6 201c
.org 0xb91c8
	bl 0x1cff0	@ 000b91c8 63f712ff
.org 0xb91cc
	ldrb r0, [r4, #18]	@ 000b91cc a07c
.org 0xb91ce
	cmp r0, #0	@ 000b91ce 0028
.org 0xb91d0
	beq.n 0xb91d6	@ 000b91d0 01d0
.org 0xb91d2
	subs r0, #1	@ 000b91d2 0138
.org 0xb91d4
	strb r0, [r4, #18]	@ 000b91d4 a074
.org 0xb91d6
	adds r0, r4, #0	@ 000b91d6 201c
.org 0xb91d8
	adds r0, #115	@ 000b91d8 7330
.org 0xb91da
	ldrb r0, [r0, #0]	@ 000b91da 0078
.org 0xb91dc
	cmp r0, #3	@ 000b91dc 0328
.org 0xb91de
	bne.n 0xb91ee	@ 000b91de 06d1
.org 0xb91e0
	ldrb r1, [r4, #18]	@ 000b91e0 a17c
.org 0xb91e2
	cmp r1, #0	@ 000b91e2 0029
.org 0xb91e4
	bne.n 0xb91ee	@ 000b91e4 03d1
.org 0xb91e6
	movs r0, #4	@ 000b91e6 0420
.org 0xb91e8
	strb r0, [r4, #13]	@ 000b91e8 6073
.org 0xb91ea
	strb r1, [r4, #14]	@ 000b91ea a173
.org 0xb91ec
	strb r1, [r4, #15]	@ 000b91ec e173
.org 0xb91ee
	pop {r4, r5}	@ 000b91ee 30bc
.org 0xb91f0
	pop {r0}	@ 000b91f0 01bc
.org 0xb91f2
	bx r0	@ 000b91f2 0047
