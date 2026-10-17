@ FUN_08118248  entry 0x08118248  size 146
.thumb
.org 0x118248
FUN_08118248:
	push {r4, lr}	@ 00118248 10b5
.org 0x11824a
	adds r3, r0, #0	@ 0011824a 031c
.org 0x11824c
	ldr r1, [pc, #28]	@ 0011824c 0749
.org 0x11824e
	adds r0, r3, r1	@ 0011824e 5818
.org 0x118250
	ldrb r0, [r0, #0]	@ 00118250 0078
.org 0x118252
	ldr r2, [pc, #28]	@ 00118252 074a
.org 0x118254
	cmp r0, #0	@ 00118254 0028
.org 0x118256
	bne.n 0x118274	@ 00118256 0dd1
.org 0x118258
	ldrh r1, [r2, #4]	@ 00118258 9188
.org 0x11825a
	movs r0, #2	@ 0011825a 0220
.org 0x11825c
	ands r0, r1	@ 0011825c 0840
.org 0x11825e
	cmp r0, #0	@ 0011825e 0028
.org 0x118260
	beq.n 0x118274	@ 00118260 08d0
.org 0x118262
	movs r0, #3	@ 00118262 0320
.org 0x118264
	strb r0, [r3, #1]	@ 00118264 5870
.org 0x118266
	strb r0, [r3, #2]	@ 00118266 9870
.org 0x118268
	b.n 0x1182e8	@ 00118268 3ee0
.org 0x11826a
	.byte 0x00	@ 0011826a data
.org 0x11826b
	.byte 0x00	@ 0011826b data
.org 0x11826c
	.byte 0x04,0x0e,0x00,0x00	@ 0011826c data
.org 0x118270
	.byte 0x60,0x07,0x00,0x02	@ 00118270 data
.org 0x118274
	ldrh r1, [r2, #4]	@ 00118274 9188
.org 0x118276
	movs r0, #128	@ 00118276 8020
.org 0x118278
	lsls r0, r0, #2	@ 00118278 8000
.org 0x11827a
	ands r0, r1	@ 0011827a 0840
.org 0x11827c
	lsls r0, r0, #16	@ 0011827c 0004
.org 0x11827e
	lsrs r2, r0, #16	@ 0011827e 020c
.org 0x118280
	cmp r2, #0	@ 00118280 002a
.org 0x118282
	beq.n 0x1182b0	@ 00118282 15d0
.org 0x118284
	ldr r4, [pc, #28]	@ 00118284 074c
.org 0x118286
	adds r0, r3, r4	@ 00118286 1819
.org 0x118288
	ldrb r0, [r0, #0]	@ 00118288 0078
.org 0x11828a
	adds r0, #3	@ 0011828a 0330
.org 0x11828c
	movs r1, #3	@ 0011828c 0321
.org 0x11828e
	ands r0, r1	@ 0011828e 0840
.org 0x118290
	ldr r1, [pc, #20]	@ 00118290 0549
.org 0x118292
	adds r2, r3, r1	@ 00118292 5a18
.org 0x118294
	movs r1, #0	@ 00118294 0021
.org 0x118296
	strb r0, [r2, #0]	@ 00118296 1070
.org 0x118298
	strb r1, [r3, #2]	@ 00118298 9970
.org 0x11829a
	ldr r1, [pc, #16]	@ 0011829a 0449
.org 0x11829c
	ldrb r0, [r2, #0]	@ 0011829c 1078
.org 0x11829e
	lsls r0, r0, #2	@ 0011829e 8000
.org 0x1182a0
	adds r0, r0, r1	@ 001182a0 4018
.org 0x1182a2
	b.n 0x1182da	@ 001182a2 1ae0
.org 0x1182a4
	.byte 0xf8,0x0d,0x00,0x00	@ 001182a4 data
.org 0x1182a8
	.byte 0xf9,0x0d,0x00,0x00	@ 001182a8 data
.org 0x1182ac
	.byte 0xdc,0x1b,0x88,0x08	@ 001182ac data
.org 0x1182b0
	movs r0, #128	@ 001182b0 8020
.org 0x1182b2
	lsls r0, r0, #1	@ 001182b2 4000
.org 0x1182b4
	ands r0, r1	@ 001182b4 0840
.org 0x1182b6
	cmp r0, #0	@ 001182b6 0028
.org 0x1182b8
	bne.n 0x1182be	@ 001182b8 01d1
.org 0x1182ba
	movs r0, #0	@ 001182ba 0020
.org 0x1182bc
	b.n 0x1182ea	@ 001182bc 15e0
.org 0x1182be
	ldr r4, [pc, #48]	@ 001182be 0c4c
.org 0x1182c0
	adds r0, r3, r4	@ 001182c0 1819
.org 0x1182c2
	ldrb r0, [r0, #0]	@ 001182c2 0078
.org 0x1182c4
	adds r0, #1	@ 001182c4 0130
.org 0x1182c6
	movs r1, #3	@ 001182c6 0321
.org 0x1182c8
	ands r0, r1	@ 001182c8 0840
.org 0x1182ca
	adds r4, #1	@ 001182ca 0134
.org 0x1182cc
	adds r1, r3, r4	@ 001182cc 1919
.org 0x1182ce
	strb r0, [r1, #0]	@ 001182ce 0870
.org 0x1182d0
	strb r2, [r3, #2]	@ 001182d0 9a70
.org 0x1182d2
	ldr r2, [pc, #32]	@ 001182d2 084a
.org 0x1182d4
	ldrb r0, [r1, #0]	@ 001182d4 0878
.org 0x1182d6
	lsls r0, r0, #2	@ 001182d6 8000
.org 0x1182d8
	adds r0, r0, r2	@ 001182d8 8018
