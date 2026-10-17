@ FUN_08092674  entry 0x08092674  size 28
.thumb
.org 0x92674
FUN_08092674:
	push {r4, lr}	@ 00092674 10b5
.org 0x92676
	adds r4, r0, #0	@ 00092676 041c
.org 0x92678
	ldrb r0, [r4, #14]	@ 00092678 a07b
.org 0x9267a
	cmp r0, #5	@ 0009267a 0528
.org 0x9267c
	bls.n 0x92680	@ 0009267c 00d9
.org 0x9267e
	b.n 0x9279a	@ 0009267e 8ce0
.org 0x92680
	lsls r0, r0, #2	@ 00092680 8000
.org 0x92682
	ldr r1, [pc, #8]	@ 00092682 0249
.org 0x92684
	adds r0, r0, r1	@ 00092684 4018
.org 0x92686
	ldr r0, [r0, #0]	@ 00092686 0068
.org 0x92688
	mov pc, r0	@ 00092688 8746
.org 0x9268a
	.byte 0x00	@ 0009268a data
.org 0x9268b
	.byte 0x00	@ 0009268b data
.org 0x9268c
	.byte 0x90,0x26,0x09,0x08	@ 0009268c data
