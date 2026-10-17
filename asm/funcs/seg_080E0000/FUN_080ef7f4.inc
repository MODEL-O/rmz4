@ FUN_080ef7f4  entry 0x080ef7f4  size 170
.thumb
.org 0xef7f4
FUN_080ef7f4:
	push {r4, r5, lr}	@ 000ef7f4 30b5
.org 0xef7f6
	adds r4, r0, #0	@ 000ef7f6 041c
.org 0xef7f8
	ldrb r5, [r4, #13]	@ 000ef7f8 657b
.org 0xef7fa
	cmp r5, #0	@ 000ef7fa 002d
.org 0xef7fc
	beq.n 0xef804	@ 000ef7fc 02d0
.org 0xef7fe
	cmp r5, #1	@ 000ef7fe 012d
.org 0xef800
	beq.n 0xef82e	@ 000ef800 15d0
.org 0xef802
	b.n 0xef878	@ 000ef802 39e0
.org 0xef804
	movs r1, #248	@ 000ef804 f821
.org 0xef806
	lsls r1, r1, #7	@ 000ef806 c901
.org 0xef808
	adds r0, r4, #0	@ 000ef808 201c
.org 0xef80a
	bl 0x1cf00	@ 000ef80a 2df779fb
.org 0xef80e
	ldrb r0, [r4, #17]	@ 000ef80e 607c
.org 0xef810
	cmp r0, #1	@ 000ef810 0128
.org 0xef812
	bne.n 0xef81e	@ 000ef812 04d1
.org 0xef814
	str r5, [r4, #92]	@ 000ef814 e565
.org 0xef816
	movs r0, #32	@ 000ef816 2020
.org 0xef818
	negs r0, r0	@ 000ef818 4042
.org 0xef81a
	str r0, [r4, #100]	@ 000ef81a 6066
.org 0xef81c
	b.n 0xef824	@ 000ef81c 02e0
.org 0xef81e
	ldr r0, [pc, #116]	@ 000ef81e 1d48
.org 0xef820
	str r0, [r4, #92]	@ 000ef820 e065
.org 0xef822
	str r5, [r4, #100]	@ 000ef822 6566
.org 0xef824
	movs r0, #0	@ 000ef824 0020
.org 0xef826
	strb r0, [r4, #18]	@ 000ef826 a074
.org 0xef828
	ldrb r0, [r4, #13]	@ 000ef828 607b
.org 0xef82a
	adds r0, #1	@ 000ef82a 0130
.org 0xef82c
	strb r0, [r4, #13]	@ 000ef82c 6073
.org 0xef82e
	ldr r1, [r4, #92]	@ 000ef82e e16d
.org 0xef830
	ldr r0, [pc, #96]	@ 000ef830 1848
.org 0xef832
	cmp r1, r0	@ 000ef832 8142
.org 0xef834
	ble.n 0xef83c	@ 000ef834 02dd
.org 0xef836
	ldr r0, [r4, #100]	@ 000ef836 606e
.org 0xef838
	adds r0, r1, r0	@ 000ef838 0818
.org 0xef83a
	str r0, [r4, #92]	@ 000ef83a e065
.org 0xef83c
	ldr r1, [r4, #84]	@ 000ef83c 616d
.org 0xef83e
	ldr r0, [r4, #92]	@ 000ef83e e06d
.org 0xef840
	adds r1, r1, r0	@ 000ef840 0918
.org 0xef842
	str r1, [r4, #84]	@ 000ef842 6165
.org 0xef844
	ldr r0, [r4, #40]	@ 000ef844 a06a
.org 0xef846
	ldrb r0, [r0, #12]	@ 000ef846 007b
.org 0xef848
	cmp r0, #1	@ 000ef848 0128
.org 0xef84a
	bhi.n 0xef860	@ 000ef84a 09d8
.org 0xef84c
	ldr r0, [pc, #72]	@ 000ef84c 1248
.org 0xef84e
	movs r2, #240	@ 000ef84e f022
.org 0xef850
	lsls r2, r2, #7	@ 000ef850 d201
.org 0xef852
	adds r1, r1, r2	@ 000ef852 8918
.org 0xef854
	ldr r0, [r0, #56]	@ 000ef854 806b
.org 0xef856
	subs r0, r0, r1	@ 000ef856 401a
.org 0xef858
	movs r1, #128	@ 000ef858 8021
.org 0xef85a
	lsls r1, r1, #6	@ 000ef85a 8901
.org 0xef85c
	cmp r0, r1	@ 000ef85c 8842
.org 0xef85e
	ble.n 0xef878	@ 000ef85e 0bdd
.org 0xef860
	ldr r1, [pc, #56]	@ 000ef860 0e49
.org 0xef862
	ldrb r0, [r4, #9]	@ 000ef862 607a
.org 0xef864
	lsls r0, r0, #2	@ 000ef864 8000
.org 0xef866
	adds r0, r0, r1	@ 000ef866 4018
.org 0xef868
	movs r1, #2	@ 000ef868 0221
.org 0xef86a
	str r1, [r4, #12]	@ 000ef86a e160
.org 0xef86c
	ldr r0, [r0, #0]	@ 000ef86c 0068
.org 0xef86e
	ldr r0, [r0, #8]	@ 000ef86e 8068
.org 0xef870
	str r0, [r4, #20]	@ 000ef870 6061
.org 0xef872
	adds r0, r4, #0	@ 000ef872 201c
.org 0xef874
	bl 0xed7e0	@ 000ef874 fdf7b4ff
.org 0xef878
	ldrb r1, [r4, #17]	@ 000ef878 617c
.org 0xef87a
	cmp r1, #1	@ 000ef87a 0129
.org 0xef87c
	bne.n 0xef8a0	@ 000ef87c 10d1
.org 0xef87e
	ldrb r0, [r4, #18]	@ 000ef87e a07c
.org 0xef880
	adds r0, #1	@ 000ef880 0130
.org 0xef882
	strb r0, [r4, #18]	@ 000ef882 a074
.org 0xef884
	ands r0, r1	@ 000ef884 0840
.org 0xef886
	cmp r0, #0	@ 000ef886 0028
.org 0xef888
	beq.n 0xef8a6	@ 000ef888 0dd0
.org 0xef88a
	adds r0, r4, #0	@ 000ef88a 201c
.org 0xef88c
	bl 0x1cff0	@ 000ef88c 2df7b0fb
.org 0xef890
	b.n 0xef8a6	@ 000ef890 09e0
.org 0xef892
	.byte 0x00	@ 000ef892 data
.org 0xef893
	.byte 0x00	@ 000ef893 data
.org 0xef894
	.byte 0xe0,0xfc,0xff,0xff	@ 000ef894 data
.org 0xef898
	.byte 0xf8,0xe9,0x02,0x02	@ 000ef898 data
.org 0xef89c
	.byte 0xfc,0x92,0x86,0x08	@ 000ef89c data
