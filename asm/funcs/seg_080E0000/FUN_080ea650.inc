@ FUN_080ea650  entry 0x080ea650  size 28
.thumb
.org 0xea650
FUN_080ea650:
	push {r4, r5, lr}	@ 000ea650 30b5
.org 0xea652
	adds r5, r0, #0	@ 000ea652 051c
.org 0xea654
	ldrb r0, [r5, #14]	@ 000ea654 a87b
.org 0xea656
	cmp r0, #4	@ 000ea656 0428
.org 0xea658
	bls.n 0xea65c	@ 000ea658 00d9
.org 0xea65a
	b.n 0xea84e	@ 000ea65a f8e0
.org 0xea65c
	lsls r0, r0, #2	@ 000ea65c 8000
.org 0xea65e
	ldr r1, [pc, #8]	@ 000ea65e 0249
.org 0xea660
	adds r0, r0, r1	@ 000ea660 4018
.org 0xea662
	ldr r0, [r0, #0]	@ 000ea662 0068
.org 0xea664
	mov pc, r0	@ 000ea664 8746
.org 0xea666
	.byte 0x00	@ 000ea666 data
.org 0xea667
	.byte 0x00	@ 000ea667 data
.org 0xea668
	.byte 0x6c,0xa6,0x0e,0x08	@ 000ea668 data
