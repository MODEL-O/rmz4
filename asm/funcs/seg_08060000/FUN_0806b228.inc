@ FUN_0806b228  entry 0x0806b228  size 92
.thumb
.org 0x6b228
FUN_0806b228:
	push {r4, lr}	@ 0006b228 10b5
.org 0x6b22a
	adds r4, r0, #0	@ 0006b22a 041c
.org 0x6b22c
	ldrb r0, [r4, #14]	@ 0006b22c a07b
.org 0x6b22e
	cmp r0, #0	@ 0006b22e 0028
.org 0x6b230
	bne.n 0x6b270	@ 0006b230 1ed1
.org 0x6b232
	ldrb r0, [r4, #30]	@ 0006b232 a07f
.org 0x6b234
	lsls r0, r0, #8	@ 0006b234 0002
.org 0x6b236
	adds r1, r4, #0	@ 0006b236 211c
.org 0x6b238
	adds r1, #112	@ 0006b238 7031
.org 0x6b23a
	ldrb r1, [r1, #0]	@ 0006b23a 0978
.org 0x6b23c
	orrs r0, r1	@ 0006b23c 0843
.org 0x6b23e
	ldr r1, [pc, #28]	@ 0006b23e 0749
.org 0x6b240
	cmp r0, r1	@ 0006b240 8842
.org 0x6b242
	beq.n 0x6b24a	@ 0006b242 02d0
.org 0x6b244
	adds r0, r4, #0	@ 0006b244 201c
.org 0x6b246
	bl 0x1cf00	@ 0006b246 b1f75bfe
.org 0x6b24a
	ldr r0, [pc, #20]	@ 0006b24a 0548
.org 0x6b24c
	ldrh r0, [r0, #0]	@ 0006b24c 0088
.org 0x6b24e
	cmp r0, #8	@ 0006b24e 0828
.org 0x6b250
	bne.n 0x6b264	@ 0006b250 08d1
.org 0x6b252
	movs r0, #196	@ 0006b252 c420
.org 0x6b254
	bl 0x2b10	@ 0006b254 97f75cfc
.org 0x6b258
	b.n 0x6b26a	@ 0006b258 07e0
.org 0x6b25a
	.byte 0x00	@ 0006b25a data
.org 0x6b25b
	.byte 0x00	@ 0006b25b data
.org 0x6b25c
	.byte 0x01,0xaa,0x00,0x00	@ 0006b25c data
.org 0x6b260
	.byte 0x10,0xe9,0x02,0x02	@ 0006b260 data
.org 0x6b264
	movs r0, #197	@ 0006b264 c520
.org 0x6b266
	bl 0x2b10	@ 0006b266 97f753fc
.org 0x6b26a
	ldrb r0, [r4, #14]	@ 0006b26a a07b
.org 0x6b26c
	adds r0, #1	@ 0006b26c 0130
.org 0x6b26e
	strb r0, [r4, #14]	@ 0006b26e a073
.org 0x6b270
	adds r0, r4, #0	@ 0006b270 201c
.org 0x6b272
	bl 0x1cff0	@ 0006b272 b1f7bdfe
.org 0x6b276
	ldr r0, [pc, #24]	@ 0006b276 0648
.org 0x6b278
	ldrb r0, [r0, #18]	@ 0006b278 807c
.org 0x6b27a
	movs r1, #1	@ 0006b27a 0121
.org 0x6b27c
	ands r1, r0	@ 0006b27c 0140
.org 0x6b27e
	cmp r1, #0	@ 0006b27e 0029
.org 0x6b280
	bne.n 0x6b288	@ 0006b280 02d1
.org 0x6b282
	movs r0, #2	@ 0006b282 0220
