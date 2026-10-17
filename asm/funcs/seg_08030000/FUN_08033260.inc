@ FUN_08033260  entry 0x08033260  size 82
.thumb
.org 0x33260
FUN_08033260:
	push {r4, lr}	@ 00033260 10b5
.org 0x33262
	adds r4, r0, #0	@ 00033262 041c
.org 0x33264
	ldrb r0, [r4, #15]	@ 00033264 e07b
.org 0x33266
	cmp r0, #1	@ 00033266 0128
.org 0x33268
	beq.n 0x33288	@ 00033268 0ed0
.org 0x3326a
	cmp r0, #1	@ 0003326a 0128
.org 0x3326c
	bgt.n 0x33274	@ 0003326c 02dc
.org 0x3326e
	cmp r0, #0	@ 0003326e 0028
.org 0x33270
	beq.n 0x3327a	@ 00033270 03d0
.org 0x33272
	b.n 0x332b0	@ 00033272 1de0
.org 0x33274
	cmp r0, #2	@ 00033274 0228
.org 0x33276
	beq.n 0x332a2	@ 00033276 14d0
.org 0x33278
	b.n 0x332b0	@ 00033278 1ae0
.org 0x3327a
	ldr r1, [pc, #8]	@ 0003327a 0249
.org 0x3327c
	adds r0, r4, #0	@ 0003327c 201c
.org 0x3327e
	bl 0x1cf00	@ 0003327e e9f73ffe
.org 0x33282
	b.n 0x3329a	@ 00033282 0ae0
.org 0x33284
	.byte 0x01,0x4d,0x00,0x00	@ 00033284 data
.org 0x33288
	adds r0, r4, #0	@ 00033288 201c
.org 0x3328a
	adds r0, #115	@ 0003328a 7330
.org 0x3328c
	ldrb r0, [r0, #0]	@ 0003328c 0078
.org 0x3328e
	cmp r0, #3	@ 0003328e 0328
.org 0x33290
	bne.n 0x332b0	@ 00033290 0ed1
.org 0x33292
	ldrb r0, [r4, #10]	@ 00033292 a07a
.org 0x33294
	movs r1, #254	@ 00033294 fe21
.org 0x33296
	ands r1, r0	@ 00033296 0140
.org 0x33298
	strb r1, [r4, #10]	@ 00033298 a172
.org 0x3329a
	ldrb r0, [r4, #15]	@ 0003329a e07b
.org 0x3329c
	adds r0, #1	@ 0003329c 0130
.org 0x3329e
	strb r0, [r4, #15]	@ 0003329e e073
.org 0x332a0
	b.n 0x332b0	@ 000332a0 06e0
.org 0x332a2
	ldr r0, [pc, #20]	@ 000332a2 0548
.org 0x332a4
	ldrb r1, [r0, #0]	@ 000332a4 0178
.org 0x332a6
	cmp r1, #0	@ 000332a6 0029
.org 0x332a8
	bne.n 0x332b0	@ 000332a8 02d1
.org 0x332aa
	movs r0, #4	@ 000332aa 0420
.org 0x332ac
	strb r0, [r4, #14]	@ 000332ac a073
.org 0x332ae
	strb r1, [r4, #15]	@ 000332ae e173
.org 0x332b0
	pop {r4}	@ 000332b0 10bc
