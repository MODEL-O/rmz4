@ FUN_080c07a0  entry 0x080c07a0  size 26
.thumb
.org 0xc07a0
FUN_080c07a0:
	push {lr}	@ 000c07a0 00b5
.org 0xc07a2
	adds r2, r0, #0	@ 000c07a2 021c
.org 0xc07a4
	ldrb r3, [r2, #15]	@ 000c07a4 d37b
.org 0xc07a6
	cmp r3, #0	@ 000c07a6 002b
.org 0xc07a8
	bne.n 0xc07b6	@ 000c07a8 05d1
.org 0xc07aa
	ldrb r0, [r2, #10]	@ 000c07aa 907a
.org 0xc07ac
	movs r1, #254	@ 000c07ac fe21
.org 0xc07ae
	ands r1, r0	@ 000c07ae 0140
.org 0xc07b0
	strb r1, [r2, #10]	@ 000c07b0 9172
.org 0xc07b2
	adds r0, r3, #1	@ 000c07b2 581c
.org 0xc07b4
	strb r0, [r2, #15]	@ 000c07b4 d073
.org 0xc07b6
	pop {r0}	@ 000c07b6 01bc
.org 0xc07b8
	bx r0	@ 000c07b8 0047
