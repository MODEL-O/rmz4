@ FUN_08012594  entry 0x08012594  size 46
.thumb
.org 0x12594
FUN_08012594:
	push {lr}	@ 00012594 00b5
.org 0x12596
	adds r2, r0, #0	@ 00012596 021c
.org 0x12598
	ldrb r0, [r2, #14]	@ 00012598 907b
.org 0x1259a
	cmp r0, #0	@ 0001259a 0028
.org 0x1259c
	bne.n 0x125c4	@ 0001259c 12d1
.org 0x1259e
	ldr r1, [r2, #52]	@ 0001259e 516b
.org 0x125a0
	ldr r0, [pc, #8]	@ 000125a0 0248
.org 0x125a2
	cmp r1, r0	@ 000125a2 8142
.org 0x125a4
	bgt.n 0x125b0	@ 000125a4 04dc
.org 0x125a6
	movs r0, #120	@ 000125a6 7820
.org 0x125a8
	b.n 0x125b2	@ 000125a8 03e0
.org 0x125aa
	.byte 0x00	@ 000125aa data
.org 0x125ab
	.byte 0x00	@ 000125ab data
.org 0x125ac
	.byte 0x3f,0x0b,0x00,0x00	@ 000125ac data
.org 0x125b0
	movs r0, #240	@ 000125b0 f020
.org 0x125b2
	str r0, [r2, #80]	@ 000125b2 1065
.org 0x125b4
	movs r0, #128	@ 000125b4 8020
.org 0x125b6
	lsls r0, r0, #1	@ 000125b6 4000
.org 0x125b8
	str r0, [r2, #68]	@ 000125b8 5064
.org 0x125ba
	movs r0, #192	@ 000125ba c020
.org 0x125bc
	str r0, [r2, #72]	@ 000125bc 9064
.org 0x125be
	ldrb r0, [r2, #14]	@ 000125be 907b
.org 0x125c0
	adds r0, #1	@ 000125c0 0130
