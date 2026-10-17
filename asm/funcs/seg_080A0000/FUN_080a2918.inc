@ FUN_080a2918  entry 0x080a2918  size 206
.thumb
.org 0xa2918
FUN_080a2918:
	push {r4, r5, r6, r7, lr}	@ 000a2918 f0b5
.org 0xa291a
	sub sp, #8	@ 000a291a 82b0
.org 0xa291c
	adds r4, r0, #0	@ 000a291c 041c
.org 0xa291e
	ldr r0, [pc, #200]	@ 000a291e 3248
.org 0xa2920
	ldr r1, [r0, #4]	@ 000a2920 4168
.org 0xa2922
	ldr r0, [r0, #0]	@ 000a2922 0068
.org 0xa2924
	str r0, [sp, #0]	@ 000a2924 0090
.org 0xa2926
	str r1, [sp, #4]	@ 000a2926 0191
.org 0xa2928
	ldrb r6, [r4, #17]	@ 000a2928 667c
.org 0xa292a
	adds r7, r6, #0	@ 000a292a 371c
.org 0xa292c
	ldrb r0, [r4, #10]	@ 000a292c a07a
.org 0xa292e
	lsrs r5, r0, #4	@ 000a292e 0509
.org 0xa2930
	movs r0, #1	@ 000a2930 0120
.org 0xa2932
	ands r5, r0	@ 000a2932 0540
.org 0xa2934
	ldrb r0, [r4, #15]	@ 000a2934 e07b
.org 0xa2936
	cmp r0, #0	@ 000a2936 0028
.org 0xa2938
	bne.n 0xa297a	@ 000a2938 1fd1
.org 0xa293a
	adds r1, r4, #0	@ 000a293a 211c
.org 0xa293c
	adds r1, #37	@ 000a293c 2531
.org 0xa293e
	movs r0, #24	@ 000a293e 1820
.org 0xa2940
	strb r0, [r1, #0]	@ 000a2940 0870
.org 0xa2942
	adds r0, r4, #0	@ 000a2942 201c
.org 0xa2944
	adds r0, #116	@ 000a2944 7430
.org 0xa2946
	ldr r1, [pc, #164]	@ 000a2946 2949
.org 0xa2948
	bl 0x5784	@ 000a2948 62f71cff
.org 0xa294c
	ldr r1, [pc, #160]	@ 000a294c 2849
.org 0xa294e
	adds r0, r4, #0	@ 000a294e 201c
.org 0xa2950
	bl 0x1cf00	@ 000a2950 7af7d6fa
.org 0xa2954
	lsls r0, r5, #1	@ 000a2954 6800
.org 0xa2956
	subs r3, r0, #1	@ 000a2956 431e
.org 0xa2958
	lsls r1, r3, #14	@ 000a2958 9903
.org 0xa295a
	ldr r0, [r4, #84]	@ 000a295a 606d
.org 0xa295c
	adds r0, r0, r1	@ 000a295c 4018
.org 0xa295e
	str r0, [r4, #100]	@ 000a295e 6066
.org 0xa2960
	lsls r0, r6, #2	@ 000a2960 b000
.org 0xa2962
	add r0, sp	@ 000a2962 6844
.org 0xa2964
	ldr r1, [r4, #88]	@ 000a2964 a16d
.org 0xa2966
	ldr r0, [r0, #0]	@ 000a2966 0068
.org 0xa2968
	adds r1, r1, r0	@ 000a2968 0918
.org 0xa296a
	str r1, [r4, #104]	@ 000a296a a166
.org 0xa296c
	lsls r0, r3, #1	@ 000a296c 5800
.org 0xa296e
	adds r0, r0, r3	@ 000a296e c018
.org 0xa2970
	lsls r0, r0, #7	@ 000a2970 c001
.org 0xa2972
	str r0, [r4, #92]	@ 000a2972 e065
.org 0xa2974
	ldrb r0, [r4, #15]	@ 000a2974 e07b
.org 0xa2976
	adds r0, #1	@ 000a2976 0130
.org 0xa2978
	strb r0, [r4, #15]	@ 000a2978 e073
.org 0xa297a
	adds r0, r4, #0	@ 000a297a 201c
.org 0xa297c
	bl 0x1cff0	@ 000a297c 7af738fb
.org 0xa2980
	ldr r1, [r4, #84]	@ 000a2980 616d
.org 0xa2982
	ldr r0, [r4, #92]	@ 000a2982 e06d
.org 0xa2984
	adds r1, r1, r0	@ 000a2984 0918
.org 0xa2986
	str r1, [r4, #84]	@ 000a2986 6165
.org 0xa2988
	ldr r3, [r4, #100]	@ 000a2988 636e
.org 0xa298a
	subs r1, r1, r3	@ 000a298a c91a
.org 0xa298c
	lsls r0, r5, #1	@ 000a298c 6800
.org 0xa298e
	subs r2, r0, #1	@ 000a298e 421e
.org 0xa2990
	adds r0, r1, #0	@ 000a2990 081c
.org 0xa2992
	muls r0, r2	@ 000a2992 5043
.org 0xa2994
	cmp r0, #0	@ 000a2994 0028
.org 0xa2996
	blt.n 0xa299a	@ 000a2996 00db
.org 0xa2998
	str r3, [r4, #84]	@ 000a2998 6365
.org 0xa299a
	ldr r6, [r4, #100]	@ 000a299a 666e
.org 0xa299c
	ldr r5, [r4, #84]	@ 000a299c 656d
.org 0xa299e
	subs r0, r6, r5	@ 000a299e 701b
.org 0xa29a0
	adds r3, r2, #0	@ 000a29a0 131c
.org 0xa29a2
	muls r3, r0	@ 000a29a2 4343
.org 0xa29a4
	adds r0, r3, #0	@ 000a29a4 181c
.org 0xa29a6
	cmp r3, #0	@ 000a29a6 002b
.org 0xa29a8
	bge.n 0xa29ac	@ 000a29a8 00da
.org 0xa29aa
	adds r0, #255	@ 000a29aa ff30
.org 0xa29ac
	asrs r3, r0, #8	@ 000a29ac 0312
.org 0xa29ae
	lsls r1, r7, #2	@ 000a29ae b900
.org 0xa29b0
	add r1, sp	@ 000a29b0 6944
.org 0xa29b2
	ldr r2, [pc, #64]	@ 000a29b2 104a
.org 0xa29b4
	lsls r0, r3, #24	@ 000a29b4 1806
.org 0xa29b6
	lsrs r0, r0, #23	@ 000a29b6 c00d
.org 0xa29b8
	adds r0, r0, r2	@ 000a29b8 8018
.org 0xa29ba
	movs r3, #0	@ 000a29ba 0023
.org 0xa29bc
	ldrsh r2, [r0, r3]	@ 000a29bc c25e
.org 0xa29be
	ldr r0, [r1, #0]	@ 000a29be 0868
.org 0xa29c0
	muls r0, r2	@ 000a29c0 5043
.org 0xa29c2
	cmp r0, #0	@ 000a29c2 0028
.org 0xa29c4
	bge.n 0xa29c8	@ 000a29c4 00da
.org 0xa29c6
	adds r0, #255	@ 000a29c6 ff30
.org 0xa29c8
	asrs r1, r0, #8	@ 000a29c8 0112
.org 0xa29ca
	ldr r0, [r4, #104]	@ 000a29ca a06e
.org 0xa29cc
	subs r0, r0, r1	@ 000a29cc 401a
.org 0xa29ce
	str r0, [r4, #88]	@ 000a29ce a065
.org 0xa29d0
	cmp r5, r6	@ 000a29d0 b542
.org 0xa29d2
	bne.n 0xa29de	@ 000a29d2 04d1
.org 0xa29d4
	movs r1, #0	@ 000a29d4 0021
.org 0xa29d6
	movs r0, #2	@ 000a29d6 0220
.org 0xa29d8
	strb r0, [r4, #13]	@ 000a29d8 6073
.org 0xa29da
	strb r1, [r4, #14]	@ 000a29da a173
.org 0xa29dc
	strb r1, [r4, #15]	@ 000a29dc e173
.org 0xa29de
	add sp, #8	@ 000a29de 02b0
.org 0xa29e0
	pop {r4, r5, r6, r7}	@ 000a29e0 f0bc
.org 0xa29e2
	pop {r0}	@ 000a29e2 01bc
.org 0xa29e4
	bx r0	@ 000a29e4 0047
