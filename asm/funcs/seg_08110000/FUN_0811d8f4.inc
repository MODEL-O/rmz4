@ FUN_0811d8f4  entry 0x0811d8f4  size 204
.thumb
.org 0x11d8f4
FUN_0811d8f4:
	push {r4, r5, r6, r7, lr}	@ 0011d8f4 f0b5
.org 0x11d8f6
	mov r7, r9	@ 0011d8f6 4f46
.org 0x11d8f8
	mov r6, r8	@ 0011d8f8 4646
.org 0x11d8fa
	push {r6, r7}	@ 0011d8fa c0b4
.org 0x11d8fc
	sub sp, #4	@ 0011d8fc 81b0
.org 0x11d8fe
	lsls r0, r0, #24	@ 0011d8fe 0006
.org 0x11d900
	lsrs r0, r0, #24	@ 0011d900 000e
.org 0x11d902
	mov ip, r0	@ 0011d902 8446
.org 0x11d904
	mov r4, sp	@ 0011d904 6c46
.org 0x11d906
	mov r3, sp	@ 0011d906 6b46
.org 0x11d908
	mov r2, sp	@ 0011d908 6a46
.org 0x11d90a
	mov r1, sp	@ 0011d90a 6946
.org 0x11d90c
	movs r0, #255	@ 0011d90c ff20
