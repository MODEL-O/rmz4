@ FUN_080f22b4  entry 0x080f22b4  size 28
.thumb
.org 0xf22b4
FUN_080f22b4:
	push {r4, r5, r6, r7, lr}	@ 000f22b4 f0b5
.org 0xf22b6
	adds r6, r0, #0	@ 000f22b6 061c
.org 0xf22b8
	ldrb r0, [r6, #13]	@ 000f22b8 707b
.org 0xf22ba
	cmp r0, #17	@ 000f22ba 1128
.org 0xf22bc
	bls.n 0xf22c0	@ 000f22bc 00d9
.org 0xf22be
	b.n 0xf2644	@ 000f22be c1e1
.org 0xf22c0
	lsls r0, r0, #2	@ 000f22c0 8000
.org 0xf22c2
	ldr r1, [pc, #8]	@ 000f22c2 0249
.org 0xf22c4
	adds r0, r0, r1	@ 000f22c4 4018
.org 0xf22c6
	ldr r0, [r0, #0]	@ 000f22c6 0068
.org 0xf22c8
	mov pc, r0	@ 000f22c8 8746
.org 0xf22ca
	.byte 0x00	@ 000f22ca data
.org 0xf22cb
	.byte 0x00	@ 000f22cb data
.org 0xf22cc
	.byte 0xd0,0x22,0x0f,0x08	@ 000f22cc data
