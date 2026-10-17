@ FUN_08038a78  entry 0x08038a78  size 38
.thumb
.org 0x38a78
FUN_08038a78:
	push {lr}	@ 00038a78 00b5
.org 0x38a7a
	adds r2, r0, #0	@ 00038a7a 021c
.org 0x38a7c
	adds r2, #180	@ 00038a7c b432
.org 0x38a7e
	ldr r0, [r2, #16]	@ 00038a7e 1069
.org 0x38a80
	ldr r1, [pc, #20]	@ 00038a80 0549
.org 0x38a82
	ands r0, r1	@ 00038a82 0840
.org 0x38a84
	ldr r1, [pc, #20]	@ 00038a84 0549
.org 0x38a86
	cmp r0, r1	@ 00038a86 8842
.org 0x38a88
	bne.n 0x38aa4	@ 00038a88 0cd1
.org 0x38a8a
	ldr r0, [r2, #60]	@ 00038a8a d06b
.org 0x38a8c
	ldr r1, [pc, #16]	@ 00038a8c 0449
.org 0x38a8e
	ands r0, r1	@ 00038a8e 0840
.org 0x38a90
	cmp r0, #0	@ 00038a90 0028
.org 0x38a92
	bne.n 0x38aa4	@ 00038a92 07d1
.org 0x38a94
	movs r0, #1	@ 00038a94 0120
.org 0x38a96
	b.n 0x38aa6	@ 00038a96 06e0
.org 0x38a98
	.byte 0xff,0xff,0xff,0x00	@ 00038a98 data
.org 0x38a9c
	.byte 0x09,0x13,0x1a,0x00	@ 00038a9c data
