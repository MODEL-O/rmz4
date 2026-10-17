@ FUN_0800f14c  entry 0x0800f14c  size 86
.thumb
.org 0xf14c
FUN_0800f14c:
	push {r4, lr}	@ 0000f14c 10b5
.org 0xf14e
	adds r4, r0, #0	@ 0000f14e 041c
.org 0xf150
	ldr r0, [pc, #60]	@ 0000f150 0f48
.org 0xf152
	ldr r0, [r0, #0]	@ 0000f152 0068
.org 0xf154
	ldr r0, [r0, #84]	@ 0000f154 406d
.org 0xf156
	ldr r1, [pc, #60]	@ 0000f156 0f49
.org 0xf158
	adds r0, r0, r1	@ 0000f158 4018
.org 0xf15a
	movs r1, #240	@ 0000f15a f021
.org 0xf15c
	lsls r1, r1, #10	@ 0000f15c 8902
.org 0xf15e
	bl 0x129050	@ 0000f15e 19f177ff
.org 0xf162
	movs r1, #240	@ 0000f162 f021
.org 0xf164
	lsls r1, r1, #8	@ 0000f164 0902
.org 0xf166
	adds r3, r0, r1	@ 0000f166 4318
.org 0xf168
	ldrb r2, [r4, #14]	@ 0000f168 a27b
.org 0xf16a
	cmp r2, #0	@ 0000f16a 002a
.org 0xf16c
	bne.n 0xf17c	@ 0000f16c 06d1
.org 0xf16e
	ldr r1, [pc, #40]	@ 0000f16e 0a49
.org 0xf170
	ldr r0, [pc, #40]	@ 0000f170 0a48
.org 0xf172
	strh r0, [r1, #0]	@ 0000f172 0880
.org 0xf174
	ldr r0, [pc, #40]	@ 0000f174 0a48
.org 0xf176
	strh r0, [r1, #2]	@ 0000f176 4880
.org 0xf178
	adds r0, r2, #1	@ 0000f178 501c
.org 0xf17a
	strb r0, [r4, #14]	@ 0000f17a a073
.org 0xf17c
	movs r0, #128	@ 0000f17c 8020
.org 0xf17e
	lsls r0, r0, #10	@ 0000f17e 8002
.org 0xf180
	cmp r3, r0	@ 0000f180 8342
.org 0xf182
	ble.n 0xf1ac	@ 0000f182 13dd
.org 0xf184
	ldr r0, [pc, #28]	@ 0000f184 0748
.org 0xf186
	ldr r1, [pc, #32]	@ 0000f186 0849
.org 0xf188
	adds r0, r0, r1	@ 0000f188 4018
.org 0xf18a
	movs r1, #215	@ 0000f18a d721
.org 0xf18c
	lsls r1, r1, #12	@ 0000f18c 0903
.org 0xf18e
	b.n 0xf1b6	@ 0000f18e 12e0
.org 0xf190
	.byte 0xf0,0xdb,0x02,0x02	@ 0000f190 data
.org 0xf194
	.byte 0x00,0x10,0xff,0xff	@ 0000f194 data
.org 0xf198
	.byte 0x40,0x0a,0x00,0x02	@ 0000f198 data
.org 0xf19c
	.byte 0x44,0x3b,0x00,0x00	@ 0000f19c data
.org 0xf1a0
	.byte 0x04,0x0c,0x00,0x00	@ 0000f1a0 data
