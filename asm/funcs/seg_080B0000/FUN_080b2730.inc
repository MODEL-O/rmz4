@ FUN_080b2730  entry 0x080b2730  size 98
.thumb
.org 0xb2730
FUN_080b2730:
	push {r4, r5, lr}	@ 000b2730 30b5
.org 0xb2732
	adds r4, r0, #0	@ 000b2732 041c
.org 0xb2734
	ldrb r0, [r4, #14]	@ 000b2734 a07b
.org 0xb2736
	cmp r0, #0	@ 000b2736 0028
.org 0xb2738
	bne.n 0xb2748	@ 000b2738 06d1
.org 0xb273a
	ldr r1, [pc, #68]	@ 000b273a 1149
.org 0xb273c
	adds r0, r4, #0	@ 000b273c 201c
.org 0xb273e
	bl 0x1cf00	@ 000b273e 6af7dffb
.org 0xb2742
	ldrb r0, [r4, #14]	@ 000b2742 a07b
.org 0xb2744
	adds r0, #1	@ 000b2744 0130
.org 0xb2746
	strb r0, [r4, #14]	@ 000b2746 a073
.org 0xb2748
	adds r0, r4, #0	@ 000b2748 201c
.org 0xb274a
	bl 0xb2b94	@ 000b274a 00f023fa
.org 0xb274e
	adds r0, r4, #0	@ 000b274e 201c
.org 0xb2750
	adds r0, #115	@ 000b2750 7330
.org 0xb2752
	ldrb r0, [r0, #0]	@ 000b2752 0078
.org 0xb2754
	cmp r0, #3	@ 000b2754 0328
.org 0xb2756
	bne.n 0xb2796	@ 000b2756 1ed1
.org 0xb2758
	ldrb r5, [r4, #14]	@ 000b2758 a57b
.org 0xb275a
	cmp r5, #1	@ 000b275a 012d
.org 0xb275c
	bne.n 0xb2788	@ 000b275c 14d1
.org 0xb275e
	ldr r1, [pc, #36]	@ 000b275e 0949
.org 0xb2760
	adds r0, r4, #0	@ 000b2760 201c
.org 0xb2762
	bl 0x1cf00	@ 000b2762 6af7cdfb
.org 0xb2766
	adds r0, r4, #0	@ 000b2766 201c
.org 0xb2768
	adds r0, #84	@ 000b2768 5430
.org 0xb276a
	ldrb r2, [r4, #10]	@ 000b276a a27a
.org 0xb276c
	lsrs r2, r2, #4	@ 000b276c 1209
.org 0xb276e
	ands r2, r5	@ 000b276e 2a40
.org 0xb2770
	movs r1, #1	@ 000b2770 0121
.org 0xb2772
	bl 0xb2244	@ 000b2772 fff767fd
.org 0xb2776
	ldrb r0, [r4, #14]	@ 000b2776 a07b
.org 0xb2778
	adds r0, #1	@ 000b2778 0130
.org 0xb277a
	strb r0, [r4, #14]	@ 000b277a a073
.org 0xb277c
	b.n 0xb2796	@ 000b277c 0be0
.org 0xb277e
	.byte 0x00	@ 000b277e data
.org 0xb277f
	.byte 0x00	@ 000b277f data
.org 0xb2780
	.byte 0x02,0xc5,0x00,0x00	@ 000b2780 data
.org 0xb2784
	.byte 0x03,0xc5,0x00,0x00	@ 000b2784 data
.org 0xb2788
	movs r0, #0	@ 000b2788 0020
.org 0xb278a
	strb r0, [r4, #13]	@ 000b278a 6073
.org 0xb278c
	movs r1, #1	@ 000b278c 0121
.org 0xb278e
	strb r1, [r4, #15]	@ 000b278e e173
.org 0xb2790
	strb r0, [r4, #14]	@ 000b2790 a073
