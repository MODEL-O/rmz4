@ FUN_080bf848  entry 0x080bf848  size 156
.thumb
.org 0xbf848
FUN_080bf848:
	push {r4, r5, r6, r7, lr}	@ 000bf848 f0b5
.org 0xbf84a
	adds r4, r0, #0	@ 000bf84a 041c
.org 0xbf84c
	ldr r7, [r4, #40]	@ 000bf84c a76a
.org 0xbf84e
	bl 0x1cff0	@ 000bf84e 5df7cffb
.org 0xbf852
	ldr r2, [r4, #96]	@ 000bf852 226e
.org 0xbf854
	cmp r2, #0	@ 000bf854 002a
.org 0xbf856
	bge.n 0xbf878	@ 000bf856 0fda
.org 0xbf858
	ldr r1, [r4, #88]	@ 000bf858 a16d
.org 0xbf85a
	ldr r0, [pc, #20]	@ 000bf85a 0548
.org 0xbf85c
	adds r6, r1, r0	@ 000bf85c 0e18
.org 0xbf85e
	adds r0, r7, #0	@ 000bf85e 381c
.org 0xbf860
	adds r0, #184	@ 000bf860 b830
.org 0xbf862
	ldr r0, [r0, #0]	@ 000bf862 0068
.org 0xbf864
	ldr r3, [pc, #12]	@ 000bf864 034b
.org 0xbf866
	adds r0, r0, r3	@ 000bf866 c018
.org 0xbf868
	adds r3, r1, #0	@ 000bf868 0b1c
.org 0xbf86a
	cmp r6, r0	@ 000bf86a 8642
.org 0xbf86c
	bgt.n 0xbf890	@ 000bf86c 10dc
.org 0xbf86e
	b.n 0xbf88c	@ 000bf86e 0de0
.org 0xbf870
	.byte 0x00,0xf8,0xff,0xff	@ 000bf870 data
.org 0xbf874
	.byte 0x01,0x90,0xff,0xff	@ 000bf874 data
.org 0xbf878
	ldr r0, [r4, #88]	@ 000bf878 a06d
.org 0xbf87a
	movs r1, #128	@ 000bf87a 8021
.org 0xbf87c
	lsls r1, r1, #4	@ 000bf87c 0901
.org 0xbf87e
	adds r6, r0, r1	@ 000bf87e 4618
.org 0xbf880
	adds r1, r7, #0	@ 000bf880 391c
.org 0xbf882
	adds r1, #184	@ 000bf882 b831
.org 0xbf884
	ldr r1, [r1, #0]	@ 000bf884 0968
.org 0xbf886
	adds r3, r0, #0	@ 000bf886 031c
.org 0xbf888
	cmp r6, r1	@ 000bf888 8e42
.org 0xbf88a
	blt.n 0xbf890	@ 000bf88a 01db
.org 0xbf88c
	negs r0, r2	@ 000bf88c 5042
.org 0xbf88e
	str r0, [r4, #96]	@ 000bf88e 2066
.org 0xbf890
	ldr r0, [r4, #84]	@ 000bf890 606d
.org 0xbf892
	ldr r1, [r4, #92]	@ 000bf892 e16d
.org 0xbf894
	adds r0, r0, r1	@ 000bf894 4018
.org 0xbf896
	str r0, [r4, #84]	@ 000bf896 6065
.org 0xbf898
	ldr r0, [r4, #96]	@ 000bf898 206e
.org 0xbf89a
	adds r0, r3, r0	@ 000bf89a 1818
.org 0xbf89c
	str r0, [r4, #88]	@ 000bf89c a065
.org 0xbf89e
	ldr r0, [pc, #76]	@ 000bf89e 1348
.org 0xbf8a0
	adds r1, r4, #0	@ 000bf8a0 211c
.org 0xbf8a2
	adds r1, #84	@ 000bf8a2 5431
.org 0xbf8a4
	bl 0x1fb14	@ 000bf8a4 60f736f9
.org 0xbf8a8
	movs r1, #128	@ 000bf8a8 8021
.org 0xbf8aa
	lsls r1, r1, #7	@ 000bf8aa c901
.org 0xbf8ac
	cmp r0, r1	@ 000bf8ac 8842
.org 0xbf8ae
	bls.n 0xbf8e6	@ 000bf8ae 1ad9
.org 0xbf8b0
	ldrb r1, [r4, #10]	@ 000bf8b0 a17a
.org 0xbf8b2
	movs r0, #254	@ 000bf8b2 fe20
.org 0xbf8b4
	ands r0, r1	@ 000bf8b4 0840
.org 0xbf8b6
	movs r2, #0	@ 000bf8b6 0022
.org 0xbf8b8
	movs r1, #253	@ 000bf8b8 fd21
.org 0xbf8ba
	ands r0, r1	@ 000bf8ba 0840
.org 0xbf8bc
	strb r0, [r4, #10]	@ 000bf8bc a072
.org 0xbf8be
	adds r0, r4, #0	@ 000bf8be 201c
.org 0xbf8c0
	adds r0, #140	@ 000bf8c0 8c30
.org 0xbf8c2
	str r2, [r0, #0]	@ 000bf8c2 0260
.org 0xbf8c4
	adds r0, #4	@ 000bf8c4 0430
.org 0xbf8c6
	str r2, [r0, #0]	@ 000bf8c6 0260
.org 0xbf8c8
	adds r0, #4	@ 000bf8c8 0430
.org 0xbf8ca
	strb r2, [r0, #0]	@ 000bf8ca 0270
.org 0xbf8cc
	ldrb r1, [r4, #10]	@ 000bf8cc a17a
.org 0xbf8ce
	movs r0, #251	@ 000bf8ce fb20
.org 0xbf8d0
	ands r0, r1	@ 000bf8d0 0840
.org 0xbf8d2
	strb r0, [r4, #10]	@ 000bf8d2 a072
.org 0xbf8d4
	ldr r1, [pc, #24]	@ 000bf8d4 0649
.org 0xbf8d6
	ldrb r0, [r4, #9]	@ 000bf8d6 607a
.org 0xbf8d8
	lsls r0, r0, #2	@ 000bf8d8 8000
.org 0xbf8da
	adds r0, r0, r1	@ 000bf8da 4018
.org 0xbf8dc
	movs r1, #3	@ 000bf8dc 0321
.org 0xbf8de
	str r1, [r4, #12]	@ 000bf8de e160
.org 0xbf8e0
	ldr r0, [r0, #0]	@ 000bf8e0 0068
.org 0xbf8e2
	ldr r0, [r0, #12]	@ 000bf8e2 c068
