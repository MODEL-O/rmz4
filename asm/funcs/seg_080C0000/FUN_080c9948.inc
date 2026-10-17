@ FUN_080c9948  entry 0x080c9948  size 102
.thumb
.org 0xc9948
FUN_080c9948:
	push {r4, lr}	@ 000c9948 10b5
.org 0xc994a
	adds r4, r0, #0	@ 000c994a 041c
.org 0xc994c
	bl 0x1cff0	@ 000c994c 53f750fb
.org 0xc9950
	ldr r0, [r4, #84]	@ 000c9950 606d
.org 0xc9952
	ldr r1, [r4, #92]	@ 000c9952 e16d
.org 0xc9954
	adds r0, r0, r1	@ 000c9954 4018
.org 0xc9956
	str r0, [r4, #84]	@ 000c9956 6065
.org 0xc9958
	ldr r0, [r4, #88]	@ 000c9958 a06d
.org 0xc995a
	ldr r1, [r4, #96]	@ 000c995a 216e
.org 0xc995c
	adds r0, r0, r1	@ 000c995c 4018
.org 0xc995e
	str r0, [r4, #88]	@ 000c995e a065
.org 0xc9960
	ldr r0, [pc, #76]	@ 000c9960 1348
.org 0xc9962
	adds r1, r4, #0	@ 000c9962 211c
.org 0xc9964
	adds r1, #84	@ 000c9964 5431
.org 0xc9966
	bl 0x1fb14	@ 000c9966 56f7d5f8
.org 0xc996a
	movs r1, #128	@ 000c996a 8021
.org 0xc996c
	lsls r1, r1, #5	@ 000c996c 4901
.org 0xc996e
	cmp r0, r1	@ 000c996e 8842
.org 0xc9970
	bls.n 0xc99a8	@ 000c9970 1ad9
.org 0xc9972
	ldrb r1, [r4, #10]	@ 000c9972 a17a
.org 0xc9974
	movs r0, #254	@ 000c9974 fe20
.org 0xc9976
	ands r0, r1	@ 000c9976 0840
.org 0xc9978
	movs r2, #0	@ 000c9978 0022
.org 0xc997a
	movs r1, #253	@ 000c997a fd21
.org 0xc997c
	ands r0, r1	@ 000c997c 0840
.org 0xc997e
	strb r0, [r4, #10]	@ 000c997e a072
.org 0xc9980
	adds r0, r4, #0	@ 000c9980 201c
.org 0xc9982
	adds r0, #140	@ 000c9982 8c30
.org 0xc9984
	str r2, [r0, #0]	@ 000c9984 0260
.org 0xc9986
	adds r0, #4	@ 000c9986 0430
.org 0xc9988
	str r2, [r0, #0]	@ 000c9988 0260
.org 0xc998a
	adds r0, #4	@ 000c998a 0430
.org 0xc998c
	strb r2, [r0, #0]	@ 000c998c 0270
.org 0xc998e
	ldrb r1, [r4, #10]	@ 000c998e a17a
.org 0xc9990
	movs r0, #251	@ 000c9990 fb20
.org 0xc9992
	ands r0, r1	@ 000c9992 0840
.org 0xc9994
	strb r0, [r4, #10]	@ 000c9994 a072
.org 0xc9996
	ldr r1, [pc, #28]	@ 000c9996 0749
.org 0xc9998
	ldrb r0, [r4, #9]	@ 000c9998 607a
.org 0xc999a
	lsls r0, r0, #2	@ 000c999a 8000
.org 0xc999c
	adds r0, r0, r1	@ 000c999c 4018
.org 0xc999e
	movs r1, #3	@ 000c999e 0321
.org 0xc99a0
	str r1, [r4, #12]	@ 000c99a0 e160
.org 0xc99a2
	ldr r0, [r0, #0]	@ 000c99a2 0068
.org 0xc99a4
	ldr r0, [r0, #12]	@ 000c99a4 c068
.org 0xc99a6
	str r0, [r4, #20]	@ 000c99a6 6061
.org 0xc99a8
	pop {r4}	@ 000c99a8 10bc
.org 0xc99aa
	pop {r0}	@ 000c99aa 01bc
.org 0xc99ac
	bx r0	@ 000c99ac 0047
