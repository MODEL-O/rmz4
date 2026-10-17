@ FUN_0809967c  entry 0x0809967c  size 166
.thumb
.org 0x9967c
FUN_0809967c:
	push {r4, r5, r6, r7, lr}	@ 0009967c f0b5
.org 0x9967e
	adds r7, r0, #0	@ 0009967e 071c
.org 0x99680
	bl 0x1cc9c	@ 00099680 83f70cfb
.org 0x99684
	ldrb r1, [r7, #10]	@ 00099684 b97a
.org 0x99686
	movs r0, #1	@ 00099686 0120
.org 0x99688
	orrs r0, r1	@ 00099688 0843
.org 0x9968a
	movs r1, #2	@ 0009968a 0221
.org 0x9968c
	orrs r0, r1	@ 0009968c 0843
.org 0x9968e
	strb r0, [r7, #10]	@ 0009968e b872
.org 0x99690
	movs r1, #210	@ 00099690 d221
.org 0x99692
	lsls r1, r1, #7	@ 00099692 c901
.org 0x99694
	adds r0, r7, #0	@ 00099694 381c
.org 0x99696
	bl 0x1cf00	@ 00099696 83f733fc
.org 0x9969a
	adds r0, r7, #0	@ 0009969a 381c
.org 0x9969c
	bl 0x1cff0	@ 0009969c 83f7a8fc
.org 0x996a0
	movs r5, #0	@ 000996a0 0025
.org 0x996a2
	ldrb r1, [r7, #10]	@ 000996a2 b97a
.org 0x996a4
	movs r0, #239	@ 000996a4 ef20
.org 0x996a6
	ands r0, r1	@ 000996a6 0840
.org 0x996a8
	strb r0, [r7, #10]	@ 000996a8 b872
.org 0x996aa
	movs r6, #1	@ 000996aa 0126
.org 0x996ac
	adds r0, r7, #0	@ 000996ac 381c
.org 0x996ae
	adds r0, #76	@ 000996ae 4c30
.org 0x996b0
	strb r5, [r0, #0]	@ 000996b0 0570
.org 0x996b2
	adds r2, r7, #0	@ 000996b2 3a1c
.org 0x996b4
	adds r2, #74	@ 000996b4 4a32
.org 0x996b6
	ldrb r1, [r2, #0]	@ 000996b6 1178
.org 0x996b8
	movs r0, #17	@ 000996b8 1120
.org 0x996ba
	negs r0, r0	@ 000996ba 4042
.org 0x996bc
	ands r0, r1	@ 000996bc 0840
.org 0x996be
	strb r0, [r2, #0]	@ 000996be 1070
.org 0x996c0
	ldrb r1, [r7, #10]	@ 000996c0 b97a
.org 0x996c2
	movs r0, #4	@ 000996c2 0420
.org 0x996c4
	orrs r0, r1	@ 000996c4 0843
.org 0x996c6
	strb r0, [r7, #10]	@ 000996c6 b872
.org 0x996c8
	adds r4, r7, #0	@ 000996c8 3c1c
.org 0x996ca
	adds r4, #116	@ 000996ca 7434
.org 0x996cc
	ldr r1, [pc, #84]	@ 000996cc 1549
.org 0x996ce
	adds r2, #10	@ 000996ce 0a32
.org 0x996d0
	adds r0, r4, #0	@ 000996d0 201c
.org 0x996d2
	movs r3, #7	@ 000996d2 0723
.org 0x996d4
	bl 0x5760	@ 000996d4 6cf744f8
.org 0x996d8
	str r7, [r4, #44]	@ 000996d8 e762
.org 0x996da
	ldr r0, [pc, #76]	@ 000996da 1348
.org 0x996dc
	str r0, [r4, #36]	@ 000996dc 6062
.org 0x996de
	adds r0, r7, #0	@ 000996de 381c
.org 0x996e0
	adds r0, #189	@ 000996e0 bd30
.org 0x996e2
	strb r5, [r0, #0]	@ 000996e2 0570
.org 0x996e4
	ldr r0, [r7, #84]	@ 000996e4 786d
.org 0x996e6
	ldr r1, [r7, #88]	@ 000996e6 b96d
.org 0x996e8
	bl 0x8534	@ 000996e8 6ef724ff
.org 0x996ec
	str r0, [r7, #88]	@ 000996ec b865
.org 0x996ee
	adds r1, r7, #0	@ 000996ee 391c
.org 0x996f0
	adds r1, #180	@ 000996f0 b431
.org 0x996f2
	ldr r0, [r7, #84]	@ 000996f2 786d
.org 0x996f4
	str r0, [r1, #0]	@ 000996f4 0860
.org 0x996f6
	adds r1, #4	@ 000996f6 0431
.org 0x996f8
	ldr r0, [r7, #88]	@ 000996f8 b86d
.org 0x996fa
	str r0, [r1, #0]	@ 000996fa 0860
.org 0x996fc
	movs r0, #32	@ 000996fc 2020
.org 0x996fe
	str r0, [r7, #104]	@ 000996fe b866
.org 0x99700
	adds r0, r7, #0	@ 00099700 381c
.org 0x99702
	adds r0, #192	@ 00099702 c030
.org 0x99704
	str r5, [r0, #0]	@ 00099704 0560
.org 0x99706
	ldr r1, [pc, #36]	@ 00099706 0949
.org 0x99708
	ldrb r0, [r7, #9]	@ 00099708 787a
.org 0x9970a
	lsls r0, r0, #2	@ 0009970a 8000
.org 0x9970c
	adds r0, r0, r1	@ 0009970c 4018
.org 0x9970e
	str r6, [r7, #12]	@ 0009970e fe60
.org 0x99710
	ldr r0, [r0, #0]	@ 00099710 0068
.org 0x99712
	ldr r0, [r0, #4]	@ 00099712 4068
.org 0x99714
	str r0, [r7, #20]	@ 00099714 7861
.org 0x99716
	adds r0, r7, #0	@ 00099716 381c
.org 0x99718
	bl 0x99730	@ 00099718 00f00af8
.org 0x9971c
	pop {r4, r5, r6, r7}	@ 0009971c f0bc
.org 0x9971e
	pop {r0}	@ 0009971e 01bc
.org 0x99720
	bx r0	@ 00099720 0047
