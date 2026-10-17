@ FUN_080f2658  entry 0x080f2658  size 28
.thumb
.org 0xf2658
FUN_080f2658:
	push {r4, r5, r6, lr}	@ 000f2658 70b5
.org 0xf265a
	adds r6, r0, #0	@ 000f265a 061c
.org 0xf265c
	ldrb r0, [r6, #13]	@ 000f265c 707b
.org 0xf265e
	cmp r0, #17	@ 000f265e 1128
.org 0xf2660
	bls.n 0xf2664	@ 000f2660 00d9
.org 0xf2662
	b.n 0xf284c	@ 000f2662 f3e0
.org 0xf2664
	lsls r0, r0, #2	@ 000f2664 8000
.org 0xf2666
	ldr r1, [pc, #8]	@ 000f2666 0249
.org 0xf2668
	adds r0, r0, r1	@ 000f2668 4018
.org 0xf266a
	ldr r0, [r0, #0]	@ 000f266a 0068
.org 0xf266c
	mov pc, r0	@ 000f266c 8746
.org 0xf266e
	.byte 0x00	@ 000f266e data
.org 0xf266f
	.byte 0x00	@ 000f266f data
.org 0xf2670
	.byte 0x74,0x26,0x0f,0x08	@ 000f2670 data
