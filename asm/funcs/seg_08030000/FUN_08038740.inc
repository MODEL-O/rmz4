@ FUN_08038740  entry 0x08038740  size 72
.thumb
.org 0x38740
FUN_08038740:
	push {lr}	@ 00038740 00b5
.org 0x38742
	adds r2, r0, #0	@ 00038742 021c
.org 0x38744
	ldr r1, [pc, #20]	@ 00038744 0549
.org 0x38746
	adds r0, r2, r1	@ 00038746 5018
.org 0x38748
	ldrh r1, [r0, #0]	@ 00038748 0188
.org 0x3874a
	movs r0, #128	@ 0003874a 8020
.org 0x3874c
	lsls r0, r0, #8	@ 0003874c 0002
.org 0x3874e
	ands r0, r1	@ 0003874e 0840
.org 0x38750
	cmp r0, #0	@ 00038750 0028
.org 0x38752
	beq.n 0x38760	@ 00038752 05d0
.org 0x38754
	movs r0, #128	@ 00038754 8020
.org 0x38756
	lsls r0, r0, #2	@ 00038756 8000
.org 0x38758
	b.n 0x3878a	@ 00038758 17e0
.org 0x3875a
	.byte 0x00	@ 0003875a data
.org 0x3875b
	.byte 0x00	@ 0003875b data
.org 0x3875c
	.byte 0x52,0x02,0x00,0x00	@ 0003875c data
.org 0x38760
	movs r3, #159	@ 00038760 9f23
.org 0x38762
	lsls r3, r3, #1	@ 00038762 5b00
.org 0x38764
	adds r1, r2, r3	@ 00038764 d118
.org 0x38766
	ldrb r0, [r1, #0]	@ 00038766 0878
.org 0x38768
	cmp r0, #0	@ 00038768 0028
.org 0x3876a
	bne.n 0x38776	@ 0003876a 04d1
.org 0x3876c
	movs r0, #221	@ 0003876c dd20
.org 0x3876e
	lsls r0, r0, #1	@ 0003876e 4000
.org 0x38770
	adds r1, r2, r0	@ 00038770 1118
.org 0x38772
	movs r0, #128	@ 00038772 8020
.org 0x38774
	b.n 0x38786	@ 00038774 07e0
.org 0x38776
	ldrb r1, [r1, #0]	@ 00038776 0978
.org 0x38778
	movs r0, #128	@ 00038778 8020
.org 0x3877a
	lsls r0, r0, #1	@ 0003877a 4000
.org 0x3877c
	subs r0, r0, r1	@ 0003877c 401a
.org 0x3877e
	asrs r0, r0, #1	@ 0003877e 4010
.org 0x38780
	movs r3, #221	@ 00038780 dd23
.org 0x38782
	lsls r3, r3, #1	@ 00038782 5b00
.org 0x38784
	adds r1, r2, r3	@ 00038784 d118
.org 0x38786
	ldrb r1, [r1, #0]	@ 00038786 0978
