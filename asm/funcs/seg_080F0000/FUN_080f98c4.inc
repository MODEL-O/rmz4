@ FUN_080f98c4  entry 0x080f98c4  size 232
.thumb
.org 0xf98c4
FUN_080f98c4:
	push {r4, r5, r6, r7, lr}	@ 000f98c4 f0b5
.org 0xf98c6
	mov r7, sl	@ 000f98c6 5746
.org 0xf98c8
	mov r6, r9	@ 000f98c8 4e46
.org 0xf98ca
	mov r5, r8	@ 000f98ca 4546
.org 0xf98cc
	push {r5, r6, r7}	@ 000f98cc e0b4
.org 0xf98ce
	sub sp, #16	@ 000f98ce 84b0
.org 0xf98d0
	adds r7, r0, #0	@ 000f98d0 071c
.org 0xf98d2
	mov r0, sp	@ 000f98d2 6846
.org 0xf98d4
	ldr r1, [pc, #212]	@ 000f98d4 3549
.org 0xf98d6
	ldmia r1!, {r2, r3, r4}	@ 000f98d6 1cc9
.org 0xf98d8
	stmia r0!, {r2, r3, r4}	@ 000f98d8 1cc0
.org 0xf98da
	ldrb r5, [r7, #16]	@ 000f98da 3d7c
.org 0xf98dc
	mov sl, r5	@ 000f98dc aa46
.org 0xf98de
	movs r0, #180	@ 000f98de b420
.org 0xf98e0
	adds r0, r0, r7	@ 000f98e0 c019
.org 0xf98e2
	mov r9, r0	@ 000f98e2 8146
.org 0xf98e4
	ldrb r1, [r0, #0]	@ 000f98e4 0178
.org 0xf98e6
	mov r8, r1	@ 000f98e6 8846
.org 0xf98e8
	ldrb r0, [r7, #15]	@ 000f98e8 f87b
.org 0xf98ea
	cmp r0, #0	@ 000f98ea 0028
.org 0xf98ec
	bne.n 0xf9908	@ 000f98ec 0cd1
.org 0xf98ee
	ldr r0, [pc, #192]	@ 000f98ee 3048
.org 0xf98f0
	bl 0x2b10	@ 000f98f0 09f70ef9
.org 0xf98f4
	mov r2, r8	@ 000f98f4 4246
.org 0xf98f6
	lsls r0, r2, #2	@ 000f98f6 9000
.org 0xf98f8
	add r0, sp	@ 000f98f8 6844
.org 0xf98fa
	ldrh r1, [r0, #0]	@ 000f98fa 0188
.org 0xf98fc
	adds r0, r7, #0	@ 000f98fc 381c
.org 0xf98fe
	bl 0x1cf00	@ 000f98fe 23f7fffa
.org 0xf9902
	ldrb r0, [r7, #15]	@ 000f9902 f87b
.org 0xf9904
	adds r0, #1	@ 000f9904 0130
.org 0xf9906
	strb r0, [r7, #15]	@ 000f9906 f873
.org 0xf9908
	adds r0, r7, #0	@ 000f9908 381c
.org 0xf990a
	bl 0x1cff0	@ 000f990a 23f771fb
.org 0xf990e
	adds r0, r7, #0	@ 000f990e 381c
.org 0xf9910
	adds r0, #116	@ 000f9910 7430
.org 0xf9912
	ldr r4, [pc, #160]	@ 000f9912 284c
.org 0xf9914
	ldr r2, [pc, #160]	@ 000f9914 284a
.org 0xf9916
	ldrb r3, [r7, #30]	@ 000f9916 bb7f
.org 0xf9918
	lsls r3, r3, #8	@ 000f9918 1b02
.org 0xf991a
	adds r1, r7, #0	@ 000f991a 391c
.org 0xf991c
	adds r1, #112	@ 000f991c 7031
.org 0xf991e
	ldrb r1, [r1, #0]	@ 000f991e 0978
.org 0xf9920
	orrs r3, r1	@ 000f9920 0b43
.org 0xf9922
	ldr r5, [pc, #152]	@ 000f9922 264d
.org 0xf9924
	adds r1, r3, r5	@ 000f9924 5919
.org 0xf9926
	lsls r1, r1, #1	@ 000f9926 4900
.org 0xf9928
	adds r1, r1, r2	@ 000f9928 8918
.org 0xf992a
	ldrh r1, [r1, #0]	@ 000f992a 0988
.org 0xf992c
	lsls r1, r1, #2	@ 000f992c 8900
.org 0xf992e
	adds r1, r1, r4	@ 000f992e 0919
.org 0xf9930
	adds r2, r7, #0	@ 000f9930 3a1c
.org 0xf9932
	adds r2, #113	@ 000f9932 7132
.org 0xf9934
	movs r6, #0	@ 000f9934 0026
.org 0xf9936
	ldrsb r6, [r2, r6]	@ 000f9936 9657
.org 0xf9938
	ldr r1, [r1, #0]	@ 000f9938 0968
.org 0xf993a
	lsls r4, r6, #2	@ 000f993a b400
.org 0xf993c
	adds r4, r4, r1	@ 000f993c 6418
.org 0xf993e
	ldr r5, [pc, #128]	@ 000f993e 204d
.org 0xf9940
	ldr r2, [r7, #44]	@ 000f9940 fa6a
.org 0xf9942
	negs r1, r2	@ 000f9942 5142
.org 0xf9944
	orrs r1, r2	@ 000f9944 1143
.org 0xf9946
	asrs r1, r1, #31	@ 000f9946 c917
.org 0xf9948
	movs r2, #4	@ 000f9948 0422
.org 0xf994a
	ands r1, r2	@ 000f994a 1140
.org 0xf994c
	adds r1, r1, r5	@ 000f994c 4919
.org 0xf994e
	ldr r1, [r1, #0]	@ 000f994e 0968
.org 0xf9950
	lsls r3, r3, #2	@ 000f9950 9b00
.org 0xf9952
	adds r3, r3, r1	@ 000f9952 5b18
.org 0xf9954
	ldr r1, [pc, #108]	@ 000f9954 1b49
.org 0xf9956
	adds r3, r3, r1	@ 000f9956 5b18
.org 0xf9958
	ldr r1, [r3, #0]	@ 000f9958 1968
.org 0xf995a
	adds r1, r1, r6	@ 000f995a 8919
.org 0xf995c
	ldrb r1, [r1, #0]	@ 000f995c 0978
.org 0xf995e
	lsls r2, r1, #1	@ 000f995e 4a00
.org 0xf9960
	adds r2, r2, r1	@ 000f9960 5218
.org 0xf9962
	lsls r2, r2, #3	@ 000f9962 d200
.org 0xf9964
	ldr r1, [r4, #0]	@ 000f9964 2168
.org 0xf9966
	adds r1, r1, r2	@ 000f9966 8918
.org 0xf9968
	bl 0x5784	@ 000f9968 0bf70cff
.org 0xf996c
	adds r0, r7, #0	@ 000f996c 381c
.org 0xf996e
	adds r0, #115	@ 000f996e 7330
.org 0xf9970
	ldrb r0, [r0, #0]	@ 000f9970 0078
.org 0xf9972
	cmp r0, #3	@ 000f9972 0328
.org 0xf9974
	bne.n 0xf999c	@ 000f9974 12d1
.org 0xf9976
	mov r2, sl	@ 000f9976 5246
.org 0xf9978
	cmp r2, #3	@ 000f9978 032a
.org 0xf997a
	bne.n 0xf9994	@ 000f997a 0bd1
.org 0xf997c
	add r4, sp, #12	@ 000f997c 03ac
.org 0xf997e
	ldr r1, [pc, #72]	@ 000f997e 1249
.org 0xf9980
	adds r0, r4, #0	@ 000f9980 201c
.org 0xf9982
	movs r2, #3	@ 000f9982 0322
.org 0xf9984
	bl 0x129258	@ 000f9984 2ff068fc
.org 0xf9988
	add r4, r8	@ 000f9988 4444
.org 0xf998a
	ldrb r4, [r4, #0]	@ 000f998a 2478
.org 0xf998c
	mov r8, r4	@ 000f998c a046
.org 0xf998e
	mov r4, r8	@ 000f998e 4446
.org 0xf9990
	mov r3, r9	@ 000f9990 4b46
.org 0xf9992
	strb r4, [r3, #0]	@ 000f9992 1c70
.org 0xf9994
	movs r0, #0	@ 000f9994 0020
.org 0xf9996
	strb r0, [r7, #13]	@ 000f9996 7873
.org 0xf9998
	strb r0, [r7, #14]	@ 000f9998 b873
.org 0xf999a
	strb r0, [r7, #15]	@ 000f999a f873
.org 0xf999c
	add sp, #16	@ 000f999c 04b0
.org 0xf999e
	pop {r3, r4, r5}	@ 000f999e 38bc
.org 0xf99a0
	mov r8, r3	@ 000f99a0 9846
.org 0xf99a2
	mov r9, r4	@ 000f99a2 a146
.org 0xf99a4
	mov sl, r5	@ 000f99a4 aa46
.org 0xf99a6
	pop {r4, r5, r6, r7}	@ 000f99a6 f0bc
.org 0xf99a8
	pop {r0}	@ 000f99a8 01bc
.org 0xf99aa
	bx r0	@ 000f99aa 0047
