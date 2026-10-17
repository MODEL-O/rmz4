@ FUN_08095838  entry 0x08095838  size 178
.thumb
.org 0x95838
FUN_08095838:
	push {r4, r5, r6, lr}	@ 00095838 70b5
.org 0x9583a
	adds r4, r0, #0	@ 0009583a 041c
.org 0x9583c
	ldrb r0, [r4, #10]	@ 0009583c a07a
.org 0x9583e
	lsrs r5, r0, #4	@ 0009583e 0509
.org 0x95840
	movs r6, #1	@ 00095840 0126
.org 0x95842
	ands r5, r6	@ 00095842 3540
.org 0x95844
	ldrb r0, [r4, #15]	@ 00095844 e07b
.org 0x95846
	cmp r0, #0	@ 00095846 0028
.org 0x95848
	bne.n 0x9586c	@ 00095848 10d1
.org 0x9584a
	movs r0, #187	@ 0009584a bb20
.org 0x9584c
	bl 0x2b10	@ 0009584c 6df760f9
.org 0x95850
	lsls r0, r5, #1	@ 00095850 6800
.org 0x95852
	subs r0, r6, r0	@ 00095852 301a
.org 0x95854
	str r0, [r4, #104]	@ 00095854 a066
.org 0x95856
	movs r0, #136	@ 00095856 8820
.org 0x95858
	lsls r0, r0, #3	@ 00095858 c000
.org 0x9585a
	str r0, [r4, #92]	@ 0009585a e065
.org 0x9585c
	movs r0, #16	@ 0009585c 1020
.org 0x9585e
	negs r0, r0	@ 0009585e 4042
.org 0x95860
	str r0, [r4, #100]	@ 00095860 6066
.org 0x95862
	movs r0, #180	@ 00095862 b420
.org 0x95864
	str r0, [r4, #96]	@ 00095864 2066
.org 0x95866
	ldrb r0, [r4, #15]	@ 00095866 e07b
.org 0x95868
	adds r0, #1	@ 00095868 0130
.org 0x9586a
	strb r0, [r4, #15]	@ 0009586a e073
.org 0x9586c
	adds r0, r4, #0	@ 0009586c 201c
.org 0x9586e
	bl 0x1cff0	@ 0009586e 87f7bffb
.org 0x95872
	ldr r2, [r4, #92]	@ 00095872 e26d
.org 0x95874
	ldr r0, [r4, #104]	@ 00095874 a06e
.org 0x95876
	adds r1, r2, #0	@ 00095876 111c
.org 0x95878
	muls r1, r0	@ 00095878 4143
.org 0x9587a
	ldr r0, [r4, #84]	@ 0009587a 606d
.org 0x9587c
	adds r0, r0, r1	@ 0009587c 4018
.org 0x9587e
	str r0, [r4, #84]	@ 0009587e 6065
.org 0x95880
	ldr r0, [r4, #88]	@ 00095880 a06d
.org 0x95882
	ldr r1, [r4, #96]	@ 00095882 216e
.org 0x95884
	adds r0, r0, r1	@ 00095884 4018
.org 0x95886
	str r0, [r4, #88]	@ 00095886 a065
.org 0x95888
	ldr r0, [r4, #100]	@ 00095888 606e
.org 0x9588a
	adds r2, r2, r0	@ 0009588a 1218
.org 0x9588c
	str r2, [r4, #92]	@ 0009588c e265
.org 0x9588e
	ldr r0, [pc, #92]	@ 0009588e 1748
.org 0x95890
	cmp r2, r0	@ 00095890 8242
.org 0x95892
	bge.n 0x95896	@ 00095892 00da
.org 0x95894
	str r0, [r4, #92]	@ 00095894 e065
.org 0x95896
	adds r0, r4, #0	@ 00095896 201c
.org 0x95898
	bl 0x95cd8	@ 00095898 00f01efa
.org 0x9589c
	ldr r0, [pc, #80]	@ 0009589c 1448
.org 0x9589e
	adds r1, r4, #0	@ 0009589e 211c
.org 0x958a0
	adds r1, #84	@ 000958a0 5431
.org 0x958a2
	bl 0x1fb14	@ 000958a2 8af737f9
.org 0x958a6
	movs r1, #192	@ 000958a6 c021
.org 0x958a8
	lsls r1, r1, #6	@ 000958a8 8901
.org 0x958aa
	cmp r0, r1	@ 000958aa 8842
.org 0x958ac
	bls.n 0x958e4	@ 000958ac 1ad9
.org 0x958ae
	ldrb r1, [r4, #10]	@ 000958ae a17a
.org 0x958b0
	movs r0, #254	@ 000958b0 fe20
.org 0x958b2
	ands r0, r1	@ 000958b2 0840
.org 0x958b4
	movs r2, #0	@ 000958b4 0022
.org 0x958b6
	movs r1, #253	@ 000958b6 fd21
.org 0x958b8
	ands r0, r1	@ 000958b8 0840
.org 0x958ba
	strb r0, [r4, #10]	@ 000958ba a072
.org 0x958bc
	adds r0, r4, #0	@ 000958bc 201c
.org 0x958be
	adds r0, #140	@ 000958be 8c30
.org 0x958c0
	str r2, [r0, #0]	@ 000958c0 0260
.org 0x958c2
	adds r0, #4	@ 000958c2 0430
.org 0x958c4
	str r2, [r0, #0]	@ 000958c4 0260
.org 0x958c6
	adds r0, #4	@ 000958c6 0430
.org 0x958c8
	strb r2, [r0, #0]	@ 000958c8 0270
.org 0x958ca
	ldrb r1, [r4, #10]	@ 000958ca a17a
.org 0x958cc
	movs r0, #251	@ 000958cc fb20
.org 0x958ce
	ands r0, r1	@ 000958ce 0840
.org 0x958d0
	strb r0, [r4, #10]	@ 000958d0 a072
.org 0x958d2
	ldr r1, [pc, #32]	@ 000958d2 0849
.org 0x958d4
	ldrb r0, [r4, #9]	@ 000958d4 607a
.org 0x958d6
	lsls r0, r0, #2	@ 000958d6 8000
.org 0x958d8
	adds r0, r0, r1	@ 000958d8 4018
.org 0x958da
	movs r1, #3	@ 000958da 0321
.org 0x958dc
	str r1, [r4, #12]	@ 000958dc e160
.org 0x958de
	ldr r0, [r0, #0]	@ 000958de 0068
.org 0x958e0
	ldr r0, [r0, #12]	@ 000958e0 c068
.org 0x958e2
	str r0, [r4, #20]	@ 000958e2 6061
.org 0x958e4
	pop {r4, r5, r6}	@ 000958e4 70bc
.org 0x958e6
	pop {r0}	@ 000958e6 01bc
.org 0x958e8
	bx r0	@ 000958e8 0047
