@ FUN_0803e8c8  entry 0x0803e8c8  size 184
.thumb
.org 0x3e8c8
FUN_0803e8c8:
	push {r4, r5, r6, lr}	@ 0003e8c8 70b5
.org 0x3e8ca
	adds r4, r0, #0	@ 0003e8ca 041c
.org 0x3e8cc
	adds r0, #180	@ 0003e8cc b430
.org 0x3e8ce
	ldr r6, [r0, #0]	@ 0003e8ce 0668
.org 0x3e8d0
	ldrb r5, [r4, #13]	@ 0003e8d0 657b
.org 0x3e8d2
	cmp r5, #1	@ 0003e8d2 012d
.org 0x3e8d4
	beq.n 0x3e904	@ 0003e8d4 16d0
.org 0x3e8d6
	cmp r5, #1	@ 0003e8d6 012d
.org 0x3e8d8
	bgt.n 0x3e8e0	@ 0003e8d8 02dc
.org 0x3e8da
	cmp r5, #0	@ 0003e8da 002d
.org 0x3e8dc
	beq.n 0x3e8ea	@ 0003e8dc 05d0
.org 0x3e8de
	b.n 0x3e980	@ 0003e8de 4fe0
.org 0x3e8e0
	cmp r5, #2	@ 0003e8e0 022d
.org 0x3e8e2
	beq.n 0x3e948	@ 0003e8e2 31d0
.org 0x3e8e4
	cmp r5, #3	@ 0003e8e4 032d
.org 0x3e8e6
	beq.n 0x3e964	@ 0003e8e6 3dd0
.org 0x3e8e8
	b.n 0x3e980	@ 0003e8e8 4ae0
.org 0x3e8ea
	ldr r1, [pc, #88]	@ 0003e8ea 1649
.org 0x3e8ec
	adds r0, r4, #0	@ 0003e8ec 201c
.org 0x3e8ee
	bl 0x1cf00	@ 0003e8ee def707fb
.org 0x3e8f2
	movs r1, #170	@ 0003e8f2 aa21
.org 0x3e8f4
	lsls r1, r1, #1	@ 0003e8f4 4900
.org 0x3e8f6
	adds r0, r6, r1	@ 0003e8f6 7018
.org 0x3e8f8
	strb r5, [r0, #0]	@ 0003e8f8 0570
.org 0x3e8fa
	movs r0, #2	@ 0003e8fa 0220
.org 0x3e8fc
	strb r0, [r4, #18]	@ 0003e8fc a074
.org 0x3e8fe
	ldrb r0, [r4, #13]	@ 0003e8fe 607b
.org 0x3e900
	adds r0, #1	@ 0003e900 0130
.org 0x3e902
	strb r0, [r4, #13]	@ 0003e902 6073
.org 0x3e904
	ldrb r0, [r4, #18]	@ 0003e904 a07c
.org 0x3e906
	subs r0, #1	@ 0003e906 0138
.org 0x3e908
	strb r0, [r4, #18]	@ 0003e908 a074
.org 0x3e90a
	lsls r0, r0, #24	@ 0003e90a 0006
.org 0x3e90c
	cmp r0, #0	@ 0003e90c 0028
.org 0x3e90e
	bne.n 0x3e980	@ 0003e90e 37d1
.org 0x3e910
	adds r2, r6, #0	@ 0003e910 321c
.org 0x3e912
	adds r2, #230	@ 0003e912 e632
.org 0x3e914
	ldrb r0, [r2, #0]	@ 0003e914 1078
.org 0x3e916
	adds r1, r0, #0	@ 0003e916 011c
.org 0x3e918
	cmp r1, #0	@ 0003e918 0029
.org 0x3e91a
	beq.n 0x3e932	@ 0003e91a 0ad0
.org 0x3e91c
	cmp r1, #255	@ 0003e91c ff29
.org 0x3e91e
	beq.n 0x3e924	@ 0003e91e 01d0
.org 0x3e920
	subs r0, #1	@ 0003e920 0138
.org 0x3e922
	strb r0, [r2, #0]	@ 0003e922 1070
.org 0x3e924
	adds r0, r6, #0	@ 0003e924 301c
.org 0x3e926
	adds r1, r4, #0	@ 0003e926 211c
.org 0x3e928
	bl 0x4385c	@ 0003e928 04f098ff
.org 0x3e92c
	movs r0, #72	@ 0003e92c 4820
.org 0x3e92e
	bl 0x2b10	@ 0003e92e c4f7eff8
.org 0x3e932
	movs r0, #170	@ 0003e932 aa20
.org 0x3e934
	lsls r0, r0, #1	@ 0003e934 4000
.org 0x3e936
	adds r1, r6, r0	@ 0003e936 3118
.org 0x3e938
	movs r0, #1	@ 0003e938 0120
.org 0x3e93a
	strb r0, [r1, #0]	@ 0003e93a 0870
.org 0x3e93c
	movs r0, #32	@ 0003e93c 2020
.org 0x3e93e
	strb r0, [r4, #18]	@ 0003e93e a074
.org 0x3e940
	b.n 0x3e97a	@ 0003e940 1be0
.org 0x3e942
	.byte 0x00	@ 0003e942 data
.org 0x3e943
	.byte 0x00	@ 0003e943 data
.org 0x3e944
	.byte 0x0f,0x81,0x00,0x00	@ 0003e944 data
.org 0x3e948
	ldrb r0, [r4, #18]	@ 0003e948 a07c
.org 0x3e94a
	subs r0, #1	@ 0003e94a 0138
.org 0x3e94c
	strb r0, [r4, #18]	@ 0003e94c a074
.org 0x3e94e
	lsls r0, r0, #24	@ 0003e94e 0006
.org 0x3e950
	cmp r0, #0	@ 0003e950 0028
.org 0x3e952
	bne.n 0x3e980	@ 0003e952 15d1
.org 0x3e954
	movs r0, #170	@ 0003e954 aa20
.org 0x3e956
	lsls r0, r0, #1	@ 0003e956 4000
.org 0x3e958
	adds r1, r6, r0	@ 0003e958 3118
.org 0x3e95a
	movs r0, #3	@ 0003e95a 0320
.org 0x3e95c
	strb r0, [r1, #0]	@ 0003e95c 0870
.org 0x3e95e
	movs r0, #16	@ 0003e95e 1020
.org 0x3e960
	strb r0, [r4, #18]	@ 0003e960 a074
.org 0x3e962
	b.n 0x3e97a	@ 0003e962 0ae0
.org 0x3e964
	ldrb r0, [r4, #18]	@ 0003e964 a07c
.org 0x3e966
	subs r0, #1	@ 0003e966 0138
.org 0x3e968
	strb r0, [r4, #18]	@ 0003e968 a074
.org 0x3e96a
	lsls r0, r0, #24	@ 0003e96a 0006
.org 0x3e96c
	cmp r0, #0	@ 0003e96c 0028
.org 0x3e96e
	bne.n 0x3e980	@ 0003e96e 07d1
.org 0x3e970
	movs r0, #170	@ 0003e970 aa20
.org 0x3e972
	lsls r0, r0, #1	@ 0003e972 4000
.org 0x3e974
	adds r1, r6, r0	@ 0003e974 3118
.org 0x3e976
	movs r0, #4	@ 0003e976 0420
.org 0x3e978
	strb r0, [r1, #0]	@ 0003e978 0870
.org 0x3e97a
	ldrb r0, [r4, #13]	@ 0003e97a 607b
.org 0x3e97c
	adds r0, #1	@ 0003e97c 0130
.org 0x3e97e
	strb r0, [r4, #13]	@ 0003e97e 6073