.org 0x11d90e
	strb r0, [r1, #3]	@ 0011d90e c870
.org 0x11d910
	movs r0, #1	@ 0011d910 0120
.org 0x11d912
	negs r0, r0	@ 0011d912 4042
.org 0x11d914
	strb r0, [r2, #2]	@ 0011d914 9070
.org 0x11d916
	strb r0, [r3, #1]	@ 0011d916 5870
.org 0x11d918
	strb r0, [r4, #0]	@ 0011d918 2070
.org 0x11d91a
	movs r7, #1	@ 0011d91a 0127
.org 0x11d91c
	movs r6, #0	@ 0011d91c 0026
.org 0x11d91e
	ldr r0, [pc, #56]	@ 0011d91e 0e48
.org 0x11d920
	mov r9, r0	@ 0011d920 8146
.org 0x11d922
	ldr r1, [pc, #56]	@ 0011d922 0e49
.org 0x11d924
	mov r8, r1	@ 0011d924 8846
.org 0x11d926
	mov r1, ip	@ 0011d926 6146
.org 0x11d928
	lsls r0, r1, #2	@ 0011d928 8800
.org 0x11d92a
	adds r0, r6, r0	@ 0011d92a 3018
.org 0x11d92c
	mov r1, r9	@ 0011d92c 4946
.org 0x11d92e
	adds r2, r0, r1	@ 0011d92e 4218
.org 0x11d930
	ldrb r0, [r2, #0]	@ 0011d930 1078
.org 0x11d932
	cmp r0, #255	@ 0011d932 ff28
.org 0x11d934
	beq.n 0x11d972	@ 0011d934 1dd0
.org 0x11d936
	adds r2, r0, #0	@ 0011d936 021c
.org 0x11d938
	mov r0, r8	@ 0011d938 4046
.org 0x11d93a
	ldr r1, [r0, #0]	@ 0011d93a 0168
.org 0x11d93c
	lsrs r0, r2, #1	@ 0011d93c 5008
.org 0x11d93e
	adds r5, r1, r0	@ 0011d93e 0d18
.org 0x11d940
	ldrb r4, [r5, #0]	@ 0011d940 2c78
.org 0x11d942
	movs r0, #1	@ 0011d942 0120
.org 0x11d944
	ands r0, r2	@ 0011d944 1040
.org 0x11d946
	lsls r3, r0, #2	@ 0011d946 8300
.org 0x11d948
	adds r0, r4, #0	@ 0011d948 201c
.org 0x11d94a
	asrs r0, r3	@ 0011d94a 1841
.org 0x11d94c
	movs r1, #15	@ 0011d94c 0f21
.org 0x11d94e
	ands r0, r1	@ 0011d94e 0840
.org 0x11d950
	cmp r0, #0	@ 0011d950 0028
.org 0x11d952
	bne.n 0x11d960	@ 0011d952 05d1
.org 0x11d954
	movs r7, #0	@ 0011d954 0027
.org 0x11d956
	b.n 0x11d97c	@ 0011d956 11e0
.org 0x11d958
	.byte 0x40,0xc8,0x86,0x08	@ 0011d958 data
.org 0x11d95c
	.byte 0xa8,0xed,0x02,0x02	@ 0011d95c data
.org 0x11d960
	subs r0, #1	@ 0011d960 0138
.org 0x11d962
	lsls r0, r3	@ 0011d962 9840
.org 0x11d964
	lsls r1, r3	@ 0011d964 9940
.org 0x11d966
	bics r4, r1	@ 0011d966 8c43
.org 0x11d968
	orrs r0, r4	@ 0011d968 2043
.org 0x11d96a
	strb r0, [r5, #0]	@ 0011d96a 2870
.org 0x11d96c
	mov r1, sp	@ 0011d96c 6946
.org 0x11d96e
	adds r0, r1, r6	@ 0011d96e 8819
.org 0x11d970
	strb r2, [r0, #0]	@ 0011d970 0270
.org 0x11d972
	adds r0, r6, #1	@ 0011d972 701c
.org 0x11d974
	lsls r0, r0, #24	@ 0011d974 0006
.org 0x11d976
	lsrs r6, r0, #24	@ 0011d976 060e
.org 0x11d978
	cmp r6, #3	@ 0011d978 032e
.org 0x11d97a
	bls.n 0x11d926	@ 0011d97a d4d9
.org 0x11d97c
	movs r6, #0	@ 0011d97c 0026
.org 0x11d97e
	movs r5, #15	@ 0011d97e 0f25
.org 0x11d980
	mov r1, sp	@ 0011d980 6946
.org 0x11d982
	adds r0, r1, r6	@ 0011d982 8819
.org 0x11d984
	ldrb r2, [r0, #0]	@ 0011d984 0278
.org 0x11d986
	cmp r2, #255	@ 0011d986 ff2a
.org 0x11d988
	beq.n 0x11d9ae	@ 0011d988 11d0
.org 0x11d98a
	ldr r0, [pc, #60]	@ 0011d98a 0f48
.org 0x11d98c
	ldr r4, [r0, #0]	@ 0011d98c 0468
.org 0x11d98e
	lsrs r0, r2, #1	@ 0011d98e 5008
.org 0x11d990
	adds r4, r4, r0	@ 0011d990 2418
.org 0x11d992
	ldrb r3, [r4, #0]	@ 0011d992 2378
.org 0x11d994
	movs r0, #1	@ 0011d994 0120
.org 0x11d996
	ands r2, r0	@ 0011d996 0240
.org 0x11d998
	lsls r2, r2, #2	@ 0011d998 9200
.org 0x11d99a
	adds r1, r3, #0	@ 0011d99a 191c
.org 0x11d99c
	asrs r1, r2	@ 0011d99c 1141
.org 0x11d99e
	ands r1, r5	@ 0011d99e 2940
.org 0x11d9a0
	adds r1, #1	@ 0011d9a0 0131
.org 0x11d9a2
	lsls r1, r2	@ 0011d9a2 9140
.org 0x11d9a4
	adds r0, r5, #0	@ 0011d9a4 281c
.org 0x11d9a6
	lsls r0, r2	@ 0011d9a6 9040
.org 0x11d9a8
	bics r3, r0	@ 0011d9a8 8343
.org 0x11d9aa
	orrs r1, r3	@ 0011d9aa 1943
.org 0x11d9ac
	strb r1, [r4, #0]	@ 0011d9ac 2170
.org 0x11d9ae
	adds r0, r6, #1	@ 0011d9ae 701c
.org 0x11d9b0
	lsls r0, r0, #24	@ 0011d9b0 0006
.org 0x11d9b2
	lsrs r6, r0, #24	@ 0011d9b2 060e
.org 0x11d9b4
	cmp r6, #3	@ 0011d9b4 032e
.org 0x11d9b6
	bls.n 0x11d980	@ 0011d9b6 e3d9
.org 0x11d9b8
	adds r0, r7, #0	@ 0011d9b8 381c
.org 0x11d9ba
	add sp, #4	@ 0011d9ba 01b0
.org 0x11d9bc
	pop {r3, r4}	@ 0011d9bc 18bc
.org 0x11d9be
	mov r8, r3	@ 0011d9be 9846
