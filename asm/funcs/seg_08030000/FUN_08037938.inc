@ FUN_08037938  entry 0x08037938  size 94
.thumb
.org 0x37938
FUN_08037938:
	push {r4, r5, r6, lr}	@ 00037938 70b5
.org 0x3793a
	adds r5, r0, #0	@ 0003793a 051c
.org 0x3793c
	movs r0, #129	@ 0003793c 8120
.org 0x3793e
	lsls r0, r0, #1	@ 0003793e 4000
.org 0x37940
	adds r6, r5, r0	@ 00037940 2e18
.org 0x37942
	ldrb r0, [r6, #0]	@ 00037942 3078
.org 0x37944
	cmp r0, #0	@ 00037944 0028
.org 0x37946
	bne.n 0x37962	@ 00037946 0cd1
.org 0x37948
	ldr r1, [pc, #76]	@ 00037948 1349
.org 0x3794a
	adds r2, r5, r1	@ 0003794a 6a18
.org 0x3794c
	ldrb r0, [r2, #0]	@ 0003794c 1078
.org 0x3794e
	movs r1, #65	@ 0003794e 4121
.org 0x37950
	negs r1, r1	@ 00037950 4942
.org 0x37952
	ands r1, r0	@ 00037952 0140
.org 0x37954
	strb r1, [r2, #0]	@ 00037954 1170
.org 0x37956
	adds r0, r5, #0	@ 00037956 281c
.org 0x37958
	bl 0x3a2b8	@ 00037958 02f0aefc
.org 0x3795c
	ldrb r0, [r6, #0]	@ 0003795c 3078
.org 0x3795e
	adds r0, #1	@ 0003795e 0130
.org 0x37960
	strb r0, [r6, #0]	@ 00037960 3070
.org 0x37962
	movs r4, #176	@ 00037962 b024
.org 0x37964
	lsls r4, r4, #6	@ 00037964 a401
.org 0x37966
	adds r0, r5, #0	@ 00037966 281c
.org 0x37968
	adds r1, r4, #0	@ 00037968 211c
.org 0x3796a
	bl 0x3a3b0	@ 0003796a 02f021fd
.org 0x3796e
	adds r0, r5, #0	@ 0003796e 281c
.org 0x37970
	adds r1, r4, #0	@ 00037970 211c
.org 0x37972
	bl 0x3a3f0	@ 00037972 02f03dfd
.org 0x37976
	ldr r1, [pc, #32]	@ 00037976 0849
.org 0x37978
	adds r0, r5, r1	@ 00037978 6818
.org 0x3797a
	ldrb r1, [r0, #0]	@ 0003797a 0178
.org 0x3797c
	movs r0, #64	@ 0003797c 4020
.org 0x3797e
	ands r0, r1	@ 0003797e 0840
.org 0x37980
	cmp r0, #0	@ 00037980 0028
.org 0x37982
	beq.n 0x37990	@ 00037982 05d0
.org 0x37984
	ldr r0, [pc, #20]	@ 00037984 0548
.org 0x37986
	adds r2, r5, r0	@ 00037986 2a18
.org 0x37988
	movs r1, #0	@ 00037988 0021
.org 0x3798a
	movs r0, #4	@ 0003798a 0420
.org 0x3798c
	strb r0, [r2, #0]	@ 0003798c 1070
.org 0x3798e
	strb r1, [r6, #0]	@ 0003798e 3170
.org 0x37990
	pop {r4, r5, r6}	@ 00037990 70bc
.org 0x37992
	pop {r0}	@ 00037992 01bc
.org 0x37994
	bx r0	@ 00037994 0047
