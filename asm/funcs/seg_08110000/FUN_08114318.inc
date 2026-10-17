@ FUN_08114318  entry 0x08114318  size 28
.thumb
.org 0x114318
FUN_08114318:
	push {r4, r5, r6, r7, lr}	@ 00114318 f0b5
.org 0x11431a
	adds r6, r0, #0	@ 0011431a 061c
.org 0x11431c
	ldrb r0, [r6, #2]	@ 0011431c b078
.org 0x11431e
	cmp r0, #14	@ 0011431e 0e28
.org 0x114320
	bls.n 0x114324	@ 00114320 00d9
.org 0x114322
	b.n 0x1148ce	@ 00114322 d4e2
.org 0x114324
	lsls r0, r0, #2	@ 00114324 8000
.org 0x114326
	ldr r1, [pc, #8]	@ 00114326 0249
.org 0x114328
	adds r0, r0, r1	@ 00114328 4018
.org 0x11432a
	ldr r0, [r0, #0]	@ 0011432a 0068
.org 0x11432c
	mov pc, r0	@ 0011432c 8746
.org 0x11432e
	.byte 0x00	@ 0011432e data
.org 0x11432f
	.byte 0x00	@ 0011432f data
.org 0x114330
	.byte 0x34,0x43,0x11,0x08	@ 00114330 data
