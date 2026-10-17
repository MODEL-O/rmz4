@ FUN_080786f8  entry 0x080786f8  size 182
.thumb
.org 0x786f8
FUN_080786f8:
	push {r4, r5, r6, r7, lr}	@ 000786f8 f0b5
.org 0x786fa
	adds r7, r0, #0	@ 000786fa 071c
.org 0x786fc
	adds r0, #197	@ 000786fc c530
.org 0x786fe
	ldrb r5, [r0, #0]	@ 000786fe 0578
.org 0x78700
	ldrb r0, [r7, #15]	@ 00078700 f87b
.org 0x78702
	cmp r0, #0	@ 00078702 0028
.org 0x78704
	bne.n 0x78754	@ 00078704 26d1
.org 0x78706
	adds r6, r7, #0	@ 00078706 3e1c
.org 0x78708
	adds r6, #204	@ 00078708 cc36
.org 0x7870a
	ldr r3, [r6, #0]	@ 0007870a 3368
.org 0x7870c
	adds r3, #186	@ 0007870c ba33
.org 0x7870e
	ldr r4, [pc, #160]	@ 0007870e 284c
.org 0x78710
	lsls r5, r5, #1	@ 00078710 6d00
.org 0x78712
	adds r1, r5, r4	@ 00078712 2919
.org 0x78714
	movs r2, #1	@ 00078714 0122
.org 0x78716
	adds r0, r2, #0	@ 00078716 101c
.org 0x78718
	ldrb r1, [r1, #0]	@ 00078718 0978
.org 0x7871a
	lsls r0, r1	@ 0007871a 8840
.org 0x7871c
	ldrb r1, [r3, #0]	@ 0007871c 1978
.org 0x7871e
	orrs r0, r1	@ 0007871e 0843
.org 0x78720
	strb r0, [r3, #0]	@ 00078720 1870
.org 0x78722
	ldr r1, [r6, #0]	@ 00078722 3168
.org 0x78724
	adds r1, #186	@ 00078724 ba31
.org 0x78726
	adds r4, #1	@ 00078726 0134
.org 0x78728
	adds r5, r5, r4	@ 00078728 2d19
.org 0x7872a
	ldrb r5, [r5, #0]	@ 0007872a 2d78
.org 0x7872c
	lsls r2, r5	@ 0007872c aa40
.org 0x7872e
	ldrb r0, [r1, #0]	@ 0007872e 0878
.org 0x78730
	orrs r2, r0	@ 00078730 0243
.org 0x78732
	strb r2, [r1, #0]	@ 00078732 0a70
.org 0x78734
	adds r0, r7, #0	@ 00078734 381c
.org 0x78736
	movs r1, #6	@ 00078736 0621
.org 0x78738
	bl 0x1d3d0	@ 00078738 a4f74afe
.org 0x7873c
	movs r1, #176	@ 0007873c b021
.org 0x7873e
	lsls r1, r1, #2	@ 0007873e 8900
.org 0x78740
	movs r0, #132	@ 00078740 8420
.org 0x78742
	bl 0x249c	@ 00078742 89f7abfe
.org 0x78746
	adds r0, r7, #0	@ 00078746 381c
.org 0x78748
	movs r1, #0	@ 00078748 0021
.org 0x7874a
	bl 0x78fdc	@ 0007874a 00f047fc
.org 0x7874e
	ldrb r0, [r7, #15]	@ 0007874e f87b
.org 0x78750
	adds r0, #1	@ 00078750 0130
.org 0x78752
	strb r0, [r7, #15]	@ 00078752 f873
.org 0x78754
	adds r0, r7, #0	@ 00078754 381c
.org 0x78756
	bl 0x1cff0	@ 00078756 a4f74bfc
.org 0x7875a
	adds r0, r7, #0	@ 0007875a 381c
.org 0x7875c
	adds r0, #116	@ 0007875c 7430
.org 0x7875e
	ldr r3, [pc, #84]	@ 0007875e 154b
.org 0x78760
	ldr r2, [pc, #84]	@ 00078760 154a
.org 0x78762
	adds r1, r7, #0	@ 00078762 391c
.org 0x78764
	adds r1, #196	@ 00078764 c431
.org 0x78766
	ldrb r1, [r1, #0]	@ 00078766 0978
.org 0x78768
	lsls r1, r1, #1	@ 00078768 4900
.org 0x7876a
	adds r1, r1, r2	@ 0007876a 8918
.org 0x7876c
	ldrh r2, [r1, #0]	@ 0007876c 0a88
.org 0x7876e
	lsls r2, r2, #2	@ 0007876e 9200
.org 0x78770
	adds r2, r2, r3	@ 00078770 d218
.org 0x78772
	adds r1, r7, #0	@ 00078772 391c
.org 0x78774
	adds r1, #113	@ 00078774 7131
.org 0x78776
	ldrb r1, [r1, #0]	@ 00078776 0978
.org 0x78778
	lsls r1, r1, #24	@ 00078778 0906
.org 0x7877a
	asrs r1, r1, #24	@ 0007877a 0916
.org 0x7877c
	ldr r2, [r2, #0]	@ 0007877c 1268
.org 0x7877e
	lsls r1, r1, #2	@ 0007877e 8900
.org 0x78780
	adds r1, r1, r2	@ 00078780 8918
.org 0x78782
	ldr r1, [r1, #0]	@ 00078782 0968
.org 0x78784
	bl 0x5784	@ 00078784 8cf7feff
.org 0x78788
	adds r0, r7, #0	@ 00078788 381c
.org 0x7878a
	bl 0x78f28	@ 0007878a 00f0cdfb
.org 0x7878e
	movs r0, #132	@ 0007878e 8420
.org 0x78790
	bl 0x25d8	@ 00078790 89f722ff
.org 0x78794
	lsls r0, r0, #24	@ 00078794 0006
.org 0x78796
	lsrs r0, r0, #24	@ 00078796 000e
.org 0x78798
	subs r0, #3	@ 00078798 0338
.org 0x7879a
	cmp r0, #1	@ 0007879a 0128
.org 0x7879c
	bhi.n 0x787a8	@ 0007879c 04d8
.org 0x7879e
	ldrb r0, [r7, #14]	@ 0007879e b87b
.org 0x787a0
	adds r0, #1	@ 000787a0 0130
.org 0x787a2
	movs r1, #0	@ 000787a2 0021
.org 0x787a4
	strb r0, [r7, #14]	@ 000787a4 b873
.org 0x787a6
	strb r1, [r7, #15]	@ 000787a6 f973
.org 0x787a8
	pop {r4, r5, r6, r7}	@ 000787a8 f0bc
.org 0x787aa
	pop {r0}	@ 000787aa 01bc
.org 0x787ac
	bx r0	@ 000787ac 0047
