@ FUN_081199f0  entry 0x081199f0  size 26
.thumb
.org 0x1199f0
FUN_081199f0:
	push {lr}	@ 001199f0 00b5
.org 0x1199f2
	adds r2, r0, #0	@ 001199f2 021c
.org 0x1199f4
	lsls r1, r1, #24	@ 001199f4 0906
.org 0x1199f6
	lsrs r1, r1, #24	@ 001199f6 090e
.org 0x1199f8
	cmp r1, #7	@ 001199f8 0729
.org 0x1199fa
	bhi.n 0x119a6c	@ 001199fa 37d8
.org 0x1199fc
	lsls r0, r1, #2	@ 001199fc 8800
.org 0x1199fe
	ldr r1, [pc, #8]	@ 001199fe 0249
.org 0x119a00
	adds r0, r0, r1	@ 00119a00 4018
.org 0x119a02
	ldr r0, [r0, #0]	@ 00119a02 0068
.org 0x119a04
	mov pc, r0	@ 00119a04 8746
.org 0x119a06
	.byte 0x00	@ 00119a06 data
.org 0x119a07
	.byte 0x00	@ 00119a07 data
.org 0x119a08
	.byte 0x0c,0x9a,0x11,0x08	@ 00119a08 data
