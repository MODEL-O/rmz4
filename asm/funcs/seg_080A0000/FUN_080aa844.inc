@ FUN_080aa844  entry 0x080aa844  size 80
.thumb
.org 0xaa844
FUN_080aa844:
	push {r4, r5, lr}	@ 000aa844 30b5
.org 0xaa846
	adds r4, r0, #0	@ 000aa846 041c
.org 0xaa848
	ldrb r0, [r4, #14]	@ 000aa848 a07b
.org 0xaa84a
	cmp r0, #0	@ 000aa84a 0028
.org 0xaa84c
	bne.n 0xaa852	@ 000aa84c 01d1
.org 0xaa84e
	adds r0, #1	@ 000aa84e 0130
.org 0xaa850
	strb r0, [r4, #14]	@ 000aa850 a073
.org 0xaa852
	adds r0, r4, #0	@ 000aa852 201c
.org 0xaa854
	adds r0, #182	@ 000aa854 b630
.org 0xaa856
	ldrb r1, [r0, #0]	@ 000aa856 0178
.org 0xaa858
	adds r5, r0, #0	@ 000aa858 051c
.org 0xaa85a
	cmp r1, #1	@ 000aa85a 0129
.org 0xaa85c
	bne.n 0xaa86e	@ 000aa85c 07d1
.org 0xaa85e
	ldrb r1, [r4, #19]	@ 000aa85e e17c
.org 0xaa860
	movs r0, #15	@ 000aa860 0f20
.org 0xaa862
	ands r0, r1	@ 000aa862 0840
.org 0xaa864
	cmp r0, #0	@ 000aa864 0028
.org 0xaa866
	bne.n 0xaa86e	@ 000aa866 02d1
.org 0xaa868
	adds r0, r4, #0	@ 000aa868 201c
.org 0xaa86a
	bl 0xaaa44	@ 000aa86a 00f0ebf8
.org 0xaa86e
	adds r0, r4, #0	@ 000aa86e 201c
.org 0xaa870
	bl 0xaab30	@ 000aa870 00f05ef9
.org 0xaa874
	lsls r0, r0, #24	@ 000aa874 0006
.org 0xaa876
	cmp r0, #0	@ 000aa876 0028
.org 0xaa878
	beq.n 0xaa88e	@ 000aa878 09d0
.org 0xaa87a
	ldrb r1, [r5, #0]	@ 000aa87a 2978
.org 0xaa87c
	cmp r1, #0	@ 000aa87c 0029
.org 0xaa87e
	bne.n 0xaa888	@ 000aa87e 03d1
.org 0xaa880
	movs r0, #1	@ 000aa880 0120
.org 0xaa882
	strb r0, [r4, #13]	@ 000aa882 6073
.org 0xaa884
	strb r1, [r4, #14]	@ 000aa884 a173
.org 0xaa886
	b.n 0xaa88e	@ 000aa886 02e0
.org 0xaa888
	movs r0, #0	@ 000aa888 0020
.org 0xaa88a
	strb r0, [r4, #13]	@ 000aa88a 6073
.org 0xaa88c
	strb r0, [r4, #14]	@ 000aa88c a073
.org 0xaa88e
	pop {r4, r5}	@ 000aa88e 30bc
.org 0xaa890
	pop {r0}	@ 000aa890 01bc
.org 0xaa892
	bx r0	@ 000aa892 0047
