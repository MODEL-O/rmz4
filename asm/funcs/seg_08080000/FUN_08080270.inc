@ FUN_08080270  entry 0x08080270  size 82
.thumb
.org 0x80270
FUN_08080270:
	push {r4, r5, lr}	@ 00080270 30b5
.org 0x80272
	adds r4, r0, #0	@ 00080272 041c
.org 0x80274
	ldrb r5, [r4, #14]	@ 00080274 a57b
.org 0x80276
	cmp r5, #0	@ 00080276 002d
.org 0x80278
	bne.n 0x8028c	@ 00080278 08d1
.org 0x8027a
	ldr r1, [pc, #72]	@ 0008027a 1249
.org 0x8027c
	bl 0x1cf00	@ 0008027c 9cf740fe
.org 0x80280
	adds r0, r4, #0	@ 00080280 201c
.org 0x80282
	adds r0, #194	@ 00080282 c230
.org 0x80284
	strb r5, [r0, #0]	@ 00080284 0570
.org 0x80286
	ldrb r0, [r4, #14]	@ 00080286 a07b
.org 0x80288
	adds r0, #1	@ 00080288 0130
.org 0x8028a
	strb r0, [r4, #14]	@ 0008028a a073
.org 0x8028c
	adds r0, r4, #0	@ 0008028c 201c
.org 0x8028e
	bl 0x1cff0	@ 0008028e 9cf7affe
.org 0x80292
	ldr r0, [r4, #84]	@ 00080292 606d
.org 0x80294
	ldr r1, [r4, #92]	@ 00080294 e16d
.org 0x80296
	adds r0, r0, r1	@ 00080296 4018
.org 0x80298
	str r0, [r4, #84]	@ 00080298 6065
.org 0x8029a
	subs r1, #16	@ 0008029a 1039
.org 0x8029c
	str r1, [r4, #92]	@ 0008029c e165
.org 0x8029e
	ldr r0, [pc, #40]	@ 0008029e 0a48
.org 0x802a0
	cmp r1, r0	@ 000802a0 8142
.org 0x802a2
	bge.n 0x802a6	@ 000802a2 00da
.org 0x802a4
	str r0, [r4, #92]	@ 000802a4 e065
.org 0x802a6
	adds r0, r4, #0	@ 000802a6 201c
.org 0x802a8
	bl 0x806b0	@ 000802a8 00f002fa
.org 0x802ac
	adds r0, r4, #0	@ 000802ac 201c
.org 0x802ae
	adds r0, #115	@ 000802ae 7330
.org 0x802b0
	ldrb r0, [r0, #0]	@ 000802b0 0078
.org 0x802b2
	cmp r0, #3	@ 000802b2 0328
.org 0x802b4
	bne.n 0x802bc	@ 000802b4 02d1
.org 0x802b6
	movs r0, #0	@ 000802b6 0020
.org 0x802b8
	strb r0, [r4, #13]	@ 000802b8 6073
.org 0x802ba
	strb r0, [r4, #14]	@ 000802ba a073
.org 0x802bc
	pop {r4, r5}	@ 000802bc 30bc
.org 0x802be
	pop {r0}	@ 000802be 01bc
.org 0x802c0
	bx r0	@ 000802c0 0047
