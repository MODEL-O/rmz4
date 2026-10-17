@ FUN_08071474  entry 0x08071474  size 68
.thumb
.org 0x71474
FUN_08071474:
	push {r4, lr}	@ 00071474 10b5
.org 0x71476
	adds r2, r0, #0	@ 00071476 021c
.org 0x71478
	ldrb r0, [r2, #10]	@ 00071478 907a
.org 0x7147a
	lsrs r3, r0, #4	@ 0007147a 0309
.org 0x7147c
	movs r0, #1	@ 0007147c 0120
.org 0x7147e
	ands r3, r0	@ 0007147e 0340
.org 0x71480
	movs r4, #0	@ 00071480 0024
.org 0x71482
	ldr r0, [pc, #24]	@ 00071482 0648
.org 0x71484
	ldr r0, [r0, #0]	@ 00071484 0068
.org 0x71486
	ldr r1, [r2, #84]	@ 00071486 516d
.org 0x71488
	ldr r0, [r0, #84]	@ 00071488 406d
.org 0x7148a
	cmp r1, r0	@ 0007148a 8142
.org 0x7148c
	bge.n 0x71490	@ 0007148c 00da
.org 0x7148e
	movs r4, #1	@ 0007148e 0124
.org 0x71490
	cmp r4, r3	@ 00071490 9c42
.org 0x71492
	beq.n 0x714a0	@ 00071492 05d0
.org 0x71494
	ldrb r0, [r2, #14]	@ 00071494 907b
.org 0x71496
	adds r0, #1	@ 00071496 0130
.org 0x71498
	b.n 0x714a2	@ 00071498 03e0
.org 0x7149a
	.byte 0x00	@ 0007149a data
.org 0x7149b
	.byte 0x00	@ 0007149b data
.org 0x7149c
	.byte 0xf0,0xdb,0x02,0x02	@ 0007149c data
.org 0x714a0
	movs r0, #8	@ 000714a0 0820
.org 0x714a2
	strb r0, [r2, #14]	@ 000714a2 9073
.org 0x714a4
	movs r0, #0	@ 000714a4 0020
.org 0x714a6
	strb r0, [r2, #15]	@ 000714a6 d073
.org 0x714a8
	ldr r1, [pc, #20]	@ 000714a8 0549
.org 0x714aa
	ldrb r0, [r2, #13]	@ 000714aa 507b
.org 0x714ac
	lsls r0, r0, #2	@ 000714ac 8000
.org 0x714ae
	adds r0, r0, r1	@ 000714ae 4018
.org 0x714b0
	ldr r1, [r0, #0]	@ 000714b0 0168
.org 0x714b2
	adds r0, r2, #0	@ 000714b2 101c
.org 0x714b4
	bl 0x128f80	@ 000714b4 b7f064fd
