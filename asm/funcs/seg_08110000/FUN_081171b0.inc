@ FUN_081171b0  entry 0x081171b0  size 28
.thumb
.org 0x1171b0
FUN_081171b0:
	push {r4, r5, lr}	@ 001171b0 30b5
.org 0x1171b2
	adds r5, r0, #0	@ 001171b2 051c
.org 0x1171b4
	ldrb r0, [r5, #3]	@ 001171b4 e878
.org 0x1171b6
	cmp r0, #9	@ 001171b6 0928
.org 0x1171b8
	bls.n 0x1171bc	@ 001171b8 00d9
.org 0x1171ba
	b.n 0x1173e0	@ 001171ba 11e1
.org 0x1171bc
	lsls r0, r0, #2	@ 001171bc 8000
.org 0x1171be
	ldr r1, [pc, #8]	@ 001171be 0249
.org 0x1171c0
	adds r0, r0, r1	@ 001171c0 4018
.org 0x1171c2
	ldr r0, [r0, #0]	@ 001171c2 0068
.org 0x1171c4
	mov pc, r0	@ 001171c4 8746
.org 0x1171c6
	.byte 0x00	@ 001171c6 data
.org 0x1171c7
	.byte 0x00	@ 001171c7 data
.org 0x1171c8
	.byte 0xcc,0x71,0x11,0x08	@ 001171c8 data
