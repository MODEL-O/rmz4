@ FUN_080bc208  entry 0x080bc208  size 72
.thumb
.org 0xbc208
FUN_080bc208:
	push {r4, lr}	@ 000bc208 10b5
.org 0xbc20a
	adds r4, r0, #0	@ 000bc20a 041c
.org 0xbc20c
	ldrb r0, [r4, #15]	@ 000bc20c e07b
.org 0xbc20e
	cmp r0, #0	@ 000bc20e 0028
.org 0xbc210
	bne.n 0xbc22e	@ 000bc210 0dd1
.org 0xbc212
	adds r0, r4, #0	@ 000bc212 201c
.org 0xbc214
	adds r0, #116	@ 000bc214 7430
.org 0xbc216
	ldr r1, [pc, #56]	@ 000bc216 0e49
.org 0xbc218
	bl 0x5784	@ 000bc218 49f7b4fa
.org 0xbc21c
	ldr r1, [pc, #52]	@ 000bc21c 0d49
.org 0xbc21e
	adds r0, r4, #0	@ 000bc21e 201c
.org 0xbc220
	bl 0x1cf00	@ 000bc220 60f76efe
.org 0xbc224
	movs r0, #32	@ 000bc224 2020
.org 0xbc226
	strb r0, [r4, #18]	@ 000bc226 a074
.org 0xbc228
	ldrb r0, [r4, #15]	@ 000bc228 e07b
.org 0xbc22a
	adds r0, #1	@ 000bc22a 0130
.org 0xbc22c
	strb r0, [r4, #15]	@ 000bc22c e073
.org 0xbc22e
	adds r0, r4, #0	@ 000bc22e 201c
.org 0xbc230
	bl 0x1cff0	@ 000bc230 60f7defe
.org 0xbc234
	ldrb r0, [r4, #18]	@ 000bc234 a07c
.org 0xbc236
	subs r0, #1	@ 000bc236 0138
.org 0xbc238
	strb r0, [r4, #18]	@ 000bc238 a074
.org 0xbc23a
	lsls r0, r0, #24	@ 000bc23a 0006
.org 0xbc23c
	lsrs r1, r0, #24	@ 000bc23c 010e
.org 0xbc23e
	cmp r1, #0	@ 000bc23e 0029
.org 0xbc240
	bne.n 0xbc24a	@ 000bc240 03d1
.org 0xbc242
	movs r0, #5	@ 000bc242 0520
.org 0xbc244
	strb r0, [r4, #13]	@ 000bc244 6073
.org 0xbc246
	strb r1, [r4, #14]	@ 000bc246 a173
.org 0xbc248
	strb r1, [r4, #15]	@ 000bc248 e173
.org 0xbc24a
	pop {r4}	@ 000bc24a 10bc
.org 0xbc24c
	pop {r0}	@ 000bc24c 01bc
.org 0xbc24e
	bx r0	@ 000bc24e 0047
