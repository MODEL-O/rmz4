@ FUN_08036748  entry 0x08036748  size 88
.thumb
.org 0x36748
FUN_08036748:
	push {r4, lr}	@ 00036748 10b5
.org 0x3674a
	adds r4, r0, #0	@ 0003674a 041c
.org 0x3674c
	ldr r1, [pc, #32]	@ 0003674c 0849
.org 0x3674e
	adds r0, r4, r1	@ 0003674e 6018
.org 0x36750
	ldrb r0, [r0, #0]	@ 00036750 0078
.org 0x36752
	cmp r0, #0	@ 00036752 0028
.org 0x36754
	beq.n 0x36778	@ 00036754 10d0
.org 0x36756
	ldr r0, [pc, #28]	@ 00036756 0748
.org 0x36758
	adds r2, r4, r0	@ 00036758 2218
.org 0x3675a
	movs r1, #0	@ 0003675a 0021
.org 0x3675c
	movs r0, #1	@ 0003675c 0120
.org 0x3675e
	strb r0, [r2, #0]	@ 0003675e 1070
.org 0x36760
	movs r2, #129	@ 00036760 8122
.org 0x36762
	lsls r2, r2, #1	@ 00036762 5200
.org 0x36764
	adds r0, r4, r2	@ 00036764 a018
.org 0x36766
	strb r1, [r0, #0]	@ 00036766 0170
.org 0x36768
	adds r0, r4, #0	@ 00036768 201c
.org 0x3676a
	bl 0x367b0	@ 0003676a 00f021f8
.org 0x3676e
	b.n 0x367a6	@ 0003676e 1ae0
.org 0x36770
	.byte 0x67,0x01,0x00,0x00	@ 00036770 data
.org 0x36774
	.byte 0x01,0x01,0x00,0x00	@ 00036774 data
.org 0x36778
	ldrb r0, [r4, #14]	@ 00036778 a07b
.org 0x3677a
	cmp r0, #1	@ 0003677a 0128
.org 0x3677c
	bne.n 0x36790	@ 0003677c 08d1
.org 0x3677e
	ldr r1, [pc, #12]	@ 0003677e 0349
.org 0x36780
	adds r0, r4, #0	@ 00036780 201c
.org 0x36782
	movs r2, #2	@ 00036782 0222
.org 0x36784
	movs r3, #1	@ 00036784 0123
.org 0x36786
	bl 0x1cfc8	@ 00036786 e6f71ffc
.org 0x3678a
	b.n 0x3679c	@ 0003678a 07e0
.org 0x3678c
	.byte 0x03,0x04,0x00,0x00	@ 0003678c data
.org 0x36790
	ldr r1, [pc, #24]	@ 00036790 0649
.org 0x36792
	adds r0, r4, #0	@ 00036792 201c
.org 0x36794
	movs r2, #2	@ 00036794 0222
.org 0x36796
	movs r3, #1	@ 00036796 0123
.org 0x36798
	bl 0x1cfc8	@ 00036798 e6f716fc
.org 0x3679c
	movs r0, #128	@ 0003679c 8020
.org 0x3679e
	lsls r0, r0, #1	@ 0003679e 4000
