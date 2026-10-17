@ FUN_080b28a0  entry 0x080b28a0  size 268
.thumb
.org 0xb28a0
FUN_080b28a0:
	push {r4, lr}	@ 000b28a0 10b5
.org 0xb28a2
	adds r4, r0, #0	@ 000b28a2 041c
.org 0xb28a4
	ldr r0, [r4, #96]	@ 000b28a4 206e
.org 0xb28a6
	cmp r0, #0	@ 000b28a6 0028
.org 0xb28a8
	bge.n 0xb28c8	@ 000b28a8 0eda
.org 0xb28aa
	ldr r0, [r4, #84]	@ 000b28aa 606d
.org 0xb28ac
	ldr r1, [r4, #88]	@ 000b28ac a16d
.org 0xb28ae
	ldr r2, [pc, #20]	@ 000b28ae 054a
.org 0xb28b0
	adds r1, r1, r2	@ 000b28b0 8918
.org 0xb28b2
	bl 0x7db4	@ 000b28b2 55f77ffa
.org 0xb28b6
	cmp r0, #0	@ 000b28b6 0028
.org 0xb28b8
	beq.n 0xb295a	@ 000b28b8 4fd0
.org 0xb28ba
	adds r1, r4, #0	@ 000b28ba 211c
.org 0xb28bc
	adds r1, #184	@ 000b28bc b831
.org 0xb28be
	movs r0, #0	@ 000b28be 0020
.org 0xb28c0
	b.n 0xb297a	@ 000b28c0 5be0
.org 0xb28c2
	.byte 0x00	@ 000b28c2 data
.org 0xb28c3
	.byte 0x00	@ 000b28c3 data
.org 0xb28c4
	.byte 0x00,0xfb,0xff,0xff	@ 000b28c4 data
.org 0xb28c8
	ldr r0, [r4, #84]	@ 000b28c8 606d
.org 0xb28ca
	ldr r1, [r4, #88]	@ 000b28ca a16d
.org 0xb28cc
	movs r2, #160	@ 000b28cc a022
.org 0xb28ce
	lsls r2, r2, #3	@ 000b28ce d200
.org 0xb28d0
	adds r1, r1, r2	@ 000b28d0 8918
.org 0xb28d2
	bl 0x7f8c	@ 000b28d2 55f75bfb
.org 0xb28d6
	cmp r0, #0	@ 000b28d6 0028
.org 0xb28d8
	beq.n 0xb295a	@ 000b28d8 3fd0
.org 0xb28da
	ldr r0, [r4, #84]	@ 000b28da 606d
.org 0xb28dc
	ldr r1, [r4, #88]	@ 000b28dc a16d
.org 0xb28de
	movs r2, #160	@ 000b28de a022
.org 0xb28e0
	lsls r2, r2, #3	@ 000b28e0 d200
.org 0xb28e2
	adds r1, r1, r2	@ 000b28e2 8918
.org 0xb28e4
	bl 0x7c7c	@ 000b28e4 55f7caf9
.org 0xb28e8
	lsls r0, r0, #16	@ 000b28e8 0004
.org 0xb28ea
	movs r1, #240	@ 000b28ea f021
.org 0xb28ec
	lsls r1, r1, #12	@ 000b28ec 0903
.org 0xb28ee
	ands r1, r0	@ 000b28ee 0140
.org 0xb28f0
	lsrs r1, r1, #16	@ 000b28f0 090c
.org 0xb28f2
	cmp r1, #1	@ 000b28f2 0129
.org 0xb28f4
	beq.n 0xb294c	@ 000b28f4 2ad0
.org 0xb28f6
	subs r0, r1, #2	@ 000b28f6 881e
.org 0xb28f8
	lsls r0, r0, #16	@ 000b28f8 0004
.org 0xb28fa
	lsrs r0, r0, #16	@ 000b28fa 000c
.org 0xb28fc
	cmp r0, #1	@ 000b28fc 0128
.org 0xb28fe
	bhi.n 0xb290a	@ 000b28fe 04d8
.org 0xb2900
	adds r1, r4, #0	@ 000b2900 211c
.org 0xb2902
	adds r1, #184	@ 000b2902 b831
.org 0xb2904
	movs r2, #0	@ 000b2904 0022
.org 0xb2906
	movs r0, #2	@ 000b2906 0220
.org 0xb2908
	b.n 0xb29a2	@ 000b2908 4be0
.org 0xb290a
	adds r0, r1, #0	@ 000b290a 081c
.org 0xb290c
	subs r0, #8	@ 000b290c 0838
.org 0xb290e
	lsls r0, r0, #16	@ 000b290e 0004
.org 0xb2910
	lsrs r0, r0, #16	@ 000b2910 000c
.org 0xb2912
	cmp r0, #1	@ 000b2912 0128
.org 0xb2914
	bhi.n 0xb2926	@ 000b2914 07d8
.org 0xb2916
	adds r1, r4, #0	@ 000b2916 211c
.org 0xb2918
	adds r1, #184	@ 000b2918 b831
.org 0xb291a
	movs r0, #2	@ 000b291a 0220
.org 0xb291c
	strb r0, [r1, #0]	@ 000b291c 0870
.org 0xb291e
	adds r1, #1	@ 000b291e 0131
.org 0xb2920
	movs r0, #1	@ 000b2920 0120
.org 0xb2922
	strb r0, [r1, #0]	@ 000b2922 0870
.org 0xb2924
	b.n 0xb29aa	@ 000b2924 41e0
.org 0xb2926
	subs r0, r1, #4	@ 000b2926 081f
.org 0xb2928
	lsls r0, r0, #16	@ 000b2928 0004
.org 0xb292a
	lsrs r0, r0, #16	@ 000b292a 000c
.org 0xb292c
	cmp r0, #3	@ 000b292c 0328
.org 0xb292e
	bhi.n 0xb2938	@ 000b292e 03d8
.org 0xb2930
	adds r0, r4, #0	@ 000b2930 201c
.org 0xb2932
	adds r0, #184	@ 000b2932 b830
.org 0xb2934
	movs r1, #1	@ 000b2934 0121
.org 0xb2936
	b.n 0xb2952	@ 000b2936 0ce0
.org 0xb2938
	adds r0, r1, #0	@ 000b2938 081c
.org 0xb293a
	subs r0, #10	@ 000b293a 0a38
.org 0xb293c
	lsls r0, r0, #16	@ 000b293c 0004
.org 0xb293e
	lsrs r0, r0, #16	@ 000b293e 000c
.org 0xb2940
	cmp r0, #3	@ 000b2940 0328
.org 0xb2942
	bhi.n 0xb294c	@ 000b2942 03d8
.org 0xb2944
	adds r0, r4, #0	@ 000b2944 201c
.org 0xb2946
	adds r0, #184	@ 000b2946 b830
.org 0xb2948
	movs r1, #1	@ 000b2948 0121
.org 0xb294a
	b.n 0xb2952	@ 000b294a 02e0
.org 0xb294c
	adds r0, r4, #0	@ 000b294c 201c
.org 0xb294e
	adds r0, #184	@ 000b294e b830
.org 0xb2950
	movs r1, #0	@ 000b2950 0021
.org 0xb2952
	strb r1, [r0, #0]	@ 000b2952 0170
.org 0xb2954
	adds r0, #1	@ 000b2954 0130
.org 0xb2956
	strb r1, [r0, #0]	@ 000b2956 0170
.org 0xb2958
	b.n 0xb29aa	@ 000b2958 27e0
.org 0xb295a
	ldrb r1, [r4, #10]	@ 000b295a a17a
.org 0xb295c
	movs r0, #16	@ 000b295c 1020
.org 0xb295e
	ands r0, r1	@ 000b295e 0840
.org 0xb2960
	cmp r0, #0	@ 000b2960 0028
.org 0xb2962
	bne.n 0xb2988	@ 000b2962 11d1
.org 0xb2964
	ldr r0, [r4, #84]	@ 000b2964 606d
.org 0xb2966
	ldr r1, [pc, #28]	@ 000b2966 0749
.org 0xb2968
	adds r0, r0, r1	@ 000b2968 4018
.org 0xb296a
	ldr r1, [r4, #88]	@ 000b296a a16d
.org 0xb296c
	bl 0x816c	@ 000b296c 55f7fefb
.org 0xb2970
	cmp r0, #0	@ 000b2970 0028
.org 0xb2972
	beq.n 0xb29ae	@ 000b2972 1cd0
.org 0xb2974
	adds r1, r4, #0	@ 000b2974 211c
.org 0xb2976
	adds r1, #184	@ 000b2976 b831
.org 0xb2978
	movs r0, #3	@ 000b2978 0320
.org 0xb297a
	strb r0, [r1, #0]	@ 000b297a 0870
.org 0xb297c
	adds r1, #1	@ 000b297c 0131
.org 0xb297e
	movs r0, #1	@ 000b297e 0120
.org 0xb2980
	strb r0, [r1, #0]	@ 000b2980 0870
.org 0xb2982
	b.n 0xb29b0	@ 000b2982 15e0
.org 0xb2984
	.byte 0x00,0xfb,0xff,0xff	@ 000b2984 data
.org 0xb2988
	ldr r0, [r4, #84]	@ 000b2988 606d
.org 0xb298a
	movs r2, #160	@ 000b298a a022
.org 0xb298c
	lsls r2, r2, #3	@ 000b298c d200
.org 0xb298e
	adds r0, r0, r2	@ 000b298e 8018
.org 0xb2990
	ldr r1, [r4, #88]	@ 000b2990 a16d
.org 0xb2992
	bl 0x834c	@ 000b2992 55f7dbfc
.org 0xb2996
	cmp r0, #0	@ 000b2996 0028
.org 0xb2998
	beq.n 0xb29ae	@ 000b2998 09d0
.org 0xb299a
	adds r1, r4, #0	@ 000b299a 211c
.org 0xb299c
	adds r1, #184	@ 000b299c b831
.org 0xb299e
	movs r2, #0	@ 000b299e 0022
.org 0xb29a0
	movs r0, #3	@ 000b29a0 0320
.org 0xb29a2
	strb r0, [r1, #0]	@ 000b29a2 0870
.org 0xb29a4
	adds r0, r4, #0	@ 000b29a4 201c
.org 0xb29a6
	adds r0, #185	@ 000b29a6 b930
.org 0xb29a8
	strb r2, [r0, #0]	@ 000b29a8 0270
.org 0xb29aa
	movs r0, #1	@ 000b29aa 0120
