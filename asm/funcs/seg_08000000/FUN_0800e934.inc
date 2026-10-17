@ FUN_0800e934  entry 0x0800e934  size 86
.thumb
.org 0xe934
FUN_0800e934:
	push {lr}	@ 0000e934 00b5
.org 0xe936
	ldr r1, [pc, #84]	@ 0000e936 1549
.org 0xe938
	ldr r2, [pc, #84]	@ 0000e938 154a
.org 0xe93a
	adds r0, r1, r2	@ 0000e93a 8818
.org 0xe93c
	movs r2, #0	@ 0000e93c 0022
.org 0xe93e
	strb r2, [r0, #0]	@ 0000e93e 0270
.org 0xe940
	ldr r3, [pc, #80]	@ 0000e940 144b
.org 0xe942
	adds r0, r1, r3	@ 0000e942 c818
.org 0xe944
	strb r2, [r0, #0]	@ 0000e944 0270
.org 0xe946
	subs r3, #5	@ 0000e946 053b
.org 0xe948
	adds r0, r1, r3	@ 0000e948 c818
.org 0xe94a
	strb r2, [r0, #0]	@ 0000e94a 0270
.org 0xe94c
	adds r3, #12	@ 0000e94c 0c33
.org 0xe94e
	adds r0, r1, r3	@ 0000e94e c818
.org 0xe950
	str r2, [r0, #0]	@ 0000e950 0260
.org 0xe952
	subs r3, #2	@ 0000e952 023b
.org 0xe954
	adds r0, r1, r3	@ 0000e954 c818
.org 0xe956
	strb r2, [r0, #0]	@ 0000e956 0270
.org 0xe958
	adds r3, #1	@ 0000e958 0133
.org 0xe95a
	adds r0, r1, r3	@ 0000e95a c818
.org 0xe95c
	strb r2, [r0, #0]	@ 0000e95c 0270
.org 0xe95e
	adds r3, #5	@ 0000e95e 0533
.org 0xe960
	adds r0, r1, r3	@ 0000e960 c818
.org 0xe962
	strb r2, [r0, #0]	@ 0000e962 0270
.org 0xe964
	ldr r0, [pc, #48]	@ 0000e964 0c48
.org 0xe966
	adds r1, r1, r0	@ 0000e966 0918
.org 0xe968
	ldrb r1, [r1, #0]	@ 0000e968 0978
.org 0xe96a
	movs r0, #15	@ 0000e96a 0f20
.org 0xe96c
	ands r0, r1	@ 0000e96c 0840
.org 0xe96e
	cmp r0, #2	@ 0000e96e 0228
.org 0xe970
	bne.n 0xe986	@ 0000e970 09d1
.org 0xe972
	movs r0, #3	@ 0000e972 0320
.org 0xe974
	movs r1, #21	@ 0000e974 1521
.org 0xe976
	movs r2, #91	@ 0000e976 5b22
.org 0xe978
	bl 0x74c0	@ 0000e978 f8f7a2fd
.org 0xe97c
	movs r0, #3	@ 0000e97c 0320
.org 0xe97e
	movs r1, #22	@ 0000e97e 1621
.org 0xe980
	movs r2, #92	@ 0000e980 5c22
.org 0xe982
	bl 0x74c0	@ 0000e982 f8f79dfd
.org 0xe986
	pop {r0}	@ 0000e986 01bc
.org 0xe988
	bx r0	@ 0000e988 0047
