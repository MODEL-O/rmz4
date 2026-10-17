@ FUN_0803b8f0  entry 0x0803b8f0  size 182
.thumb
.org 0x3b8f0
FUN_0803b8f0:
	push {r4, r5, r6, r7, lr}	@ 0003b8f0 f0b5
.org 0x3b8f2
	mov r7, r8	@ 0003b8f2 4746
.org 0x3b8f4
	push {r7}	@ 0003b8f4 80b4
.org 0x3b8f6
	sub sp, #8	@ 0003b8f6 82b0
.org 0x3b8f8
	adds r5, r0, #0	@ 0003b8f8 051c
.org 0x3b8fa
	adds r0, #180	@ 0003b8fa b430
.org 0x3b8fc
	ldr r0, [r0, #0]	@ 0003b8fc 0068
.org 0x3b8fe
	mov r8, r0	@ 0003b8fe 8046
.org 0x3b900
	adds r0, r5, #0	@ 0003b900 281c
.org 0x3b902
	bl 0x1cc9c	@ 0003b902 e1f7cbf9
.org 0x3b906
	adds r0, r5, #0	@ 0003b906 281c
.org 0x3b908
	bl 0x1ceec	@ 0003b908 e1f7f0fa
.org 0x3b90c
	ldrb r1, [r5, #10]	@ 0003b90c a97a
.org 0x3b90e
	movs r0, #1	@ 0003b90e 0120
.org 0x3b910
	orrs r0, r1	@ 0003b910 0843
.org 0x3b912
	movs r1, #2	@ 0003b912 0221
.org 0x3b914
	orrs r0, r1	@ 0003b914 0843
.org 0x3b916
	strb r0, [r5, #10]	@ 0003b916 a872
.org 0x3b918
	movs r1, #186	@ 0003b918 ba21
.org 0x3b91a
	lsls r1, r1, #7	@ 0003b91a c901
.org 0x3b91c
	adds r0, r5, #0	@ 0003b91c 281c
.org 0x3b91e
	bl 0x1cf00	@ 0003b91e e1f7effa
.org 0x3b922
	movs r0, #26	@ 0003b922 1a20
.org 0x3b924
	bl 0x2b10	@ 0003b924 c7f7f4f8
.org 0x3b928
	ldrb r1, [r5, #10]	@ 0003b928 a97a
.org 0x3b92a
	movs r0, #16	@ 0003b92a 1020
.org 0x3b92c
	ands r0, r1	@ 0003b92c 0840
.org 0x3b92e
	cmp r0, #0	@ 0003b92e 0028
.org 0x3b930
	beq.n 0x3b938	@ 0003b930 02d0
.org 0x3b932
	movs r0, #192	@ 0003b932 c020
.org 0x3b934
	lsls r0, r0, #3	@ 0003b934 c000
.org 0x3b936
	b.n 0x3b93a	@ 0003b936 00e0
.org 0x3b938
	ldr r0, [pc, #108]	@ 0003b938 1b48
.org 0x3b93a
	str r0, [r5, #92]	@ 0003b93a e865
.org 0x3b93c
	movs r4, #0	@ 0003b93c 0024
.org 0x3b93e
	str r4, [r5, #96]	@ 0003b93e 2c66
.org 0x3b940
	movs r0, #20	@ 0003b940 1420
.org 0x3b942
	strb r0, [r5, #18]	@ 0003b942 a874
.org 0x3b944
	ldrb r1, [r5, #10]	@ 0003b944 a97a
.org 0x3b946
	movs r0, #4	@ 0003b946 0420
.org 0x3b948
	orrs r0, r1	@ 0003b948 0843
.org 0x3b94a
	strb r0, [r5, #10]	@ 0003b94a a872
.org 0x3b94c
	adds r6, r5, #0	@ 0003b94c 2e1c
.org 0x3b94e
	adds r6, #116	@ 0003b94e 7436
.org 0x3b950
	ldr r7, [pc, #88]	@ 0003b950 164f
.org 0x3b952
	adds r2, r5, #0	@ 0003b952 2a1c
.org 0x3b954
	adds r2, #84	@ 0003b954 5432
.org 0x3b956
	adds r0, r6, #0	@ 0003b956 301c
.org 0x3b958
	adds r1, r7, #0	@ 0003b958 391c
.org 0x3b95a
	movs r3, #1	@ 0003b95a 0123
.org 0x3b95c
	bl 0x5760	@ 0003b95c c9f700ff
.org 0x3b960
	str r5, [r6, #44]	@ 0003b960 f562
.org 0x3b962
	str r4, [r6, #36]	@ 0003b962 7462
.org 0x3b964
	mov r0, r8	@ 0003b964 4046
.org 0x3b966
	bl 0x3a4a8	@ 0003b966 fef79ffd
.org 0x3b96a
	adds r0, #8	@ 0003b96a 0830
.org 0x3b96c
	lsls r0, r0, #24	@ 0003b96c 0006
.org 0x3b96e
	lsrs r4, r0, #24	@ 0003b96e 040e
.org 0x3b970
	mov r0, r8	@ 0003b970 4046
.org 0x3b972
	bl 0x38a78	@ 0003b972 fdf781f8
.org 0x3b976
	lsls r0, r0, #24	@ 0003b976 0006
.org 0x3b978
	cmp r0, #0	@ 0003b978 0028
.org 0x3b97a
	beq.n 0x3b980	@ 0003b97a 01d0
.org 0x3b97c
	lsls r0, r4, #25	@ 0003b97c 6006
.org 0x3b97e
	lsrs r4, r0, #24	@ 0003b97e 040e
.org 0x3b980
	movs r3, #1	@ 0003b980 0123
.org 0x3b982
	negs r3, r3	@ 0003b982 5b42
.org 0x3b984
	str r3, [sp, #0]	@ 0003b984 0093
.org 0x3b986
	str r3, [sp, #4]	@ 0003b986 0193
.org 0x3b988
	adds r0, r6, #0	@ 0003b988 301c
.org 0x3b98a
	adds r1, r7, #0	@ 0003b98a 391c
.org 0x3b98c
	adds r2, r4, #0	@ 0003b98c 221c
.org 0x3b98e
	bl 0x5794	@ 0003b98e c9f701ff
.org 0x3b992
	adds r1, r5, #0	@ 0003b992 291c
.org 0x3b994
	adds r1, #180	@ 0003b994 b431
.org 0x3b996
	movs r0, #4	@ 0003b996 0420
.org 0x3b998
	strb r0, [r1, #14]	@ 0003b998 8873
.org 0x3b99a
	add sp, #8	@ 0003b99a 02b0
.org 0x3b99c
	pop {r3}	@ 0003b99c 08bc
.org 0x3b99e
	mov r8, r3	@ 0003b99e 9846
.org 0x3b9a0
	pop {r4, r5, r6, r7}	@ 0003b9a0 f0bc
.org 0x3b9a2
	pop {r0}	@ 0003b9a2 01bc
.org 0x3b9a4
	bx r0	@ 0003b9a4 0047
