@ FUN_080c9860  entry 0x080c9860  size 218
.thumb
.org 0xc9860
FUN_080c9860:
	push {r4, r5, r6, r7, lr}	@ 000c9860 f0b5
.org 0xc9862
	adds r6, r0, #0	@ 000c9862 061c
.org 0xc9864
	ldrb r7, [r6, #17]	@ 000c9864 777c
.org 0xc9866
	adds r0, #180	@ 000c9866 b430
.org 0xc9868
	ldrb r0, [r0, #0]	@ 000c9868 0078
.org 0xc986a
	adds r4, r0, #0	@ 000c986a 041c
.org 0xc986c
	movs r0, #158	@ 000c986c 9e20
.org 0xc986e
	lsls r0, r0, #1	@ 000c986e 4000
.org 0xc9870
	bl 0x2b10	@ 000c9870 39f74ef9
.org 0xc9874
	ldr r1, [pc, #104]	@ 000c9874 1a49
.org 0xc9876
	ldrb r0, [r6, #9]	@ 000c9876 707a
.org 0xc9878
	lsls r0, r0, #2	@ 000c9878 8000
.org 0xc987a
	adds r0, r0, r1	@ 000c987a 4018
.org 0xc987c
	movs r1, #1	@ 000c987c 0121
.org 0xc987e
	str r1, [r6, #12]	@ 000c987e f160
.org 0xc9880
	ldr r0, [r0, #0]	@ 000c9880 0068
.org 0xc9882
	ldr r0, [r0, #4]	@ 000c9882 4068
.org 0xc9884
	str r0, [r6, #20]	@ 000c9884 7061
.org 0xc9886
	ldrb r1, [r6, #10]	@ 000c9886 b17a
.org 0xc9888
	movs r0, #1	@ 000c9888 0120
.org 0xc988a
	movs r5, #0	@ 000c988a 0025
.org 0xc988c
	orrs r0, r1	@ 000c988c 0843
.org 0xc988e
	movs r1, #2	@ 000c988e 0221
.org 0xc9890
	orrs r0, r1	@ 000c9890 0843
.org 0xc9892
	strb r0, [r6, #10]	@ 000c9892 b072
.org 0xc9894
	ldr r2, [pc, #76]	@ 000c9894 134a
.org 0xc9896
	adds r0, r4, #0	@ 000c9896 201c
.org 0xc9898
	adds r0, #64	@ 000c9898 4030
.org 0xc989a
	lsls r0, r0, #24	@ 000c989a 0006
.org 0xc989c
	lsrs r0, r0, #23	@ 000c989c c00d
.org 0xc989e
	adds r0, r0, r2	@ 000c989e 8018
.org 0xc98a0
	movs r3, #0	@ 000c98a0 0023
.org 0xc98a2
	ldrsh r1, [r0, r3]	@ 000c98a2 c15e
.org 0xc98a4
	lsls r0, r1, #2	@ 000c98a4 8800
.org 0xc98a6
	adds r0, r0, r1	@ 000c98a6 4018
.org 0xc98a8
	lsls r0, r0, #7	@ 000c98a8 c001
.org 0xc98aa
	cmp r0, #0	@ 000c98aa 0028
.org 0xc98ac
	bge.n 0xc98b0	@ 000c98ac 00da
.org 0xc98ae
	adds r0, #255	@ 000c98ae ff30
.org 0xc98b0
	asrs r0, r0, #8	@ 000c98b0 0012
.org 0xc98b2
	str r0, [r6, #92]	@ 000c98b2 f065
.org 0xc98b4
	lsls r0, r4, #1	@ 000c98b4 6000
.org 0xc98b6
	adds r0, r0, r2	@ 000c98b6 8018
.org 0xc98b8
	movs r2, #0	@ 000c98b8 0022
.org 0xc98ba
	ldrsh r1, [r0, r2]	@ 000c98ba 815e
.org 0xc98bc
	lsls r0, r1, #2	@ 000c98bc 8800
.org 0xc98be
	adds r0, r0, r1	@ 000c98be 4018
.org 0xc98c0
	lsls r0, r0, #7	@ 000c98c0 c001
.org 0xc98c2
	cmp r0, #0	@ 000c98c2 0028
.org 0xc98c4
	bge.n 0xc98c8	@ 000c98c4 00da
.org 0xc98c6
	adds r0, #255	@ 000c98c6 ff30
.org 0xc98c8
	asrs r0, r0, #8	@ 000c98c8 0012
.org 0xc98ca
	str r0, [r6, #96]	@ 000c98ca 3066
.org 0xc98cc
	adds r0, r6, #0	@ 000c98cc 301c
.org 0xc98ce
	bl 0x1cc9c	@ 000c98ce 53f7e5f9
.org 0xc98d2
	adds r2, r7, #0	@ 000c98d2 3a1c
.org 0xc98d4
	cmp r2, #0	@ 000c98d4 002a
.org 0xc98d6
	beq.n 0xc98e8	@ 000c98d6 07d0
.org 0xc98d8
	ldrb r0, [r6, #10]	@ 000c98d8 b07a
.org 0xc98da
	movs r1, #16	@ 000c98da 1021
.org 0xc98dc
	orrs r0, r1	@ 000c98dc 0843
.org 0xc98de
	b.n 0xc98ee	@ 000c98de 06e0
.org 0xc98e0
	.byte 0xf4,0x49,0x86,0x08	@ 000c98e0 data
.org 0xc98e4
	.byte 0x0c,0x93,0x12,0x08	@ 000c98e4 data
.org 0xc98e8
	ldrb r1, [r6, #10]	@ 000c98e8 b17a
.org 0xc98ea
	movs r0, #239	@ 000c98ea ef20
.org 0xc98ec
	ands r0, r1	@ 000c98ec 0840
.org 0xc98ee
	strb r0, [r6, #10]	@ 000c98ee b072
.org 0xc98f0
	movs r1, #1	@ 000c98f0 0121
.org 0xc98f2
	ands r1, r2	@ 000c98f2 1140
.org 0xc98f4
	adds r0, r6, #0	@ 000c98f4 301c
.org 0xc98f6
	adds r0, #76	@ 000c98f6 4c30
.org 0xc98f8
	movs r5, #0	@ 000c98f8 0025
.org 0xc98fa
	strb r1, [r0, #0]	@ 000c98fa 0170
.org 0xc98fc
	adds r3, r6, #0	@ 000c98fc 331c
.org 0xc98fe
	adds r3, #74	@ 000c98fe 4a33
.org 0xc9900
	lsls r1, r1, #4	@ 000c9900 0901
.org 0xc9902
	ldrb r2, [r3, #0]	@ 000c9902 1a78
.org 0xc9904
	movs r0, #17	@ 000c9904 1120
.org 0xc9906
	negs r0, r0	@ 000c9906 4042
.org 0xc9908
	ands r0, r2	@ 000c9908 1040
.org 0xc990a
	orrs r0, r1	@ 000c990a 0843
.org 0xc990c
	strb r0, [r3, #0]	@ 000c990c 1870
.org 0xc990e
	movs r1, #176	@ 000c990e b021
.org 0xc9910
	lsls r1, r1, #7	@ 000c9910 c901
.org 0xc9912
	adds r0, r6, #0	@ 000c9912 301c
.org 0xc9914
	bl 0x1cf00	@ 000c9914 53f7f4fa
.org 0xc9918
	ldrb r1, [r6, #10]	@ 000c9918 b17a
.org 0xc991a
	movs r0, #4	@ 000c991a 0420
.org 0xc991c
	orrs r0, r1	@ 000c991c 0843
.org 0xc991e
	strb r0, [r6, #10]	@ 000c991e b072
.org 0xc9920
	adds r4, r6, #0	@ 000c9920 341c
.org 0xc9922
	adds r4, #116	@ 000c9922 7434
.org 0xc9924
	ldr r1, [pc, #28]	@ 000c9924 0749
.org 0xc9926
	adds r2, r6, #0	@ 000c9926 321c
.org 0xc9928
	adds r2, #84	@ 000c9928 5432
.org 0xc992a
	adds r0, r4, #0	@ 000c992a 201c
.org 0xc992c
	movs r3, #64	@ 000c992c 4023
.org 0xc992e
	bl 0x5760	@ 000c992e 3bf717ff
.org 0xc9932
	str r6, [r4, #44]	@ 000c9932 e662
.org 0xc9934
	str r5, [r4, #36]	@ 000c9934 6562
.org 0xc9936
	adds r0, r6, #0	@ 000c9936 301c
.org 0xc9938
	bl 0xc9948	@ 000c9938 00f006f8
