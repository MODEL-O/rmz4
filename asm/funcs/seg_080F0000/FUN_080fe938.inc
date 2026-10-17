@ FUN_080fe938  entry 0x080fe938  size 262
.thumb
.org 0xfe938
FUN_080fe938:
	push {r4, r5, r6, r7, lr}	@ 000fe938 f0b5
.org 0xfe93a
	sub sp, #8	@ 000fe93a 82b0
.org 0xfe93c
	adds r6, r0, #0	@ 000fe93c 061c
.org 0xfe93e
	ldrb r7, [r6, #14]	@ 000fe93e b77b
.org 0xfe940
	cmp r7, #0	@ 000fe940 002f
.org 0xfe942
	bne.n 0xfe9bc	@ 000fe942 3bd1
.org 0xfe944
	adds r0, #140	@ 000fe944 8c30
.org 0xfe946
	str r7, [r0, #0]	@ 000fe946 0760
.org 0xfe948
	adds r0, #4	@ 000fe948 0430
.org 0xfe94a
	str r7, [r0, #0]	@ 000fe94a 0760
.org 0xfe94c
	adds r0, #4	@ 000fe94c 0430
.org 0xfe94e
	strb r7, [r0, #0]	@ 000fe94e 0770
.org 0xfe950
	ldrb r1, [r6, #10]	@ 000fe950 b17a
.org 0xfe952
	movs r0, #251	@ 000fe952 fb20
.org 0xfe954
	ands r0, r1	@ 000fe954 0840
.org 0xfe956
	movs r1, #254	@ 000fe956 fe21
.org 0xfe958
	ands r0, r1	@ 000fe958 0840
.org 0xfe95a
	strb r0, [r6, #10]	@ 000fe95a b072
.org 0xfe95c
	ldrb r1, [r6, #11]	@ 000fe95c f17a
.org 0xfe95e
	movs r0, #247	@ 000fe95e f720
.org 0xfe960
	ands r0, r1	@ 000fe960 0840
.org 0xfe962
	strb r0, [r6, #11]	@ 000fe962 f072
.org 0xfe964
	ldr r2, [pc, #216]	@ 000fe964 364a
.org 0xfe966
	ldr r5, [pc, #220]	@ 000fe966 374d
.org 0xfe968
	ldrb r0, [r6, #16]	@ 000fe968 307c
.org 0xfe96a
	lsls r0, r0, #2	@ 000fe96a 8000
.org 0xfe96c
	adds r0, r0, r5	@ 000fe96c 4019
.org 0xfe96e
	ldr r1, [r0, #0]	@ 000fe96e 0168
.org 0xfe970
	lsrs r3, r1, #3	@ 000fe970 cb08
.org 0xfe972
	adds r2, #4	@ 000fe972 0432
.org 0xfe974
	adds r3, r3, r2	@ 000fe974 9b18
.org 0xfe976
	movs r4, #7	@ 000fe976 0724
.org 0xfe978
	ands r1, r4	@ 000fe978 2140
.org 0xfe97a
	movs r2, #1	@ 000fe97a 0122
.org 0xfe97c
	adds r0, r2, #0	@ 000fe97c 101c
.org 0xfe97e
	lsls r0, r1	@ 000fe97e 8840
.org 0xfe980
	ldrb r1, [r3, #0]	@ 000fe980 1978
.org 0xfe982
	orrs r0, r1	@ 000fe982 0843
.org 0xfe984
	strb r0, [r3, #0]	@ 000fe984 1870
.org 0xfe986
	ldr r3, [pc, #192]	@ 000fe986 304b
.org 0xfe988
	ldrb r0, [r6, #16]	@ 000fe988 307c
.org 0xfe98a
	lsls r0, r0, #2	@ 000fe98a 8000
.org 0xfe98c
	adds r0, r0, r5	@ 000fe98c 4019
.org 0xfe98e
	ldr r0, [r0, #0]	@ 000fe98e 0068
.org 0xfe990
	lsrs r1, r0, #3	@ 000fe990 c108
.org 0xfe992
	adds r1, r1, r3	@ 000fe992 c918
.org 0xfe994
	ands r0, r4	@ 000fe994 2040
.org 0xfe996
	lsls r2, r0	@ 000fe996 8240
.org 0xfe998
	ldrb r0, [r1, #0]	@ 000fe998 0878
.org 0xfe99a
	orrs r2, r0	@ 000fe99a 0243
.org 0xfe99c
	strb r2, [r1, #0]	@ 000fe99c 0a70
.org 0xfe99e
	strb r7, [r6, #18]	@ 000fe99e b774
.org 0xfe9a0
	ldr r2, [pc, #168]	@ 000fe9a0 2a4a
.org 0xfe9a2
	ldr r1, [r2, #0]	@ 000fe9a2 1168
.org 0xfe9a4
	ldr r0, [pc, #168]	@ 000fe9a4 2a48
.org 0xfe9a6
	muls r0, r1	@ 000fe9a6 4843
.org 0xfe9a8
	ldr r1, [pc, #168]	@ 000fe9a8 2a49
.org 0xfe9aa
	adds r0, r0, r1	@ 000fe9aa 4018
.org 0xfe9ac
	lsls r0, r0, #1	@ 000fe9ac 4000
.org 0xfe9ae
	lsrs r1, r0, #1	@ 000fe9ae 4108
.org 0xfe9b0
	str r1, [r2, #0]	@ 000fe9b0 1160
.org 0xfe9b2
	lsrs r0, r0, #17	@ 000fe9b2 400c
.org 0xfe9b4
	strb r0, [r6, #19]	@ 000fe9b4 f074
.org 0xfe9b6
	ldrb r0, [r6, #14]	@ 000fe9b6 b07b
.org 0xfe9b8
	adds r0, #1	@ 000fe9b8 0130
.org 0xfe9ba
	strb r0, [r6, #14]	@ 000fe9ba b073
.org 0xfe9bc
	ldrb r1, [r6, #18]	@ 000fe9bc b17c
.org 0xfe9be
	movs r0, #3	@ 000fe9be 0320
.org 0xfe9c0
	ands r0, r1	@ 000fe9c0 0840
.org 0xfe9c2
	cmp r0, #0	@ 000fe9c2 0028
.org 0xfe9c4
	bne.n 0xfea16	@ 000fe9c4 27d1
.org 0xfe9c6
	ldr r0, [r6, #84]	@ 000fe9c6 706d
.org 0xfe9c8
	str r0, [sp, #0]	@ 000fe9c8 0090
.org 0xfe9ca
	ldr r0, [r6, #88]	@ 000fe9ca b06d
.org 0xfe9cc
	ldr r2, [pc, #136]	@ 000fe9cc 224a
.org 0xfe9ce
	adds r0, r0, r2	@ 000fe9ce 8018
.org 0xfe9d0
	str r0, [sp, #4]	@ 000fe9d0 0190
.org 0xfe9d2
	lsls r0, r1, #24	@ 000fe9d2 0806
.org 0xfe9d4
	lsrs r0, r0, #26	@ 000fe9d4 800e
.org 0xfe9d6
	lsls r1, r0, #3	@ 000fe9d6 c100
.org 0xfe9d8
	subs r1, r1, r0	@ 000fe9d8 091a
.org 0xfe9da
	lsls r1, r1, #3	@ 000fe9da c900
.org 0xfe9dc
	ldrb r0, [r6, #19]	@ 000fe9dc f07c
.org 0xfe9de
	adds r1, r1, r0	@ 000fe9de 0918
.org 0xfe9e0
	lsls r1, r1, #24	@ 000fe9e0 0906
.org 0xfe9e2
	lsrs r1, r1, #24	@ 000fe9e2 090e
.org 0xfe9e4
	movs r2, #128	@ 000fe9e4 8022
.org 0xfe9e6
	lsls r2, r2, #1	@ 000fe9e6 5200
.org 0xfe9e8
	mov r0, sp	@ 000fe9e8 6846
.org 0xfe9ea
	bl 0xe1b14	@ 000fe9ea e3f793f8
.org 0xfe9ee
	adds r0, r6, #0	@ 000fe9ee 301c
.org 0xfe9f0
	adds r0, #84	@ 000fe9f0 5430
.org 0xfe9f2
	ldrb r2, [r6, #18]	@ 000fe9f2 b27c
.org 0xfe9f4
	lsrs r2, r2, #2	@ 000fe9f4 9208
.org 0xfe9f6
	lsls r1, r2, #3	@ 000fe9f6 d100
.org 0xfe9f8
	subs r1, r1, r2	@ 000fe9f8 891a
.org 0xfe9fa
	lsls r1, r1, #2	@ 000fe9fa 8900
.org 0xfe9fc
	ldr r2, [pc, #92]	@ 000fe9fc 174a
.org 0xfe9fe
	adds r1, r1, r2	@ 000fe9fe 8918
.org 0xfea00
	ldrb r2, [r6, #10]	@ 000fea00 b27a
.org 0xfea02
	movs r3, #16	@ 000fea02 1023
.org 0xfea04
	ands r3, r2	@ 000fea04 1340
.org 0xfea06
	lsls r3, r3, #24	@ 000fea06 1b06
.org 0xfea08
	lsrs r3, r3, #24	@ 000fea08 1b0e
.org 0xfea0a
	movs r2, #0	@ 000fea0a 0022
.org 0xfea0c
	bl 0xd4c8c	@ 000fea0c d6f73ef9
.org 0xfea10
	movs r0, #166	@ 000fea10 a620
.org 0xfea12
	bl 0x2b10	@ 000fea12 04f77df8
.org 0xfea16
	ldrb r0, [r6, #18]	@ 000fea16 b07c
.org 0xfea18
	adds r0, #1	@ 000fea18 0130
.org 0xfea1a
	strb r0, [r6, #18]	@ 000fea1a b074
.org 0xfea1c
	lsls r0, r0, #24	@ 000fea1c 0006
.org 0xfea1e
	lsrs r0, r0, #24	@ 000fea1e 000e
.org 0xfea20
	cmp r0, #16	@ 000fea20 1028
.org 0xfea22
	bls.n 0xfea36	@ 000fea22 08d9
.org 0xfea24
	ldr r1, [pc, #56]	@ 000fea24 0e49
.org 0xfea26
	ldrb r0, [r6, #9]	@ 000fea26 707a
.org 0xfea28
	lsls r0, r0, #2	@ 000fea28 8000
.org 0xfea2a
	adds r0, r0, r1	@ 000fea2a 4018
.org 0xfea2c
	movs r1, #4	@ 000fea2c 0421
.org 0xfea2e
	str r1, [r6, #12]	@ 000fea2e f160
.org 0xfea30
	ldr r0, [r0, #0]	@ 000fea30 0068
.org 0xfea32
	ldr r0, [r0, #16]	@ 000fea32 0069
.org 0xfea34
	str r0, [r6, #20]	@ 000fea34 7061
.org 0xfea36
	add sp, #8	@ 000fea36 02b0
.org 0xfea38
	pop {r4, r5, r6, r7}	@ 000fea38 f0bc
.org 0xfea3a
	pop {r0}	@ 000fea3a 01bc
.org 0xfea3c
	bx r0	@ 000fea3c 0047
