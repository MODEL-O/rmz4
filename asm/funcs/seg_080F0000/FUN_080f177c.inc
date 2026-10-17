@ FUN_080f177c  entry 0x080f177c  size 28
.thumb
.org 0xf177c
FUN_080f177c:
	push {r4, r5, lr}	@ 000f177c 30b5
.org 0xf177e
	adds r5, r0, #0	@ 000f177e 051c
.org 0xf1780
	ldrb r0, [r5, #17]	@ 000f1780 687c
.org 0xf1782
	cmp r0, #32	@ 000f1782 2028
.org 0xf1784
	bls.n 0xf1788	@ 000f1784 00d9
.org 0xf1786
	b.n 0xf1ba6	@ 000f1786 0ee2
.org 0xf1788
	lsls r0, r0, #2	@ 000f1788 8000
.org 0xf178a
	ldr r1, [pc, #8]	@ 000f178a 0249
.org 0xf178c
	adds r0, r0, r1	@ 000f178c 4018
.org 0xf178e
	ldr r0, [r0, #0]	@ 000f178e 0068
.org 0xf1790
	mov pc, r0	@ 000f1790 8746
.org 0xf1792
	.byte 0x00	@ 000f1792 data
.org 0xf1793
	.byte 0x00	@ 000f1793 data
.org 0xf1794
	.byte 0x98,0x17,0x0f,0x08	@ 000f1794 data
