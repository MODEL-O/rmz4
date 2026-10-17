@ FUN_080b98c0  entry 0x080b98c0  size 208
.thumb
.org 0xb98c0
FUN_080b98c0:
	push {r4, lr}	@ 000b98c0 10b5
.org 0xb98c2
	adds r4, r0, #0	@ 000b98c2 041c
.org 0xb98c4
	adds r0, #182	@ 000b98c4 b630
.org 0xb98c6
	ldrb r0, [r0, #0]	@ 000b98c6 0078
.org 0xb98c8
	cmp r0, #0	@ 000b98c8 0028
.org 0xb98ca
	bne.n 0xb98e4	@ 000b98ca 0bd1
.org 0xb98cc
	ldr r0, [pc, #16]	@ 000b98cc 0448
.org 0xb98ce
	ldrb r1, [r4, #13]	@ 000b98ce 617b
.org 0xb98d0
	lsls r1, r1, #2	@ 000b98d0 8900
.org 0xb98d2
	adds r1, r1, r0	@ 000b98d2 0918
.org 0xb98d4
	ldr r1, [r1, #0]	@ 000b98d4 0968
.org 0xb98d6
	adds r0, r4, #0	@ 000b98d6 201c
.org 0xb98d8
	bl 0x128f80	@ 000b98d8 6ff052fb
.org 0xb98dc
	b.n 0xb98ea	@ 000b98dc 05e0
.org 0xb98de
	.byte 0x00	@ 000b98de data
.org 0xb98df
	.byte 0x00	@ 000b98df data
.org 0xb98e0
	.byte 0x38,0x44,0x86,0x08	@ 000b98e0 data
.org 0xb98e4
	adds r0, r4, #0	@ 000b98e4 201c
.org 0xb98e6
	bl 0xb9d6c	@ 000b98e6 00f041fa
.org 0xb98ea
	adds r0, r4, #0	@ 000b98ea 201c
.org 0xb98ec
	bl 0xb9e18	@ 000b98ec 00f094fa
.org 0xb98f0
	lsls r0, r0, #24	@ 000b98f0 0006
.org 0xb98f2
	cmp r0, #0	@ 000b98f2 0028
.org 0xb98f4
	beq.n 0xb990c	@ 000b98f4 0ad0
.org 0xb98f6
	adds r0, r4, #0	@ 000b98f6 201c
.org 0xb98f8
	adds r0, #84	@ 000b98f8 5430
.org 0xb98fa
	ldrb r2, [r4, #10]	@ 000b98fa a27a
.org 0xb98fc
	lsrs r2, r2, #4	@ 000b98fc 1209
.org 0xb98fe
	movs r1, #1	@ 000b98fe 0121
.org 0xb9900
	ands r2, r1	@ 000b9900 0a40
.org 0xb9902
	movs r1, #0	@ 000b9902 0021
.org 0xb9904
	bl 0xe67ac	@ 000b9904 2cf052ff
.org 0xb9908
	movs r0, #30	@ 000b9908 1e20
.org 0xb990a
	strb r0, [r4, #19]	@ 000b990a e074
.org 0xb990c
	adds r0, r4, #0	@ 000b990c 201c
.org 0xb990e
	bl 0xb9e58	@ 000b990e 00f0a3fa
.org 0xb9912
	lsls r0, r0, #24	@ 000b9912 0006
.org 0xb9914
	cmp r0, #0	@ 000b9914 0028
.org 0xb9916
	beq.n 0xb9944	@ 000b9916 15d0
.org 0xb9918
	ldr r2, [r4, #44]	@ 000b9918 e26a
.org 0xb991a
	ldr r0, [pc, #124]	@ 000b991a 1f48
.org 0xb991c
	adds r2, r2, r0	@ 000b991c 1218
.org 0xb991e
	ldr r0, [r2, #36]	@ 000b991e 506a
.org 0xb9920
	movs r1, #2	@ 000b9920 0221
.org 0xb9922
	negs r1, r1	@ 000b9922 4942
.org 0xb9924
	ands r0, r1	@ 000b9924 0840
.org 0xb9926
	movs r3, #2	@ 000b9926 0223
.org 0xb9928
	orrs r0, r3	@ 000b9928 1843
.org 0xb992a
	str r0, [r2, #36]	@ 000b992a 5062
.org 0xb992c
	ldr r1, [pc, #108]	@ 000b992c 1b49
.org 0xb992e
	ldrb r0, [r4, #9]	@ 000b992e 607a
.org 0xb9930
	lsls r0, r0, #2	@ 000b9930 8000
.org 0xb9932
	adds r0, r0, r1	@ 000b9932 4018
.org 0xb9934
	str r3, [r4, #12]	@ 000b9934 e360
.org 0xb9936
	ldr r0, [r0, #0]	@ 000b9936 0068
.org 0xb9938
	ldr r0, [r0, #8]	@ 000b9938 8068
.org 0xb993a
	str r0, [r4, #20]	@ 000b993a 6061
.org 0xb993c
	movs r0, #209	@ 000b993c d120
.org 0xb993e
	lsls r0, r0, #1	@ 000b993e 4000
.org 0xb9940
	bl 0x2b10	@ 000b9940 49f7e6f8
.org 0xb9944
	ldr r0, [r4, #44]	@ 000b9944 e06a
.org 0xb9946
	ldr r1, [pc, #80]	@ 000b9946 1449
.org 0xb9948
	adds r0, r0, r1	@ 000b9948 4018
.org 0xb994a
	ldr r0, [r0, #36]	@ 000b994a 406a
.org 0xb994c
	movs r1, #4	@ 000b994c 0421
.org 0xb994e
	ands r0, r1	@ 000b994e 0840
.org 0xb9950
	cmp r0, #0	@ 000b9950 0028
.org 0xb9952
	beq.n 0xb998a	@ 000b9952 1ad0
.org 0xb9954
	ldrb r1, [r4, #10]	@ 000b9954 a17a
.org 0xb9956
	movs r0, #254	@ 000b9956 fe20
.org 0xb9958
	ands r0, r1	@ 000b9958 0840
.org 0xb995a
	movs r2, #0	@ 000b995a 0022
.org 0xb995c
	movs r1, #253	@ 000b995c fd21
.org 0xb995e
	ands r0, r1	@ 000b995e 0840
.org 0xb9960
	strb r0, [r4, #10]	@ 000b9960 a072
.org 0xb9962
	adds r0, r4, #0	@ 000b9962 201c
.org 0xb9964
	adds r0, #140	@ 000b9964 8c30
.org 0xb9966
	str r2, [r0, #0]	@ 000b9966 0260
.org 0xb9968
	adds r0, #4	@ 000b9968 0430
.org 0xb996a
	str r2, [r0, #0]	@ 000b996a 0260
.org 0xb996c
	adds r0, #4	@ 000b996c 0430
.org 0xb996e
	strb r2, [r0, #0]	@ 000b996e 0270
.org 0xb9970
	ldrb r1, [r4, #10]	@ 000b9970 a17a
.org 0xb9972
	movs r0, #251	@ 000b9972 fb20
.org 0xb9974
	ands r0, r1	@ 000b9974 0840
.org 0xb9976
	strb r0, [r4, #10]	@ 000b9976 a072
.org 0xb9978
	ldr r1, [pc, #32]	@ 000b9978 0849
.org 0xb997a
	ldrb r0, [r4, #9]	@ 000b997a 607a
.org 0xb997c
	lsls r0, r0, #2	@ 000b997c 8000
.org 0xb997e
	adds r0, r0, r1	@ 000b997e 4018
.org 0xb9980
	movs r1, #3	@ 000b9980 0321
.org 0xb9982
	str r1, [r4, #12]	@ 000b9982 e160
.org 0xb9984
	ldr r0, [r0, #0]	@ 000b9984 0068
.org 0xb9986
	ldr r0, [r0, #12]	@ 000b9986 c068
.org 0xb9988
	str r0, [r4, #20]	@ 000b9988 6061
.org 0xb998a
	adds r0, r4, #0	@ 000b998a 201c
.org 0xb998c
	bl 0x1cff0	@ 000b998c 63f730fb
