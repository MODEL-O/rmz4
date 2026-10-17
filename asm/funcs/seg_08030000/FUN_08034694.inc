@ FUN_08034694  entry 0x08034694  size 162
.thumb
.org 0x34694
FUN_08034694:
	push {r4, r5, lr}	@ 00034694 30b5
.org 0x34696
	adds r4, r0, #0	@ 00034696 041c
.org 0x34698
	adds r0, #180	@ 00034698 b430
.org 0x3469a
	ldrb r0, [r0, #19]	@ 0003469a c07c
.org 0x3469c
	cmp r0, #3	@ 0003469c 0328
.org 0x3469e
	bls.n 0x346bc	@ 0003469e 0dd9
.org 0x346a0
	ldr r1, [pc, #16]	@ 000346a0 0449
.org 0x346a2
	adds r0, r4, #0	@ 000346a2 201c
.org 0x346a4
	bl 0x1cf00	@ 000346a4 e8f72cfc
.org 0x346a8
	ldr r0, [pc, #12]	@ 000346a8 0348
.org 0x346aa
	adds r1, r4, r0	@ 000346aa 2118
.org 0x346ac
	movs r0, #0	@ 000346ac 0020
.org 0x346ae
	strb r0, [r1, #0]	@ 000346ae 0870
.org 0x346b0
	b.n 0x3473a	@ 000346b0 43e0
.org 0x346b2
	.byte 0x00	@ 000346b2 data
.org 0x346b3
	.byte 0x00	@ 000346b3 data
.org 0x346b4
	.byte 0x02,0x2a,0x00,0x00	@ 000346b4 data
.org 0x346b8
	.byte 0x57,0x01,0x00,0x00	@ 000346b8 data
.org 0x346bc
	movs r1, #150	@ 000346bc 9621
.org 0x346be
	lsls r1, r1, #2	@ 000346be 8900
.org 0x346c0
	adds r0, r4, r1	@ 000346c0 6018
.org 0x346c2
	ldr r1, [r0, #0]	@ 000346c2 0168
.org 0x346c4
	movs r0, #64	@ 000346c4 4020
.org 0x346c6
	ands r0, r1	@ 000346c6 0840
.org 0x346c8
	cmp r0, #0	@ 000346c8 0028
.org 0x346ca
	beq.n 0x34708	@ 000346ca 1dd0
.org 0x346cc
	movs r0, #48	@ 000346cc 3020
.org 0x346ce
	ands r1, r0	@ 000346ce 0140
.org 0x346d0
	cmp r1, #0	@ 000346d0 0029
.org 0x346d2
	beq.n 0x346f0	@ 000346d2 0dd0
.org 0x346d4
	ldr r1, [pc, #16]	@ 000346d4 0449
.org 0x346d6
	adds r0, r4, #0	@ 000346d6 201c
.org 0x346d8
	bl 0x1cf00	@ 000346d8 e8f712fc
.org 0x346dc
	ldr r0, [pc, #12]	@ 000346dc 0348
.org 0x346de
	adds r1, r4, r0	@ 000346de 2118
.org 0x346e0
	movs r0, #1	@ 000346e0 0120
.org 0x346e2
	strb r0, [r1, #0]	@ 000346e2 0870
.org 0x346e4
	b.n 0x3473a	@ 000346e4 29e0
.org 0x346e6
	.byte 0x00	@ 000346e6 data
.org 0x346e7
	.byte 0x00	@ 000346e7 data
.org 0x346e8
	.byte 0x01,0x2a,0x00,0x00	@ 000346e8 data
.org 0x346ec
	.byte 0x57,0x01,0x00,0x00	@ 000346ec data
.org 0x346f0
	movs r1, #168	@ 000346f0 a821
.org 0x346f2
	lsls r1, r1, #6	@ 000346f2 8901
.org 0x346f4
	adds r0, r4, #0	@ 000346f4 201c
.org 0x346f6
	bl 0x1cf00	@ 000346f6 e8f703fc
.org 0x346fa
	ldr r0, [pc, #8]	@ 000346fa 0248
.org 0x346fc
	adds r1, r4, r0	@ 000346fc 2118
.org 0x346fe
	movs r0, #3	@ 000346fe 0320
.org 0x34700
	strb r0, [r1, #0]	@ 00034700 0870
.org 0x34702
	b.n 0x3473a	@ 00034702 1ae0
.org 0x34704
	.byte 0x57,0x01,0x00,0x00	@ 00034704 data
.org 0x34708
	movs r5, #128	@ 00034708 8025
.org 0x3470a
	ands r5, r1	@ 0003470a 0d40
.org 0x3470c
	cmp r5, #0	@ 0003470c 002d
.org 0x3470e
	beq.n 0x3472c	@ 0003470e 0dd0
.org 0x34710
	ldr r1, [pc, #16]	@ 00034710 0449
.org 0x34712
	adds r0, r4, #0	@ 00034712 201c
.org 0x34714
	bl 0x1cf00	@ 00034714 e8f7f4fb
.org 0x34718
	ldr r0, [pc, #12]	@ 00034718 0348
.org 0x3471a
	adds r1, r4, r0	@ 0003471a 2118
.org 0x3471c
	movs r0, #2	@ 0003471c 0220
.org 0x3471e
	strb r0, [r1, #0]	@ 0003471e 0870
.org 0x34720
	b.n 0x3473a	@ 00034720 0be0
.org 0x34722
	.byte 0x00	@ 00034722 data
.org 0x34723
	.byte 0x00	@ 00034723 data
.org 0x34724
	.byte 0x03,0x2a,0x00,0x00	@ 00034724 data
.org 0x34728
	.byte 0x57,0x01,0x00,0x00	@ 00034728 data
.org 0x3472c
	ldr r1, [pc, #40]	@ 0003472c 0a49
.org 0x3472e
	adds r0, r4, #0	@ 0003472e 201c
.org 0x34730
	bl 0x1cf00	@ 00034730 e8f7e6fb
.org 0x34734
	ldr r1, [pc, #36]	@ 00034734 0949
