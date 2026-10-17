@ FUN_08030708  entry 0x08030708  size 106
.thumb
.org 0x30708
FUN_08030708:
	push {r4, r5, lr}	@ 00030708 30b5
.org 0x3070a
	adds r2, r0, #0	@ 0003070a 021c
.org 0x3070c
	ldrb r0, [r2, #14]	@ 0003070c 907b
.org 0x3070e
	cmp r0, #0	@ 0003070e 0028
.org 0x30710
	beq.n 0x3074c	@ 00030710 1cd0
.org 0x30712
	movs r1, #150	@ 00030712 9621
.org 0x30714
	lsls r1, r1, #2	@ 00030714 8900
.org 0x30716
	adds r0, r2, r1	@ 00030716 5018
.org 0x30718
	ldr r1, [r0, #0]	@ 00030718 0168
.org 0x3071a
	movs r5, #1	@ 0003071a 0125
.org 0x3071c
	adds r0, r1, #0	@ 0003071c 081c
.org 0x3071e
	ands r0, r5	@ 0003071e 2840
.org 0x30720
	cmp r0, #0	@ 00030720 0028
.org 0x30722
	beq.n 0x3074c	@ 00030722 13d0
.org 0x30724
	movs r4, #128	@ 00030724 8024
.org 0x30726
	ands r4, r1	@ 00030726 0c40
.org 0x30728
	cmp r4, #0	@ 00030728 002c
.org 0x3072a
	beq.n 0x30732	@ 0003072a 02d0
.org 0x3072c
	movs r1, #0	@ 0003072c 0021
.org 0x3072e
	strb r5, [r2, #13]	@ 0003072e 5573
.org 0x30730
	b.n 0x30766	@ 00030730 19e0
.org 0x30732
	movs r0, #161	@ 00030732 a120
.org 0x30734
	lsls r0, r0, #1	@ 00030734 4000
.org 0x30736
	adds r3, r2, r0	@ 00030736 1318
.org 0x30738
	ldrb r0, [r3, #0]	@ 00030738 1878
.org 0x3073a
	movs r1, #3	@ 0003073a 0321
.org 0x3073c
	negs r1, r1	@ 0003073c 4942
.org 0x3073e
	ands r1, r0	@ 0003073e 0140
.org 0x30740
	strb r1, [r3, #0]	@ 00030740 1970
.org 0x30742
	strb r5, [r2, #13]	@ 00030742 5573
.org 0x30744
	strb r4, [r2, #14]	@ 00030744 9473
.org 0x30746
	movs r0, #4	@ 00030746 0420
.org 0x30748
	strb r0, [r2, #15]	@ 00030748 d073
.org 0x3074a
	b.n 0x3076c	@ 0003074a 0fe0
.org 0x3074c
	movs r1, #231	@ 0003074c e721
.org 0x3074e
	lsls r1, r1, #1	@ 0003074e 4900
.org 0x30750
	adds r0, r2, r1	@ 00030750 5018
.org 0x30752
	ldrb r0, [r0, #0]	@ 00030752 0078
.org 0x30754
	cmp r0, #0	@ 00030754 0028
.org 0x30756
	beq.n 0x3076c	@ 00030756 09d0
.org 0x30758
	subs r1, #2	@ 00030758 0239
.org 0x3075a
	adds r0, r2, r1	@ 0003075a 5018
.org 0x3075c
	ldrb r1, [r0, #0]	@ 0003075c 0178
.org 0x3075e
	cmp r1, #0	@ 0003075e 0029
.org 0x30760
	bne.n 0x3076c	@ 00030760 04d1
.org 0x30762
	movs r0, #1	@ 00030762 0120
.org 0x30764
	strb r0, [r2, #13]	@ 00030764 5073
.org 0x30766
	movs r0, #2	@ 00030766 0220
.org 0x30768
	strb r0, [r2, #14]	@ 00030768 9073
.org 0x3076a
	strb r1, [r2, #15]	@ 0003076a d173
.org 0x3076c
	pop {r4, r5}	@ 0003076c 30bc
.org 0x3076e
	pop {r0}	@ 0003076e 01bc
.org 0x30770
	bx r0	@ 00030770 0047
