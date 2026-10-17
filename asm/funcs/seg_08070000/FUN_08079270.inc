@ FUN_08079270  entry 0x08079270  size 42
.thumb
.org 0x79270
FUN_08079270:
	push {lr}	@ 00079270 00b5
.org 0x79272
	adds r2, r0, #0	@ 00079272 021c
.org 0x79274
	ldr r0, [pc, #24]	@ 00079274 0648
.org 0x79276
	ldrh r1, [r0, #8]	@ 00079276 0189
.org 0x79278
	movs r0, #8	@ 00079278 0820
.org 0x7927a
	ands r0, r1	@ 0007927a 0840
.org 0x7927c
	lsls r0, r0, #16	@ 0007927c 0004
.org 0x7927e
	lsrs r1, r0, #16	@ 0007927e 010c
.org 0x79280
	cmp r1, #0	@ 00079280 0029
.org 0x79282
	beq.n 0x79294	@ 00079282 07d0
.org 0x79284
	movs r0, #0	@ 00079284 0020
.org 0x79286
	strb r0, [r2, #13]	@ 00079286 5073
.org 0x79288
	strb r0, [r2, #14]	@ 00079288 9073
.org 0x7928a
	strb r0, [r2, #15]	@ 0007928a d073
.org 0x7928c
	b.n 0x7929c	@ 0007928c 06e0
.org 0x7928e
	.byte 0x00	@ 0007928e data
.org 0x7928f
	.byte 0x00	@ 0007928f data
.org 0x79290
	.byte 0x10,0xe9,0x02,0x02	@ 00079290 data
.org 0x79294
	movs r0, #2	@ 00079294 0220
.org 0x79296
	strb r0, [r2, #13]	@ 00079296 5073
.org 0x79298
	strb r1, [r2, #14]	@ 00079298 9173
