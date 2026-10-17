@ FUN_0807d60c  entry 0x0807d60c  size 92
.thumb
.org 0x7d60c
FUN_0807d60c:
	push {r4, lr}	@ 0007d60c 10b5
.org 0x7d60e
	sub sp, #4	@ 0007d60e 81b0
.org 0x7d610
	adds r4, r0, #0	@ 0007d610 041c
.org 0x7d612
	ldr r1, [pc, #32]	@ 0007d612 0849
.org 0x7d614
	mov r0, sp	@ 0007d614 6846
.org 0x7d616
	movs r2, #2	@ 0007d616 0222
.org 0x7d618
	bl 0x129258	@ 0007d618 abf01efe
.org 0x7d61c
	adds r3, r4, #0	@ 0007d61c 231c
.org 0x7d61e
	adds r3, #191	@ 0007d61e bf33
.org 0x7d620
	ldrb r2, [r3, #0]	@ 0007d620 1a78
.org 0x7d622
	lsrs r0, r2, #1	@ 0007d622 5008
.org 0x7d624
	movs r1, #1	@ 0007d624 0121
.org 0x7d626
	ands r0, r1	@ 0007d626 0840
.org 0x7d628
	cmp r0, #0	@ 0007d628 0028
.org 0x7d62a
	beq.n 0x7d638	@ 0007d62a 05d0
.org 0x7d62c
	movs r0, #253	@ 0007d62c fd20
.org 0x7d62e
	ands r0, r2	@ 0007d62e 1040
.org 0x7d630
	b.n 0x7d63c	@ 0007d630 04e0
.org 0x7d632
	.byte 0x00	@ 0007d632 data
.org 0x7d633
	.byte 0x00	@ 0007d633 data
.org 0x7d634
	.byte 0x46,0x9a,0x12,0x08	@ 0007d634 data
.org 0x7d638
	movs r0, #2	@ 0007d638 0220
.org 0x7d63a
	orrs r0, r2	@ 0007d63a 1043
.org 0x7d63c
	strb r0, [r3, #0]	@ 0007d63c 1870
.org 0x7d63e
	adds r0, r4, #0	@ 0007d63e 201c
.org 0x7d640
	adds r0, #191	@ 0007d640 bf30
.org 0x7d642
	ldrb r0, [r0, #0]	@ 0007d642 0078
.org 0x7d644
	lsrs r0, r0, #1	@ 0007d644 4008
.org 0x7d646
	movs r1, #1	@ 0007d646 0121
.org 0x7d648
	ands r0, r1	@ 0007d648 0840
.org 0x7d64a
	add r0, sp	@ 0007d64a 6844
.org 0x7d64c
	ldrb r0, [r0, #0]	@ 0007d64c 0078
.org 0x7d64e
	movs r1, #0	@ 0007d64e 0021
.org 0x7d650
	strb r0, [r4, #13]	@ 0007d650 6073
.org 0x7d652
	strb r1, [r4, #14]	@ 0007d652 a173
.org 0x7d654
	strb r1, [r4, #15]	@ 0007d654 e173
.org 0x7d656
	ldr r1, [pc, #24]	@ 0007d656 0649
.org 0x7d658
	ldrb r0, [r4, #13]	@ 0007d658 607b
.org 0x7d65a
	lsls r0, r0, #2	@ 0007d65a 8000
.org 0x7d65c
	adds r0, r0, r1	@ 0007d65c 4018
.org 0x7d65e
	ldr r1, [r0, #0]	@ 0007d65e 0168
.org 0x7d660
	adds r0, r4, #0	@ 0007d660 201c
.org 0x7d662
	bl 0x128f80	@ 0007d662 abf08dfc
.org 0x7d666
	add sp, #4	@ 0007d666 01b0
