@ FUN_08107688  entry 0x08107688  size 28
.thumb
.org 0x107688
FUN_08107688:
	push {r4, lr}	@ 00107688 10b5
.org 0x10768a
	adds r4, r0, #0	@ 0010768a 041c
.org 0x10768c
	ldrb r0, [r4, #13]	@ 0010768c 607b
.org 0x10768e
	cmp r0, #8	@ 0010768e 0828
.org 0x107690
	bls.n 0x107694	@ 00107690 00d9
.org 0x107692
	b.n 0x107842	@ 00107692 d6e0
.org 0x107694
	lsls r0, r0, #2	@ 00107694 8000
.org 0x107696
	ldr r1, [pc, #8]	@ 00107696 0249
.org 0x107698
	adds r0, r0, r1	@ 00107698 4018
.org 0x10769a
	ldr r0, [r0, #0]	@ 0010769a 0068
.org 0x10769c
	mov pc, r0	@ 0010769c 8746
.org 0x10769e
	.byte 0x00	@ 0010769e data
.org 0x10769f
	.byte 0x00	@ 0010769f data
.org 0x1076a0
	.byte 0xa4,0x76,0x10,0x08	@ 001076a0 data
